#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_E0, _E0_0000) {
    const struct CPU_State initial_cpu = {.pc=0x8adb, .a=0xc5, .x=0xb5, .y=0x4c, .sp=0xb5, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x8adb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8adc, .a=0xc5, .x=0xb5, .y=0x4c, .sp=0xb5, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x8adb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8adb, .value=0xe0, .type=IO_READ},
        {.addr=0x8adc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0001) {
    const struct CPU_State initial_cpu = {.pc=0xfa44, .a=0x91, .x=0x34, .y=0xa2, .sp=0x24, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xfa44, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfa45, .a=0x91, .x=0x34, .y=0xa2, .sp=0x24, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xfa44, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfa44, .value=0xe0, .type=IO_READ},
        {.addr=0xfa45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0002) {
    const struct CPU_State initial_cpu = {.pc=0x007b, .a=0xe2, .x=0x33, .y=0xed, .sp=0xcd, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x007c, .a=0xe2, .x=0x33, .y=0xed, .sp=0xcd, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x007b, .value=0xe0, .type=IO_READ},
        {.addr=0x007c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0003) {
    const struct CPU_State initial_cpu = {.pc=0x4274, .a=0xac, .x=0xd7, .y=0x32, .sp=0xaa, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x4274, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4275, .a=0xac, .x=0xd7, .y=0x32, .sp=0xaa, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x4274, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4274, .value=0xe0, .type=IO_READ},
        {.addr=0x4275, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0004) {
    const struct CPU_State initial_cpu = {.pc=0xc45b, .a=0xce, .x=0xe2, .y=0x8c, .sp=0x26, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xc45b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc45c, .a=0xce, .x=0xe2, .y=0x8c, .sp=0x26, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xc45b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc45b, .value=0xe0, .type=IO_READ},
        {.addr=0xc45c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0005) {
    const struct CPU_State initial_cpu = {.pc=0xa015, .a=0x6d, .x=0x2e, .y=0x2c, .sp=0x22, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xa015, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa016, .a=0x6d, .x=0x2e, .y=0x2c, .sp=0x22, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xa015, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa015, .value=0xe0, .type=IO_READ},
        {.addr=0xa016, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0006) {
    const struct CPU_State initial_cpu = {.pc=0xceaa, .a=0x55, .x=0xc3, .y=0xef, .sp=0x60, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xceaa, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xceab, .a=0x55, .x=0xc3, .y=0xef, .sp=0x60, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xceaa, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xceaa, .value=0xe0, .type=IO_READ},
        {.addr=0xceab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0007) {
    const struct CPU_State initial_cpu = {.pc=0x49b7, .a=0x72, .x=0xb5, .y=0xe6, .sp=0xa9, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x49b7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x49b8, .a=0x72, .x=0xb5, .y=0xe6, .sp=0xa9, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x49b7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x49b7, .value=0xe0, .type=IO_READ},
        {.addr=0x49b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0008) {
    const struct CPU_State initial_cpu = {.pc=0x5ee7, .a=0x21, .x=0xfd, .y=0x6a, .sp=0x6f, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x5ee7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5ee8, .a=0x21, .x=0xfd, .y=0x6a, .sp=0x6f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x5ee7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5ee7, .value=0xe0, .type=IO_READ},
        {.addr=0x5ee8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0009) {
    const struct CPU_State initial_cpu = {.pc=0xdb74, .a=0xf2, .x=0xc6, .y=0x4d, .sp=0x6f, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xdb74, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xdb75, .a=0xf2, .x=0xc6, .y=0x4d, .sp=0x6f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xdb74, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdb74, .value=0xe0, .type=IO_READ},
        {.addr=0xdb75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_000A) {
    const struct CPU_State initial_cpu = {.pc=0x836e, .a=0xad, .x=0xea, .y=0xb3, .sp=0xb0, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x836e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x836f, .a=0xad, .x=0xea, .y=0xb3, .sp=0xb0, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x836e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x836e, .value=0xe0, .type=IO_READ},
        {.addr=0x836f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_000B) {
    const struct CPU_State initial_cpu = {.pc=0xabee, .a=0xe4, .x=0xba, .y=0xc7, .sp=0xa8, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xabee, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xabef, .a=0xe4, .x=0xba, .y=0xc7, .sp=0xa8, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xabee, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xabee, .value=0xe0, .type=IO_READ},
        {.addr=0xabef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_000C) {
    const struct CPU_State initial_cpu = {.pc=0x5ff0, .a=0xae, .x=0xee, .y=0x07, .sp=0xd8, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x5ff0, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5ff1, .a=0xae, .x=0xee, .y=0x07, .sp=0xd8, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x5ff0, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5ff0, .value=0xe0, .type=IO_READ},
        {.addr=0x5ff1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_000D) {
    const struct CPU_State initial_cpu = {.pc=0x47c5, .a=0x3c, .x=0x6f, .y=0x21, .sp=0x85, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x47c5, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x47c6, .a=0x3c, .x=0x6f, .y=0x21, .sp=0x85, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x47c5, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x47c5, .value=0xe0, .type=IO_READ},
        {.addr=0x47c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_000E) {
    const struct CPU_State initial_cpu = {.pc=0x612b, .a=0xc7, .x=0x5c, .y=0x25, .sp=0x0a, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x612b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x612c, .a=0xc7, .x=0x5c, .y=0x25, .sp=0x0a, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x612b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x612b, .value=0xe0, .type=IO_READ},
        {.addr=0x612c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_000F) {
    const struct CPU_State initial_cpu = {.pc=0x3b27, .a=0x71, .x=0x26, .y=0xb4, .sp=0x1b, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x3b27, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3b28, .a=0x71, .x=0x26, .y=0xb4, .sp=0x1b, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x3b27, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3b27, .value=0xe0, .type=IO_READ},
        {.addr=0x3b28, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0010) {
    const struct CPU_State initial_cpu = {.pc=0x5dd4, .a=0x07, .x=0x16, .y=0x16, .sp=0xad, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x5dd4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5dd5, .a=0x07, .x=0x16, .y=0x16, .sp=0xad, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x5dd4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5dd4, .value=0xe0, .type=IO_READ},
        {.addr=0x5dd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0011) {
    const struct CPU_State initial_cpu = {.pc=0x3765, .a=0xde, .x=0x6d, .y=0x2d, .sp=0x28, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x3765, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3766, .a=0xde, .x=0x6d, .y=0x2d, .sp=0x28, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x3765, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3765, .value=0xe0, .type=IO_READ},
        {.addr=0x3766, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0012) {
    const struct CPU_State initial_cpu = {.pc=0x0d60, .a=0x4e, .x=0x4b, .y=0x8e, .sp=0x9f, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0d60, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0d61, .a=0x4e, .x=0x4b, .y=0x8e, .sp=0x9f, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0d60, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0d60, .value=0xe0, .type=IO_READ},
        {.addr=0x0d61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0013) {
    const struct CPU_State initial_cpu = {.pc=0x2413, .a=0xdf, .x=0xcf, .y=0x08, .sp=0x22, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x2413, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2414, .a=0xdf, .x=0xcf, .y=0x08, .sp=0x22, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x2413, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2413, .value=0xe0, .type=IO_READ},
        {.addr=0x2414, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0014) {
    const struct CPU_State initial_cpu = {.pc=0xf0f9, .a=0xd9, .x=0x12, .y=0xca, .sp=0x93, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xf0f9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf0fa, .a=0xd9, .x=0x12, .y=0xca, .sp=0x93, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xf0f9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf0f9, .value=0xe0, .type=IO_READ},
        {.addr=0xf0fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0015) {
    const struct CPU_State initial_cpu = {.pc=0xfddd, .a=0x97, .x=0x42, .y=0x17, .sp=0xb3, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xfddd, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfdde, .a=0x97, .x=0x42, .y=0x17, .sp=0xb3, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xfddd, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfddd, .value=0xe0, .type=IO_READ},
        {.addr=0xfdde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0016) {
    const struct CPU_State initial_cpu = {.pc=0x4653, .a=0xc7, .x=0x88, .y=0xb7, .sp=0x69, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x4653, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4654, .a=0xc7, .x=0x88, .y=0xb7, .sp=0x69, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4653, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4653, .value=0xe0, .type=IO_READ},
        {.addr=0x4654, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0017) {
    const struct CPU_State initial_cpu = {.pc=0xf2a9, .a=0x1a, .x=0xa4, .y=0x06, .sp=0x25, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xf2a9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf2aa, .a=0x1a, .x=0xa4, .y=0x06, .sp=0x25, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xf2a9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf2a9, .value=0xe0, .type=IO_READ},
        {.addr=0xf2aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0018) {
    const struct CPU_State initial_cpu = {.pc=0x9976, .a=0xcc, .x=0xa2, .y=0xc7, .sp=0x9c, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x9976, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9977, .a=0xcc, .x=0xa2, .y=0xc7, .sp=0x9c, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9976, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9976, .value=0xe0, .type=IO_READ},
        {.addr=0x9977, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0019) {
    const struct CPU_State initial_cpu = {.pc=0xf471, .a=0x83, .x=0x4c, .y=0x2d, .sp=0x6e, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xf471, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf472, .a=0x83, .x=0x4c, .y=0x2d, .sp=0x6e, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xf471, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf471, .value=0xe0, .type=IO_READ},
        {.addr=0xf472, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_001A) {
    const struct CPU_State initial_cpu = {.pc=0xee9d, .a=0x55, .x=0xce, .y=0x28, .sp=0x8b, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xee9d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xee9e, .a=0x55, .x=0xce, .y=0x28, .sp=0x8b, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xee9d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xee9d, .value=0xe0, .type=IO_READ},
        {.addr=0xee9e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_001B) {
    const struct CPU_State initial_cpu = {.pc=0xc8eb, .a=0xf0, .x=0xc8, .y=0x07, .sp=0xa5, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xc8eb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc8ec, .a=0xf0, .x=0xc8, .y=0x07, .sp=0xa5, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xc8eb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc8eb, .value=0xe0, .type=IO_READ},
        {.addr=0xc8ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_001C) {
    const struct CPU_State initial_cpu = {.pc=0x519c, .a=0x72, .x=0xea, .y=0xd2, .sp=0x9b, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x519c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x519d, .a=0x72, .x=0xea, .y=0xd2, .sp=0x9b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x519c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x519c, .value=0xe0, .type=IO_READ},
        {.addr=0x519d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_001D) {
    const struct CPU_State initial_cpu = {.pc=0x12aa, .a=0x4f, .x=0x43, .y=0x2c, .sp=0xca, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x12aa, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x12ab, .a=0x4f, .x=0x43, .y=0x2c, .sp=0xca, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x12aa, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x12aa, .value=0xe0, .type=IO_READ},
        {.addr=0x12ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_001E) {
    const struct CPU_State initial_cpu = {.pc=0xa1b8, .a=0xf9, .x=0xad, .y=0x21, .sp=0xa3, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xa1b8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa1b9, .a=0xf9, .x=0xad, .y=0x21, .sp=0xa3, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xa1b8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa1b8, .value=0xe0, .type=IO_READ},
        {.addr=0xa1b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_001F) {
    const struct CPU_State initial_cpu = {.pc=0x7809, .a=0x07, .x=0x4c, .y=0x61, .sp=0x29, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x7809, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x780a, .a=0x07, .x=0x4c, .y=0x61, .sp=0x29, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x7809, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7809, .value=0xe0, .type=IO_READ},
        {.addr=0x780a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0020) {
    const struct CPU_State initial_cpu = {.pc=0xab90, .a=0xb1, .x=0x05, .y=0x26, .sp=0x80, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xab90, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xab91, .a=0xb1, .x=0x05, .y=0x26, .sp=0x80, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xab90, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xab90, .value=0xe0, .type=IO_READ},
        {.addr=0xab91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0021) {
    const struct CPU_State initial_cpu = {.pc=0x7d22, .a=0xff, .x=0xe7, .y=0x72, .sp=0xf1, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x7d22, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7d23, .a=0xff, .x=0xe7, .y=0x72, .sp=0xf1, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x7d22, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7d22, .value=0xe0, .type=IO_READ},
        {.addr=0x7d23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0022) {
    const struct CPU_State initial_cpu = {.pc=0xc669, .a=0x04, .x=0xdb, .y=0xf3, .sp=0x0e, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xc669, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc66a, .a=0x04, .x=0xdb, .y=0xf3, .sp=0x0e, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xc669, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc669, .value=0xe0, .type=IO_READ},
        {.addr=0xc66a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0023) {
    const struct CPU_State initial_cpu = {.pc=0x1c34, .a=0x6a, .x=0xf9, .y=0xa0, .sp=0x71, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x1c34, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1c35, .a=0x6a, .x=0xf9, .y=0xa0, .sp=0x71, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x1c34, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1c34, .value=0xe0, .type=IO_READ},
        {.addr=0x1c35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0024) {
    const struct CPU_State initial_cpu = {.pc=0x295b, .a=0x12, .x=0xcd, .y=0xd3, .sp=0xd3, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x295b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x295c, .a=0x12, .x=0xcd, .y=0xd3, .sp=0xd3, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x295b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x295b, .value=0xe0, .type=IO_READ},
        {.addr=0x295c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0025) {
    const struct CPU_State initial_cpu = {.pc=0xa59a, .a=0x1e, .x=0xd6, .y=0x3d, .sp=0x30, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xa59a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa59b, .a=0x1e, .x=0xd6, .y=0x3d, .sp=0x30, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xa59a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa59a, .value=0xe0, .type=IO_READ},
        {.addr=0xa59b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0026) {
    const struct CPU_State initial_cpu = {.pc=0x69a7, .a=0xb3, .x=0xa7, .y=0x7b, .sp=0xcd, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x69a7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x69a8, .a=0xb3, .x=0xa7, .y=0x7b, .sp=0xcd, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x69a7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x69a7, .value=0xe0, .type=IO_READ},
        {.addr=0x69a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0027) {
    const struct CPU_State initial_cpu = {.pc=0x76cd, .a=0x76, .x=0x9a, .y=0xe2, .sp=0xa4, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x76cd, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x76ce, .a=0x76, .x=0x9a, .y=0xe2, .sp=0xa4, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x76cd, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x76cd, .value=0xe0, .type=IO_READ},
        {.addr=0x76ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0028) {
    const struct CPU_State initial_cpu = {.pc=0x4c6b, .a=0x8b, .x=0x8e, .y=0xc8, .sp=0x57, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x4c6b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4c6c, .a=0x8b, .x=0x8e, .y=0xc8, .sp=0x57, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x4c6b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4c6b, .value=0xe0, .type=IO_READ},
        {.addr=0x4c6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0029) {
    const struct CPU_State initial_cpu = {.pc=0xdedc, .a=0xce, .x=0x3e, .y=0x0d, .sp=0xf8, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xdedc, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xdedd, .a=0xce, .x=0x3e, .y=0x0d, .sp=0xf8, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xdedc, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdedc, .value=0xe0, .type=IO_READ},
        {.addr=0xdedd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_002A) {
    const struct CPU_State initial_cpu = {.pc=0x92a7, .a=0x6d, .x=0x47, .y=0xdb, .sp=0x73, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x92a7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x92a8, .a=0x6d, .x=0x47, .y=0xdb, .sp=0x73, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x92a7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x92a7, .value=0xe0, .type=IO_READ},
        {.addr=0x92a8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_002B) {
    const struct CPU_State initial_cpu = {.pc=0x632b, .a=0xdb, .x=0xe1, .y=0x5f, .sp=0xee, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x632b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x632c, .a=0xdb, .x=0xe1, .y=0x5f, .sp=0xee, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x632b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x632b, .value=0xe0, .type=IO_READ},
        {.addr=0x632c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_002C) {
    const struct CPU_State initial_cpu = {.pc=0x8a1e, .a=0xa6, .x=0x89, .y=0xfe, .sp=0x62, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x8a1e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8a1f, .a=0xa6, .x=0x89, .y=0xfe, .sp=0x62, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x8a1e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8a1e, .value=0xe0, .type=IO_READ},
        {.addr=0x8a1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_002D) {
    const struct CPU_State initial_cpu = {.pc=0x1c88, .a=0x92, .x=0xe4, .y=0x1a, .sp=0x0f, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x1c88, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1c89, .a=0x92, .x=0xe4, .y=0x1a, .sp=0x0f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x1c88, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1c88, .value=0xe0, .type=IO_READ},
        {.addr=0x1c89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_002E) {
    const struct CPU_State initial_cpu = {.pc=0x345d, .a=0xc9, .x=0x91, .y=0x2b, .sp=0xdd, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x345d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x345e, .a=0xc9, .x=0x91, .y=0x2b, .sp=0xdd, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x345d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x345d, .value=0xe0, .type=IO_READ},
        {.addr=0x345e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_002F) {
    const struct CPU_State initial_cpu = {.pc=0xe25b, .a=0x38, .x=0x6b, .y=0xf5, .sp=0xe4, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xe25b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe25c, .a=0x38, .x=0x6b, .y=0xf5, .sp=0xe4, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xe25b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe25b, .value=0xe0, .type=IO_READ},
        {.addr=0xe25c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0030) {
    const struct CPU_State initial_cpu = {.pc=0xca67, .a=0x49, .x=0x59, .y=0x43, .sp=0x04, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xca67, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xca68, .a=0x49, .x=0x59, .y=0x43, .sp=0x04, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xca67, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xca67, .value=0xe0, .type=IO_READ},
        {.addr=0xca68, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0031) {
    const struct CPU_State initial_cpu = {.pc=0x0803, .a=0xff, .x=0xe0, .y=0xf2, .sp=0x12, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0803, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0804, .a=0xff, .x=0xe0, .y=0xf2, .sp=0x12, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0803, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0803, .value=0xe0, .type=IO_READ},
        {.addr=0x0804, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0032) {
    const struct CPU_State initial_cpu = {.pc=0xa389, .a=0x0f, .x=0xee, .y=0x66, .sp=0x0a, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xa389, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa38a, .a=0x0f, .x=0xee, .y=0x66, .sp=0x0a, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xa389, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa389, .value=0xe0, .type=IO_READ},
        {.addr=0xa38a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0033) {
    const struct CPU_State initial_cpu = {.pc=0xcbe5, .a=0x6f, .x=0xd9, .y=0x98, .sp=0xf1, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xcbe5, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcbe6, .a=0x6f, .x=0xd9, .y=0x98, .sp=0xf1, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xcbe5, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcbe5, .value=0xe0, .type=IO_READ},
        {.addr=0xcbe6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0034) {
    const struct CPU_State initial_cpu = {.pc=0x3153, .a=0x9d, .x=0x73, .y=0x7f, .sp=0xea, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x3153, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3154, .a=0x9d, .x=0x73, .y=0x7f, .sp=0xea, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x3153, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3153, .value=0xe0, .type=IO_READ},
        {.addr=0x3154, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0035) {
    const struct CPU_State initial_cpu = {.pc=0x6b72, .a=0x29, .x=0x80, .y=0x1f, .sp=0x58, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x6b72, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6b73, .a=0x29, .x=0x80, .y=0x1f, .sp=0x58, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x6b72, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6b72, .value=0xe0, .type=IO_READ},
        {.addr=0x6b73, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0036) {
    const struct CPU_State initial_cpu = {.pc=0x085d, .a=0x9e, .x=0x57, .y=0x61, .sp=0xb2, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x085d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x085e, .a=0x9e, .x=0x57, .y=0x61, .sp=0xb2, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x085d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x085d, .value=0xe0, .type=IO_READ},
        {.addr=0x085e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0037) {
    const struct CPU_State initial_cpu = {.pc=0xdf1e, .a=0x72, .x=0x93, .y=0xb7, .sp=0x95, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xdf1e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xdf1f, .a=0x72, .x=0x93, .y=0xb7, .sp=0x95, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xdf1e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdf1e, .value=0xe0, .type=IO_READ},
        {.addr=0xdf1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0038) {
    const struct CPU_State initial_cpu = {.pc=0xd704, .a=0xd8, .x=0x7e, .y=0xb4, .sp=0x89, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xd704, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd705, .a=0xd8, .x=0x7e, .y=0xb4, .sp=0x89, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xd704, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd704, .value=0xe0, .type=IO_READ},
        {.addr=0xd705, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0039) {
    const struct CPU_State initial_cpu = {.pc=0xe76f, .a=0xe3, .x=0x12, .y=0x14, .sp=0xac, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xe76f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe770, .a=0xe3, .x=0x12, .y=0x14, .sp=0xac, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xe76f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe76f, .value=0xe0, .type=IO_READ},
        {.addr=0xe770, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_003A) {
    const struct CPU_State initial_cpu = {.pc=0x1304, .a=0x07, .x=0x65, .y=0xd3, .sp=0x41, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x1304, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1305, .a=0x07, .x=0x65, .y=0xd3, .sp=0x41, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x1304, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1304, .value=0xe0, .type=IO_READ},
        {.addr=0x1305, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_003B) {
    const struct CPU_State initial_cpu = {.pc=0xb482, .a=0x55, .x=0x33, .y=0x2c, .sp=0x9b, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xb482, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb483, .a=0x55, .x=0x33, .y=0x2c, .sp=0x9b, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xb482, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb482, .value=0xe0, .type=IO_READ},
        {.addr=0xb483, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_003C) {
    const struct CPU_State initial_cpu = {.pc=0xd938, .a=0x17, .x=0xc6, .y=0x55, .sp=0xf7, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xd938, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd939, .a=0x17, .x=0xc6, .y=0x55, .sp=0xf7, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xd938, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd938, .value=0xe0, .type=IO_READ},
        {.addr=0xd939, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_003D) {
    const struct CPU_State initial_cpu = {.pc=0x4985, .a=0x75, .x=0x0b, .y=0xd3, .sp=0x12, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x4985, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4986, .a=0x75, .x=0x0b, .y=0xd3, .sp=0x12, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x4985, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4985, .value=0xe0, .type=IO_READ},
        {.addr=0x4986, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_003E) {
    const struct CPU_State initial_cpu = {.pc=0x0189, .a=0x6e, .x=0x6e, .y=0x00, .sp=0xb5, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x018a, .a=0x6e, .x=0x6e, .y=0x00, .sp=0xb5, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0189, .value=0xe0, .type=IO_READ},
        {.addr=0x018a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_003F) {
    const struct CPU_State initial_cpu = {.pc=0xf6b7, .a=0xce, .x=0xd4, .y=0xc6, .sp=0xfe, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xf6b7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf6b8, .a=0xce, .x=0xd4, .y=0xc6, .sp=0xfe, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xf6b7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf6b7, .value=0xe0, .type=IO_READ},
        {.addr=0xf6b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0040) {
    const struct CPU_State initial_cpu = {.pc=0x6a7f, .a=0x55, .x=0x98, .y=0x86, .sp=0xa6, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x6a7f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6a80, .a=0x55, .x=0x98, .y=0x86, .sp=0xa6, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x6a7f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6a7f, .value=0xe0, .type=IO_READ},
        {.addr=0x6a80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0041) {
    const struct CPU_State initial_cpu = {.pc=0x6b9f, .a=0xa0, .x=0xe0, .y=0xfc, .sp=0x10, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x6b9f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6ba0, .a=0xa0, .x=0xe0, .y=0xfc, .sp=0x10, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x6b9f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6b9f, .value=0xe0, .type=IO_READ},
        {.addr=0x6ba0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0042) {
    const struct CPU_State initial_cpu = {.pc=0x7dc5, .a=0xf9, .x=0xb8, .y=0xe4, .sp=0xdb, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x7dc5, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7dc6, .a=0xf9, .x=0xb8, .y=0xe4, .sp=0xdb, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x7dc5, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7dc5, .value=0xe0, .type=IO_READ},
        {.addr=0x7dc6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0043) {
    const struct CPU_State initial_cpu = {.pc=0x6b00, .a=0xcc, .x=0xb1, .y=0x9c, .sp=0x99, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x6b00, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6b01, .a=0xcc, .x=0xb1, .y=0x9c, .sp=0x99, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x6b00, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6b00, .value=0xe0, .type=IO_READ},
        {.addr=0x6b01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0044) {
    const struct CPU_State initial_cpu = {.pc=0xcb9b, .a=0x2d, .x=0x1b, .y=0xe6, .sp=0xe2, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xcb9b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcb9c, .a=0x2d, .x=0x1b, .y=0xe6, .sp=0xe2, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xcb9b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcb9b, .value=0xe0, .type=IO_READ},
        {.addr=0xcb9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0045) {
    const struct CPU_State initial_cpu = {.pc=0x21ba, .a=0x96, .x=0xd2, .y=0xa2, .sp=0x79, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x21ba, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x21bb, .a=0x96, .x=0xd2, .y=0xa2, .sp=0x79, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x21ba, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x21ba, .value=0xe0, .type=IO_READ},
        {.addr=0x21bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0046) {
    const struct CPU_State initial_cpu = {.pc=0xb988, .a=0xa5, .x=0x2d, .y=0xb2, .sp=0x16, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xb988, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb989, .a=0xa5, .x=0x2d, .y=0xb2, .sp=0x16, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xb988, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb988, .value=0xe0, .type=IO_READ},
        {.addr=0xb989, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0047) {
    const struct CPU_State initial_cpu = {.pc=0x2039, .a=0x23, .x=0xb3, .y=0x4f, .sp=0x00, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x2039, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x203a, .a=0x23, .x=0xb3, .y=0x4f, .sp=0x00, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x2039, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2039, .value=0xe0, .type=IO_READ},
        {.addr=0x203a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0048) {
    const struct CPU_State initial_cpu = {.pc=0x5010, .a=0xdd, .x=0x37, .y=0x68, .sp=0x23, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x5010, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5011, .a=0xdd, .x=0x37, .y=0x68, .sp=0x23, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x5010, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5010, .value=0xe0, .type=IO_READ},
        {.addr=0x5011, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0049) {
    const struct CPU_State initial_cpu = {.pc=0xf1cf, .a=0xbb, .x=0x4c, .y=0x7b, .sp=0x62, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xf1cf, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf1d0, .a=0xbb, .x=0x4c, .y=0x7b, .sp=0x62, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xf1cf, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf1cf, .value=0xe0, .type=IO_READ},
        {.addr=0xf1d0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_004A) {
    const struct CPU_State initial_cpu = {.pc=0x5909, .a=0x49, .x=0x8e, .y=0x3f, .sp=0xb3, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x5909, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x590a, .a=0x49, .x=0x8e, .y=0x3f, .sp=0xb3, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x5909, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5909, .value=0xe0, .type=IO_READ},
        {.addr=0x590a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_004B) {
    const struct CPU_State initial_cpu = {.pc=0x21cc, .a=0x1f, .x=0xe9, .y=0xcf, .sp=0xa2, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x21cc, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x21cd, .a=0x1f, .x=0xe9, .y=0xcf, .sp=0xa2, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x21cc, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x21cc, .value=0xe0, .type=IO_READ},
        {.addr=0x21cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_004C) {
    const struct CPU_State initial_cpu = {.pc=0xf374, .a=0xc0, .x=0x61, .y=0xc9, .sp=0x89, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xf374, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf375, .a=0xc0, .x=0x61, .y=0xc9, .sp=0x89, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xf374, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf374, .value=0xe0, .type=IO_READ},
        {.addr=0xf375, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_004D) {
    const struct CPU_State initial_cpu = {.pc=0xb732, .a=0x14, .x=0x2c, .y=0x51, .sp=0xd6, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xb732, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb733, .a=0x14, .x=0x2c, .y=0x51, .sp=0xd6, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xb732, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb732, .value=0xe0, .type=IO_READ},
        {.addr=0xb733, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_004E) {
    const struct CPU_State initial_cpu = {.pc=0xfb0e, .a=0xbd, .x=0xc8, .y=0xd4, .sp=0xdf, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xfb0e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfb0f, .a=0xbd, .x=0xc8, .y=0xd4, .sp=0xdf, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xfb0e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfb0e, .value=0xe0, .type=IO_READ},
        {.addr=0xfb0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_004F) {
    const struct CPU_State initial_cpu = {.pc=0xda88, .a=0xd9, .x=0x7e, .y=0xf4, .sp=0x41, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xda88, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xda89, .a=0xd9, .x=0x7e, .y=0xf4, .sp=0x41, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xda88, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xda88, .value=0xe0, .type=IO_READ},
        {.addr=0xda89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0050) {
    const struct CPU_State initial_cpu = {.pc=0x349f, .a=0xd0, .x=0x33, .y=0xae, .sp=0x28, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x349f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x34a0, .a=0xd0, .x=0x33, .y=0xae, .sp=0x28, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x349f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x349f, .value=0xe0, .type=IO_READ},
        {.addr=0x34a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0051) {
    const struct CPU_State initial_cpu = {.pc=0x6947, .a=0xfb, .x=0xf0, .y=0xd3, .sp=0x39, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x6947, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6948, .a=0xfb, .x=0xf0, .y=0xd3, .sp=0x39, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x6947, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6947, .value=0xe0, .type=IO_READ},
        {.addr=0x6948, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0052) {
    const struct CPU_State initial_cpu = {.pc=0x3510, .a=0xc1, .x=0xd9, .y=0xdd, .sp=0x27, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x3510, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3511, .a=0xc1, .x=0xd9, .y=0xdd, .sp=0x27, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x3510, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3510, .value=0xe0, .type=IO_READ},
        {.addr=0x3511, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0053) {
    const struct CPU_State initial_cpu = {.pc=0xee84, .a=0x02, .x=0x21, .y=0x7c, .sp=0x1c, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xee84, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xee85, .a=0x02, .x=0x21, .y=0x7c, .sp=0x1c, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xee84, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xee84, .value=0xe0, .type=IO_READ},
        {.addr=0xee85, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0054) {
    const struct CPU_State initial_cpu = {.pc=0xd47b, .a=0xe6, .x=0x5f, .y=0x4b, .sp=0x02, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xd47b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd47c, .a=0xe6, .x=0x5f, .y=0x4b, .sp=0x02, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xd47b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd47b, .value=0xe0, .type=IO_READ},
        {.addr=0xd47c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0055) {
    const struct CPU_State initial_cpu = {.pc=0xae3f, .a=0x94, .x=0x6b, .y=0x24, .sp=0xf1, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xae3f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xae40, .a=0x94, .x=0x6b, .y=0x24, .sp=0xf1, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xae3f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xae3f, .value=0xe0, .type=IO_READ},
        {.addr=0xae40, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0056) {
    const struct CPU_State initial_cpu = {.pc=0xcfdd, .a=0x0f, .x=0xe2, .y=0x1e, .sp=0x6b, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xcfdd, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcfde, .a=0x0f, .x=0xe2, .y=0x1e, .sp=0x6b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xcfdd, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcfdd, .value=0xe0, .type=IO_READ},
        {.addr=0xcfde, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0057) {
    const struct CPU_State initial_cpu = {.pc=0xbc1e, .a=0xc6, .x=0xc2, .y=0x05, .sp=0x7a, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xbc1e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xbc1f, .a=0xc6, .x=0xc2, .y=0x05, .sp=0x7a, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xbc1e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xbc1e, .value=0xe0, .type=IO_READ},
        {.addr=0xbc1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0058) {
    const struct CPU_State initial_cpu = {.pc=0xd777, .a=0x05, .x=0xa8, .y=0x4e, .sp=0xb5, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xd777, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd778, .a=0x05, .x=0xa8, .y=0x4e, .sp=0xb5, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xd777, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd777, .value=0xe0, .type=IO_READ},
        {.addr=0xd778, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0059) {
    const struct CPU_State initial_cpu = {.pc=0xbe55, .a=0x45, .x=0x74, .y=0x17, .sp=0x39, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xbe55, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xbe56, .a=0x45, .x=0x74, .y=0x17, .sp=0x39, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xbe55, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xbe55, .value=0xe0, .type=IO_READ},
        {.addr=0xbe56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_005A) {
    const struct CPU_State initial_cpu = {.pc=0x7ceb, .a=0xab, .x=0xf7, .y=0xca, .sp=0xfc, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x7ceb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7cec, .a=0xab, .x=0xf7, .y=0xca, .sp=0xfc, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x7ceb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7ceb, .value=0xe0, .type=IO_READ},
        {.addr=0x7cec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_005B) {
    const struct CPU_State initial_cpu = {.pc=0x2a58, .a=0x96, .x=0x20, .y=0xc7, .sp=0xc9, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x2a58, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2a59, .a=0x96, .x=0x20, .y=0xc7, .sp=0xc9, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x2a58, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2a58, .value=0xe0, .type=IO_READ},
        {.addr=0x2a59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_005C) {
    const struct CPU_State initial_cpu = {.pc=0x7e7f, .a=0x09, .x=0x57, .y=0xf3, .sp=0x85, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x7e7f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7e80, .a=0x09, .x=0x57, .y=0xf3, .sp=0x85, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x7e7f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7e7f, .value=0xe0, .type=IO_READ},
        {.addr=0x7e80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_005D) {
    const struct CPU_State initial_cpu = {.pc=0x2b5a, .a=0xa0, .x=0x12, .y=0x39, .sp=0x77, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x2b5a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2b5b, .a=0xa0, .x=0x12, .y=0x39, .sp=0x77, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x2b5a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2b5a, .value=0xe0, .type=IO_READ},
        {.addr=0x2b5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_005E) {
    const struct CPU_State initial_cpu = {.pc=0x3abb, .a=0xce, .x=0xb6, .y=0x55, .sp=0x96, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x3abb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3abc, .a=0xce, .x=0xb6, .y=0x55, .sp=0x96, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x3abb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3abb, .value=0xe0, .type=IO_READ},
        {.addr=0x3abc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_005F) {
    const struct CPU_State initial_cpu = {.pc=0xb40d, .a=0x25, .x=0xf3, .y=0x04, .sp=0xe8, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xb40d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb40e, .a=0x25, .x=0xf3, .y=0x04, .sp=0xe8, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xb40d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb40d, .value=0xe0, .type=IO_READ},
        {.addr=0xb40e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0060) {
    const struct CPU_State initial_cpu = {.pc=0x535a, .a=0x2c, .x=0x24, .y=0x57, .sp=0x2c, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x535a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x535b, .a=0x2c, .x=0x24, .y=0x57, .sp=0x2c, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x535a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x535a, .value=0xe0, .type=IO_READ},
        {.addr=0x535b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0061) {
    const struct CPU_State initial_cpu = {.pc=0x4298, .a=0x86, .x=0x6e, .y=0x73, .sp=0x50, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x4298, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4299, .a=0x86, .x=0x6e, .y=0x73, .sp=0x50, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x4298, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4298, .value=0xe0, .type=IO_READ},
        {.addr=0x4299, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0062) {
    const struct CPU_State initial_cpu = {.pc=0x2feb, .a=0x06, .x=0xfe, .y=0x54, .sp=0x57, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x2feb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2fec, .a=0x06, .x=0xfe, .y=0x54, .sp=0x57, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x2feb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2feb, .value=0xe0, .type=IO_READ},
        {.addr=0x2fec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0063) {
    const struct CPU_State initial_cpu = {.pc=0x5f1a, .a=0x53, .x=0x11, .y=0x6a, .sp=0xda, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x5f1a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5f1b, .a=0x53, .x=0x11, .y=0x6a, .sp=0xda, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x5f1a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5f1a, .value=0xe0, .type=IO_READ},
        {.addr=0x5f1b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0064) {
    const struct CPU_State initial_cpu = {.pc=0x5351, .a=0x3d, .x=0x21, .y=0x6c, .sp=0x30, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x5351, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5352, .a=0x3d, .x=0x21, .y=0x6c, .sp=0x30, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x5351, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5351, .value=0xe0, .type=IO_READ},
        {.addr=0x5352, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0065) {
    const struct CPU_State initial_cpu = {.pc=0x7484, .a=0x3d, .x=0xbb, .y=0x9b, .sp=0xa5, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x7484, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7485, .a=0x3d, .x=0xbb, .y=0x9b, .sp=0xa5, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x7484, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7484, .value=0xe0, .type=IO_READ},
        {.addr=0x7485, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0066) {
    const struct CPU_State initial_cpu = {.pc=0x0b9e, .a=0xe3, .x=0xb6, .y=0x30, .sp=0x43, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0b9e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0b9f, .a=0xe3, .x=0xb6, .y=0x30, .sp=0x43, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0b9e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0b9e, .value=0xe0, .type=IO_READ},
        {.addr=0x0b9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0067) {
    const struct CPU_State initial_cpu = {.pc=0xf10a, .a=0xd6, .x=0xb0, .y=0x62, .sp=0x2e, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xf10a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf10b, .a=0xd6, .x=0xb0, .y=0x62, .sp=0x2e, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xf10a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf10a, .value=0xe0, .type=IO_READ},
        {.addr=0xf10b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0068) {
    const struct CPU_State initial_cpu = {.pc=0x40d0, .a=0xbc, .x=0xf7, .y=0xe6, .sp=0xf7, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x40d0, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x40d1, .a=0xbc, .x=0xf7, .y=0xe6, .sp=0xf7, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x40d0, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x40d0, .value=0xe0, .type=IO_READ},
        {.addr=0x40d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0069) {
    const struct CPU_State initial_cpu = {.pc=0x04a0, .a=0xcc, .x=0xcb, .y=0x9e, .sp=0x23, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x04a0, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x04a1, .a=0xcc, .x=0xcb, .y=0x9e, .sp=0x23, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x04a0, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x04a0, .value=0xe0, .type=IO_READ},
        {.addr=0x04a1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_006A) {
    const struct CPU_State initial_cpu = {.pc=0xdf34, .a=0x88, .x=0xd1, .y=0x2a, .sp=0xb5, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xdf34, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xdf35, .a=0x88, .x=0xd1, .y=0x2a, .sp=0xb5, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xdf34, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdf34, .value=0xe0, .type=IO_READ},
        {.addr=0xdf35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_006B) {
    const struct CPU_State initial_cpu = {.pc=0xa795, .a=0x35, .x=0x1e, .y=0x3f, .sp=0x0a, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xa795, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa796, .a=0x35, .x=0x1e, .y=0x3f, .sp=0x0a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xa795, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa795, .value=0xe0, .type=IO_READ},
        {.addr=0xa796, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_006C) {
    const struct CPU_State initial_cpu = {.pc=0xad92, .a=0xf9, .x=0x17, .y=0x79, .sp=0x7d, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xad92, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xad93, .a=0xf9, .x=0x17, .y=0x79, .sp=0x7d, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xad92, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xad92, .value=0xe0, .type=IO_READ},
        {.addr=0xad93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_006D) {
    const struct CPU_State initial_cpu = {.pc=0x373e, .a=0x4d, .x=0x60, .y=0xf8, .sp=0x50, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x373e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x373f, .a=0x4d, .x=0x60, .y=0xf8, .sp=0x50, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x373e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x373e, .value=0xe0, .type=IO_READ},
        {.addr=0x373f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_006E) {
    const struct CPU_State initial_cpu = {.pc=0x61d1, .a=0x3d, .x=0xfd, .y=0x43, .sp=0x15, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x61d1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x61d2, .a=0x3d, .x=0xfd, .y=0x43, .sp=0x15, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x61d1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x61d1, .value=0xe0, .type=IO_READ},
        {.addr=0x61d2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_006F) {
    const struct CPU_State initial_cpu = {.pc=0xb5e2, .a=0xa2, .x=0xc5, .y=0xcc, .sp=0x64, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xb5e2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb5e3, .a=0xa2, .x=0xc5, .y=0xcc, .sp=0x64, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xb5e2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb5e2, .value=0xe0, .type=IO_READ},
        {.addr=0xb5e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0070) {
    const struct CPU_State initial_cpu = {.pc=0x55ea, .a=0xc9, .x=0x02, .y=0xa2, .sp=0x93, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x55ea, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x55eb, .a=0xc9, .x=0x02, .y=0xa2, .sp=0x93, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x55ea, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x55ea, .value=0xe0, .type=IO_READ},
        {.addr=0x55eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0071) {
    const struct CPU_State initial_cpu = {.pc=0xf7d3, .a=0x4d, .x=0x60, .y=0xdb, .sp=0x2c, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xf7d3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf7d4, .a=0x4d, .x=0x60, .y=0xdb, .sp=0x2c, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xf7d3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf7d3, .value=0xe0, .type=IO_READ},
        {.addr=0xf7d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0072) {
    const struct CPU_State initial_cpu = {.pc=0x9a97, .a=0x0b, .x=0x8d, .y=0xbe, .sp=0x38, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x9a97, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9a98, .a=0x0b, .x=0x8d, .y=0xbe, .sp=0x38, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x9a97, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9a97, .value=0xe0, .type=IO_READ},
        {.addr=0x9a98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0073) {
    const struct CPU_State initial_cpu = {.pc=0x6eaf, .a=0x25, .x=0xf3, .y=0xea, .sp=0xe2, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x6eaf, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6eb0, .a=0x25, .x=0xf3, .y=0xea, .sp=0xe2, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x6eaf, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6eaf, .value=0xe0, .type=IO_READ},
        {.addr=0x6eb0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0074) {
    const struct CPU_State initial_cpu = {.pc=0xc754, .a=0x8e, .x=0xd0, .y=0x9c, .sp=0xc6, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xc754, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc755, .a=0x8e, .x=0xd0, .y=0x9c, .sp=0xc6, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xc754, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc754, .value=0xe0, .type=IO_READ},
        {.addr=0xc755, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0075) {
    const struct CPU_State initial_cpu = {.pc=0xb2e9, .a=0xc6, .x=0x7a, .y=0x41, .sp=0x02, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xb2e9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb2ea, .a=0xc6, .x=0x7a, .y=0x41, .sp=0x02, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xb2e9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb2e9, .value=0xe0, .type=IO_READ},
        {.addr=0xb2ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0076) {
    const struct CPU_State initial_cpu = {.pc=0x6851, .a=0xaf, .x=0x16, .y=0xa0, .sp=0x58, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x6851, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6852, .a=0xaf, .x=0x16, .y=0xa0, .sp=0x58, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x6851, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6851, .value=0xe0, .type=IO_READ},
        {.addr=0x6852, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0077) {
    const struct CPU_State initial_cpu = {.pc=0x63a9, .a=0xc2, .x=0xb3, .y=0x65, .sp=0x78, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x63a9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x63aa, .a=0xc2, .x=0xb3, .y=0x65, .sp=0x78, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x63a9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x63a9, .value=0xe0, .type=IO_READ},
        {.addr=0x63aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0078) {
    const struct CPU_State initial_cpu = {.pc=0x6597, .a=0xf7, .x=0x38, .y=0x32, .sp=0xcc, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x6597, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6598, .a=0xf7, .x=0x38, .y=0x32, .sp=0xcc, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x6597, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6597, .value=0xe0, .type=IO_READ},
        {.addr=0x6598, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0079) {
    const struct CPU_State initial_cpu = {.pc=0x52da, .a=0x03, .x=0x0a, .y=0x17, .sp=0x82, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x52da, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x52db, .a=0x03, .x=0x0a, .y=0x17, .sp=0x82, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x52da, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x52da, .value=0xe0, .type=IO_READ},
        {.addr=0x52db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_007A) {
    const struct CPU_State initial_cpu = {.pc=0x2ddf, .a=0x5d, .x=0x15, .y=0x84, .sp=0xa4, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x2ddf, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2de0, .a=0x5d, .x=0x15, .y=0x84, .sp=0xa4, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x2ddf, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2ddf, .value=0xe0, .type=IO_READ},
        {.addr=0x2de0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_007B) {
    const struct CPU_State initial_cpu = {.pc=0xd9c0, .a=0x66, .x=0x8b, .y=0x3c, .sp=0x2c, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xd9c0, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd9c1, .a=0x66, .x=0x8b, .y=0x3c, .sp=0x2c, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xd9c0, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd9c0, .value=0xe0, .type=IO_READ},
        {.addr=0xd9c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_007C) {
    const struct CPU_State initial_cpu = {.pc=0x59c5, .a=0x95, .x=0x2f, .y=0x56, .sp=0xad, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x59c5, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x59c6, .a=0x95, .x=0x2f, .y=0x56, .sp=0xad, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x59c5, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x59c5, .value=0xe0, .type=IO_READ},
        {.addr=0x59c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_007D) {
    const struct CPU_State initial_cpu = {.pc=0xc976, .a=0xdc, .x=0xbb, .y=0x79, .sp=0xd0, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xc976, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc977, .a=0xdc, .x=0xbb, .y=0x79, .sp=0xd0, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xc976, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc976, .value=0xe0, .type=IO_READ},
        {.addr=0xc977, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_007E) {
    const struct CPU_State initial_cpu = {.pc=0x7235, .a=0xba, .x=0x7e, .y=0xfa, .sp=0x1d, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x7235, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7236, .a=0xba, .x=0x7e, .y=0xfa, .sp=0x1d, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x7235, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7235, .value=0xe0, .type=IO_READ},
        {.addr=0x7236, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_007F) {
    const struct CPU_State initial_cpu = {.pc=0x6886, .a=0x06, .x=0x51, .y=0x4d, .sp=0xbc, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x6886, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6887, .a=0x06, .x=0x51, .y=0x4d, .sp=0xbc, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x6886, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6886, .value=0xe0, .type=IO_READ},
        {.addr=0x6887, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0080) {
    const struct CPU_State initial_cpu = {.pc=0x3888, .a=0x92, .x=0x47, .y=0x1d, .sp=0x58, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x3888, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3889, .a=0x92, .x=0x47, .y=0x1d, .sp=0x58, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x3888, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3888, .value=0xe0, .type=IO_READ},
        {.addr=0x3889, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0081) {
    const struct CPU_State initial_cpu = {.pc=0xdb00, .a=0x5a, .x=0x37, .y=0x25, .sp=0x87, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xdb00, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xdb01, .a=0x5a, .x=0x37, .y=0x25, .sp=0x87, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xdb00, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdb00, .value=0xe0, .type=IO_READ},
        {.addr=0xdb01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0082) {
    const struct CPU_State initial_cpu = {.pc=0x15b1, .a=0x71, .x=0x8c, .y=0xb1, .sp=0xf5, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x15b1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x15b2, .a=0x71, .x=0x8c, .y=0xb1, .sp=0xf5, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x15b1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x15b1, .value=0xe0, .type=IO_READ},
        {.addr=0x15b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0083) {
    const struct CPU_State initial_cpu = {.pc=0xb99f, .a=0x81, .x=0xb8, .y=0x00, .sp=0xf8, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xb99f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb9a0, .a=0x81, .x=0xb8, .y=0x00, .sp=0xf8, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xb99f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb99f, .value=0xe0, .type=IO_READ},
        {.addr=0xb9a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0084) {
    const struct CPU_State initial_cpu = {.pc=0x93ef, .a=0x27, .x=0xfc, .y=0xe0, .sp=0x4d, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x93ef, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x93f0, .a=0x27, .x=0xfc, .y=0xe0, .sp=0x4d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x93ef, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x93ef, .value=0xe0, .type=IO_READ},
        {.addr=0x93f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0085) {
    const struct CPU_State initial_cpu = {.pc=0xbcb6, .a=0x81, .x=0x36, .y=0xc5, .sp=0xb9, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xbcb6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xbcb7, .a=0x81, .x=0x36, .y=0xc5, .sp=0xb9, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xbcb6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xbcb6, .value=0xe0, .type=IO_READ},
        {.addr=0xbcb7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0086) {
    const struct CPU_State initial_cpu = {.pc=0x9b38, .a=0x88, .x=0x4a, .y=0x26, .sp=0xc4, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x9b38, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9b39, .a=0x88, .x=0x4a, .y=0x26, .sp=0xc4, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x9b38, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9b38, .value=0xe0, .type=IO_READ},
        {.addr=0x9b39, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0087) {
    const struct CPU_State initial_cpu = {.pc=0x0281, .a=0xde, .x=0xc8, .y=0xdd, .sp=0xcc, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0281, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0282, .a=0xde, .x=0xc8, .y=0xdd, .sp=0xcc, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x0281, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0281, .value=0xe0, .type=IO_READ},
        {.addr=0x0282, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0088) {
    const struct CPU_State initial_cpu = {.pc=0xfe73, .a=0xa7, .x=0x70, .y=0x98, .sp=0x3e, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xfe73, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfe74, .a=0xa7, .x=0x70, .y=0x98, .sp=0x3e, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xfe73, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfe73, .value=0xe0, .type=IO_READ},
        {.addr=0xfe74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0089) {
    const struct CPU_State initial_cpu = {.pc=0x59e5, .a=0x31, .x=0x4f, .y=0xbe, .sp=0xd6, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x59e5, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x59e6, .a=0x31, .x=0x4f, .y=0xbe, .sp=0xd6, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x59e5, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x59e5, .value=0xe0, .type=IO_READ},
        {.addr=0x59e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_008A) {
    const struct CPU_State initial_cpu = {.pc=0xcdef, .a=0x76, .x=0xbb, .y=0x21, .sp=0xc2, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xcdef, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcdf0, .a=0x76, .x=0xbb, .y=0x21, .sp=0xc2, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xcdef, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcdef, .value=0xe0, .type=IO_READ},
        {.addr=0xcdf0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_008B) {
    const struct CPU_State initial_cpu = {.pc=0x6da4, .a=0x4a, .x=0x01, .y=0xf3, .sp=0x93, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x6da4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6da5, .a=0x4a, .x=0x01, .y=0xf3, .sp=0x93, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x6da4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6da4, .value=0xe0, .type=IO_READ},
        {.addr=0x6da5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_008C) {
    const struct CPU_State initial_cpu = {.pc=0xdd59, .a=0xc6, .x=0xd5, .y=0x75, .sp=0xa9, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xdd59, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xdd5a, .a=0xc6, .x=0xd5, .y=0x75, .sp=0xa9, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xdd59, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdd59, .value=0xe0, .type=IO_READ},
        {.addr=0xdd5a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_008D) {
    const struct CPU_State initial_cpu = {.pc=0xf50a, .a=0x0b, .x=0x26, .y=0xe6, .sp=0x7a, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xf50a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf50b, .a=0x0b, .x=0x26, .y=0xe6, .sp=0x7a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xf50a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf50a, .value=0xe0, .type=IO_READ},
        {.addr=0xf50b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_008E) {
    const struct CPU_State initial_cpu = {.pc=0x36a3, .a=0xd4, .x=0xab, .y=0x54, .sp=0xc4, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x36a3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x36a4, .a=0xd4, .x=0xab, .y=0x54, .sp=0xc4, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x36a3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x36a3, .value=0xe0, .type=IO_READ},
        {.addr=0x36a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_008F) {
    const struct CPU_State initial_cpu = {.pc=0x710f, .a=0x6b, .x=0x8c, .y=0x5d, .sp=0xb9, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x710f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7110, .a=0x6b, .x=0x8c, .y=0x5d, .sp=0xb9, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x710f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x710f, .value=0xe0, .type=IO_READ},
        {.addr=0x7110, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0090) {
    const struct CPU_State initial_cpu = {.pc=0xe596, .a=0x0f, .x=0x45, .y=0xe0, .sp=0xb5, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xe596, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe597, .a=0x0f, .x=0x45, .y=0xe0, .sp=0xb5, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xe596, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe596, .value=0xe0, .type=IO_READ},
        {.addr=0xe597, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0091) {
    const struct CPU_State initial_cpu = {.pc=0x260a, .a=0x0b, .x=0x8d, .y=0xce, .sp=0x4f, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x260a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x260b, .a=0x0b, .x=0x8d, .y=0xce, .sp=0x4f, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x260a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x260a, .value=0xe0, .type=IO_READ},
        {.addr=0x260b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0092) {
    const struct CPU_State initial_cpu = {.pc=0x9af0, .a=0x77, .x=0x3c, .y=0xfd, .sp=0x0c, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x9af0, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9af1, .a=0x77, .x=0x3c, .y=0xfd, .sp=0x0c, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x9af0, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9af0, .value=0xe0, .type=IO_READ},
        {.addr=0x9af1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0093) {
    const struct CPU_State initial_cpu = {.pc=0x015b, .a=0x68, .x=0x29, .y=0x01, .sp=0x60, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x015c, .a=0x68, .x=0x29, .y=0x01, .sp=0x60, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x015b, .value=0xe0, .type=IO_READ},
        {.addr=0x015c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0094) {
    const struct CPU_State initial_cpu = {.pc=0x6966, .a=0x53, .x=0x10, .y=0xf4, .sp=0xfe, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x6966, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6967, .a=0x53, .x=0x10, .y=0xf4, .sp=0xfe, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x6966, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6966, .value=0xe0, .type=IO_READ},
        {.addr=0x6967, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0095) {
    const struct CPU_State initial_cpu = {.pc=0x9d53, .a=0xd1, .x=0x60, .y=0x68, .sp=0x66, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x9d53, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9d54, .a=0xd1, .x=0x60, .y=0x68, .sp=0x66, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x9d53, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9d53, .value=0xe0, .type=IO_READ},
        {.addr=0x9d54, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0096) {
    const struct CPU_State initial_cpu = {.pc=0xe4ea, .a=0xc9, .x=0xf9, .y=0x42, .sp=0x52, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xe4ea, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe4eb, .a=0xc9, .x=0xf9, .y=0x42, .sp=0x52, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xe4ea, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe4ea, .value=0xe0, .type=IO_READ},
        {.addr=0xe4eb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0097) {
    const struct CPU_State initial_cpu = {.pc=0x6e58, .a=0x3b, .x=0x65, .y=0x43, .sp=0x59, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x6e58, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6e59, .a=0x3b, .x=0x65, .y=0x43, .sp=0x59, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x6e58, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6e58, .value=0xe0, .type=IO_READ},
        {.addr=0x6e59, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0098) {
    const struct CPU_State initial_cpu = {.pc=0x66e9, .a=0xdd, .x=0xb1, .y=0x9d, .sp=0x9d, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x66e9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x66ea, .a=0xdd, .x=0xb1, .y=0x9d, .sp=0x9d, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x66e9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x66e9, .value=0xe0, .type=IO_READ},
        {.addr=0x66ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0099) {
    const struct CPU_State initial_cpu = {.pc=0x9892, .a=0x49, .x=0x49, .y=0xf9, .sp=0x04, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x9892, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9893, .a=0x49, .x=0x49, .y=0xf9, .sp=0x04, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x9892, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9892, .value=0xe0, .type=IO_READ},
        {.addr=0x9893, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_009A) {
    const struct CPU_State initial_cpu = {.pc=0x65eb, .a=0x4e, .x=0xd1, .y=0x68, .sp=0x42, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x65eb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x65ec, .a=0x4e, .x=0xd1, .y=0x68, .sp=0x42, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x65eb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x65eb, .value=0xe0, .type=IO_READ},
        {.addr=0x65ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_009B) {
    const struct CPU_State initial_cpu = {.pc=0x981c, .a=0x38, .x=0x13, .y=0x44, .sp=0x46, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x981c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x981d, .a=0x38, .x=0x13, .y=0x44, .sp=0x46, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x981c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x981c, .value=0xe0, .type=IO_READ},
        {.addr=0x981d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_009C) {
    const struct CPU_State initial_cpu = {.pc=0xb9df, .a=0x0b, .x=0x1b, .y=0x07, .sp=0xfd, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xb9df, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb9e0, .a=0x0b, .x=0x1b, .y=0x07, .sp=0xfd, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xb9df, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb9df, .value=0xe0, .type=IO_READ},
        {.addr=0xb9e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_009D) {
    const struct CPU_State initial_cpu = {.pc=0xccbf, .a=0x1c, .x=0x24, .y=0xdd, .sp=0x5e, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xccbf, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xccc0, .a=0x1c, .x=0x24, .y=0xdd, .sp=0x5e, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xccbf, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xccbf, .value=0xe0, .type=IO_READ},
        {.addr=0xccc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_009E) {
    const struct CPU_State initial_cpu = {.pc=0x1324, .a=0x95, .x=0xea, .y=0x66, .sp=0xd7, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x1324, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1325, .a=0x95, .x=0xea, .y=0x66, .sp=0xd7, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x1324, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1324, .value=0xe0, .type=IO_READ},
        {.addr=0x1325, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_009F) {
    const struct CPU_State initial_cpu = {.pc=0x4e5e, .a=0x0d, .x=0xcb, .y=0x83, .sp=0xb2, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x4e5e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4e5f, .a=0x0d, .x=0xcb, .y=0x83, .sp=0xb2, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x4e5e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4e5e, .value=0xe0, .type=IO_READ},
        {.addr=0x4e5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xd6ce, .a=0x5c, .x=0x7a, .y=0xef, .sp=0x22, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xd6ce, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd6cf, .a=0x5c, .x=0x7a, .y=0xef, .sp=0x22, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xd6ce, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd6ce, .value=0xe0, .type=IO_READ},
        {.addr=0xd6cf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x5318, .a=0x58, .x=0x6c, .y=0x9e, .sp=0xdb, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x5318, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5319, .a=0x58, .x=0x6c, .y=0x9e, .sp=0xdb, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x5318, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5318, .value=0xe0, .type=IO_READ},
        {.addr=0x5319, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xa451, .a=0x75, .x=0x81, .y=0x4e, .sp=0xab, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xa451, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa452, .a=0x75, .x=0x81, .y=0x4e, .sp=0xab, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xa451, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa451, .value=0xe0, .type=IO_READ},
        {.addr=0xa452, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00A3) {
    const struct CPU_State initial_cpu = {.pc=0xf4d4, .a=0x72, .x=0x0c, .y=0x42, .sp=0x3f, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xf4d4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf4d5, .a=0x72, .x=0x0c, .y=0x42, .sp=0x3f, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xf4d4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf4d4, .value=0xe0, .type=IO_READ},
        {.addr=0xf4d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xa224, .a=0xb9, .x=0x96, .y=0x0b, .sp=0x23, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xa224, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa225, .a=0xb9, .x=0x96, .y=0x0b, .sp=0x23, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xa224, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa224, .value=0xe0, .type=IO_READ},
        {.addr=0xa225, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00A5) {
    const struct CPU_State initial_cpu = {.pc=0xe660, .a=0x89, .x=0x79, .y=0xec, .sp=0xf3, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xe660, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe661, .a=0x89, .x=0x79, .y=0xec, .sp=0xf3, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xe660, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe660, .value=0xe0, .type=IO_READ},
        {.addr=0xe661, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x6103, .a=0x16, .x=0xd7, .y=0x00, .sp=0xa3, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x6103, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6104, .a=0x16, .x=0xd7, .y=0x00, .sp=0xa3, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x6103, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6103, .value=0xe0, .type=IO_READ},
        {.addr=0x6104, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x21f0, .a=0x39, .x=0xb4, .y=0xeb, .sp=0x32, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x21f0, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x21f1, .a=0x39, .x=0xb4, .y=0xeb, .sp=0x32, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x21f0, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x21f0, .value=0xe0, .type=IO_READ},
        {.addr=0x21f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x7f11, .a=0x4a, .x=0xfe, .y=0xb1, .sp=0x88, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x7f11, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7f12, .a=0x4a, .x=0xfe, .y=0xb1, .sp=0x88, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x7f11, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7f11, .value=0xe0, .type=IO_READ},
        {.addr=0x7f12, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x13f8, .a=0x12, .x=0x90, .y=0x5d, .sp=0x56, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x13f8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x13f9, .a=0x12, .x=0x90, .y=0x5d, .sp=0x56, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x13f8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x13f8, .value=0xe0, .type=IO_READ},
        {.addr=0x13f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x2d8b, .a=0x80, .x=0x00, .y=0xb3, .sp=0xd5, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x2d8b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2d8c, .a=0x80, .x=0x00, .y=0xb3, .sp=0xd5, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x2d8b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2d8b, .value=0xe0, .type=IO_READ},
        {.addr=0x2d8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00AB) {
    const struct CPU_State initial_cpu = {.pc=0xd634, .a=0xad, .x=0xff, .y=0x0e, .sp=0xb8, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xd634, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd635, .a=0xad, .x=0xff, .y=0x0e, .sp=0xb8, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xd634, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd634, .value=0xe0, .type=IO_READ},
        {.addr=0xd635, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xcdbb, .a=0x47, .x=0x55, .y=0x69, .sp=0x56, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xcdbb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcdbc, .a=0x47, .x=0x55, .y=0x69, .sp=0x56, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xcdbb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcdbb, .value=0xe0, .type=IO_READ},
        {.addr=0xcdbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x6b11, .a=0x18, .x=0x59, .y=0x4a, .sp=0xd8, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x6b11, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6b12, .a=0x18, .x=0x59, .y=0x4a, .sp=0xd8, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x6b11, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6b11, .value=0xe0, .type=IO_READ},
        {.addr=0x6b12, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00AE) {
    const struct CPU_State initial_cpu = {.pc=0x9127, .a=0x2a, .x=0x87, .y=0x5f, .sp=0x55, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x9127, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9128, .a=0x2a, .x=0x87, .y=0x5f, .sp=0x55, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x9127, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9127, .value=0xe0, .type=IO_READ},
        {.addr=0x9128, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xe593, .a=0x23, .x=0x62, .y=0x60, .sp=0xbb, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0xe593, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe594, .a=0x23, .x=0x62, .y=0x60, .sp=0xbb, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe593, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe593, .value=0xe0, .type=IO_READ},
        {.addr=0xe594, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x95ff, .a=0xde, .x=0x8a, .y=0xb1, .sp=0x42, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x95ff, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9600, .a=0xde, .x=0x8a, .y=0xb1, .sp=0x42, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x95ff, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x95ff, .value=0xe0, .type=IO_READ},
        {.addr=0x9600, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x9705, .a=0xda, .x=0xa8, .y=0x46, .sp=0x6d, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x9705, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9706, .a=0xda, .x=0xa8, .y=0x46, .sp=0x6d, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x9705, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9705, .value=0xe0, .type=IO_READ},
        {.addr=0x9706, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xd99c, .a=0x6b, .x=0x63, .y=0x05, .sp=0x04, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xd99c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd99d, .a=0x6b, .x=0x63, .y=0x05, .sp=0x04, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xd99c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd99c, .value=0xe0, .type=IO_READ},
        {.addr=0xd99d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x9ac7, .a=0x85, .x=0x06, .y=0xbc, .sp=0xf1, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x9ac7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9ac8, .a=0x85, .x=0x06, .y=0xbc, .sp=0xf1, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x9ac7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9ac7, .value=0xe0, .type=IO_READ},
        {.addr=0x9ac8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xeb44, .a=0x31, .x=0x2f, .y=0x86, .sp=0xa2, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xeb44, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xeb45, .a=0x31, .x=0x2f, .y=0x86, .sp=0xa2, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xeb44, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xeb44, .value=0xe0, .type=IO_READ},
        {.addr=0xeb45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x0c75, .a=0x37, .x=0x6a, .y=0xd0, .sp=0xe9, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0c75, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0c76, .a=0x37, .x=0x6a, .y=0xd0, .sp=0xe9, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0c75, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0c75, .value=0xe0, .type=IO_READ},
        {.addr=0x0c76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xdca5, .a=0x61, .x=0x17, .y=0x48, .sp=0x93, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xdca5, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xdca6, .a=0x61, .x=0x17, .y=0x48, .sp=0x93, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xdca5, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdca5, .value=0xe0, .type=IO_READ},
        {.addr=0xdca6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x78e3, .a=0x02, .x=0xf3, .y=0x1f, .sp=0x46, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x78e3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x78e4, .a=0x02, .x=0xf3, .y=0x1f, .sp=0x46, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x78e3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x78e3, .value=0xe0, .type=IO_READ},
        {.addr=0x78e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x857f, .a=0x4b, .x=0x52, .y=0x7a, .sp=0x3b, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x857f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8580, .a=0x4b, .x=0x52, .y=0x7a, .sp=0x3b, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x857f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x857f, .value=0xe0, .type=IO_READ},
        {.addr=0x8580, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xcb1f, .a=0x1c, .x=0xdc, .y=0x67, .sp=0xc3, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xcb1f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcb20, .a=0x1c, .x=0xdc, .y=0x67, .sp=0xc3, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xcb1f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcb1f, .value=0xe0, .type=IO_READ},
        {.addr=0xcb20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xe2be, .a=0x96, .x=0xcf, .y=0x88, .sp=0x84, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xe2be, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe2bf, .a=0x96, .x=0xcf, .y=0x88, .sp=0x84, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xe2be, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe2be, .value=0xe0, .type=IO_READ},
        {.addr=0xe2bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x95f8, .a=0x3e, .x=0xdf, .y=0x64, .sp=0xb6, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x95f8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x95f9, .a=0x3e, .x=0xdf, .y=0x64, .sp=0xb6, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x95f8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x95f8, .value=0xe0, .type=IO_READ},
        {.addr=0x95f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x86e2, .a=0x41, .x=0x33, .y=0xdc, .sp=0x72, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x86e2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x86e3, .a=0x41, .x=0x33, .y=0xdc, .sp=0x72, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x86e2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x86e2, .value=0xe0, .type=IO_READ},
        {.addr=0x86e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xd912, .a=0x8a, .x=0x53, .y=0x15, .sp=0x86, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xd912, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd913, .a=0x8a, .x=0x53, .y=0x15, .sp=0x86, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xd912, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd912, .value=0xe0, .type=IO_READ},
        {.addr=0xd913, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x43a1, .a=0xd5, .x=0xc1, .y=0xe9, .sp=0xe0, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x43a1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x43a2, .a=0xd5, .x=0xc1, .y=0xe9, .sp=0xe0, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x43a1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x43a1, .value=0xe0, .type=IO_READ},
        {.addr=0x43a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x43b8, .a=0x7a, .x=0x5b, .y=0x98, .sp=0x17, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x43b8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x43b9, .a=0x7a, .x=0x5b, .y=0x98, .sp=0x17, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x43b8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x43b8, .value=0xe0, .type=IO_READ},
        {.addr=0x43b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x5542, .a=0x0b, .x=0xdd, .y=0x1a, .sp=0x99, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x5542, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5543, .a=0x0b, .x=0xdd, .y=0x1a, .sp=0x99, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x5542, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5542, .value=0xe0, .type=IO_READ},
        {.addr=0x5543, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x7026, .a=0xc5, .x=0x23, .y=0x09, .sp=0xa4, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x7026, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7027, .a=0xc5, .x=0x23, .y=0x09, .sp=0xa4, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x7026, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7026, .value=0xe0, .type=IO_READ},
        {.addr=0x7027, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x1d1b, .a=0xe7, .x=0x1d, .y=0xa4, .sp=0xf8, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x1d1b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1d1c, .a=0xe7, .x=0x1d, .y=0xa4, .sp=0xf8, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x1d1b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1d1b, .value=0xe0, .type=IO_READ},
        {.addr=0x1d1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xe04b, .a=0xe9, .x=0x6c, .y=0xc2, .sp=0x07, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xe04b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe04c, .a=0xe9, .x=0x6c, .y=0xc2, .sp=0x07, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xe04b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe04b, .value=0xe0, .type=IO_READ},
        {.addr=0xe04c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x14cd, .a=0x85, .x=0x43, .y=0xc1, .sp=0xc4, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x14cd, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x14ce, .a=0x85, .x=0x43, .y=0xc1, .sp=0xc4, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x14cd, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x14cd, .value=0xe0, .type=IO_READ},
        {.addr=0x14ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x09bb, .a=0x0a, .x=0x6a, .y=0x1d, .sp=0x78, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x09bb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x09bc, .a=0x0a, .x=0x6a, .y=0x1d, .sp=0x78, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x09bb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x09bb, .value=0xe0, .type=IO_READ},
        {.addr=0x09bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x3ee0, .a=0xa0, .x=0xd1, .y=0x31, .sp=0x18, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x3ee0, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3ee1, .a=0xa0, .x=0xd1, .y=0x31, .sp=0x18, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3ee0, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3ee0, .value=0xe0, .type=IO_READ},
        {.addr=0x3ee1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xf4e2, .a=0x1c, .x=0xaa, .y=0x26, .sp=0x38, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xf4e2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf4e3, .a=0x1c, .x=0xaa, .y=0x26, .sp=0x38, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xf4e2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf4e2, .value=0xe0, .type=IO_READ},
        {.addr=0xf4e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x70ec, .a=0xf7, .x=0x40, .y=0x73, .sp=0xbd, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x70ec, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x70ed, .a=0xf7, .x=0x40, .y=0x73, .sp=0xbd, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x70ec, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x70ec, .value=0xe0, .type=IO_READ},
        {.addr=0x70ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00C9) {
    const struct CPU_State initial_cpu = {.pc=0xf2af, .a=0x69, .x=0x28, .y=0xad, .sp=0xfe, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xf2af, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf2b0, .a=0x69, .x=0x28, .y=0xad, .sp=0xfe, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xf2af, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf2af, .value=0xe0, .type=IO_READ},
        {.addr=0xf2b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xdca3, .a=0x93, .x=0x9e, .y=0x85, .sp=0xdd, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xdca3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xdca4, .a=0x93, .x=0x9e, .y=0x85, .sp=0xdd, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xdca3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdca3, .value=0xe0, .type=IO_READ},
        {.addr=0xdca4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x3a8f, .a=0x6e, .x=0x81, .y=0x3a, .sp=0x80, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x3a8f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3a90, .a=0x6e, .x=0x81, .y=0x3a, .sp=0x80, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x3a8f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3a8f, .value=0xe0, .type=IO_READ},
        {.addr=0x3a90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x6275, .a=0x8c, .x=0x66, .y=0x3e, .sp=0xc7, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x6275, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6276, .a=0x8c, .x=0x66, .y=0x3e, .sp=0xc7, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x6275, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6275, .value=0xe0, .type=IO_READ},
        {.addr=0x6276, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x56b9, .a=0xab, .x=0x22, .y=0x6c, .sp=0x9f, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x56b9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x56ba, .a=0xab, .x=0x22, .y=0x6c, .sp=0x9f, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x56b9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x56b9, .value=0xe0, .type=IO_READ},
        {.addr=0x56ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x3a40, .a=0xe7, .x=0x9a, .y=0x2c, .sp=0xda, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x3a40, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3a41, .a=0xe7, .x=0x9a, .y=0x2c, .sp=0xda, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x3a40, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3a40, .value=0xe0, .type=IO_READ},
        {.addr=0x3a41, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x6edd, .a=0x8d, .x=0xe4, .y=0xa9, .sp=0xbd, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x6edd, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6ede, .a=0x8d, .x=0xe4, .y=0xa9, .sp=0xbd, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6edd, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6edd, .value=0xe0, .type=IO_READ},
        {.addr=0x6ede, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x9dcc, .a=0x8d, .x=0x68, .y=0xa9, .sp=0x3c, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x9dcc, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9dcd, .a=0x8d, .x=0x68, .y=0xa9, .sp=0x3c, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x9dcc, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9dcc, .value=0xe0, .type=IO_READ},
        {.addr=0x9dcd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xccf7, .a=0x3e, .x=0x47, .y=0x04, .sp=0x13, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xccf7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xccf8, .a=0x3e, .x=0x47, .y=0x04, .sp=0x13, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xccf7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xccf7, .value=0xe0, .type=IO_READ},
        {.addr=0xccf8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xf75f, .a=0x96, .x=0x53, .y=0x5e, .sp=0xee, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xf75f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf760, .a=0x96, .x=0x53, .y=0x5e, .sp=0xee, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xf75f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf75f, .value=0xe0, .type=IO_READ},
        {.addr=0xf760, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00D3) {
    const struct CPU_State initial_cpu = {.pc=0xc733, .a=0x6c, .x=0x0b, .y=0x63, .sp=0xfd, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xc733, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc734, .a=0x6c, .x=0x0b, .y=0x63, .sp=0xfd, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xc733, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc733, .value=0xe0, .type=IO_READ},
        {.addr=0xc734, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x8a9b, .a=0xb7, .x=0xcd, .y=0x9d, .sp=0x67, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x8a9b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8a9c, .a=0xb7, .x=0xcd, .y=0x9d, .sp=0x67, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x8a9b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8a9b, .value=0xe0, .type=IO_READ},
        {.addr=0x8a9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00D5) {
    const struct CPU_State initial_cpu = {.pc=0x3e46, .a=0x56, .x=0x19, .y=0xee, .sp=0x43, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x3e46, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3e47, .a=0x56, .x=0x19, .y=0xee, .sp=0x43, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x3e46, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3e46, .value=0xe0, .type=IO_READ},
        {.addr=0x3e47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x6b35, .a=0x45, .x=0x96, .y=0x34, .sp=0x0e, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x6b35, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6b36, .a=0x45, .x=0x96, .y=0x34, .sp=0x0e, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x6b35, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6b35, .value=0xe0, .type=IO_READ},
        {.addr=0x6b36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x4992, .a=0x6b, .x=0x2b, .y=0x81, .sp=0x50, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x4992, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4993, .a=0x6b, .x=0x2b, .y=0x81, .sp=0x50, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x4992, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4992, .value=0xe0, .type=IO_READ},
        {.addr=0x4993, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xe874, .a=0x4f, .x=0x37, .y=0x4c, .sp=0xf3, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xe874, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe875, .a=0x4f, .x=0x37, .y=0x4c, .sp=0xf3, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xe874, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe874, .value=0xe0, .type=IO_READ},
        {.addr=0xe875, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xc63d, .a=0xcd, .x=0x3f, .y=0xbe, .sp=0xf7, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xc63d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc63e, .a=0xcd, .x=0x3f, .y=0xbe, .sp=0xf7, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xc63d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc63d, .value=0xe0, .type=IO_READ},
        {.addr=0xc63e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x0094, .a=0x05, .x=0x4b, .y=0x17, .sp=0x11, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0094, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0095, .a=0x05, .x=0x4b, .y=0x17, .sp=0x11, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x0094, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0094, .value=0xe0, .type=IO_READ},
        {.addr=0x0095, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x7393, .a=0x63, .x=0xd0, .y=0x98, .sp=0x35, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x7393, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7394, .a=0x63, .x=0xd0, .y=0x98, .sp=0x35, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x7393, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7393, .value=0xe0, .type=IO_READ},
        {.addr=0x7394, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xb569, .a=0x5e, .x=0x08, .y=0x82, .sp=0x03, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xb569, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb56a, .a=0x5e, .x=0x08, .y=0x82, .sp=0x03, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xb569, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb569, .value=0xe0, .type=IO_READ},
        {.addr=0xb56a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xa100, .a=0x4f, .x=0x2d, .y=0x26, .sp=0xb4, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xa100, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa101, .a=0x4f, .x=0x2d, .y=0x26, .sp=0xb4, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xa100, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa100, .value=0xe0, .type=IO_READ},
        {.addr=0xa101, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x23ae, .a=0x27, .x=0x3e, .y=0xa4, .sp=0xb2, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x23ae, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x23af, .a=0x27, .x=0x3e, .y=0xa4, .sp=0xb2, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x23ae, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x23ae, .value=0xe0, .type=IO_READ},
        {.addr=0x23af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x49bf, .a=0xc5, .x=0x44, .y=0x4f, .sp=0x13, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x49bf, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x49c0, .a=0xc5, .x=0x44, .y=0x4f, .sp=0x13, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x49bf, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x49bf, .value=0xe0, .type=IO_READ},
        {.addr=0x49c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xea26, .a=0xcc, .x=0xe5, .y=0xd0, .sp=0x3c, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xea26, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xea27, .a=0xcc, .x=0xe5, .y=0xd0, .sp=0x3c, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xea26, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xea26, .value=0xe0, .type=IO_READ},
        {.addr=0xea27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x96b4, .a=0xc1, .x=0x5b, .y=0x90, .sp=0xc4, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x96b4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x96b5, .a=0xc1, .x=0x5b, .y=0x90, .sp=0xc4, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x96b4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x96b4, .value=0xe0, .type=IO_READ},
        {.addr=0x96b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00E2) {
    const struct CPU_State initial_cpu = {.pc=0xb156, .a=0x24, .x=0x14, .y=0x75, .sp=0x2f, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xb156, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb157, .a=0x24, .x=0x14, .y=0x75, .sp=0x2f, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xb156, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb156, .value=0xe0, .type=IO_READ},
        {.addr=0xb157, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x2c06, .a=0x5c, .x=0x84, .y=0x21, .sp=0xf8, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x2c06, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2c07, .a=0x5c, .x=0x84, .y=0x21, .sp=0xf8, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x2c06, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2c06, .value=0xe0, .type=IO_READ},
        {.addr=0x2c07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x2640, .a=0x89, .x=0xce, .y=0x36, .sp=0x2b, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x2640, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2641, .a=0x89, .x=0xce, .y=0x36, .sp=0x2b, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x2640, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2640, .value=0xe0, .type=IO_READ},
        {.addr=0x2641, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x78d0, .a=0xfb, .x=0xe9, .y=0xb8, .sp=0x76, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x78d0, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x78d1, .a=0xfb, .x=0xe9, .y=0xb8, .sp=0x76, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x78d0, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x78d0, .value=0xe0, .type=IO_READ},
        {.addr=0x78d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x38b1, .a=0x86, .x=0xb1, .y=0x6d, .sp=0xdf, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x38b1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x38b2, .a=0x86, .x=0xb1, .y=0x6d, .sp=0xdf, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x38b1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x38b1, .value=0xe0, .type=IO_READ},
        {.addr=0x38b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xca75, .a=0x95, .x=0x67, .y=0xdb, .sp=0xbe, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xca75, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xca76, .a=0x95, .x=0x67, .y=0xdb, .sp=0xbe, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xca75, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xca75, .value=0xe0, .type=IO_READ},
        {.addr=0xca76, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x03a5, .a=0xa3, .x=0xef, .y=0x93, .sp=0xa3, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x03a5, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x03a6, .a=0xa3, .x=0xef, .y=0x93, .sp=0xa3, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x03a5, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x03a5, .value=0xe0, .type=IO_READ},
        {.addr=0x03a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xf4db, .a=0xe8, .x=0x5c, .y=0xc5, .sp=0x51, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xf4db, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf4dc, .a=0xe8, .x=0x5c, .y=0xc5, .sp=0x51, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xf4db, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf4db, .value=0xe0, .type=IO_READ},
        {.addr=0xf4dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x4f39, .a=0x85, .x=0x40, .y=0xf4, .sp=0x0e, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x4f39, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4f3a, .a=0x85, .x=0x40, .y=0xf4, .sp=0x0e, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x4f39, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4f39, .value=0xe0, .type=IO_READ},
        {.addr=0x4f3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x5e4c, .a=0x37, .x=0x2b, .y=0xc6, .sp=0xde, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x5e4c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5e4d, .a=0x37, .x=0x2b, .y=0xc6, .sp=0xde, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x5e4c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5e4c, .value=0xe0, .type=IO_READ},
        {.addr=0x5e4d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x7cd4, .a=0xf0, .x=0x17, .y=0x9c, .sp=0x30, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x7cd4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7cd5, .a=0xf0, .x=0x17, .y=0x9c, .sp=0x30, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x7cd4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7cd4, .value=0xe0, .type=IO_READ},
        {.addr=0x7cd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xfe73, .a=0xf9, .x=0x90, .y=0xf8, .sp=0x86, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xfe73, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfe74, .a=0xf9, .x=0x90, .y=0xf8, .sp=0x86, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xfe73, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfe73, .value=0xe0, .type=IO_READ},
        {.addr=0xfe74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xd2c5, .a=0xf2, .x=0x46, .y=0x6d, .sp=0x28, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xd2c5, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd2c6, .a=0xf2, .x=0x46, .y=0x6d, .sp=0x28, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xd2c5, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd2c5, .value=0xe0, .type=IO_READ},
        {.addr=0xd2c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x55d9, .a=0x64, .x=0x7b, .y=0x80, .sp=0x3c, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x55d9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x55da, .a=0x64, .x=0x7b, .y=0x80, .sp=0x3c, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x55d9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x55d9, .value=0xe0, .type=IO_READ},
        {.addr=0x55da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x85ef, .a=0x54, .x=0x11, .y=0x82, .sp=0xc5, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x85ef, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x85f0, .a=0x54, .x=0x11, .y=0x82, .sp=0xc5, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x85ef, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x85ef, .value=0xe0, .type=IO_READ},
        {.addr=0x85f0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x3f34, .a=0x7d, .x=0xc6, .y=0xaa, .sp=0x52, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x3f34, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3f35, .a=0x7d, .x=0xc6, .y=0xaa, .sp=0x52, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x3f34, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3f34, .value=0xe0, .type=IO_READ},
        {.addr=0x3f35, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x1b56, .a=0xcc, .x=0x89, .y=0x81, .sp=0xff, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x1b56, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1b57, .a=0xcc, .x=0x89, .y=0x81, .sp=0xff, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x1b56, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1b56, .value=0xe0, .type=IO_READ},
        {.addr=0x1b57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xe992, .a=0x8f, .x=0xf8, .y=0x90, .sp=0x17, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xe992, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe993, .a=0x8f, .x=0xf8, .y=0x90, .sp=0x17, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xe992, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe992, .value=0xe0, .type=IO_READ},
        {.addr=0xe993, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xc694, .a=0x77, .x=0x68, .y=0xce, .sp=0x8f, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xc694, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc695, .a=0x77, .x=0x68, .y=0xce, .sp=0x8f, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xc694, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc694, .value=0xe0, .type=IO_READ},
        {.addr=0xc695, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x11e6, .a=0xf0, .x=0x92, .y=0x08, .sp=0x9b, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x11e6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x11e7, .a=0xf0, .x=0x92, .y=0x08, .sp=0x9b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x11e6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x11e6, .value=0xe0, .type=IO_READ},
        {.addr=0x11e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x5dc2, .a=0xc9, .x=0x1e, .y=0x56, .sp=0xa1, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x5dc2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5dc3, .a=0xc9, .x=0x1e, .y=0x56, .sp=0xa1, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x5dc2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5dc2, .value=0xe0, .type=IO_READ},
        {.addr=0x5dc3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x50f9, .a=0x7c, .x=0x44, .y=0x32, .sp=0xff, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x50f9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x50fa, .a=0x7c, .x=0x44, .y=0x32, .sp=0xff, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x50f9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x50f9, .value=0xe0, .type=IO_READ},
        {.addr=0x50fa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x1888, .a=0xb9, .x=0xf6, .y=0xaa, .sp=0x77, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x1888, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1889, .a=0xb9, .x=0xf6, .y=0xaa, .sp=0x77, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x1888, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1888, .value=0xe0, .type=IO_READ},
        {.addr=0x1889, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x60ab, .a=0xae, .x=0x11, .y=0x81, .sp=0xc4, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x60ab, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x60ac, .a=0xae, .x=0x11, .y=0x81, .sp=0xc4, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x60ab, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x60ab, .value=0xe0, .type=IO_READ},
        {.addr=0x60ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xa55e, .a=0x83, .x=0xd1, .y=0xbd, .sp=0x7d, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xa55e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa55f, .a=0x83, .x=0xd1, .y=0xbd, .sp=0x7d, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xa55e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa55e, .value=0xe0, .type=IO_READ},
        {.addr=0xa55f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x91b7, .a=0xe0, .x=0x63, .y=0xa8, .sp=0x12, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x91b7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x91b8, .a=0xe0, .x=0x63, .y=0xa8, .sp=0x12, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x91b7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x91b7, .value=0xe0, .type=IO_READ},
        {.addr=0x91b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xf1c7, .a=0x44, .x=0x8c, .y=0x89, .sp=0x95, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xf1c7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf1c8, .a=0x44, .x=0x8c, .y=0x89, .sp=0x95, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xf1c7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf1c7, .value=0xe0, .type=IO_READ},
        {.addr=0xf1c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x34eb, .a=0xa8, .x=0xa1, .y=0xf2, .sp=0x23, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x34eb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x34ec, .a=0xa8, .x=0xa1, .y=0xf2, .sp=0x23, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x34eb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x34eb, .value=0xe0, .type=IO_READ},
        {.addr=0x34ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xffd1, .a=0xe3, .x=0x1b, .y=0x20, .sp=0x92, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xffd1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xffd2, .a=0xe3, .x=0x1b, .y=0x20, .sp=0x92, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xffd1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xffd1, .value=0xe0, .type=IO_READ},
        {.addr=0xffd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xe739, .a=0xda, .x=0x90, .y=0xb7, .sp=0x6e, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xe739, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe73a, .a=0xda, .x=0x90, .y=0xb7, .sp=0x6e, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xe739, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe739, .value=0xe0, .type=IO_READ},
        {.addr=0xe73a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0100) {
    const struct CPU_State initial_cpu = {.pc=0xe1e5, .a=0x2e, .x=0x82, .y=0xa2, .sp=0xd6, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xe1e5, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe1e6, .a=0x2e, .x=0x82, .y=0xa2, .sp=0xd6, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xe1e5, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe1e5, .value=0xe0, .type=IO_READ},
        {.addr=0xe1e6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0101) {
    const struct CPU_State initial_cpu = {.pc=0x43ec, .a=0x56, .x=0x8b, .y=0x8c, .sp=0x9c, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x43ec, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x43ed, .a=0x56, .x=0x8b, .y=0x8c, .sp=0x9c, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x43ec, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x43ec, .value=0xe0, .type=IO_READ},
        {.addr=0x43ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0102) {
    const struct CPU_State initial_cpu = {.pc=0x055b, .a=0x2a, .x=0x1e, .y=0x7a, .sp=0x15, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x055b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x055c, .a=0x2a, .x=0x1e, .y=0x7a, .sp=0x15, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x055b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x055b, .value=0xe0, .type=IO_READ},
        {.addr=0x055c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0103) {
    const struct CPU_State initial_cpu = {.pc=0x2b29, .a=0x4b, .x=0x6d, .y=0x0a, .sp=0xf8, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x2b29, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2b2a, .a=0x4b, .x=0x6d, .y=0x0a, .sp=0xf8, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x2b29, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2b29, .value=0xe0, .type=IO_READ},
        {.addr=0x2b2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0104) {
    const struct CPU_State initial_cpu = {.pc=0xfa2c, .a=0x02, .x=0x3a, .y=0x8d, .sp=0xa2, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xfa2c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfa2d, .a=0x02, .x=0x3a, .y=0x8d, .sp=0xa2, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xfa2c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfa2c, .value=0xe0, .type=IO_READ},
        {.addr=0xfa2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0105) {
    const struct CPU_State initial_cpu = {.pc=0x6401, .a=0xd2, .x=0x80, .y=0xe9, .sp=0x3c, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x6401, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6402, .a=0xd2, .x=0x80, .y=0xe9, .sp=0x3c, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x6401, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6401, .value=0xe0, .type=IO_READ},
        {.addr=0x6402, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0106) {
    const struct CPU_State initial_cpu = {.pc=0x6aff, .a=0xd9, .x=0xd8, .y=0x13, .sp=0x02, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x6aff, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6b00, .a=0xd9, .x=0xd8, .y=0x13, .sp=0x02, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x6aff, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6aff, .value=0xe0, .type=IO_READ},
        {.addr=0x6b00, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0107) {
    const struct CPU_State initial_cpu = {.pc=0x842d, .a=0x25, .x=0x45, .y=0x9a, .sp=0x52, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x842d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x842e, .a=0x25, .x=0x45, .y=0x9a, .sp=0x52, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x842d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x842d, .value=0xe0, .type=IO_READ},
        {.addr=0x842e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0108) {
    const struct CPU_State initial_cpu = {.pc=0xd8ff, .a=0xde, .x=0x36, .y=0xb0, .sp=0x90, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xd8ff, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd900, .a=0xde, .x=0x36, .y=0xb0, .sp=0x90, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xd8ff, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd8ff, .value=0xe0, .type=IO_READ},
        {.addr=0xd900, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0109) {
    const struct CPU_State initial_cpu = {.pc=0x8a63, .a=0xbe, .x=0x77, .y=0x31, .sp=0xd8, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x8a63, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8a64, .a=0xbe, .x=0x77, .y=0x31, .sp=0xd8, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x8a63, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8a63, .value=0xe0, .type=IO_READ},
        {.addr=0x8a64, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_010A) {
    const struct CPU_State initial_cpu = {.pc=0x80c3, .a=0x3a, .x=0x21, .y=0xe2, .sp=0x1a, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x80c3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x80c4, .a=0x3a, .x=0x21, .y=0xe2, .sp=0x1a, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x80c3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x80c3, .value=0xe0, .type=IO_READ},
        {.addr=0x80c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_010B) {
    const struct CPU_State initial_cpu = {.pc=0x94e8, .a=0x36, .x=0x61, .y=0xd2, .sp=0x5d, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x94e8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x94e9, .a=0x36, .x=0x61, .y=0xd2, .sp=0x5d, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x94e8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x94e8, .value=0xe0, .type=IO_READ},
        {.addr=0x94e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_010C) {
    const struct CPU_State initial_cpu = {.pc=0x1d51, .a=0x67, .x=0x04, .y=0x25, .sp=0xdc, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x1d51, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1d52, .a=0x67, .x=0x04, .y=0x25, .sp=0xdc, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x1d51, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1d51, .value=0xe0, .type=IO_READ},
        {.addr=0x1d52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_010D) {
    const struct CPU_State initial_cpu = {.pc=0xfee8, .a=0x92, .x=0xc9, .y=0xd7, .sp=0xb5, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0xfee8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfee9, .a=0x92, .x=0xc9, .y=0xd7, .sp=0xb5, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xfee8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfee8, .value=0xe0, .type=IO_READ},
        {.addr=0xfee9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_010E) {
    const struct CPU_State initial_cpu = {.pc=0x76eb, .a=0x49, .x=0x7c, .y=0xf0, .sp=0xf5, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x76eb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x76ec, .a=0x49, .x=0x7c, .y=0xf0, .sp=0xf5, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x76eb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x76eb, .value=0xe0, .type=IO_READ},
        {.addr=0x76ec, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_010F) {
    const struct CPU_State initial_cpu = {.pc=0x9451, .a=0x10, .x=0x6b, .y=0xb6, .sp=0xd3, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x9451, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9452, .a=0x10, .x=0x6b, .y=0xb6, .sp=0xd3, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x9451, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9451, .value=0xe0, .type=IO_READ},
        {.addr=0x9452, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0110) {
    const struct CPU_State initial_cpu = {.pc=0xf320, .a=0xe9, .x=0xce, .y=0x9a, .sp=0x24, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xf320, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf321, .a=0xe9, .x=0xce, .y=0x9a, .sp=0x24, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xf320, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf320, .value=0xe0, .type=IO_READ},
        {.addr=0xf321, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0111) {
    const struct CPU_State initial_cpu = {.pc=0x3ba9, .a=0x31, .x=0xf1, .y=0x60, .sp=0x5c, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x3ba9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3baa, .a=0x31, .x=0xf1, .y=0x60, .sp=0x5c, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x3ba9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3ba9, .value=0xe0, .type=IO_READ},
        {.addr=0x3baa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0112) {
    const struct CPU_State initial_cpu = {.pc=0x7224, .a=0xd8, .x=0x17, .y=0x44, .sp=0xf1, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x7224, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7225, .a=0xd8, .x=0x17, .y=0x44, .sp=0xf1, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x7224, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7224, .value=0xe0, .type=IO_READ},
        {.addr=0x7225, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0113) {
    const struct CPU_State initial_cpu = {.pc=0xd509, .a=0x56, .x=0xea, .y=0x18, .sp=0x09, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xd509, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd50a, .a=0x56, .x=0xea, .y=0x18, .sp=0x09, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xd509, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd509, .value=0xe0, .type=IO_READ},
        {.addr=0xd50a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0114) {
    const struct CPU_State initial_cpu = {.pc=0x4045, .a=0x31, .x=0x1f, .y=0x4a, .sp=0x78, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x4045, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4046, .a=0x31, .x=0x1f, .y=0x4a, .sp=0x78, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x4045, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4045, .value=0xe0, .type=IO_READ},
        {.addr=0x4046, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0115) {
    const struct CPU_State initial_cpu = {.pc=0xb0c6, .a=0x04, .x=0xd5, .y=0xd4, .sp=0x9b, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xb0c6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb0c7, .a=0x04, .x=0xd5, .y=0xd4, .sp=0x9b, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xb0c6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb0c6, .value=0xe0, .type=IO_READ},
        {.addr=0xb0c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0116) {
    const struct CPU_State initial_cpu = {.pc=0x8e04, .a=0xe7, .x=0xd5, .y=0x20, .sp=0x6f, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x8e04, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8e05, .a=0xe7, .x=0xd5, .y=0x20, .sp=0x6f, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x8e04, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8e04, .value=0xe0, .type=IO_READ},
        {.addr=0x8e05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0117) {
    const struct CPU_State initial_cpu = {.pc=0xdbf0, .a=0x28, .x=0xf4, .y=0xd5, .sp=0x16, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0xdbf0, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xdbf1, .a=0x28, .x=0xf4, .y=0xd5, .sp=0x16, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xdbf0, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdbf0, .value=0xe0, .type=IO_READ},
        {.addr=0xdbf1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0118) {
    const struct CPU_State initial_cpu = {.pc=0x0fbf, .a=0xbc, .x=0x3c, .y=0x24, .sp=0xd7, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0fbf, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0fc0, .a=0xbc, .x=0x3c, .y=0x24, .sp=0xd7, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x0fbf, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0fbf, .value=0xe0, .type=IO_READ},
        {.addr=0x0fc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0119) {
    const struct CPU_State initial_cpu = {.pc=0xd54f, .a=0x40, .x=0x57, .y=0x62, .sp=0xc4, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xd54f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd550, .a=0x40, .x=0x57, .y=0x62, .sp=0xc4, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xd54f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd54f, .value=0xe0, .type=IO_READ},
        {.addr=0xd550, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_011A) {
    const struct CPU_State initial_cpu = {.pc=0x72c0, .a=0x6c, .x=0xcb, .y=0x5e, .sp=0xd4, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x72c0, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x72c1, .a=0x6c, .x=0xcb, .y=0x5e, .sp=0xd4, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x72c0, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x72c0, .value=0xe0, .type=IO_READ},
        {.addr=0x72c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_011B) {
    const struct CPU_State initial_cpu = {.pc=0x4f36, .a=0x98, .x=0x50, .y=0x13, .sp=0x2f, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x4f36, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4f37, .a=0x98, .x=0x50, .y=0x13, .sp=0x2f, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x4f36, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4f36, .value=0xe0, .type=IO_READ},
        {.addr=0x4f37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_011C) {
    const struct CPU_State initial_cpu = {.pc=0xa869, .a=0xac, .x=0x50, .y=0xfd, .sp=0x8b, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xa869, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa86a, .a=0xac, .x=0x50, .y=0xfd, .sp=0x8b, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xa869, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa869, .value=0xe0, .type=IO_READ},
        {.addr=0xa86a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_011D) {
    const struct CPU_State initial_cpu = {.pc=0x900d, .a=0x2f, .x=0x41, .y=0x67, .sp=0xf4, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x900d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x900e, .a=0x2f, .x=0x41, .y=0x67, .sp=0xf4, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x900d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x900d, .value=0xe0, .type=IO_READ},
        {.addr=0x900e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_011E) {
    const struct CPU_State initial_cpu = {.pc=0x599e, .a=0x14, .x=0x45, .y=0x9a, .sp=0x2e, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x599e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x599f, .a=0x14, .x=0x45, .y=0x9a, .sp=0x2e, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x599e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x599e, .value=0xe0, .type=IO_READ},
        {.addr=0x599f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_011F) {
    const struct CPU_State initial_cpu = {.pc=0x3fe0, .a=0x88, .x=0xd9, .y=0xda, .sp=0xdc, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x3fe0, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3fe1, .a=0x88, .x=0xd9, .y=0xda, .sp=0xdc, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x3fe0, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3fe0, .value=0xe0, .type=IO_READ},
        {.addr=0x3fe1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0120) {
    const struct CPU_State initial_cpu = {.pc=0x604e, .a=0xd7, .x=0x89, .y=0x6d, .sp=0x33, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x604e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x604f, .a=0xd7, .x=0x89, .y=0x6d, .sp=0x33, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x604e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x604e, .value=0xe0, .type=IO_READ},
        {.addr=0x604f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0121) {
    const struct CPU_State initial_cpu = {.pc=0xe224, .a=0x7b, .x=0x46, .y=0xae, .sp=0x47, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xe224, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe225, .a=0x7b, .x=0x46, .y=0xae, .sp=0x47, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xe224, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe224, .value=0xe0, .type=IO_READ},
        {.addr=0xe225, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0122) {
    const struct CPU_State initial_cpu = {.pc=0xe2a9, .a=0x66, .x=0x14, .y=0x95, .sp=0xcf, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xe2a9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe2aa, .a=0x66, .x=0x14, .y=0x95, .sp=0xcf, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xe2a9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe2a9, .value=0xe0, .type=IO_READ},
        {.addr=0xe2aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0123) {
    const struct CPU_State initial_cpu = {.pc=0x9a93, .a=0x2a, .x=0xfd, .y=0xc9, .sp=0xba, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x9a93, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9a94, .a=0x2a, .x=0xfd, .y=0xc9, .sp=0xba, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x9a93, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9a93, .value=0xe0, .type=IO_READ},
        {.addr=0x9a94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0124) {
    const struct CPU_State initial_cpu = {.pc=0x1acc, .a=0x4a, .x=0xc0, .y=0x24, .sp=0x29, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x1acc, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1acd, .a=0x4a, .x=0xc0, .y=0x24, .sp=0x29, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x1acc, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1acc, .value=0xe0, .type=IO_READ},
        {.addr=0x1acd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0125) {
    const struct CPU_State initial_cpu = {.pc=0x4eab, .a=0x18, .x=0xa3, .y=0xf8, .sp=0xb4, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x4eab, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4eac, .a=0x18, .x=0xa3, .y=0xf8, .sp=0xb4, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4eab, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4eab, .value=0xe0, .type=IO_READ},
        {.addr=0x4eac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0126) {
    const struct CPU_State initial_cpu = {.pc=0x42c7, .a=0xa2, .x=0x40, .y=0x7a, .sp=0xfd, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x42c7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x42c8, .a=0xa2, .x=0x40, .y=0x7a, .sp=0xfd, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x42c7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x42c7, .value=0xe0, .type=IO_READ},
        {.addr=0x42c8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0127) {
    const struct CPU_State initial_cpu = {.pc=0x6c57, .a=0xe6, .x=0xc5, .y=0xbf, .sp=0xbf, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x6c57, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6c58, .a=0xe6, .x=0xc5, .y=0xbf, .sp=0xbf, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x6c57, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6c57, .value=0xe0, .type=IO_READ},
        {.addr=0x6c58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0128) {
    const struct CPU_State initial_cpu = {.pc=0xcef5, .a=0x8d, .x=0x03, .y=0x95, .sp=0x95, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xcef5, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcef6, .a=0x8d, .x=0x03, .y=0x95, .sp=0x95, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xcef5, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcef5, .value=0xe0, .type=IO_READ},
        {.addr=0xcef6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0129) {
    const struct CPU_State initial_cpu = {.pc=0x9af1, .a=0xa8, .x=0x91, .y=0xeb, .sp=0xab, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x9af1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9af2, .a=0xa8, .x=0x91, .y=0xeb, .sp=0xab, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x9af1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9af1, .value=0xe0, .type=IO_READ},
        {.addr=0x9af2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_012A) {
    const struct CPU_State initial_cpu = {.pc=0xcf33, .a=0x1f, .x=0x1c, .y=0x5b, .sp=0xb0, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xcf33, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcf34, .a=0x1f, .x=0x1c, .y=0x5b, .sp=0xb0, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xcf33, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcf33, .value=0xe0, .type=IO_READ},
        {.addr=0xcf34, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_012B) {
    const struct CPU_State initial_cpu = {.pc=0xaf54, .a=0xf5, .x=0x89, .y=0x6b, .sp=0xeb, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xaf54, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xaf55, .a=0xf5, .x=0x89, .y=0x6b, .sp=0xeb, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xaf54, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xaf54, .value=0xe0, .type=IO_READ},
        {.addr=0xaf55, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_012C) {
    const struct CPU_State initial_cpu = {.pc=0xae4d, .a=0x03, .x=0x82, .y=0x83, .sp=0xc0, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xae4d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xae4e, .a=0x03, .x=0x82, .y=0x83, .sp=0xc0, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xae4d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xae4d, .value=0xe0, .type=IO_READ},
        {.addr=0xae4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_012D) {
    const struct CPU_State initial_cpu = {.pc=0xbd00, .a=0x62, .x=0xb9, .y=0xb4, .sp=0x37, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xbd00, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xbd01, .a=0x62, .x=0xb9, .y=0xb4, .sp=0x37, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xbd00, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xbd00, .value=0xe0, .type=IO_READ},
        {.addr=0xbd01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_012E) {
    const struct CPU_State initial_cpu = {.pc=0x9c0f, .a=0x07, .x=0x35, .y=0x76, .sp=0xd7, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x9c0f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9c10, .a=0x07, .x=0x35, .y=0x76, .sp=0xd7, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x9c0f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9c0f, .value=0xe0, .type=IO_READ},
        {.addr=0x9c10, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_012F) {
    const struct CPU_State initial_cpu = {.pc=0xa2db, .a=0x46, .x=0xeb, .y=0x14, .sp=0x18, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xa2db, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa2dc, .a=0x46, .x=0xeb, .y=0x14, .sp=0x18, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xa2db, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa2db, .value=0xe0, .type=IO_READ},
        {.addr=0xa2dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0130) {
    const struct CPU_State initial_cpu = {.pc=0xdd30, .a=0x7d, .x=0x41, .y=0x8a, .sp=0x6f, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xdd30, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xdd31, .a=0x7d, .x=0x41, .y=0x8a, .sp=0x6f, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xdd30, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdd30, .value=0xe0, .type=IO_READ},
        {.addr=0xdd31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0131) {
    const struct CPU_State initial_cpu = {.pc=0xac95, .a=0x09, .x=0xf0, .y=0xb7, .sp=0x03, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xac95, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xac96, .a=0x09, .x=0xf0, .y=0xb7, .sp=0x03, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xac95, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xac95, .value=0xe0, .type=IO_READ},
        {.addr=0xac96, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0132) {
    const struct CPU_State initial_cpu = {.pc=0x0b81, .a=0x77, .x=0x1c, .y=0x55, .sp=0x57, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0b81, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0b82, .a=0x77, .x=0x1c, .y=0x55, .sp=0x57, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0b81, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0b81, .value=0xe0, .type=IO_READ},
        {.addr=0x0b82, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0133) {
    const struct CPU_State initial_cpu = {.pc=0x5f98, .a=0x61, .x=0x0a, .y=0xeb, .sp=0x39, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x5f98, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5f99, .a=0x61, .x=0x0a, .y=0xeb, .sp=0x39, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x5f98, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5f98, .value=0xe0, .type=IO_READ},
        {.addr=0x5f99, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0134) {
    const struct CPU_State initial_cpu = {.pc=0x1b29, .a=0x93, .x=0x22, .y=0x37, .sp=0x8d, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x1b29, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1b2a, .a=0x93, .x=0x22, .y=0x37, .sp=0x8d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x1b29, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1b29, .value=0xe0, .type=IO_READ},
        {.addr=0x1b2a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0135) {
    const struct CPU_State initial_cpu = {.pc=0xa637, .a=0xf8, .x=0xa3, .y=0xc2, .sp=0xb4, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xa637, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa638, .a=0xf8, .x=0xa3, .y=0xc2, .sp=0xb4, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xa637, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa637, .value=0xe0, .type=IO_READ},
        {.addr=0xa638, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0136) {
    const struct CPU_State initial_cpu = {.pc=0x906c, .a=0x5e, .x=0x58, .y=0x14, .sp=0x82, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x906c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x906d, .a=0x5e, .x=0x58, .y=0x14, .sp=0x82, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x906c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x906c, .value=0xe0, .type=IO_READ},
        {.addr=0x906d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0137) {
    const struct CPU_State initial_cpu = {.pc=0x72df, .a=0xbb, .x=0xc9, .y=0xe2, .sp=0x03, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x72df, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x72e0, .a=0xbb, .x=0xc9, .y=0xe2, .sp=0x03, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x72df, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x72df, .value=0xe0, .type=IO_READ},
        {.addr=0x72e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0138) {
    const struct CPU_State initial_cpu = {.pc=0x3efc, .a=0xde, .x=0x78, .y=0xa2, .sp=0x91, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x3efc, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3efd, .a=0xde, .x=0x78, .y=0xa2, .sp=0x91, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x3efc, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3efc, .value=0xe0, .type=IO_READ},
        {.addr=0x3efd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0139) {
    const struct CPU_State initial_cpu = {.pc=0xb4ad, .a=0x42, .x=0xb4, .y=0x76, .sp=0x0a, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xb4ad, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb4ae, .a=0x42, .x=0xb4, .y=0x76, .sp=0x0a, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xb4ad, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb4ad, .value=0xe0, .type=IO_READ},
        {.addr=0xb4ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_013A) {
    const struct CPU_State initial_cpu = {.pc=0x6adb, .a=0x1b, .x=0xf0, .y=0x32, .sp=0x9f, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x6adb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6adc, .a=0x1b, .x=0xf0, .y=0x32, .sp=0x9f, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x6adb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6adb, .value=0xe0, .type=IO_READ},
        {.addr=0x6adc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_013B) {
    const struct CPU_State initial_cpu = {.pc=0xe616, .a=0xb9, .x=0xf6, .y=0x83, .sp=0x77, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xe616, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe617, .a=0xb9, .x=0xf6, .y=0x83, .sp=0x77, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xe616, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe616, .value=0xe0, .type=IO_READ},
        {.addr=0xe617, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_013C) {
    const struct CPU_State initial_cpu = {.pc=0xb5ca, .a=0xf3, .x=0x23, .y=0xb9, .sp=0xcf, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xb5ca, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb5cb, .a=0xf3, .x=0x23, .y=0xb9, .sp=0xcf, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xb5ca, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb5ca, .value=0xe0, .type=IO_READ},
        {.addr=0xb5cb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_013D) {
    const struct CPU_State initial_cpu = {.pc=0xb28d, .a=0xcc, .x=0xd5, .y=0xa9, .sp=0xa9, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xb28d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb28e, .a=0xcc, .x=0xd5, .y=0xa9, .sp=0xa9, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xb28d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb28d, .value=0xe0, .type=IO_READ},
        {.addr=0xb28e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_013E) {
    const struct CPU_State initial_cpu = {.pc=0xcae7, .a=0x48, .x=0x6f, .y=0x60, .sp=0x3a, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xcae7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcae8, .a=0x48, .x=0x6f, .y=0x60, .sp=0x3a, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xcae7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcae7, .value=0xe0, .type=IO_READ},
        {.addr=0xcae8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_013F) {
    const struct CPU_State initial_cpu = {.pc=0x1d01, .a=0x00, .x=0x66, .y=0x94, .sp=0x85, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x1d01, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1d02, .a=0x00, .x=0x66, .y=0x94, .sp=0x85, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x1d01, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1d01, .value=0xe0, .type=IO_READ},
        {.addr=0x1d02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0140) {
    const struct CPU_State initial_cpu = {.pc=0x242e, .a=0x72, .x=0x01, .y=0xa0, .sp=0xb8, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x242e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x242f, .a=0x72, .x=0x01, .y=0xa0, .sp=0xb8, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x242e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x242e, .value=0xe0, .type=IO_READ},
        {.addr=0x242f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0141) {
    const struct CPU_State initial_cpu = {.pc=0xcebb, .a=0x06, .x=0x4e, .y=0x3e, .sp=0xc4, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xcebb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcebc, .a=0x06, .x=0x4e, .y=0x3e, .sp=0xc4, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xcebb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcebb, .value=0xe0, .type=IO_READ},
        {.addr=0xcebc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0142) {
    const struct CPU_State initial_cpu = {.pc=0x2430, .a=0x07, .x=0x3a, .y=0x82, .sp=0xd5, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x2430, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2431, .a=0x07, .x=0x3a, .y=0x82, .sp=0xd5, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x2430, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2430, .value=0xe0, .type=IO_READ},
        {.addr=0x2431, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0143) {
    const struct CPU_State initial_cpu = {.pc=0x27ac, .a=0x0b, .x=0xd6, .y=0x72, .sp=0xed, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x27ac, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x27ad, .a=0x0b, .x=0xd6, .y=0x72, .sp=0xed, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x27ac, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x27ac, .value=0xe0, .type=IO_READ},
        {.addr=0x27ad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0144) {
    const struct CPU_State initial_cpu = {.pc=0x5e60, .a=0x79, .x=0x91, .y=0xcf, .sp=0x99, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x5e60, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5e61, .a=0x79, .x=0x91, .y=0xcf, .sp=0x99, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x5e60, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5e60, .value=0xe0, .type=IO_READ},
        {.addr=0x5e61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0145) {
    const struct CPU_State initial_cpu = {.pc=0xc2a4, .a=0x8c, .x=0x17, .y=0xb4, .sp=0xf6, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xc2a4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc2a5, .a=0x8c, .x=0x17, .y=0xb4, .sp=0xf6, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xc2a4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc2a4, .value=0xe0, .type=IO_READ},
        {.addr=0xc2a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0146) {
    const struct CPU_State initial_cpu = {.pc=0xec8f, .a=0xc2, .x=0x5d, .y=0xfb, .sp=0x56, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0xec8f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xec90, .a=0xc2, .x=0x5d, .y=0xfb, .sp=0x56, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xec8f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xec8f, .value=0xe0, .type=IO_READ},
        {.addr=0xec90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0147) {
    const struct CPU_State initial_cpu = {.pc=0xa310, .a=0xa0, .x=0xbf, .y=0x8b, .sp=0x49, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xa310, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa311, .a=0xa0, .x=0xbf, .y=0x8b, .sp=0x49, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xa310, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa310, .value=0xe0, .type=IO_READ},
        {.addr=0xa311, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0148) {
    const struct CPU_State initial_cpu = {.pc=0xc92d, .a=0x29, .x=0x0e, .y=0xb3, .sp=0xb8, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xc92d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc92e, .a=0x29, .x=0x0e, .y=0xb3, .sp=0xb8, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xc92d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc92d, .value=0xe0, .type=IO_READ},
        {.addr=0xc92e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0149) {
    const struct CPU_State initial_cpu = {.pc=0x6937, .a=0x3c, .x=0xa4, .y=0xef, .sp=0xf1, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x6937, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6938, .a=0x3c, .x=0xa4, .y=0xef, .sp=0xf1, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x6937, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6937, .value=0xe0, .type=IO_READ},
        {.addr=0x6938, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_014A) {
    const struct CPU_State initial_cpu = {.pc=0x3663, .a=0xfb, .x=0xaa, .y=0x67, .sp=0x01, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x3663, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3664, .a=0xfb, .x=0xaa, .y=0x67, .sp=0x01, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x3663, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3663, .value=0xe0, .type=IO_READ},
        {.addr=0x3664, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_014B) {
    const struct CPU_State initial_cpu = {.pc=0x57d3, .a=0xc7, .x=0xdb, .y=0x3c, .sp=0x01, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x57d3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x57d4, .a=0xc7, .x=0xdb, .y=0x3c, .sp=0x01, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x57d3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x57d3, .value=0xe0, .type=IO_READ},
        {.addr=0x57d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_014C) {
    const struct CPU_State initial_cpu = {.pc=0xa0ed, .a=0x66, .x=0xe3, .y=0x13, .sp=0x56, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xa0ed, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa0ee, .a=0x66, .x=0xe3, .y=0x13, .sp=0x56, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xa0ed, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa0ed, .value=0xe0, .type=IO_READ},
        {.addr=0xa0ee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_014D) {
    const struct CPU_State initial_cpu = {.pc=0x054b, .a=0xf8, .x=0xd6, .y=0x80, .sp=0x86, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x054b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x054c, .a=0xf8, .x=0xd6, .y=0x80, .sp=0x86, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x054b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x054b, .value=0xe0, .type=IO_READ},
        {.addr=0x054c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_014E) {
    const struct CPU_State initial_cpu = {.pc=0xbb91, .a=0xe5, .x=0x78, .y=0x48, .sp=0xed, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xbb91, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xbb92, .a=0xe5, .x=0x78, .y=0x48, .sp=0xed, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xbb91, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xbb91, .value=0xe0, .type=IO_READ},
        {.addr=0xbb92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_014F) {
    const struct CPU_State initial_cpu = {.pc=0x5ec9, .a=0xe5, .x=0x26, .y=0xb3, .sp=0x7c, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x5ec9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5eca, .a=0xe5, .x=0x26, .y=0xb3, .sp=0x7c, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x5ec9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5ec9, .value=0xe0, .type=IO_READ},
        {.addr=0x5eca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0150) {
    const struct CPU_State initial_cpu = {.pc=0x3813, .a=0x6c, .x=0x4e, .y=0x9b, .sp=0x38, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x3813, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3814, .a=0x6c, .x=0x4e, .y=0x9b, .sp=0x38, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x3813, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3813, .value=0xe0, .type=IO_READ},
        {.addr=0x3814, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0151) {
    const struct CPU_State initial_cpu = {.pc=0x7385, .a=0xbb, .x=0x5f, .y=0x02, .sp=0xb0, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x7385, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7386, .a=0xbb, .x=0x5f, .y=0x02, .sp=0xb0, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x7385, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7385, .value=0xe0, .type=IO_READ},
        {.addr=0x7386, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0152) {
    const struct CPU_State initial_cpu = {.pc=0xe56e, .a=0x70, .x=0xdd, .y=0x68, .sp=0xb7, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xe56e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe56f, .a=0x70, .x=0xdd, .y=0x68, .sp=0xb7, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xe56e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe56e, .value=0xe0, .type=IO_READ},
        {.addr=0xe56f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0153) {
    const struct CPU_State initial_cpu = {.pc=0xa78e, .a=0xea, .x=0x42, .y=0xf8, .sp=0x9f, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xa78e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa78f, .a=0xea, .x=0x42, .y=0xf8, .sp=0x9f, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xa78e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa78e, .value=0xe0, .type=IO_READ},
        {.addr=0xa78f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0154) {
    const struct CPU_State initial_cpu = {.pc=0xdfff, .a=0x15, .x=0x76, .y=0x96, .sp=0xa7, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xdfff, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe000, .a=0x15, .x=0x76, .y=0x96, .sp=0xa7, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xdfff, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdfff, .value=0xe0, .type=IO_READ},
        {.addr=0xe000, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0155) {
    const struct CPU_State initial_cpu = {.pc=0x6afd, .a=0x0b, .x=0x4c, .y=0x29, .sp=0x99, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x6afd, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6afe, .a=0x0b, .x=0x4c, .y=0x29, .sp=0x99, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x6afd, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6afd, .value=0xe0, .type=IO_READ},
        {.addr=0x6afe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0156) {
    const struct CPU_State initial_cpu = {.pc=0xed56, .a=0xfb, .x=0xb1, .y=0xbf, .sp=0xd1, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xed56, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xed57, .a=0xfb, .x=0xb1, .y=0xbf, .sp=0xd1, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xed56, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xed56, .value=0xe0, .type=IO_READ},
        {.addr=0xed57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0157) {
    const struct CPU_State initial_cpu = {.pc=0x016a, .a=0xcb, .x=0xa3, .y=0x97, .sp=0xd8, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x016b, .a=0xcb, .x=0xa3, .y=0x97, .sp=0xd8, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x016a, .value=0xe0, .type=IO_READ},
        {.addr=0x016b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0158) {
    const struct CPU_State initial_cpu = {.pc=0x63b7, .a=0x0a, .x=0xe5, .y=0x9b, .sp=0x24, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x63b7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x63b8, .a=0x0a, .x=0xe5, .y=0x9b, .sp=0x24, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x63b7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x63b7, .value=0xe0, .type=IO_READ},
        {.addr=0x63b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0159) {
    const struct CPU_State initial_cpu = {.pc=0x7c14, .a=0xb5, .x=0x6d, .y=0x3a, .sp=0x5e, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x7c14, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7c15, .a=0xb5, .x=0x6d, .y=0x3a, .sp=0x5e, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x7c14, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7c14, .value=0xe0, .type=IO_READ},
        {.addr=0x7c15, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_015A) {
    const struct CPU_State initial_cpu = {.pc=0x0e8c, .a=0xa7, .x=0xb8, .y=0x80, .sp=0x90, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0e8c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0e8d, .a=0xa7, .x=0xb8, .y=0x80, .sp=0x90, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0e8c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0e8c, .value=0xe0, .type=IO_READ},
        {.addr=0x0e8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_015B) {
    const struct CPU_State initial_cpu = {.pc=0xc836, .a=0x13, .x=0x42, .y=0x9f, .sp=0x5f, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xc836, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc837, .a=0x13, .x=0x42, .y=0x9f, .sp=0x5f, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xc836, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc836, .value=0xe0, .type=IO_READ},
        {.addr=0xc837, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_015C) {
    const struct CPU_State initial_cpu = {.pc=0x4e93, .a=0x7a, .x=0xdf, .y=0xc5, .sp=0x66, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x4e93, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4e94, .a=0x7a, .x=0xdf, .y=0xc5, .sp=0x66, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x4e93, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4e93, .value=0xe0, .type=IO_READ},
        {.addr=0x4e94, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_015D) {
    const struct CPU_State initial_cpu = {.pc=0xba19, .a=0x0c, .x=0x9f, .y=0x15, .sp=0x60, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xba19, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xba1a, .a=0x0c, .x=0x9f, .y=0x15, .sp=0x60, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xba19, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xba19, .value=0xe0, .type=IO_READ},
        {.addr=0xba1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_015E) {
    const struct CPU_State initial_cpu = {.pc=0xf6ae, .a=0xb7, .x=0x2e, .y=0x57, .sp=0x42, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xf6ae, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf6af, .a=0xb7, .x=0x2e, .y=0x57, .sp=0x42, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xf6ae, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf6ae, .value=0xe0, .type=IO_READ},
        {.addr=0xf6af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_015F) {
    const struct CPU_State initial_cpu = {.pc=0x3fc1, .a=0xd0, .x=0x2d, .y=0x63, .sp=0x34, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x3fc1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3fc2, .a=0xd0, .x=0x2d, .y=0x63, .sp=0x34, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x3fc1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3fc1, .value=0xe0, .type=IO_READ},
        {.addr=0x3fc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0160) {
    const struct CPU_State initial_cpu = {.pc=0x9781, .a=0xc9, .x=0x7f, .y=0x9f, .sp=0xff, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x9781, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9782, .a=0xc9, .x=0x7f, .y=0x9f, .sp=0xff, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x9781, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9781, .value=0xe0, .type=IO_READ},
        {.addr=0x9782, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0161) {
    const struct CPU_State initial_cpu = {.pc=0x60a9, .a=0x68, .x=0x6a, .y=0x18, .sp=0xc0, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x60a9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x60aa, .a=0x68, .x=0x6a, .y=0x18, .sp=0xc0, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x60a9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x60a9, .value=0xe0, .type=IO_READ},
        {.addr=0x60aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0162) {
    const struct CPU_State initial_cpu = {.pc=0x43f1, .a=0x15, .x=0xe0, .y=0x31, .sp=0xc9, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x43f1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x43f2, .a=0x15, .x=0xe0, .y=0x31, .sp=0xc9, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x43f1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x43f1, .value=0xe0, .type=IO_READ},
        {.addr=0x43f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0163) {
    const struct CPU_State initial_cpu = {.pc=0x0bd9, .a=0x1f, .x=0x27, .y=0xf8, .sp=0xae, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0bd9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0bda, .a=0x1f, .x=0x27, .y=0xf8, .sp=0xae, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x0bd9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0bd9, .value=0xe0, .type=IO_READ},
        {.addr=0x0bda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0164) {
    const struct CPU_State initial_cpu = {.pc=0x06b7, .a=0xbd, .x=0x43, .y=0x26, .sp=0x39, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x06b7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x06b8, .a=0xbd, .x=0x43, .y=0x26, .sp=0x39, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x06b7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x06b7, .value=0xe0, .type=IO_READ},
        {.addr=0x06b8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0165) {
    const struct CPU_State initial_cpu = {.pc=0x6cc1, .a=0x0a, .x=0x43, .y=0x4c, .sp=0xf4, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x6cc1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6cc2, .a=0x0a, .x=0x43, .y=0x4c, .sp=0xf4, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x6cc1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6cc1, .value=0xe0, .type=IO_READ},
        {.addr=0x6cc2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0166) {
    const struct CPU_State initial_cpu = {.pc=0x0c82, .a=0xf8, .x=0xad, .y=0x33, .sp=0x28, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0c82, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0c83, .a=0xf8, .x=0xad, .y=0x33, .sp=0x28, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x0c82, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0c82, .value=0xe0, .type=IO_READ},
        {.addr=0x0c83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0167) {
    const struct CPU_State initial_cpu = {.pc=0x9fdf, .a=0x94, .x=0x61, .y=0x30, .sp=0x60, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x9fdf, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9fe0, .a=0x94, .x=0x61, .y=0x30, .sp=0x60, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x9fdf, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9fdf, .value=0xe0, .type=IO_READ},
        {.addr=0x9fe0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0168) {
    const struct CPU_State initial_cpu = {.pc=0x524d, .a=0x07, .x=0x3f, .y=0x1c, .sp=0x7a, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x524d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x524e, .a=0x07, .x=0x3f, .y=0x1c, .sp=0x7a, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x524d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x524d, .value=0xe0, .type=IO_READ},
        {.addr=0x524e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0169) {
    const struct CPU_State initial_cpu = {.pc=0x168a, .a=0x2a, .x=0xaa, .y=0x1d, .sp=0xbf, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x168a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x168b, .a=0x2a, .x=0xaa, .y=0x1d, .sp=0xbf, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x168a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x168a, .value=0xe0, .type=IO_READ},
        {.addr=0x168b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_016A) {
    const struct CPU_State initial_cpu = {.pc=0x7cad, .a=0x32, .x=0xd3, .y=0xe7, .sp=0x4e, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x7cad, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7cae, .a=0x32, .x=0xd3, .y=0xe7, .sp=0x4e, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x7cad, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7cad, .value=0xe0, .type=IO_READ},
        {.addr=0x7cae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_016B) {
    const struct CPU_State initial_cpu = {.pc=0x0907, .a=0x85, .x=0x24, .y=0x73, .sp=0x34, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0907, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0908, .a=0x85, .x=0x24, .y=0x73, .sp=0x34, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0907, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0907, .value=0xe0, .type=IO_READ},
        {.addr=0x0908, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_016C) {
    const struct CPU_State initial_cpu = {.pc=0xd98a, .a=0xcb, .x=0x00, .y=0x81, .sp=0x90, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xd98a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd98b, .a=0xcb, .x=0x00, .y=0x81, .sp=0x90, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xd98a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd98a, .value=0xe0, .type=IO_READ},
        {.addr=0xd98b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_016D) {
    const struct CPU_State initial_cpu = {.pc=0x6aad, .a=0x7d, .x=0x72, .y=0x1b, .sp=0x2d, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x6aad, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6aae, .a=0x7d, .x=0x72, .y=0x1b, .sp=0x2d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x6aad, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6aad, .value=0xe0, .type=IO_READ},
        {.addr=0x6aae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_016E) {
    const struct CPU_State initial_cpu = {.pc=0xf537, .a=0xc5, .x=0xd9, .y=0xee, .sp=0xef, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xf537, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf538, .a=0xc5, .x=0xd9, .y=0xee, .sp=0xef, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xf537, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf537, .value=0xe0, .type=IO_READ},
        {.addr=0xf538, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_016F) {
    const struct CPU_State initial_cpu = {.pc=0x4423, .a=0x1a, .x=0xb2, .y=0xbf, .sp=0xc6, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x4423, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4424, .a=0x1a, .x=0xb2, .y=0xbf, .sp=0xc6, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x4423, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4423, .value=0xe0, .type=IO_READ},
        {.addr=0x4424, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0170) {
    const struct CPU_State initial_cpu = {.pc=0xbfb1, .a=0x8e, .x=0x95, .y=0x96, .sp=0xad, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xbfb1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xbfb2, .a=0x8e, .x=0x95, .y=0x96, .sp=0xad, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xbfb1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xbfb1, .value=0xe0, .type=IO_READ},
        {.addr=0xbfb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0171) {
    const struct CPU_State initial_cpu = {.pc=0xa0e8, .a=0xf5, .x=0xce, .y=0xba, .sp=0xec, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xa0e8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa0e9, .a=0xf5, .x=0xce, .y=0xba, .sp=0xec, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xa0e8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa0e8, .value=0xe0, .type=IO_READ},
        {.addr=0xa0e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0172) {
    const struct CPU_State initial_cpu = {.pc=0xd140, .a=0xfc, .x=0xad, .y=0x4a, .sp=0x76, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xd140, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd141, .a=0xfc, .x=0xad, .y=0x4a, .sp=0x76, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0xd140, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd140, .value=0xe0, .type=IO_READ},
        {.addr=0xd141, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0173) {
    const struct CPU_State initial_cpu = {.pc=0xc97b, .a=0x3f, .x=0x08, .y=0x6e, .sp=0x75, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xc97b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc97c, .a=0x3f, .x=0x08, .y=0x6e, .sp=0x75, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xc97b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc97b, .value=0xe0, .type=IO_READ},
        {.addr=0xc97c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0174) {
    const struct CPU_State initial_cpu = {.pc=0x4d55, .a=0xc6, .x=0xb6, .y=0x46, .sp=0xf8, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x4d55, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4d56, .a=0xc6, .x=0xb6, .y=0x46, .sp=0xf8, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x4d55, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4d55, .value=0xe0, .type=IO_READ},
        {.addr=0x4d56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0175) {
    const struct CPU_State initial_cpu = {.pc=0xf98f, .a=0x5c, .x=0x5b, .y=0x10, .sp=0x21, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0xf98f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf990, .a=0x5c, .x=0x5b, .y=0x10, .sp=0x21, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xf98f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf98f, .value=0xe0, .type=IO_READ},
        {.addr=0xf990, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0176) {
    const struct CPU_State initial_cpu = {.pc=0x83d7, .a=0x18, .x=0x20, .y=0x4f, .sp=0x90, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x83d7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x83d8, .a=0x18, .x=0x20, .y=0x4f, .sp=0x90, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x83d7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x83d7, .value=0xe0, .type=IO_READ},
        {.addr=0x83d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0177) {
    const struct CPU_State initial_cpu = {.pc=0x2e6a, .a=0x58, .x=0x54, .y=0xca, .sp=0x20, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x2e6a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2e6b, .a=0x58, .x=0x54, .y=0xca, .sp=0x20, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x2e6a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2e6a, .value=0xe0, .type=IO_READ},
        {.addr=0x2e6b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0178) {
    const struct CPU_State initial_cpu = {.pc=0xdd28, .a=0xd0, .x=0xa1, .y=0x9f, .sp=0x4b, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xdd28, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xdd29, .a=0xd0, .x=0xa1, .y=0x9f, .sp=0x4b, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xdd28, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdd28, .value=0xe0, .type=IO_READ},
        {.addr=0xdd29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0179) {
    const struct CPU_State initial_cpu = {.pc=0xda15, .a=0xb2, .x=0xcd, .y=0x9d, .sp=0xf2, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xda15, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xda16, .a=0xb2, .x=0xcd, .y=0x9d, .sp=0xf2, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0xda15, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xda15, .value=0xe0, .type=IO_READ},
        {.addr=0xda16, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_017A) {
    const struct CPU_State initial_cpu = {.pc=0x2fa3, .a=0x37, .x=0xf4, .y=0x32, .sp=0xe4, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x2fa3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2fa4, .a=0x37, .x=0xf4, .y=0x32, .sp=0xe4, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x2fa3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2fa3, .value=0xe0, .type=IO_READ},
        {.addr=0x2fa4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_017B) {
    const struct CPU_State initial_cpu = {.pc=0xf4c6, .a=0xcd, .x=0x83, .y=0x0e, .sp=0x6f, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xf4c6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf4c7, .a=0xcd, .x=0x83, .y=0x0e, .sp=0x6f, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xf4c6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf4c6, .value=0xe0, .type=IO_READ},
        {.addr=0xf4c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_017C) {
    const struct CPU_State initial_cpu = {.pc=0x09d4, .a=0x3e, .x=0x0a, .y=0x0d, .sp=0x1f, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x09d4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x09d5, .a=0x3e, .x=0x0a, .y=0x0d, .sp=0x1f, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x09d4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x09d4, .value=0xe0, .type=IO_READ},
        {.addr=0x09d5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_017D) {
    const struct CPU_State initial_cpu = {.pc=0x153b, .a=0x5f, .x=0x5d, .y=0xc0, .sp=0xd1, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x153b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x153c, .a=0x5f, .x=0x5d, .y=0xc0, .sp=0xd1, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x153b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x153b, .value=0xe0, .type=IO_READ},
        {.addr=0x153c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_017E) {
    const struct CPU_State initial_cpu = {.pc=0xddc2, .a=0x75, .x=0x11, .y=0x17, .sp=0xf6, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xddc2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xddc3, .a=0x75, .x=0x11, .y=0x17, .sp=0xf6, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xddc2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xddc2, .value=0xe0, .type=IO_READ},
        {.addr=0xddc3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_017F) {
    const struct CPU_State initial_cpu = {.pc=0x6528, .a=0xf7, .x=0x9f, .y=0x21, .sp=0xfd, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x6528, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6529, .a=0xf7, .x=0x9f, .y=0x21, .sp=0xfd, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x6528, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6528, .value=0xe0, .type=IO_READ},
        {.addr=0x6529, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0180) {
    const struct CPU_State initial_cpu = {.pc=0x1d8d, .a=0xda, .x=0xea, .y=0xa3, .sp=0xfa, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x1d8d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1d8e, .a=0xda, .x=0xea, .y=0xa3, .sp=0xfa, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x1d8d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1d8d, .value=0xe0, .type=IO_READ},
        {.addr=0x1d8e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0181) {
    const struct CPU_State initial_cpu = {.pc=0xd809, .a=0x59, .x=0x8e, .y=0x15, .sp=0x63, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xd809, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd80a, .a=0x59, .x=0x8e, .y=0x15, .sp=0x63, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xd809, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd809, .value=0xe0, .type=IO_READ},
        {.addr=0xd80a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0182) {
    const struct CPU_State initial_cpu = {.pc=0x439f, .a=0xa0, .x=0xbb, .y=0x4a, .sp=0x22, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x439f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x43a0, .a=0xa0, .x=0xbb, .y=0x4a, .sp=0x22, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x439f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x439f, .value=0xe0, .type=IO_READ},
        {.addr=0x43a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0183) {
    const struct CPU_State initial_cpu = {.pc=0xdf89, .a=0xf0, .x=0x9f, .y=0xb8, .sp=0x5b, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xdf89, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xdf8a, .a=0xf0, .x=0x9f, .y=0xb8, .sp=0x5b, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xdf89, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdf89, .value=0xe0, .type=IO_READ},
        {.addr=0xdf8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0184) {
    const struct CPU_State initial_cpu = {.pc=0xed39, .a=0xca, .x=0x1d, .y=0x66, .sp=0x3d, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xed39, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xed3a, .a=0xca, .x=0x1d, .y=0x66, .sp=0x3d, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xed39, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xed39, .value=0xe0, .type=IO_READ},
        {.addr=0xed3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0185) {
    const struct CPU_State initial_cpu = {.pc=0xe579, .a=0xbb, .x=0x45, .y=0x35, .sp=0xe9, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xe579, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe57a, .a=0xbb, .x=0x45, .y=0x35, .sp=0xe9, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xe579, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe579, .value=0xe0, .type=IO_READ},
        {.addr=0xe57a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0186) {
    const struct CPU_State initial_cpu = {.pc=0x1b86, .a=0xac, .x=0xce, .y=0x3c, .sp=0x52, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x1b86, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1b87, .a=0xac, .x=0xce, .y=0x3c, .sp=0x52, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x1b86, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1b86, .value=0xe0, .type=IO_READ},
        {.addr=0x1b87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0187) {
    const struct CPU_State initial_cpu = {.pc=0xa06d, .a=0xa9, .x=0xc0, .y=0xbc, .sp=0xb9, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xa06d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa06e, .a=0xa9, .x=0xc0, .y=0xbc, .sp=0xb9, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xa06d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa06d, .value=0xe0, .type=IO_READ},
        {.addr=0xa06e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0188) {
    const struct CPU_State initial_cpu = {.pc=0x4cfa, .a=0xdd, .x=0x56, .y=0xc9, .sp=0x08, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x4cfa, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4cfb, .a=0xdd, .x=0x56, .y=0xc9, .sp=0x08, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x4cfa, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4cfa, .value=0xe0, .type=IO_READ},
        {.addr=0x4cfb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0189) {
    const struct CPU_State initial_cpu = {.pc=0xf9e0, .a=0xf8, .x=0x8c, .y=0x08, .sp=0xd4, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xf9e0, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf9e1, .a=0xf8, .x=0x8c, .y=0x08, .sp=0xd4, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xf9e0, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf9e0, .value=0xe0, .type=IO_READ},
        {.addr=0xf9e1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_018A) {
    const struct CPU_State initial_cpu = {.pc=0x37a6, .a=0x27, .x=0xe0, .y=0x31, .sp=0xee, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x37a6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x37a7, .a=0x27, .x=0xe0, .y=0x31, .sp=0xee, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x37a6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x37a6, .value=0xe0, .type=IO_READ},
        {.addr=0x37a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_018B) {
    const struct CPU_State initial_cpu = {.pc=0xd260, .a=0x05, .x=0xb9, .y=0x3b, .sp=0x73, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xd260, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd261, .a=0x05, .x=0xb9, .y=0x3b, .sp=0x73, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xd260, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd260, .value=0xe0, .type=IO_READ},
        {.addr=0xd261, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_018C) {
    const struct CPU_State initial_cpu = {.pc=0xf426, .a=0xe5, .x=0x52, .y=0x2d, .sp=0x72, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xf426, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf427, .a=0xe5, .x=0x52, .y=0x2d, .sp=0x72, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xf426, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf426, .value=0xe0, .type=IO_READ},
        {.addr=0xf427, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_018D) {
    const struct CPU_State initial_cpu = {.pc=0x59e1, .a=0xfd, .x=0x37, .y=0xb8, .sp=0x08, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x59e1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x59e2, .a=0xfd, .x=0x37, .y=0xb8, .sp=0x08, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x59e1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x59e1, .value=0xe0, .type=IO_READ},
        {.addr=0x59e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_018E) {
    const struct CPU_State initial_cpu = {.pc=0x8786, .a=0x7e, .x=0xe8, .y=0x09, .sp=0x85, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x8786, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8787, .a=0x7e, .x=0xe8, .y=0x09, .sp=0x85, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x8786, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8786, .value=0xe0, .type=IO_READ},
        {.addr=0x8787, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_018F) {
    const struct CPU_State initial_cpu = {.pc=0xe08e, .a=0x3c, .x=0xde, .y=0x0e, .sp=0x7a, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xe08e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe08f, .a=0x3c, .x=0xde, .y=0x0e, .sp=0x7a, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xe08e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe08e, .value=0xe0, .type=IO_READ},
        {.addr=0xe08f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0190) {
    const struct CPU_State initial_cpu = {.pc=0xcea0, .a=0xf7, .x=0x65, .y=0x24, .sp=0x30, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xcea0, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcea1, .a=0xf7, .x=0x65, .y=0x24, .sp=0x30, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xcea0, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcea0, .value=0xe0, .type=IO_READ},
        {.addr=0xcea1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0191) {
    const struct CPU_State initial_cpu = {.pc=0x5f5e, .a=0x15, .x=0x13, .y=0xfa, .sp=0x3e, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x5f5e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5f5f, .a=0x15, .x=0x13, .y=0xfa, .sp=0x3e, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x5f5e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5f5e, .value=0xe0, .type=IO_READ},
        {.addr=0x5f5f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0192) {
    const struct CPU_State initial_cpu = {.pc=0xb7f5, .a=0xc3, .x=0xf6, .y=0x80, .sp=0xa5, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xb7f5, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb7f6, .a=0xc3, .x=0xf6, .y=0x80, .sp=0xa5, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xb7f5, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb7f5, .value=0xe0, .type=IO_READ},
        {.addr=0xb7f6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0193) {
    const struct CPU_State initial_cpu = {.pc=0x48c9, .a=0x1d, .x=0xf3, .y=0xe4, .sp=0x19, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x48c9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x48ca, .a=0x1d, .x=0xf3, .y=0xe4, .sp=0x19, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x48c9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x48c9, .value=0xe0, .type=IO_READ},
        {.addr=0x48ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0194) {
    const struct CPU_State initial_cpu = {.pc=0xc4c5, .a=0xb9, .x=0x0a, .y=0x0c, .sp=0xc5, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xc4c5, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc4c6, .a=0xb9, .x=0x0a, .y=0x0c, .sp=0xc5, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xc4c5, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc4c5, .value=0xe0, .type=IO_READ},
        {.addr=0xc4c6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0195) {
    const struct CPU_State initial_cpu = {.pc=0x6cbb, .a=0x46, .x=0x6c, .y=0xde, .sp=0x89, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x6cbb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6cbc, .a=0x46, .x=0x6c, .y=0xde, .sp=0x89, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x6cbb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6cbb, .value=0xe0, .type=IO_READ},
        {.addr=0x6cbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0196) {
    const struct CPU_State initial_cpu = {.pc=0x9677, .a=0x29, .x=0x43, .y=0x4b, .sp=0xf5, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x9677, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9678, .a=0x29, .x=0x43, .y=0x4b, .sp=0xf5, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x9677, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9677, .value=0xe0, .type=IO_READ},
        {.addr=0x9678, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0197) {
    const struct CPU_State initial_cpu = {.pc=0x5979, .a=0x4c, .x=0x97, .y=0xef, .sp=0x8b, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x5979, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x597a, .a=0x4c, .x=0x97, .y=0xef, .sp=0x8b, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x5979, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5979, .value=0xe0, .type=IO_READ},
        {.addr=0x597a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0198) {
    const struct CPU_State initial_cpu = {.pc=0xa857, .a=0x81, .x=0xc0, .y=0x10, .sp=0x46, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xa857, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa858, .a=0x81, .x=0xc0, .y=0x10, .sp=0x46, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xa857, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa857, .value=0xe0, .type=IO_READ},
        {.addr=0xa858, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0199) {
    const struct CPU_State initial_cpu = {.pc=0x0e74, .a=0x76, .x=0x1c, .y=0xb8, .sp=0xa2, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0e74, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0e75, .a=0x76, .x=0x1c, .y=0xb8, .sp=0xa2, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0e74, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0e74, .value=0xe0, .type=IO_READ},
        {.addr=0x0e75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_019A) {
    const struct CPU_State initial_cpu = {.pc=0x6de3, .a=0xb8, .x=0x5f, .y=0xe6, .sp=0x6f, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x6de3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6de4, .a=0xb8, .x=0x5f, .y=0xe6, .sp=0x6f, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x6de3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6de3, .value=0xe0, .type=IO_READ},
        {.addr=0x6de4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_019B) {
    const struct CPU_State initial_cpu = {.pc=0x72f2, .a=0x33, .x=0xec, .y=0x95, .sp=0x3f, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x72f2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x72f3, .a=0x33, .x=0xec, .y=0x95, .sp=0x3f, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x72f2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x72f2, .value=0xe0, .type=IO_READ},
        {.addr=0x72f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_019C) {
    const struct CPU_State initial_cpu = {.pc=0xd66b, .a=0xe3, .x=0x49, .y=0x11, .sp=0x88, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xd66b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd66c, .a=0xe3, .x=0x49, .y=0x11, .sp=0x88, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xd66b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd66b, .value=0xe0, .type=IO_READ},
        {.addr=0xd66c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_019D) {
    const struct CPU_State initial_cpu = {.pc=0xe19c, .a=0xd8, .x=0x13, .y=0xc2, .sp=0xe2, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xe19c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe19d, .a=0xd8, .x=0x13, .y=0xc2, .sp=0xe2, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xe19c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe19c, .value=0xe0, .type=IO_READ},
        {.addr=0xe19d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_019E) {
    const struct CPU_State initial_cpu = {.pc=0xc399, .a=0x1b, .x=0xfa, .y=0x8d, .sp=0xbf, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xc399, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc39a, .a=0x1b, .x=0xfa, .y=0x8d, .sp=0xbf, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xc399, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc399, .value=0xe0, .type=IO_READ},
        {.addr=0xc39a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_019F) {
    const struct CPU_State initial_cpu = {.pc=0x8e76, .a=0x05, .x=0x42, .y=0x2c, .sp=0xfd, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x8e76, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8e77, .a=0x05, .x=0x42, .y=0x2c, .sp=0xfd, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x8e76, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8e76, .value=0xe0, .type=IO_READ},
        {.addr=0x8e77, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x995c, .a=0xa8, .x=0x7a, .y=0xb2, .sp=0xb4, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x995c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x995d, .a=0xa8, .x=0x7a, .y=0xb2, .sp=0xb4, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x995c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x995c, .value=0xe0, .type=IO_READ},
        {.addr=0x995d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x448e, .a=0xde, .x=0x25, .y=0x70, .sp=0x60, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x448e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x448f, .a=0xde, .x=0x25, .y=0x70, .sp=0x60, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x448e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x448e, .value=0xe0, .type=IO_READ},
        {.addr=0x448f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xd15e, .a=0xfb, .x=0x7d, .y=0x88, .sp=0x14, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xd15e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd15f, .a=0xfb, .x=0x7d, .y=0x88, .sp=0x14, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xd15e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd15e, .value=0xe0, .type=IO_READ},
        {.addr=0xd15f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xe047, .a=0xf7, .x=0xbc, .y=0x36, .sp=0xb8, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xe047, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe048, .a=0xf7, .x=0xbc, .y=0x36, .sp=0xb8, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xe047, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe047, .value=0xe0, .type=IO_READ},
        {.addr=0xe048, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x3459, .a=0x70, .x=0x47, .y=0x08, .sp=0xea, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x3459, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x345a, .a=0x70, .x=0x47, .y=0x08, .sp=0xea, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x3459, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3459, .value=0xe0, .type=IO_READ},
        {.addr=0x345a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x6b86, .a=0x2b, .x=0x89, .y=0x1f, .sp=0xac, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x6b86, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6b87, .a=0x2b, .x=0x89, .y=0x1f, .sp=0xac, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x6b86, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6b86, .value=0xe0, .type=IO_READ},
        {.addr=0x6b87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x2f6b, .a=0x72, .x=0x6d, .y=0x1d, .sp=0x3a, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x2f6b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2f6c, .a=0x72, .x=0x6d, .y=0x1d, .sp=0x3a, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x2f6b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2f6b, .value=0xe0, .type=IO_READ},
        {.addr=0x2f6c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xcfff, .a=0xd7, .x=0x32, .y=0x97, .sp=0xdd, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xcfff, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd000, .a=0xd7, .x=0x32, .y=0x97, .sp=0xdd, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xcfff, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcfff, .value=0xe0, .type=IO_READ},
        {.addr=0xd000, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x7d3d, .a=0xfa, .x=0x3e, .y=0x17, .sp=0x32, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x7d3d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7d3e, .a=0xfa, .x=0x3e, .y=0x17, .sp=0x32, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x7d3d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7d3d, .value=0xe0, .type=IO_READ},
        {.addr=0x7d3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xf116, .a=0xfd, .x=0x4e, .y=0x03, .sp=0xde, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xf116, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf117, .a=0xfd, .x=0x4e, .y=0x03, .sp=0xde, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xf116, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf116, .value=0xe0, .type=IO_READ},
        {.addr=0xf117, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x1a17, .a=0x55, .x=0x21, .y=0x2d, .sp=0x9d, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x1a17, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1a18, .a=0x55, .x=0x21, .y=0x2d, .sp=0x9d, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x1a17, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1a17, .value=0xe0, .type=IO_READ},
        {.addr=0x1a18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x4236, .a=0x32, .x=0x32, .y=0xfd, .sp=0x1c, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x4236, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4237, .a=0x32, .x=0x32, .y=0xfd, .sp=0x1c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x4236, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4236, .value=0xe0, .type=IO_READ},
        {.addr=0x4237, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xfb1d, .a=0x82, .x=0xff, .y=0xdf, .sp=0x8b, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xfb1d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfb1e, .a=0x82, .x=0xff, .y=0xdf, .sp=0x8b, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xfb1d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfb1d, .value=0xe0, .type=IO_READ},
        {.addr=0xfb1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x4d41, .a=0x70, .x=0xfc, .y=0xd5, .sp=0xa1, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x4d41, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4d42, .a=0x70, .x=0xfc, .y=0xd5, .sp=0xa1, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x4d41, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4d41, .value=0xe0, .type=IO_READ},
        {.addr=0x4d42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x54c4, .a=0xab, .x=0x2e, .y=0xad, .sp=0x3c, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x54c4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x54c5, .a=0xab, .x=0x2e, .y=0xad, .sp=0x3c, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x54c4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x54c4, .value=0xe0, .type=IO_READ},
        {.addr=0x54c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x0e49, .a=0xb9, .x=0x33, .y=0xaa, .sp=0x64, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0e49, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0e4a, .a=0xb9, .x=0x33, .y=0xaa, .sp=0x64, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0e49, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0e49, .value=0xe0, .type=IO_READ},
        {.addr=0x0e4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xac61, .a=0x69, .x=0x05, .y=0x3d, .sp=0x3c, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xac61, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xac62, .a=0x69, .x=0x05, .y=0x3d, .sp=0x3c, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xac61, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xac61, .value=0xe0, .type=IO_READ},
        {.addr=0xac62, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x33fc, .a=0x59, .x=0xe3, .y=0x5f, .sp=0x94, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x33fc, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x33fd, .a=0x59, .x=0xe3, .y=0x5f, .sp=0x94, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x33fc, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x33fc, .value=0xe0, .type=IO_READ},
        {.addr=0x33fd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x189d, .a=0x83, .x=0x08, .y=0x88, .sp=0x72, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x189d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x189e, .a=0x83, .x=0x08, .y=0x88, .sp=0x72, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x189d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x189d, .value=0xe0, .type=IO_READ},
        {.addr=0x189e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x7f05, .a=0x3c, .x=0x42, .y=0x67, .sp=0x64, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x7f05, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7f06, .a=0x3c, .x=0x42, .y=0x67, .sp=0x64, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x7f05, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7f05, .value=0xe0, .type=IO_READ},
        {.addr=0x7f06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x46bb, .a=0x6e, .x=0x22, .y=0x66, .sp=0x93, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x46bb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x46bc, .a=0x6e, .x=0x22, .y=0x66, .sp=0x93, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x46bb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x46bb, .value=0xe0, .type=IO_READ},
        {.addr=0x46bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01B5) {
    const struct CPU_State initial_cpu = {.pc=0xfd1f, .a=0xfc, .x=0x2f, .y=0x18, .sp=0xee, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xfd1f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfd20, .a=0xfc, .x=0x2f, .y=0x18, .sp=0xee, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xfd1f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfd1f, .value=0xe0, .type=IO_READ},
        {.addr=0xfd20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x4b8a, .a=0xae, .x=0x14, .y=0xfb, .sp=0x16, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x4b8a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4b8b, .a=0xae, .x=0x14, .y=0xfb, .sp=0x16, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x4b8a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4b8a, .value=0xe0, .type=IO_READ},
        {.addr=0x4b8b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xa2ff, .a=0x1a, .x=0x1f, .y=0x66, .sp=0xc5, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xa2ff, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa300, .a=0x1a, .x=0x1f, .y=0x66, .sp=0xc5, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xa2ff, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa2ff, .value=0xe0, .type=IO_READ},
        {.addr=0xa300, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x9e91, .a=0x17, .x=0xea, .y=0x21, .sp=0xaa, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x9e91, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9e92, .a=0x17, .x=0xea, .y=0x21, .sp=0xaa, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x9e91, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9e91, .value=0xe0, .type=IO_READ},
        {.addr=0x9e92, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x8279, .a=0xb9, .x=0x08, .y=0x48, .sp=0x45, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x8279, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x827a, .a=0xb9, .x=0x08, .y=0x48, .sp=0x45, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x8279, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8279, .value=0xe0, .type=IO_READ},
        {.addr=0x827a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x5ffa, .a=0x8f, .x=0xad, .y=0x52, .sp=0x53, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x5ffa, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5ffb, .a=0x8f, .x=0xad, .y=0x52, .sp=0x53, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x5ffa, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5ffa, .value=0xe0, .type=IO_READ},
        {.addr=0x5ffb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x3c07, .a=0xcb, .x=0xb3, .y=0xe8, .sp=0x16, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x3c07, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3c08, .a=0xcb, .x=0xb3, .y=0xe8, .sp=0x16, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x3c07, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3c07, .value=0xe0, .type=IO_READ},
        {.addr=0x3c08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xc6d7, .a=0x9c, .x=0xa7, .y=0x36, .sp=0x7f, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xc6d7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc6d8, .a=0x9c, .x=0xa7, .y=0x36, .sp=0x7f, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xc6d7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc6d7, .value=0xe0, .type=IO_READ},
        {.addr=0xc6d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xce70, .a=0x12, .x=0x69, .y=0x12, .sp=0xda, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xce70, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xce71, .a=0x12, .x=0x69, .y=0x12, .sp=0xda, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xce70, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xce70, .value=0xe0, .type=IO_READ},
        {.addr=0xce71, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x3ff3, .a=0x81, .x=0x21, .y=0xe6, .sp=0x8c, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x3ff3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3ff4, .a=0x81, .x=0x21, .y=0xe6, .sp=0x8c, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x3ff3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3ff3, .value=0xe0, .type=IO_READ},
        {.addr=0x3ff4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x75b3, .a=0x7a, .x=0x7c, .y=0x77, .sp=0x7a, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x75b3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x75b4, .a=0x7a, .x=0x7c, .y=0x77, .sp=0x7a, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x75b3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x75b3, .value=0xe0, .type=IO_READ},
        {.addr=0x75b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x7666, .a=0xee, .x=0x8a, .y=0x9f, .sp=0x0b, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x7666, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7667, .a=0xee, .x=0x8a, .y=0x9f, .sp=0x0b, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x7666, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7666, .value=0xe0, .type=IO_READ},
        {.addr=0x7667, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01C1) {
    const struct CPU_State initial_cpu = {.pc=0xa267, .a=0x51, .x=0x85, .y=0x9e, .sp=0x7a, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xa267, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa268, .a=0x51, .x=0x85, .y=0x9e, .sp=0x7a, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xa267, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa267, .value=0xe0, .type=IO_READ},
        {.addr=0xa268, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x69a4, .a=0x1a, .x=0xad, .y=0x5e, .sp=0x34, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x69a4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x69a5, .a=0x1a, .x=0xad, .y=0x5e, .sp=0x34, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x69a4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x69a4, .value=0xe0, .type=IO_READ},
        {.addr=0x69a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xa9be, .a=0x05, .x=0x8c, .y=0xa6, .sp=0xa8, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xa9be, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa9bf, .a=0x05, .x=0x8c, .y=0xa6, .sp=0xa8, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xa9be, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa9be, .value=0xe0, .type=IO_READ},
        {.addr=0xa9bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x6965, .a=0xd8, .x=0x90, .y=0x8b, .sp=0x12, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x6965, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6966, .a=0xd8, .x=0x90, .y=0x8b, .sp=0x12, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x6965, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6965, .value=0xe0, .type=IO_READ},
        {.addr=0x6966, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xe359, .a=0xad, .x=0xd2, .y=0x67, .sp=0x2b, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xe359, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe35a, .a=0xad, .x=0xd2, .y=0x67, .sp=0x2b, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xe359, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe359, .value=0xe0, .type=IO_READ},
        {.addr=0xe35a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x31b8, .a=0x31, .x=0x32, .y=0x98, .sp=0xdf, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x31b8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x31b9, .a=0x31, .x=0x32, .y=0x98, .sp=0xdf, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x31b8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x31b8, .value=0xe0, .type=IO_READ},
        {.addr=0x31b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x45f0, .a=0xd8, .x=0xe5, .y=0x22, .sp=0x97, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x45f0, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x45f1, .a=0xd8, .x=0xe5, .y=0x22, .sp=0x97, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x45f0, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x45f0, .value=0xe0, .type=IO_READ},
        {.addr=0x45f1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xe3e9, .a=0x6f, .x=0xce, .y=0x42, .sp=0x9c, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xe3e9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe3ea, .a=0x6f, .x=0xce, .y=0x42, .sp=0x9c, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xe3e9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe3e9, .value=0xe0, .type=IO_READ},
        {.addr=0xe3ea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x53e1, .a=0xc8, .x=0x10, .y=0xce, .sp=0xca, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x53e1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x53e2, .a=0xc8, .x=0x10, .y=0xce, .sp=0xca, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x53e1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x53e1, .value=0xe0, .type=IO_READ},
        {.addr=0x53e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xf63f, .a=0x43, .x=0x03, .y=0xae, .sp=0xf8, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xf63f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf640, .a=0x43, .x=0x03, .y=0xae, .sp=0xf8, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xf63f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf63f, .value=0xe0, .type=IO_READ},
        {.addr=0xf640, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x8590, .a=0x59, .x=0x53, .y=0x0b, .sp=0x4a, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x8590, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8591, .a=0x59, .x=0x53, .y=0x0b, .sp=0x4a, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x8590, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8590, .value=0xe0, .type=IO_READ},
        {.addr=0x8591, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x3d1b, .a=0x60, .x=0x42, .y=0x64, .sp=0x46, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x3d1b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3d1c, .a=0x60, .x=0x42, .y=0x64, .sp=0x46, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x3d1b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3d1b, .value=0xe0, .type=IO_READ},
        {.addr=0x3d1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x0cac, .a=0xb0, .x=0x3d, .y=0xbb, .sp=0x24, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0cac, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0cad, .a=0xb0, .x=0x3d, .y=0xbb, .sp=0x24, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0cac, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0cac, .value=0xe0, .type=IO_READ},
        {.addr=0x0cad, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01CE) {
    const struct CPU_State initial_cpu = {.pc=0x889f, .a=0xb3, .x=0x51, .y=0xb7, .sp=0x8d, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x889f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x88a0, .a=0xb3, .x=0x51, .y=0xb7, .sp=0x8d, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x889f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x889f, .value=0xe0, .type=IO_READ},
        {.addr=0x88a0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x3ae1, .a=0x7d, .x=0xd6, .y=0xb5, .sp=0xee, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x3ae1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3ae2, .a=0x7d, .x=0xd6, .y=0xb5, .sp=0xee, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x3ae1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3ae1, .value=0xe0, .type=IO_READ},
        {.addr=0x3ae2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x38bb, .a=0x8f, .x=0x8b, .y=0xf7, .sp=0x56, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x38bb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x38bc, .a=0x8f, .x=0x8b, .y=0xf7, .sp=0x56, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x38bb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x38bb, .value=0xe0, .type=IO_READ},
        {.addr=0x38bc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xfd3e, .a=0x25, .x=0x59, .y=0xb4, .sp=0x60, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xfd3e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfd3f, .a=0x25, .x=0x59, .y=0xb4, .sp=0x60, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xfd3e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfd3e, .value=0xe0, .type=IO_READ},
        {.addr=0xfd3f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x3124, .a=0x49, .x=0x2c, .y=0xd2, .sp=0x9a, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x3124, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3125, .a=0x49, .x=0x2c, .y=0xd2, .sp=0x9a, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x3124, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3124, .value=0xe0, .type=IO_READ},
        {.addr=0x3125, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x1454, .a=0x14, .x=0xd6, .y=0x32, .sp=0x33, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x1454, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1455, .a=0x14, .x=0xd6, .y=0x32, .sp=0x33, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x1454, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1454, .value=0xe0, .type=IO_READ},
        {.addr=0x1455, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x10c4, .a=0x86, .x=0xe0, .y=0x24, .sp=0x92, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x10c4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x10c5, .a=0x86, .x=0xe0, .y=0x24, .sp=0x92, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x10c4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x10c4, .value=0xe0, .type=IO_READ},
        {.addr=0x10c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x571a, .a=0x10, .x=0xa4, .y=0x01, .sp=0x05, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x571a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x571b, .a=0x10, .x=0xa4, .y=0x01, .sp=0x05, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x571a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x571a, .value=0xe0, .type=IO_READ},
        {.addr=0x571b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01D6) {
    const struct CPU_State initial_cpu = {.pc=0xc2dd, .a=0xa2, .x=0x6c, .y=0xce, .sp=0xcb, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xc2dd, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc2de, .a=0xa2, .x=0x6c, .y=0xce, .sp=0xcb, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xc2dd, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc2dd, .value=0xe0, .type=IO_READ},
        {.addr=0xc2de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x78c6, .a=0xfd, .x=0x3c, .y=0x3b, .sp=0x18, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x78c6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x78c7, .a=0xfd, .x=0x3c, .y=0x3b, .sp=0x18, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x78c6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x78c6, .value=0xe0, .type=IO_READ},
        {.addr=0x78c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x2606, .a=0x69, .x=0x65, .y=0x1f, .sp=0x19, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x2606, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2607, .a=0x69, .x=0x65, .y=0x1f, .sp=0x19, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x2606, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2606, .value=0xe0, .type=IO_READ},
        {.addr=0x2607, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x9c11, .a=0xe4, .x=0xdd, .y=0xa4, .sp=0x17, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x9c11, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9c12, .a=0xe4, .x=0xdd, .y=0xa4, .sp=0x17, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x9c11, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9c11, .value=0xe0, .type=IO_READ},
        {.addr=0x9c12, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xa102, .a=0x27, .x=0xae, .y=0xc6, .sp=0xcd, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xa102, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa103, .a=0x27, .x=0xae, .y=0xc6, .sp=0xcd, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xa102, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa102, .value=0xe0, .type=IO_READ},
        {.addr=0xa103, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x9f17, .a=0x56, .x=0x14, .y=0xdf, .sp=0x10, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x9f17, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9f18, .a=0x56, .x=0x14, .y=0xdf, .sp=0x10, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x9f17, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9f17, .value=0xe0, .type=IO_READ},
        {.addr=0x9f18, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x21f2, .a=0xd4, .x=0x6d, .y=0x7e, .sp=0xee, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x21f2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x21f3, .a=0xd4, .x=0x6d, .y=0x7e, .sp=0xee, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x21f2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x21f2, .value=0xe0, .type=IO_READ},
        {.addr=0x21f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x1d1d, .a=0x69, .x=0x4e, .y=0x71, .sp=0x63, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x1d1d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1d1e, .a=0x69, .x=0x4e, .y=0x71, .sp=0x63, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x1d1d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1d1d, .value=0xe0, .type=IO_READ},
        {.addr=0x1d1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x9bd1, .a=0x1d, .x=0x03, .y=0xeb, .sp=0xf9, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x9bd1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9bd2, .a=0x1d, .x=0x03, .y=0xeb, .sp=0xf9, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x9bd1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9bd1, .value=0xe0, .type=IO_READ},
        {.addr=0x9bd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xc311, .a=0x38, .x=0xd5, .y=0xf1, .sp=0xa4, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xc311, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc312, .a=0x38, .x=0xd5, .y=0xf1, .sp=0xa4, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xc311, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc311, .value=0xe0, .type=IO_READ},
        {.addr=0xc312, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x7054, .a=0x2d, .x=0x59, .y=0x5b, .sp=0x22, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x7054, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7055, .a=0x2d, .x=0x59, .y=0x5b, .sp=0x22, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x7054, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7054, .value=0xe0, .type=IO_READ},
        {.addr=0x7055, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x8ed9, .a=0x0b, .x=0xc0, .y=0xa6, .sp=0x20, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x8ed9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8eda, .a=0x0b, .x=0xc0, .y=0xa6, .sp=0x20, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x8ed9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8ed9, .value=0xe0, .type=IO_READ},
        {.addr=0x8eda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x6f7f, .a=0xf4, .x=0x43, .y=0x53, .sp=0x96, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x6f7f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6f80, .a=0xf4, .x=0x43, .y=0x53, .sp=0x96, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x6f7f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6f7f, .value=0xe0, .type=IO_READ},
        {.addr=0x6f80, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xce1f, .a=0xdb, .x=0x1a, .y=0x3c, .sp=0x19, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xce1f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xce20, .a=0xdb, .x=0x1a, .y=0x3c, .sp=0x19, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xce1f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xce1f, .value=0xe0, .type=IO_READ},
        {.addr=0xce20, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x381f, .a=0xf8, .x=0xb9, .y=0x88, .sp=0x64, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x381f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3820, .a=0xf8, .x=0xb9, .y=0x88, .sp=0x64, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x381f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x381f, .value=0xe0, .type=IO_READ},
        {.addr=0x3820, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x179e, .a=0x74, .x=0xab, .y=0xe3, .sp=0x5f, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x179e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x179f, .a=0x74, .x=0xab, .y=0xe3, .sp=0x5f, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x179e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x179e, .value=0xe0, .type=IO_READ},
        {.addr=0x179f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x507a, .a=0x66, .x=0x94, .y=0x17, .sp=0xf4, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x507a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x507b, .a=0x66, .x=0x94, .y=0x17, .sp=0xf4, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x507a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x507a, .value=0xe0, .type=IO_READ},
        {.addr=0x507b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x8773, .a=0xfc, .x=0x19, .y=0xf3, .sp=0x84, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x8773, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8774, .a=0xfc, .x=0x19, .y=0xf3, .sp=0x84, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x8773, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8773, .value=0xe0, .type=IO_READ},
        {.addr=0x8774, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x9b68, .a=0x1f, .x=0x36, .y=0xef, .sp=0xe2, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x9b68, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9b69, .a=0x1f, .x=0x36, .y=0xef, .sp=0xe2, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x9b68, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9b68, .value=0xe0, .type=IO_READ},
        {.addr=0x9b69, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x9e90, .a=0xb5, .x=0xe4, .y=0xaa, .sp=0x05, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x9e90, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9e91, .a=0xb5, .x=0xe4, .y=0xaa, .sp=0x05, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x9e90, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9e90, .value=0xe0, .type=IO_READ},
        {.addr=0x9e91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xfcec, .a=0x93, .x=0x12, .y=0x3a, .sp=0xa8, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xfcec, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfced, .a=0x93, .x=0x12, .y=0x3a, .sp=0xa8, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xfcec, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfcec, .value=0xe0, .type=IO_READ},
        {.addr=0xfced, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01EB) {
    const struct CPU_State initial_cpu = {.pc=0x3539, .a=0x36, .x=0xcf, .y=0x87, .sp=0xb3, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x3539, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x353a, .a=0x36, .x=0xcf, .y=0x87, .sp=0xb3, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x3539, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3539, .value=0xe0, .type=IO_READ},
        {.addr=0x353a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x0121, .a=0xef, .x=0x35, .y=0x64, .sp=0x0f, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0122, .a=0xef, .x=0x35, .y=0x64, .sp=0x0f, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0121, .value=0xe0, .type=IO_READ},
        {.addr=0x0122, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x6008, .a=0x21, .x=0xd2, .y=0x9f, .sp=0x32, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x6008, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6009, .a=0x21, .x=0xd2, .y=0x9f, .sp=0x32, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x6008, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6008, .value=0xe0, .type=IO_READ},
        {.addr=0x6009, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xd11e, .a=0xd1, .x=0x7f, .y=0xe4, .sp=0x68, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xd11e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd11f, .a=0xd1, .x=0x7f, .y=0xe4, .sp=0x68, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0xd11e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd11e, .value=0xe0, .type=IO_READ},
        {.addr=0xd11f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xd0e3, .a=0x89, .x=0x8f, .y=0x6e, .sp=0x3b, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xd0e3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd0e4, .a=0x89, .x=0x8f, .y=0x6e, .sp=0x3b, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xd0e3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd0e3, .value=0xe0, .type=IO_READ},
        {.addr=0xd0e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x173c, .a=0x65, .x=0xaf, .y=0xad, .sp=0xa9, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x173c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x173d, .a=0x65, .x=0xaf, .y=0xad, .sp=0xa9, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x173c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x173c, .value=0xe0, .type=IO_READ},
        {.addr=0x173d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x2eca, .a=0xe6, .x=0x0d, .y=0x6b, .sp=0x99, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x2eca, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2ecb, .a=0xe6, .x=0x0d, .y=0x6b, .sp=0x99, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x2eca, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2eca, .value=0xe0, .type=IO_READ},
        {.addr=0x2ecb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x3e1b, .a=0x5a, .x=0x75, .y=0x6a, .sp=0x05, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x3e1b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3e1c, .a=0x5a, .x=0x75, .y=0x6a, .sp=0x05, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x3e1b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3e1b, .value=0xe0, .type=IO_READ},
        {.addr=0x3e1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x71b8, .a=0xaa, .x=0x66, .y=0x7c, .sp=0xfa, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x71b8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x71b9, .a=0xaa, .x=0x66, .y=0x7c, .sp=0xfa, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x71b8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x71b8, .value=0xe0, .type=IO_READ},
        {.addr=0x71b9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x331a, .a=0x62, .x=0xaf, .y=0x31, .sp=0x62, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x331a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x331b, .a=0x62, .x=0xaf, .y=0x31, .sp=0x62, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x331a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x331a, .value=0xe0, .type=IO_READ},
        {.addr=0x331b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x672a, .a=0x86, .x=0xde, .y=0x8d, .sp=0xdd, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x672a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x672b, .a=0x86, .x=0xde, .y=0x8d, .sp=0xdd, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x672a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x672a, .value=0xe0, .type=IO_READ},
        {.addr=0x672b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x55dd, .a=0x59, .x=0xa1, .y=0xf5, .sp=0x8f, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x55dd, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x55de, .a=0x59, .x=0xa1, .y=0xf5, .sp=0x8f, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x55dd, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x55dd, .value=0xe0, .type=IO_READ},
        {.addr=0x55de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01F7) {
    const struct CPU_State initial_cpu = {.pc=0xbd30, .a=0xc7, .x=0xbd, .y=0xac, .sp=0xc1, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xbd30, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xbd31, .a=0xc7, .x=0xbd, .y=0xac, .sp=0xc1, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xbd30, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xbd30, .value=0xe0, .type=IO_READ},
        {.addr=0xbd31, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xd902, .a=0x6e, .x=0xc3, .y=0xd0, .sp=0xc6, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xd902, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd903, .a=0x6e, .x=0xc3, .y=0xd0, .sp=0xc6, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xd902, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd902, .value=0xe0, .type=IO_READ},
        {.addr=0xd903, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x5ede, .a=0xf2, .x=0x8e, .y=0x4c, .sp=0x0f, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x5ede, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5edf, .a=0xf2, .x=0x8e, .y=0x4c, .sp=0x0f, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x5ede, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5ede, .value=0xe0, .type=IO_READ},
        {.addr=0x5edf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x0cd7, .a=0x09, .x=0x07, .y=0x15, .sp=0xe9, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0cd7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0cd8, .a=0x09, .x=0x07, .y=0x15, .sp=0xe9, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x0cd7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0cd7, .value=0xe0, .type=IO_READ},
        {.addr=0x0cd8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xd941, .a=0x61, .x=0x3b, .y=0x97, .sp=0x3b, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xd941, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd942, .a=0x61, .x=0x3b, .y=0x97, .sp=0x3b, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xd941, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd941, .value=0xe0, .type=IO_READ},
        {.addr=0xd942, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x47c2, .a=0x12, .x=0x7a, .y=0xe2, .sp=0x09, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x47c2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x47c3, .a=0x12, .x=0x7a, .y=0xe2, .sp=0x09, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x47c2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x47c2, .value=0xe0, .type=IO_READ},
        {.addr=0x47c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x30a5, .a=0xa6, .x=0xc2, .y=0x4a, .sp=0xa1, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x30a5, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x30a6, .a=0xa6, .x=0xc2, .y=0x4a, .sp=0xa1, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x30a5, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x30a5, .value=0xe0, .type=IO_READ},
        {.addr=0x30a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x5476, .a=0x59, .x=0x11, .y=0x12, .sp=0x16, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x5476, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5477, .a=0x59, .x=0x11, .y=0x12, .sp=0x16, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x5476, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5476, .value=0xe0, .type=IO_READ},
        {.addr=0x5477, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x202e, .a=0xdf, .x=0x10, .y=0x50, .sp=0x4d, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x202e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x202f, .a=0xdf, .x=0x10, .y=0x50, .sp=0x4d, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x202e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x202e, .value=0xe0, .type=IO_READ},
        {.addr=0x202f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0200) {
    const struct CPU_State initial_cpu = {.pc=0x02cc, .a=0x1c, .x=0x1b, .y=0x85, .sp=0x4a, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x02cc, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x02cd, .a=0x1c, .x=0x1b, .y=0x85, .sp=0x4a, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x02cc, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x02cc, .value=0xe0, .type=IO_READ},
        {.addr=0x02cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0201) {
    const struct CPU_State initial_cpu = {.pc=0x9ec8, .a=0x53, .x=0x25, .y=0x51, .sp=0x6c, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x9ec8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9ec9, .a=0x53, .x=0x25, .y=0x51, .sp=0x6c, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x9ec8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9ec8, .value=0xe0, .type=IO_READ},
        {.addr=0x9ec9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0202) {
    const struct CPU_State initial_cpu = {.pc=0x63f1, .a=0x9d, .x=0x54, .y=0x6f, .sp=0x42, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x63f1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x63f2, .a=0x9d, .x=0x54, .y=0x6f, .sp=0x42, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x63f1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x63f1, .value=0xe0, .type=IO_READ},
        {.addr=0x63f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0203) {
    const struct CPU_State initial_cpu = {.pc=0x844c, .a=0xef, .x=0x57, .y=0x1c, .sp=0x6c, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x844c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x844d, .a=0xef, .x=0x57, .y=0x1c, .sp=0x6c, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x844c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x844c, .value=0xe0, .type=IO_READ},
        {.addr=0x844d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0204) {
    const struct CPU_State initial_cpu = {.pc=0x3812, .a=0xaf, .x=0x2e, .y=0xbd, .sp=0x44, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x3812, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3813, .a=0xaf, .x=0x2e, .y=0xbd, .sp=0x44, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x3812, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3812, .value=0xe0, .type=IO_READ},
        {.addr=0x3813, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0205) {
    const struct CPU_State initial_cpu = {.pc=0xc636, .a=0xd9, .x=0x35, .y=0xcb, .sp=0xaf, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xc636, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc637, .a=0xd9, .x=0x35, .y=0xcb, .sp=0xaf, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xc636, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc636, .value=0xe0, .type=IO_READ},
        {.addr=0xc637, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0206) {
    const struct CPU_State initial_cpu = {.pc=0x9f2b, .a=0xca, .x=0x69, .y=0xdb, .sp=0x14, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x9f2b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9f2c, .a=0xca, .x=0x69, .y=0xdb, .sp=0x14, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x9f2b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9f2b, .value=0xe0, .type=IO_READ},
        {.addr=0x9f2c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0207) {
    const struct CPU_State initial_cpu = {.pc=0x82f2, .a=0xc2, .x=0x62, .y=0x5b, .sp=0x8b, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x82f2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x82f3, .a=0xc2, .x=0x62, .y=0x5b, .sp=0x8b, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x82f2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x82f2, .value=0xe0, .type=IO_READ},
        {.addr=0x82f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0208) {
    const struct CPU_State initial_cpu = {.pc=0x2d90, .a=0x1d, .x=0x68, .y=0x63, .sp=0x08, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x2d90, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2d91, .a=0x1d, .x=0x68, .y=0x63, .sp=0x08, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x2d90, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2d90, .value=0xe0, .type=IO_READ},
        {.addr=0x2d91, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0209) {
    const struct CPU_State initial_cpu = {.pc=0xe930, .a=0x8a, .x=0x1b, .y=0x07, .sp=0x72, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xe930, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe931, .a=0x8a, .x=0x1b, .y=0x07, .sp=0x72, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xe930, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe930, .value=0xe0, .type=IO_READ},
        {.addr=0xe931, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_020A) {
    const struct CPU_State initial_cpu = {.pc=0xf49e, .a=0x33, .x=0x3f, .y=0xca, .sp=0x59, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xf49e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf49f, .a=0x33, .x=0x3f, .y=0xca, .sp=0x59, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xf49e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf49e, .value=0xe0, .type=IO_READ},
        {.addr=0xf49f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_020B) {
    const struct CPU_State initial_cpu = {.pc=0x31fb, .a=0x11, .x=0xe1, .y=0x5c, .sp=0xc2, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x31fb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x31fc, .a=0x11, .x=0xe1, .y=0x5c, .sp=0xc2, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x31fb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x31fb, .value=0xe0, .type=IO_READ},
        {.addr=0x31fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_020C) {
    const struct CPU_State initial_cpu = {.pc=0x5f35, .a=0x3f, .x=0x89, .y=0x70, .sp=0x12, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x5f35, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5f36, .a=0x3f, .x=0x89, .y=0x70, .sp=0x12, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x5f35, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5f35, .value=0xe0, .type=IO_READ},
        {.addr=0x5f36, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_020D) {
    const struct CPU_State initial_cpu = {.pc=0x2bfb, .a=0x0d, .x=0xd7, .y=0x13, .sp=0xec, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x2bfb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2bfc, .a=0x0d, .x=0xd7, .y=0x13, .sp=0xec, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x2bfb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2bfb, .value=0xe0, .type=IO_READ},
        {.addr=0x2bfc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_020E) {
    const struct CPU_State initial_cpu = {.pc=0xd7e4, .a=0xcc, .x=0xc3, .y=0x2f, .sp=0x92, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xd7e4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd7e5, .a=0xcc, .x=0xc3, .y=0x2f, .sp=0x92, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xd7e4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd7e4, .value=0xe0, .type=IO_READ},
        {.addr=0xd7e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_020F) {
    const struct CPU_State initial_cpu = {.pc=0x5113, .a=0x4c, .x=0xf0, .y=0x28, .sp=0x1b, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x5113, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5114, .a=0x4c, .x=0xf0, .y=0x28, .sp=0x1b, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x5113, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5113, .value=0xe0, .type=IO_READ},
        {.addr=0x5114, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0210) {
    const struct CPU_State initial_cpu = {.pc=0x90f2, .a=0x36, .x=0x91, .y=0x96, .sp=0x25, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x90f2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x90f3, .a=0x36, .x=0x91, .y=0x96, .sp=0x25, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x90f2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x90f2, .value=0xe0, .type=IO_READ},
        {.addr=0x90f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0211) {
    const struct CPU_State initial_cpu = {.pc=0xb56e, .a=0x87, .x=0xa6, .y=0xee, .sp=0x72, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xb56e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb56f, .a=0x87, .x=0xa6, .y=0xee, .sp=0x72, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xb56e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb56e, .value=0xe0, .type=IO_READ},
        {.addr=0xb56f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0212) {
    const struct CPU_State initial_cpu = {.pc=0xbd26, .a=0x23, .x=0x72, .y=0xa7, .sp=0x2c, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xbd26, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xbd27, .a=0x23, .x=0x72, .y=0xa7, .sp=0x2c, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xbd26, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xbd26, .value=0xe0, .type=IO_READ},
        {.addr=0xbd27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0213) {
    const struct CPU_State initial_cpu = {.pc=0xf684, .a=0xad, .x=0x16, .y=0x29, .sp=0xe1, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xf684, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf685, .a=0xad, .x=0x16, .y=0x29, .sp=0xe1, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xf684, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf684, .value=0xe0, .type=IO_READ},
        {.addr=0xf685, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0214) {
    const struct CPU_State initial_cpu = {.pc=0xcffa, .a=0xd3, .x=0x2d, .y=0xf6, .sp=0x0f, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xcffa, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcffb, .a=0xd3, .x=0x2d, .y=0xf6, .sp=0x0f, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xcffa, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcffa, .value=0xe0, .type=IO_READ},
        {.addr=0xcffb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0215) {
    const struct CPU_State initial_cpu = {.pc=0x0f0c, .a=0xc0, .x=0x71, .y=0x34, .sp=0xba, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0f0c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0f0d, .a=0xc0, .x=0x71, .y=0x34, .sp=0xba, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0f0c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0f0c, .value=0xe0, .type=IO_READ},
        {.addr=0x0f0d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0216) {
    const struct CPU_State initial_cpu = {.pc=0x56d0, .a=0xe5, .x=0x98, .y=0x9f, .sp=0xa3, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x56d0, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x56d1, .a=0xe5, .x=0x98, .y=0x9f, .sp=0xa3, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x56d0, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x56d0, .value=0xe0, .type=IO_READ},
        {.addr=0x56d1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0217) {
    const struct CPU_State initial_cpu = {.pc=0xe6f7, .a=0x40, .x=0x2a, .y=0x99, .sp=0xd4, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xe6f7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe6f8, .a=0x40, .x=0x2a, .y=0x99, .sp=0xd4, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xe6f7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe6f7, .value=0xe0, .type=IO_READ},
        {.addr=0xe6f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0218) {
    const struct CPU_State initial_cpu = {.pc=0xe918, .a=0x92, .x=0xdf, .y=0x05, .sp=0x9f, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xe918, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe919, .a=0x92, .x=0xdf, .y=0x05, .sp=0x9f, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xe918, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe918, .value=0xe0, .type=IO_READ},
        {.addr=0xe919, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0219) {
    const struct CPU_State initial_cpu = {.pc=0x41f6, .a=0xd8, .x=0x1e, .y=0x53, .sp=0x0c, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x41f6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x41f7, .a=0xd8, .x=0x1e, .y=0x53, .sp=0x0c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x41f6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x41f6, .value=0xe0, .type=IO_READ},
        {.addr=0x41f7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_021A) {
    const struct CPU_State initial_cpu = {.pc=0x0ea6, .a=0x7c, .x=0x48, .y=0xbf, .sp=0x96, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0ea6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0ea7, .a=0x7c, .x=0x48, .y=0xbf, .sp=0x96, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0ea6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0ea6, .value=0xe0, .type=IO_READ},
        {.addr=0x0ea7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_021B) {
    const struct CPU_State initial_cpu = {.pc=0x1370, .a=0x9e, .x=0x68, .y=0x0e, .sp=0xa8, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x1370, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1371, .a=0x9e, .x=0x68, .y=0x0e, .sp=0xa8, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x1370, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1370, .value=0xe0, .type=IO_READ},
        {.addr=0x1371, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_021C) {
    const struct CPU_State initial_cpu = {.pc=0x397f, .a=0xfe, .x=0xc8, .y=0x99, .sp=0x6f, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x397f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3980, .a=0xfe, .x=0xc8, .y=0x99, .sp=0x6f, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x397f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x397f, .value=0xe0, .type=IO_READ},
        {.addr=0x3980, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_021D) {
    const struct CPU_State initial_cpu = {.pc=0x318e, .a=0x0b, .x=0xee, .y=0xee, .sp=0xeb, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x318e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x318f, .a=0x0b, .x=0xee, .y=0xee, .sp=0xeb, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x318e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x318e, .value=0xe0, .type=IO_READ},
        {.addr=0x318f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_021E) {
    const struct CPU_State initial_cpu = {.pc=0x9e21, .a=0x4c, .x=0xbc, .y=0xc0, .sp=0x1f, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x9e21, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9e22, .a=0x4c, .x=0xbc, .y=0xc0, .sp=0x1f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x9e21, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9e21, .value=0xe0, .type=IO_READ},
        {.addr=0x9e22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_021F) {
    const struct CPU_State initial_cpu = {.pc=0x71fe, .a=0xee, .x=0x9e, .y=0x18, .sp=0x4b, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x71fe, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x71ff, .a=0xee, .x=0x9e, .y=0x18, .sp=0x4b, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x71fe, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x71fe, .value=0xe0, .type=IO_READ},
        {.addr=0x71ff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0220) {
    const struct CPU_State initial_cpu = {.pc=0x7bb4, .a=0xbd, .x=0xad, .y=0x98, .sp=0x64, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x7bb4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7bb5, .a=0xbd, .x=0xad, .y=0x98, .sp=0x64, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x7bb4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7bb4, .value=0xe0, .type=IO_READ},
        {.addr=0x7bb5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0221) {
    const struct CPU_State initial_cpu = {.pc=0xa340, .a=0xeb, .x=0xa4, .y=0xb3, .sp=0xd9, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xa340, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa341, .a=0xeb, .x=0xa4, .y=0xb3, .sp=0xd9, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xa340, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa340, .value=0xe0, .type=IO_READ},
        {.addr=0xa341, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0222) {
    const struct CPU_State initial_cpu = {.pc=0x6157, .a=0xad, .x=0xfa, .y=0x29, .sp=0xe3, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x6157, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6158, .a=0xad, .x=0xfa, .y=0x29, .sp=0xe3, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x6157, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6157, .value=0xe0, .type=IO_READ},
        {.addr=0x6158, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0223) {
    const struct CPU_State initial_cpu = {.pc=0x70f7, .a=0x20, .x=0x7c, .y=0x4d, .sp=0x47, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x70f7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x70f8, .a=0x20, .x=0x7c, .y=0x4d, .sp=0x47, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x70f7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x70f7, .value=0xe0, .type=IO_READ},
        {.addr=0x70f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0224) {
    const struct CPU_State initial_cpu = {.pc=0x6b6f, .a=0x20, .x=0xeb, .y=0xaf, .sp=0xb1, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x6b6f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6b70, .a=0x20, .x=0xeb, .y=0xaf, .sp=0xb1, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x6b6f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6b6f, .value=0xe0, .type=IO_READ},
        {.addr=0x6b70, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0225) {
    const struct CPU_State initial_cpu = {.pc=0x80e3, .a=0x1e, .x=0xc6, .y=0x74, .sp=0xee, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x80e3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x80e4, .a=0x1e, .x=0xc6, .y=0x74, .sp=0xee, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x80e3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x80e3, .value=0xe0, .type=IO_READ},
        {.addr=0x80e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0226) {
    const struct CPU_State initial_cpu = {.pc=0x5fa8, .a=0xf6, .x=0xfe, .y=0x31, .sp=0xfd, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x5fa8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5fa9, .a=0xf6, .x=0xfe, .y=0x31, .sp=0xfd, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x5fa8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5fa8, .value=0xe0, .type=IO_READ},
        {.addr=0x5fa9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0227) {
    const struct CPU_State initial_cpu = {.pc=0xe5e8, .a=0x8d, .x=0x3f, .y=0xfa, .sp=0xaa, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xe5e8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe5e9, .a=0x8d, .x=0x3f, .y=0xfa, .sp=0xaa, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xe5e8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe5e8, .value=0xe0, .type=IO_READ},
        {.addr=0xe5e9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0228) {
    const struct CPU_State initial_cpu = {.pc=0x2071, .a=0x0f, .x=0x82, .y=0x99, .sp=0x54, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x2071, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2072, .a=0x0f, .x=0x82, .y=0x99, .sp=0x54, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x2071, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2071, .value=0xe0, .type=IO_READ},
        {.addr=0x2072, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0229) {
    const struct CPU_State initial_cpu = {.pc=0x9056, .a=0x6a, .x=0xfa, .y=0xc5, .sp=0x75, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x9056, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9057, .a=0x6a, .x=0xfa, .y=0xc5, .sp=0x75, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x9056, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9056, .value=0xe0, .type=IO_READ},
        {.addr=0x9057, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_022A) {
    const struct CPU_State initial_cpu = {.pc=0xc4b2, .a=0x33, .x=0x8c, .y=0x13, .sp=0xe6, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xc4b2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc4b3, .a=0x33, .x=0x8c, .y=0x13, .sp=0xe6, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xc4b2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc4b2, .value=0xe0, .type=IO_READ},
        {.addr=0xc4b3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_022B) {
    const struct CPU_State initial_cpu = {.pc=0xaa89, .a=0x77, .x=0x92, .y=0xbe, .sp=0xb4, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xaa89, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xaa8a, .a=0x77, .x=0x92, .y=0xbe, .sp=0xb4, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xaa89, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xaa89, .value=0xe0, .type=IO_READ},
        {.addr=0xaa8a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_022C) {
    const struct CPU_State initial_cpu = {.pc=0xc8ec, .a=0xfc, .x=0xbd, .y=0xee, .sp=0x0c, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0xc8ec, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc8ed, .a=0xfc, .x=0xbd, .y=0xee, .sp=0x0c, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xc8ec, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc8ec, .value=0xe0, .type=IO_READ},
        {.addr=0xc8ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_022D) {
    const struct CPU_State initial_cpu = {.pc=0x1e16, .a=0xe4, .x=0x55, .y=0xf1, .sp=0x26, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x1e16, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1e17, .a=0xe4, .x=0x55, .y=0xf1, .sp=0x26, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x1e16, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1e16, .value=0xe0, .type=IO_READ},
        {.addr=0x1e17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_022E) {
    const struct CPU_State initial_cpu = {.pc=0x2f23, .a=0x96, .x=0xb7, .y=0x14, .sp=0x1e, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x2f23, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2f24, .a=0x96, .x=0xb7, .y=0x14, .sp=0x1e, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x2f23, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2f23, .value=0xe0, .type=IO_READ},
        {.addr=0x2f24, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_022F) {
    const struct CPU_State initial_cpu = {.pc=0xa8f7, .a=0x93, .x=0xe7, .y=0xc4, .sp=0x4a, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xa8f7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa8f8, .a=0x93, .x=0xe7, .y=0xc4, .sp=0x4a, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xa8f7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa8f7, .value=0xe0, .type=IO_READ},
        {.addr=0xa8f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0230) {
    const struct CPU_State initial_cpu = {.pc=0x4e55, .a=0xf6, .x=0x6b, .y=0xa4, .sp=0xd3, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x4e55, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4e56, .a=0xf6, .x=0x6b, .y=0xa4, .sp=0xd3, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x4e55, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4e55, .value=0xe0, .type=IO_READ},
        {.addr=0x4e56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0231) {
    const struct CPU_State initial_cpu = {.pc=0x5a49, .a=0xc4, .x=0x61, .y=0x06, .sp=0x28, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x5a49, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5a4a, .a=0xc4, .x=0x61, .y=0x06, .sp=0x28, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x5a49, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5a49, .value=0xe0, .type=IO_READ},
        {.addr=0x5a4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0232) {
    const struct CPU_State initial_cpu = {.pc=0xbebc, .a=0x9b, .x=0xcd, .y=0x3d, .sp=0x7a, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xbebc, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xbebd, .a=0x9b, .x=0xcd, .y=0x3d, .sp=0x7a, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xbebc, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xbebc, .value=0xe0, .type=IO_READ},
        {.addr=0xbebd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0233) {
    const struct CPU_State initial_cpu = {.pc=0xd48e, .a=0x69, .x=0xad, .y=0x6a, .sp=0x9a, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xd48e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd48f, .a=0x69, .x=0xad, .y=0x6a, .sp=0x9a, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xd48e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd48e, .value=0xe0, .type=IO_READ},
        {.addr=0xd48f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0234) {
    const struct CPU_State initial_cpu = {.pc=0xefa5, .a=0x62, .x=0x5c, .y=0xb3, .sp=0x52, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xefa5, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xefa6, .a=0x62, .x=0x5c, .y=0xb3, .sp=0x52, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xefa5, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xefa5, .value=0xe0, .type=IO_READ},
        {.addr=0xefa6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0235) {
    const struct CPU_State initial_cpu = {.pc=0x04a4, .a=0x59, .x=0xd3, .y=0xb3, .sp=0x0a, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x04a4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x04a5, .a=0x59, .x=0xd3, .y=0xb3, .sp=0x0a, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x04a4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x04a4, .value=0xe0, .type=IO_READ},
        {.addr=0x04a5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0236) {
    const struct CPU_State initial_cpu = {.pc=0xe8e1, .a=0x28, .x=0xc8, .y=0x74, .sp=0x3d, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xe8e1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe8e2, .a=0x28, .x=0xc8, .y=0x74, .sp=0x3d, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xe8e1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe8e1, .value=0xe0, .type=IO_READ},
        {.addr=0xe8e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0237) {
    const struct CPU_State initial_cpu = {.pc=0x92f2, .a=0x16, .x=0x2f, .y=0x4c, .sp=0x17, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x92f2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x92f3, .a=0x16, .x=0x2f, .y=0x4c, .sp=0x17, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x92f2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x92f2, .value=0xe0, .type=IO_READ},
        {.addr=0x92f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0238) {
    const struct CPU_State initial_cpu = {.pc=0x4565, .a=0x91, .x=0x7a, .y=0x7a, .sp=0x4d, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x4565, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4566, .a=0x91, .x=0x7a, .y=0x7a, .sp=0x4d, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x4565, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4565, .value=0xe0, .type=IO_READ},
        {.addr=0x4566, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0239) {
    const struct CPU_State initial_cpu = {.pc=0x6b8c, .a=0xd1, .x=0x54, .y=0xb7, .sp=0x92, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x6b8c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6b8d, .a=0xd1, .x=0x54, .y=0xb7, .sp=0x92, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x6b8c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6b8c, .value=0xe0, .type=IO_READ},
        {.addr=0x6b8d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_023A) {
    const struct CPU_State initial_cpu = {.pc=0x2d8b, .a=0xa9, .x=0xed, .y=0x2a, .sp=0xed, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x2d8b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2d8c, .a=0xa9, .x=0xed, .y=0x2a, .sp=0xed, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x2d8b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2d8b, .value=0xe0, .type=IO_READ},
        {.addr=0x2d8c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_023B) {
    const struct CPU_State initial_cpu = {.pc=0x49ad, .a=0xb0, .x=0x7b, .y=0x05, .sp=0x3b, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x49ad, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x49ae, .a=0xb0, .x=0x7b, .y=0x05, .sp=0x3b, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x49ad, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x49ad, .value=0xe0, .type=IO_READ},
        {.addr=0x49ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_023C) {
    const struct CPU_State initial_cpu = {.pc=0x1e9c, .a=0xf3, .x=0xd8, .y=0xf6, .sp=0x18, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x1e9c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1e9d, .a=0xf3, .x=0xd8, .y=0xf6, .sp=0x18, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x1e9c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1e9c, .value=0xe0, .type=IO_READ},
        {.addr=0x1e9d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_023D) {
    const struct CPU_State initial_cpu = {.pc=0x5c19, .a=0xa9, .x=0x58, .y=0x4e, .sp=0x09, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x5c19, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5c1a, .a=0xa9, .x=0x58, .y=0x4e, .sp=0x09, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x5c19, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5c19, .value=0xe0, .type=IO_READ},
        {.addr=0x5c1a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_023E) {
    const struct CPU_State initial_cpu = {.pc=0xf7c2, .a=0xb0, .x=0xd8, .y=0xe1, .sp=0x53, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xf7c2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf7c3, .a=0xb0, .x=0xd8, .y=0xe1, .sp=0x53, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xf7c2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf7c2, .value=0xe0, .type=IO_READ},
        {.addr=0xf7c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_023F) {
    const struct CPU_State initial_cpu = {.pc=0x077a, .a=0xeb, .x=0x7e, .y=0x54, .sp=0x38, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x077a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x077b, .a=0xeb, .x=0x7e, .y=0x54, .sp=0x38, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x077a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x077a, .value=0xe0, .type=IO_READ},
        {.addr=0x077b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0240) {
    const struct CPU_State initial_cpu = {.pc=0x9425, .a=0xc2, .x=0x3d, .y=0xb6, .sp=0xad, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x9425, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9426, .a=0xc2, .x=0x3d, .y=0xb6, .sp=0xad, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x9425, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9425, .value=0xe0, .type=IO_READ},
        {.addr=0x9426, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0241) {
    const struct CPU_State initial_cpu = {.pc=0x6fff, .a=0xa7, .x=0x6b, .y=0x77, .sp=0xd0, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x6fff, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7000, .a=0xa7, .x=0x6b, .y=0x77, .sp=0xd0, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x6fff, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6fff, .value=0xe0, .type=IO_READ},
        {.addr=0x7000, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0242) {
    const struct CPU_State initial_cpu = {.pc=0x395f, .a=0xb1, .x=0xd4, .y=0x81, .sp=0x62, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x395f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3960, .a=0xb1, .x=0xd4, .y=0x81, .sp=0x62, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x395f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x395f, .value=0xe0, .type=IO_READ},
        {.addr=0x3960, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0243) {
    const struct CPU_State initial_cpu = {.pc=0x6639, .a=0x05, .x=0xb5, .y=0x41, .sp=0xd9, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x6639, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x663a, .a=0x05, .x=0xb5, .y=0x41, .sp=0xd9, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x6639, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6639, .value=0xe0, .type=IO_READ},
        {.addr=0x663a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0244) {
    const struct CPU_State initial_cpu = {.pc=0x7a44, .a=0x7f, .x=0xaa, .y=0x6a, .sp=0xe4, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x7a44, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7a45, .a=0x7f, .x=0xaa, .y=0x6a, .sp=0xe4, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x7a44, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7a44, .value=0xe0, .type=IO_READ},
        {.addr=0x7a45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0245) {
    const struct CPU_State initial_cpu = {.pc=0x335e, .a=0x46, .x=0xbd, .y=0x8e, .sp=0x7e, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x335e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x335f, .a=0x46, .x=0xbd, .y=0x8e, .sp=0x7e, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x335e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x335e, .value=0xe0, .type=IO_READ},
        {.addr=0x335f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0246) {
    const struct CPU_State initial_cpu = {.pc=0xa86d, .a=0xf7, .x=0x0a, .y=0xad, .sp=0xf6, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xa86d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa86e, .a=0xf7, .x=0x0a, .y=0xad, .sp=0xf6, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xa86d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa86d, .value=0xe0, .type=IO_READ},
        {.addr=0xa86e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0247) {
    const struct CPU_State initial_cpu = {.pc=0x6dd9, .a=0xe0, .x=0xa6, .y=0xda, .sp=0x4c, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x6dd9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6dda, .a=0xe0, .x=0xa6, .y=0xda, .sp=0x4c, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x6dd9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6dd9, .value=0xe0, .type=IO_READ},
        {.addr=0x6dda, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0248) {
    const struct CPU_State initial_cpu = {.pc=0x991e, .a=0x3d, .x=0x07, .y=0x6e, .sp=0x60, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x991e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x991f, .a=0x3d, .x=0x07, .y=0x6e, .sp=0x60, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x991e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x991e, .value=0xe0, .type=IO_READ},
        {.addr=0x991f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0249) {
    const struct CPU_State initial_cpu = {.pc=0x3fd6, .a=0x44, .x=0x92, .y=0x33, .sp=0xf5, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x3fd6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3fd7, .a=0x44, .x=0x92, .y=0x33, .sp=0xf5, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x3fd6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3fd6, .value=0xe0, .type=IO_READ},
        {.addr=0x3fd7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_024A) {
    const struct CPU_State initial_cpu = {.pc=0xa56c, .a=0xb3, .x=0x50, .y=0xda, .sp=0xff, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xa56c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa56d, .a=0xb3, .x=0x50, .y=0xda, .sp=0xff, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xa56c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa56c, .value=0xe0, .type=IO_READ},
        {.addr=0xa56d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_024B) {
    const struct CPU_State initial_cpu = {.pc=0x335f, .a=0x9e, .x=0x02, .y=0x04, .sp=0x88, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x335f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3360, .a=0x9e, .x=0x02, .y=0x04, .sp=0x88, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x335f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x335f, .value=0xe0, .type=IO_READ},
        {.addr=0x3360, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_024C) {
    const struct CPU_State initial_cpu = {.pc=0xcf01, .a=0xe3, .x=0x68, .y=0xce, .sp=0x01, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xcf01, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcf02, .a=0xe3, .x=0x68, .y=0xce, .sp=0x01, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xcf01, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcf01, .value=0xe0, .type=IO_READ},
        {.addr=0xcf02, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_024D) {
    const struct CPU_State initial_cpu = {.pc=0xf0ec, .a=0xa8, .x=0xa2, .y=0x8d, .sp=0x31, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xf0ec, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf0ed, .a=0xa8, .x=0xa2, .y=0x8d, .sp=0x31, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xf0ec, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf0ec, .value=0xe0, .type=IO_READ},
        {.addr=0xf0ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_024E) {
    const struct CPU_State initial_cpu = {.pc=0xc707, .a=0x77, .x=0xf1, .y=0x49, .sp=0x6b, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xc707, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc708, .a=0x77, .x=0xf1, .y=0x49, .sp=0x6b, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xc707, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc707, .value=0xe0, .type=IO_READ},
        {.addr=0xc708, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_024F) {
    const struct CPU_State initial_cpu = {.pc=0xa690, .a=0x0b, .x=0x2c, .y=0xef, .sp=0x10, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xa690, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa691, .a=0x0b, .x=0x2c, .y=0xef, .sp=0x10, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xa690, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa690, .value=0xe0, .type=IO_READ},
        {.addr=0xa691, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0250) {
    const struct CPU_State initial_cpu = {.pc=0x6f00, .a=0x53, .x=0x88, .y=0xb1, .sp=0xd8, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x6f00, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6f01, .a=0x53, .x=0x88, .y=0xb1, .sp=0xd8, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x6f00, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6f00, .value=0xe0, .type=IO_READ},
        {.addr=0x6f01, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0251) {
    const struct CPU_State initial_cpu = {.pc=0x0c41, .a=0x22, .x=0x0f, .y=0x39, .sp=0x74, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0c41, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0c42, .a=0x22, .x=0x0f, .y=0x39, .sp=0x74, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0c41, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0c41, .value=0xe0, .type=IO_READ},
        {.addr=0x0c42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0252) {
    const struct CPU_State initial_cpu = {.pc=0xe788, .a=0xe3, .x=0xc6, .y=0x8e, .sp=0xb0, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xe788, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe789, .a=0xe3, .x=0xc6, .y=0x8e, .sp=0xb0, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xe788, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe788, .value=0xe0, .type=IO_READ},
        {.addr=0xe789, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0253) {
    const struct CPU_State initial_cpu = {.pc=0x312d, .a=0x9c, .x=0x03, .y=0xc9, .sp=0x05, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x312d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x312e, .a=0x9c, .x=0x03, .y=0xc9, .sp=0x05, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x312d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x312d, .value=0xe0, .type=IO_READ},
        {.addr=0x312e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0254) {
    const struct CPU_State initial_cpu = {.pc=0xce6e, .a=0xae, .x=0xc8, .y=0xcb, .sp=0x3e, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xce6e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xce6f, .a=0xae, .x=0xc8, .y=0xcb, .sp=0x3e, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xce6e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xce6e, .value=0xe0, .type=IO_READ},
        {.addr=0xce6f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0255) {
    const struct CPU_State initial_cpu = {.pc=0xd365, .a=0xd5, .x=0x1c, .y=0x41, .sp=0x98, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xd365, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd366, .a=0xd5, .x=0x1c, .y=0x41, .sp=0x98, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xd365, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd365, .value=0xe0, .type=IO_READ},
        {.addr=0xd366, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0256) {
    const struct CPU_State initial_cpu = {.pc=0x8dee, .a=0x19, .x=0x50, .y=0x46, .sp=0x29, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x8dee, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8def, .a=0x19, .x=0x50, .y=0x46, .sp=0x29, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x8dee, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8dee, .value=0xe0, .type=IO_READ},
        {.addr=0x8def, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0257) {
    const struct CPU_State initial_cpu = {.pc=0xedb3, .a=0x5d, .x=0x6d, .y=0xe9, .sp=0x5b, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xedb3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xedb4, .a=0x5d, .x=0x6d, .y=0xe9, .sp=0x5b, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xedb3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xedb3, .value=0xe0, .type=IO_READ},
        {.addr=0xedb4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0258) {
    const struct CPU_State initial_cpu = {.pc=0x19a3, .a=0x7d, .x=0x34, .y=0x9d, .sp=0x46, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x19a3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x19a4, .a=0x7d, .x=0x34, .y=0x9d, .sp=0x46, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x19a3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x19a3, .value=0xe0, .type=IO_READ},
        {.addr=0x19a4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0259) {
    const struct CPU_State initial_cpu = {.pc=0x75a1, .a=0x7c, .x=0x66, .y=0x65, .sp=0x38, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x75a1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x75a2, .a=0x7c, .x=0x66, .y=0x65, .sp=0x38, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x75a1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x75a1, .value=0xe0, .type=IO_READ},
        {.addr=0x75a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_025A) {
    const struct CPU_State initial_cpu = {.pc=0xccb1, .a=0x41, .x=0x61, .y=0x2a, .sp=0x25, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xccb1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xccb2, .a=0x41, .x=0x61, .y=0x2a, .sp=0x25, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xccb1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xccb1, .value=0xe0, .type=IO_READ},
        {.addr=0xccb2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_025B) {
    const struct CPU_State initial_cpu = {.pc=0xc07a, .a=0xc7, .x=0x84, .y=0xa3, .sp=0xe2, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xc07a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc07b, .a=0xc7, .x=0x84, .y=0xa3, .sp=0xe2, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xc07a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc07a, .value=0xe0, .type=IO_READ},
        {.addr=0xc07b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_025C) {
    const struct CPU_State initial_cpu = {.pc=0x5921, .a=0x8f, .x=0xa1, .y=0xe6, .sp=0xab, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x5921, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5922, .a=0x8f, .x=0xa1, .y=0xe6, .sp=0xab, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x5921, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5921, .value=0xe0, .type=IO_READ},
        {.addr=0x5922, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_025D) {
    const struct CPU_State initial_cpu = {.pc=0x1131, .a=0x50, .x=0x33, .y=0xd1, .sp=0x3e, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x1131, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1132, .a=0x50, .x=0x33, .y=0xd1, .sp=0x3e, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x1131, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1131, .value=0xe0, .type=IO_READ},
        {.addr=0x1132, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_025E) {
    const struct CPU_State initial_cpu = {.pc=0x80b1, .a=0xed, .x=0x3b, .y=0xa3, .sp=0xe5, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x80b1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x80b2, .a=0xed, .x=0x3b, .y=0xa3, .sp=0xe5, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x80b1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x80b1, .value=0xe0, .type=IO_READ},
        {.addr=0x80b2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_025F) {
    const struct CPU_State initial_cpu = {.pc=0x70d3, .a=0xac, .x=0xbc, .y=0x3b, .sp=0x00, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x70d3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x70d4, .a=0xac, .x=0xbc, .y=0x3b, .sp=0x00, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x70d3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x70d3, .value=0xe0, .type=IO_READ},
        {.addr=0x70d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0260) {
    const struct CPU_State initial_cpu = {.pc=0xd176, .a=0x99, .x=0xe2, .y=0x97, .sp=0x44, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xd176, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd177, .a=0x99, .x=0xe2, .y=0x97, .sp=0x44, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xd176, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd176, .value=0xe0, .type=IO_READ},
        {.addr=0xd177, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0261) {
    const struct CPU_State initial_cpu = {.pc=0x018b, .a=0xaf, .x=0x11, .y=0x42, .sp=0x38, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x018c, .a=0xaf, .x=0x11, .y=0x42, .sp=0x38, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x018b, .value=0xe0, .type=IO_READ},
        {.addr=0x018c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0262) {
    const struct CPU_State initial_cpu = {.pc=0xea62, .a=0xa2, .x=0xea, .y=0x22, .sp=0x2d, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xea62, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xea63, .a=0xa2, .x=0xea, .y=0x22, .sp=0x2d, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xea62, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xea62, .value=0xe0, .type=IO_READ},
        {.addr=0xea63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0263) {
    const struct CPU_State initial_cpu = {.pc=0xeb06, .a=0x44, .x=0xcb, .y=0xe8, .sp=0x98, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xeb06, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xeb07, .a=0x44, .x=0xcb, .y=0xe8, .sp=0x98, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xeb06, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xeb06, .value=0xe0, .type=IO_READ},
        {.addr=0xeb07, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0264) {
    const struct CPU_State initial_cpu = {.pc=0xfa5a, .a=0x8b, .x=0x5e, .y=0xc6, .sp=0x0d, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xfa5a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfa5b, .a=0x8b, .x=0x5e, .y=0xc6, .sp=0x0d, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xfa5a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfa5a, .value=0xe0, .type=IO_READ},
        {.addr=0xfa5b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0265) {
    const struct CPU_State initial_cpu = {.pc=0xdc5d, .a=0x1b, .x=0xd8, .y=0x81, .sp=0x6d, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xdc5d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xdc5e, .a=0x1b, .x=0xd8, .y=0x81, .sp=0x6d, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xdc5d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdc5d, .value=0xe0, .type=IO_READ},
        {.addr=0xdc5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0266) {
    const struct CPU_State initial_cpu = {.pc=0xf813, .a=0x3d, .x=0x52, .y=0xd8, .sp=0x3a, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xf813, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf814, .a=0x3d, .x=0x52, .y=0xd8, .sp=0x3a, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xf813, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf813, .value=0xe0, .type=IO_READ},
        {.addr=0xf814, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0267) {
    const struct CPU_State initial_cpu = {.pc=0x6cfe, .a=0x6d, .x=0xad, .y=0x13, .sp=0x4f, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x6cfe, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6cff, .a=0x6d, .x=0xad, .y=0x13, .sp=0x4f, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x6cfe, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6cfe, .value=0xe0, .type=IO_READ},
        {.addr=0x6cff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0268) {
    const struct CPU_State initial_cpu = {.pc=0x1f9b, .a=0xbe, .x=0xdb, .y=0xe0, .sp=0x0b, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x1f9b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1f9c, .a=0xbe, .x=0xdb, .y=0xe0, .sp=0x0b, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x1f9b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1f9b, .value=0xe0, .type=IO_READ},
        {.addr=0x1f9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0269) {
    const struct CPU_State initial_cpu = {.pc=0x44d5, .a=0xb4, .x=0x2b, .y=0x64, .sp=0xf5, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x44d5, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x44d6, .a=0xb4, .x=0x2b, .y=0x64, .sp=0xf5, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x44d5, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x44d5, .value=0xe0, .type=IO_READ},
        {.addr=0x44d6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_026A) {
    const struct CPU_State initial_cpu = {.pc=0xae6d, .a=0xde, .x=0x1f, .y=0x77, .sp=0x2e, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xae6d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xae6e, .a=0xde, .x=0x1f, .y=0x77, .sp=0x2e, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xae6d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xae6d, .value=0xe0, .type=IO_READ},
        {.addr=0xae6e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_026B) {
    const struct CPU_State initial_cpu = {.pc=0x0f5b, .a=0x11, .x=0xf4, .y=0xa2, .sp=0xeb, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0f5b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0f5c, .a=0x11, .x=0xf4, .y=0xa2, .sp=0xeb, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0f5b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0f5b, .value=0xe0, .type=IO_READ},
        {.addr=0x0f5c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_026C) {
    const struct CPU_State initial_cpu = {.pc=0xd757, .a=0x1b, .x=0x35, .y=0x78, .sp=0x09, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xd757, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd758, .a=0x1b, .x=0x35, .y=0x78, .sp=0x09, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xd757, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd757, .value=0xe0, .type=IO_READ},
        {.addr=0xd758, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_026D) {
    const struct CPU_State initial_cpu = {.pc=0xd81d, .a=0x1c, .x=0x28, .y=0x8c, .sp=0x93, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xd81d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd81e, .a=0x1c, .x=0x28, .y=0x8c, .sp=0x93, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xd81d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd81d, .value=0xe0, .type=IO_READ},
        {.addr=0xd81e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_026E) {
    const struct CPU_State initial_cpu = {.pc=0x882a, .a=0xdf, .x=0xe0, .y=0xe4, .sp=0x33, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x882a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x882b, .a=0xdf, .x=0xe0, .y=0xe4, .sp=0x33, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x882a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x882a, .value=0xe0, .type=IO_READ},
        {.addr=0x882b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_026F) {
    const struct CPU_State initial_cpu = {.pc=0x3c1d, .a=0x33, .x=0x38, .y=0x93, .sp=0x27, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x3c1d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3c1e, .a=0x33, .x=0x38, .y=0x93, .sp=0x27, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x3c1d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3c1d, .value=0xe0, .type=IO_READ},
        {.addr=0x3c1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0270) {
    const struct CPU_State initial_cpu = {.pc=0xde69, .a=0x60, .x=0xc9, .y=0xad, .sp=0x81, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xde69, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xde6a, .a=0x60, .x=0xc9, .y=0xad, .sp=0x81, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xde69, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xde69, .value=0xe0, .type=IO_READ},
        {.addr=0xde6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0271) {
    const struct CPU_State initial_cpu = {.pc=0xecf6, .a=0xf3, .x=0x51, .y=0x07, .sp=0x2d, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xecf6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xecf7, .a=0xf3, .x=0x51, .y=0x07, .sp=0x2d, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xecf6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xecf6, .value=0xe0, .type=IO_READ},
        {.addr=0xecf7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0272) {
    const struct CPU_State initial_cpu = {.pc=0xf28c, .a=0x2c, .x=0x1c, .y=0x45, .sp=0x4d, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xf28c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf28d, .a=0x2c, .x=0x1c, .y=0x45, .sp=0x4d, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xf28c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf28c, .value=0xe0, .type=IO_READ},
        {.addr=0xf28d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0273) {
    const struct CPU_State initial_cpu = {.pc=0x93e3, .a=0x02, .x=0xde, .y=0x45, .sp=0x85, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x93e3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x93e4, .a=0x02, .x=0xde, .y=0x45, .sp=0x85, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x93e3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x93e3, .value=0xe0, .type=IO_READ},
        {.addr=0x93e4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0274) {
    const struct CPU_State initial_cpu = {.pc=0xed4d, .a=0x5e, .x=0x30, .y=0x75, .sp=0x9e, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xed4d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xed4e, .a=0x5e, .x=0x30, .y=0x75, .sp=0x9e, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xed4d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xed4d, .value=0xe0, .type=IO_READ},
        {.addr=0xed4e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0275) {
    const struct CPU_State initial_cpu = {.pc=0xa42d, .a=0xdc, .x=0x22, .y=0x4f, .sp=0x43, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xa42d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa42e, .a=0xdc, .x=0x22, .y=0x4f, .sp=0x43, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xa42d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa42d, .value=0xe0, .type=IO_READ},
        {.addr=0xa42e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0276) {
    const struct CPU_State initial_cpu = {.pc=0x90f3, .a=0x69, .x=0xe9, .y=0xfc, .sp=0x7e, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x90f3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x90f4, .a=0x69, .x=0xe9, .y=0xfc, .sp=0x7e, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x90f3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x90f3, .value=0xe0, .type=IO_READ},
        {.addr=0x90f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0277) {
    const struct CPU_State initial_cpu = {.pc=0x95f1, .a=0xbf, .x=0xab, .y=0xcd, .sp=0xb9, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x95f1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x95f2, .a=0xbf, .x=0xab, .y=0xcd, .sp=0xb9, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x95f1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x95f1, .value=0xe0, .type=IO_READ},
        {.addr=0x95f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0278) {
    const struct CPU_State initial_cpu = {.pc=0xd5d9, .a=0xe4, .x=0xbc, .y=0x06, .sp=0x5e, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xd5d9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd5da, .a=0xe4, .x=0xbc, .y=0x06, .sp=0x5e, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xd5d9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd5d9, .value=0xe0, .type=IO_READ},
        {.addr=0xd5da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0279) {
    const struct CPU_State initial_cpu = {.pc=0x0109, .a=0x1d, .x=0x56, .y=0x60, .sp=0xe7, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x010a, .a=0x1d, .x=0x56, .y=0x60, .sp=0xe7, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0109, .value=0xe0, .type=IO_READ},
        {.addr=0x010a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_027A) {
    const struct CPU_State initial_cpu = {.pc=0x1d9a, .a=0x4b, .x=0xa7, .y=0xe4, .sp=0x33, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x1d9a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1d9b, .a=0x4b, .x=0xa7, .y=0xe4, .sp=0x33, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x1d9a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1d9a, .value=0xe0, .type=IO_READ},
        {.addr=0x1d9b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_027B) {
    const struct CPU_State initial_cpu = {.pc=0x4510, .a=0x70, .x=0xfb, .y=0x44, .sp=0xa7, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x4510, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4511, .a=0x70, .x=0xfb, .y=0x44, .sp=0xa7, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x4510, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4510, .value=0xe0, .type=IO_READ},
        {.addr=0x4511, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_027C) {
    const struct CPU_State initial_cpu = {.pc=0x18cd, .a=0xf6, .x=0x57, .y=0x22, .sp=0x39, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x18cd, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x18ce, .a=0xf6, .x=0x57, .y=0x22, .sp=0x39, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x18cd, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x18cd, .value=0xe0, .type=IO_READ},
        {.addr=0x18ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_027D) {
    const struct CPU_State initial_cpu = {.pc=0xbe18, .a=0x76, .x=0xb8, .y=0x87, .sp=0x53, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xbe18, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xbe19, .a=0x76, .x=0xb8, .y=0x87, .sp=0x53, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xbe18, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xbe18, .value=0xe0, .type=IO_READ},
        {.addr=0xbe19, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_027E) {
    const struct CPU_State initial_cpu = {.pc=0xcdd1, .a=0xe0, .x=0x2b, .y=0xaf, .sp=0x57, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xcdd1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcdd2, .a=0xe0, .x=0x2b, .y=0xaf, .sp=0x57, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xcdd1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcdd1, .value=0xe0, .type=IO_READ},
        {.addr=0xcdd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_027F) {
    const struct CPU_State initial_cpu = {.pc=0xceee, .a=0x92, .x=0x1f, .y=0x54, .sp=0x1d, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xceee, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xceef, .a=0x92, .x=0x1f, .y=0x54, .sp=0x1d, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xceee, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xceee, .value=0xe0, .type=IO_READ},
        {.addr=0xceef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0280) {
    const struct CPU_State initial_cpu = {.pc=0x5f97, .a=0x67, .x=0x1a, .y=0xfd, .sp=0x70, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x5f97, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5f98, .a=0x67, .x=0x1a, .y=0xfd, .sp=0x70, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x5f97, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5f97, .value=0xe0, .type=IO_READ},
        {.addr=0x5f98, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0281) {
    const struct CPU_State initial_cpu = {.pc=0x2d51, .a=0x39, .x=0x4c, .y=0x12, .sp=0xf0, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x2d51, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2d52, .a=0x39, .x=0x4c, .y=0x12, .sp=0xf0, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x2d51, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2d51, .value=0xe0, .type=IO_READ},
        {.addr=0x2d52, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0282) {
    const struct CPU_State initial_cpu = {.pc=0x0fbf, .a=0xc2, .x=0x58, .y=0xaa, .sp=0x8e, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x0fbf, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0fc0, .a=0xc2, .x=0x58, .y=0xaa, .sp=0x8e, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0fbf, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0fbf, .value=0xe0, .type=IO_READ},
        {.addr=0x0fc0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0283) {
    const struct CPU_State initial_cpu = {.pc=0x0898, .a=0x74, .x=0xd5, .y=0x7f, .sp=0x78, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0898, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0899, .a=0x74, .x=0xd5, .y=0x7f, .sp=0x78, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x0898, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0898, .value=0xe0, .type=IO_READ},
        {.addr=0x0899, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0284) {
    const struct CPU_State initial_cpu = {.pc=0x69e6, .a=0x3a, .x=0x2b, .y=0x57, .sp=0x1a, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x69e6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x69e7, .a=0x3a, .x=0x2b, .y=0x57, .sp=0x1a, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x69e6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x69e6, .value=0xe0, .type=IO_READ},
        {.addr=0x69e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0285) {
    const struct CPU_State initial_cpu = {.pc=0x6b12, .a=0x8e, .x=0x28, .y=0xd6, .sp=0x18, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x6b12, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6b13, .a=0x8e, .x=0x28, .y=0xd6, .sp=0x18, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x6b12, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6b12, .value=0xe0, .type=IO_READ},
        {.addr=0x6b13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0286) {
    const struct CPU_State initial_cpu = {.pc=0x3afb, .a=0x08, .x=0x97, .y=0xd8, .sp=0x94, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x3afb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3afc, .a=0x08, .x=0x97, .y=0xd8, .sp=0x94, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x3afb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3afb, .value=0xe0, .type=IO_READ},
        {.addr=0x3afc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0287) {
    const struct CPU_State initial_cpu = {.pc=0x4b04, .a=0x6c, .x=0xa6, .y=0x52, .sp=0xf5, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x4b04, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4b05, .a=0x6c, .x=0xa6, .y=0x52, .sp=0xf5, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x4b04, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4b04, .value=0xe0, .type=IO_READ},
        {.addr=0x4b05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0288) {
    const struct CPU_State initial_cpu = {.pc=0x727f, .a=0x3f, .x=0xfe, .y=0x23, .sp=0xf9, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x727f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7280, .a=0x3f, .x=0xfe, .y=0x23, .sp=0xf9, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x727f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x727f, .value=0xe0, .type=IO_READ},
        {.addr=0x7280, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0289) {
    const struct CPU_State initial_cpu = {.pc=0x640e, .a=0x37, .x=0x98, .y=0xc6, .sp=0xf3, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x640e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x640f, .a=0x37, .x=0x98, .y=0xc6, .sp=0xf3, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x640e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x640e, .value=0xe0, .type=IO_READ},
        {.addr=0x640f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_028A) {
    const struct CPU_State initial_cpu = {.pc=0x0a73, .a=0x59, .x=0x83, .y=0x69, .sp=0xc1, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0a73, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0a74, .a=0x59, .x=0x83, .y=0x69, .sp=0xc1, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x0a73, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0a73, .value=0xe0, .type=IO_READ},
        {.addr=0x0a74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_028B) {
    const struct CPU_State initial_cpu = {.pc=0x9936, .a=0xb9, .x=0xfb, .y=0x1a, .sp=0xbb, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x9936, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9937, .a=0xb9, .x=0xfb, .y=0x1a, .sp=0xbb, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x9936, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9936, .value=0xe0, .type=IO_READ},
        {.addr=0x9937, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_028C) {
    const struct CPU_State initial_cpu = {.pc=0x06c2, .a=0xa5, .x=0x3c, .y=0x0e, .sp=0xdb, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x06c2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x06c3, .a=0xa5, .x=0x3c, .y=0x0e, .sp=0xdb, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x06c2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x06c2, .value=0xe0, .type=IO_READ},
        {.addr=0x06c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_028D) {
    const struct CPU_State initial_cpu = {.pc=0x426c, .a=0xb4, .x=0x34, .y=0x98, .sp=0x91, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x426c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x426d, .a=0xb4, .x=0x34, .y=0x98, .sp=0x91, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x426c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x426c, .value=0xe0, .type=IO_READ},
        {.addr=0x426d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_028E) {
    const struct CPU_State initial_cpu = {.pc=0x4089, .a=0x4d, .x=0x05, .y=0xcc, .sp=0x40, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x4089, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x408a, .a=0x4d, .x=0x05, .y=0xcc, .sp=0x40, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x4089, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4089, .value=0xe0, .type=IO_READ},
        {.addr=0x408a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_028F) {
    const struct CPU_State initial_cpu = {.pc=0x0d46, .a=0x58, .x=0x66, .y=0xce, .sp=0xa9, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0d46, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0d47, .a=0x58, .x=0x66, .y=0xce, .sp=0xa9, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x0d46, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0d46, .value=0xe0, .type=IO_READ},
        {.addr=0x0d47, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0290) {
    const struct CPU_State initial_cpu = {.pc=0x6dfb, .a=0x62, .x=0xf4, .y=0xa1, .sp=0x47, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x6dfb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6dfc, .a=0x62, .x=0xf4, .y=0xa1, .sp=0x47, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x6dfb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6dfb, .value=0xe0, .type=IO_READ},
        {.addr=0x6dfc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0291) {
    const struct CPU_State initial_cpu = {.pc=0x8b26, .a=0x49, .x=0xc8, .y=0xc5, .sp=0xc3, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x8b26, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8b27, .a=0x49, .x=0xc8, .y=0xc5, .sp=0xc3, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x8b26, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8b26, .value=0xe0, .type=IO_READ},
        {.addr=0x8b27, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0292) {
    const struct CPU_State initial_cpu = {.pc=0x313b, .a=0xbc, .x=0x21, .y=0x4b, .sp=0x80, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x313b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x313c, .a=0xbc, .x=0x21, .y=0x4b, .sp=0x80, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x313b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x313b, .value=0xe0, .type=IO_READ},
        {.addr=0x313c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0293) {
    const struct CPU_State initial_cpu = {.pc=0xf799, .a=0xb6, .x=0xc5, .y=0x87, .sp=0xde, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0xf799, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf79a, .a=0xb6, .x=0xc5, .y=0x87, .sp=0xde, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xf799, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf799, .value=0xe0, .type=IO_READ},
        {.addr=0xf79a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0294) {
    const struct CPU_State initial_cpu = {.pc=0xccee, .a=0xed, .x=0x78, .y=0xba, .sp=0x4e, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xccee, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xccef, .a=0xed, .x=0x78, .y=0xba, .sp=0x4e, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xccee, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xccee, .value=0xe0, .type=IO_READ},
        {.addr=0xccef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0295) {
    const struct CPU_State initial_cpu = {.pc=0x17cd, .a=0x79, .x=0x45, .y=0x17, .sp=0xef, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x17cd, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x17ce, .a=0x79, .x=0x45, .y=0x17, .sp=0xef, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x17cd, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x17cd, .value=0xe0, .type=IO_READ},
        {.addr=0x17ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0296) {
    const struct CPU_State initial_cpu = {.pc=0xd2d8, .a=0x30, .x=0x22, .y=0x8a, .sp=0xa8, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xd2d8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd2d9, .a=0x30, .x=0x22, .y=0x8a, .sp=0xa8, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xd2d8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd2d8, .value=0xe0, .type=IO_READ},
        {.addr=0xd2d9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0297) {
    const struct CPU_State initial_cpu = {.pc=0x06cc, .a=0xd4, .x=0xf8, .y=0xc7, .sp=0x1f, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x06cc, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x06cd, .a=0xd4, .x=0xf8, .y=0xc7, .sp=0x1f, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x06cc, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x06cc, .value=0xe0, .type=IO_READ},
        {.addr=0x06cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0298) {
    const struct CPU_State initial_cpu = {.pc=0x9de8, .a=0xfd, .x=0x70, .y=0x72, .sp=0xa4, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x9de8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9de9, .a=0xfd, .x=0x70, .y=0x72, .sp=0xa4, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x9de8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9de8, .value=0xe0, .type=IO_READ},
        {.addr=0x9de9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0299) {
    const struct CPU_State initial_cpu = {.pc=0x49a6, .a=0x9c, .x=0x71, .y=0xc8, .sp=0x8d, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x49a6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x49a7, .a=0x9c, .x=0x71, .y=0xc8, .sp=0x8d, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x49a6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x49a6, .value=0xe0, .type=IO_READ},
        {.addr=0x49a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_029A) {
    const struct CPU_State initial_cpu = {.pc=0x32d7, .a=0x53, .x=0x30, .y=0xe8, .sp=0xb8, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x32d7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x32d8, .a=0x53, .x=0x30, .y=0xe8, .sp=0xb8, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x32d7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x32d7, .value=0xe0, .type=IO_READ},
        {.addr=0x32d8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_029B) {
    const struct CPU_State initial_cpu = {.pc=0x299a, .a=0xca, .x=0x2b, .y=0x8a, .sp=0x77, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x299a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x299b, .a=0xca, .x=0x2b, .y=0x8a, .sp=0x77, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x299a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x299a, .value=0xe0, .type=IO_READ},
        {.addr=0x299b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_029C) {
    const struct CPU_State initial_cpu = {.pc=0xa9f7, .a=0x97, .x=0xc8, .y=0x21, .sp=0x4a, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xa9f7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa9f8, .a=0x97, .x=0xc8, .y=0x21, .sp=0x4a, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xa9f7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa9f7, .value=0xe0, .type=IO_READ},
        {.addr=0xa9f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_029D) {
    const struct CPU_State initial_cpu = {.pc=0x6603, .a=0xea, .x=0x45, .y=0x62, .sp=0x59, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x6603, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6604, .a=0xea, .x=0x45, .y=0x62, .sp=0x59, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x6603, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6603, .value=0xe0, .type=IO_READ},
        {.addr=0x6604, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_029E) {
    const struct CPU_State initial_cpu = {.pc=0xe416, .a=0xe1, .x=0x17, .y=0x77, .sp=0xfa, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xe416, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe417, .a=0xe1, .x=0x17, .y=0x77, .sp=0xfa, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xe416, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe416, .value=0xe0, .type=IO_READ},
        {.addr=0xe417, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_029F) {
    const struct CPU_State initial_cpu = {.pc=0x143b, .a=0x96, .x=0xbe, .y=0x72, .sp=0x1f, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x143b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x143c, .a=0x96, .x=0xbe, .y=0x72, .sp=0x1f, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x143b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x143b, .value=0xe0, .type=IO_READ},
        {.addr=0x143c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x5f85, .a=0x0c, .x=0x31, .y=0x60, .sp=0xa1, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x5f85, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5f86, .a=0x0c, .x=0x31, .y=0x60, .sp=0xa1, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x5f85, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5f85, .value=0xe0, .type=IO_READ},
        {.addr=0x5f86, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xa158, .a=0x30, .x=0x37, .y=0x0d, .sp=0x67, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xa158, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa159, .a=0x30, .x=0x37, .y=0x0d, .sp=0x67, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0xa158, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa158, .value=0xe0, .type=IO_READ},
        {.addr=0xa159, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xc8fb, .a=0x08, .x=0x4f, .y=0x76, .sp=0xc0, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xc8fb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc8fc, .a=0x08, .x=0x4f, .y=0x76, .sp=0xc0, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xc8fb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc8fb, .value=0xe0, .type=IO_READ},
        {.addr=0xc8fc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x46f1, .a=0xbf, .x=0x23, .y=0x05, .sp=0xe6, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x46f1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x46f2, .a=0xbf, .x=0x23, .y=0x05, .sp=0xe6, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x46f1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x46f1, .value=0xe0, .type=IO_READ},
        {.addr=0x46f2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xcb71, .a=0x7f, .x=0xc6, .y=0x77, .sp=0x8a, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xcb71, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcb72, .a=0x7f, .x=0xc6, .y=0x77, .sp=0x8a, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xcb71, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcb71, .value=0xe0, .type=IO_READ},
        {.addr=0xcb72, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x8b8f, .a=0x07, .x=0x12, .y=0x90, .sp=0xe4, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x8b8f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8b90, .a=0x07, .x=0x12, .y=0x90, .sp=0xe4, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x8b8f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8b8f, .value=0xe0, .type=IO_READ},
        {.addr=0x8b90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x9b2f, .a=0x71, .x=0x0e, .y=0x1b, .sp=0xa2, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x9b2f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9b30, .a=0x71, .x=0x0e, .y=0x1b, .sp=0xa2, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x9b2f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9b2f, .value=0xe0, .type=IO_READ},
        {.addr=0x9b30, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x6d57, .a=0x20, .x=0x7c, .y=0xec, .sp=0x00, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x6d57, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6d58, .a=0x20, .x=0x7c, .y=0xec, .sp=0x00, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x6d57, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6d57, .value=0xe0, .type=IO_READ},
        {.addr=0x6d58, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xfcbb, .a=0x93, .x=0x64, .y=0x6d, .sp=0x24, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xfcbb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfcbc, .a=0x93, .x=0x64, .y=0x6d, .sp=0x24, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xfcbb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfcbb, .value=0xe0, .type=IO_READ},
        {.addr=0xfcbc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x09da, .a=0xa4, .x=0x7a, .y=0x1f, .sp=0x22, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x09da, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x09db, .a=0xa4, .x=0x7a, .y=0x1f, .sp=0x22, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x09da, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x09da, .value=0xe0, .type=IO_READ},
        {.addr=0x09db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x514b, .a=0xf9, .x=0xc7, .y=0x9c, .sp=0xec, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x514b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x514c, .a=0xf9, .x=0xc7, .y=0x9c, .sp=0xec, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x514b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x514b, .value=0xe0, .type=IO_READ},
        {.addr=0x514c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x057f, .a=0x6a, .x=0x63, .y=0xcd, .sp=0x38, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x057f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0580, .a=0x6a, .x=0x63, .y=0xcd, .sp=0x38, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x057f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x057f, .value=0xe0, .type=IO_READ},
        {.addr=0x0580, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x65ab, .a=0xda, .x=0xf4, .y=0x03, .sp=0x32, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x65ab, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x65ac, .a=0xda, .x=0xf4, .y=0x03, .sp=0x32, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x65ab, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x65ab, .value=0xe0, .type=IO_READ},
        {.addr=0x65ac, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x4712, .a=0x71, .x=0xde, .y=0x78, .sp=0x6b, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x4712, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4713, .a=0x71, .x=0xde, .y=0x78, .sp=0x6b, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x4712, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4712, .value=0xe0, .type=IO_READ},
        {.addr=0x4713, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x3913, .a=0xad, .x=0xde, .y=0x58, .sp=0x98, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x3913, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3914, .a=0xad, .x=0xde, .y=0x58, .sp=0x98, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x3913, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3913, .value=0xe0, .type=IO_READ},
        {.addr=0x3914, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x7803, .a=0xac, .x=0xff, .y=0x6c, .sp=0xf6, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x7803, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7804, .a=0xac, .x=0xff, .y=0x6c, .sp=0xf6, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x7803, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7803, .value=0xe0, .type=IO_READ},
        {.addr=0x7804, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x6780, .a=0xea, .x=0x78, .y=0xce, .sp=0x32, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x6780, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6781, .a=0xea, .x=0x78, .y=0xce, .sp=0x32, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x6780, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6780, .value=0xe0, .type=IO_READ},
        {.addr=0x6781, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x4b5d, .a=0x13, .x=0x91, .y=0x3d, .sp=0x0e, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x4b5d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4b5e, .a=0x13, .x=0x91, .y=0x3d, .sp=0x0e, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x4b5d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4b5d, .value=0xe0, .type=IO_READ},
        {.addr=0x4b5e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x7630, .a=0xac, .x=0x5c, .y=0xca, .sp=0x08, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x7630, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7631, .a=0xac, .x=0x5c, .y=0xca, .sp=0x08, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x7630, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7630, .value=0xe0, .type=IO_READ},
        {.addr=0x7631, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x24a6, .a=0x2a, .x=0x50, .y=0x8e, .sp=0xd7, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x24a6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x24a7, .a=0x2a, .x=0x50, .y=0x8e, .sp=0xd7, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x24a6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x24a6, .value=0xe0, .type=IO_READ},
        {.addr=0x24a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x4030, .a=0x56, .x=0x7a, .y=0x9a, .sp=0x05, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x4030, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4031, .a=0x56, .x=0x7a, .y=0x9a, .sp=0x05, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x4030, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4030, .value=0xe0, .type=IO_READ},
        {.addr=0x4031, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x7710, .a=0xf4, .x=0xb3, .y=0xdc, .sp=0xd2, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x7710, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7711, .a=0xf4, .x=0xb3, .y=0xdc, .sp=0xd2, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x7710, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7710, .value=0xe0, .type=IO_READ},
        {.addr=0x7711, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02B6) {
    const struct CPU_State initial_cpu = {.pc=0xcfda, .a=0xc1, .x=0xc4, .y=0x1d, .sp=0x1a, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xcfda, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcfdb, .a=0xc1, .x=0xc4, .y=0x1d, .sp=0x1a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xcfda, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcfda, .value=0xe0, .type=IO_READ},
        {.addr=0xcfdb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x4e28, .a=0x93, .x=0x05, .y=0xc4, .sp=0x66, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x4e28, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4e29, .a=0x93, .x=0x05, .y=0xc4, .sp=0x66, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x4e28, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4e28, .value=0xe0, .type=IO_READ},
        {.addr=0x4e29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x570d, .a=0x0f, .x=0xcb, .y=0x33, .sp=0x2f, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x570d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x570e, .a=0x0f, .x=0xcb, .y=0x33, .sp=0x2f, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x570d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x570d, .value=0xe0, .type=IO_READ},
        {.addr=0x570e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x6a08, .a=0xc5, .x=0xfa, .y=0x03, .sp=0x51, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x6a08, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6a09, .a=0xc5, .x=0xfa, .y=0x03, .sp=0x51, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x6a08, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6a08, .value=0xe0, .type=IO_READ},
        {.addr=0x6a09, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xfd47, .a=0x2f, .x=0x49, .y=0x63, .sp=0x81, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xfd47, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfd48, .a=0x2f, .x=0x49, .y=0x63, .sp=0x81, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xfd47, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfd47, .value=0xe0, .type=IO_READ},
        {.addr=0xfd48, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x6428, .a=0x03, .x=0x2c, .y=0xf8, .sp=0x5a, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x6428, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6429, .a=0x03, .x=0x2c, .y=0xf8, .sp=0x5a, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x6428, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6428, .value=0xe0, .type=IO_READ},
        {.addr=0x6429, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x087c, .a=0xe9, .x=0x5d, .y=0x0d, .sp=0x79, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x087c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x087d, .a=0xe9, .x=0x5d, .y=0x0d, .sp=0x79, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x087c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x087c, .value=0xe0, .type=IO_READ},
        {.addr=0x087d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x5b83, .a=0x1f, .x=0x20, .y=0xd4, .sp=0x6b, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x5b83, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5b84, .a=0x1f, .x=0x20, .y=0xd4, .sp=0x6b, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x5b83, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5b83, .value=0xe0, .type=IO_READ},
        {.addr=0x5b84, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x02ad, .a=0x9f, .x=0x03, .y=0x7a, .sp=0x86, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x02ad, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x02ae, .a=0x9f, .x=0x03, .y=0x7a, .sp=0x86, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x02ad, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x02ad, .value=0xe0, .type=IO_READ},
        {.addr=0x02ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x32da, .a=0x0b, .x=0x01, .y=0x26, .sp=0x68, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x32da, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x32db, .a=0x0b, .x=0x01, .y=0x26, .sp=0x68, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x32da, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x32da, .value=0xe0, .type=IO_READ},
        {.addr=0x32db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x4326, .a=0x03, .x=0x40, .y=0xb3, .sp=0x2b, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x4326, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4327, .a=0x03, .x=0x40, .y=0xb3, .sp=0x2b, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x4326, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4326, .value=0xe0, .type=IO_READ},
        {.addr=0x4327, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x4135, .a=0xa7, .x=0x5e, .y=0xff, .sp=0x0a, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x4135, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4136, .a=0xa7, .x=0x5e, .y=0xff, .sp=0x0a, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x4135, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4135, .value=0xe0, .type=IO_READ},
        {.addr=0x4136, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xc1f2, .a=0xe7, .x=0xf2, .y=0xda, .sp=0x87, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0xc1f2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc1f3, .a=0xe7, .x=0xf2, .y=0xda, .sp=0x87, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xc1f2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc1f2, .value=0xe0, .type=IO_READ},
        {.addr=0xc1f3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x976c, .a=0xdd, .x=0xc6, .y=0xb9, .sp=0xdb, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x976c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x976d, .a=0xdd, .x=0xc6, .y=0xb9, .sp=0xdb, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x976c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x976c, .value=0xe0, .type=IO_READ},
        {.addr=0x976d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xebc6, .a=0x27, .x=0x35, .y=0x1e, .sp=0x00, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xebc6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xebc7, .a=0x27, .x=0x35, .y=0x1e, .sp=0x00, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xebc6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xebc6, .value=0xe0, .type=IO_READ},
        {.addr=0xebc7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02C5) {
    const struct CPU_State initial_cpu = {.pc=0xabdf, .a=0x29, .x=0x45, .y=0x0e, .sp=0x8f, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xabdf, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xabe0, .a=0x29, .x=0x45, .y=0x0e, .sp=0x8f, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xabdf, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xabdf, .value=0xe0, .type=IO_READ},
        {.addr=0xabe0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x6b5c, .a=0x8e, .x=0xd2, .y=0xeb, .sp=0xc9, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x6b5c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6b5d, .a=0x8e, .x=0xd2, .y=0xeb, .sp=0xc9, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x6b5c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6b5c, .value=0xe0, .type=IO_READ},
        {.addr=0x6b5d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x3575, .a=0x38, .x=0x9e, .y=0x73, .sp=0x9d, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x3575, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3576, .a=0x38, .x=0x9e, .y=0x73, .sp=0x9d, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x3575, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3575, .value=0xe0, .type=IO_READ},
        {.addr=0x3576, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x93ad, .a=0x10, .x=0x09, .y=0xbb, .sp=0xdb, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x93ad, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x93ae, .a=0x10, .x=0x09, .y=0xbb, .sp=0xdb, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x93ad, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x93ad, .value=0xe0, .type=IO_READ},
        {.addr=0x93ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x0d04, .a=0xf1, .x=0x78, .y=0xcf, .sp=0x3d, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0d04, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0d05, .a=0xf1, .x=0x78, .y=0xcf, .sp=0x3d, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0d04, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0d04, .value=0xe0, .type=IO_READ},
        {.addr=0x0d05, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x217b, .a=0x7f, .x=0x8e, .y=0x59, .sp=0xd3, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x217b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x217c, .a=0x7f, .x=0x8e, .y=0x59, .sp=0xd3, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x217b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x217b, .value=0xe0, .type=IO_READ},
        {.addr=0x217c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x90a1, .a=0xa1, .x=0x41, .y=0x63, .sp=0xa1, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x90a1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x90a2, .a=0xa1, .x=0x41, .y=0x63, .sp=0xa1, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x90a1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x90a1, .value=0xe0, .type=IO_READ},
        {.addr=0x90a2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02CC) {
    const struct CPU_State initial_cpu = {.pc=0x5bed, .a=0x92, .x=0xe2, .y=0xfb, .sp=0x06, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x5bed, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5bee, .a=0x92, .x=0xe2, .y=0xfb, .sp=0x06, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x5bed, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5bed, .value=0xe0, .type=IO_READ},
        {.addr=0x5bee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x2630, .a=0xbb, .x=0x9a, .y=0x09, .sp=0x29, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x2630, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2631, .a=0xbb, .x=0x9a, .y=0x09, .sp=0x29, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x2630, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2630, .value=0xe0, .type=IO_READ},
        {.addr=0x2631, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02CE) {
    const struct CPU_State initial_cpu = {.pc=0xc699, .a=0x73, .x=0x2a, .y=0xeb, .sp=0x81, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0xc699, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc69a, .a=0x73, .x=0x2a, .y=0xeb, .sp=0x81, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xc699, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc699, .value=0xe0, .type=IO_READ},
        {.addr=0xc69a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xfa0b, .a=0x6f, .x=0x2d, .y=0x23, .sp=0xa5, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xfa0b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfa0c, .a=0x6f, .x=0x2d, .y=0x23, .sp=0xa5, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xfa0b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfa0b, .value=0xe0, .type=IO_READ},
        {.addr=0xfa0c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xe4f4, .a=0x32, .x=0x31, .y=0x4e, .sp=0x4f, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xe4f4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe4f5, .a=0x32, .x=0x31, .y=0x4e, .sp=0x4f, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xe4f4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe4f4, .value=0xe0, .type=IO_READ},
        {.addr=0xe4f5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xfc65, .a=0xc5, .x=0x2b, .y=0x71, .sp=0x06, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xfc65, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfc66, .a=0xc5, .x=0x2b, .y=0x71, .sp=0x06, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xfc65, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfc65, .value=0xe0, .type=IO_READ},
        {.addr=0xfc66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x5221, .a=0xeb, .x=0x1d, .y=0x3f, .sp=0x63, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x5221, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5222, .a=0xeb, .x=0x1d, .y=0x3f, .sp=0x63, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x5221, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5221, .value=0xe0, .type=IO_READ},
        {.addr=0x5222, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x3b44, .a=0x8f, .x=0xcc, .y=0x53, .sp=0x97, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x3b44, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3b45, .a=0x8f, .x=0xcc, .y=0x53, .sp=0x97, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x3b44, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3b44, .value=0xe0, .type=IO_READ},
        {.addr=0x3b45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x25a9, .a=0xa3, .x=0x26, .y=0xf9, .sp=0x98, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x25a9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x25aa, .a=0xa3, .x=0x26, .y=0xf9, .sp=0x98, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x25a9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x25a9, .value=0xe0, .type=IO_READ},
        {.addr=0x25aa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xdb10, .a=0xfa, .x=0x6a, .y=0x2e, .sp=0x5d, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xdb10, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xdb11, .a=0xfa, .x=0x6a, .y=0x2e, .sp=0x5d, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xdb10, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdb10, .value=0xe0, .type=IO_READ},
        {.addr=0xdb11, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xcc9b, .a=0x4f, .x=0x97, .y=0xad, .sp=0x47, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xcc9b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcc9c, .a=0x4f, .x=0x97, .y=0xad, .sp=0x47, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xcc9b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcc9b, .value=0xe0, .type=IO_READ},
        {.addr=0xcc9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x753c, .a=0x8d, .x=0x42, .y=0x92, .sp=0xd0, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x753c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x753d, .a=0x8d, .x=0x42, .y=0x92, .sp=0xd0, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x753c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x753c, .value=0xe0, .type=IO_READ},
        {.addr=0x753d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x1a7b, .a=0x34, .x=0x28, .y=0x94, .sp=0x9e, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x1a7b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1a7c, .a=0x34, .x=0x28, .y=0x94, .sp=0x9e, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x1a7b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1a7b, .value=0xe0, .type=IO_READ},
        {.addr=0x1a7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x2c99, .a=0x5d, .x=0xbc, .y=0x16, .sp=0x22, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x2c99, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2c9a, .a=0x5d, .x=0xbc, .y=0x16, .sp=0x22, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x2c99, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2c99, .value=0xe0, .type=IO_READ},
        {.addr=0x2c9a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x3229, .a=0xda, .x=0xf1, .y=0xab, .sp=0xf2, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x3229, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x322a, .a=0xda, .x=0xf1, .y=0xab, .sp=0xf2, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x3229, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3229, .value=0xe0, .type=IO_READ},
        {.addr=0x322a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x8649, .a=0x1d, .x=0xcd, .y=0xcd, .sp=0x8b, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x8649, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x864a, .a=0x1d, .x=0xcd, .y=0xcd, .sp=0x8b, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x8649, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8649, .value=0xe0, .type=IO_READ},
        {.addr=0x864a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x2750, .a=0x6d, .x=0x5d, .y=0xd8, .sp=0x89, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x2750, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2751, .a=0x6d, .x=0x5d, .y=0xd8, .sp=0x89, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x2750, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2750, .value=0xe0, .type=IO_READ},
        {.addr=0x2751, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x8157, .a=0xbe, .x=0x50, .y=0x04, .sp=0x8d, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x8157, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8158, .a=0xbe, .x=0x50, .y=0x04, .sp=0x8d, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x8157, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8157, .value=0xe0, .type=IO_READ},
        {.addr=0x8158, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xa748, .a=0xb7, .x=0x8d, .y=0xca, .sp=0xd8, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xa748, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa749, .a=0xb7, .x=0x8d, .y=0xca, .sp=0xd8, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xa748, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa748, .value=0xe0, .type=IO_READ},
        {.addr=0xa749, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xb5af, .a=0x96, .x=0x33, .y=0xe7, .sp=0xe3, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xb5af, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb5b0, .a=0x96, .x=0x33, .y=0xe7, .sp=0xe3, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xb5af, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb5af, .value=0xe0, .type=IO_READ},
        {.addr=0xb5b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x0241, .a=0x2f, .x=0x71, .y=0x2d, .sp=0xa2, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0241, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0242, .a=0x2f, .x=0x71, .y=0x2d, .sp=0xa2, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x0241, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0241, .value=0xe0, .type=IO_READ},
        {.addr=0x0242, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02E1) {
    const struct CPU_State initial_cpu = {.pc=0xc229, .a=0x56, .x=0xae, .y=0x29, .sp=0x7b, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xc229, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc22a, .a=0x56, .x=0xae, .y=0x29, .sp=0x7b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xc229, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc229, .value=0xe0, .type=IO_READ},
        {.addr=0xc22a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xb5df, .a=0xa0, .x=0xb7, .y=0x16, .sp=0xbf, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xb5df, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb5e0, .a=0xa0, .x=0xb7, .y=0x16, .sp=0xbf, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xb5df, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb5df, .value=0xe0, .type=IO_READ},
        {.addr=0xb5e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x9210, .a=0x48, .x=0xe1, .y=0x15, .sp=0x0f, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x9210, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9211, .a=0x48, .x=0xe1, .y=0x15, .sp=0x0f, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x9210, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9210, .value=0xe0, .type=IO_READ},
        {.addr=0x9211, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xb352, .a=0x28, .x=0x9b, .y=0xdc, .sp=0x68, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xb352, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb353, .a=0x28, .x=0x9b, .y=0xdc, .sp=0x68, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xb352, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb352, .value=0xe0, .type=IO_READ},
        {.addr=0xb353, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x89b0, .a=0x77, .x=0xdb, .y=0x5e, .sp=0xeb, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x89b0, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x89b1, .a=0x77, .x=0xdb, .y=0x5e, .sp=0xeb, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x89b0, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x89b0, .value=0xe0, .type=IO_READ},
        {.addr=0x89b1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xba28, .a=0x9c, .x=0x5a, .y=0xb7, .sp=0xfa, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xba28, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xba29, .a=0x9c, .x=0x5a, .y=0xb7, .sp=0xfa, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xba28, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xba28, .value=0xe0, .type=IO_READ},
        {.addr=0xba29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xc330, .a=0xfb, .x=0x03, .y=0xd0, .sp=0x9f, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xc330, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc331, .a=0xfb, .x=0x03, .y=0xd0, .sp=0x9f, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xc330, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc330, .value=0xe0, .type=IO_READ},
        {.addr=0xc331, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xb662, .a=0x16, .x=0x39, .y=0x2f, .sp=0xbf, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xb662, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb663, .a=0x16, .x=0x39, .y=0x2f, .sp=0xbf, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xb662, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb662, .value=0xe0, .type=IO_READ},
        {.addr=0xb663, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x4ee4, .a=0xb8, .x=0x30, .y=0x21, .sp=0xc7, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x4ee4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4ee5, .a=0xb8, .x=0x30, .y=0x21, .sp=0xc7, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x4ee4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4ee4, .value=0xe0, .type=IO_READ},
        {.addr=0x4ee5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xd007, .a=0xaa, .x=0x25, .y=0x28, .sp=0xb0, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xd007, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd008, .a=0xaa, .x=0x25, .y=0x28, .sp=0xb0, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xd007, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd007, .value=0xe0, .type=IO_READ},
        {.addr=0xd008, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xe2d9, .a=0x81, .x=0xfb, .y=0x39, .sp=0xdc, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xe2d9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe2da, .a=0x81, .x=0xfb, .y=0x39, .sp=0xdc, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xe2d9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe2d9, .value=0xe0, .type=IO_READ},
        {.addr=0xe2da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xa49b, .a=0x5a, .x=0x4d, .y=0x2a, .sp=0x9f, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xa49b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa49c, .a=0x5a, .x=0x4d, .y=0x2a, .sp=0x9f, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xa49b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa49b, .value=0xe0, .type=IO_READ},
        {.addr=0xa49c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x510e, .a=0x52, .x=0xf3, .y=0x98, .sp=0x70, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x510e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x510f, .a=0x52, .x=0xf3, .y=0x98, .sp=0x70, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x510e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x510e, .value=0xe0, .type=IO_READ},
        {.addr=0x510f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02EE) {
    const struct CPU_State initial_cpu = {.pc=0x5682, .a=0x7f, .x=0x40, .y=0x03, .sp=0x12, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x5682, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5683, .a=0x7f, .x=0x40, .y=0x03, .sp=0x12, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x5682, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5682, .value=0xe0, .type=IO_READ},
        {.addr=0x5683, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x2df7, .a=0x61, .x=0xf8, .y=0x8c, .sp=0x26, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x2df7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2df8, .a=0x61, .x=0xf8, .y=0x8c, .sp=0x26, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x2df7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2df7, .value=0xe0, .type=IO_READ},
        {.addr=0x2df8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x21f8, .a=0x30, .x=0x66, .y=0xd2, .sp=0xcc, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x21f8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x21f9, .a=0x30, .x=0x66, .y=0xd2, .sp=0xcc, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x21f8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x21f8, .value=0xe0, .type=IO_READ},
        {.addr=0x21f9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02F1) {
    const struct CPU_State initial_cpu = {.pc=0xdb16, .a=0xb6, .x=0x3d, .y=0x8b, .sp=0x97, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xdb16, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xdb17, .a=0xb6, .x=0x3d, .y=0x8b, .sp=0x97, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xdb16, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdb16, .value=0xe0, .type=IO_READ},
        {.addr=0xdb17, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02F2) {
    const struct CPU_State initial_cpu = {.pc=0xe400, .a=0x7e, .x=0xc5, .y=0x66, .sp=0x99, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xe400, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe401, .a=0x7e, .x=0xc5, .y=0x66, .sp=0x99, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xe400, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe400, .value=0xe0, .type=IO_READ},
        {.addr=0xe401, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x9dd4, .a=0x95, .x=0x17, .y=0x24, .sp=0x62, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x9dd4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9dd5, .a=0x95, .x=0x17, .y=0x24, .sp=0x62, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x9dd4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9dd4, .value=0xe0, .type=IO_READ},
        {.addr=0x9dd5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xfd61, .a=0x5f, .x=0xae, .y=0x31, .sp=0x3d, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xfd61, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfd62, .a=0x5f, .x=0xae, .y=0x31, .sp=0x3d, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xfd61, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfd61, .value=0xe0, .type=IO_READ},
        {.addr=0xfd62, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x0f55, .a=0xf7, .x=0x15, .y=0x34, .sp=0x53, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0f55, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0f56, .a=0xf7, .x=0x15, .y=0x34, .sp=0x53, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0f55, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0f55, .value=0xe0, .type=IO_READ},
        {.addr=0x0f56, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x1f69, .a=0xc5, .x=0x51, .y=0xc2, .sp=0x3a, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x1f69, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1f6a, .a=0xc5, .x=0x51, .y=0xc2, .sp=0x3a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x1f69, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1f69, .value=0xe0, .type=IO_READ},
        {.addr=0x1f6a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x8fcf, .a=0x1e, .x=0x44, .y=0x22, .sp=0x66, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x8fcf, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8fd0, .a=0x1e, .x=0x44, .y=0x22, .sp=0x66, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x8fcf, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8fcf, .value=0xe0, .type=IO_READ},
        {.addr=0x8fd0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x59c6, .a=0x29, .x=0x7b, .y=0x49, .sp=0x01, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x59c6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x59c7, .a=0x29, .x=0x7b, .y=0x49, .sp=0x01, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x59c6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x59c6, .value=0xe0, .type=IO_READ},
        {.addr=0x59c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x8331, .a=0x92, .x=0xf1, .y=0x4f, .sp=0xcc, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x8331, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8332, .a=0x92, .x=0xf1, .y=0x4f, .sp=0xcc, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x8331, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8331, .value=0xe0, .type=IO_READ},
        {.addr=0x8332, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xa6c1, .a=0x85, .x=0x59, .y=0x95, .sp=0xca, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xa6c1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa6c2, .a=0x85, .x=0x59, .y=0x95, .sp=0xca, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xa6c1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa6c1, .value=0xe0, .type=IO_READ},
        {.addr=0xa6c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x83ff, .a=0x3d, .x=0x68, .y=0xf7, .sp=0x7b, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x83ff, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8400, .a=0x3d, .x=0x68, .y=0xf7, .sp=0x7b, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x83ff, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x83ff, .value=0xe0, .type=IO_READ},
        {.addr=0x8400, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x0bfc, .a=0x8b, .x=0x57, .y=0xcd, .sp=0xf3, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0bfc, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0bfd, .a=0x8b, .x=0x57, .y=0xcd, .sp=0xf3, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0bfc, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0bfc, .value=0xe0, .type=IO_READ},
        {.addr=0x0bfd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xd07a, .a=0xfa, .x=0x7a, .y=0x4f, .sp=0x11, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xd07a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd07b, .a=0xfa, .x=0x7a, .y=0x4f, .sp=0x11, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xd07a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd07a, .value=0xe0, .type=IO_READ},
        {.addr=0xd07b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x7ef8, .a=0x24, .x=0x5c, .y=0xfd, .sp=0x95, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x7ef8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7ef9, .a=0x24, .x=0x5c, .y=0xfd, .sp=0x95, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x7ef8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7ef8, .value=0xe0, .type=IO_READ},
        {.addr=0x7ef9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x34e4, .a=0x9d, .x=0x59, .y=0x2b, .sp=0xba, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x34e4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x34e5, .a=0x9d, .x=0x59, .y=0x2b, .sp=0xba, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x34e4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x34e4, .value=0xe0, .type=IO_READ},
        {.addr=0x34e5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0300) {
    const struct CPU_State initial_cpu = {.pc=0x258c, .a=0x80, .x=0xaf, .y=0x20, .sp=0xd0, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x258c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x258d, .a=0x80, .x=0xaf, .y=0x20, .sp=0xd0, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x258c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x258c, .value=0xe0, .type=IO_READ},
        {.addr=0x258d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0301) {
    const struct CPU_State initial_cpu = {.pc=0xad41, .a=0x64, .x=0xad, .y=0x21, .sp=0xe1, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xad41, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xad42, .a=0x64, .x=0xad, .y=0x21, .sp=0xe1, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xad41, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xad41, .value=0xe0, .type=IO_READ},
        {.addr=0xad42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0302) {
    const struct CPU_State initial_cpu = {.pc=0xd014, .a=0x88, .x=0x4a, .y=0xaa, .sp=0xcb, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xd014, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd015, .a=0x88, .x=0x4a, .y=0xaa, .sp=0xcb, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xd014, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd014, .value=0xe0, .type=IO_READ},
        {.addr=0xd015, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0303) {
    const struct CPU_State initial_cpu = {.pc=0x2608, .a=0x9d, .x=0xfd, .y=0x80, .sp=0xf8, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x2608, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2609, .a=0x9d, .x=0xfd, .y=0x80, .sp=0xf8, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x2608, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2608, .value=0xe0, .type=IO_READ},
        {.addr=0x2609, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0304) {
    const struct CPU_State initial_cpu = {.pc=0x08c3, .a=0x00, .x=0x71, .y=0xf7, .sp=0xca, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x08c3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x08c4, .a=0x00, .x=0x71, .y=0xf7, .sp=0xca, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x08c3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x08c3, .value=0xe0, .type=IO_READ},
        {.addr=0x08c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0305) {
    const struct CPU_State initial_cpu = {.pc=0xbb25, .a=0x6a, .x=0x24, .y=0xe2, .sp=0x41, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xbb25, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xbb26, .a=0x6a, .x=0x24, .y=0xe2, .sp=0x41, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xbb25, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xbb25, .value=0xe0, .type=IO_READ},
        {.addr=0xbb26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0306) {
    const struct CPU_State initial_cpu = {.pc=0xea0a, .a=0x24, .x=0xd9, .y=0xea, .sp=0x9d, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xea0a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xea0b, .a=0x24, .x=0xd9, .y=0xea, .sp=0x9d, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xea0a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xea0a, .value=0xe0, .type=IO_READ},
        {.addr=0xea0b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0307) {
    const struct CPU_State initial_cpu = {.pc=0xac1c, .a=0x33, .x=0xfa, .y=0x5a, .sp=0xae, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xac1c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xac1d, .a=0x33, .x=0xfa, .y=0x5a, .sp=0xae, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xac1c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xac1c, .value=0xe0, .type=IO_READ},
        {.addr=0xac1d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0308) {
    const struct CPU_State initial_cpu = {.pc=0x9880, .a=0xa2, .x=0x76, .y=0x0e, .sp=0xb0, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x9880, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x9881, .a=0xa2, .x=0x76, .y=0x0e, .sp=0xb0, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9880, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9880, .value=0xe0, .type=IO_READ},
        {.addr=0x9881, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0309) {
    const struct CPU_State initial_cpu = {.pc=0x1fd1, .a=0x8c, .x=0xee, .y=0x74, .sp=0x07, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x1fd1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1fd2, .a=0x8c, .x=0xee, .y=0x74, .sp=0x07, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x1fd1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1fd1, .value=0xe0, .type=IO_READ},
        {.addr=0x1fd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_030A) {
    const struct CPU_State initial_cpu = {.pc=0x48d3, .a=0x76, .x=0x11, .y=0xee, .sp=0xaa, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x48d3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x48d4, .a=0x76, .x=0x11, .y=0xee, .sp=0xaa, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x48d3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x48d3, .value=0xe0, .type=IO_READ},
        {.addr=0x48d4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_030B) {
    const struct CPU_State initial_cpu = {.pc=0x2fc8, .a=0x3c, .x=0x2f, .y=0xe4, .sp=0xc5, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x2fc8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2fc9, .a=0x3c, .x=0x2f, .y=0xe4, .sp=0xc5, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x2fc8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2fc8, .value=0xe0, .type=IO_READ},
        {.addr=0x2fc9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_030C) {
    const struct CPU_State initial_cpu = {.pc=0x8c3d, .a=0x3a, .x=0x01, .y=0x1f, .sp=0xa3, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x8c3d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8c3e, .a=0x3a, .x=0x01, .y=0x1f, .sp=0xa3, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x8c3d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8c3d, .value=0xe0, .type=IO_READ},
        {.addr=0x8c3e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_030D) {
    const struct CPU_State initial_cpu = {.pc=0xc14f, .a=0xc3, .x=0x23, .y=0x7f, .sp=0xdb, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xc14f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc150, .a=0xc3, .x=0x23, .y=0x7f, .sp=0xdb, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xc14f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc14f, .value=0xe0, .type=IO_READ},
        {.addr=0xc150, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_030E) {
    const struct CPU_State initial_cpu = {.pc=0x2dee, .a=0xc3, .x=0x98, .y=0x9c, .sp=0x49, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x2dee, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2def, .a=0xc3, .x=0x98, .y=0x9c, .sp=0x49, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x2dee, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2dee, .value=0xe0, .type=IO_READ},
        {.addr=0x2def, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_030F) {
    const struct CPU_State initial_cpu = {.pc=0x7d44, .a=0x00, .x=0xbe, .y=0x4e, .sp=0x77, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x7d44, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7d45, .a=0x00, .x=0xbe, .y=0x4e, .sp=0x77, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x7d44, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7d44, .value=0xe0, .type=IO_READ},
        {.addr=0x7d45, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0310) {
    const struct CPU_State initial_cpu = {.pc=0x0c9b, .a=0xf3, .x=0x23, .y=0x70, .sp=0x71, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0c9b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0c9c, .a=0xf3, .x=0x23, .y=0x70, .sp=0x71, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0c9b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0c9b, .value=0xe0, .type=IO_READ},
        {.addr=0x0c9c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0311) {
    const struct CPU_State initial_cpu = {.pc=0xc3e1, .a=0xb9, .x=0xec, .y=0xa4, .sp=0x4f, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xc3e1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc3e2, .a=0xb9, .x=0xec, .y=0xa4, .sp=0x4f, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xc3e1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc3e1, .value=0xe0, .type=IO_READ},
        {.addr=0xc3e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0312) {
    const struct CPU_State initial_cpu = {.pc=0x2368, .a=0x43, .x=0xb3, .y=0xc9, .sp=0x18, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x2368, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2369, .a=0x43, .x=0xb3, .y=0xc9, .sp=0x18, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x2368, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2368, .value=0xe0, .type=IO_READ},
        {.addr=0x2369, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0313) {
    const struct CPU_State initial_cpu = {.pc=0x78a5, .a=0x2c, .x=0xf0, .y=0x3c, .sp=0xbc, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x78a5, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x78a6, .a=0x2c, .x=0xf0, .y=0x3c, .sp=0xbc, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x78a5, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x78a5, .value=0xe0, .type=IO_READ},
        {.addr=0x78a6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0314) {
    const struct CPU_State initial_cpu = {.pc=0xb47d, .a=0x56, .x=0xd0, .y=0x84, .sp=0x56, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xb47d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb47e, .a=0x56, .x=0xd0, .y=0x84, .sp=0x56, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xb47d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb47d, .value=0xe0, .type=IO_READ},
        {.addr=0xb47e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0315) {
    const struct CPU_State initial_cpu = {.pc=0xbc65, .a=0xd9, .x=0x5e, .y=0x1d, .sp=0x73, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xbc65, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xbc66, .a=0xd9, .x=0x5e, .y=0x1d, .sp=0x73, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0xbc65, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xbc65, .value=0xe0, .type=IO_READ},
        {.addr=0xbc66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0316) {
    const struct CPU_State initial_cpu = {.pc=0x2d1b, .a=0x80, .x=0xe5, .y=0x59, .sp=0x86, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x2d1b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2d1c, .a=0x80, .x=0xe5, .y=0x59, .sp=0x86, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x2d1b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2d1b, .value=0xe0, .type=IO_READ},
        {.addr=0x2d1c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0317) {
    const struct CPU_State initial_cpu = {.pc=0xe809, .a=0x95, .x=0x61, .y=0x4b, .sp=0x8f, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xe809, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe80a, .a=0x95, .x=0x61, .y=0x4b, .sp=0x8f, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xe809, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe809, .value=0xe0, .type=IO_READ},
        {.addr=0xe80a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0318) {
    const struct CPU_State initial_cpu = {.pc=0x2190, .a=0x8e, .x=0x6d, .y=0xf2, .sp=0xaa, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x2190, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2191, .a=0x8e, .x=0x6d, .y=0xf2, .sp=0xaa, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x2190, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2190, .value=0xe0, .type=IO_READ},
        {.addr=0x2191, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0319) {
    const struct CPU_State initial_cpu = {.pc=0xf150, .a=0x6a, .x=0x80, .y=0x38, .sp=0xfd, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xf150, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf151, .a=0x6a, .x=0x80, .y=0x38, .sp=0xfd, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xf150, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf150, .value=0xe0, .type=IO_READ},
        {.addr=0xf151, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_031A) {
    const struct CPU_State initial_cpu = {.pc=0xf90e, .a=0xe8, .x=0x01, .y=0x1c, .sp=0xe5, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xf90e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf90f, .a=0xe8, .x=0x01, .y=0x1c, .sp=0xe5, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xf90e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf90e, .value=0xe0, .type=IO_READ},
        {.addr=0xf90f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_031B) {
    const struct CPU_State initial_cpu = {.pc=0x74b3, .a=0xe4, .x=0x5d, .y=0x3c, .sp=0xcb, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x74b3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x74b4, .a=0xe4, .x=0x5d, .y=0x3c, .sp=0xcb, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x74b3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x74b3, .value=0xe0, .type=IO_READ},
        {.addr=0x74b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_031C) {
    const struct CPU_State initial_cpu = {.pc=0x98c1, .a=0x87, .x=0x91, .y=0x0c, .sp=0x42, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x98c1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x98c2, .a=0x87, .x=0x91, .y=0x0c, .sp=0x42, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x98c1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x98c1, .value=0xe0, .type=IO_READ},
        {.addr=0x98c2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_031D) {
    const struct CPU_State initial_cpu = {.pc=0x54e6, .a=0x56, .x=0x34, .y=0x56, .sp=0x8f, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x54e6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x54e7, .a=0x56, .x=0x34, .y=0x56, .sp=0x8f, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x54e6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x54e6, .value=0xe0, .type=IO_READ},
        {.addr=0x54e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_031E) {
    const struct CPU_State initial_cpu = {.pc=0xf1cb, .a=0x6c, .x=0x3e, .y=0x89, .sp=0x19, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xf1cb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf1cc, .a=0x6c, .x=0x3e, .y=0x89, .sp=0x19, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xf1cb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf1cb, .value=0xe0, .type=IO_READ},
        {.addr=0xf1cc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_031F) {
    const struct CPU_State initial_cpu = {.pc=0x5b21, .a=0x28, .x=0xb3, .y=0x88, .sp=0x2d, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x5b21, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5b22, .a=0x28, .x=0xb3, .y=0x88, .sp=0x2d, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x5b21, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5b21, .value=0xe0, .type=IO_READ},
        {.addr=0x5b22, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0320) {
    const struct CPU_State initial_cpu = {.pc=0xc119, .a=0xa2, .x=0xd3, .y=0xd1, .sp=0x28, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xc119, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc11a, .a=0xa2, .x=0xd3, .y=0xd1, .sp=0x28, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xc119, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc119, .value=0xe0, .type=IO_READ},
        {.addr=0xc11a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0321) {
    const struct CPU_State initial_cpu = {.pc=0x929b, .a=0x61, .x=0xed, .y=0x14, .sp=0xcf, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x929b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x929c, .a=0x61, .x=0xed, .y=0x14, .sp=0xcf, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x929b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x929b, .value=0xe0, .type=IO_READ},
        {.addr=0x929c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0322) {
    const struct CPU_State initial_cpu = {.pc=0x8c37, .a=0x5c, .x=0xa5, .y=0xd5, .sp=0xff, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x8c37, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8c38, .a=0x5c, .x=0xa5, .y=0xd5, .sp=0xff, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x8c37, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8c37, .value=0xe0, .type=IO_READ},
        {.addr=0x8c38, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0323) {
    const struct CPU_State initial_cpu = {.pc=0xa808, .a=0xaa, .x=0x9d, .y=0xf8, .sp=0xd4, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xa808, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa809, .a=0xaa, .x=0x9d, .y=0xf8, .sp=0xd4, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xa808, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa808, .value=0xe0, .type=IO_READ},
        {.addr=0xa809, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0324) {
    const struct CPU_State initial_cpu = {.pc=0x6100, .a=0x03, .x=0x0d, .y=0x0f, .sp=0xdc, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x6100, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6101, .a=0x03, .x=0x0d, .y=0x0f, .sp=0xdc, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x6100, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6100, .value=0xe0, .type=IO_READ},
        {.addr=0x6101, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0325) {
    const struct CPU_State initial_cpu = {.pc=0x6b92, .a=0x8c, .x=0x3d, .y=0x6e, .sp=0xf3, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x6b92, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6b93, .a=0x8c, .x=0x3d, .y=0x6e, .sp=0xf3, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x6b92, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6b92, .value=0xe0, .type=IO_READ},
        {.addr=0x6b93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0326) {
    const struct CPU_State initial_cpu = {.pc=0x2c25, .a=0x74, .x=0x66, .y=0xb1, .sp=0x5f, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x2c25, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2c26, .a=0x74, .x=0x66, .y=0xb1, .sp=0x5f, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x2c25, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2c25, .value=0xe0, .type=IO_READ},
        {.addr=0x2c26, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0327) {
    const struct CPU_State initial_cpu = {.pc=0x8948, .a=0xd4, .x=0xa7, .y=0x9d, .sp=0xbc, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x8948, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8949, .a=0xd4, .x=0xa7, .y=0x9d, .sp=0xbc, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x8948, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8948, .value=0xe0, .type=IO_READ},
        {.addr=0x8949, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0328) {
    const struct CPU_State initial_cpu = {.pc=0xa57d, .a=0x12, .x=0xa5, .y=0x4f, .sp=0x6d, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xa57d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa57e, .a=0x12, .x=0xa5, .y=0x4f, .sp=0x6d, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xa57d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa57d, .value=0xe0, .type=IO_READ},
        {.addr=0xa57e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0329) {
    const struct CPU_State initial_cpu = {.pc=0xa08d, .a=0x00, .x=0x3e, .y=0x3a, .sp=0xd0, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0xa08d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa08e, .a=0x00, .x=0x3e, .y=0x3a, .sp=0xd0, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xa08d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa08d, .value=0xe0, .type=IO_READ},
        {.addr=0xa08e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_032A) {
    const struct CPU_State initial_cpu = {.pc=0xe542, .a=0xbc, .x=0x28, .y=0x6c, .sp=0x6b, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xe542, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe543, .a=0xbc, .x=0x28, .y=0x6c, .sp=0x6b, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xe542, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe542, .value=0xe0, .type=IO_READ},
        {.addr=0xe543, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_032B) {
    const struct CPU_State initial_cpu = {.pc=0xd9c6, .a=0x47, .x=0x75, .y=0x7e, .sp=0xf6, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xd9c6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd9c7, .a=0x47, .x=0x75, .y=0x7e, .sp=0xf6, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xd9c6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd9c6, .value=0xe0, .type=IO_READ},
        {.addr=0xd9c7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_032C) {
    const struct CPU_State initial_cpu = {.pc=0x775d, .a=0x03, .x=0xfd, .y=0x16, .sp=0x94, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x775d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x775e, .a=0x03, .x=0xfd, .y=0x16, .sp=0x94, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x775d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x775d, .value=0xe0, .type=IO_READ},
        {.addr=0x775e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_032D) {
    const struct CPU_State initial_cpu = {.pc=0xd9ba, .a=0xd8, .x=0xfa, .y=0xf1, .sp=0x3e, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xd9ba, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd9bb, .a=0xd8, .x=0xfa, .y=0xf1, .sp=0x3e, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xd9ba, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd9ba, .value=0xe0, .type=IO_READ},
        {.addr=0xd9bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_032E) {
    const struct CPU_State initial_cpu = {.pc=0xf04d, .a=0xef, .x=0xce, .y=0x54, .sp=0xf4, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xf04d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf04e, .a=0xef, .x=0xce, .y=0x54, .sp=0xf4, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xf04d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf04d, .value=0xe0, .type=IO_READ},
        {.addr=0xf04e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_032F) {
    const struct CPU_State initial_cpu = {.pc=0x2565, .a=0xdf, .x=0xd0, .y=0xe3, .sp=0x99, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x2565, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2566, .a=0xdf, .x=0xd0, .y=0xe3, .sp=0x99, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x2565, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2565, .value=0xe0, .type=IO_READ},
        {.addr=0x2566, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0330) {
    const struct CPU_State initial_cpu = {.pc=0x69ad, .a=0xbf, .x=0x07, .y=0x32, .sp=0x31, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x69ad, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x69ae, .a=0xbf, .x=0x07, .y=0x32, .sp=0x31, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x69ad, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x69ad, .value=0xe0, .type=IO_READ},
        {.addr=0x69ae, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0331) {
    const struct CPU_State initial_cpu = {.pc=0xc838, .a=0xad, .x=0xdd, .y=0xfe, .sp=0xff, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0xc838, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc839, .a=0xad, .x=0xdd, .y=0xfe, .sp=0xff, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xc838, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc838, .value=0xe0, .type=IO_READ},
        {.addr=0xc839, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0332) {
    const struct CPU_State initial_cpu = {.pc=0xe14e, .a=0x3a, .x=0x0c, .y=0xb8, .sp=0xdd, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xe14e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe14f, .a=0x3a, .x=0x0c, .y=0xb8, .sp=0xdd, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xe14e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe14e, .value=0xe0, .type=IO_READ},
        {.addr=0xe14f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0333) {
    const struct CPU_State initial_cpu = {.pc=0x40e2, .a=0xe7, .x=0x97, .y=0x13, .sp=0x28, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x40e2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x40e3, .a=0xe7, .x=0x97, .y=0x13, .sp=0x28, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x40e2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x40e2, .value=0xe0, .type=IO_READ},
        {.addr=0x40e3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0334) {
    const struct CPU_State initial_cpu = {.pc=0xbdb0, .a=0x14, .x=0xd7, .y=0x89, .sp=0xc6, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xbdb0, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xbdb1, .a=0x14, .x=0xd7, .y=0x89, .sp=0xc6, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xbdb0, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xbdb0, .value=0xe0, .type=IO_READ},
        {.addr=0xbdb1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0335) {
    const struct CPU_State initial_cpu = {.pc=0xbe7e, .a=0x22, .x=0x44, .y=0x0e, .sp=0x6a, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xbe7e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xbe7f, .a=0x22, .x=0x44, .y=0x0e, .sp=0x6a, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xbe7e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xbe7e, .value=0xe0, .type=IO_READ},
        {.addr=0xbe7f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0336) {
    const struct CPU_State initial_cpu = {.pc=0xfdde, .a=0xca, .x=0x8a, .y=0xe8, .sp=0x55, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xfdde, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfddf, .a=0xca, .x=0x8a, .y=0xe8, .sp=0x55, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xfdde, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfdde, .value=0xe0, .type=IO_READ},
        {.addr=0xfddf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0337) {
    const struct CPU_State initial_cpu = {.pc=0x92a8, .a=0x7f, .x=0x6e, .y=0x0b, .sp=0x0b, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x92a8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x92a9, .a=0x7f, .x=0x6e, .y=0x0b, .sp=0x0b, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x92a8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x92a8, .value=0xe0, .type=IO_READ},
        {.addr=0x92a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0338) {
    const struct CPU_State initial_cpu = {.pc=0x16fa, .a=0x3f, .x=0xa3, .y=0x13, .sp=0x1f, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x16fa, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x16fb, .a=0x3f, .x=0xa3, .y=0x13, .sp=0x1f, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x16fa, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x16fa, .value=0xe0, .type=IO_READ},
        {.addr=0x16fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0339) {
    const struct CPU_State initial_cpu = {.pc=0x6b36, .a=0x1f, .x=0x0e, .y=0x3f, .sp=0x52, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x6b36, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6b37, .a=0x1f, .x=0x0e, .y=0x3f, .sp=0x52, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x6b36, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6b36, .value=0xe0, .type=IO_READ},
        {.addr=0x6b37, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_033A) {
    const struct CPU_State initial_cpu = {.pc=0xd6dd, .a=0x35, .x=0xdf, .y=0xb7, .sp=0xd7, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0xd6dd, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd6de, .a=0x35, .x=0xdf, .y=0xb7, .sp=0xd7, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xd6dd, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd6dd, .value=0xe0, .type=IO_READ},
        {.addr=0xd6de, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_033B) {
    const struct CPU_State initial_cpu = {.pc=0x5648, .a=0x45, .x=0x7c, .y=0x34, .sp=0x29, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x5648, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5649, .a=0x45, .x=0x7c, .y=0x34, .sp=0x29, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x5648, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5648, .value=0xe0, .type=IO_READ},
        {.addr=0x5649, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_033C) {
    const struct CPU_State initial_cpu = {.pc=0x53c2, .a=0xec, .x=0x23, .y=0x06, .sp=0x30, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x53c2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x53c3, .a=0xec, .x=0x23, .y=0x06, .sp=0x30, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x53c2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x53c2, .value=0xe0, .type=IO_READ},
        {.addr=0x53c3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_033D) {
    const struct CPU_State initial_cpu = {.pc=0xeee2, .a=0x6a, .x=0x3b, .y=0x36, .sp=0x48, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xeee2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xeee3, .a=0x6a, .x=0x3b, .y=0x36, .sp=0x48, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xeee2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xeee2, .value=0xe0, .type=IO_READ},
        {.addr=0xeee3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_033E) {
    const struct CPU_State initial_cpu = {.pc=0x59c3, .a=0xfc, .x=0x1c, .y=0xef, .sp=0x5d, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x59c3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x59c4, .a=0xfc, .x=0x1c, .y=0xef, .sp=0x5d, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x59c3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x59c3, .value=0xe0, .type=IO_READ},
        {.addr=0x59c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_033F) {
    const struct CPU_State initial_cpu = {.pc=0x3f39, .a=0xbd, .x=0xdf, .y=0xd7, .sp=0x67, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x3f39, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3f3a, .a=0xbd, .x=0xdf, .y=0xd7, .sp=0x67, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x3f39, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3f39, .value=0xe0, .type=IO_READ},
        {.addr=0x3f3a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0340) {
    const struct CPU_State initial_cpu = {.pc=0xe751, .a=0x10, .x=0x36, .y=0xea, .sp=0xe3, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xe751, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe752, .a=0x10, .x=0x36, .y=0xea, .sp=0xe3, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xe751, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe751, .value=0xe0, .type=IO_READ},
        {.addr=0xe752, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0341) {
    const struct CPU_State initial_cpu = {.pc=0x79fa, .a=0x40, .x=0xc0, .y=0xa7, .sp=0x3a, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x79fa, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x79fb, .a=0x40, .x=0xc0, .y=0xa7, .sp=0x3a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x79fa, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x79fa, .value=0xe0, .type=IO_READ},
        {.addr=0x79fb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0342) {
    const struct CPU_State initial_cpu = {.pc=0xd4ec, .a=0x32, .x=0xbb, .y=0xa6, .sp=0x1e, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xd4ec, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd4ed, .a=0x32, .x=0xbb, .y=0xa6, .sp=0x1e, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xd4ec, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd4ec, .value=0xe0, .type=IO_READ},
        {.addr=0xd4ed, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0343) {
    const struct CPU_State initial_cpu = {.pc=0xf479, .a=0xed, .x=0x7e, .y=0x39, .sp=0x26, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xf479, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf47a, .a=0xed, .x=0x7e, .y=0x39, .sp=0x26, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xf479, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf479, .value=0xe0, .type=IO_READ},
        {.addr=0xf47a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0344) {
    const struct CPU_State initial_cpu = {.pc=0x6e2d, .a=0x2f, .x=0x7e, .y=0xf1, .sp=0x93, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x6e2d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6e2e, .a=0x2f, .x=0x7e, .y=0xf1, .sp=0x93, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x6e2d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6e2d, .value=0xe0, .type=IO_READ},
        {.addr=0x6e2e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0345) {
    const struct CPU_State initial_cpu = {.pc=0xcb43, .a=0x44, .x=0x8b, .y=0x3d, .sp=0x82, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0xcb43, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcb44, .a=0x44, .x=0x8b, .y=0x3d, .sp=0x82, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xcb43, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcb43, .value=0xe0, .type=IO_READ},
        {.addr=0xcb44, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0346) {
    const struct CPU_State initial_cpu = {.pc=0xdbc2, .a=0xf6, .x=0xba, .y=0x28, .sp=0xd9, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xdbc2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xdbc3, .a=0xf6, .x=0xba, .y=0x28, .sp=0xd9, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xdbc2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdbc2, .value=0xe0, .type=IO_READ},
        {.addr=0xdbc3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0347) {
    const struct CPU_State initial_cpu = {.pc=0x6bfe, .a=0x27, .x=0x49, .y=0x8e, .sp=0x7a, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x6bfe, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6bff, .a=0x27, .x=0x49, .y=0x8e, .sp=0x7a, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x6bfe, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6bfe, .value=0xe0, .type=IO_READ},
        {.addr=0x6bff, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0348) {
    const struct CPU_State initial_cpu = {.pc=0x75df, .a=0xf2, .x=0x2e, .y=0x57, .sp=0x7b, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x75df, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x75e0, .a=0xf2, .x=0x2e, .y=0x57, .sp=0x7b, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x75df, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x75df, .value=0xe0, .type=IO_READ},
        {.addr=0x75e0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0349) {
    const struct CPU_State initial_cpu = {.pc=0xe493, .a=0xee, .x=0x3a, .y=0xd0, .sp=0xbb, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xe493, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe494, .a=0xee, .x=0x3a, .y=0xd0, .sp=0xbb, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xe493, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe493, .value=0xe0, .type=IO_READ},
        {.addr=0xe494, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_034A) {
    const struct CPU_State initial_cpu = {.pc=0xd7bf, .a=0x85, .x=0x0d, .y=0x2e, .sp=0x7b, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xd7bf, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd7c0, .a=0x85, .x=0x0d, .y=0x2e, .sp=0x7b, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0xd7bf, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd7bf, .value=0xe0, .type=IO_READ},
        {.addr=0xd7c0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_034B) {
    const struct CPU_State initial_cpu = {.pc=0x4738, .a=0xb1, .x=0x2f, .y=0x7d, .sp=0xaa, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x4738, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4739, .a=0xb1, .x=0x2f, .y=0x7d, .sp=0xaa, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x4738, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4738, .value=0xe0, .type=IO_READ},
        {.addr=0x4739, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_034C) {
    const struct CPU_State initial_cpu = {.pc=0x2603, .a=0x38, .x=0x29, .y=0x66, .sp=0x01, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x2603, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2604, .a=0x38, .x=0x29, .y=0x66, .sp=0x01, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x2603, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2603, .value=0xe0, .type=IO_READ},
        {.addr=0x2604, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_034D) {
    const struct CPU_State initial_cpu = {.pc=0x265f, .a=0xa3, .x=0x99, .y=0xc2, .sp=0x3d, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x265f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2660, .a=0xa3, .x=0x99, .y=0xc2, .sp=0x3d, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x265f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x265f, .value=0xe0, .type=IO_READ},
        {.addr=0x2660, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_034E) {
    const struct CPU_State initial_cpu = {.pc=0xe47c, .a=0x5d, .x=0x04, .y=0xae, .sp=0x4f, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xe47c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe47d, .a=0x5d, .x=0x04, .y=0xae, .sp=0x4f, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xe47c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe47c, .value=0xe0, .type=IO_READ},
        {.addr=0xe47d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_034F) {
    const struct CPU_State initial_cpu = {.pc=0x2fae, .a=0xaf, .x=0xde, .y=0x43, .sp=0x6a, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x2fae, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2faf, .a=0xaf, .x=0xde, .y=0x43, .sp=0x6a, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x2fae, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2fae, .value=0xe0, .type=IO_READ},
        {.addr=0x2faf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0350) {
    const struct CPU_State initial_cpu = {.pc=0xe23b, .a=0x41, .x=0xff, .y=0x69, .sp=0x20, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xe23b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe23c, .a=0x41, .x=0xff, .y=0x69, .sp=0x20, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xe23b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe23b, .value=0xe0, .type=IO_READ},
        {.addr=0xe23c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0351) {
    const struct CPU_State initial_cpu = {.pc=0x2881, .a=0x1c, .x=0x7e, .y=0xdb, .sp=0xe3, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x2881, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2882, .a=0x1c, .x=0x7e, .y=0xdb, .sp=0xe3, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x2881, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2881, .value=0xe0, .type=IO_READ},
        {.addr=0x2882, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0352) {
    const struct CPU_State initial_cpu = {.pc=0x7a31, .a=0xcc, .x=0xdf, .y=0xb0, .sp=0x11, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x7a31, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7a32, .a=0xcc, .x=0xdf, .y=0xb0, .sp=0x11, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x7a31, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7a31, .value=0xe0, .type=IO_READ},
        {.addr=0x7a32, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0353) {
    const struct CPU_State initial_cpu = {.pc=0x3add, .a=0x3a, .x=0xe5, .y=0x58, .sp=0x5f, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x3add, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3ade, .a=0x3a, .x=0xe5, .y=0x58, .sp=0x5f, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x3add, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3add, .value=0xe0, .type=IO_READ},
        {.addr=0x3ade, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0354) {
    const struct CPU_State initial_cpu = {.pc=0x0c88, .a=0xf5, .x=0xe3, .y=0x9b, .sp=0xfc, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0c88, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0c89, .a=0xf5, .x=0xe3, .y=0x9b, .sp=0xfc, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x0c88, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0c88, .value=0xe0, .type=IO_READ},
        {.addr=0x0c89, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0355) {
    const struct CPU_State initial_cpu = {.pc=0xec62, .a=0xf4, .x=0xa2, .y=0xa7, .sp=0xf6, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xec62, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xec63, .a=0xf4, .x=0xa2, .y=0xa7, .sp=0xf6, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xec62, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xec62, .value=0xe0, .type=IO_READ},
        {.addr=0xec63, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0356) {
    const struct CPU_State initial_cpu = {.pc=0xed1e, .a=0xe1, .x=0xb9, .y=0xf6, .sp=0x25, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xed1e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xed1f, .a=0xe1, .x=0xb9, .y=0xf6, .sp=0x25, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xed1e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xed1e, .value=0xe0, .type=IO_READ},
        {.addr=0xed1f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0357) {
    const struct CPU_State initial_cpu = {.pc=0x97bc, .a=0xab, .x=0x3e, .y=0xb7, .sp=0x5b, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x97bc, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x97bd, .a=0xab, .x=0x3e, .y=0xb7, .sp=0x5b, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x97bc, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x97bc, .value=0xe0, .type=IO_READ},
        {.addr=0x97bd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0358) {
    const struct CPU_State initial_cpu = {.pc=0x6674, .a=0xad, .x=0xe7, .y=0x0f, .sp=0xf6, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x6674, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6675, .a=0xad, .x=0xe7, .y=0x0f, .sp=0xf6, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x6674, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6674, .value=0xe0, .type=IO_READ},
        {.addr=0x6675, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0359) {
    const struct CPU_State initial_cpu = {.pc=0x88a8, .a=0x3d, .x=0x94, .y=0x93, .sp=0x5a, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x88a8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x88a9, .a=0x3d, .x=0x94, .y=0x93, .sp=0x5a, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x88a8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x88a8, .value=0xe0, .type=IO_READ},
        {.addr=0x88a9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_035A) {
    const struct CPU_State initial_cpu = {.pc=0xea77, .a=0x14, .x=0x8c, .y=0xfb, .sp=0xdf, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xea77, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xea78, .a=0x14, .x=0x8c, .y=0xfb, .sp=0xdf, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xea77, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xea77, .value=0xe0, .type=IO_READ},
        {.addr=0xea78, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_035B) {
    const struct CPU_State initial_cpu = {.pc=0x4294, .a=0x0d, .x=0x79, .y=0x4b, .sp=0xe2, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x4294, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4295, .a=0x0d, .x=0x79, .y=0x4b, .sp=0xe2, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x4294, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4294, .value=0xe0, .type=IO_READ},
        {.addr=0x4295, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_035C) {
    const struct CPU_State initial_cpu = {.pc=0xedc0, .a=0xbf, .x=0x3f, .y=0x79, .sp=0x02, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xedc0, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xedc1, .a=0xbf, .x=0x3f, .y=0x79, .sp=0x02, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xedc0, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xedc0, .value=0xe0, .type=IO_READ},
        {.addr=0xedc1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_035D) {
    const struct CPU_State initial_cpu = {.pc=0xad07, .a=0x8e, .x=0xd5, .y=0xcf, .sp=0xc5, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xad07, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xad08, .a=0x8e, .x=0xd5, .y=0xcf, .sp=0xc5, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xad07, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xad07, .value=0xe0, .type=IO_READ},
        {.addr=0xad08, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_035E) {
    const struct CPU_State initial_cpu = {.pc=0x2103, .a=0xd6, .x=0x92, .y=0x62, .sp=0xde, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x2103, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2104, .a=0xd6, .x=0x92, .y=0x62, .sp=0xde, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x2103, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2103, .value=0xe0, .type=IO_READ},
        {.addr=0x2104, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_035F) {
    const struct CPU_State initial_cpu = {.pc=0x84db, .a=0x06, .x=0x5d, .y=0xc9, .sp=0xd7, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x84db, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x84dc, .a=0x06, .x=0x5d, .y=0xc9, .sp=0xd7, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x84db, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x84db, .value=0xe0, .type=IO_READ},
        {.addr=0x84dc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0360) {
    const struct CPU_State initial_cpu = {.pc=0x657d, .a=0xe3, .x=0xdf, .y=0xc0, .sp=0xba, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x657d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x657e, .a=0xe3, .x=0xdf, .y=0xc0, .sp=0xba, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x657d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x657d, .value=0xe0, .type=IO_READ},
        {.addr=0x657e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0361) {
    const struct CPU_State initial_cpu = {.pc=0x4983, .a=0xfd, .x=0x66, .y=0x39, .sp=0x9e, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x4983, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4984, .a=0xfd, .x=0x66, .y=0x39, .sp=0x9e, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x4983, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4983, .value=0xe0, .type=IO_READ},
        {.addr=0x4984, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0362) {
    const struct CPU_State initial_cpu = {.pc=0x4f74, .a=0xf0, .x=0x5c, .y=0x50, .sp=0x1d, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x4f74, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4f75, .a=0xf0, .x=0x5c, .y=0x50, .sp=0x1d, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x4f74, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4f74, .value=0xe0, .type=IO_READ},
        {.addr=0x4f75, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0363) {
    const struct CPU_State initial_cpu = {.pc=0xaf28, .a=0x0c, .x=0xf5, .y=0x76, .sp=0x1a, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xaf28, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xaf29, .a=0x0c, .x=0xf5, .y=0x76, .sp=0x1a, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xaf28, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xaf28, .value=0xe0, .type=IO_READ},
        {.addr=0xaf29, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0364) {
    const struct CPU_State initial_cpu = {.pc=0x2411, .a=0xeb, .x=0x51, .y=0x04, .sp=0x6c, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x2411, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2412, .a=0xeb, .x=0x51, .y=0x04, .sp=0x6c, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x2411, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2411, .value=0xe0, .type=IO_READ},
        {.addr=0x2412, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0365) {
    const struct CPU_State initial_cpu = {.pc=0xec86, .a=0xc8, .x=0xc4, .y=0x6b, .sp=0x3d, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xec86, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xec87, .a=0xc8, .x=0xc4, .y=0x6b, .sp=0x3d, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xec86, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xec86, .value=0xe0, .type=IO_READ},
        {.addr=0xec87, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0366) {
    const struct CPU_State initial_cpu = {.pc=0x808a, .a=0xf4, .x=0x58, .y=0x4a, .sp=0x76, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x808a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x808b, .a=0xf4, .x=0x58, .y=0x4a, .sp=0x76, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x808a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x808a, .value=0xe0, .type=IO_READ},
        {.addr=0x808b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0367) {
    const struct CPU_State initial_cpu = {.pc=0xc98f, .a=0x57, .x=0xf9, .y=0x48, .sp=0xb5, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xc98f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc990, .a=0x57, .x=0xf9, .y=0x48, .sp=0xb5, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xc98f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc98f, .value=0xe0, .type=IO_READ},
        {.addr=0xc990, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0368) {
    const struct CPU_State initial_cpu = {.pc=0x45c4, .a=0x91, .x=0x6a, .y=0x7b, .sp=0x39, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x45c4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x45c5, .a=0x91, .x=0x6a, .y=0x7b, .sp=0x39, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x45c4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x45c4, .value=0xe0, .type=IO_READ},
        {.addr=0x45c5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0369) {
    const struct CPU_State initial_cpu = {.pc=0xbadb, .a=0x61, .x=0xf7, .y=0xe6, .sp=0x96, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xbadb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xbadc, .a=0x61, .x=0xf7, .y=0xe6, .sp=0x96, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xbadb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xbadb, .value=0xe0, .type=IO_READ},
        {.addr=0xbadc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_036A) {
    const struct CPU_State initial_cpu = {.pc=0x35af, .a=0xfd, .x=0x2a, .y=0x5f, .sp=0xfc, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x35af, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x35b0, .a=0xfd, .x=0x2a, .y=0x5f, .sp=0xfc, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x35af, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x35af, .value=0xe0, .type=IO_READ},
        {.addr=0x35b0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_036B) {
    const struct CPU_State initial_cpu = {.pc=0x33be, .a=0xac, .x=0xf8, .y=0xab, .sp=0x89, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x33be, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x33bf, .a=0xac, .x=0xf8, .y=0xab, .sp=0x89, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x33be, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x33be, .value=0xe0, .type=IO_READ},
        {.addr=0x33bf, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_036C) {
    const struct CPU_State initial_cpu = {.pc=0x0186, .a=0xb8, .x=0x6e, .y=0xc4, .sp=0x1d, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0187, .a=0xb8, .x=0x6e, .y=0xc4, .sp=0x1d, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0186, .value=0xe0, .type=IO_READ},
        {.addr=0x0187, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_036D) {
    const struct CPU_State initial_cpu = {.pc=0x1ad5, .a=0xee, .x=0x95, .y=0x67, .sp=0x07, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x1ad5, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1ad6, .a=0xee, .x=0x95, .y=0x67, .sp=0x07, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x1ad5, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1ad5, .value=0xe0, .type=IO_READ},
        {.addr=0x1ad6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_036E) {
    const struct CPU_State initial_cpu = {.pc=0xd042, .a=0x17, .x=0xc8, .y=0x86, .sp=0xeb, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xd042, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd043, .a=0x17, .x=0xc8, .y=0x86, .sp=0xeb, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xd042, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd042, .value=0xe0, .type=IO_READ},
        {.addr=0xd043, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_036F) {
    const struct CPU_State initial_cpu = {.pc=0x49f7, .a=0xf9, .x=0x0e, .y=0x1c, .sp=0x18, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x49f7, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x49f8, .a=0xf9, .x=0x0e, .y=0x1c, .sp=0x18, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x49f7, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x49f7, .value=0xe0, .type=IO_READ},
        {.addr=0x49f8, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0370) {
    const struct CPU_State initial_cpu = {.pc=0xd1cd, .a=0x32, .x=0x7f, .y=0x0b, .sp=0x82, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xd1cd, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd1ce, .a=0x32, .x=0x7f, .y=0x0b, .sp=0x82, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xd1cd, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd1cd, .value=0xe0, .type=IO_READ},
        {.addr=0xd1ce, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0371) {
    const struct CPU_State initial_cpu = {.pc=0xa8d2, .a=0xf5, .x=0xfd, .y=0xb2, .sp=0xa2, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xa8d2, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa8d3, .a=0xf5, .x=0xfd, .y=0xb2, .sp=0xa2, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xa8d2, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa8d2, .value=0xe0, .type=IO_READ},
        {.addr=0xa8d3, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0372) {
    const struct CPU_State initial_cpu = {.pc=0x665a, .a=0x4a, .x=0xd6, .y=0x2a, .sp=0x05, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x665a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x665b, .a=0x4a, .x=0xd6, .y=0x2a, .sp=0x05, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x665a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x665a, .value=0xe0, .type=IO_READ},
        {.addr=0x665b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0373) {
    const struct CPU_State initial_cpu = {.pc=0x91da, .a=0x2a, .x=0xdc, .y=0x23, .sp=0x09, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x91da, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x91db, .a=0x2a, .x=0xdc, .y=0x23, .sp=0x09, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x91da, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x91da, .value=0xe0, .type=IO_READ},
        {.addr=0x91db, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0374) {
    const struct CPU_State initial_cpu = {.pc=0x552e, .a=0xab, .x=0x68, .y=0x6a, .sp=0x8b, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x552e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x552f, .a=0xab, .x=0x68, .y=0x6a, .sp=0x8b, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x552e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x552e, .value=0xe0, .type=IO_READ},
        {.addr=0x552f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0375) {
    const struct CPU_State initial_cpu = {.pc=0x7cfc, .a=0x68, .x=0x26, .y=0xaa, .sp=0xc7, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x7cfc, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7cfd, .a=0x68, .x=0x26, .y=0xaa, .sp=0xc7, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x7cfc, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7cfc, .value=0xe0, .type=IO_READ},
        {.addr=0x7cfd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0376) {
    const struct CPU_State initial_cpu = {.pc=0x5a0e, .a=0xb8, .x=0x52, .y=0x5a, .sp=0x30, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x5a0e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5a0f, .a=0xb8, .x=0x52, .y=0x5a, .sp=0x30, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x5a0e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5a0e, .value=0xe0, .type=IO_READ},
        {.addr=0x5a0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0377) {
    const struct CPU_State initial_cpu = {.pc=0x27aa, .a=0x23, .x=0xde, .y=0x69, .sp=0x55, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x27aa, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x27ab, .a=0x23, .x=0xde, .y=0x69, .sp=0x55, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x27aa, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x27aa, .value=0xe0, .type=IO_READ},
        {.addr=0x27ab, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0378) {
    const struct CPU_State initial_cpu = {.pc=0x09a6, .a=0xfc, .x=0xc8, .y=0x46, .sp=0x93, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x09a6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x09a7, .a=0xfc, .x=0xc8, .y=0x46, .sp=0x93, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x09a6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x09a6, .value=0xe0, .type=IO_READ},
        {.addr=0x09a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0379) {
    const struct CPU_State initial_cpu = {.pc=0x6f73, .a=0xb9, .x=0x3f, .y=0x4c, .sp=0x55, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x6f73, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6f74, .a=0xb9, .x=0x3f, .y=0x4c, .sp=0x55, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x6f73, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6f73, .value=0xe0, .type=IO_READ},
        {.addr=0x6f74, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_037A) {
    const struct CPU_State initial_cpu = {.pc=0x5366, .a=0x95, .x=0x8a, .y=0x5e, .sp=0x4d, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x5366, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5367, .a=0x95, .x=0x8a, .y=0x5e, .sp=0x4d, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x5366, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5366, .value=0xe0, .type=IO_READ},
        {.addr=0x5367, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_037B) {
    const struct CPU_State initial_cpu = {.pc=0x2e32, .a=0xb2, .x=0xbe, .y=0x89, .sp=0x0b, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x2e32, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2e33, .a=0xb2, .x=0xbe, .y=0x89, .sp=0x0b, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x2e32, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2e32, .value=0xe0, .type=IO_READ},
        {.addr=0x2e33, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_037C) {
    const struct CPU_State initial_cpu = {.pc=0x8ff9, .a=0x5c, .x=0x26, .y=0xaf, .sp=0x4e, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x8ff9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8ffa, .a=0x5c, .x=0x26, .y=0xaf, .sp=0x4e, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x8ff9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8ff9, .value=0xe0, .type=IO_READ},
        {.addr=0x8ffa, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_037D) {
    const struct CPU_State initial_cpu = {.pc=0xb0cc, .a=0xb3, .x=0x56, .y=0x62, .sp=0xa1, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xb0cc, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb0cd, .a=0xb3, .x=0x56, .y=0x62, .sp=0xa1, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xb0cc, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb0cc, .value=0xe0, .type=IO_READ},
        {.addr=0xb0cd, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_037E) {
    const struct CPU_State initial_cpu = {.pc=0x6b05, .a=0xc2, .x=0x24, .y=0x2b, .sp=0xbb, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x6b05, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6b06, .a=0xc2, .x=0x24, .y=0x2b, .sp=0xbb, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x6b05, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6b05, .value=0xe0, .type=IO_READ},
        {.addr=0x6b06, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_037F) {
    const struct CPU_State initial_cpu = {.pc=0x0391, .a=0xf1, .x=0xac, .y=0xe8, .sp=0x3d, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x0391, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0392, .a=0xf1, .x=0xac, .y=0xe8, .sp=0x3d, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0391, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0391, .value=0xe0, .type=IO_READ},
        {.addr=0x0392, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0380) {
    const struct CPU_State initial_cpu = {.pc=0x4e80, .a=0x18, .x=0xb2, .y=0xe7, .sp=0x1a, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x4e80, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4e81, .a=0x18, .x=0xb2, .y=0xe7, .sp=0x1a, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4e80, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4e80, .value=0xe0, .type=IO_READ},
        {.addr=0x4e81, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0381) {
    const struct CPU_State initial_cpu = {.pc=0xa4f3, .a=0xb8, .x=0x19, .y=0xd1, .sp=0xb9, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0xa4f3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa4f4, .a=0xb8, .x=0x19, .y=0xd1, .sp=0xb9, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xa4f3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa4f3, .value=0xe0, .type=IO_READ},
        {.addr=0xa4f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0382) {
    const struct CPU_State initial_cpu = {.pc=0x44fd, .a=0x01, .x=0xbc, .y=0x3c, .sp=0x1a, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x44fd, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x44fe, .a=0x01, .x=0xbc, .y=0x3c, .sp=0x1a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x44fd, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x44fd, .value=0xe0, .type=IO_READ},
        {.addr=0x44fe, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0383) {
    const struct CPU_State initial_cpu = {.pc=0xe7c3, .a=0xb8, .x=0x0a, .y=0xdb, .sp=0x70, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xe7c3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe7c4, .a=0xb8, .x=0x0a, .y=0xdb, .sp=0x70, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xe7c3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe7c3, .value=0xe0, .type=IO_READ},
        {.addr=0xe7c4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0384) {
    const struct CPU_State initial_cpu = {.pc=0x6902, .a=0x75, .x=0xc4, .y=0xcb, .sp=0x1a, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x6902, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6903, .a=0x75, .x=0xc4, .y=0xcb, .sp=0x1a, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x6902, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6902, .value=0xe0, .type=IO_READ},
        {.addr=0x6903, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0385) {
    const struct CPU_State initial_cpu = {.pc=0x4309, .a=0x56, .x=0x31, .y=0xb1, .sp=0x1a, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x4309, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x430a, .a=0x56, .x=0x31, .y=0xb1, .sp=0x1a, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x4309, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4309, .value=0xe0, .type=IO_READ},
        {.addr=0x430a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0386) {
    const struct CPU_State initial_cpu = {.pc=0x206f, .a=0xf8, .x=0x41, .y=0x50, .sp=0xa9, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x206f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2070, .a=0xf8, .x=0x41, .y=0x50, .sp=0xa9, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x206f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x206f, .value=0xe0, .type=IO_READ},
        {.addr=0x2070, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0387) {
    const struct CPU_State initial_cpu = {.pc=0x0be4, .a=0x4e, .x=0x79, .y=0xc8, .sp=0xd4, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0be4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0be5, .a=0x4e, .x=0x79, .y=0xc8, .sp=0xd4, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0be4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0be4, .value=0xe0, .type=IO_READ},
        {.addr=0x0be5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0388) {
    const struct CPU_State initial_cpu = {.pc=0x1717, .a=0xdb, .x=0x39, .y=0xe3, .sp=0xb3, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x1717, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1718, .a=0xdb, .x=0x39, .y=0xe3, .sp=0xb3, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x1717, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1717, .value=0xe0, .type=IO_READ},
        {.addr=0x1718, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0389) {
    const struct CPU_State initial_cpu = {.pc=0x8123, .a=0xea, .x=0x9f, .y=0x8b, .sp=0x6f, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x8123, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8124, .a=0xea, .x=0x9f, .y=0x8b, .sp=0x6f, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x8123, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8123, .value=0xe0, .type=IO_READ},
        {.addr=0x8124, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_038A) {
    const struct CPU_State initial_cpu = {.pc=0x6ffa, .a=0x21, .x=0x4d, .y=0xda, .sp=0x22, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x6ffa, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6ffb, .a=0x21, .x=0x4d, .y=0xda, .sp=0x22, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x6ffa, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6ffa, .value=0xe0, .type=IO_READ},
        {.addr=0x6ffb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_038B) {
    const struct CPU_State initial_cpu = {.pc=0x5ce9, .a=0xd5, .x=0xf1, .y=0x80, .sp=0x0a, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x5ce9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5cea, .a=0xd5, .x=0xf1, .y=0x80, .sp=0x0a, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x5ce9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5ce9, .value=0xe0, .type=IO_READ},
        {.addr=0x5cea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_038C) {
    const struct CPU_State initial_cpu = {.pc=0x455b, .a=0x76, .x=0xf7, .y=0x9d, .sp=0xb9, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x455b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x455c, .a=0x76, .x=0xf7, .y=0x9d, .sp=0xb9, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x455b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x455b, .value=0xe0, .type=IO_READ},
        {.addr=0x455c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_038D) {
    const struct CPU_State initial_cpu = {.pc=0x10e6, .a=0xd3, .x=0x4b, .y=0x96, .sp=0xca, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x10e6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x10e7, .a=0xd3, .x=0x4b, .y=0x96, .sp=0xca, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x10e6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x10e6, .value=0xe0, .type=IO_READ},
        {.addr=0x10e7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_038E) {
    const struct CPU_State initial_cpu = {.pc=0x22ba, .a=0x6c, .x=0x0c, .y=0x92, .sp=0x18, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x22ba, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x22bb, .a=0x6c, .x=0x0c, .y=0x92, .sp=0x18, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x22ba, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x22ba, .value=0xe0, .type=IO_READ},
        {.addr=0x22bb, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_038F) {
    const struct CPU_State initial_cpu = {.pc=0x231d, .a=0x6f, .x=0x9f, .y=0xfe, .sp=0xb5, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x231d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x231e, .a=0x6f, .x=0x9f, .y=0xfe, .sp=0xb5, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x231d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x231d, .value=0xe0, .type=IO_READ},
        {.addr=0x231e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0390) {
    const struct CPU_State initial_cpu = {.pc=0xd599, .a=0x9a, .x=0x7f, .y=0xd7, .sp=0x18, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xd599, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd59a, .a=0x9a, .x=0x7f, .y=0xd7, .sp=0x18, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xd599, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd599, .value=0xe0, .type=IO_READ},
        {.addr=0xd59a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0391) {
    const struct CPU_State initial_cpu = {.pc=0x6930, .a=0x4a, .x=0xbf, .y=0xe4, .sp=0x64, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x6930, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6931, .a=0x4a, .x=0xbf, .y=0xe4, .sp=0x64, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x6930, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6930, .value=0xe0, .type=IO_READ},
        {.addr=0x6931, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0392) {
    const struct CPU_State initial_cpu = {.pc=0xff92, .a=0x51, .x=0x13, .y=0x9f, .sp=0x1d, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xff92, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xff93, .a=0x51, .x=0x13, .y=0x9f, .sp=0x1d, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xff92, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xff92, .value=0xe0, .type=IO_READ},
        {.addr=0xff93, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0393) {
    const struct CPU_State initial_cpu = {.pc=0x493e, .a=0x3a, .x=0xe6, .y=0xbf, .sp=0x49, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x493e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x493f, .a=0x3a, .x=0xe6, .y=0xbf, .sp=0x49, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x493e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x493e, .value=0xe0, .type=IO_READ},
        {.addr=0x493f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0394) {
    const struct CPU_State initial_cpu = {.pc=0x95f3, .a=0x99, .x=0x5d, .y=0x75, .sp=0xb9, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x95f3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x95f4, .a=0x99, .x=0x5d, .y=0x75, .sp=0xb9, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x95f3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x95f3, .value=0xe0, .type=IO_READ},
        {.addr=0x95f4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0395) {
    const struct CPU_State initial_cpu = {.pc=0x5b0d, .a=0x00, .x=0x97, .y=0xcc, .sp=0x6e, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x5b0d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5b0e, .a=0x00, .x=0x97, .y=0xcc, .sp=0x6e, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x5b0d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5b0d, .value=0xe0, .type=IO_READ},
        {.addr=0x5b0e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0396) {
    const struct CPU_State initial_cpu = {.pc=0x0214, .a=0x0b, .x=0xe3, .y=0x88, .sp=0x4f, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0214, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0215, .a=0x0b, .x=0xe3, .y=0x88, .sp=0x4f, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0214, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0214, .value=0xe0, .type=IO_READ},
        {.addr=0x0215, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0397) {
    const struct CPU_State initial_cpu = {.pc=0x439d, .a=0x6c, .x=0x43, .y=0x37, .sp=0x8c, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x439d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x439e, .a=0x6c, .x=0x43, .y=0x37, .sp=0x8c, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x439d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x439d, .value=0xe0, .type=IO_READ},
        {.addr=0x439e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0398) {
    const struct CPU_State initial_cpu = {.pc=0x5012, .a=0xa6, .x=0xea, .y=0xba, .sp=0x70, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x5012, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5013, .a=0xa6, .x=0xea, .y=0xba, .sp=0x70, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x5012, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5012, .value=0xe0, .type=IO_READ},
        {.addr=0x5013, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_0399) {
    const struct CPU_State initial_cpu = {.pc=0xd186, .a=0xb2, .x=0xf3, .y=0x2d, .sp=0x40, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xd186, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd187, .a=0xb2, .x=0xf3, .y=0x2d, .sp=0x40, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xd186, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd186, .value=0xe0, .type=IO_READ},
        {.addr=0xd187, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_039A) {
    const struct CPU_State initial_cpu = {.pc=0x7d03, .a=0xc5, .x=0x2b, .y=0x32, .sp=0xec, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x7d03, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7d04, .a=0xc5, .x=0x2b, .y=0x32, .sp=0xec, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x7d03, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7d03, .value=0xe0, .type=IO_READ},
        {.addr=0x7d04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_039B) {
    const struct CPU_State initial_cpu = {.pc=0xc600, .a=0xde, .x=0x04, .y=0x39, .sp=0xe1, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xc600, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc601, .a=0xde, .x=0x04, .y=0x39, .sp=0xe1, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xc600, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc600, .value=0xe0, .type=IO_READ},
        {.addr=0xc601, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_039C) {
    const struct CPU_State initial_cpu = {.pc=0x877b, .a=0x78, .x=0x30, .y=0x09, .sp=0x66, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x877b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x877c, .a=0x78, .x=0x30, .y=0x09, .sp=0x66, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x877b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x877b, .value=0xe0, .type=IO_READ},
        {.addr=0x877c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_039D) {
    const struct CPU_State initial_cpu = {.pc=0x021b, .a=0xf1, .x=0xee, .y=0xd5, .sp=0xda, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x021b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x021c, .a=0xf1, .x=0xee, .y=0xd5, .sp=0xda, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x021b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x021b, .value=0xe0, .type=IO_READ},
        {.addr=0x021c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_039E) {
    const struct CPU_State initial_cpu = {.pc=0xac3a, .a=0x46, .x=0x31, .y=0x84, .sp=0xf6, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xac3a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xac3b, .a=0x46, .x=0x31, .y=0x84, .sp=0xf6, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xac3a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xac3a, .value=0xe0, .type=IO_READ},
        {.addr=0xac3b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_039F) {
    const struct CPU_State initial_cpu = {.pc=0xf935, .a=0xb2, .x=0xf4, .y=0x98, .sp=0x20, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xf935, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf936, .a=0xb2, .x=0xf4, .y=0x98, .sp=0x20, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xf935, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf935, .value=0xe0, .type=IO_READ},
        {.addr=0xf936, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x7c65, .a=0x2b, .x=0x3b, .y=0xb8, .sp=0xeb, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x7c65, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7c66, .a=0x2b, .x=0x3b, .y=0xb8, .sp=0xeb, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x7c65, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7c65, .value=0xe0, .type=IO_READ},
        {.addr=0x7c66, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x348c, .a=0x9d, .x=0x4a, .y=0xd0, .sp=0xda, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x348c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x348d, .a=0x9d, .x=0x4a, .y=0xd0, .sp=0xda, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x348c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x348c, .value=0xe0, .type=IO_READ},
        {.addr=0x348d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xdc2c, .a=0x4f, .x=0x2a, .y=0xb0, .sp=0x20, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xdc2c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xdc2d, .a=0x4f, .x=0x2a, .y=0xb0, .sp=0x20, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xdc2c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdc2c, .value=0xe0, .type=IO_READ},
        {.addr=0xdc2d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x1778, .a=0xcd, .x=0x66, .y=0x95, .sp=0xcf, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x1778, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1779, .a=0xcd, .x=0x66, .y=0x95, .sp=0xcf, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x1778, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1778, .value=0xe0, .type=IO_READ},
        {.addr=0x1779, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xb619, .a=0x65, .x=0xef, .y=0x07, .sp=0x45, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xb619, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb61a, .a=0x65, .x=0xef, .y=0x07, .sp=0x45, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0xb619, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb619, .value=0xe0, .type=IO_READ},
        {.addr=0xb61a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x7564, .a=0x8d, .x=0xba, .y=0xde, .sp=0x0c, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x7564, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7565, .a=0x8d, .x=0xba, .y=0xde, .sp=0x0c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x7564, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7564, .value=0xe0, .type=IO_READ},
        {.addr=0x7565, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x8c82, .a=0x51, .x=0x46, .y=0x8c, .sp=0x4f, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x8c82, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8c83, .a=0x51, .x=0x46, .y=0x8c, .sp=0x4f, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x8c82, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8c82, .value=0xe0, .type=IO_READ},
        {.addr=0x8c83, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xbadb, .a=0xef, .x=0x28, .y=0x66, .sp=0x7a, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xbadb, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xbadc, .a=0xef, .x=0x28, .y=0x66, .sp=0x7a, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xbadb, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xbadb, .value=0xe0, .type=IO_READ},
        {.addr=0xbadc, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x014a, .a=0x79, .x=0x90, .y=0xba, .sp=0xed, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x014b, .a=0x79, .x=0x90, .y=0xba, .sp=0xed, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x014a, .value=0xe0, .type=IO_READ},
        {.addr=0x014b, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xa2b3, .a=0x41, .x=0x60, .y=0xb9, .sp=0xdb, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xa2b3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xa2b4, .a=0x41, .x=0x60, .y=0xb9, .sp=0xdb, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xa2b3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xa2b3, .value=0xe0, .type=IO_READ},
        {.addr=0xa2b4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x5c22, .a=0x82, .x=0x56, .y=0xe9, .sp=0x1b, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x5c22, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5c23, .a=0x82, .x=0x56, .y=0xe9, .sp=0x1b, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x5c22, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5c22, .value=0xe0, .type=IO_READ},
        {.addr=0x5c23, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x70a6, .a=0xc2, .x=0xeb, .y=0x32, .sp=0x2e, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x70a6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x70a7, .a=0xc2, .x=0xeb, .y=0x32, .sp=0x2e, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x70a6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x70a6, .value=0xe0, .type=IO_READ},
        {.addr=0x70a7, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xdfed, .a=0x0a, .x=0xc8, .y=0x3a, .sp=0xc7, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xdfed, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xdfee, .a=0x0a, .x=0xc8, .y=0x3a, .sp=0xc7, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0xdfed, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdfed, .value=0xe0, .type=IO_READ},
        {.addr=0xdfee, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x68c0, .a=0x31, .x=0xc0, .y=0xc6, .sp=0x59, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x68c0, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x68c1, .a=0x31, .x=0xc0, .y=0xc6, .sp=0x59, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x68c0, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x68c0, .value=0xe0, .type=IO_READ},
        {.addr=0x68c1, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xb61f, .a=0x33, .x=0x89, .y=0x96, .sp=0x0b, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xb61f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb620, .a=0x33, .x=0x89, .y=0x96, .sp=0x0b, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xb61f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb61f, .value=0xe0, .type=IO_READ},
        {.addr=0xb620, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xfcd1, .a=0x3a, .x=0xa5, .y=0x54, .sp=0xb5, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xfcd1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfcd2, .a=0x3a, .x=0xa5, .y=0x54, .sp=0xb5, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0xfcd1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfcd1, .value=0xe0, .type=IO_READ},
        {.addr=0xfcd2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x1860, .a=0xe2, .x=0xad, .y=0xcd, .sp=0x31, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x1860, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1861, .a=0xe2, .x=0xad, .y=0xcd, .sp=0x31, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x1860, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1860, .value=0xe0, .type=IO_READ},
        {.addr=0x1861, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x2112, .a=0x1b, .x=0x81, .y=0x2c, .sp=0x1f, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x2112, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2113, .a=0x1b, .x=0x81, .y=0x2c, .sp=0x1f, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x2112, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2112, .value=0xe0, .type=IO_READ},
        {.addr=0x2113, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x141d, .a=0xd4, .x=0xbe, .y=0xb0, .sp=0xd0, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x141d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x141e, .a=0xd4, .x=0xbe, .y=0xb0, .sp=0xd0, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x141d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x141d, .value=0xe0, .type=IO_READ},
        {.addr=0x141e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x97ee, .a=0xc4, .x=0x7e, .y=0x88, .sp=0x1a, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x97ee, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x97ef, .a=0xc4, .x=0x7e, .y=0x88, .sp=0x1a, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x97ee, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x97ee, .value=0xe0, .type=IO_READ},
        {.addr=0x97ef, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xb801, .a=0xad, .x=0x8d, .y=0x6c, .sp=0xfe, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xb801, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb802, .a=0xad, .x=0x8d, .y=0x6c, .sp=0xfe, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0xb801, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb801, .value=0xe0, .type=IO_READ},
        {.addr=0xb802, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x9809, .a=0x67, .x=0x25, .y=0x51, .sp=0x4d, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x9809, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x980a, .a=0x67, .x=0x25, .y=0x51, .sp=0x4d, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x9809, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x9809, .value=0xe0, .type=IO_READ},
        {.addr=0x980a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xf74e, .a=0xab, .x=0x34, .y=0x02, .sp=0x1d, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xf74e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf74f, .a=0xab, .x=0x34, .y=0x02, .sp=0x1d, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xf74e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf74e, .value=0xe0, .type=IO_READ},
        {.addr=0xf74f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x3395, .a=0xba, .x=0x84, .y=0xd7, .sp=0x6e, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x3395, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3396, .a=0xba, .x=0x84, .y=0xd7, .sp=0x6e, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3395, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3395, .value=0xe0, .type=IO_READ},
        {.addr=0x3396, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x2627, .a=0xf3, .x=0xce, .y=0x46, .sp=0x53, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x2627, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2628, .a=0xf3, .x=0xce, .y=0x46, .sp=0x53, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x2627, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2627, .value=0xe0, .type=IO_READ},
        {.addr=0x2628, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xf46b, .a=0x04, .x=0x91, .y=0xf2, .sp=0x25, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xf46b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xf46c, .a=0x04, .x=0x91, .y=0xf2, .sp=0x25, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xf46b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xf46b, .value=0xe0, .type=IO_READ},
        {.addr=0xf46c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x0c0e, .a=0xb6, .x=0x1e, .y=0x85, .sp=0xf9, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0c0e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0c0f, .a=0xb6, .x=0x1e, .y=0x85, .sp=0xf9, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x0c0e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0c0e, .value=0xe0, .type=IO_READ},
        {.addr=0x0c0f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x213d, .a=0x9c, .x=0xf6, .y=0x2a, .sp=0x03, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x213d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x213e, .a=0x9c, .x=0xf6, .y=0x2a, .sp=0x03, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x213d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x213d, .value=0xe0, .type=IO_READ},
        {.addr=0x213e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x31b9, .a=0x7c, .x=0x49, .y=0x6d, .sp=0x41, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x31b9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x31ba, .a=0x7c, .x=0x49, .y=0x6d, .sp=0x41, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x31b9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x31b9, .value=0xe0, .type=IO_READ},
        {.addr=0x31ba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x75c9, .a=0x50, .x=0xa3, .y=0x04, .sp=0x13, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x75c9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x75ca, .a=0x50, .x=0xa3, .y=0x04, .sp=0x13, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x75c9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x75c9, .value=0xe0, .type=IO_READ},
        {.addr=0x75ca, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x91ae, .a=0x9d, .x=0x76, .y=0xcb, .sp=0xef, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x91ae, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x91af, .a=0x9d, .x=0x76, .y=0xcb, .sp=0xef, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x91ae, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x91ae, .value=0xe0, .type=IO_READ},
        {.addr=0x91af, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x0ba8, .a=0x60, .x=0xb4, .y=0x63, .sp=0xa4, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x0ba8, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0ba9, .a=0x60, .x=0xb4, .y=0x63, .sp=0xa4, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x0ba8, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0ba8, .value=0xe0, .type=IO_READ},
        {.addr=0x0ba9, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x898c, .a=0x72, .x=0x64, .y=0xb1, .sp=0xd7, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x898c, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x898d, .a=0x72, .x=0x64, .y=0xb1, .sp=0xd7, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x898c, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x898c, .value=0xe0, .type=IO_READ},
        {.addr=0x898d, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x8e66, .a=0x80, .x=0x2b, .y=0x25, .sp=0xbc, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x8e66, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8e67, .a=0x80, .x=0x2b, .y=0x25, .sp=0xbc, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x8e66, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8e66, .value=0xe0, .type=IO_READ},
        {.addr=0x8e67, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03C2) {
    const struct CPU_State initial_cpu = {.pc=0xdd94, .a=0xf2, .x=0xf2, .y=0x61, .sp=0x6e, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xdd94, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xdd95, .a=0xf2, .x=0xf2, .y=0x61, .sp=0x6e, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0xdd94, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdd94, .value=0xe0, .type=IO_READ},
        {.addr=0xdd95, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xfcd5, .a=0xd4, .x=0x9f, .y=0x73, .sp=0x1b, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xfcd5, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xfcd6, .a=0xd4, .x=0x9f, .y=0x73, .sp=0x1b, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0xfcd5, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xfcd5, .value=0xe0, .type=IO_READ},
        {.addr=0xfcd6, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x4e1d, .a=0x4b, .x=0x5b, .y=0x29, .sp=0x20, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x4e1d, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4e1e, .a=0x4b, .x=0x5b, .y=0x29, .sp=0x20, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x4e1d, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4e1d, .value=0xe0, .type=IO_READ},
        {.addr=0x4e1e, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x4390, .a=0xea, .x=0x8f, .y=0xff, .sp=0x66, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x4390, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4391, .a=0xea, .x=0x8f, .y=0xff, .sp=0x66, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x4390, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4390, .value=0xe0, .type=IO_READ},
        {.addr=0x4391, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x5a9f, .a=0xc2, .x=0xbf, .y=0x11, .sp=0x9b, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x5a9f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5aa0, .a=0xc2, .x=0xbf, .y=0x11, .sp=0x9b, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x5a9f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5a9f, .value=0xe0, .type=IO_READ},
        {.addr=0x5aa0, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xdb03, .a=0x1d, .x=0x59, .y=0xef, .sp=0x07, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xdb03, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xdb04, .a=0x1d, .x=0x59, .y=0xef, .sp=0x07, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xdb03, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xdb03, .value=0xe0, .type=IO_READ},
        {.addr=0xdb04, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x1167, .a=0xa5, .x=0x24, .y=0x62, .sp=0xe3, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x1167, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1168, .a=0xa5, .x=0x24, .y=0x62, .sp=0xe3, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x1167, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1167, .value=0xe0, .type=IO_READ},
        {.addr=0x1168, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x4f7b, .a=0x2f, .x=0x93, .y=0xf2, .sp=0x81, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x4f7b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4f7c, .a=0x2f, .x=0x93, .y=0xf2, .sp=0x81, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x4f7b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4f7b, .value=0xe0, .type=IO_READ},
        {.addr=0x4f7c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xe0b4, .a=0xa1, .x=0xc7, .y=0x6d, .sp=0x26, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xe0b4, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xe0b5, .a=0xa1, .x=0xc7, .y=0x6d, .sp=0x26, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xe0b4, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xe0b4, .value=0xe0, .type=IO_READ},
        {.addr=0xe0b5, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xac12, .a=0xf7, .x=0x36, .y=0x9b, .sp=0xd7, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xac12, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xac13, .a=0xf7, .x=0x36, .y=0x9b, .sp=0xd7, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xac12, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xac12, .value=0xe0, .type=IO_READ},
        {.addr=0xac13, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xc272, .a=0x9c, .x=0x81, .y=0x09, .sp=0xc3, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0xc272, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc273, .a=0x9c, .x=0x81, .y=0x09, .sp=0xc3, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xc272, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc272, .value=0xe0, .type=IO_READ},
        {.addr=0xc273, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x1088, .a=0x85, .x=0x37, .y=0x89, .sp=0x90, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x1088, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x1089, .a=0x85, .x=0x37, .y=0x89, .sp=0x90, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x1088, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x1088, .value=0xe0, .type=IO_READ},
        {.addr=0x1089, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x530e, .a=0x14, .x=0x35, .y=0x5b, .sp=0x82, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x530e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x530f, .a=0x14, .x=0x35, .y=0x5b, .sp=0x82, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x530e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x530e, .value=0xe0, .type=IO_READ},
        {.addr=0x530f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x0913, .a=0x87, .x=0xf6, .y=0x34, .sp=0x0b, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0913, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0914, .a=0x87, .x=0xf6, .y=0x34, .sp=0x0b, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x0913, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0913, .value=0xe0, .type=IO_READ},
        {.addr=0x0914, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xb397, .a=0x93, .x=0x77, .y=0x03, .sp=0x65, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xb397, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb398, .a=0x93, .x=0x77, .y=0x03, .sp=0x65, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xb397, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb397, .value=0xe0, .type=IO_READ},
        {.addr=0xb398, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x5f3b, .a=0xe5, .x=0x55, .y=0xd0, .sp=0x5a, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x5f3b, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5f3c, .a=0xe5, .x=0x55, .y=0xd0, .sp=0x5a, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x5f3b, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5f3b, .value=0xe0, .type=IO_READ},
        {.addr=0x5f3c, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x0a49, .a=0xa6, .x=0x25, .y=0x6b, .sp=0x6e, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0a49, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x0a4a, .a=0xa6, .x=0x25, .y=0x6b, .sp=0x6e, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x0a49, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x0a49, .value=0xe0, .type=IO_READ},
        {.addr=0x0a4a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x3423, .a=0x96, .x=0x13, .y=0xc0, .sp=0x39, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x3423, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3424, .a=0x96, .x=0x13, .y=0xc0, .sp=0x39, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x3423, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3423, .value=0xe0, .type=IO_READ},
        {.addr=0x3424, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xcf8f, .a=0xde, .x=0xf5, .y=0xb0, .sp=0x9a, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xcf8f, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcf90, .a=0xde, .x=0xf5, .y=0xb0, .sp=0x9a, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xcf8f, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcf8f, .value=0xe0, .type=IO_READ},
        {.addr=0xcf90, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x5e50, .a=0xf6, .x=0x3c, .y=0x42, .sp=0xca, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x5e50, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x5e51, .a=0xf6, .x=0x3c, .y=0x42, .sp=0xca, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x5e50, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x5e50, .value=0xe0, .type=IO_READ},
        {.addr=0x5e51, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x2439, .a=0x4c, .x=0x46, .y=0x19, .sp=0xc1, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x2439, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x243a, .a=0x4c, .x=0x46, .y=0x19, .sp=0xc1, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x2439, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2439, .value=0xe0, .type=IO_READ},
        {.addr=0x243a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x2064, .a=0x27, .x=0xdf, .y=0xdb, .sp=0x99, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x2064, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x2065, .a=0x27, .x=0xdf, .y=0xdb, .sp=0x99, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x2064, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x2064, .value=0xe0, .type=IO_READ},
        {.addr=0x2065, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x3cb9, .a=0x62, .x=0x5c, .y=0x34, .sp=0xde, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x3cb9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3cba, .a=0x62, .x=0x5c, .y=0x34, .sp=0xde, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x3cb9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3cb9, .value=0xe0, .type=IO_READ},
        {.addr=0x3cba, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xbe56, .a=0x67, .x=0x14, .y=0xf7, .sp=0x12, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xbe56, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xbe57, .a=0x67, .x=0x14, .y=0xf7, .sp=0x12, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xbe56, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xbe56, .value=0xe0, .type=IO_READ},
        {.addr=0xbe57, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x3546, .a=0xd5, .x=0x60, .y=0x9b, .sp=0x99, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x3546, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3547, .a=0xd5, .x=0x60, .y=0x9b, .sp=0x99, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x3546, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3546, .value=0xe0, .type=IO_READ},
        {.addr=0x3547, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x4446, .a=0xe9, .x=0x6d, .y=0x0e, .sp=0xe4, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x4446, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4447, .a=0xe9, .x=0x6d, .y=0x0e, .sp=0xe4, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x4446, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4446, .value=0xe0, .type=IO_READ},
        {.addr=0x4447, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xcfe9, .a=0x4f, .x=0x8c, .y=0x67, .sp=0xf5, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xcfe9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xcfea, .a=0x4f, .x=0x8c, .y=0x67, .sp=0xf5, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xcfe9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xcfe9, .value=0xe0, .type=IO_READ},
        {.addr=0xcfea, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x6013, .a=0x71, .x=0x58, .y=0xe1, .sp=0x9d, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x6013, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6014, .a=0x71, .x=0x58, .y=0xe1, .sp=0x9d, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x6013, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6013, .value=0xe0, .type=IO_READ},
        {.addr=0x6014, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xca41, .a=0x7c, .x=0x8a, .y=0x15, .sp=0xc0, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0xca41, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xca42, .a=0x7c, .x=0x8a, .y=0x15, .sp=0xc0, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0xca41, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xca41, .value=0xe0, .type=IO_READ},
        {.addr=0xca42, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x4e9e, .a=0x3a, .x=0x74, .y=0x80, .sp=0x2d, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x4e9e, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x4e9f, .a=0x3a, .x=0x74, .y=0x80, .sp=0x2d, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x4e9e, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x4e9e, .value=0xe0, .type=IO_READ},
        {.addr=0x4e9f, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x8dd3, .a=0x7e, .x=0xce, .y=0xa4, .sp=0xba, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x8dd3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x8dd4, .a=0x7e, .x=0xce, .y=0xa4, .sp=0xba, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x8dd3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8dd3, .value=0xe0, .type=IO_READ},
        {.addr=0x8dd4, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x7135, .a=0x2d, .x=0xc7, .y=0xf9, .sp=0xf3, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x7135, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x7136, .a=0x2d, .x=0xc7, .y=0xf9, .sp=0xf3, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x7135, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x7135, .value=0xe0, .type=IO_READ},
        {.addr=0x7136, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x15e1, .a=0xc2, .x=0x60, .y=0x78, .sp=0x5e, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x15e1, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x15e2, .a=0xc2, .x=0x60, .y=0x78, .sp=0x5e, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x15e1, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x15e1, .value=0xe0, .type=IO_READ},
        {.addr=0x15e2, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x6140, .a=0xba, .x=0x4e, .y=0x24, .sp=0x8a, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x6140, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x6141, .a=0xba, .x=0x4e, .y=0x24, .sp=0x8a, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x6140, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x6140, .value=0xe0, .type=IO_READ},
        {.addr=0x6141, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xef60, .a=0x7f, .x=0x86, .y=0xfc, .sp=0x94, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xef60, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xef61, .a=0x7f, .x=0x86, .y=0xfc, .sp=0x94, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xef60, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xef60, .value=0xe0, .type=IO_READ},
        {.addr=0xef61, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x8469, .a=0x89, .x=0x7a, .y=0x7a, .sp=0x6d, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x8469, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x846a, .a=0x89, .x=0x7a, .y=0x7a, .sp=0x6d, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x8469, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x8469, .value=0xe0, .type=IO_READ},
        {.addr=0x846a, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x14d9, .a=0x36, .x=0x56, .y=0x5f, .sp=0x9b, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x14d9, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x14da, .a=0x36, .x=0x56, .y=0x5f, .sp=0x9b, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x14d9, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x14d9, .value=0xe0, .type=IO_READ},
        {.addr=0x14da, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_E0, _E0_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x3923, .a=0x28, .x=0xed, .y=0x05, .sp=0xfd, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x3923, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x3924, .a=0x28, .x=0xed, .y=0x05, .sp=0xfd, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x3923, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x3923, .value=0xe0, .type=IO_READ},
        {.addr=0x3924, .value=DUMMY, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("E0 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
