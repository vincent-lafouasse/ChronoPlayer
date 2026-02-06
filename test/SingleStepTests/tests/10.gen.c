#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_10, _10_0000) {
    const struct CPU_State initial_cpu = {.pc=0xefdc, .a=0x07, .x=0x91, .y=0x3b, .sp=0x60, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xefdc, .value=0x10}, {.addr=0xefdd, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xefde, .a=0x07, .x=0x91, .y=0x3b, .sp=0x60, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xefdc, .value=0x10}, {.addr=0xefdd, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xefdc, .value=0x10, .type=IO_READ},
        {.addr=0xefdd, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0001) {
    const struct CPU_State initial_cpu = {.pc=0xcb07, .a=0x75, .x=0x92, .y=0xc3, .sp=0xdd, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xcb07, .value=0x10}, {.addr=0xcb08, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xcb09, .a=0x75, .x=0x92, .y=0xc3, .sp=0xdd, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xcb07, .value=0x10}, {.addr=0xcb08, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xcb07, .value=0x10, .type=IO_READ},
        {.addr=0xcb08, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0002) {
    const struct CPU_State initial_cpu = {.pc=0x2797, .a=0xb8, .x=0xcd, .y=0x36, .sp=0x5a, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x2797, .value=0x10}, {.addr=0x2798, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x2799, .a=0xb8, .x=0xcd, .y=0x36, .sp=0x5a, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x2797, .value=0x10}, {.addr=0x2798, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x2797, .value=0x10, .type=IO_READ},
        {.addr=0x2798, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0003) {
    const struct CPU_State initial_cpu = {.pc=0x07b4, .a=0x3d, .x=0xab, .y=0xca, .sp=0x98, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x07b4, .value=0x10}, {.addr=0x07b5, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x07ee, .a=0x3d, .x=0xab, .y=0xca, .sp=0x98, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x07b4, .value=0x10}, {.addr=0x07b5, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x07b4, .value=0x10, .type=IO_READ},
        {.addr=0x07b5, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0004) {
    const struct CPU_State initial_cpu = {.pc=0x4502, .a=0xa1, .x=0x19, .y=0x0d, .sp=0x5a, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x4502, .value=0x10}, {.addr=0x4503, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x44bd, .a=0xa1, .x=0x19, .y=0x0d, .sp=0x5a, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x4502, .value=0x10}, {.addr=0x4503, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x4502, .value=0x10, .type=IO_READ},
        {.addr=0x4503, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0005) {
    const struct CPU_State initial_cpu = {.pc=0x28a9, .a=0x51, .x=0x18, .y=0xb1, .sp=0x37, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x28a9, .value=0x10}, {.addr=0x28aa, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x28aa, .a=0x51, .x=0x18, .y=0xb1, .sp=0x37, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x28a9, .value=0x10}, {.addr=0x28aa, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x28a9, .value=0x10, .type=IO_READ},
        {.addr=0x28aa, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0006) {
    const struct CPU_State initial_cpu = {.pc=0x011a, .a=0x71, .x=0x9e, .y=0xab, .sp=0xe2, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x10}, {.addr=0x011b, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x011c, .a=0x71, .x=0x9e, .y=0xab, .sp=0xe2, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x10}, {.addr=0x011b, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x011a, .value=0x10, .type=IO_READ},
        {.addr=0x011b, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0007) {
    const struct CPU_State initial_cpu = {.pc=0xcebc, .a=0xf6, .x=0xc5, .y=0x96, .sp=0xba, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xcebc, .value=0x10}, {.addr=0xcebd, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xcead, .a=0xf6, .x=0xc5, .y=0x96, .sp=0xba, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xcebc, .value=0x10}, {.addr=0xcebd, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xcebc, .value=0x10, .type=IO_READ},
        {.addr=0xcebd, .value=0xef, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0008) {
    const struct CPU_State initial_cpu = {.pc=0x8646, .a=0x36, .x=0x72, .y=0x18, .sp=0x0d, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x8646, .value=0x10}, {.addr=0x8647, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x8648, .a=0x36, .x=0x72, .y=0x18, .sp=0x0d, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x8646, .value=0x10}, {.addr=0x8647, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x8646, .value=0x10, .type=IO_READ},
        {.addr=0x8647, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0009) {
    const struct CPU_State initial_cpu = {.pc=0xf4a7, .a=0xd6, .x=0x46, .y=0xd9, .sp=0x01, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xf4a7, .value=0x10}, {.addr=0xf4a8, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xf454, .a=0xd6, .x=0x46, .y=0xd9, .sp=0x01, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xf4a7, .value=0x10}, {.addr=0xf4a8, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xf4a7, .value=0x10, .type=IO_READ},
        {.addr=0xf4a8, .value=0xab, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_000A) {
    const struct CPU_State initial_cpu = {.pc=0x6d59, .a=0x81, .x=0xe3, .y=0xb5, .sp=0x93, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x6d59, .value=0x10}, {.addr=0x6d5a, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x6ced, .a=0x81, .x=0xe3, .y=0xb5, .sp=0x93, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x6d59, .value=0x10}, {.addr=0x6d5a, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x6d59, .value=0x10, .type=IO_READ},
        {.addr=0x6d5a, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_000B) {
    const struct CPU_State initial_cpu = {.pc=0x4b9e, .a=0x44, .x=0xaf, .y=0x36, .sp=0x67, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x4b9e, .value=0x10}, {.addr=0x4b9f, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x4be1, .a=0x44, .x=0xaf, .y=0x36, .sp=0x67, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x4b9e, .value=0x10}, {.addr=0x4b9f, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x4b9e, .value=0x10, .type=IO_READ},
        {.addr=0x4b9f, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_000C) {
    const struct CPU_State initial_cpu = {.pc=0xd3b0, .a=0x66, .x=0xf7, .y=0xb1, .sp=0xe6, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xd3b0, .value=0x10}, {.addr=0xd3b1, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xd374, .a=0x66, .x=0xf7, .y=0xb1, .sp=0xe6, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xd3b0, .value=0x10}, {.addr=0xd3b1, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xd3b0, .value=0x10, .type=IO_READ},
        {.addr=0xd3b1, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_000D) {
    const struct CPU_State initial_cpu = {.pc=0xaff3, .a=0xec, .x=0xd3, .y=0x7e, .sp=0xda, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xaff3, .value=0x10}, {.addr=0xaff4, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0xaf94, .a=0xec, .x=0xd3, .y=0x7e, .sp=0xda, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xaff3, .value=0x10}, {.addr=0xaff4, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0xaff3, .value=0x10, .type=IO_READ},
        {.addr=0xaff4, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_000E) {
    const struct CPU_State initial_cpu = {.pc=0xf96e, .a=0xb2, .x=0xf6, .y=0x46, .sp=0x5b, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xf96e, .value=0x10}, {.addr=0xf96f, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xf9ba, .a=0xb2, .x=0xf6, .y=0x46, .sp=0x5b, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xf96e, .value=0x10}, {.addr=0xf96f, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xf96e, .value=0x10, .type=IO_READ},
        {.addr=0xf96f, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_000F) {
    const struct CPU_State initial_cpu = {.pc=0x7205, .a=0xff, .x=0xdf, .y=0xd4, .sp=0x25, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x7205, .value=0x10}, {.addr=0x7206, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x7207, .a=0xff, .x=0xdf, .y=0xd4, .sp=0x25, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x7205, .value=0x10}, {.addr=0x7206, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x7205, .value=0x10, .type=IO_READ},
        {.addr=0x7206, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0010) {
    const struct CPU_State initial_cpu = {.pc=0x0a97, .a=0x5a, .x=0x85, .y=0x20, .sp=0xbc, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0a97, .value=0x10}, {.addr=0x0a98, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x0ad9, .a=0x5a, .x=0x85, .y=0x20, .sp=0xbc, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0a97, .value=0x10}, {.addr=0x0a98, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x0a97, .value=0x10, .type=IO_READ},
        {.addr=0x0a98, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0011) {
    const struct CPU_State initial_cpu = {.pc=0x6bad, .a=0x08, .x=0x40, .y=0x28, .sp=0x38, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x6bad, .value=0x10}, {.addr=0x6bae, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x6bbf, .a=0x08, .x=0x40, .y=0x28, .sp=0x38, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x6bad, .value=0x10}, {.addr=0x6bae, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x6bad, .value=0x10, .type=IO_READ},
        {.addr=0x6bae, .value=0x10, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0012) {
    const struct CPU_State initial_cpu = {.pc=0xf425, .a=0xfc, .x=0xc9, .y=0x80, .sp=0xfd, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xf425, .value=0x10}, {.addr=0xf426, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xf427, .a=0xfc, .x=0xc9, .y=0x80, .sp=0xfd, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xf425, .value=0x10}, {.addr=0xf426, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xf425, .value=0x10, .type=IO_READ},
        {.addr=0xf426, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0013) {
    const struct CPU_State initial_cpu = {.pc=0xad36, .a=0x96, .x=0xf1, .y=0x7a, .sp=0x85, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xad36, .value=0x10}, {.addr=0xad37, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xad38, .a=0x96, .x=0xf1, .y=0x7a, .sp=0x85, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0xad36, .value=0x10}, {.addr=0xad37, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xad36, .value=0x10, .type=IO_READ},
        {.addr=0xad37, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0014) {
    const struct CPU_State initial_cpu = {.pc=0x4498, .a=0x0e, .x=0x73, .y=0x0c, .sp=0x7c, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x4498, .value=0x10}, {.addr=0x4499, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x449a, .a=0x0e, .x=0x73, .y=0x0c, .sp=0x7c, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x4498, .value=0x10}, {.addr=0x4499, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x4498, .value=0x10, .type=IO_READ},
        {.addr=0x4499, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0015) {
    const struct CPU_State initial_cpu = {.pc=0x6ed3, .a=0x25, .x=0xfa, .y=0x3e, .sp=0x09, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x6ed3, .value=0x10}, {.addr=0x6ed4, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x6e96, .a=0x25, .x=0xfa, .y=0x3e, .sp=0x09, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x6ed3, .value=0x10}, {.addr=0x6ed4, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x6ed3, .value=0x10, .type=IO_READ},
        {.addr=0x6ed4, .value=0xc1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0016) {
    const struct CPU_State initial_cpu = {.pc=0x2323, .a=0x5d, .x=0xeb, .y=0xb2, .sp=0x9a, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x2323, .value=0x10}, {.addr=0x2324, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x2325, .a=0x5d, .x=0xeb, .y=0xb2, .sp=0x9a, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x2323, .value=0x10}, {.addr=0x2324, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x2323, .value=0x10, .type=IO_READ},
        {.addr=0x2324, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0017) {
    const struct CPU_State initial_cpu = {.pc=0x65ce, .a=0x32, .x=0x2e, .y=0x82, .sp=0x79, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x65ce, .value=0x10}, {.addr=0x65cf, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x65be, .a=0x32, .x=0x2e, .y=0x82, .sp=0x79, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x65ce, .value=0x10}, {.addr=0x65cf, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x65ce, .value=0x10, .type=IO_READ},
        {.addr=0x65cf, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0018) {
    const struct CPU_State initial_cpu = {.pc=0x8997, .a=0x42, .x=0x73, .y=0xc0, .sp=0xdf, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x8997, .value=0x10}, {.addr=0x8998, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x89ab, .a=0x42, .x=0x73, .y=0xc0, .sp=0xdf, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x8997, .value=0x10}, {.addr=0x8998, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x8997, .value=0x10, .type=IO_READ},
        {.addr=0x8998, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0019) {
    const struct CPU_State initial_cpu = {.pc=0x9a4a, .a=0xd8, .x=0x12, .y=0x6a, .sp=0x87, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x9a4a, .value=0x10}, {.addr=0x9a4b, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9a09, .a=0xd8, .x=0x12, .y=0x6a, .sp=0x87, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x9a4a, .value=0x10}, {.addr=0x9a4b, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9a4a, .value=0x10, .type=IO_READ},
        {.addr=0x9a4b, .value=0xbd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_001A) {
    const struct CPU_State initial_cpu = {.pc=0x98fa, .a=0x40, .x=0x0e, .y=0x4b, .sp=0x7c, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x98fa, .value=0x10}, {.addr=0x98fb, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x98fc, .a=0x40, .x=0x0e, .y=0x4b, .sp=0x7c, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x98fa, .value=0x10}, {.addr=0x98fb, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x98fa, .value=0x10, .type=IO_READ},
        {.addr=0x98fb, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_001B) {
    const struct CPU_State initial_cpu = {.pc=0xf183, .a=0xe7, .x=0xa8, .y=0x29, .sp=0x4e, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xf183, .value=0x10}, {.addr=0xf184, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xf1b6, .a=0xe7, .x=0xa8, .y=0x29, .sp=0x4e, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xf183, .value=0x10}, {.addr=0xf184, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xf183, .value=0x10, .type=IO_READ},
        {.addr=0xf184, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_001C) {
    const struct CPU_State initial_cpu = {.pc=0xc595, .a=0x34, .x=0x7c, .y=0x08, .sp=0x2e, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xc595, .value=0x10}, {.addr=0xc596, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xc51f, .a=0x34, .x=0x7c, .y=0x08, .sp=0x2e, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xc595, .value=0x10}, {.addr=0xc596, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xc595, .value=0x10, .type=IO_READ},
        {.addr=0xc596, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_001D) {
    const struct CPU_State initial_cpu = {.pc=0x6a78, .a=0x14, .x=0x08, .y=0x69, .sp=0x1b, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x6a78, .value=0x10}, {.addr=0x6a79, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x6a8d, .a=0x14, .x=0x08, .y=0x69, .sp=0x1b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x6a78, .value=0x10}, {.addr=0x6a79, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x6a78, .value=0x10, .type=IO_READ},
        {.addr=0x6a79, .value=0x13, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_001E) {
    const struct CPU_State initial_cpu = {.pc=0xcbdb, .a=0xe8, .x=0xaf, .y=0x09, .sp=0x3e, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xcbdb, .value=0x10}, {.addr=0xcbdc, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xcbdd, .a=0xe8, .x=0xaf, .y=0x09, .sp=0x3e, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xcbdb, .value=0x10}, {.addr=0xcbdc, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xcbdb, .value=0x10, .type=IO_READ},
        {.addr=0xcbdc, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_001F) {
    const struct CPU_State initial_cpu = {.pc=0x4b7b, .a=0x00, .x=0x78, .y=0x42, .sp=0x62, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x4b7b, .value=0x10}, {.addr=0x4b7c, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x4b7d, .a=0x00, .x=0x78, .y=0x42, .sp=0x62, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x4b7b, .value=0x10}, {.addr=0x4b7c, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x4b7b, .value=0x10, .type=IO_READ},
        {.addr=0x4b7c, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0020) {
    const struct CPU_State initial_cpu = {.pc=0x96d7, .a=0x0f, .x=0xfd, .y=0x13, .sp=0xfe, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x96d7, .value=0x10}, {.addr=0x96d8, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x96a4, .a=0x0f, .x=0xfd, .y=0x13, .sp=0xfe, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x96d7, .value=0x10}, {.addr=0x96d8, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x96d7, .value=0x10, .type=IO_READ},
        {.addr=0x96d8, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0021) {
    const struct CPU_State initial_cpu = {.pc=0x3d27, .a=0xf7, .x=0x25, .y=0x11, .sp=0xf4, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x3d27, .value=0x10}, {.addr=0x3d28, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x3d5c, .a=0xf7, .x=0x25, .y=0x11, .sp=0xf4, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x3d27, .value=0x10}, {.addr=0x3d28, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x3d27, .value=0x10, .type=IO_READ},
        {.addr=0x3d28, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0022) {
    const struct CPU_State initial_cpu = {.pc=0xfa11, .a=0x93, .x=0x2b, .y=0x2d, .sp=0x6f, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xfa11, .value=0x10}, {.addr=0xfa12, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xfa13, .a=0x93, .x=0x2b, .y=0x2d, .sp=0x6f, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xfa11, .value=0x10}, {.addr=0xfa12, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xfa11, .value=0x10, .type=IO_READ},
        {.addr=0xfa12, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0023) {
    const struct CPU_State initial_cpu = {.pc=0x7c24, .a=0x52, .x=0x48, .y=0xb7, .sp=0x9b, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x7c24, .value=0x10}, {.addr=0x7c25, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x7ca5, .a=0x52, .x=0x48, .y=0xb7, .sp=0x9b, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x7c24, .value=0x10}, {.addr=0x7c25, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x7c24, .value=0x10, .type=IO_READ},
        {.addr=0x7c25, .value=0x7f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0024) {
    const struct CPU_State initial_cpu = {.pc=0xd311, .a=0x8d, .x=0x73, .y=0xd9, .sp=0x71, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xd311, .value=0x10}, {.addr=0xd312, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xd313, .a=0x8d, .x=0x73, .y=0xd9, .sp=0x71, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xd311, .value=0x10}, {.addr=0xd312, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xd311, .value=0x10, .type=IO_READ},
        {.addr=0xd312, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0025) {
    const struct CPU_State initial_cpu = {.pc=0x529f, .a=0x95, .x=0x78, .y=0x24, .sp=0x66, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x529f, .value=0x10}, {.addr=0x52a0, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x52b3, .a=0x95, .x=0x78, .y=0x24, .sp=0x66, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x529f, .value=0x10}, {.addr=0x52a0, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x529f, .value=0x10, .type=IO_READ},
        {.addr=0x52a0, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0026) {
    const struct CPU_State initial_cpu = {.pc=0x6e70, .a=0x8f, .x=0x81, .y=0xda, .sp=0xce, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x6e70, .value=0x10}, {.addr=0x6e71, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0x6e57, .a=0x8f, .x=0x81, .y=0xda, .sp=0xce, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x6e70, .value=0x10}, {.addr=0x6e71, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0x6e70, .value=0x10, .type=IO_READ},
        {.addr=0x6e71, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0027) {
    const struct CPU_State initial_cpu = {.pc=0x5f07, .a=0x48, .x=0xf6, .y=0xd1, .sp=0x5d, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x5f07, .value=0x10}, {.addr=0x5f08, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x5f09, .a=0x48, .x=0xf6, .y=0xd1, .sp=0x5d, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x5f07, .value=0x10}, {.addr=0x5f08, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x5f07, .value=0x10, .type=IO_READ},
        {.addr=0x5f08, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0028) {
    const struct CPU_State initial_cpu = {.pc=0x915d, .a=0x23, .x=0x25, .y=0xf4, .sp=0xb5, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x915d, .value=0x10}, {.addr=0x915e, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x91bb, .a=0x23, .x=0x25, .y=0xf4, .sp=0xb5, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x915d, .value=0x10}, {.addr=0x915e, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x915d, .value=0x10, .type=IO_READ},
        {.addr=0x915e, .value=0x5c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0029) {
    const struct CPU_State initial_cpu = {.pc=0x0217, .a=0xc0, .x=0x49, .y=0x96, .sp=0x9b, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0217, .value=0x10}, {.addr=0x0218, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x027e, .a=0xc0, .x=0x49, .y=0x96, .sp=0x9b, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0217, .value=0x10}, {.addr=0x0218, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x0217, .value=0x10, .type=IO_READ},
        {.addr=0x0218, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_002A) {
    const struct CPU_State initial_cpu = {.pc=0xbafc, .a=0x91, .x=0x67, .y=0x15, .sp=0x2e, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xbafc, .value=0x10}, {.addr=0xbafd, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xbaa3, .a=0x91, .x=0x67, .y=0x15, .sp=0x2e, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xbafc, .value=0x10}, {.addr=0xbafd, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xbafc, .value=0x10, .type=IO_READ},
        {.addr=0xbafd, .value=0xa5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_002B) {
    const struct CPU_State initial_cpu = {.pc=0xc2b2, .a=0xe6, .x=0xa7, .y=0xb3, .sp=0x4d, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xc2b2, .value=0x10}, {.addr=0xc2b3, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xc31e, .a=0xe6, .x=0xa7, .y=0xb3, .sp=0x4d, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xc2b2, .value=0x10}, {.addr=0xc2b3, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xc2b2, .value=0x10, .type=IO_READ},
        {.addr=0xc2b3, .value=0x6a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_002C) {
    const struct CPU_State initial_cpu = {.pc=0x5ebb, .a=0x77, .x=0x15, .y=0xb5, .sp=0x38, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x5ebb, .value=0x10}, {.addr=0x5ebc, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x5ebd, .a=0x77, .x=0x15, .y=0xb5, .sp=0x38, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x5ebb, .value=0x10}, {.addr=0x5ebc, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x5ebb, .value=0x10, .type=IO_READ},
        {.addr=0x5ebc, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_002D) {
    const struct CPU_State initial_cpu = {.pc=0x375f, .a=0x0c, .x=0x27, .y=0x8b, .sp=0xbe, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x375f, .value=0x10}, {.addr=0x3760, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x3761, .a=0x0c, .x=0x27, .y=0x8b, .sp=0xbe, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x375f, .value=0x10}, {.addr=0x3760, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x375f, .value=0x10, .type=IO_READ},
        {.addr=0x3760, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_002E) {
    const struct CPU_State initial_cpu = {.pc=0x112a, .a=0x01, .x=0x9e, .y=0xa0, .sp=0xd6, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x112a, .value=0x10}, {.addr=0x112b, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x11a8, .a=0x01, .x=0x9e, .y=0xa0, .sp=0xd6, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x112a, .value=0x10}, {.addr=0x112b, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x112a, .value=0x10, .type=IO_READ},
        {.addr=0x112b, .value=0x7c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_002F) {
    const struct CPU_State initial_cpu = {.pc=0x6861, .a=0x4a, .x=0xca, .y=0xb5, .sp=0x1c, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x6861, .value=0x10}, {.addr=0x6862, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x680a, .a=0x4a, .x=0xca, .y=0xb5, .sp=0x1c, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x6861, .value=0x10}, {.addr=0x6862, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x6861, .value=0x10, .type=IO_READ},
        {.addr=0x6862, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0030) {
    const struct CPU_State initial_cpu = {.pc=0xddde, .a=0x18, .x=0xfe, .y=0x21, .sp=0xdc, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xddde, .value=0x10}, {.addr=0xdddf, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xdde0, .a=0x18, .x=0xfe, .y=0x21, .sp=0xdc, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xddde, .value=0x10}, {.addr=0xdddf, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xddde, .value=0x10, .type=IO_READ},
        {.addr=0xdddf, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0031) {
    const struct CPU_State initial_cpu = {.pc=0xfa9c, .a=0x79, .x=0xdf, .y=0xaf, .sp=0xb4, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xfa9c, .value=0x10}, {.addr=0xfa9d, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xfa56, .a=0x79, .x=0xdf, .y=0xaf, .sp=0xb4, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xfa9c, .value=0x10}, {.addr=0xfa9d, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xfa9c, .value=0x10, .type=IO_READ},
        {.addr=0xfa9d, .value=0xb8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0032) {
    const struct CPU_State initial_cpu = {.pc=0x54ee, .a=0x6c, .x=0x55, .y=0xf9, .sp=0x20, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x54ee, .value=0x10}, {.addr=0x54ef, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x5533, .a=0x6c, .x=0x55, .y=0xf9, .sp=0x20, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x54ee, .value=0x10}, {.addr=0x54ef, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x54ee, .value=0x10, .type=IO_READ},
        {.addr=0x54ef, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0033) {
    const struct CPU_State initial_cpu = {.pc=0x79a3, .a=0xaa, .x=0x5d, .y=0x60, .sp=0xe5, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x79a3, .value=0x10}, {.addr=0x79a4, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x79a5, .a=0xaa, .x=0x5d, .y=0x60, .sp=0xe5, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x79a3, .value=0x10}, {.addr=0x79a4, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x79a3, .value=0x10, .type=IO_READ},
        {.addr=0x79a4, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0034) {
    const struct CPU_State initial_cpu = {.pc=0x9090, .a=0x86, .x=0x34, .y=0xe7, .sp=0xbf, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x9090, .value=0x10}, {.addr=0x9091, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x9065, .a=0x86, .x=0x34, .y=0xe7, .sp=0xbf, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x9090, .value=0x10}, {.addr=0x9091, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x9090, .value=0x10, .type=IO_READ},
        {.addr=0x9091, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0035) {
    const struct CPU_State initial_cpu = {.pc=0xc58c, .a=0x17, .x=0x40, .y=0x90, .sp=0x4e, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xc58c, .value=0x10}, {.addr=0xc58d, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xc517, .a=0x17, .x=0x40, .y=0x90, .sp=0x4e, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0xc58c, .value=0x10}, {.addr=0xc58d, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xc58c, .value=0x10, .type=IO_READ},
        {.addr=0xc58d, .value=0x89, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0036) {
    const struct CPU_State initial_cpu = {.pc=0x7eaa, .a=0xdf, .x=0xe1, .y=0x4a, .sp=0x71, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x7eaa, .value=0x10}, {.addr=0x7eab, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x7eac, .a=0xdf, .x=0xe1, .y=0x4a, .sp=0x71, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x7eaa, .value=0x10}, {.addr=0x7eab, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x7eaa, .value=0x10, .type=IO_READ},
        {.addr=0x7eab, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0037) {
    const struct CPU_State initial_cpu = {.pc=0x42a6, .a=0x75, .x=0x3b, .y=0xf8, .sp=0xe1, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x42a6, .value=0x10}, {.addr=0x42a7, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x42a8, .a=0x75, .x=0x3b, .y=0xf8, .sp=0xe1, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x42a6, .value=0x10}, {.addr=0x42a7, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x42a6, .value=0x10, .type=IO_READ},
        {.addr=0x42a7, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0038) {
    const struct CPU_State initial_cpu = {.pc=0x3857, .a=0x1a, .x=0x9c, .y=0x03, .sp=0x24, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x3857, .value=0x10}, {.addr=0x3858, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x386b, .a=0x1a, .x=0x9c, .y=0x03, .sp=0x24, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x3857, .value=0x10}, {.addr=0x3858, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x3857, .value=0x10, .type=IO_READ},
        {.addr=0x3858, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0039) {
    const struct CPU_State initial_cpu = {.pc=0x03a2, .a=0x71, .x=0xd0, .y=0x26, .sp=0x80, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x03a2, .value=0x10}, {.addr=0x03a3, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x03a4, .a=0x71, .x=0xd0, .y=0x26, .sp=0x80, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x03a2, .value=0x10}, {.addr=0x03a3, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x03a2, .value=0x10, .type=IO_READ},
        {.addr=0x03a3, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_003A) {
    const struct CPU_State initial_cpu = {.pc=0x10e6, .a=0xa6, .x=0x05, .y=0xc2, .sp=0xf7, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x10e6, .value=0x10}, {.addr=0x10e7, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x10e8, .a=0xa6, .x=0x05, .y=0xc2, .sp=0xf7, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x10e6, .value=0x10}, {.addr=0x10e7, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x10e6, .value=0x10, .type=IO_READ},
        {.addr=0x10e7, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_003B) {
    const struct CPU_State initial_cpu = {.pc=0x27d7, .a=0x97, .x=0xc7, .y=0xe0, .sp=0x6b, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x27d7, .value=0x10}, {.addr=0x27d8, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x27d9, .a=0x97, .x=0xc7, .y=0xe0, .sp=0x6b, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x27d7, .value=0x10}, {.addr=0x27d8, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x27d7, .value=0x10, .type=IO_READ},
        {.addr=0x27d8, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_003C) {
    const struct CPU_State initial_cpu = {.pc=0xf62f, .a=0x4d, .x=0x42, .y=0x5d, .sp=0x09, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xf62f, .value=0x10}, {.addr=0xf630, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xf5b5, .a=0x4d, .x=0x42, .y=0x5d, .sp=0x09, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xf62f, .value=0x10}, {.addr=0xf630, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xf62f, .value=0x10, .type=IO_READ},
        {.addr=0xf630, .value=0x84, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_003D) {
    const struct CPU_State initial_cpu = {.pc=0xfe6c, .a=0xa5, .x=0x4d, .y=0xc7, .sp=0xe5, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xfe6c, .value=0x10}, {.addr=0xfe6d, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xfea4, .a=0xa5, .x=0x4d, .y=0xc7, .sp=0xe5, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xfe6c, .value=0x10}, {.addr=0xfe6d, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xfe6c, .value=0x10, .type=IO_READ},
        {.addr=0xfe6d, .value=0x36, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_003E) {
    const struct CPU_State initial_cpu = {.pc=0x76a5, .a=0x0b, .x=0x85, .y=0x1f, .sp=0x6b, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x76a5, .value=0x10}, {.addr=0x76a6, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x76a7, .a=0x0b, .x=0x85, .y=0x1f, .sp=0x6b, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x76a5, .value=0x10}, {.addr=0x76a6, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x76a5, .value=0x10, .type=IO_READ},
        {.addr=0x76a6, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_003F) {
    const struct CPU_State initial_cpu = {.pc=0x0ca5, .a=0x96, .x=0x20, .y=0xa7, .sp=0x56, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0ca5, .value=0x10}, {.addr=0x0ca6, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x0ca9, .a=0x96, .x=0x20, .y=0xa7, .sp=0x56, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0ca5, .value=0x10}, {.addr=0x0ca6, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x0ca5, .value=0x10, .type=IO_READ},
        {.addr=0x0ca6, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0040) {
    const struct CPU_State initial_cpu = {.pc=0x7ede, .a=0x1d, .x=0x45, .y=0xef, .sp=0x26, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x7ede, .value=0x10}, {.addr=0x7edf, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x7ee0, .a=0x1d, .x=0x45, .y=0xef, .sp=0x26, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x7ede, .value=0x10}, {.addr=0x7edf, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x7ede, .value=0x10, .type=IO_READ},
        {.addr=0x7edf, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0041) {
    const struct CPU_State initial_cpu = {.pc=0x28ff, .a=0x6a, .x=0xe6, .y=0xae, .sp=0xc0, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x28ff, .value=0x10}, {.addr=0x2900, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x2901, .a=0x6a, .x=0xe6, .y=0xae, .sp=0xc0, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x28ff, .value=0x10}, {.addr=0x2900, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x28ff, .value=0x10, .type=IO_READ},
        {.addr=0x2900, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0042) {
    const struct CPU_State initial_cpu = {.pc=0x722b, .a=0x41, .x=0x2d, .y=0x67, .sp=0xf9, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x722b, .value=0x10}, {.addr=0x722c, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x71ce, .a=0x41, .x=0x2d, .y=0x67, .sp=0xf9, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x722b, .value=0x10}, {.addr=0x722c, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x722b, .value=0x10, .type=IO_READ},
        {.addr=0x722c, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0043) {
    const struct CPU_State initial_cpu = {.pc=0x5d6f, .a=0xee, .x=0x02, .y=0x1a, .sp=0xf6, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x5d6f, .value=0x10}, {.addr=0x5d70, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x5d71, .a=0xee, .x=0x02, .y=0x1a, .sp=0xf6, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x5d6f, .value=0x10}, {.addr=0x5d70, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x5d6f, .value=0x10, .type=IO_READ},
        {.addr=0x5d70, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0044) {
    const struct CPU_State initial_cpu = {.pc=0x9307, .a=0xa9, .x=0x4d, .y=0xb6, .sp=0xbf, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x9307, .value=0x10}, {.addr=0x9308, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x92ac, .a=0xa9, .x=0x4d, .y=0xb6, .sp=0xbf, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x9307, .value=0x10}, {.addr=0x9308, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x9307, .value=0x10, .type=IO_READ},
        {.addr=0x9308, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0045) {
    const struct CPU_State initial_cpu = {.pc=0x5e37, .a=0x37, .x=0xc0, .y=0xbe, .sp=0x4e, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x5e37, .value=0x10}, {.addr=0x5e38, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x5e39, .a=0x37, .x=0xc0, .y=0xbe, .sp=0x4e, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x5e37, .value=0x10}, {.addr=0x5e38, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x5e37, .value=0x10, .type=IO_READ},
        {.addr=0x5e38, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0046) {
    const struct CPU_State initial_cpu = {.pc=0x085a, .a=0x09, .x=0x15, .y=0xb7, .sp=0x07, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x085a, .value=0x10}, {.addr=0x085b, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x085c, .a=0x09, .x=0x15, .y=0xb7, .sp=0x07, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x085a, .value=0x10}, {.addr=0x085b, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x085a, .value=0x10, .type=IO_READ},
        {.addr=0x085b, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0047) {
    const struct CPU_State initial_cpu = {.pc=0xebce, .a=0x16, .x=0x04, .y=0x3f, .sp=0xc9, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xebce, .value=0x10}, {.addr=0xebcf, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xebd0, .a=0x16, .x=0x04, .y=0x3f, .sp=0xc9, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xebce, .value=0x10}, {.addr=0xebcf, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xebce, .value=0x10, .type=IO_READ},
        {.addr=0xebcf, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0048) {
    const struct CPU_State initial_cpu = {.pc=0xd430, .a=0xee, .x=0xd2, .y=0x45, .sp=0x94, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xd430, .value=0x10}, {.addr=0xd431, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xd45d, .a=0xee, .x=0xd2, .y=0x45, .sp=0x94, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xd430, .value=0x10}, {.addr=0xd431, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xd430, .value=0x10, .type=IO_READ},
        {.addr=0xd431, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0049) {
    const struct CPU_State initial_cpu = {.pc=0x2d40, .a=0x48, .x=0xdb, .y=0x83, .sp=0x97, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x2d40, .value=0x10}, {.addr=0x2d41, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x2cd7, .a=0x48, .x=0xdb, .y=0x83, .sp=0x97, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x2d40, .value=0x10}, {.addr=0x2d41, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x2d40, .value=0x10, .type=IO_READ},
        {.addr=0x2d41, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_004A) {
    const struct CPU_State initial_cpu = {.pc=0xbe86, .a=0x55, .x=0x47, .y=0xd1, .sp=0x3e, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xbe86, .value=0x10}, {.addr=0xbe87, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xbe88, .a=0x55, .x=0x47, .y=0xd1, .sp=0x3e, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xbe86, .value=0x10}, {.addr=0xbe87, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xbe86, .value=0x10, .type=IO_READ},
        {.addr=0xbe87, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_004B) {
    const struct CPU_State initial_cpu = {.pc=0xc8b8, .a=0x2d, .x=0xce, .y=0x05, .sp=0xda, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xc8b8, .value=0x10}, {.addr=0xc8b9, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xc8ba, .a=0x2d, .x=0xce, .y=0x05, .sp=0xda, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xc8b8, .value=0x10}, {.addr=0xc8b9, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xc8b8, .value=0x10, .type=IO_READ},
        {.addr=0xc8b9, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_004C) {
    const struct CPU_State initial_cpu = {.pc=0x475c, .a=0xe9, .x=0xf7, .y=0x34, .sp=0x60, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x475c, .value=0x10}, {.addr=0x475d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x475e, .a=0xe9, .x=0xf7, .y=0x34, .sp=0x60, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x475c, .value=0x10}, {.addr=0x475d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x475c, .value=0x10, .type=IO_READ},
        {.addr=0x475d, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_004D) {
    const struct CPU_State initial_cpu = {.pc=0x4ee6, .a=0xdc, .x=0x4b, .y=0xaa, .sp=0xa8, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x4ee6, .value=0x10}, {.addr=0x4ee7, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x4eed, .a=0xdc, .x=0x4b, .y=0xaa, .sp=0xa8, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x4ee6, .value=0x10}, {.addr=0x4ee7, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x4ee6, .value=0x10, .type=IO_READ},
        {.addr=0x4ee7, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_004E) {
    const struct CPU_State initial_cpu = {.pc=0x7ad3, .a=0xa9, .x=0xc4, .y=0xa1, .sp=0xd7, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x7ad3, .value=0x10}, {.addr=0x7ad4, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x7a55, .a=0xa9, .x=0xc4, .y=0xa1, .sp=0xd7, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x7ad3, .value=0x10}, {.addr=0x7ad4, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x7ad3, .value=0x10, .type=IO_READ},
        {.addr=0x7ad4, .value=0x80, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_004F) {
    const struct CPU_State initial_cpu = {.pc=0x88e7, .a=0x2a, .x=0x64, .y=0xdc, .sp=0xb2, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x88e7, .value=0x10}, {.addr=0x88e8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x88e9, .a=0x2a, .x=0x64, .y=0xdc, .sp=0xb2, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x88e7, .value=0x10}, {.addr=0x88e8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x88e7, .value=0x10, .type=IO_READ},
        {.addr=0x88e8, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0050) {
    const struct CPU_State initial_cpu = {.pc=0xef89, .a=0x8a, .x=0x83, .y=0x88, .sp=0x36, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xef89, .value=0x10}, {.addr=0xef8a, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xef34, .a=0x8a, .x=0x83, .y=0x88, .sp=0x36, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xef89, .value=0x10}, {.addr=0xef8a, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xef89, .value=0x10, .type=IO_READ},
        {.addr=0xef8a, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0051) {
    const struct CPU_State initial_cpu = {.pc=0x1e10, .a=0x3d, .x=0xeb, .y=0x60, .sp=0x71, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x1e10, .value=0x10}, {.addr=0x1e11, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x1e32, .a=0x3d, .x=0xeb, .y=0x60, .sp=0x71, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x1e10, .value=0x10}, {.addr=0x1e11, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x1e10, .value=0x10, .type=IO_READ},
        {.addr=0x1e11, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0052) {
    const struct CPU_State initial_cpu = {.pc=0xa9d9, .a=0xe9, .x=0x0e, .y=0x7b, .sp=0xc1, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xa9d9, .value=0x10}, {.addr=0xa9da, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xaa3d, .a=0xe9, .x=0x0e, .y=0x7b, .sp=0xc1, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xa9d9, .value=0x10}, {.addr=0xa9da, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xa9d9, .value=0x10, .type=IO_READ},
        {.addr=0xa9da, .value=0x62, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0053) {
    const struct CPU_State initial_cpu = {.pc=0x5fa0, .a=0x13, .x=0xb3, .y=0xcc, .sp=0xc7, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x5fa0, .value=0x10}, {.addr=0x5fa1, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5fa2, .a=0x13, .x=0xb3, .y=0xcc, .sp=0xc7, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x5fa0, .value=0x10}, {.addr=0x5fa1, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5fa0, .value=0x10, .type=IO_READ},
        {.addr=0x5fa1, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0054) {
    const struct CPU_State initial_cpu = {.pc=0x2a3e, .a=0x3b, .x=0xf6, .y=0xa7, .sp=0x26, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x2a3e, .value=0x10}, {.addr=0x2a3f, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x2a40, .a=0x3b, .x=0xf6, .y=0xa7, .sp=0x26, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x2a3e, .value=0x10}, {.addr=0x2a3f, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x2a3e, .value=0x10, .type=IO_READ},
        {.addr=0x2a3f, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0055) {
    const struct CPU_State initial_cpu = {.pc=0xeb07, .a=0xc8, .x=0xc3, .y=0x7b, .sp=0x4c, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xeb07, .value=0x10}, {.addr=0xeb08, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xeaee, .a=0xc8, .x=0xc3, .y=0x7b, .sp=0x4c, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xeb07, .value=0x10}, {.addr=0xeb08, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xeb07, .value=0x10, .type=IO_READ},
        {.addr=0xeb08, .value=0xe5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0056) {
    const struct CPU_State initial_cpu = {.pc=0x6337, .a=0x3f, .x=0xe1, .y=0x9a, .sp=0x61, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x6337, .value=0x10}, {.addr=0x6338, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x6339, .a=0x3f, .x=0xe1, .y=0x9a, .sp=0x61, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6337, .value=0x10}, {.addr=0x6338, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x6337, .value=0x10, .type=IO_READ},
        {.addr=0x6338, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0057) {
    const struct CPU_State initial_cpu = {.pc=0xb83a, .a=0x54, .x=0x54, .y=0x41, .sp=0x94, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xb83a, .value=0x10}, {.addr=0xb83b, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xb87e, .a=0x54, .x=0x54, .y=0x41, .sp=0x94, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xb83a, .value=0x10}, {.addr=0xb83b, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xb83a, .value=0x10, .type=IO_READ},
        {.addr=0xb83b, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0058) {
    const struct CPU_State initial_cpu = {.pc=0xb901, .a=0xe2, .x=0xe9, .y=0xce, .sp=0x5b, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xb901, .value=0x10}, {.addr=0xb902, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xb95c, .a=0xe2, .x=0xe9, .y=0xce, .sp=0x5b, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xb901, .value=0x10}, {.addr=0xb902, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xb901, .value=0x10, .type=IO_READ},
        {.addr=0xb902, .value=0x59, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0059) {
    const struct CPU_State initial_cpu = {.pc=0x446e, .a=0x3c, .x=0x02, .y=0xea, .sp=0x05, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x446e, .value=0x10}, {.addr=0x446f, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x43f2, .a=0x3c, .x=0x02, .y=0xea, .sp=0x05, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x446e, .value=0x10}, {.addr=0x446f, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x446e, .value=0x10, .type=IO_READ},
        {.addr=0x446f, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_005A) {
    const struct CPU_State initial_cpu = {.pc=0x1a54, .a=0x6c, .x=0x5e, .y=0x96, .sp=0x9f, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x1a54, .value=0x10}, {.addr=0x1a55, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x1a49, .a=0x6c, .x=0x5e, .y=0x96, .sp=0x9f, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x1a54, .value=0x10}, {.addr=0x1a55, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x1a54, .value=0x10, .type=IO_READ},
        {.addr=0x1a55, .value=0xf3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_005B) {
    const struct CPU_State initial_cpu = {.pc=0xf76c, .a=0x09, .x=0xed, .y=0x31, .sp=0x9f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xf76c, .value=0x10}, {.addr=0xf76d, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xf76e, .a=0x09, .x=0xed, .y=0x31, .sp=0x9f, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xf76c, .value=0x10}, {.addr=0xf76d, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xf76c, .value=0x10, .type=IO_READ},
        {.addr=0xf76d, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_005C) {
    const struct CPU_State initial_cpu = {.pc=0x7a1a, .a=0x9e, .x=0x4a, .y=0x43, .sp=0x44, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x7a1a, .value=0x10}, {.addr=0x7a1b, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x7a43, .a=0x9e, .x=0x4a, .y=0x43, .sp=0x44, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x7a1a, .value=0x10}, {.addr=0x7a1b, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x7a1a, .value=0x10, .type=IO_READ},
        {.addr=0x7a1b, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_005D) {
    const struct CPU_State initial_cpu = {.pc=0xf6b3, .a=0x2e, .x=0x24, .y=0xd2, .sp=0x13, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xf6b3, .value=0x10}, {.addr=0xf6b4, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xf6b5, .a=0x2e, .x=0x24, .y=0xd2, .sp=0x13, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xf6b3, .value=0x10}, {.addr=0xf6b4, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xf6b3, .value=0x10, .type=IO_READ},
        {.addr=0xf6b4, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_005E) {
    const struct CPU_State initial_cpu = {.pc=0x1b74, .a=0xed, .x=0x6f, .y=0x26, .sp=0xe1, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x1b74, .value=0x10}, {.addr=0x1b75, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x1bbb, .a=0xed, .x=0x6f, .y=0x26, .sp=0xe1, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x1b74, .value=0x10}, {.addr=0x1b75, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x1b74, .value=0x10, .type=IO_READ},
        {.addr=0x1b75, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_005F) {
    const struct CPU_State initial_cpu = {.pc=0xb997, .a=0x85, .x=0x5b, .y=0x21, .sp=0x24, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xb997, .value=0x10}, {.addr=0xb998, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb999, .a=0x85, .x=0x5b, .y=0x21, .sp=0x24, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xb997, .value=0x10}, {.addr=0xb998, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb997, .value=0x10, .type=IO_READ},
        {.addr=0xb998, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0060) {
    const struct CPU_State initial_cpu = {.pc=0xfe03, .a=0x12, .x=0xb3, .y=0xf2, .sp=0x2e, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xfe03, .value=0x10}, {.addr=0xfe04, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xfe05, .a=0x12, .x=0xb3, .y=0xf2, .sp=0x2e, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xfe03, .value=0x10}, {.addr=0xfe04, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xfe03, .value=0x10, .type=IO_READ},
        {.addr=0xfe04, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0061) {
    const struct CPU_State initial_cpu = {.pc=0x8007, .a=0xf7, .x=0xb7, .y=0x35, .sp=0x42, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x8007, .value=0x10}, {.addr=0x8008, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x8009, .a=0xf7, .x=0xb7, .y=0x35, .sp=0x42, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x8007, .value=0x10}, {.addr=0x8008, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x8007, .value=0x10, .type=IO_READ},
        {.addr=0x8008, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0062) {
    const struct CPU_State initial_cpu = {.pc=0x54ed, .a=0x01, .x=0xcc, .y=0x3a, .sp=0x4c, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x54ed, .value=0x10}, {.addr=0x54ee, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x54d7, .a=0x01, .x=0xcc, .y=0x3a, .sp=0x4c, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x54ed, .value=0x10}, {.addr=0x54ee, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x54ed, .value=0x10, .type=IO_READ},
        {.addr=0x54ee, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0063) {
    const struct CPU_State initial_cpu = {.pc=0xa346, .a=0xd0, .x=0x3b, .y=0x5b, .sp=0xd7, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xa346, .value=0x10}, {.addr=0xa347, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xa348, .a=0xd0, .x=0x3b, .y=0x5b, .sp=0xd7, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xa346, .value=0x10}, {.addr=0xa347, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xa346, .value=0x10, .type=IO_READ},
        {.addr=0xa347, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0064) {
    const struct CPU_State initial_cpu = {.pc=0xb8f8, .a=0x8d, .x=0x2c, .y=0x30, .sp=0xfc, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xb8f8, .value=0x10}, {.addr=0xb8f9, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xb8fa, .a=0x8d, .x=0x2c, .y=0x30, .sp=0xfc, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xb8f8, .value=0x10}, {.addr=0xb8f9, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xb8f8, .value=0x10, .type=IO_READ},
        {.addr=0xb8f9, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0065) {
    const struct CPU_State initial_cpu = {.pc=0xbf28, .a=0xdc, .x=0x2b, .y=0x56, .sp=0x28, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xbf28, .value=0x10}, {.addr=0xbf29, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xbf0c, .a=0xdc, .x=0x2b, .y=0x56, .sp=0x28, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xbf28, .value=0x10}, {.addr=0xbf29, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xbf28, .value=0x10, .type=IO_READ},
        {.addr=0xbf29, .value=0xe2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0066) {
    const struct CPU_State initial_cpu = {.pc=0xef47, .a=0x53, .x=0x07, .y=0xd8, .sp=0xe3, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xef47, .value=0x10}, {.addr=0xef48, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xef90, .a=0x53, .x=0x07, .y=0xd8, .sp=0xe3, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xef47, .value=0x10}, {.addr=0xef48, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xef47, .value=0x10, .type=IO_READ},
        {.addr=0xef48, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0067) {
    const struct CPU_State initial_cpu = {.pc=0xb098, .a=0xaa, .x=0x95, .y=0x97, .sp=0xd5, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xb098, .value=0x10}, {.addr=0xb099, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0xb09a, .a=0xaa, .x=0x95, .y=0x97, .sp=0xd5, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xb098, .value=0x10}, {.addr=0xb099, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0xb098, .value=0x10, .type=IO_READ},
        {.addr=0xb099, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0068) {
    const struct CPU_State initial_cpu = {.pc=0xd15f, .a=0xe8, .x=0x91, .y=0x0f, .sp=0xf2, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xd15f, .value=0x10}, {.addr=0xd160, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xd161, .a=0xe8, .x=0x91, .y=0x0f, .sp=0xf2, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0xd15f, .value=0x10}, {.addr=0xd160, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xd15f, .value=0x10, .type=IO_READ},
        {.addr=0xd160, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0069) {
    const struct CPU_State initial_cpu = {.pc=0x3da2, .a=0x16, .x=0xc2, .y=0x8d, .sp=0x20, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x3da2, .value=0x10}, {.addr=0x3da3, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x3da2, .a=0x16, .x=0xc2, .y=0x8d, .sp=0x20, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x3da2, .value=0x10}, {.addr=0x3da3, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x3da2, .value=0x10, .type=IO_READ},
        {.addr=0x3da3, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_006A) {
    const struct CPU_State initial_cpu = {.pc=0xfb7d, .a=0x2a, .x=0x44, .y=0x6c, .sp=0x13, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xfb7d, .value=0x10}, {.addr=0xfb7e, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xfbd6, .a=0x2a, .x=0x44, .y=0x6c, .sp=0x13, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xfb7d, .value=0x10}, {.addr=0xfb7e, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xfb7d, .value=0x10, .type=IO_READ},
        {.addr=0xfb7e, .value=0x57, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_006B) {
    const struct CPU_State initial_cpu = {.pc=0xdc61, .a=0xf0, .x=0xf4, .y=0x70, .sp=0x38, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xdc61, .value=0x10}, {.addr=0xdc62, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xdc8e, .a=0xf0, .x=0xf4, .y=0x70, .sp=0x38, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xdc61, .value=0x10}, {.addr=0xdc62, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xdc61, .value=0x10, .type=IO_READ},
        {.addr=0xdc62, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_006C) {
    const struct CPU_State initial_cpu = {.pc=0xdd24, .a=0x3b, .x=0x3a, .y=0x19, .sp=0x0b, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xdd24, .value=0x10}, {.addr=0xdd25, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xdd26, .a=0x3b, .x=0x3a, .y=0x19, .sp=0x0b, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0xdd24, .value=0x10}, {.addr=0xdd25, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xdd24, .value=0x10, .type=IO_READ},
        {.addr=0xdd25, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_006D) {
    const struct CPU_State initial_cpu = {.pc=0x7586, .a=0xfb, .x=0xa4, .y=0x74, .sp=0xb7, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x7586, .value=0x10}, {.addr=0x7587, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x7588, .a=0xfb, .x=0xa4, .y=0x74, .sp=0xb7, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x7586, .value=0x10}, {.addr=0x7587, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x7586, .value=0x10, .type=IO_READ},
        {.addr=0x7587, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_006E) {
    const struct CPU_State initial_cpu = {.pc=0x360c, .a=0xc0, .x=0xb1, .y=0x44, .sp=0xbe, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x360c, .value=0x10}, {.addr=0x360d, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x35df, .a=0xc0, .x=0xb1, .y=0x44, .sp=0xbe, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x360c, .value=0x10}, {.addr=0x360d, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x360c, .value=0x10, .type=IO_READ},
        {.addr=0x360d, .value=0xd1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_006F) {
    const struct CPU_State initial_cpu = {.pc=0x808a, .a=0x8f, .x=0xcf, .y=0x98, .sp=0xc1, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x808a, .value=0x10}, {.addr=0x808b, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x808c, .a=0x8f, .x=0xcf, .y=0x98, .sp=0xc1, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x808a, .value=0x10}, {.addr=0x808b, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x808a, .value=0x10, .type=IO_READ},
        {.addr=0x808b, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0070) {
    const struct CPU_State initial_cpu = {.pc=0xf185, .a=0x67, .x=0x6b, .y=0x81, .sp=0x55, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xf185, .value=0x10}, {.addr=0xf186, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xf187, .a=0x67, .x=0x6b, .y=0x81, .sp=0x55, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xf185, .value=0x10}, {.addr=0xf186, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xf185, .value=0x10, .type=IO_READ},
        {.addr=0xf186, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0071) {
    const struct CPU_State initial_cpu = {.pc=0x73fc, .a=0x56, .x=0x16, .y=0x45, .sp=0x36, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x73fc, .value=0x10}, {.addr=0x73fd, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x73fe, .a=0x56, .x=0x16, .y=0x45, .sp=0x36, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x73fc, .value=0x10}, {.addr=0x73fd, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x73fc, .value=0x10, .type=IO_READ},
        {.addr=0x73fd, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0072) {
    const struct CPU_State initial_cpu = {.pc=0x77cb, .a=0x8a, .x=0x11, .y=0x25, .sp=0x5d, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x77cb, .value=0x10}, {.addr=0x77cc, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x77cd, .a=0x8a, .x=0x11, .y=0x25, .sp=0x5d, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x77cb, .value=0x10}, {.addr=0x77cc, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x77cb, .value=0x10, .type=IO_READ},
        {.addr=0x77cc, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0073) {
    const struct CPU_State initial_cpu = {.pc=0x20ca, .a=0xb9, .x=0x83, .y=0x61, .sp=0x26, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x20ca, .value=0x10}, {.addr=0x20cb, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x2081, .a=0xb9, .x=0x83, .y=0x61, .sp=0x26, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x20ca, .value=0x10}, {.addr=0x20cb, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x20ca, .value=0x10, .type=IO_READ},
        {.addr=0x20cb, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0074) {
    const struct CPU_State initial_cpu = {.pc=0xe3a0, .a=0x59, .x=0x58, .y=0xb1, .sp=0x40, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xe3a0, .value=0x10}, {.addr=0xe3a1, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0xe372, .a=0x59, .x=0x58, .y=0xb1, .sp=0x40, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xe3a0, .value=0x10}, {.addr=0xe3a1, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0xe3a0, .value=0x10, .type=IO_READ},
        {.addr=0xe3a1, .value=0xd0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0075) {
    const struct CPU_State initial_cpu = {.pc=0x3380, .a=0x64, .x=0xef, .y=0x93, .sp=0x10, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x3380, .value=0x10}, {.addr=0x3381, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x3323, .a=0x64, .x=0xef, .y=0x93, .sp=0x10, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x3380, .value=0x10}, {.addr=0x3381, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x3380, .value=0x10, .type=IO_READ},
        {.addr=0x3381, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0076) {
    const struct CPU_State initial_cpu = {.pc=0x4b99, .a=0x78, .x=0x7e, .y=0x93, .sp=0x69, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x4b99, .value=0x10}, {.addr=0x4b9a, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x4bc0, .a=0x78, .x=0x7e, .y=0x93, .sp=0x69, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x4b99, .value=0x10}, {.addr=0x4b9a, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x4b99, .value=0x10, .type=IO_READ},
        {.addr=0x4b9a, .value=0x25, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0077) {
    const struct CPU_State initial_cpu = {.pc=0x5869, .a=0x09, .x=0xc7, .y=0xc2, .sp=0x46, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x5869, .value=0x10}, {.addr=0x586a, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x5840, .a=0x09, .x=0xc7, .y=0xc2, .sp=0x46, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x5869, .value=0x10}, {.addr=0x586a, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x5869, .value=0x10, .type=IO_READ},
        {.addr=0x586a, .value=0xd5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0078) {
    const struct CPU_State initial_cpu = {.pc=0xa17b, .a=0x3c, .x=0x09, .y=0x3f, .sp=0x00, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xa17b, .value=0x10}, {.addr=0xa17c, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xa17d, .a=0x3c, .x=0x09, .y=0x3f, .sp=0x00, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xa17b, .value=0x10}, {.addr=0xa17c, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xa17b, .value=0x10, .type=IO_READ},
        {.addr=0xa17c, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0079) {
    const struct CPU_State initial_cpu = {.pc=0xa64b, .a=0xc1, .x=0xa8, .y=0x98, .sp=0x04, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xa64b, .value=0x10}, {.addr=0xa64c, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xa621, .a=0xc1, .x=0xa8, .y=0x98, .sp=0x04, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xa64b, .value=0x10}, {.addr=0xa64c, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xa64b, .value=0x10, .type=IO_READ},
        {.addr=0xa64c, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_007A) {
    const struct CPU_State initial_cpu = {.pc=0xe89e, .a=0xc5, .x=0x92, .y=0xfb, .sp=0x06, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xe89e, .value=0x10}, {.addr=0xe89f, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xe8c2, .a=0xc5, .x=0x92, .y=0xfb, .sp=0x06, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xe89e, .value=0x10}, {.addr=0xe89f, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xe89e, .value=0x10, .type=IO_READ},
        {.addr=0xe89f, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_007B) {
    const struct CPU_State initial_cpu = {.pc=0xc15b, .a=0xab, .x=0x7b, .y=0xff, .sp=0x3a, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xc15b, .value=0x10}, {.addr=0xc15c, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xc15d, .a=0xab, .x=0x7b, .y=0xff, .sp=0x3a, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xc15b, .value=0x10}, {.addr=0xc15c, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xc15b, .value=0x10, .type=IO_READ},
        {.addr=0xc15c, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_007C) {
    const struct CPU_State initial_cpu = {.pc=0x9c4a, .a=0xd5, .x=0xd9, .y=0xf3, .sp=0x3c, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x9c4a, .value=0x10}, {.addr=0x9c4b, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x9c4c, .a=0xd5, .x=0xd9, .y=0xf3, .sp=0x3c, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x9c4a, .value=0x10}, {.addr=0x9c4b, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x9c4a, .value=0x10, .type=IO_READ},
        {.addr=0x9c4b, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_007D) {
    const struct CPU_State initial_cpu = {.pc=0x1835, .a=0x21, .x=0xc6, .y=0x66, .sp=0x38, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x1835, .value=0x10}, {.addr=0x1836, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x1837, .a=0x21, .x=0xc6, .y=0x66, .sp=0x38, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x1835, .value=0x10}, {.addr=0x1836, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x1835, .value=0x10, .type=IO_READ},
        {.addr=0x1836, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_007E) {
    const struct CPU_State initial_cpu = {.pc=0x01b3, .a=0xfa, .x=0xaf, .y=0xea, .sp=0x4b, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x10}, {.addr=0x01b4, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x014b, .a=0xfa, .x=0xaf, .y=0xea, .sp=0x4b, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x10}, {.addr=0x01b4, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x01b3, .value=0x10, .type=IO_READ},
        {.addr=0x01b4, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_007F) {
    const struct CPU_State initial_cpu = {.pc=0x4ec6, .a=0x0c, .x=0x38, .y=0x48, .sp=0x13, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x4ec6, .value=0x10}, {.addr=0x4ec7, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x4eeb, .a=0x0c, .x=0x38, .y=0x48, .sp=0x13, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x4ec6, .value=0x10}, {.addr=0x4ec7, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x4ec6, .value=0x10, .type=IO_READ},
        {.addr=0x4ec7, .value=0x23, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0080) {
    const struct CPU_State initial_cpu = {.pc=0x6d73, .a=0xb9, .x=0xd4, .y=0xed, .sp=0xa3, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x6d73, .value=0x10}, {.addr=0x6d74, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x6d65, .a=0xb9, .x=0xd4, .y=0xed, .sp=0xa3, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x6d73, .value=0x10}, {.addr=0x6d74, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x6d73, .value=0x10, .type=IO_READ},
        {.addr=0x6d74, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0081) {
    const struct CPU_State initial_cpu = {.pc=0xe55c, .a=0x7e, .x=0xbe, .y=0xa0, .sp=0x6b, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xe55c, .value=0x10}, {.addr=0xe55d, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xe55e, .a=0x7e, .x=0xbe, .y=0xa0, .sp=0x6b, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0xe55c, .value=0x10}, {.addr=0xe55d, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xe55c, .value=0x10, .type=IO_READ},
        {.addr=0xe55d, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0082) {
    const struct CPU_State initial_cpu = {.pc=0x1af7, .a=0x40, .x=0x0a, .y=0x9d, .sp=0x80, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x1af7, .value=0x10}, {.addr=0x1af8, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x1af9, .a=0x40, .x=0x0a, .y=0x9d, .sp=0x80, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x1af7, .value=0x10}, {.addr=0x1af8, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x1af7, .value=0x10, .type=IO_READ},
        {.addr=0x1af8, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0083) {
    const struct CPU_State initial_cpu = {.pc=0x4ca7, .a=0x61, .x=0x41, .y=0x44, .sp=0x42, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x4ca7, .value=0x10}, {.addr=0x4ca8, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x4ca9, .a=0x61, .x=0x41, .y=0x44, .sp=0x42, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x4ca7, .value=0x10}, {.addr=0x4ca8, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x4ca7, .value=0x10, .type=IO_READ},
        {.addr=0x4ca8, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0084) {
    const struct CPU_State initial_cpu = {.pc=0xb7c7, .a=0xee, .x=0xe4, .y=0x45, .sp=0x2b, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xb7c7, .value=0x10}, {.addr=0xb7c8, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xb7c9, .a=0xee, .x=0xe4, .y=0x45, .sp=0x2b, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0xb7c7, .value=0x10}, {.addr=0xb7c8, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xb7c7, .value=0x10, .type=IO_READ},
        {.addr=0xb7c8, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0085) {
    const struct CPU_State initial_cpu = {.pc=0xecd8, .a=0x6b, .x=0x00, .y=0xb6, .sp=0x9e, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xecd8, .value=0x10}, {.addr=0xecd9, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0xecda, .a=0x6b, .x=0x00, .y=0xb6, .sp=0x9e, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xecd8, .value=0x10}, {.addr=0xecd9, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0xecd8, .value=0x10, .type=IO_READ},
        {.addr=0xecd9, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0086) {
    const struct CPU_State initial_cpu = {.pc=0x2780, .a=0xe3, .x=0x69, .y=0x2d, .sp=0xe8, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x2780, .value=0x10}, {.addr=0x2781, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x2782, .a=0xe3, .x=0x69, .y=0x2d, .sp=0xe8, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x2780, .value=0x10}, {.addr=0x2781, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x2780, .value=0x10, .type=IO_READ},
        {.addr=0x2781, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0087) {
    const struct CPU_State initial_cpu = {.pc=0x379a, .a=0xd2, .x=0x26, .y=0x50, .sp=0x8d, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x379a, .value=0x10}, {.addr=0x379b, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x379c, .a=0xd2, .x=0x26, .y=0x50, .sp=0x8d, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x379a, .value=0x10}, {.addr=0x379b, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x379a, .value=0x10, .type=IO_READ},
        {.addr=0x379b, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0088) {
    const struct CPU_State initial_cpu = {.pc=0x0813, .a=0x24, .x=0xd0, .y=0x33, .sp=0xe4, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0813, .value=0x10}, {.addr=0x0814, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x07b2, .a=0x24, .x=0xd0, .y=0x33, .sp=0xe4, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0813, .value=0x10}, {.addr=0x0814, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x0813, .value=0x10, .type=IO_READ},
        {.addr=0x0814, .value=0x9d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0089) {
    const struct CPU_State initial_cpu = {.pc=0xf047, .a=0x64, .x=0x77, .y=0x92, .sp=0xe4, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xf047, .value=0x10}, {.addr=0xf048, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xf09e, .a=0x64, .x=0x77, .y=0x92, .sp=0xe4, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xf047, .value=0x10}, {.addr=0xf048, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xf047, .value=0x10, .type=IO_READ},
        {.addr=0xf048, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_008A) {
    const struct CPU_State initial_cpu = {.pc=0x8c20, .a=0x66, .x=0x1c, .y=0xf2, .sp=0x8e, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x8c20, .value=0x10}, {.addr=0x8c21, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x8c22, .a=0x66, .x=0x1c, .y=0xf2, .sp=0x8e, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x8c20, .value=0x10}, {.addr=0x8c21, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x8c20, .value=0x10, .type=IO_READ},
        {.addr=0x8c21, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_008B) {
    const struct CPU_State initial_cpu = {.pc=0x07a1, .a=0x95, .x=0xe0, .y=0xec, .sp=0x22, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x07a1, .value=0x10}, {.addr=0x07a2, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x07a0, .a=0x95, .x=0xe0, .y=0xec, .sp=0x22, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x07a1, .value=0x10}, {.addr=0x07a2, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x07a1, .value=0x10, .type=IO_READ},
        {.addr=0x07a2, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_008C) {
    const struct CPU_State initial_cpu = {.pc=0x0a4b, .a=0x07, .x=0xeb, .y=0x1b, .sp=0xc5, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0a4b, .value=0x10}, {.addr=0x0a4c, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x0a49, .a=0x07, .x=0xeb, .y=0x1b, .sp=0xc5, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0a4b, .value=0x10}, {.addr=0x0a4c, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x0a4b, .value=0x10, .type=IO_READ},
        {.addr=0x0a4c, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_008D) {
    const struct CPU_State initial_cpu = {.pc=0xb71f, .a=0x3b, .x=0xf8, .y=0x7d, .sp=0xf2, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xb71f, .value=0x10}, {.addr=0xb720, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xb721, .a=0x3b, .x=0xf8, .y=0x7d, .sp=0xf2, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xb71f, .value=0x10}, {.addr=0xb720, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xb71f, .value=0x10, .type=IO_READ},
        {.addr=0xb720, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_008E) {
    const struct CPU_State initial_cpu = {.pc=0xc147, .a=0x0e, .x=0x50, .y=0x0d, .sp=0x75, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xc147, .value=0x10}, {.addr=0xc148, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xc19b, .a=0x0e, .x=0x50, .y=0x0d, .sp=0x75, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xc147, .value=0x10}, {.addr=0xc148, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xc147, .value=0x10, .type=IO_READ},
        {.addr=0xc148, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_008F) {
    const struct CPU_State initial_cpu = {.pc=0x7579, .a=0x77, .x=0x8f, .y=0x45, .sp=0x69, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x7579, .value=0x10}, {.addr=0x757a, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x757b, .a=0x77, .x=0x8f, .y=0x45, .sp=0x69, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x7579, .value=0x10}, {.addr=0x757a, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x7579, .value=0x10, .type=IO_READ},
        {.addr=0x757a, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0090) {
    const struct CPU_State initial_cpu = {.pc=0x4e87, .a=0x48, .x=0x7c, .y=0xa0, .sp=0x49, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x4e87, .value=0x10}, {.addr=0x4e88, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x4e89, .a=0x48, .x=0x7c, .y=0xa0, .sp=0x49, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x4e87, .value=0x10}, {.addr=0x4e88, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x4e87, .value=0x10, .type=IO_READ},
        {.addr=0x4e88, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0091) {
    const struct CPU_State initial_cpu = {.pc=0x76f5, .a=0x34, .x=0x7c, .y=0xac, .sp=0x35, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x76f5, .value=0x10}, {.addr=0x76f6, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x76f7, .a=0x34, .x=0x7c, .y=0xac, .sp=0x35, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x76f5, .value=0x10}, {.addr=0x76f6, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x76f5, .value=0x10, .type=IO_READ},
        {.addr=0x76f6, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0092) {
    const struct CPU_State initial_cpu = {.pc=0x30bb, .a=0xa2, .x=0x60, .y=0x24, .sp=0x44, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x30bb, .value=0x10}, {.addr=0x30bc, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x30bd, .a=0xa2, .x=0x60, .y=0x24, .sp=0x44, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x30bb, .value=0x10}, {.addr=0x30bc, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x30bb, .value=0x10, .type=IO_READ},
        {.addr=0x30bc, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0093) {
    const struct CPU_State initial_cpu = {.pc=0x3718, .a=0xeb, .x=0x5f, .y=0xa5, .sp=0x97, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x3718, .value=0x10}, {.addr=0x3719, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x371a, .a=0xeb, .x=0x5f, .y=0xa5, .sp=0x97, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x3718, .value=0x10}, {.addr=0x3719, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x3718, .value=0x10, .type=IO_READ},
        {.addr=0x3719, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0094) {
    const struct CPU_State initial_cpu = {.pc=0xb18e, .a=0xd2, .x=0x5a, .y=0xbb, .sp=0xf0, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xb18e, .value=0x10}, {.addr=0xb18f, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0xb190, .a=0xd2, .x=0x5a, .y=0xbb, .sp=0xf0, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0xb18e, .value=0x10}, {.addr=0xb18f, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0xb18e, .value=0x10, .type=IO_READ},
        {.addr=0xb18f, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0095) {
    const struct CPU_State initial_cpu = {.pc=0x7625, .a=0xf0, .x=0x2f, .y=0xd8, .sp=0x77, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x7625, .value=0x10}, {.addr=0x7626, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x75ca, .a=0xf0, .x=0x2f, .y=0xd8, .sp=0x77, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x7625, .value=0x10}, {.addr=0x7626, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x7625, .value=0x10, .type=IO_READ},
        {.addr=0x7626, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0096) {
    const struct CPU_State initial_cpu = {.pc=0x2ba8, .a=0x5e, .x=0xee, .y=0xfb, .sp=0xee, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x2ba8, .value=0x10}, {.addr=0x2ba9, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x2baa, .a=0x5e, .x=0xee, .y=0xfb, .sp=0xee, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x2ba8, .value=0x10}, {.addr=0x2ba9, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x2ba8, .value=0x10, .type=IO_READ},
        {.addr=0x2ba9, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0097) {
    const struct CPU_State initial_cpu = {.pc=0xaef4, .a=0x93, .x=0xb1, .y=0x7b, .sp=0x9f, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xaef4, .value=0x10}, {.addr=0xaef5, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0xaef6, .a=0x93, .x=0xb1, .y=0x7b, .sp=0x9f, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0xaef4, .value=0x10}, {.addr=0xaef5, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0xaef4, .value=0x10, .type=IO_READ},
        {.addr=0xaef5, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0098) {
    const struct CPU_State initial_cpu = {.pc=0xdd34, .a=0x28, .x=0xdf, .y=0xa1, .sp=0x12, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0xdd34, .value=0x10}, {.addr=0xdd35, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xdd3e, .a=0x28, .x=0xdf, .y=0xa1, .sp=0x12, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0xdd34, .value=0x10}, {.addr=0xdd35, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xdd34, .value=0x10, .type=IO_READ},
        {.addr=0xdd35, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0099) {
    const struct CPU_State initial_cpu = {.pc=0xd591, .a=0xfe, .x=0x4e, .y=0x4d, .sp=0x83, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xd591, .value=0x10}, {.addr=0xd592, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xd593, .a=0xfe, .x=0x4e, .y=0x4d, .sp=0x83, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xd591, .value=0x10}, {.addr=0xd592, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xd591, .value=0x10, .type=IO_READ},
        {.addr=0xd592, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_009A) {
    const struct CPU_State initial_cpu = {.pc=0xaab8, .a=0x1b, .x=0xc7, .y=0x78, .sp=0x15, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xaab8, .value=0x10}, {.addr=0xaab9, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xaaba, .a=0x1b, .x=0xc7, .y=0x78, .sp=0x15, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xaab8, .value=0x10}, {.addr=0xaab9, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xaab8, .value=0x10, .type=IO_READ},
        {.addr=0xaab9, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_009B) {
    const struct CPU_State initial_cpu = {.pc=0x6fdd, .a=0x8e, .x=0xe6, .y=0x28, .sp=0x52, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x6fdd, .value=0x10}, {.addr=0x6fde, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x6ff3, .a=0x8e, .x=0xe6, .y=0x28, .sp=0x52, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x6fdd, .value=0x10}, {.addr=0x6fde, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x6fdd, .value=0x10, .type=IO_READ},
        {.addr=0x6fde, .value=0x14, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_009C) {
    const struct CPU_State initial_cpu = {.pc=0x28d2, .a=0xbe, .x=0xc2, .y=0xd5, .sp=0x77, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x28d2, .value=0x10}, {.addr=0x28d3, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x293f, .a=0xbe, .x=0xc2, .y=0xd5, .sp=0x77, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x28d2, .value=0x10}, {.addr=0x28d3, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x28d2, .value=0x10, .type=IO_READ},
        {.addr=0x28d3, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_009D) {
    const struct CPU_State initial_cpu = {.pc=0xa38d, .a=0xf3, .x=0x68, .y=0xa1, .sp=0xa2, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xa38d, .value=0x10}, {.addr=0xa38e, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xa38f, .a=0xf3, .x=0x68, .y=0xa1, .sp=0xa2, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xa38d, .value=0x10}, {.addr=0xa38e, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xa38d, .value=0x10, .type=IO_READ},
        {.addr=0xa38e, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_009E) {
    const struct CPU_State initial_cpu = {.pc=0xf6df, .a=0x2a, .x=0x99, .y=0x8d, .sp=0x70, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xf6df, .value=0x10}, {.addr=0xf6e0, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xf6e1, .a=0x2a, .x=0x99, .y=0x8d, .sp=0x70, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xf6df, .value=0x10}, {.addr=0xf6e0, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xf6df, .value=0x10, .type=IO_READ},
        {.addr=0xf6e0, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_009F) {
    const struct CPU_State initial_cpu = {.pc=0x8d48, .a=0xfa, .x=0xd7, .y=0x61, .sp=0x8e, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x8d48, .value=0x10}, {.addr=0x8d49, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x8cf3, .a=0xfa, .x=0xd7, .y=0x61, .sp=0x8e, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x8d48, .value=0x10}, {.addr=0x8d49, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x8d48, .value=0x10, .type=IO_READ},
        {.addr=0x8d49, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x4a94, .a=0x02, .x=0xcf, .y=0x99, .sp=0x6d, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x4a94, .value=0x10}, {.addr=0x4a95, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x4a96, .a=0x02, .x=0xcf, .y=0x99, .sp=0x6d, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x4a94, .value=0x10}, {.addr=0x4a95, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x4a94, .value=0x10, .type=IO_READ},
        {.addr=0x4a95, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x8bd9, .a=0x2d, .x=0x2d, .y=0x77, .sp=0xf6, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x8bd9, .value=0x10}, {.addr=0x8bda, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x8c0d, .a=0x2d, .x=0x2d, .y=0x77, .sp=0xf6, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x8bd9, .value=0x10}, {.addr=0x8bda, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x8bd9, .value=0x10, .type=IO_READ},
        {.addr=0x8bda, .value=0x32, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00A2) {
    const struct CPU_State initial_cpu = {.pc=0xcc09, .a=0xf0, .x=0xe8, .y=0xff, .sp=0x68, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xcc09, .value=0x10}, {.addr=0xcc0a, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xcc65, .a=0xf0, .x=0xe8, .y=0xff, .sp=0x68, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xcc09, .value=0x10}, {.addr=0xcc0a, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xcc09, .value=0x10, .type=IO_READ},
        {.addr=0xcc0a, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x3db7, .a=0x62, .x=0x2d, .y=0x96, .sp=0xc4, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x3db7, .value=0x10}, {.addr=0x3db8, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x3dda, .a=0x62, .x=0x2d, .y=0x96, .sp=0xc4, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x3db7, .value=0x10}, {.addr=0x3db8, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x3db7, .value=0x10, .type=IO_READ},
        {.addr=0x3db8, .value=0x21, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xd6b3, .a=0xf6, .x=0xed, .y=0x60, .sp=0x84, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xd6b3, .value=0x10}, {.addr=0xd6b4, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xd6b5, .a=0xf6, .x=0xed, .y=0x60, .sp=0x84, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0xd6b3, .value=0x10}, {.addr=0xd6b4, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xd6b3, .value=0x10, .type=IO_READ},
        {.addr=0xd6b4, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x2094, .a=0x6e, .x=0xd9, .y=0xf7, .sp=0x36, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x2094, .value=0x10}, {.addr=0x2095, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x20a2, .a=0x6e, .x=0xd9, .y=0xf7, .sp=0x36, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x2094, .value=0x10}, {.addr=0x2095, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x2094, .value=0x10, .type=IO_READ},
        {.addr=0x2095, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xefaf, .a=0xda, .x=0xd9, .y=0x82, .sp=0x11, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xefaf, .value=0x10}, {.addr=0xefb0, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xefb1, .a=0xda, .x=0xd9, .y=0x82, .sp=0x11, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xefaf, .value=0x10}, {.addr=0xefb0, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xefaf, .value=0x10, .type=IO_READ},
        {.addr=0xefb0, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x68a5, .a=0xce, .x=0xc3, .y=0x1b, .sp=0x98, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x68a5, .value=0x10}, {.addr=0x68a6, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x68d7, .a=0xce, .x=0xc3, .y=0x1b, .sp=0x98, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x68a5, .value=0x10}, {.addr=0x68a6, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x68a5, .value=0x10, .type=IO_READ},
        {.addr=0x68a6, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00A8) {
    const struct CPU_State initial_cpu = {.pc=0xddf9, .a=0x09, .x=0xd4, .y=0x81, .sp=0x09, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xddf9, .value=0x10}, {.addr=0xddfa, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xdd7d, .a=0x09, .x=0xd4, .y=0x81, .sp=0x09, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xddf9, .value=0x10}, {.addr=0xddfa, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xddf9, .value=0x10, .type=IO_READ},
        {.addr=0xddfa, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x0a57, .a=0x4d, .x=0xab, .y=0xdc, .sp=0x76, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0a57, .value=0x10}, {.addr=0x0a58, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x0a59, .a=0x4d, .x=0xab, .y=0xdc, .sp=0x76, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x0a57, .value=0x10}, {.addr=0x0a58, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x0a57, .value=0x10, .type=IO_READ},
        {.addr=0x0a58, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x118a, .a=0x33, .x=0xeb, .y=0xcf, .sp=0xb9, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x118a, .value=0x10}, {.addr=0x118b, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0x118c, .a=0x33, .x=0xeb, .y=0xcf, .sp=0xb9, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x118a, .value=0x10}, {.addr=0x118b, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0x118a, .value=0x10, .type=IO_READ},
        {.addr=0x118b, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x9c88, .a=0xfb, .x=0x46, .y=0xdb, .sp=0x15, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x9c88, .value=0x10}, {.addr=0x9c89, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x9c92, .a=0xfb, .x=0x46, .y=0xdb, .sp=0x15, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x9c88, .value=0x10}, {.addr=0x9c89, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x9c88, .value=0x10, .type=IO_READ},
        {.addr=0x9c89, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xe9a3, .a=0x78, .x=0xa0, .y=0xcf, .sp=0x17, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xe9a3, .value=0x10}, {.addr=0xe9a4, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xe9a5, .a=0x78, .x=0xa0, .y=0xcf, .sp=0x17, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xe9a3, .value=0x10}, {.addr=0xe9a4, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xe9a3, .value=0x10, .type=IO_READ},
        {.addr=0xe9a4, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x9c9e, .a=0x1f, .x=0x4d, .y=0x5a, .sp=0x1e, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x9c9e, .value=0x10}, {.addr=0x9c9f, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x9cb6, .a=0x1f, .x=0x4d, .y=0x5a, .sp=0x1e, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x9c9e, .value=0x10}, {.addr=0x9c9f, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x9c9e, .value=0x10, .type=IO_READ},
        {.addr=0x9c9f, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xc08a, .a=0x21, .x=0x3d, .y=0xf9, .sp=0x76, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xc08a, .value=0x10}, {.addr=0xc08b, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xc08c, .a=0x21, .x=0x3d, .y=0xf9, .sp=0x76, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0xc08a, .value=0x10}, {.addr=0xc08b, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xc08a, .value=0x10, .type=IO_READ},
        {.addr=0xc08b, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xd9b5, .a=0x8e, .x=0x66, .y=0xdd, .sp=0x78, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xd9b5, .value=0x10}, {.addr=0xd9b6, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xda0d, .a=0x8e, .x=0x66, .y=0xdd, .sp=0x78, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0xd9b5, .value=0x10}, {.addr=0xd9b6, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xd9b5, .value=0x10, .type=IO_READ},
        {.addr=0xd9b6, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x35da, .a=0xd3, .x=0x00, .y=0x23, .sp=0xb7, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x35da, .value=0x10}, {.addr=0x35db, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x35dc, .a=0xd3, .x=0x00, .y=0x23, .sp=0xb7, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x35da, .value=0x10}, {.addr=0x35db, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x35da, .value=0x10, .type=IO_READ},
        {.addr=0x35db, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x0551, .a=0xbf, .x=0x51, .y=0xd2, .sp=0xfe, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0551, .value=0x10}, {.addr=0x0552, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x0553, .a=0xbf, .x=0x51, .y=0xd2, .sp=0xfe, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0551, .value=0x10}, {.addr=0x0552, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x0551, .value=0x10, .type=IO_READ},
        {.addr=0x0552, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xfb51, .a=0xf7, .x=0x9e, .y=0x23, .sp=0x46, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xfb51, .value=0x10}, {.addr=0xfb52, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xfafd, .a=0xf7, .x=0x9e, .y=0x23, .sp=0x46, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xfb51, .value=0x10}, {.addr=0xfb52, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xfb51, .value=0x10, .type=IO_READ},
        {.addr=0xfb52, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xd21c, .a=0x91, .x=0x46, .y=0xbe, .sp=0x3e, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xd21c, .value=0x10}, {.addr=0xd21d, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0xd252, .a=0x91, .x=0x46, .y=0xbe, .sp=0x3e, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xd21c, .value=0x10}, {.addr=0xd21d, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0xd21c, .value=0x10, .type=IO_READ},
        {.addr=0xd21d, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00B4) {
    const struct CPU_State initial_cpu = {.pc=0x88fd, .a=0x9b, .x=0x09, .y=0x60, .sp=0x43, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x88fd, .value=0x10}, {.addr=0x88fe, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x88ff, .a=0x9b, .x=0x09, .y=0x60, .sp=0x43, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x88fd, .value=0x10}, {.addr=0x88fe, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x88fd, .value=0x10, .type=IO_READ},
        {.addr=0x88fe, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x981e, .a=0xf8, .x=0xc1, .y=0xd5, .sp=0xab, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x981e, .value=0x10}, {.addr=0x981f, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x9819, .a=0xf8, .x=0xc1, .y=0xd5, .sp=0xab, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x981e, .value=0x10}, {.addr=0x981f, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x981e, .value=0x10, .type=IO_READ},
        {.addr=0x981f, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x34c1, .a=0x49, .x=0x29, .y=0x34, .sp=0x2d, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x34c1, .value=0x10}, {.addr=0x34c2, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x3535, .a=0x49, .x=0x29, .y=0x34, .sp=0x2d, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x34c1, .value=0x10}, {.addr=0x34c2, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x34c1, .value=0x10, .type=IO_READ},
        {.addr=0x34c2, .value=0x72, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00B7) {
    const struct CPU_State initial_cpu = {.pc=0x6fae, .a=0xae, .x=0x28, .y=0xc7, .sp=0x9a, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x6fae, .value=0x10}, {.addr=0x6faf, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6f8d, .a=0xae, .x=0x28, .y=0xc7, .sp=0x9a, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x6fae, .value=0x10}, {.addr=0x6faf, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6fae, .value=0x10, .type=IO_READ},
        {.addr=0x6faf, .value=0xdd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xff81, .a=0xfc, .x=0x11, .y=0x2b, .sp=0xb9, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xff81, .value=0x10}, {.addr=0xff82, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xff34, .a=0xfc, .x=0x11, .y=0x2b, .sp=0xb9, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xff81, .value=0x10}, {.addr=0xff82, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xff81, .value=0x10, .type=IO_READ},
        {.addr=0xff82, .value=0xb1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xf789, .a=0xc3, .x=0x3b, .y=0x11, .sp=0x6b, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xf789, .value=0x10}, {.addr=0xf78a, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xf78b, .a=0xc3, .x=0x3b, .y=0x11, .sp=0x6b, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xf789, .value=0x10}, {.addr=0xf78a, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xf789, .value=0x10, .type=IO_READ},
        {.addr=0xf78a, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x64fe, .a=0x99, .x=0x16, .y=0x79, .sp=0x3d, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x64fe, .value=0x10}, {.addr=0x64ff, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x6492, .a=0x99, .x=0x16, .y=0x79, .sp=0x3d, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x64fe, .value=0x10}, {.addr=0x64ff, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x64fe, .value=0x10, .type=IO_READ},
        {.addr=0x64ff, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x5cd6, .a=0xa1, .x=0xdc, .y=0x6d, .sp=0x51, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x5cd6, .value=0x10}, {.addr=0x5cd7, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x5ca2, .a=0xa1, .x=0xdc, .y=0x6d, .sp=0x51, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x5cd6, .value=0x10}, {.addr=0x5cd7, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x5cd6, .value=0x10, .type=IO_READ},
        {.addr=0x5cd7, .value=0xca, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x012f, .a=0xe6, .x=0x93, .y=0xa0, .sp=0xb1, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x10}, {.addr=0x0130, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x00fc, .a=0xe6, .x=0x93, .y=0xa0, .sp=0xb1, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x10}, {.addr=0x0130, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x012f, .value=0x10, .type=IO_READ},
        {.addr=0x0130, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x06ce, .a=0x46, .x=0x6d, .y=0xe4, .sp=0xf7, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x06ce, .value=0x10}, {.addr=0x06cf, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x06d0, .a=0x46, .x=0x6d, .y=0xe4, .sp=0xf7, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x06ce, .value=0x10}, {.addr=0x06cf, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x06ce, .value=0x10, .type=IO_READ},
        {.addr=0x06cf, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xeda6, .a=0x94, .x=0xc8, .y=0x1f, .sp=0x1c, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xeda6, .value=0x10}, {.addr=0xeda7, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xed51, .a=0x94, .x=0xc8, .y=0x1f, .sp=0x1c, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xeda6, .value=0x10}, {.addr=0xeda7, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xeda6, .value=0x10, .type=IO_READ},
        {.addr=0xeda7, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00BF) {
    const struct CPU_State initial_cpu = {.pc=0xde37, .a=0xb0, .x=0xe3, .y=0xa3, .sp=0xf5, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xde37, .value=0x10}, {.addr=0xde38, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0xddda, .a=0xb0, .x=0xe3, .y=0xa3, .sp=0xf5, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xde37, .value=0x10}, {.addr=0xde38, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0xde37, .value=0x10, .type=IO_READ},
        {.addr=0xde38, .value=0xa1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x4842, .a=0x81, .x=0x81, .y=0x91, .sp=0x99, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x4842, .value=0x10}, {.addr=0x4843, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x4844, .a=0x81, .x=0x81, .y=0x91, .sp=0x99, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x4842, .value=0x10}, {.addr=0x4843, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x4842, .value=0x10, .type=IO_READ},
        {.addr=0x4843, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x6b19, .a=0x58, .x=0x8a, .y=0x78, .sp=0xee, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x6b19, .value=0x10}, {.addr=0x6b1a, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x6af3, .a=0x58, .x=0x8a, .y=0x78, .sp=0xee, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x6b19, .value=0x10}, {.addr=0x6b1a, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x6b19, .value=0x10, .type=IO_READ},
        {.addr=0x6b1a, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00C2) {
    const struct CPU_State initial_cpu = {.pc=0xf2c3, .a=0x27, .x=0x85, .y=0xef, .sp=0x52, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xf2c3, .value=0x10}, {.addr=0xf2c4, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xf2a1, .a=0x27, .x=0x85, .y=0xef, .sp=0x52, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xf2c3, .value=0x10}, {.addr=0xf2c4, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xf2c3, .value=0x10, .type=IO_READ},
        {.addr=0xf2c4, .value=0xdc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x0064, .a=0xcf, .x=0x77, .y=0x7c, .sp=0x49, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0064, .value=0x10}, {.addr=0x0065, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x000c, .a=0xcf, .x=0x77, .y=0x7c, .sp=0x49, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x0064, .value=0x10}, {.addr=0x0065, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x0064, .value=0x10, .type=IO_READ},
        {.addr=0x0065, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x289a, .a=0x06, .x=0x2f, .y=0x08, .sp=0x77, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x289a, .value=0x10}, {.addr=0x289b, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x289c, .a=0x06, .x=0x2f, .y=0x08, .sp=0x77, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x289a, .value=0x10}, {.addr=0x289b, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x289a, .value=0x10, .type=IO_READ},
        {.addr=0x289b, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x5bc4, .a=0x44, .x=0x2c, .y=0xac, .sp=0xea, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x5bc4, .value=0x10}, {.addr=0x5bc5, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x5bc6, .a=0x44, .x=0x2c, .y=0xac, .sp=0xea, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x5bc4, .value=0x10}, {.addr=0x5bc5, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x5bc4, .value=0x10, .type=IO_READ},
        {.addr=0x5bc5, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x03f9, .a=0x95, .x=0xad, .y=0xe5, .sp=0xde, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x03f9, .value=0x10}, {.addr=0x03fa, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x03fb, .a=0x95, .x=0xad, .y=0xe5, .sp=0xde, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x03f9, .value=0x10}, {.addr=0x03fa, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x03f9, .value=0x10, .type=IO_READ},
        {.addr=0x03fa, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xb30c, .a=0xe2, .x=0x0a, .y=0x19, .sp=0x18, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xb30c, .value=0x10}, {.addr=0xb30d, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb2cd, .a=0xe2, .x=0x0a, .y=0x19, .sp=0x18, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xb30c, .value=0x10}, {.addr=0xb30d, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb30c, .value=0x10, .type=IO_READ},
        {.addr=0xb30d, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x9daf, .a=0xa0, .x=0x4a, .y=0xd9, .sp=0x34, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x9daf, .value=0x10}, {.addr=0x9db0, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x9d5d, .a=0xa0, .x=0x4a, .y=0xd9, .sp=0x34, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9daf, .value=0x10}, {.addr=0x9db0, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x9daf, .value=0x10, .type=IO_READ},
        {.addr=0x9db0, .value=0xac, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x4e0a, .a=0xc7, .x=0xc0, .y=0x22, .sp=0x3b, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x4e0a, .value=0x10}, {.addr=0x4e0b, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x4e0c, .a=0xc7, .x=0xc0, .y=0x22, .sp=0x3b, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x4e0a, .value=0x10}, {.addr=0x4e0b, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x4e0a, .value=0x10, .type=IO_READ},
        {.addr=0x4e0b, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xa671, .a=0x5f, .x=0x09, .y=0x5c, .sp=0x6f, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xa671, .value=0x10}, {.addr=0xa672, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xa673, .a=0x5f, .x=0x09, .y=0x5c, .sp=0x6f, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xa671, .value=0x10}, {.addr=0xa672, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xa671, .value=0x10, .type=IO_READ},
        {.addr=0xa672, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xfefd, .a=0xcd, .x=0x4e, .y=0xdf, .sp=0xa9, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xfefd, .value=0x10}, {.addr=0xfefe, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xfeff, .a=0xcd, .x=0x4e, .y=0xdf, .sp=0xa9, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xfefd, .value=0x10}, {.addr=0xfefe, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xfefd, .value=0x10, .type=IO_READ},
        {.addr=0xfefe, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x44b8, .a=0x61, .x=0xae, .y=0x57, .sp=0xfc, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x44b8, .value=0x10}, {.addr=0x44b9, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x44c0, .a=0x61, .x=0xae, .y=0x57, .sp=0xfc, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x44b8, .value=0x10}, {.addr=0x44b9, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x44b8, .value=0x10, .type=IO_READ},
        {.addr=0x44b9, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x49db, .a=0x0e, .x=0xd9, .y=0xfa, .sp=0x45, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x49db, .value=0x10}, {.addr=0x49dc, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4a3a, .a=0x0e, .x=0xd9, .y=0xfa, .sp=0x45, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x49db, .value=0x10}, {.addr=0x49dc, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x49db, .value=0x10, .type=IO_READ},
        {.addr=0x49dc, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x71a3, .a=0x99, .x=0xf4, .y=0xe9, .sp=0x9c, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x71a3, .value=0x10}, {.addr=0x71a4, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x71a5, .a=0x99, .x=0xf4, .y=0xe9, .sp=0x9c, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x71a3, .value=0x10}, {.addr=0x71a4, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x71a3, .value=0x10, .type=IO_READ},
        {.addr=0x71a4, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x8bd3, .a=0xc2, .x=0x12, .y=0x9e, .sp=0xa1, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x8bd3, .value=0x10}, {.addr=0x8bd4, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x8bd5, .a=0xc2, .x=0x12, .y=0x9e, .sp=0xa1, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x8bd3, .value=0x10}, {.addr=0x8bd4, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x8bd3, .value=0x10, .type=IO_READ},
        {.addr=0x8bd4, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x7957, .a=0x41, .x=0x2b, .y=0x5e, .sp=0xeb, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x7957, .value=0x10}, {.addr=0x7958, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x7959, .a=0x41, .x=0x2b, .y=0x5e, .sp=0xeb, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x7957, .value=0x10}, {.addr=0x7958, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x7957, .value=0x10, .type=IO_READ},
        {.addr=0x7958, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x9799, .a=0x33, .x=0x7a, .y=0xe6, .sp=0xa7, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x9799, .value=0x10}, {.addr=0x979a, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x97a2, .a=0x33, .x=0x7a, .y=0xe6, .sp=0xa7, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x9799, .value=0x10}, {.addr=0x979a, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x9799, .value=0x10, .type=IO_READ},
        {.addr=0x979a, .value=0x07, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x5b05, .a=0x60, .x=0x06, .y=0xf9, .sp=0x6e, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x5b05, .value=0x10}, {.addr=0x5b06, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x5b07, .a=0x60, .x=0x06, .y=0xf9, .sp=0x6e, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x5b05, .value=0x10}, {.addr=0x5b06, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x5b05, .value=0x10, .type=IO_READ},
        {.addr=0x5b06, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x2282, .a=0x20, .x=0x8c, .y=0x01, .sp=0x02, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x2282, .value=0x10}, {.addr=0x2283, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x2284, .a=0x20, .x=0x8c, .y=0x01, .sp=0x02, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x2282, .value=0x10}, {.addr=0x2283, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x2282, .value=0x10, .type=IO_READ},
        {.addr=0x2283, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x71f9, .a=0xb2, .x=0xe5, .y=0x39, .sp=0x24, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x71f9, .value=0x10}, {.addr=0x71fa, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x7262, .a=0xb2, .x=0xe5, .y=0x39, .sp=0x24, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x71f9, .value=0x10}, {.addr=0x71fa, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x71f9, .value=0x10, .type=IO_READ},
        {.addr=0x71fa, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xed2a, .a=0x87, .x=0x75, .y=0x24, .sp=0x91, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xed2a, .value=0x10}, {.addr=0xed2b, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xed2c, .a=0x87, .x=0x75, .y=0x24, .sp=0x91, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xed2a, .value=0x10}, {.addr=0xed2b, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xed2a, .value=0x10, .type=IO_READ},
        {.addr=0xed2b, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xb9e7, .a=0x2c, .x=0xb4, .y=0x18, .sp=0x95, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xb9e7, .value=0x10}, {.addr=0xb9e8, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xb9ef, .a=0x2c, .x=0xb4, .y=0x18, .sp=0x95, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xb9e7, .value=0x10}, {.addr=0xb9e8, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xb9e7, .value=0x10, .type=IO_READ},
        {.addr=0xb9e8, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00D7) {
    const struct CPU_State initial_cpu = {.pc=0xa277, .a=0x53, .x=0xfc, .y=0xbb, .sp=0x58, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xa277, .value=0x10}, {.addr=0xa278, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xa279, .a=0x53, .x=0xfc, .y=0xbb, .sp=0x58, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0xa277, .value=0x10}, {.addr=0xa278, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xa277, .value=0x10, .type=IO_READ},
        {.addr=0xa278, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xb619, .a=0x6b, .x=0x56, .y=0xeb, .sp=0x48, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xb619, .value=0x10}, {.addr=0xb61a, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xb61b, .a=0x6b, .x=0x56, .y=0xeb, .sp=0x48, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xb619, .value=0x10}, {.addr=0xb61a, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xb619, .value=0x10, .type=IO_READ},
        {.addr=0xb61a, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x347f, .a=0xbd, .x=0x93, .y=0xab, .sp=0x2b, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x347f, .value=0x10}, {.addr=0x3480, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3447, .a=0xbd, .x=0x93, .y=0xab, .sp=0x2b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x347f, .value=0x10}, {.addr=0x3480, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x347f, .value=0x10, .type=IO_READ},
        {.addr=0x3480, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xfa4b, .a=0x5a, .x=0x96, .y=0x93, .sp=0x18, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xfa4b, .value=0x10}, {.addr=0xfa4c, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xfa50, .a=0x5a, .x=0x96, .y=0x93, .sp=0x18, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xfa4b, .value=0x10}, {.addr=0xfa4c, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xfa4b, .value=0x10, .type=IO_READ},
        {.addr=0xfa4c, .value=0x03, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x2732, .a=0x84, .x=0x2d, .y=0x69, .sp=0xc1, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x2732, .value=0x10}, {.addr=0x2733, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x276c, .a=0x84, .x=0x2d, .y=0x69, .sp=0xc1, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x2732, .value=0x10}, {.addr=0x2733, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x2732, .value=0x10, .type=IO_READ},
        {.addr=0x2733, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xfda0, .a=0x06, .x=0xad, .y=0x20, .sp=0x60, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xfda0, .value=0x10}, {.addr=0xfda1, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xfd32, .a=0x06, .x=0xad, .y=0x20, .sp=0x60, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0xfda0, .value=0x10}, {.addr=0xfda1, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xfda0, .value=0x10, .type=IO_READ},
        {.addr=0xfda1, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x2fa4, .a=0xb0, .x=0x91, .y=0x64, .sp=0x64, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x2fa4, .value=0x10}, {.addr=0x2fa5, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x2fa6, .a=0xb0, .x=0x91, .y=0x64, .sp=0x64, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x2fa4, .value=0x10}, {.addr=0x2fa5, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x2fa4, .value=0x10, .type=IO_READ},
        {.addr=0x2fa5, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x5391, .a=0xe4, .x=0xed, .y=0x98, .sp=0x2f, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x5391, .value=0x10}, {.addr=0x5392, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x535a, .a=0xe4, .x=0xed, .y=0x98, .sp=0x2f, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x5391, .value=0x10}, {.addr=0x5392, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x5391, .value=0x10, .type=IO_READ},
        {.addr=0x5392, .value=0xc7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xf96b, .a=0x1d, .x=0xbb, .y=0x52, .sp=0x29, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xf96b, .value=0x10}, {.addr=0xf96c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xf993, .a=0x1d, .x=0xbb, .y=0x52, .sp=0x29, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xf96b, .value=0x10}, {.addr=0xf96c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xf96b, .value=0x10, .type=IO_READ},
        {.addr=0xf96c, .value=0x26, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x2952, .a=0x76, .x=0xdc, .y=0x1d, .sp=0xb3, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x2952, .value=0x10}, {.addr=0x2953, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x28e2, .a=0x76, .x=0xdc, .y=0x1d, .sp=0xb3, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x2952, .value=0x10}, {.addr=0x2953, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x2952, .value=0x10, .type=IO_READ},
        {.addr=0x2953, .value=0x8e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00E1) {
    const struct CPU_State initial_cpu = {.pc=0xf37d, .a=0x99, .x=0x6b, .y=0x87, .sp=0xea, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xf37d, .value=0x10}, {.addr=0xf37e, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xf323, .a=0x99, .x=0x6b, .y=0x87, .sp=0xea, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xf37d, .value=0x10}, {.addr=0xf37e, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xf37d, .value=0x10, .type=IO_READ},
        {.addr=0xf37e, .value=0xa4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x8359, .a=0xfb, .x=0xc7, .y=0xef, .sp=0xbc, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x8359, .value=0x10}, {.addr=0x835a, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x835b, .a=0xfb, .x=0xc7, .y=0xef, .sp=0xbc, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x8359, .value=0x10}, {.addr=0x835a, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x8359, .value=0x10, .type=IO_READ},
        {.addr=0x835a, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x93b4, .a=0x67, .x=0x86, .y=0x06, .sp=0x74, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x93b4, .value=0x10}, {.addr=0x93b5, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x9343, .a=0x67, .x=0x86, .y=0x06, .sp=0x74, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x93b4, .value=0x10}, {.addr=0x93b5, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x93b4, .value=0x10, .type=IO_READ},
        {.addr=0x93b5, .value=0x8d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00E4) {
    const struct CPU_State initial_cpu = {.pc=0xa115, .a=0x7e, .x=0x26, .y=0xf5, .sp=0x50, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xa115, .value=0x10}, {.addr=0xa116, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0xa187, .a=0x7e, .x=0x26, .y=0xf5, .sp=0x50, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xa115, .value=0x10}, {.addr=0xa116, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0xa115, .value=0x10, .type=IO_READ},
        {.addr=0xa116, .value=0x70, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xe181, .a=0xae, .x=0x83, .y=0xf4, .sp=0x97, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xe181, .value=0x10}, {.addr=0xe182, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xe1e4, .a=0xae, .x=0x83, .y=0xf4, .sp=0x97, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xe181, .value=0x10}, {.addr=0xe182, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xe181, .value=0x10, .type=IO_READ},
        {.addr=0xe182, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x0f9e, .a=0x16, .x=0x1a, .y=0xa0, .sp=0x55, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0f9e, .value=0x10}, {.addr=0x0f9f, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x0fa0, .a=0x16, .x=0x1a, .y=0xa0, .sp=0x55, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0f9e, .value=0x10}, {.addr=0x0f9f, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x0f9e, .value=0x10, .type=IO_READ},
        {.addr=0x0f9f, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xba62, .a=0x13, .x=0x33, .y=0x22, .sp=0xd9, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xba62, .value=0x10}, {.addr=0xba63, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xba64, .a=0x13, .x=0x33, .y=0x22, .sp=0xd9, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xba62, .value=0x10}, {.addr=0xba63, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xba62, .value=0x10, .type=IO_READ},
        {.addr=0xba63, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x24ac, .a=0xfe, .x=0xf4, .y=0x31, .sp=0x16, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x24ac, .value=0x10}, {.addr=0x24ad, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x244b, .a=0xfe, .x=0xf4, .y=0x31, .sp=0x16, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x24ac, .value=0x10}, {.addr=0x24ad, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x24ac, .value=0x10, .type=IO_READ},
        {.addr=0x24ad, .value=0x9d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x9339, .a=0xa4, .x=0x4d, .y=0x07, .sp=0x1e, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x9339, .value=0x10}, {.addr=0x933a, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x92d3, .a=0xa4, .x=0x4d, .y=0x07, .sp=0x1e, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x9339, .value=0x10}, {.addr=0x933a, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x9339, .value=0x10, .type=IO_READ},
        {.addr=0x933a, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xa50a, .a=0x9e, .x=0xd4, .y=0xcf, .sp=0x6e, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xa50a, .value=0x10}, {.addr=0xa50b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xa50c, .a=0x9e, .x=0xd4, .y=0xcf, .sp=0x6e, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xa50a, .value=0x10}, {.addr=0xa50b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xa50a, .value=0x10, .type=IO_READ},
        {.addr=0xa50b, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x565e, .a=0x58, .x=0x2a, .y=0x90, .sp=0x89, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x565e, .value=0x10}, {.addr=0x565f, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x5660, .a=0x58, .x=0x2a, .y=0x90, .sp=0x89, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x565e, .value=0x10}, {.addr=0x565f, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x565e, .value=0x10, .type=IO_READ},
        {.addr=0x565f, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x84b1, .a=0x3d, .x=0x64, .y=0x22, .sp=0x38, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x84b1, .value=0x10}, {.addr=0x84b2, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x84b3, .a=0x3d, .x=0x64, .y=0x22, .sp=0x38, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x84b1, .value=0x10}, {.addr=0x84b2, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x84b1, .value=0x10, .type=IO_READ},
        {.addr=0x84b2, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x328d, .a=0x38, .x=0x1d, .y=0xdd, .sp=0x07, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x328d, .value=0x10}, {.addr=0x328e, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x32ec, .a=0x38, .x=0x1d, .y=0xdd, .sp=0x07, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x328d, .value=0x10}, {.addr=0x328e, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x328d, .value=0x10, .type=IO_READ},
        {.addr=0x328e, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x0a71, .a=0x66, .x=0xd6, .y=0xbe, .sp=0x2f, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0a71, .value=0x10}, {.addr=0x0a72, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x0aa4, .a=0x66, .x=0xd6, .y=0xbe, .sp=0x2f, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0a71, .value=0x10}, {.addr=0x0a72, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x0a71, .value=0x10, .type=IO_READ},
        {.addr=0x0a72, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x0801, .a=0xe8, .x=0x34, .y=0xe5, .sp=0x8b, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0801, .value=0x10}, {.addr=0x0802, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x0803, .a=0xe8, .x=0x34, .y=0xe5, .sp=0x8b, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0801, .value=0x10}, {.addr=0x0802, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x0801, .value=0x10, .type=IO_READ},
        {.addr=0x0802, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xc38e, .a=0x03, .x=0x4e, .y=0x97, .sp=0x27, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xc38e, .value=0x10}, {.addr=0xc38f, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xc3ab, .a=0x03, .x=0x4e, .y=0x97, .sp=0x27, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xc38e, .value=0x10}, {.addr=0xc38f, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xc38e, .value=0x10, .type=IO_READ},
        {.addr=0xc38f, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x9b85, .a=0x99, .x=0x0a, .y=0x1f, .sp=0x3d, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x9b85, .value=0x10}, {.addr=0x9b86, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x9b87, .a=0x99, .x=0x0a, .y=0x1f, .sp=0x3d, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x9b85, .value=0x10}, {.addr=0x9b86, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x9b85, .value=0x10, .type=IO_READ},
        {.addr=0x9b86, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x8d3a, .a=0x56, .x=0x95, .y=0x7a, .sp=0x5f, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x8d3a, .value=0x10}, {.addr=0x8d3b, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x8d23, .a=0x56, .x=0x95, .y=0x7a, .sp=0x5f, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x8d3a, .value=0x10}, {.addr=0x8d3b, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x8d3a, .value=0x10, .type=IO_READ},
        {.addr=0x8d3b, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x07e3, .a=0xb6, .x=0x1f, .y=0x4a, .sp=0x31, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x07e3, .value=0x10}, {.addr=0x07e4, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x07e5, .a=0xb6, .x=0x1f, .y=0x4a, .sp=0x31, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x07e3, .value=0x10}, {.addr=0x07e4, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x07e3, .value=0x10, .type=IO_READ},
        {.addr=0x07e4, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00F4) {
    const struct CPU_State initial_cpu = {.pc=0x2803, .a=0xaa, .x=0x58, .y=0xd1, .sp=0xa1, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x2803, .value=0x10}, {.addr=0x2804, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x27ce, .a=0xaa, .x=0x58, .y=0xd1, .sp=0xa1, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x2803, .value=0x10}, {.addr=0x2804, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x2803, .value=0x10, .type=IO_READ},
        {.addr=0x2804, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xebb4, .a=0xa2, .x=0x79, .y=0x00, .sp=0xe8, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xebb4, .value=0x10}, {.addr=0xebb5, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xebb6, .a=0xa2, .x=0x79, .y=0x00, .sp=0xe8, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xebb4, .value=0x10}, {.addr=0xebb5, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xebb4, .value=0x10, .type=IO_READ},
        {.addr=0xebb5, .value=0x00, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xbe26, .a=0x05, .x=0x1a, .y=0x60, .sp=0x68, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xbe26, .value=0x10}, {.addr=0xbe27, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xbe7f, .a=0x05, .x=0x1a, .y=0x60, .sp=0x68, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xbe26, .value=0x10}, {.addr=0xbe27, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xbe26, .value=0x10, .type=IO_READ},
        {.addr=0xbe27, .value=0x57, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x66f8, .a=0x42, .x=0xf2, .y=0xfa, .sp=0x09, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x66f8, .value=0x10}, {.addr=0x66f9, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x66fa, .a=0x42, .x=0xf2, .y=0xfa, .sp=0x09, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x66f8, .value=0x10}, {.addr=0x66f9, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x66f8, .value=0x10, .type=IO_READ},
        {.addr=0x66f9, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x20a1, .a=0xdd, .x=0x01, .y=0x70, .sp=0x89, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x20a1, .value=0x10}, {.addr=0x20a2, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x20a3, .a=0xdd, .x=0x01, .y=0x70, .sp=0x89, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x20a1, .value=0x10}, {.addr=0x20a2, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x20a1, .value=0x10, .type=IO_READ},
        {.addr=0x20a2, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x3aba, .a=0x10, .x=0x79, .y=0x69, .sp=0xce, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x3aba, .value=0x10}, {.addr=0x3abb, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x3a82, .a=0x10, .x=0x79, .y=0x69, .sp=0xce, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x3aba, .value=0x10}, {.addr=0x3abb, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3aba, .value=0x10, .type=IO_READ},
        {.addr=0x3abb, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00FA) {
    const struct CPU_State initial_cpu = {.pc=0xf80a, .a=0xb0, .x=0xe8, .y=0xed, .sp=0xaa, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xf80a, .value=0x10}, {.addr=0xf80b, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xf80c, .a=0xb0, .x=0xe8, .y=0xed, .sp=0xaa, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xf80a, .value=0x10}, {.addr=0xf80b, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xf80a, .value=0x10, .type=IO_READ},
        {.addr=0xf80b, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xc87a, .a=0xf8, .x=0x0d, .y=0x44, .sp=0xd8, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xc87a, .value=0x10}, {.addr=0xc87b, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xc87c, .a=0xf8, .x=0x0d, .y=0x44, .sp=0xd8, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xc87a, .value=0x10}, {.addr=0xc87b, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xc87a, .value=0x10, .type=IO_READ},
        {.addr=0xc87b, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00FC) {
    const struct CPU_State initial_cpu = {.pc=0xec1d, .a=0xed, .x=0x0d, .y=0x73, .sp=0xcc, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xec1d, .value=0x10}, {.addr=0xec1e, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xebe9, .a=0xed, .x=0x0d, .y=0x73, .sp=0xcc, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xec1d, .value=0x10}, {.addr=0xec1e, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xec1d, .value=0x10, .type=IO_READ},
        {.addr=0xec1e, .value=0xca, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x52da, .a=0x1b, .x=0x62, .y=0xea, .sp=0x9f, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x52da, .value=0x10}, {.addr=0x52db, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x52dc, .a=0x1b, .x=0x62, .y=0xea, .sp=0x9f, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x52da, .value=0x10}, {.addr=0x52db, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x52da, .value=0x10, .type=IO_READ},
        {.addr=0x52db, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x7cca, .a=0xa0, .x=0x3a, .y=0xf3, .sp=0x18, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x7cca, .value=0x10}, {.addr=0x7ccb, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x7ccc, .a=0xa0, .x=0x3a, .y=0xf3, .sp=0x18, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x7cca, .value=0x10}, {.addr=0x7ccb, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x7cca, .value=0x10, .type=IO_READ},
        {.addr=0x7ccb, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_00FF) {
    const struct CPU_State initial_cpu = {.pc=0xdcad, .a=0xe6, .x=0x56, .y=0x3f, .sp=0x64, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xdcad, .value=0x10}, {.addr=0xdcae, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0xdc8a, .a=0xe6, .x=0x56, .y=0x3f, .sp=0x64, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xdcad, .value=0x10}, {.addr=0xdcae, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0xdcad, .value=0x10, .type=IO_READ},
        {.addr=0xdcae, .value=0xdb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0100) {
    const struct CPU_State initial_cpu = {.pc=0x554c, .a=0x79, .x=0x1c, .y=0xc3, .sp=0x6e, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x554c, .value=0x10}, {.addr=0x554d, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x556c, .a=0x79, .x=0x1c, .y=0xc3, .sp=0x6e, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x554c, .value=0x10}, {.addr=0x554d, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x554c, .value=0x10, .type=IO_READ},
        {.addr=0x554d, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0101) {
    const struct CPU_State initial_cpu = {.pc=0x4336, .a=0x07, .x=0xc9, .y=0xeb, .sp=0xec, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x4336, .value=0x10}, {.addr=0x4337, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x4338, .a=0x07, .x=0xc9, .y=0xeb, .sp=0xec, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x4336, .value=0x10}, {.addr=0x4337, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x4336, .value=0x10, .type=IO_READ},
        {.addr=0x4337, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0102) {
    const struct CPU_State initial_cpu = {.pc=0xcadb, .a=0x00, .x=0xc4, .y=0x77, .sp=0xd5, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xcadb, .value=0x10}, {.addr=0xcadc, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xcae2, .a=0x00, .x=0xc4, .y=0x77, .sp=0xd5, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xcadb, .value=0x10}, {.addr=0xcadc, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xcadb, .value=0x10, .type=IO_READ},
        {.addr=0xcadc, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0103) {
    const struct CPU_State initial_cpu = {.pc=0x0301, .a=0xa9, .x=0x07, .y=0x01, .sp=0x5a, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x0301, .value=0x10}, {.addr=0x0302, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x02e5, .a=0xa9, .x=0x07, .y=0x01, .sp=0x5a, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x0301, .value=0x10}, {.addr=0x0302, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x0301, .value=0x10, .type=IO_READ},
        {.addr=0x0302, .value=0xe2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0104) {
    const struct CPU_State initial_cpu = {.pc=0x0820, .a=0x59, .x=0x4e, .y=0xe7, .sp=0x94, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0820, .value=0x10}, {.addr=0x0821, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x0822, .a=0x59, .x=0x4e, .y=0xe7, .sp=0x94, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0820, .value=0x10}, {.addr=0x0821, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x0820, .value=0x10, .type=IO_READ},
        {.addr=0x0821, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0105) {
    const struct CPU_State initial_cpu = {.pc=0x2cae, .a=0xbd, .x=0xae, .y=0x4d, .sp=0x19, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x2cae, .value=0x10}, {.addr=0x2caf, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x2d15, .a=0xbd, .x=0xae, .y=0x4d, .sp=0x19, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x2cae, .value=0x10}, {.addr=0x2caf, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x2cae, .value=0x10, .type=IO_READ},
        {.addr=0x2caf, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0106) {
    const struct CPU_State initial_cpu = {.pc=0x4246, .a=0x2d, .x=0x01, .y=0x5b, .sp=0x28, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x4246, .value=0x10}, {.addr=0x4247, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x4248, .a=0x2d, .x=0x01, .y=0x5b, .sp=0x28, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x4246, .value=0x10}, {.addr=0x4247, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x4246, .value=0x10, .type=IO_READ},
        {.addr=0x4247, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0107) {
    const struct CPU_State initial_cpu = {.pc=0xe14b, .a=0x68, .x=0x7a, .y=0xa5, .sp=0x24, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xe14b, .value=0x10}, {.addr=0xe14c, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xe14d, .a=0x68, .x=0x7a, .y=0xa5, .sp=0x24, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xe14b, .value=0x10}, {.addr=0xe14c, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xe14b, .value=0x10, .type=IO_READ},
        {.addr=0xe14c, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0108) {
    const struct CPU_State initial_cpu = {.pc=0xddde, .a=0x90, .x=0x41, .y=0x65, .sp=0xf2, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xddde, .value=0x10}, {.addr=0xdddf, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xdde0, .a=0x90, .x=0x41, .y=0x65, .sp=0xf2, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xddde, .value=0x10}, {.addr=0xdddf, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xddde, .value=0x10, .type=IO_READ},
        {.addr=0xdddf, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0109) {
    const struct CPU_State initial_cpu = {.pc=0x0783, .a=0x1b, .x=0xce, .y=0x10, .sp=0x70, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x0783, .value=0x10}, {.addr=0x0784, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x0775, .a=0x1b, .x=0xce, .y=0x10, .sp=0x70, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x0783, .value=0x10}, {.addr=0x0784, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x0783, .value=0x10, .type=IO_READ},
        {.addr=0x0784, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_010A) {
    const struct CPU_State initial_cpu = {.pc=0xb9f3, .a=0x63, .x=0x5f, .y=0xe5, .sp=0x04, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xb9f3, .value=0x10}, {.addr=0xb9f4, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xb9f5, .a=0x63, .x=0x5f, .y=0xe5, .sp=0x04, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0xb9f3, .value=0x10}, {.addr=0xb9f4, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xb9f3, .value=0x10, .type=IO_READ},
        {.addr=0xb9f4, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_010B) {
    const struct CPU_State initial_cpu = {.pc=0x46fd, .a=0x72, .x=0xd4, .y=0xb0, .sp=0xcb, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x46fd, .value=0x10}, {.addr=0x46fe, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x46ff, .a=0x72, .x=0xd4, .y=0xb0, .sp=0xcb, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x46fd, .value=0x10}, {.addr=0x46fe, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x46fd, .value=0x10, .type=IO_READ},
        {.addr=0x46fe, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_010C) {
    const struct CPU_State initial_cpu = {.pc=0x382b, .a=0xf3, .x=0xf1, .y=0x3b, .sp=0x52, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x382b, .value=0x10}, {.addr=0x382c, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x382d, .a=0xf3, .x=0xf1, .y=0x3b, .sp=0x52, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x382b, .value=0x10}, {.addr=0x382c, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x382b, .value=0x10, .type=IO_READ},
        {.addr=0x382c, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_010D) {
    const struct CPU_State initial_cpu = {.pc=0x6845, .a=0x73, .x=0x19, .y=0xed, .sp=0xfb, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x6845, .value=0x10}, {.addr=0x6846, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x68bc, .a=0x73, .x=0x19, .y=0xed, .sp=0xfb, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x6845, .value=0x10}, {.addr=0x6846, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x6845, .value=0x10, .type=IO_READ},
        {.addr=0x6846, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_010E) {
    const struct CPU_State initial_cpu = {.pc=0x863d, .a=0xb5, .x=0x9c, .y=0xb7, .sp=0xce, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x863d, .value=0x10}, {.addr=0x863e, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x8638, .a=0xb5, .x=0x9c, .y=0xb7, .sp=0xce, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x863d, .value=0x10}, {.addr=0x863e, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x863d, .value=0x10, .type=IO_READ},
        {.addr=0x863e, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_010F) {
    const struct CPU_State initial_cpu = {.pc=0xe53f, .a=0x84, .x=0x44, .y=0xba, .sp=0x4d, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xe53f, .value=0x10}, {.addr=0xe540, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xe4f5, .a=0x84, .x=0x44, .y=0xba, .sp=0x4d, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0xe53f, .value=0x10}, {.addr=0xe540, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xe53f, .value=0x10, .type=IO_READ},
        {.addr=0xe540, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0110) {
    const struct CPU_State initial_cpu = {.pc=0x2a7d, .a=0xde, .x=0x73, .y=0x3c, .sp=0x4c, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x2a7d, .value=0x10}, {.addr=0x2a7e, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x2a7f, .a=0xde, .x=0x73, .y=0x3c, .sp=0x4c, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x2a7d, .value=0x10}, {.addr=0x2a7e, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x2a7d, .value=0x10, .type=IO_READ},
        {.addr=0x2a7e, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0111) {
    const struct CPU_State initial_cpu = {.pc=0xf743, .a=0xaf, .x=0xa2, .y=0xf1, .sp=0x13, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xf743, .value=0x10}, {.addr=0xf744, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xf6c7, .a=0xaf, .x=0xa2, .y=0xf1, .sp=0x13, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xf743, .value=0x10}, {.addr=0xf744, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xf743, .value=0x10, .type=IO_READ},
        {.addr=0xf744, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0112) {
    const struct CPU_State initial_cpu = {.pc=0x2b76, .a=0x84, .x=0x88, .y=0x2f, .sp=0x1a, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x2b76, .value=0x10}, {.addr=0x2b77, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x2b93, .a=0x84, .x=0x88, .y=0x2f, .sp=0x1a, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x2b76, .value=0x10}, {.addr=0x2b77, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x2b76, .value=0x10, .type=IO_READ},
        {.addr=0x2b77, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0113) {
    const struct CPU_State initial_cpu = {.pc=0xf2a3, .a=0x0a, .x=0x18, .y=0xa7, .sp=0x4a, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xf2a3, .value=0x10}, {.addr=0xf2a4, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0xf2a5, .a=0x0a, .x=0x18, .y=0xa7, .sp=0x4a, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0xf2a3, .value=0x10}, {.addr=0xf2a4, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0xf2a3, .value=0x10, .type=IO_READ},
        {.addr=0xf2a4, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0114) {
    const struct CPU_State initial_cpu = {.pc=0x56e0, .a=0xad, .x=0x02, .y=0x73, .sp=0x58, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x56e0, .value=0x10}, {.addr=0x56e1, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x56e2, .a=0xad, .x=0x02, .y=0x73, .sp=0x58, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x56e0, .value=0x10}, {.addr=0x56e1, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x56e0, .value=0x10, .type=IO_READ},
        {.addr=0x56e1, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0115) {
    const struct CPU_State initial_cpu = {.pc=0xc102, .a=0xba, .x=0xcf, .y=0x2a, .sp=0xf4, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xc102, .value=0x10}, {.addr=0xc103, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc08a, .a=0xba, .x=0xcf, .y=0x2a, .sp=0xf4, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xc102, .value=0x10}, {.addr=0xc103, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc102, .value=0x10, .type=IO_READ},
        {.addr=0xc103, .value=0x86, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0116) {
    const struct CPU_State initial_cpu = {.pc=0x32e0, .a=0x81, .x=0xe3, .y=0x0e, .sp=0x42, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x32e0, .value=0x10}, {.addr=0x32e1, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x32e2, .a=0x81, .x=0xe3, .y=0x0e, .sp=0x42, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x32e0, .value=0x10}, {.addr=0x32e1, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x32e0, .value=0x10, .type=IO_READ},
        {.addr=0x32e1, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0117) {
    const struct CPU_State initial_cpu = {.pc=0xe55b, .a=0xcc, .x=0xac, .y=0xfd, .sp=0xda, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0xe55b, .value=0x10}, {.addr=0xe55c, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xe4e8, .a=0xcc, .x=0xac, .y=0xfd, .sp=0xda, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xe55b, .value=0x10}, {.addr=0xe55c, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xe55b, .value=0x10, .type=IO_READ},
        {.addr=0xe55c, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0118) {
    const struct CPU_State initial_cpu = {.pc=0x0a71, .a=0x6c, .x=0x6b, .y=0x96, .sp=0xed, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0a71, .value=0x10}, {.addr=0x0a72, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x0ae7, .a=0x6c, .x=0x6b, .y=0x96, .sp=0xed, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0a71, .value=0x10}, {.addr=0x0a72, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x0a71, .value=0x10, .type=IO_READ},
        {.addr=0x0a72, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0119) {
    const struct CPU_State initial_cpu = {.pc=0xb31c, .a=0xb0, .x=0x05, .y=0x4c, .sp=0xd4, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xb31c, .value=0x10}, {.addr=0xb31d, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xb310, .a=0xb0, .x=0x05, .y=0x4c, .sp=0xd4, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xb31c, .value=0x10}, {.addr=0xb31d, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xb31c, .value=0x10, .type=IO_READ},
        {.addr=0xb31d, .value=0xf2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_011A) {
    const struct CPU_State initial_cpu = {.pc=0x9b04, .a=0x89, .x=0xee, .y=0x21, .sp=0xe6, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x9b04, .value=0x10}, {.addr=0x9b05, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x9b33, .a=0x89, .x=0xee, .y=0x21, .sp=0xe6, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x9b04, .value=0x10}, {.addr=0x9b05, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x9b04, .value=0x10, .type=IO_READ},
        {.addr=0x9b05, .value=0x2d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_011B) {
    const struct CPU_State initial_cpu = {.pc=0x10f6, .a=0x1d, .x=0xe3, .y=0x49, .sp=0x5c, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x10f6, .value=0x10}, {.addr=0x10f7, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x10f8, .a=0x1d, .x=0xe3, .y=0x49, .sp=0x5c, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x10f6, .value=0x10}, {.addr=0x10f7, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x10f6, .value=0x10, .type=IO_READ},
        {.addr=0x10f7, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_011C) {
    const struct CPU_State initial_cpu = {.pc=0x72f9, .a=0x66, .x=0x0e, .y=0xcd, .sp=0x03, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x72f9, .value=0x10}, {.addr=0x72fa, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x72a4, .a=0x66, .x=0x0e, .y=0xcd, .sp=0x03, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x72f9, .value=0x10}, {.addr=0x72fa, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x72f9, .value=0x10, .type=IO_READ},
        {.addr=0x72fa, .value=0xa9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_011D) {
    const struct CPU_State initial_cpu = {.pc=0x0949, .a=0x26, .x=0x16, .y=0xfc, .sp=0x71, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0949, .value=0x10}, {.addr=0x094a, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x0989, .a=0x26, .x=0x16, .y=0xfc, .sp=0x71, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0949, .value=0x10}, {.addr=0x094a, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x0949, .value=0x10, .type=IO_READ},
        {.addr=0x094a, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_011E) {
    const struct CPU_State initial_cpu = {.pc=0xb323, .a=0xdb, .x=0x9e, .y=0x80, .sp=0x16, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xb323, .value=0x10}, {.addr=0xb324, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xb325, .a=0xdb, .x=0x9e, .y=0x80, .sp=0x16, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0xb323, .value=0x10}, {.addr=0xb324, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xb323, .value=0x10, .type=IO_READ},
        {.addr=0xb324, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_011F) {
    const struct CPU_State initial_cpu = {.pc=0x750d, .a=0x1d, .x=0x20, .y=0xfa, .sp=0x65, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x750d, .value=0x10}, {.addr=0x750e, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x750f, .a=0x1d, .x=0x20, .y=0xfa, .sp=0x65, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x750d, .value=0x10}, {.addr=0x750e, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x750d, .value=0x10, .type=IO_READ},
        {.addr=0x750e, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0120) {
    const struct CPU_State initial_cpu = {.pc=0x4a8f, .a=0x21, .x=0xb6, .y=0x19, .sp=0x84, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x4a8f, .value=0x10}, {.addr=0x4a90, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x4a91, .a=0x21, .x=0xb6, .y=0x19, .sp=0x84, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x4a8f, .value=0x10}, {.addr=0x4a90, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x4a8f, .value=0x10, .type=IO_READ},
        {.addr=0x4a90, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0121) {
    const struct CPU_State initial_cpu = {.pc=0xe44f, .a=0x42, .x=0x96, .y=0x1c, .sp=0x57, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xe44f, .value=0x10}, {.addr=0xe450, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0xe3e0, .a=0x42, .x=0x96, .y=0x1c, .sp=0x57, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xe44f, .value=0x10}, {.addr=0xe450, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0xe44f, .value=0x10, .type=IO_READ},
        {.addr=0xe450, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0122) {
    const struct CPU_State initial_cpu = {.pc=0x8585, .a=0xf6, .x=0x39, .y=0x7a, .sp=0xb0, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x8585, .value=0x10}, {.addr=0x8586, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x854d, .a=0xf6, .x=0x39, .y=0x7a, .sp=0xb0, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x8585, .value=0x10}, {.addr=0x8586, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x8585, .value=0x10, .type=IO_READ},
        {.addr=0x8586, .value=0xc6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0123) {
    const struct CPU_State initial_cpu = {.pc=0xe59c, .a=0xd2, .x=0xc5, .y=0xa2, .sp=0xaa, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xe59c, .value=0x10}, {.addr=0xe59d, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0xe59e, .a=0xd2, .x=0xc5, .y=0xa2, .sp=0xaa, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xe59c, .value=0x10}, {.addr=0xe59d, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0xe59c, .value=0x10, .type=IO_READ},
        {.addr=0xe59d, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0124) {
    const struct CPU_State initial_cpu = {.pc=0x0df7, .a=0x9f, .x=0xff, .y=0xd6, .sp=0x30, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0df7, .value=0x10}, {.addr=0x0df8, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x0df9, .a=0x9f, .x=0xff, .y=0xd6, .sp=0x30, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0df7, .value=0x10}, {.addr=0x0df8, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x0df7, .value=0x10, .type=IO_READ},
        {.addr=0x0df8, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0125) {
    const struct CPU_State initial_cpu = {.pc=0xabca, .a=0x0d, .x=0xe8, .y=0xbf, .sp=0x0b, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xabca, .value=0x10}, {.addr=0xabcb, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xac22, .a=0x0d, .x=0xe8, .y=0xbf, .sp=0x0b, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xabca, .value=0x10}, {.addr=0xabcb, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xabca, .value=0x10, .type=IO_READ},
        {.addr=0xabcb, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0126) {
    const struct CPU_State initial_cpu = {.pc=0x9e8c, .a=0xa3, .x=0x2a, .y=0x77, .sp=0x66, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x9e8c, .value=0x10}, {.addr=0x9e8d, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x9eba, .a=0xa3, .x=0x2a, .y=0x77, .sp=0x66, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x9e8c, .value=0x10}, {.addr=0x9e8d, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x9e8c, .value=0x10, .type=IO_READ},
        {.addr=0x9e8d, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0127) {
    const struct CPU_State initial_cpu = {.pc=0xc1a2, .a=0x24, .x=0x80, .y=0x4d, .sp=0x3d, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xc1a2, .value=0x10}, {.addr=0xc1a3, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xc134, .a=0x24, .x=0x80, .y=0x4d, .sp=0x3d, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0xc1a2, .value=0x10}, {.addr=0xc1a3, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xc1a2, .value=0x10, .type=IO_READ},
        {.addr=0xc1a3, .value=0x90, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0128) {
    const struct CPU_State initial_cpu = {.pc=0x160d, .a=0x26, .x=0x02, .y=0x6f, .sp=0x0e, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x160d, .value=0x10}, {.addr=0x160e, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x15d4, .a=0x26, .x=0x02, .y=0x6f, .sp=0x0e, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x160d, .value=0x10}, {.addr=0x160e, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x160d, .value=0x10, .type=IO_READ},
        {.addr=0x160e, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0129) {
    const struct CPU_State initial_cpu = {.pc=0x79ff, .a=0xc6, .x=0xcb, .y=0x1f, .sp=0x72, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x79ff, .value=0x10}, {.addr=0x7a00, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x79c5, .a=0xc6, .x=0xcb, .y=0x1f, .sp=0x72, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x79ff, .value=0x10}, {.addr=0x7a00, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x79ff, .value=0x10, .type=IO_READ},
        {.addr=0x7a00, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_012A) {
    const struct CPU_State initial_cpu = {.pc=0xbac2, .a=0x0b, .x=0x5b, .y=0x33, .sp=0xd2, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xbac2, .value=0x10}, {.addr=0xbac3, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xbac4, .a=0x0b, .x=0x5b, .y=0x33, .sp=0xd2, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xbac2, .value=0x10}, {.addr=0xbac3, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xbac2, .value=0x10, .type=IO_READ},
        {.addr=0xbac3, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_012B) {
    const struct CPU_State initial_cpu = {.pc=0x86c6, .a=0x98, .x=0xd4, .y=0x2e, .sp=0x7b, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x86c6, .value=0x10}, {.addr=0x86c7, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x86c8, .a=0x98, .x=0xd4, .y=0x2e, .sp=0x7b, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x86c6, .value=0x10}, {.addr=0x86c7, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x86c6, .value=0x10, .type=IO_READ},
        {.addr=0x86c7, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_012C) {
    const struct CPU_State initial_cpu = {.pc=0x4001, .a=0x92, .x=0xdc, .y=0x87, .sp=0x0f, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x4001, .value=0x10}, {.addr=0x4002, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x4003, .a=0x92, .x=0xdc, .y=0x87, .sp=0x0f, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x4001, .value=0x10}, {.addr=0x4002, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x4001, .value=0x10, .type=IO_READ},
        {.addr=0x4002, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_012D) {
    const struct CPU_State initial_cpu = {.pc=0xe1bd, .a=0x97, .x=0xde, .y=0xe3, .sp=0x5a, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xe1bd, .value=0x10}, {.addr=0xe1be, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xe193, .a=0x97, .x=0xde, .y=0xe3, .sp=0x5a, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xe1bd, .value=0x10}, {.addr=0xe1be, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xe1bd, .value=0x10, .type=IO_READ},
        {.addr=0xe1be, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_012E) {
    const struct CPU_State initial_cpu = {.pc=0xade7, .a=0x4b, .x=0x9e, .y=0x56, .sp=0x76, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xade7, .value=0x10}, {.addr=0xade8, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xae25, .a=0x4b, .x=0x9e, .y=0x56, .sp=0x76, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xade7, .value=0x10}, {.addr=0xade8, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xade7, .value=0x10, .type=IO_READ},
        {.addr=0xade8, .value=0x3c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_012F) {
    const struct CPU_State initial_cpu = {.pc=0x1f8e, .a=0x34, .x=0xd0, .y=0xbf, .sp=0x25, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x1f8e, .value=0x10}, {.addr=0x1f8f, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x1fd2, .a=0x34, .x=0xd0, .y=0xbf, .sp=0x25, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x1f8e, .value=0x10}, {.addr=0x1f8f, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x1f8e, .value=0x10, .type=IO_READ},
        {.addr=0x1f8f, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0130) {
    const struct CPU_State initial_cpu = {.pc=0x1471, .a=0xd9, .x=0xf6, .y=0x2a, .sp=0x75, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x1471, .value=0x10}, {.addr=0x1472, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x1473, .a=0xd9, .x=0xf6, .y=0x2a, .sp=0x75, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x1471, .value=0x10}, {.addr=0x1472, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x1471, .value=0x10, .type=IO_READ},
        {.addr=0x1472, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0131) {
    const struct CPU_State initial_cpu = {.pc=0x3075, .a=0x6e, .x=0x38, .y=0xa6, .sp=0x38, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x3075, .value=0x10}, {.addr=0x3076, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x307c, .a=0x6e, .x=0x38, .y=0xa6, .sp=0x38, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x3075, .value=0x10}, {.addr=0x3076, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x3075, .value=0x10, .type=IO_READ},
        {.addr=0x3076, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0132) {
    const struct CPU_State initial_cpu = {.pc=0xe112, .a=0x67, .x=0x70, .y=0x5d, .sp=0x9d, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xe112, .value=0x10}, {.addr=0xe113, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xe114, .a=0x67, .x=0x70, .y=0x5d, .sp=0x9d, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xe112, .value=0x10}, {.addr=0xe113, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xe112, .value=0x10, .type=IO_READ},
        {.addr=0xe113, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0133) {
    const struct CPU_State initial_cpu = {.pc=0x799c, .a=0x06, .x=0x01, .y=0x48, .sp=0xf2, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x799c, .value=0x10}, {.addr=0x799d, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x799e, .a=0x06, .x=0x01, .y=0x48, .sp=0xf2, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x799c, .value=0x10}, {.addr=0x799d, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x799c, .value=0x10, .type=IO_READ},
        {.addr=0x799d, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0134) {
    const struct CPU_State initial_cpu = {.pc=0xe0f3, .a=0xab, .x=0x1e, .y=0xe4, .sp=0x0b, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xe0f3, .value=0x10}, {.addr=0xe0f4, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xe0c3, .a=0xab, .x=0x1e, .y=0xe4, .sp=0x0b, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xe0f3, .value=0x10}, {.addr=0xe0f4, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xe0f3, .value=0x10, .type=IO_READ},
        {.addr=0xe0f4, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0135) {
    const struct CPU_State initial_cpu = {.pc=0xd4ca, .a=0x7b, .x=0xca, .y=0x8d, .sp=0x04, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0xd4ca, .value=0x10}, {.addr=0xd4cb, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xd4df, .a=0x7b, .x=0xca, .y=0x8d, .sp=0x04, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0xd4ca, .value=0x10}, {.addr=0xd4cb, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xd4ca, .value=0x10, .type=IO_READ},
        {.addr=0xd4cb, .value=0x13, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0136) {
    const struct CPU_State initial_cpu = {.pc=0xfceb, .a=0x4d, .x=0x15, .y=0x98, .sp=0xc5, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xfceb, .value=0x10}, {.addr=0xfcec, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xfced, .a=0x4d, .x=0x15, .y=0x98, .sp=0xc5, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xfceb, .value=0x10}, {.addr=0xfcec, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xfceb, .value=0x10, .type=IO_READ},
        {.addr=0xfcec, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0137) {
    const struct CPU_State initial_cpu = {.pc=0x551e, .a=0x0d, .x=0x32, .y=0x5e, .sp=0xf6, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x551e, .value=0x10}, {.addr=0x551f, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x5520, .a=0x0d, .x=0x32, .y=0x5e, .sp=0xf6, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x551e, .value=0x10}, {.addr=0x551f, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x551e, .value=0x10, .type=IO_READ},
        {.addr=0x551f, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0138) {
    const struct CPU_State initial_cpu = {.pc=0x2d1d, .a=0x85, .x=0x95, .y=0xe1, .sp=0xac, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x2d1d, .value=0x10}, {.addr=0x2d1e, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x2cbe, .a=0x85, .x=0x95, .y=0xe1, .sp=0xac, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x2d1d, .value=0x10}, {.addr=0x2d1e, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x2d1d, .value=0x10, .type=IO_READ},
        {.addr=0x2d1e, .value=0x9f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0139) {
    const struct CPU_State initial_cpu = {.pc=0x7605, .a=0x4c, .x=0xbf, .y=0x80, .sp=0x69, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x7605, .value=0x10}, {.addr=0x7606, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x7632, .a=0x4c, .x=0xbf, .y=0x80, .sp=0x69, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x7605, .value=0x10}, {.addr=0x7606, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x7605, .value=0x10, .type=IO_READ},
        {.addr=0x7606, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_013A) {
    const struct CPU_State initial_cpu = {.pc=0xcb4d, .a=0xe5, .x=0x82, .y=0x0b, .sp=0x2a, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xcb4d, .value=0x10}, {.addr=0xcb4e, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xcb4f, .a=0xe5, .x=0x82, .y=0x0b, .sp=0x2a, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0xcb4d, .value=0x10}, {.addr=0xcb4e, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xcb4d, .value=0x10, .type=IO_READ},
        {.addr=0xcb4e, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_013B) {
    const struct CPU_State initial_cpu = {.pc=0x1c02, .a=0xb9, .x=0xac, .y=0x78, .sp=0x28, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x1c02, .value=0x10}, {.addr=0x1c03, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x1c04, .a=0xb9, .x=0xac, .y=0x78, .sp=0x28, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x1c02, .value=0x10}, {.addr=0x1c03, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x1c02, .value=0x10, .type=IO_READ},
        {.addr=0x1c03, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_013C) {
    const struct CPU_State initial_cpu = {.pc=0xd12a, .a=0xe6, .x=0x36, .y=0x10, .sp=0x59, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0xd12a, .value=0x10}, {.addr=0xd12b, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xd12c, .a=0xe6, .x=0x36, .y=0x10, .sp=0x59, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0xd12a, .value=0x10}, {.addr=0xd12b, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xd12a, .value=0x10, .type=IO_READ},
        {.addr=0xd12b, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_013D) {
    const struct CPU_State initial_cpu = {.pc=0x15af, .a=0xdc, .x=0xf4, .y=0xa6, .sp=0x99, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x15af, .value=0x10}, {.addr=0x15b0, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x1606, .a=0xdc, .x=0xf4, .y=0xa6, .sp=0x99, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x15af, .value=0x10}, {.addr=0x15b0, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x15af, .value=0x10, .type=IO_READ},
        {.addr=0x15b0, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_013E) {
    const struct CPU_State initial_cpu = {.pc=0x2f7a, .a=0xe2, .x=0xf0, .y=0x16, .sp=0x48, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x2f7a, .value=0x10}, {.addr=0x2f7b, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x2f31, .a=0xe2, .x=0xf0, .y=0x16, .sp=0x48, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x2f7a, .value=0x10}, {.addr=0x2f7b, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x2f7a, .value=0x10, .type=IO_READ},
        {.addr=0x2f7b, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_013F) {
    const struct CPU_State initial_cpu = {.pc=0xcc05, .a=0x34, .x=0x74, .y=0x6a, .sp=0xc5, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xcc05, .value=0x10}, {.addr=0xcc06, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xcc07, .a=0x34, .x=0x74, .y=0x6a, .sp=0xc5, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0xcc05, .value=0x10}, {.addr=0xcc06, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xcc05, .value=0x10, .type=IO_READ},
        {.addr=0xcc06, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0140) {
    const struct CPU_State initial_cpu = {.pc=0x4902, .a=0xb1, .x=0x31, .y=0xf9, .sp=0x11, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x4902, .value=0x10}, {.addr=0x4903, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x4904, .a=0xb1, .x=0x31, .y=0xf9, .sp=0x11, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x4902, .value=0x10}, {.addr=0x4903, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x4902, .value=0x10, .type=IO_READ},
        {.addr=0x4903, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0141) {
    const struct CPU_State initial_cpu = {.pc=0xfa48, .a=0x0a, .x=0x51, .y=0x84, .sp=0x02, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xfa48, .value=0x10}, {.addr=0xfa49, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xf9e1, .a=0x0a, .x=0x51, .y=0x84, .sp=0x02, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xfa48, .value=0x10}, {.addr=0xfa49, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xfa48, .value=0x10, .type=IO_READ},
        {.addr=0xfa49, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0142) {
    const struct CPU_State initial_cpu = {.pc=0xc2a1, .a=0xbc, .x=0x99, .y=0xee, .sp=0x9d, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xc2a1, .value=0x10}, {.addr=0xc2a2, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0xc2ee, .a=0xbc, .x=0x99, .y=0xee, .sp=0x9d, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xc2a1, .value=0x10}, {.addr=0xc2a2, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0xc2a1, .value=0x10, .type=IO_READ},
        {.addr=0xc2a2, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0143) {
    const struct CPU_State initial_cpu = {.pc=0xebfb, .a=0x29, .x=0xa0, .y=0xeb, .sp=0x9a, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xebfb, .value=0x10}, {.addr=0xebfc, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xeb95, .a=0x29, .x=0xa0, .y=0xeb, .sp=0x9a, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0xebfb, .value=0x10}, {.addr=0xebfc, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xebfb, .value=0x10, .type=IO_READ},
        {.addr=0xebfc, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0144) {
    const struct CPU_State initial_cpu = {.pc=0xd67b, .a=0x1a, .x=0x24, .y=0xdb, .sp=0x8f, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xd67b, .value=0x10}, {.addr=0xd67c, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd6aa, .a=0x1a, .x=0x24, .y=0xdb, .sp=0x8f, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xd67b, .value=0x10}, {.addr=0xd67c, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd67b, .value=0x10, .type=IO_READ},
        {.addr=0xd67c, .value=0x2d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0145) {
    const struct CPU_State initial_cpu = {.pc=0xe95d, .a=0x98, .x=0x8e, .y=0x89, .sp=0x6e, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xe95d, .value=0x10}, {.addr=0xe95e, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xe95f, .a=0x98, .x=0x8e, .y=0x89, .sp=0x6e, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xe95d, .value=0x10}, {.addr=0xe95e, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xe95d, .value=0x10, .type=IO_READ},
        {.addr=0xe95e, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0146) {
    const struct CPU_State initial_cpu = {.pc=0x3431, .a=0x47, .x=0x19, .y=0x95, .sp=0x67, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x3431, .value=0x10}, {.addr=0x3432, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x3433, .a=0x47, .x=0x19, .y=0x95, .sp=0x67, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x3431, .value=0x10}, {.addr=0x3432, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x3431, .value=0x10, .type=IO_READ},
        {.addr=0x3432, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0147) {
    const struct CPU_State initial_cpu = {.pc=0x5104, .a=0xc6, .x=0xd6, .y=0x76, .sp=0xf8, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x5104, .value=0x10}, {.addr=0x5105, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x5106, .a=0xc6, .x=0xd6, .y=0x76, .sp=0xf8, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x5104, .value=0x10}, {.addr=0x5105, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x5104, .value=0x10, .type=IO_READ},
        {.addr=0x5105, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0148) {
    const struct CPU_State initial_cpu = {.pc=0x0fc0, .a=0x14, .x=0x9c, .y=0x6f, .sp=0x3f, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x0fc0, .value=0x10}, {.addr=0x0fc1, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x0fc2, .a=0x14, .x=0x9c, .y=0x6f, .sp=0x3f, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x0fc0, .value=0x10}, {.addr=0x0fc1, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x0fc0, .value=0x10, .type=IO_READ},
        {.addr=0x0fc1, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0149) {
    const struct CPU_State initial_cpu = {.pc=0x9035, .a=0xbc, .x=0x16, .y=0x58, .sp=0xdf, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x9035, .value=0x10}, {.addr=0x9036, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x8fcf, .a=0xbc, .x=0x16, .y=0x58, .sp=0xdf, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x9035, .value=0x10}, {.addr=0x9036, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x9035, .value=0x10, .type=IO_READ},
        {.addr=0x9036, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_014A) {
    const struct CPU_State initial_cpu = {.pc=0x37e1, .a=0x64, .x=0x18, .y=0xbf, .sp=0xdb, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x37e1, .value=0x10}, {.addr=0x37e2, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x384d, .a=0x64, .x=0x18, .y=0xbf, .sp=0xdb, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x37e1, .value=0x10}, {.addr=0x37e2, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x37e1, .value=0x10, .type=IO_READ},
        {.addr=0x37e2, .value=0x6a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_014B) {
    const struct CPU_State initial_cpu = {.pc=0x3b47, .a=0x9a, .x=0x43, .y=0x40, .sp=0xc2, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x3b47, .value=0x10}, {.addr=0x3b48, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x3ba5, .a=0x9a, .x=0x43, .y=0x40, .sp=0xc2, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x3b47, .value=0x10}, {.addr=0x3b48, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x3b47, .value=0x10, .type=IO_READ},
        {.addr=0x3b48, .value=0x5c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_014C) {
    const struct CPU_State initial_cpu = {.pc=0xd57d, .a=0xc5, .x=0x3f, .y=0x93, .sp=0xc4, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xd57d, .value=0x10}, {.addr=0xd57e, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xd579, .a=0xc5, .x=0x3f, .y=0x93, .sp=0xc4, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xd57d, .value=0x10}, {.addr=0xd57e, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xd57d, .value=0x10, .type=IO_READ},
        {.addr=0xd57e, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_014D) {
    const struct CPU_State initial_cpu = {.pc=0x206b, .a=0x73, .x=0x56, .y=0x2a, .sp=0x1d, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x206b, .value=0x10}, {.addr=0x206c, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x206d, .a=0x73, .x=0x56, .y=0x2a, .sp=0x1d, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x206b, .value=0x10}, {.addr=0x206c, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x206b, .value=0x10, .type=IO_READ},
        {.addr=0x206c, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_014E) {
    const struct CPU_State initial_cpu = {.pc=0x98b7, .a=0xa2, .x=0x75, .y=0xd0, .sp=0xa9, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x98b7, .value=0x10}, {.addr=0x98b8, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x9863, .a=0xa2, .x=0x75, .y=0xd0, .sp=0xa9, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x98b7, .value=0x10}, {.addr=0x98b8, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x98b7, .value=0x10, .type=IO_READ},
        {.addr=0x98b8, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_014F) {
    const struct CPU_State initial_cpu = {.pc=0x3216, .a=0xcc, .x=0x44, .y=0xd5, .sp=0xf1, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x3216, .value=0x10}, {.addr=0x3217, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x31ef, .a=0xcc, .x=0x44, .y=0xd5, .sp=0xf1, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x3216, .value=0x10}, {.addr=0x3217, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x3216, .value=0x10, .type=IO_READ},
        {.addr=0x3217, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0150) {
    const struct CPU_State initial_cpu = {.pc=0xbbab, .a=0xea, .x=0x05, .y=0x29, .sp=0x36, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xbbab, .value=0x10}, {.addr=0xbbac, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xbbad, .a=0xea, .x=0x05, .y=0x29, .sp=0x36, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xbbab, .value=0x10}, {.addr=0xbbac, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xbbab, .value=0x10, .type=IO_READ},
        {.addr=0xbbac, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0151) {
    const struct CPU_State initial_cpu = {.pc=0x16e5, .a=0xdc, .x=0x89, .y=0x1f, .sp=0x14, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x16e5, .value=0x10}, {.addr=0x16e6, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x167f, .a=0xdc, .x=0x89, .y=0x1f, .sp=0x14, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x16e5, .value=0x10}, {.addr=0x16e6, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x16e5, .value=0x10, .type=IO_READ},
        {.addr=0x16e6, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0152) {
    const struct CPU_State initial_cpu = {.pc=0xd93e, .a=0x29, .x=0xdf, .y=0xa3, .sp=0x72, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xd93e, .value=0x10}, {.addr=0xd93f, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xd940, .a=0x29, .x=0xdf, .y=0xa3, .sp=0x72, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xd93e, .value=0x10}, {.addr=0xd93f, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xd93e, .value=0x10, .type=IO_READ},
        {.addr=0xd93f, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0153) {
    const struct CPU_State initial_cpu = {.pc=0xa586, .a=0x40, .x=0x10, .y=0x3a, .sp=0xb6, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0xa586, .value=0x10}, {.addr=0xa587, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xa5c8, .a=0x40, .x=0x10, .y=0x3a, .sp=0xb6, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xa586, .value=0x10}, {.addr=0xa587, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xa586, .value=0x10, .type=IO_READ},
        {.addr=0xa587, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0154) {
    const struct CPU_State initial_cpu = {.pc=0x0516, .a=0x46, .x=0xf4, .y=0x85, .sp=0xeb, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0516, .value=0x10}, {.addr=0x0517, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x04d7, .a=0x46, .x=0xf4, .y=0x85, .sp=0xeb, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0516, .value=0x10}, {.addr=0x0517, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x0516, .value=0x10, .type=IO_READ},
        {.addr=0x0517, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0155) {
    const struct CPU_State initial_cpu = {.pc=0x3d72, .a=0xf5, .x=0x4e, .y=0x7f, .sp=0xe1, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x3d72, .value=0x10}, {.addr=0x3d73, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3dd4, .a=0xf5, .x=0x4e, .y=0x7f, .sp=0xe1, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x3d72, .value=0x10}, {.addr=0x3d73, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3d72, .value=0x10, .type=IO_READ},
        {.addr=0x3d73, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0156) {
    const struct CPU_State initial_cpu = {.pc=0x91f5, .a=0xf7, .x=0x36, .y=0xa1, .sp=0x96, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x91f5, .value=0x10}, {.addr=0x91f6, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x9192, .a=0xf7, .x=0x36, .y=0xa1, .sp=0x96, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x91f5, .value=0x10}, {.addr=0x91f6, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x91f5, .value=0x10, .type=IO_READ},
        {.addr=0x91f6, .value=0x9b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0157) {
    const struct CPU_State initial_cpu = {.pc=0xf388, .a=0x2f, .x=0x81, .y=0x1a, .sp=0x3f, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xf388, .value=0x10}, {.addr=0xf389, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xf38a, .a=0x2f, .x=0x81, .y=0x1a, .sp=0x3f, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0xf388, .value=0x10}, {.addr=0xf389, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xf388, .value=0x10, .type=IO_READ},
        {.addr=0xf389, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0158) {
    const struct CPU_State initial_cpu = {.pc=0xc2ef, .a=0x7d, .x=0x47, .y=0xea, .sp=0xa2, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xc2ef, .value=0x10}, {.addr=0xc2f0, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xc2f1, .a=0x7d, .x=0x47, .y=0xea, .sp=0xa2, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xc2ef, .value=0x10}, {.addr=0xc2f0, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xc2ef, .value=0x10, .type=IO_READ},
        {.addr=0xc2f0, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0159) {
    const struct CPU_State initial_cpu = {.pc=0xa1fb, .a=0x2a, .x=0x56, .y=0xd9, .sp=0xfb, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xa1fb, .value=0x10}, {.addr=0xa1fc, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0xa1fd, .a=0x2a, .x=0x56, .y=0xd9, .sp=0xfb, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xa1fb, .value=0x10}, {.addr=0xa1fc, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0xa1fb, .value=0x10, .type=IO_READ},
        {.addr=0xa1fc, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_015A) {
    const struct CPU_State initial_cpu = {.pc=0x52b1, .a=0xa5, .x=0x77, .y=0xad, .sp=0x6e, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x52b1, .value=0x10}, {.addr=0x52b2, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x52dd, .a=0xa5, .x=0x77, .y=0xad, .sp=0x6e, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x52b1, .value=0x10}, {.addr=0x52b2, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x52b1, .value=0x10, .type=IO_READ},
        {.addr=0x52b2, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_015B) {
    const struct CPU_State initial_cpu = {.pc=0xcfc2, .a=0xd1, .x=0xb3, .y=0x5c, .sp=0xda, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xcfc2, .value=0x10}, {.addr=0xcfc3, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xcfc4, .a=0xd1, .x=0xb3, .y=0x5c, .sp=0xda, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0xcfc2, .value=0x10}, {.addr=0xcfc3, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xcfc2, .value=0x10, .type=IO_READ},
        {.addr=0xcfc3, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_015C) {
    const struct CPU_State initial_cpu = {.pc=0x4dc9, .a=0x96, .x=0x63, .y=0x0d, .sp=0xdc, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x4dc9, .value=0x10}, {.addr=0x4dca, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x4dcb, .a=0x96, .x=0x63, .y=0x0d, .sp=0xdc, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x4dc9, .value=0x10}, {.addr=0x4dca, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x4dc9, .value=0x10, .type=IO_READ},
        {.addr=0x4dca, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_015D) {
    const struct CPU_State initial_cpu = {.pc=0xa79a, .a=0x29, .x=0xda, .y=0xf1, .sp=0xf4, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xa79a, .value=0x10}, {.addr=0xa79b, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xa79c, .a=0x29, .x=0xda, .y=0xf1, .sp=0xf4, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xa79a, .value=0x10}, {.addr=0xa79b, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xa79a, .value=0x10, .type=IO_READ},
        {.addr=0xa79b, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_015E) {
    const struct CPU_State initial_cpu = {.pc=0xe015, .a=0x56, .x=0xa8, .y=0x0f, .sp=0x1e, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xe015, .value=0x10}, {.addr=0xe016, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0xe017, .a=0x56, .x=0xa8, .y=0x0f, .sp=0x1e, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xe015, .value=0x10}, {.addr=0xe016, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0xe015, .value=0x10, .type=IO_READ},
        {.addr=0xe016, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_015F) {
    const struct CPU_State initial_cpu = {.pc=0x823b, .a=0xbc, .x=0xba, .y=0x72, .sp=0x2f, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x823b, .value=0x10}, {.addr=0x823c, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x823d, .a=0xbc, .x=0xba, .y=0x72, .sp=0x2f, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x823b, .value=0x10}, {.addr=0x823c, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x823b, .value=0x10, .type=IO_READ},
        {.addr=0x823c, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0160) {
    const struct CPU_State initial_cpu = {.pc=0x4e83, .a=0xdd, .x=0xe1, .y=0x45, .sp=0x46, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x4e83, .value=0x10}, {.addr=0x4e84, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x4e85, .a=0xdd, .x=0xe1, .y=0x45, .sp=0x46, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x4e83, .value=0x10}, {.addr=0x4e84, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x4e83, .value=0x10, .type=IO_READ},
        {.addr=0x4e84, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0161) {
    const struct CPU_State initial_cpu = {.pc=0xe300, .a=0x3a, .x=0xaa, .y=0xe3, .sp=0xf8, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xe300, .value=0x10}, {.addr=0xe301, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xe302, .a=0x3a, .x=0xaa, .y=0xe3, .sp=0xf8, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xe300, .value=0x10}, {.addr=0xe301, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xe300, .value=0x10, .type=IO_READ},
        {.addr=0xe301, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0162) {
    const struct CPU_State initial_cpu = {.pc=0xb667, .a=0x22, .x=0x98, .y=0x85, .sp=0x23, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0xb667, .value=0x10}, {.addr=0xb668, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xb669, .a=0x22, .x=0x98, .y=0x85, .sp=0x23, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0xb667, .value=0x10}, {.addr=0xb668, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xb667, .value=0x10, .type=IO_READ},
        {.addr=0xb668, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0163) {
    const struct CPU_State initial_cpu = {.pc=0xb0c5, .a=0xf4, .x=0xf0, .y=0xd4, .sp=0x8b, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xb0c5, .value=0x10}, {.addr=0xb0c6, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xb0a7, .a=0xf4, .x=0xf0, .y=0xd4, .sp=0x8b, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xb0c5, .value=0x10}, {.addr=0xb0c6, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xb0c5, .value=0x10, .type=IO_READ},
        {.addr=0xb0c6, .value=0xe0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0164) {
    const struct CPU_State initial_cpu = {.pc=0xdfa5, .a=0xfc, .x=0xb4, .y=0xd6, .sp=0xe7, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xdfa5, .value=0x10}, {.addr=0xdfa6, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xdfd3, .a=0xfc, .x=0xb4, .y=0xd6, .sp=0xe7, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xdfa5, .value=0x10}, {.addr=0xdfa6, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xdfa5, .value=0x10, .type=IO_READ},
        {.addr=0xdfa6, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0165) {
    const struct CPU_State initial_cpu = {.pc=0x38e4, .a=0xbb, .x=0x9d, .y=0x05, .sp=0xf5, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x38e4, .value=0x10}, {.addr=0x38e5, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x38e6, .a=0xbb, .x=0x9d, .y=0x05, .sp=0xf5, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x38e4, .value=0x10}, {.addr=0x38e5, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x38e4, .value=0x10, .type=IO_READ},
        {.addr=0x38e5, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0166) {
    const struct CPU_State initial_cpu = {.pc=0xe92f, .a=0xee, .x=0xb8, .y=0xd0, .sp=0x1d, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xe92f, .value=0x10}, {.addr=0xe930, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xe931, .a=0xee, .x=0xb8, .y=0xd0, .sp=0x1d, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0xe92f, .value=0x10}, {.addr=0xe930, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xe92f, .value=0x10, .type=IO_READ},
        {.addr=0xe930, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0167) {
    const struct CPU_State initial_cpu = {.pc=0x9d32, .a=0x9d, .x=0xf2, .y=0xb1, .sp=0x15, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x9d32, .value=0x10}, {.addr=0x9d33, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x9d34, .a=0x9d, .x=0xf2, .y=0xb1, .sp=0x15, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9d32, .value=0x10}, {.addr=0x9d33, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x9d32, .value=0x10, .type=IO_READ},
        {.addr=0x9d33, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0168) {
    const struct CPU_State initial_cpu = {.pc=0x675a, .a=0xda, .x=0x11, .y=0xd4, .sp=0x63, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x675a, .value=0x10}, {.addr=0x675b, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x675c, .a=0xda, .x=0x11, .y=0xd4, .sp=0x63, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x675a, .value=0x10}, {.addr=0x675b, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x675a, .value=0x10, .type=IO_READ},
        {.addr=0x675b, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0169) {
    const struct CPU_State initial_cpu = {.pc=0xf871, .a=0x59, .x=0x9b, .y=0x4d, .sp=0xb9, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0xf871, .value=0x10}, {.addr=0xf872, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xf8b9, .a=0x59, .x=0x9b, .y=0x4d, .sp=0xb9, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0xf871, .value=0x10}, {.addr=0xf872, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xf871, .value=0x10, .type=IO_READ},
        {.addr=0xf872, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_016A) {
    const struct CPU_State initial_cpu = {.pc=0x3c52, .a=0xaf, .x=0xe8, .y=0x54, .sp=0x17, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x3c52, .value=0x10}, {.addr=0x3c53, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x3c54, .a=0xaf, .x=0xe8, .y=0x54, .sp=0x17, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3c52, .value=0x10}, {.addr=0x3c53, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x3c52, .value=0x10, .type=IO_READ},
        {.addr=0x3c53, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_016B) {
    const struct CPU_State initial_cpu = {.pc=0x90a8, .a=0x78, .x=0x33, .y=0xcc, .sp=0x05, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x90a8, .value=0x10}, {.addr=0x90a9, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x90aa, .a=0x78, .x=0x33, .y=0xcc, .sp=0x05, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x90a8, .value=0x10}, {.addr=0x90a9, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x90a8, .value=0x10, .type=IO_READ},
        {.addr=0x90a9, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_016C) {
    const struct CPU_State initial_cpu = {.pc=0x6509, .a=0x53, .x=0x09, .y=0xc3, .sp=0xe0, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x6509, .value=0x10}, {.addr=0x650a, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x650b, .a=0x53, .x=0x09, .y=0xc3, .sp=0xe0, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x6509, .value=0x10}, {.addr=0x650a, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x6509, .value=0x10, .type=IO_READ},
        {.addr=0x650a, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_016D) {
    const struct CPU_State initial_cpu = {.pc=0x6a7f, .a=0x76, .x=0xf5, .y=0xa5, .sp=0x51, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x6a7f, .value=0x10}, {.addr=0x6a80, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x6a98, .a=0x76, .x=0xf5, .y=0xa5, .sp=0x51, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x6a7f, .value=0x10}, {.addr=0x6a80, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x6a7f, .value=0x10, .type=IO_READ},
        {.addr=0x6a80, .value=0x17, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_016E) {
    const struct CPU_State initial_cpu = {.pc=0x699f, .a=0x2a, .x=0x13, .y=0x02, .sp=0xdf, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x699f, .value=0x10}, {.addr=0x69a0, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x6974, .a=0x2a, .x=0x13, .y=0x02, .sp=0xdf, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x699f, .value=0x10}, {.addr=0x69a0, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x699f, .value=0x10, .type=IO_READ},
        {.addr=0x69a0, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_016F) {
    const struct CPU_State initial_cpu = {.pc=0x7505, .a=0x09, .x=0xc1, .y=0xe0, .sp=0xea, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x7505, .value=0x10}, {.addr=0x7506, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x7507, .a=0x09, .x=0xc1, .y=0xe0, .sp=0xea, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x7505, .value=0x10}, {.addr=0x7506, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x7505, .value=0x10, .type=IO_READ},
        {.addr=0x7506, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0170) {
    const struct CPU_State initial_cpu = {.pc=0x5802, .a=0x4c, .x=0x61, .y=0x9e, .sp=0x29, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x5802, .value=0x10}, {.addr=0x5803, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x5869, .a=0x4c, .x=0x61, .y=0x9e, .sp=0x29, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x5802, .value=0x10}, {.addr=0x5803, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x5802, .value=0x10, .type=IO_READ},
        {.addr=0x5803, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0171) {
    const struct CPU_State initial_cpu = {.pc=0xf227, .a=0xb4, .x=0xb0, .y=0xb0, .sp=0xe6, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xf227, .value=0x10}, {.addr=0xf228, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xf229, .a=0xb4, .x=0xb0, .y=0xb0, .sp=0xe6, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xf227, .value=0x10}, {.addr=0xf228, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xf227, .value=0x10, .type=IO_READ},
        {.addr=0xf228, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0172) {
    const struct CPU_State initial_cpu = {.pc=0x7966, .a=0xb1, .x=0x56, .y=0x86, .sp=0x34, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x7966, .value=0x10}, {.addr=0x7967, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x7968, .a=0xb1, .x=0x56, .y=0x86, .sp=0x34, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x7966, .value=0x10}, {.addr=0x7967, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x7966, .value=0x10, .type=IO_READ},
        {.addr=0x7967, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0173) {
    const struct CPU_State initial_cpu = {.pc=0x028c, .a=0x00, .x=0x86, .y=0x21, .sp=0xf4, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x028c, .value=0x10}, {.addr=0x028d, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x0261, .a=0x00, .x=0x86, .y=0x21, .sp=0xf4, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x028c, .value=0x10}, {.addr=0x028d, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x028c, .value=0x10, .type=IO_READ},
        {.addr=0x028d, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0174) {
    const struct CPU_State initial_cpu = {.pc=0x7b7e, .a=0x81, .x=0x2c, .y=0xb0, .sp=0xfd, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x7b7e, .value=0x10}, {.addr=0x7b7f, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x7b9a, .a=0x81, .x=0x2c, .y=0xb0, .sp=0xfd, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x7b7e, .value=0x10}, {.addr=0x7b7f, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x7b7e, .value=0x10, .type=IO_READ},
        {.addr=0x7b7f, .value=0x1a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0175) {
    const struct CPU_State initial_cpu = {.pc=0x0703, .a=0x53, .x=0xab, .y=0x88, .sp=0xf7, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0703, .value=0x10}, {.addr=0x0704, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x0729, .a=0x53, .x=0xab, .y=0x88, .sp=0xf7, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0703, .value=0x10}, {.addr=0x0704, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x0703, .value=0x10, .type=IO_READ},
        {.addr=0x0704, .value=0x24, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0176) {
    const struct CPU_State initial_cpu = {.pc=0xc0c2, .a=0x4f, .x=0xab, .y=0xf7, .sp=0x2b, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xc0c2, .value=0x10}, {.addr=0xc0c3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc0c4, .a=0x4f, .x=0xab, .y=0xf7, .sp=0x2b, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xc0c2, .value=0x10}, {.addr=0xc0c3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc0c2, .value=0x10, .type=IO_READ},
        {.addr=0xc0c3, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0177) {
    const struct CPU_State initial_cpu = {.pc=0x75fe, .a=0x41, .x=0x87, .y=0x85, .sp=0xab, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x75fe, .value=0x10}, {.addr=0x75ff, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x7637, .a=0x41, .x=0x87, .y=0x85, .sp=0xab, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x75fe, .value=0x10}, {.addr=0x75ff, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x75fe, .value=0x10, .type=IO_READ},
        {.addr=0x75ff, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0178) {
    const struct CPU_State initial_cpu = {.pc=0x9654, .a=0x1f, .x=0xeb, .y=0x28, .sp=0xdf, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x9654, .value=0x10}, {.addr=0x9655, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x9656, .a=0x1f, .x=0xeb, .y=0x28, .sp=0xdf, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x9654, .value=0x10}, {.addr=0x9655, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x9654, .value=0x10, .type=IO_READ},
        {.addr=0x9655, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0179) {
    const struct CPU_State initial_cpu = {.pc=0x6e76, .a=0x28, .x=0xf8, .y=0x0d, .sp=0x44, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x6e76, .value=0x10}, {.addr=0x6e77, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x6e78, .a=0x28, .x=0xf8, .y=0x0d, .sp=0x44, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x6e76, .value=0x10}, {.addr=0x6e77, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x6e76, .value=0x10, .type=IO_READ},
        {.addr=0x6e77, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_017A) {
    const struct CPU_State initial_cpu = {.pc=0x5fa7, .a=0xee, .x=0xb5, .y=0xc4, .sp=0x6d, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x5fa7, .value=0x10}, {.addr=0x5fa8, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x5fa9, .a=0xee, .x=0xb5, .y=0xc4, .sp=0x6d, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x5fa7, .value=0x10}, {.addr=0x5fa8, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x5fa7, .value=0x10, .type=IO_READ},
        {.addr=0x5fa8, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_017B) {
    const struct CPU_State initial_cpu = {.pc=0xca8f, .a=0x8b, .x=0x07, .y=0x12, .sp=0xa3, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xca8f, .value=0x10}, {.addr=0xca90, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xca2f, .a=0x8b, .x=0x07, .y=0x12, .sp=0xa3, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xca8f, .value=0x10}, {.addr=0xca90, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xca8f, .value=0x10, .type=IO_READ},
        {.addr=0xca90, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_017C) {
    const struct CPU_State initial_cpu = {.pc=0x53a5, .a=0x8e, .x=0xb0, .y=0xa9, .sp=0x3a, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x53a5, .value=0x10}, {.addr=0x53a6, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x53a7, .a=0x8e, .x=0xb0, .y=0xa9, .sp=0x3a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x53a5, .value=0x10}, {.addr=0x53a6, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x53a5, .value=0x10, .type=IO_READ},
        {.addr=0x53a6, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_017D) {
    const struct CPU_State initial_cpu = {.pc=0x8326, .a=0x53, .x=0x9e, .y=0xe3, .sp=0xc9, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x8326, .value=0x10}, {.addr=0x8327, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x8328, .a=0x53, .x=0x9e, .y=0xe3, .sp=0xc9, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x8326, .value=0x10}, {.addr=0x8327, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x8326, .value=0x10, .type=IO_READ},
        {.addr=0x8327, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_017E) {
    const struct CPU_State initial_cpu = {.pc=0x5e09, .a=0x41, .x=0x45, .y=0x43, .sp=0xb2, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x5e09, .value=0x10}, {.addr=0x5e0a, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5e0b, .a=0x41, .x=0x45, .y=0x43, .sp=0xb2, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x5e09, .value=0x10}, {.addr=0x5e0a, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5e09, .value=0x10, .type=IO_READ},
        {.addr=0x5e0a, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_017F) {
    const struct CPU_State initial_cpu = {.pc=0x5485, .a=0x6a, .x=0x65, .y=0x00, .sp=0x26, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x5485, .value=0x10}, {.addr=0x5486, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x54dd, .a=0x6a, .x=0x65, .y=0x00, .sp=0x26, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x5485, .value=0x10}, {.addr=0x5486, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x5485, .value=0x10, .type=IO_READ},
        {.addr=0x5486, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0180) {
    const struct CPU_State initial_cpu = {.pc=0x4342, .a=0xd6, .x=0xc6, .y=0x3c, .sp=0x2c, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x4342, .value=0x10}, {.addr=0x4343, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x4344, .a=0xd6, .x=0xc6, .y=0x3c, .sp=0x2c, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x4342, .value=0x10}, {.addr=0x4343, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x4342, .value=0x10, .type=IO_READ},
        {.addr=0x4343, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0181) {
    const struct CPU_State initial_cpu = {.pc=0x1d0b, .a=0x3a, .x=0xd5, .y=0xe6, .sp=0x16, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x1d0b, .value=0x10}, {.addr=0x1d0c, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x1d4c, .a=0x3a, .x=0xd5, .y=0xe6, .sp=0x16, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x1d0b, .value=0x10}, {.addr=0x1d0c, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x1d0b, .value=0x10, .type=IO_READ},
        {.addr=0x1d0c, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0182) {
    const struct CPU_State initial_cpu = {.pc=0x37cd, .a=0x92, .x=0x91, .y=0x1a, .sp=0x1f, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x37cd, .value=0x10}, {.addr=0x37ce, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x37cf, .a=0x92, .x=0x91, .y=0x1a, .sp=0x1f, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x37cd, .value=0x10}, {.addr=0x37ce, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x37cd, .value=0x10, .type=IO_READ},
        {.addr=0x37ce, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0183) {
    const struct CPU_State initial_cpu = {.pc=0xe1a0, .a=0x2f, .x=0x57, .y=0x92, .sp=0x8c, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0xe1a0, .value=0x10}, {.addr=0xe1a1, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xe1f0, .a=0x2f, .x=0x57, .y=0x92, .sp=0x8c, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0xe1a0, .value=0x10}, {.addr=0xe1a1, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xe1a0, .value=0x10, .type=IO_READ},
        {.addr=0xe1a1, .value=0x4e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0184) {
    const struct CPU_State initial_cpu = {.pc=0x084e, .a=0x44, .x=0x0e, .y=0xab, .sp=0xec, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x084e, .value=0x10}, {.addr=0x084f, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x0850, .a=0x44, .x=0x0e, .y=0xab, .sp=0xec, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x084e, .value=0x10}, {.addr=0x084f, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x084e, .value=0x10, .type=IO_READ},
        {.addr=0x084f, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0185) {
    const struct CPU_State initial_cpu = {.pc=0xe4d3, .a=0xe7, .x=0x28, .y=0xa3, .sp=0xf7, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xe4d3, .value=0x10}, {.addr=0xe4d4, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xe4d5, .a=0xe7, .x=0x28, .y=0xa3, .sp=0xf7, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xe4d3, .value=0x10}, {.addr=0xe4d4, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xe4d3, .value=0x10, .type=IO_READ},
        {.addr=0xe4d4, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0186) {
    const struct CPU_State initial_cpu = {.pc=0xaee1, .a=0x60, .x=0xa0, .y=0x83, .sp=0x48, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xaee1, .value=0x10}, {.addr=0xaee2, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xaf5c, .a=0x60, .x=0xa0, .y=0x83, .sp=0x48, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xaee1, .value=0x10}, {.addr=0xaee2, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xaee1, .value=0x10, .type=IO_READ},
        {.addr=0xaee2, .value=0x79, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0187) {
    const struct CPU_State initial_cpu = {.pc=0x583a, .a=0xbf, .x=0xfd, .y=0xe4, .sp=0x30, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x583a, .value=0x10}, {.addr=0x583b, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0x583c, .a=0xbf, .x=0xfd, .y=0xe4, .sp=0x30, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x583a, .value=0x10}, {.addr=0x583b, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0x583a, .value=0x10, .type=IO_READ},
        {.addr=0x583b, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0188) {
    const struct CPU_State initial_cpu = {.pc=0x7290, .a=0xdd, .x=0x29, .y=0x19, .sp=0x6a, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x7290, .value=0x10}, {.addr=0x7291, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x7292, .a=0xdd, .x=0x29, .y=0x19, .sp=0x6a, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x7290, .value=0x10}, {.addr=0x7291, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x7290, .value=0x10, .type=IO_READ},
        {.addr=0x7291, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0189) {
    const struct CPU_State initial_cpu = {.pc=0xb449, .a=0xdc, .x=0x7e, .y=0xf9, .sp=0x28, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xb449, .value=0x10}, {.addr=0xb44a, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xb44b, .a=0xdc, .x=0x7e, .y=0xf9, .sp=0x28, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xb449, .value=0x10}, {.addr=0xb44a, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xb449, .value=0x10, .type=IO_READ},
        {.addr=0xb44a, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_018A) {
    const struct CPU_State initial_cpu = {.pc=0x8572, .a=0xaa, .x=0x02, .y=0x27, .sp=0x46, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x8572, .value=0x10}, {.addr=0x8573, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x85b7, .a=0xaa, .x=0x02, .y=0x27, .sp=0x46, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x8572, .value=0x10}, {.addr=0x8573, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x8572, .value=0x10, .type=IO_READ},
        {.addr=0x8573, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_018B) {
    const struct CPU_State initial_cpu = {.pc=0x2b89, .a=0x36, .x=0xbc, .y=0xfd, .sp=0xb6, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x2b89, .value=0x10}, {.addr=0x2b8a, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x2b8b, .a=0x36, .x=0xbc, .y=0xfd, .sp=0xb6, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x2b89, .value=0x10}, {.addr=0x2b8a, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x2b89, .value=0x10, .type=IO_READ},
        {.addr=0x2b8a, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_018C) {
    const struct CPU_State initial_cpu = {.pc=0x374f, .a=0x26, .x=0x39, .y=0x53, .sp=0x29, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x374f, .value=0x10}, {.addr=0x3750, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x3751, .a=0x26, .x=0x39, .y=0x53, .sp=0x29, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x374f, .value=0x10}, {.addr=0x3750, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x374f, .value=0x10, .type=IO_READ},
        {.addr=0x3750, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_018D) {
    const struct CPU_State initial_cpu = {.pc=0x1fca, .a=0x75, .x=0x19, .y=0x38, .sp=0x48, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x1fca, .value=0x10}, {.addr=0x1fcb, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x1fcc, .a=0x75, .x=0x19, .y=0x38, .sp=0x48, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x1fca, .value=0x10}, {.addr=0x1fcb, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x1fca, .value=0x10, .type=IO_READ},
        {.addr=0x1fcb, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_018E) {
    const struct CPU_State initial_cpu = {.pc=0xd975, .a=0x7f, .x=0x53, .y=0x3d, .sp=0x04, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xd975, .value=0x10}, {.addr=0xd976, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xd9ba, .a=0x7f, .x=0x53, .y=0x3d, .sp=0x04, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xd975, .value=0x10}, {.addr=0xd976, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xd975, .value=0x10, .type=IO_READ},
        {.addr=0xd976, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_018F) {
    const struct CPU_State initial_cpu = {.pc=0xa1c3, .a=0x74, .x=0x5a, .y=0xd6, .sp=0xff, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xa1c3, .value=0x10}, {.addr=0xa1c4, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xa1c5, .a=0x74, .x=0x5a, .y=0xd6, .sp=0xff, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xa1c3, .value=0x10}, {.addr=0xa1c4, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xa1c3, .value=0x10, .type=IO_READ},
        {.addr=0xa1c4, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0190) {
    const struct CPU_State initial_cpu = {.pc=0x85d4, .a=0x2c, .x=0x3d, .y=0x96, .sp=0x86, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x85d4, .value=0x10}, {.addr=0x85d5, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x864a, .a=0x2c, .x=0x3d, .y=0x96, .sp=0x86, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x85d4, .value=0x10}, {.addr=0x85d5, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x85d4, .value=0x10, .type=IO_READ},
        {.addr=0x85d5, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0191) {
    const struct CPU_State initial_cpu = {.pc=0x463c, .a=0x4f, .x=0x88, .y=0x5e, .sp=0xb0, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x463c, .value=0x10}, {.addr=0x463d, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x463e, .a=0x4f, .x=0x88, .y=0x5e, .sp=0xb0, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x463c, .value=0x10}, {.addr=0x463d, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x463c, .value=0x10, .type=IO_READ},
        {.addr=0x463d, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0192) {
    const struct CPU_State initial_cpu = {.pc=0x88cf, .a=0x0c, .x=0xb8, .y=0x94, .sp=0xfe, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x88cf, .value=0x10}, {.addr=0x88d0, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x893d, .a=0x0c, .x=0xb8, .y=0x94, .sp=0xfe, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x88cf, .value=0x10}, {.addr=0x88d0, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x88cf, .value=0x10, .type=IO_READ},
        {.addr=0x88d0, .value=0x6c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0193) {
    const struct CPU_State initial_cpu = {.pc=0xec33, .a=0x9e, .x=0x23, .y=0xce, .sp=0x9b, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xec33, .value=0x10}, {.addr=0xec34, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xebf0, .a=0x9e, .x=0x23, .y=0xce, .sp=0x9b, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xec33, .value=0x10}, {.addr=0xec34, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xec33, .value=0x10, .type=IO_READ},
        {.addr=0xec34, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0194) {
    const struct CPU_State initial_cpu = {.pc=0x2282, .a=0x31, .x=0x78, .y=0x06, .sp=0x82, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x2282, .value=0x10}, {.addr=0x2283, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x2284, .a=0x31, .x=0x78, .y=0x06, .sp=0x82, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x2282, .value=0x10}, {.addr=0x2283, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x2282, .value=0x10, .type=IO_READ},
        {.addr=0x2283, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0195) {
    const struct CPU_State initial_cpu = {.pc=0xc43d, .a=0xb2, .x=0x12, .y=0x9b, .sp=0xf4, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xc43d, .value=0x10}, {.addr=0xc43e, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xc4a0, .a=0xb2, .x=0x12, .y=0x9b, .sp=0xf4, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xc43d, .value=0x10}, {.addr=0xc43e, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xc43d, .value=0x10, .type=IO_READ},
        {.addr=0xc43e, .value=0x61, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0196) {
    const struct CPU_State initial_cpu = {.pc=0x4dcc, .a=0x9d, .x=0x4f, .y=0x2b, .sp=0x39, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x4dcc, .value=0x10}, {.addr=0x4dcd, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x4d9f, .a=0x9d, .x=0x4f, .y=0x2b, .sp=0x39, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x4dcc, .value=0x10}, {.addr=0x4dcd, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x4dcc, .value=0x10, .type=IO_READ},
        {.addr=0x4dcd, .value=0xd1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0197) {
    const struct CPU_State initial_cpu = {.pc=0x5128, .a=0x2f, .x=0xbf, .y=0xe4, .sp=0x0c, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x5128, .value=0x10}, {.addr=0x5129, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x5180, .a=0x2f, .x=0xbf, .y=0xe4, .sp=0x0c, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x5128, .value=0x10}, {.addr=0x5129, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x5128, .value=0x10, .type=IO_READ},
        {.addr=0x5129, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0198) {
    const struct CPU_State initial_cpu = {.pc=0xf8d0, .a=0x99, .x=0x27, .y=0x92, .sp=0x1a, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xf8d0, .value=0x10}, {.addr=0xf8d1, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xf8d2, .a=0x99, .x=0x27, .y=0x92, .sp=0x1a, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xf8d0, .value=0x10}, {.addr=0xf8d1, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xf8d0, .value=0x10, .type=IO_READ},
        {.addr=0xf8d1, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0199) {
    const struct CPU_State initial_cpu = {.pc=0xab2e, .a=0x14, .x=0x8c, .y=0x8d, .sp=0x0c, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xab2e, .value=0x10}, {.addr=0xab2f, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xab30, .a=0x14, .x=0x8c, .y=0x8d, .sp=0x0c, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0xab2e, .value=0x10}, {.addr=0xab2f, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xab2e, .value=0x10, .type=IO_READ},
        {.addr=0xab2f, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_019A) {
    const struct CPU_State initial_cpu = {.pc=0x2c9d, .a=0xd4, .x=0xed, .y=0x3f, .sp=0x6f, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x2c9d, .value=0x10}, {.addr=0x2c9e, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x2c89, .a=0xd4, .x=0xed, .y=0x3f, .sp=0x6f, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x2c9d, .value=0x10}, {.addr=0x2c9e, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x2c9d, .value=0x10, .type=IO_READ},
        {.addr=0x2c9e, .value=0xea, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_019B) {
    const struct CPU_State initial_cpu = {.pc=0x9736, .a=0x73, .x=0xe9, .y=0xc0, .sp=0x99, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x9736, .value=0x10}, {.addr=0x9737, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x9738, .a=0x73, .x=0xe9, .y=0xc0, .sp=0x99, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x9736, .value=0x10}, {.addr=0x9737, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x9736, .value=0x10, .type=IO_READ},
        {.addr=0x9737, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_019C) {
    const struct CPU_State initial_cpu = {.pc=0x1b90, .a=0x75, .x=0xc4, .y=0x0e, .sp=0x50, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x1b90, .value=0x10}, {.addr=0x1b91, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x1b92, .a=0x75, .x=0xc4, .y=0x0e, .sp=0x50, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x1b90, .value=0x10}, {.addr=0x1b91, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x1b90, .value=0x10, .type=IO_READ},
        {.addr=0x1b91, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_019D) {
    const struct CPU_State initial_cpu = {.pc=0xe2c7, .a=0x57, .x=0x5e, .y=0xb9, .sp=0x07, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xe2c7, .value=0x10}, {.addr=0xe2c8, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xe2c9, .a=0x57, .x=0x5e, .y=0xb9, .sp=0x07, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xe2c7, .value=0x10}, {.addr=0xe2c8, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xe2c7, .value=0x10, .type=IO_READ},
        {.addr=0xe2c8, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_019E) {
    const struct CPU_State initial_cpu = {.pc=0xab07, .a=0x35, .x=0x5d, .y=0x51, .sp=0xbb, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xab07, .value=0x10}, {.addr=0xab08, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xaaed, .a=0x35, .x=0x5d, .y=0x51, .sp=0xbb, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xab07, .value=0x10}, {.addr=0xab08, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xab07, .value=0x10, .type=IO_READ},
        {.addr=0xab08, .value=0xe4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_019F) {
    const struct CPU_State initial_cpu = {.pc=0xadcf, .a=0xee, .x=0xe4, .y=0x6e, .sp=0xe8, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xadcf, .value=0x10}, {.addr=0xadd0, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xadd1, .a=0xee, .x=0xe4, .y=0x6e, .sp=0xe8, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0xadcf, .value=0x10}, {.addr=0xadd0, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xadcf, .value=0x10, .type=IO_READ},
        {.addr=0xadd0, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x6d95, .a=0xd6, .x=0x82, .y=0xb1, .sp=0x6c, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x6d95, .value=0x10}, {.addr=0x6d96, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x6de2, .a=0xd6, .x=0x82, .y=0xb1, .sp=0x6c, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x6d95, .value=0x10}, {.addr=0x6d96, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x6d95, .value=0x10, .type=IO_READ},
        {.addr=0x6d96, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xe4ee, .a=0xb9, .x=0x1f, .y=0x7f, .sp=0x75, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xe4ee, .value=0x10}, {.addr=0xe4ef, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xe4f0, .a=0xb9, .x=0x1f, .y=0x7f, .sp=0x75, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xe4ee, .value=0x10}, {.addr=0xe4ef, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xe4ee, .value=0x10, .type=IO_READ},
        {.addr=0xe4ef, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xcb69, .a=0x73, .x=0xe9, .y=0x56, .sp=0x34, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xcb69, .value=0x10}, {.addr=0xcb6a, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xcb12, .a=0x73, .x=0xe9, .y=0x56, .sp=0x34, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0xcb69, .value=0x10}, {.addr=0xcb6a, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xcb69, .value=0x10, .type=IO_READ},
        {.addr=0xcb6a, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x96d4, .a=0x9e, .x=0xaf, .y=0x39, .sp=0x1d, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x96d4, .value=0x10}, {.addr=0x96d5, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x9720, .a=0x9e, .x=0xaf, .y=0x39, .sp=0x1d, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x96d4, .value=0x10}, {.addr=0x96d5, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x96d4, .value=0x10, .type=IO_READ},
        {.addr=0x96d5, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xbe55, .a=0x07, .x=0x71, .y=0xb2, .sp=0x99, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xbe55, .value=0x10}, {.addr=0xbe56, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xbdec, .a=0x07, .x=0x71, .y=0xb2, .sp=0x99, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xbe55, .value=0x10}, {.addr=0xbe56, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xbe55, .value=0x10, .type=IO_READ},
        {.addr=0xbe56, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xb2b6, .a=0x69, .x=0x7d, .y=0x07, .sp=0x59, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xb2b6, .value=0x10}, {.addr=0xb2b7, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0xb281, .a=0x69, .x=0x7d, .y=0x07, .sp=0x59, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xb2b6, .value=0x10}, {.addr=0xb2b7, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0xb2b6, .value=0x10, .type=IO_READ},
        {.addr=0xb2b7, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x80c8, .a=0x2d, .x=0xe5, .y=0x42, .sp=0x32, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x80c8, .value=0x10}, {.addr=0x80c9, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x80ca, .a=0x2d, .x=0xe5, .y=0x42, .sp=0x32, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x80c8, .value=0x10}, {.addr=0x80c9, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x80c8, .value=0x10, .type=IO_READ},
        {.addr=0x80c9, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xddd9, .a=0xcb, .x=0x72, .y=0x20, .sp=0x54, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xddd9, .value=0x10}, {.addr=0xddda, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xddc8, .a=0xcb, .x=0x72, .y=0x20, .sp=0x54, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xddd9, .value=0x10}, {.addr=0xddda, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xddd9, .value=0x10, .type=IO_READ},
        {.addr=0xddda, .value=0xed, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x3ca4, .a=0xa5, .x=0x55, .y=0x46, .sp=0x3b, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x3ca4, .value=0x10}, {.addr=0x3ca5, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x3d19, .a=0xa5, .x=0x55, .y=0x46, .sp=0x3b, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x3ca4, .value=0x10}, {.addr=0x3ca5, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x3ca4, .value=0x10, .type=IO_READ},
        {.addr=0x3ca5, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x9034, .a=0xa8, .x=0x57, .y=0x84, .sp=0x80, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x9034, .value=0x10}, {.addr=0x9035, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x9036, .a=0xa8, .x=0x57, .y=0x84, .sp=0x80, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x9034, .value=0x10}, {.addr=0x9035, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x9034, .value=0x10, .type=IO_READ},
        {.addr=0x9035, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01AA) {
    const struct CPU_State initial_cpu = {.pc=0xcbbd, .a=0x17, .x=0x3f, .y=0x0d, .sp=0x26, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xcbbd, .value=0x10}, {.addr=0xcbbe, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xcbbf, .a=0x17, .x=0x3f, .y=0x0d, .sp=0x26, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xcbbd, .value=0x10}, {.addr=0xcbbe, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xcbbd, .value=0x10, .type=IO_READ},
        {.addr=0xcbbe, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x982c, .a=0x4b, .x=0x66, .y=0x28, .sp=0xff, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x982c, .value=0x10}, {.addr=0x982d, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x97c7, .a=0x4b, .x=0x66, .y=0x28, .sp=0xff, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x982c, .value=0x10}, {.addr=0x982d, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x982c, .value=0x10, .type=IO_READ},
        {.addr=0x982d, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xef95, .a=0x7f, .x=0x60, .y=0x38, .sp=0xb9, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xef95, .value=0x10}, {.addr=0xef96, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xefd9, .a=0x7f, .x=0x60, .y=0x38, .sp=0xb9, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0xef95, .value=0x10}, {.addr=0xef96, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xef95, .value=0x10, .type=IO_READ},
        {.addr=0xef96, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01AD) {
    const struct CPU_State initial_cpu = {.pc=0xe867, .a=0xc8, .x=0xf4, .y=0xac, .sp=0xc7, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xe867, .value=0x10}, {.addr=0xe868, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xe824, .a=0xc8, .x=0xf4, .y=0xac, .sp=0xc7, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xe867, .value=0x10}, {.addr=0xe868, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xe867, .value=0x10, .type=IO_READ},
        {.addr=0xe868, .value=0xbb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x795d, .a=0x1c, .x=0xc3, .y=0xb6, .sp=0xa8, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x795d, .value=0x10}, {.addr=0x795e, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x7928, .a=0x1c, .x=0xc3, .y=0xb6, .sp=0xa8, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x795d, .value=0x10}, {.addr=0x795e, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x795d, .value=0x10, .type=IO_READ},
        {.addr=0x795e, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x90fe, .a=0xa6, .x=0x66, .y=0x78, .sp=0x89, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x90fe, .value=0x10}, {.addr=0x90ff, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9100, .a=0xa6, .x=0x66, .y=0x78, .sp=0x89, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x90fe, .value=0x10}, {.addr=0x90ff, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x90fe, .value=0x10, .type=IO_READ},
        {.addr=0x90ff, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x1c8e, .a=0x2c, .x=0xed, .y=0x80, .sp=0x53, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x1c8e, .value=0x10}, {.addr=0x1c8f, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x1c90, .a=0x2c, .x=0xed, .y=0x80, .sp=0x53, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x1c8e, .value=0x10}, {.addr=0x1c8f, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x1c8e, .value=0x10, .type=IO_READ},
        {.addr=0x1c8f, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xb7fe, .a=0x3e, .x=0xeb, .y=0x20, .sp=0x51, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xb7fe, .value=0x10}, {.addr=0xb7ff, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0xb864, .a=0x3e, .x=0xeb, .y=0x20, .sp=0x51, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xb7fe, .value=0x10}, {.addr=0xb7ff, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0xb7fe, .value=0x10, .type=IO_READ},
        {.addr=0xb7ff, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01B2) {
    const struct CPU_State initial_cpu = {.pc=0xa9a7, .a=0x42, .x=0x77, .y=0x80, .sp=0xc7, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xa9a7, .value=0x10}, {.addr=0xa9a8, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xa9a3, .a=0x42, .x=0x77, .y=0x80, .sp=0xc7, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xa9a7, .value=0x10}, {.addr=0xa9a8, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xa9a7, .value=0x10, .type=IO_READ},
        {.addr=0xa9a8, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x8fd0, .a=0x79, .x=0xc4, .y=0x5a, .sp=0x47, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x8fd0, .value=0x10}, {.addr=0x8fd1, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x8fd2, .a=0x79, .x=0xc4, .y=0x5a, .sp=0x47, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x8fd0, .value=0x10}, {.addr=0x8fd1, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x8fd0, .value=0x10, .type=IO_READ},
        {.addr=0x8fd1, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x0a52, .a=0xc3, .x=0xae, .y=0x63, .sp=0x47, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0a52, .value=0x10}, {.addr=0x0a53, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x0a12, .a=0xc3, .x=0xae, .y=0x63, .sp=0x47, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0a52, .value=0x10}, {.addr=0x0a53, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x0a52, .value=0x10, .type=IO_READ},
        {.addr=0x0a53, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x08fc, .a=0x97, .x=0x35, .y=0x5c, .sp=0xda, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x08fc, .value=0x10}, {.addr=0x08fd, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x094b, .a=0x97, .x=0x35, .y=0x5c, .sp=0xda, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x08fc, .value=0x10}, {.addr=0x08fd, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x08fc, .value=0x10, .type=IO_READ},
        {.addr=0x08fd, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x0dd0, .a=0x63, .x=0x63, .y=0xb4, .sp=0x65, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0dd0, .value=0x10}, {.addr=0x0dd1, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0dd2, .a=0x63, .x=0x63, .y=0xb4, .sp=0x65, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x0dd0, .value=0x10}, {.addr=0x0dd1, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0dd0, .value=0x10, .type=IO_READ},
        {.addr=0x0dd1, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xba1a, .a=0xec, .x=0xbc, .y=0x88, .sp=0x3e, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xba1a, .value=0x10}, {.addr=0xba1b, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xba24, .a=0xec, .x=0xbc, .y=0x88, .sp=0x3e, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xba1a, .value=0x10}, {.addr=0xba1b, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xba1a, .value=0x10, .type=IO_READ},
        {.addr=0xba1b, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x73db, .a=0xce, .x=0xf6, .y=0x37, .sp=0x7d, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x73db, .value=0x10}, {.addr=0x73dc, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x73dd, .a=0xce, .x=0xf6, .y=0x37, .sp=0x7d, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x73db, .value=0x10}, {.addr=0x73dc, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x73db, .value=0x10, .type=IO_READ},
        {.addr=0x73dc, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x7d2f, .a=0x85, .x=0x1b, .y=0x62, .sp=0x2f, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x7d2f, .value=0x10}, {.addr=0x7d30, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x7d18, .a=0x85, .x=0x1b, .y=0x62, .sp=0x2f, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x7d2f, .value=0x10}, {.addr=0x7d30, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x7d2f, .value=0x10, .type=IO_READ},
        {.addr=0x7d30, .value=0xe7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01BA) {
    const struct CPU_State initial_cpu = {.pc=0xf30e, .a=0x52, .x=0x82, .y=0xb8, .sp=0x63, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xf30e, .value=0x10}, {.addr=0xf30f, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xf2d2, .a=0x52, .x=0x82, .y=0xb8, .sp=0x63, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xf30e, .value=0x10}, {.addr=0xf30f, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xf30e, .value=0x10, .type=IO_READ},
        {.addr=0xf30f, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x92ed, .a=0xe5, .x=0x92, .y=0x1c, .sp=0xc5, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x92ed, .value=0x10}, {.addr=0x92ee, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x92ef, .a=0xe5, .x=0x92, .y=0x1c, .sp=0xc5, .status=0xb3};
    const struct RamEntry final_ram[] = {{.addr=0x92ed, .value=0x10}, {.addr=0x92ee, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x92ed, .value=0x10, .type=IO_READ},
        {.addr=0x92ee, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x88c4, .a=0xa4, .x=0x23, .y=0x7c, .sp=0x5c, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x88c4, .value=0x10}, {.addr=0x88c5, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x88cc, .a=0xa4, .x=0x23, .y=0x7c, .sp=0x5c, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x88c4, .value=0x10}, {.addr=0x88c5, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x88c4, .value=0x10, .type=IO_READ},
        {.addr=0x88c5, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01BD) {
    const struct CPU_State initial_cpu = {.pc=0xcf18, .a=0x7f, .x=0x6a, .y=0x15, .sp=0x23, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0xcf18, .value=0x10}, {.addr=0xcf19, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xcec4, .a=0x7f, .x=0x6a, .y=0x15, .sp=0x23, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0xcf18, .value=0x10}, {.addr=0xcf19, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xcf18, .value=0x10, .type=IO_READ},
        {.addr=0xcf19, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x0ab9, .a=0xb8, .x=0xb4, .y=0xb0, .sp=0xaf, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x0ab9, .value=0x10}, {.addr=0x0aba, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x0abb, .a=0xb8, .x=0xb4, .y=0xb0, .sp=0xaf, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x0ab9, .value=0x10}, {.addr=0x0aba, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x0ab9, .value=0x10, .type=IO_READ},
        {.addr=0x0aba, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x3805, .a=0x35, .x=0x44, .y=0xaa, .sp=0x11, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x3805, .value=0x10}, {.addr=0x3806, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x3867, .a=0x35, .x=0x44, .y=0xaa, .sp=0x11, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x3805, .value=0x10}, {.addr=0x3806, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x3805, .value=0x10, .type=IO_READ},
        {.addr=0x3806, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x1a0f, .a=0xa8, .x=0x32, .y=0x06, .sp=0xb8, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x1a0f, .value=0x10}, {.addr=0x1a10, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x19c7, .a=0xa8, .x=0x32, .y=0x06, .sp=0xb8, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x1a0f, .value=0x10}, {.addr=0x1a10, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x1a0f, .value=0x10, .type=IO_READ},
        {.addr=0x1a10, .value=0xb6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x03e6, .a=0x97, .x=0x30, .y=0xb4, .sp=0x44, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x03e6, .value=0x10}, {.addr=0x03e7, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x03e8, .a=0x97, .x=0x30, .y=0xb4, .sp=0x44, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x03e6, .value=0x10}, {.addr=0x03e7, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x03e6, .value=0x10, .type=IO_READ},
        {.addr=0x03e7, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01C2) {
    const struct CPU_State initial_cpu = {.pc=0xa8a7, .a=0x23, .x=0x6d, .y=0x17, .sp=0x64, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xa8a7, .value=0x10}, {.addr=0xa8a8, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xa8a9, .a=0x23, .x=0x6d, .y=0x17, .sp=0x64, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xa8a7, .value=0x10}, {.addr=0xa8a8, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xa8a7, .value=0x10, .type=IO_READ},
        {.addr=0xa8a8, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x03ca, .a=0xf7, .x=0xb5, .y=0x34, .sp=0x3c, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x03ca, .value=0x10}, {.addr=0x03cb, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x03cc, .a=0xf7, .x=0xb5, .y=0x34, .sp=0x3c, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x03ca, .value=0x10}, {.addr=0x03cb, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x03ca, .value=0x10, .type=IO_READ},
        {.addr=0x03cb, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x2138, .a=0x6e, .x=0xb3, .y=0x99, .sp=0xe0, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x2138, .value=0x10}, {.addr=0x2139, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x218c, .a=0x6e, .x=0xb3, .y=0x99, .sp=0xe0, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x2138, .value=0x10}, {.addr=0x2139, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x2138, .value=0x10, .type=IO_READ},
        {.addr=0x2139, .value=0x52, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x354a, .a=0xea, .x=0x17, .y=0x6d, .sp=0x5c, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x354a, .value=0x10}, {.addr=0x354b, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x3573, .a=0xea, .x=0x17, .y=0x6d, .sp=0x5c, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x354a, .value=0x10}, {.addr=0x354b, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x354a, .value=0x10, .type=IO_READ},
        {.addr=0x354b, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x8e22, .a=0xb9, .x=0xc9, .y=0x40, .sp=0x3a, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x8e22, .value=0x10}, {.addr=0x8e23, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x8df8, .a=0xb9, .x=0xc9, .y=0x40, .sp=0x3a, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x8e22, .value=0x10}, {.addr=0x8e23, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x8e22, .value=0x10, .type=IO_READ},
        {.addr=0x8e23, .value=0xd4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x0e7b, .a=0xf0, .x=0x28, .y=0x09, .sp=0x1b, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0e7b, .value=0x10}, {.addr=0x0e7c, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x0ec7, .a=0xf0, .x=0x28, .y=0x09, .sp=0x1b, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0e7b, .value=0x10}, {.addr=0x0e7c, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x0e7b, .value=0x10, .type=IO_READ},
        {.addr=0x0e7c, .value=0x4a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x805f, .a=0x4d, .x=0xb9, .y=0xe0, .sp=0x55, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x805f, .value=0x10}, {.addr=0x8060, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x802e, .a=0x4d, .x=0xb9, .y=0xe0, .sp=0x55, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x805f, .value=0x10}, {.addr=0x8060, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x805f, .value=0x10, .type=IO_READ},
        {.addr=0x8060, .value=0xcd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x0b39, .a=0xe2, .x=0x2d, .y=0x5b, .sp=0x8f, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0b39, .value=0x10}, {.addr=0x0b3a, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x0b6a, .a=0xe2, .x=0x2d, .y=0x5b, .sp=0x8f, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x0b39, .value=0x10}, {.addr=0x0b3a, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x0b39, .value=0x10, .type=IO_READ},
        {.addr=0x0b3a, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xf569, .a=0xb7, .x=0x29, .y=0xdc, .sp=0x33, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xf569, .value=0x10}, {.addr=0xf56a, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xf56b, .a=0xb7, .x=0x29, .y=0xdc, .sp=0x33, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xf569, .value=0x10}, {.addr=0xf56a, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xf569, .value=0x10, .type=IO_READ},
        {.addr=0xf56a, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x6a77, .a=0xc1, .x=0x13, .y=0xd9, .sp=0x1d, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x6a77, .value=0x10}, {.addr=0x6a78, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x6ac9, .a=0xc1, .x=0x13, .y=0xd9, .sp=0x1d, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x6a77, .value=0x10}, {.addr=0x6a78, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x6a77, .value=0x10, .type=IO_READ},
        {.addr=0x6a78, .value=0x50, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x4c70, .a=0x70, .x=0xc6, .y=0x18, .sp=0x80, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x4c70, .value=0x10}, {.addr=0x4c71, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x4c72, .a=0x70, .x=0xc6, .y=0x18, .sp=0x80, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x4c70, .value=0x10}, {.addr=0x4c71, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x4c70, .value=0x10, .type=IO_READ},
        {.addr=0x4c71, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x1659, .a=0xc6, .x=0xb3, .y=0xdd, .sp=0x5f, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x1659, .value=0x10}, {.addr=0x165a, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x1647, .a=0xc6, .x=0xb3, .y=0xdd, .sp=0x5f, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x1659, .value=0x10}, {.addr=0x165a, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x1659, .value=0x10, .type=IO_READ},
        {.addr=0x165a, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xf54e, .a=0x21, .x=0x72, .y=0xda, .sp=0x16, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xf54e, .value=0x10}, {.addr=0xf54f, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xf5a4, .a=0x21, .x=0x72, .y=0xda, .sp=0x16, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0xf54e, .value=0x10}, {.addr=0xf54f, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xf54e, .value=0x10, .type=IO_READ},
        {.addr=0xf54f, .value=0x54, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x0d6f, .a=0x91, .x=0x6a, .y=0x51, .sp=0xb2, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0d6f, .value=0x10}, {.addr=0x0d70, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x0d71, .a=0x91, .x=0x6a, .y=0x51, .sp=0xb2, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x0d6f, .value=0x10}, {.addr=0x0d70, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x0d6f, .value=0x10, .type=IO_READ},
        {.addr=0x0d70, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xcd05, .a=0x02, .x=0xc6, .y=0x77, .sp=0x16, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xcd05, .value=0x10}, {.addr=0xcd06, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xcc9b, .a=0x02, .x=0xc6, .y=0x77, .sp=0x16, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0xcd05, .value=0x10}, {.addr=0xcd06, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xcd05, .value=0x10, .type=IO_READ},
        {.addr=0xcd06, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01D1) {
    const struct CPU_State initial_cpu = {.pc=0xbdcf, .a=0xf6, .x=0xef, .y=0x82, .sp=0xda, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xbdcf, .value=0x10}, {.addr=0xbdd0, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xbd7f, .a=0xf6, .x=0xef, .y=0x82, .sp=0xda, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0xbdcf, .value=0x10}, {.addr=0xbdd0, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xbdcf, .value=0x10, .type=IO_READ},
        {.addr=0xbdd0, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x7322, .a=0xdf, .x=0x97, .y=0x64, .sp=0x0a, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x7322, .value=0x10}, {.addr=0x7323, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x733f, .a=0xdf, .x=0x97, .y=0x64, .sp=0x0a, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x7322, .value=0x10}, {.addr=0x7323, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x7322, .value=0x10, .type=IO_READ},
        {.addr=0x7323, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x648b, .a=0xaa, .x=0x50, .y=0xe6, .sp=0x6e, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x648b, .value=0x10}, {.addr=0x648c, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x6482, .a=0xaa, .x=0x50, .y=0xe6, .sp=0x6e, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x648b, .value=0x10}, {.addr=0x648c, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x648b, .value=0x10, .type=IO_READ},
        {.addr=0x648c, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x189f, .a=0xd6, .x=0x17, .y=0xfe, .sp=0x05, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x189f, .value=0x10}, {.addr=0x18a0, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x1841, .a=0xd6, .x=0x17, .y=0xfe, .sp=0x05, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x189f, .value=0x10}, {.addr=0x18a0, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x189f, .value=0x10, .type=IO_READ},
        {.addr=0x18a0, .value=0xa0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xd7f6, .a=0xfd, .x=0xe3, .y=0xbe, .sp=0xb0, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xd7f6, .value=0x10}, {.addr=0xd7f7, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xd839, .a=0xfd, .x=0xe3, .y=0xbe, .sp=0xb0, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xd7f6, .value=0x10}, {.addr=0xd7f7, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xd7f6, .value=0x10, .type=IO_READ},
        {.addr=0xd7f7, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x3761, .a=0x7b, .x=0xf7, .y=0xeb, .sp=0xd9, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x3761, .value=0x10}, {.addr=0x3762, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x379d, .a=0x7b, .x=0xf7, .y=0xeb, .sp=0xd9, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x3761, .value=0x10}, {.addr=0x3762, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x3761, .value=0x10, .type=IO_READ},
        {.addr=0x3762, .value=0x3a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01D7) {
    const struct CPU_State initial_cpu = {.pc=0xc7c6, .a=0xdc, .x=0x71, .y=0x44, .sp=0xf6, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xc7c6, .value=0x10}, {.addr=0xc7c7, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0xc7a1, .a=0xdc, .x=0x71, .y=0x44, .sp=0xf6, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0xc7c6, .value=0x10}, {.addr=0xc7c7, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0xc7c6, .value=0x10, .type=IO_READ},
        {.addr=0xc7c7, .value=0xd9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xdf6f, .a=0x6e, .x=0x88, .y=0x09, .sp=0xb9, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xdf6f, .value=0x10}, {.addr=0xdf70, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xdf6e, .a=0x6e, .x=0x88, .y=0x09, .sp=0xb9, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xdf6f, .value=0x10}, {.addr=0xdf70, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xdf6f, .value=0x10, .type=IO_READ},
        {.addr=0xdf70, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x2778, .a=0x0b, .x=0x1a, .y=0x0c, .sp=0x87, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x2778, .value=0x10}, {.addr=0x2779, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x277a, .a=0x0b, .x=0x1a, .y=0x0c, .sp=0x87, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x2778, .value=0x10}, {.addr=0x2779, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x2778, .value=0x10, .type=IO_READ},
        {.addr=0x2779, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x6e6d, .a=0xde, .x=0xa1, .y=0xd6, .sp=0xcd, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x6e6d, .value=0x10}, {.addr=0x6e6e, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0x6e6f, .a=0xde, .x=0xa1, .y=0xd6, .sp=0xcd, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x6e6d, .value=0x10}, {.addr=0x6e6e, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0x6e6d, .value=0x10, .type=IO_READ},
        {.addr=0x6e6e, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x1325, .a=0x88, .x=0xf9, .y=0x58, .sp=0x0d, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x1325, .value=0x10}, {.addr=0x1326, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1327, .a=0x88, .x=0xf9, .y=0x58, .sp=0x0d, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x1325, .value=0x10}, {.addr=0x1326, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1325, .value=0x10, .type=IO_READ},
        {.addr=0x1326, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x947d, .a=0x7f, .x=0x82, .y=0xec, .sp=0xc1, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x947d, .value=0x10}, {.addr=0x947e, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x947f, .a=0x7f, .x=0x82, .y=0xec, .sp=0xc1, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x947d, .value=0x10}, {.addr=0x947e, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x947d, .value=0x10, .type=IO_READ},
        {.addr=0x947e, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x17b8, .a=0xf6, .x=0x8c, .y=0x30, .sp=0xa7, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x17b8, .value=0x10}, {.addr=0x17b9, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x1837, .a=0xf6, .x=0x8c, .y=0x30, .sp=0xa7, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x17b8, .value=0x10}, {.addr=0x17b9, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x17b8, .value=0x10, .type=IO_READ},
        {.addr=0x17b9, .value=0x7d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x32fb, .a=0x35, .x=0xf9, .y=0x15, .sp=0x10, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x32fb, .value=0x10}, {.addr=0x32fc, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x32fd, .a=0x35, .x=0xf9, .y=0x15, .sp=0x10, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x32fb, .value=0x10}, {.addr=0x32fc, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x32fb, .value=0x10, .type=IO_READ},
        {.addr=0x32fc, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xb6c2, .a=0xd7, .x=0x37, .y=0x4f, .sp=0x61, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xb6c2, .value=0x10}, {.addr=0xb6c3, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xb6ba, .a=0xd7, .x=0x37, .y=0x4f, .sp=0x61, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xb6c2, .value=0x10}, {.addr=0xb6c3, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xb6c2, .value=0x10, .type=IO_READ},
        {.addr=0xb6c3, .value=0xf6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x6e61, .a=0x3a, .x=0x64, .y=0xf8, .sp=0x66, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x6e61, .value=0x10}, {.addr=0x6e62, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x6e63, .a=0x3a, .x=0x64, .y=0xf8, .sp=0x66, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x6e61, .value=0x10}, {.addr=0x6e62, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x6e61, .value=0x10, .type=IO_READ},
        {.addr=0x6e62, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xdac1, .a=0xd5, .x=0x95, .y=0xba, .sp=0x3a, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0xdac1, .value=0x10}, {.addr=0xdac2, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xdae5, .a=0xd5, .x=0x95, .y=0xba, .sp=0x3a, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0xdac1, .value=0x10}, {.addr=0xdac2, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xdac1, .value=0x10, .type=IO_READ},
        {.addr=0xdac2, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x6f0c, .a=0x40, .x=0x4c, .y=0xd7, .sp=0x20, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x6f0c, .value=0x10}, {.addr=0x6f0d, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x6f0e, .a=0x40, .x=0x4c, .y=0xd7, .sp=0x20, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x6f0c, .value=0x10}, {.addr=0x6f0d, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x6f0c, .value=0x10, .type=IO_READ},
        {.addr=0x6f0d, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01E3) {
    const struct CPU_State initial_cpu = {.pc=0x097a, .a=0x7a, .x=0x06, .y=0x8a, .sp=0x66, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x097a, .value=0x10}, {.addr=0x097b, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x09e0, .a=0x7a, .x=0x06, .y=0x8a, .sp=0x66, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x097a, .value=0x10}, {.addr=0x097b, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x097a, .value=0x10, .type=IO_READ},
        {.addr=0x097b, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x1e4a, .a=0x29, .x=0x30, .y=0x93, .sp=0xbf, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x1e4a, .value=0x10}, {.addr=0x1e4b, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x1dfe, .a=0x29, .x=0x30, .y=0x93, .sp=0xbf, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x1e4a, .value=0x10}, {.addr=0x1e4b, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x1e4a, .value=0x10, .type=IO_READ},
        {.addr=0x1e4b, .value=0xb2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x1efc, .a=0xff, .x=0x32, .y=0x9e, .sp=0x0d, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x1efc, .value=0x10}, {.addr=0x1efd, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x1ea5, .a=0xff, .x=0x32, .y=0x9e, .sp=0x0d, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x1efc, .value=0x10}, {.addr=0x1efd, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x1efc, .value=0x10, .type=IO_READ},
        {.addr=0x1efd, .value=0xa7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x42b2, .a=0xc4, .x=0x82, .y=0xc1, .sp=0x46, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x42b2, .value=0x10}, {.addr=0x42b3, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x42b4, .a=0xc4, .x=0x82, .y=0xc1, .sp=0x46, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x42b2, .value=0x10}, {.addr=0x42b3, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x42b2, .value=0x10, .type=IO_READ},
        {.addr=0x42b3, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x5cc1, .a=0xc9, .x=0x19, .y=0xff, .sp=0x40, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x5cc1, .value=0x10}, {.addr=0x5cc2, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x5cc3, .a=0xc9, .x=0x19, .y=0xff, .sp=0x40, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x5cc1, .value=0x10}, {.addr=0x5cc2, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x5cc1, .value=0x10, .type=IO_READ},
        {.addr=0x5cc2, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x4670, .a=0x2f, .x=0xe7, .y=0x25, .sp=0x53, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x4670, .value=0x10}, {.addr=0x4671, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x4635, .a=0x2f, .x=0xe7, .y=0x25, .sp=0x53, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x4670, .value=0x10}, {.addr=0x4671, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x4670, .value=0x10, .type=IO_READ},
        {.addr=0x4671, .value=0xc3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x39e6, .a=0xc9, .x=0x5d, .y=0x10, .sp=0x92, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x39e6, .value=0x10}, {.addr=0x39e7, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x39e8, .a=0xc9, .x=0x5d, .y=0x10, .sp=0x92, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x39e6, .value=0x10}, {.addr=0x39e7, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x39e6, .value=0x10, .type=IO_READ},
        {.addr=0x39e7, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01EA) {
    const struct CPU_State initial_cpu = {.pc=0xe5ed, .a=0xcd, .x=0x14, .y=0xc1, .sp=0x1b, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xe5ed, .value=0x10}, {.addr=0xe5ee, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xe5ef, .a=0xcd, .x=0x14, .y=0xc1, .sp=0x1b, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xe5ed, .value=0x10}, {.addr=0xe5ee, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xe5ed, .value=0x10, .type=IO_READ},
        {.addr=0xe5ee, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xae79, .a=0x49, .x=0x3e, .y=0x7c, .sp=0xf9, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xae79, .value=0x10}, {.addr=0xae7a, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xae7b, .a=0x49, .x=0x3e, .y=0x7c, .sp=0xf9, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xae79, .value=0x10}, {.addr=0xae7a, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xae79, .value=0x10, .type=IO_READ},
        {.addr=0xae7a, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01EC) {
    const struct CPU_State initial_cpu = {.pc=0x3477, .a=0x81, .x=0xda, .y=0xf0, .sp=0x7c, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x3477, .value=0x10}, {.addr=0x3478, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x3499, .a=0x81, .x=0xda, .y=0xf0, .sp=0x7c, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x3477, .value=0x10}, {.addr=0x3478, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x3477, .value=0x10, .type=IO_READ},
        {.addr=0x3478, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01ED) {
    const struct CPU_State initial_cpu = {.pc=0xdf4c, .a=0x91, .x=0x1b, .y=0xb5, .sp=0xa3, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xdf4c, .value=0x10}, {.addr=0xdf4d, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xdf4e, .a=0x91, .x=0x1b, .y=0xb5, .sp=0xa3, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xdf4c, .value=0x10}, {.addr=0xdf4d, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xdf4c, .value=0x10, .type=IO_READ},
        {.addr=0xdf4d, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xae0d, .a=0xd8, .x=0x05, .y=0x46, .sp=0xac, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xae0d, .value=0x10}, {.addr=0xae0e, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xae0f, .a=0xd8, .x=0x05, .y=0x46, .sp=0xac, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xae0d, .value=0x10}, {.addr=0xae0e, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xae0d, .value=0x10, .type=IO_READ},
        {.addr=0xae0e, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xe7f3, .a=0x3c, .x=0x5f, .y=0xc4, .sp=0xe2, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xe7f3, .value=0x10}, {.addr=0xe7f4, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xe7ef, .a=0x3c, .x=0x5f, .y=0xc4, .sp=0xe2, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xe7f3, .value=0x10}, {.addr=0xe7f4, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xe7f3, .value=0x10, .type=IO_READ},
        {.addr=0xe7f4, .value=0xfa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xfb15, .a=0x23, .x=0xf8, .y=0xfb, .sp=0x62, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xfb15, .value=0x10}, {.addr=0xfb16, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0xfad0, .a=0x23, .x=0xf8, .y=0xfb, .sp=0x62, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0xfb15, .value=0x10}, {.addr=0xfb16, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0xfb15, .value=0x10, .type=IO_READ},
        {.addr=0xfb16, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x80f1, .a=0xd7, .x=0x99, .y=0xe5, .sp=0x49, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x80f1, .value=0x10}, {.addr=0x80f2, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x80fd, .a=0xd7, .x=0x99, .y=0xe5, .sp=0x49, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x80f1, .value=0x10}, {.addr=0x80f2, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x80f1, .value=0x10, .type=IO_READ},
        {.addr=0x80f2, .value=0x0a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01F2) {
    const struct CPU_State initial_cpu = {.pc=0x42c8, .a=0xa2, .x=0xd8, .y=0x8d, .sp=0x64, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x42c8, .value=0x10}, {.addr=0x42c9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4317, .a=0xa2, .x=0xd8, .y=0x8d, .sp=0x64, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x42c8, .value=0x10}, {.addr=0x42c9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x42c8, .value=0x10, .type=IO_READ},
        {.addr=0x42c9, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x31c7, .a=0x58, .x=0x64, .y=0x3b, .sp=0xbf, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x31c7, .value=0x10}, {.addr=0x31c8, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x31c9, .a=0x58, .x=0x64, .y=0x3b, .sp=0xbf, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x31c7, .value=0x10}, {.addr=0x31c8, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x31c7, .value=0x10, .type=IO_READ},
        {.addr=0x31c8, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x5502, .a=0x6a, .x=0x3e, .y=0xc8, .sp=0x3a, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x5502, .value=0x10}, {.addr=0x5503, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x5526, .a=0x6a, .x=0x3e, .y=0xc8, .sp=0x3a, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x5502, .value=0x10}, {.addr=0x5503, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x5502, .value=0x10, .type=IO_READ},
        {.addr=0x5503, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xa938, .a=0x26, .x=0xac, .y=0x4e, .sp=0x51, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xa938, .value=0x10}, {.addr=0xa939, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xa945, .a=0x26, .x=0xac, .y=0x4e, .sp=0x51, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xa938, .value=0x10}, {.addr=0xa939, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xa938, .value=0x10, .type=IO_READ},
        {.addr=0xa939, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x600f, .a=0x3f, .x=0x51, .y=0x48, .sp=0x2b, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x600f, .value=0x10}, {.addr=0x6010, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x6011, .a=0x3f, .x=0x51, .y=0x48, .sp=0x2b, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x600f, .value=0x10}, {.addr=0x6010, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x600f, .value=0x10, .type=IO_READ},
        {.addr=0x6010, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x55ab, .a=0x73, .x=0xc5, .y=0xfb, .sp=0xd8, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x55ab, .value=0x10}, {.addr=0x55ac, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x5628, .a=0x73, .x=0xc5, .y=0xfb, .sp=0xd8, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x55ab, .value=0x10}, {.addr=0x55ac, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x55ab, .value=0x10, .type=IO_READ},
        {.addr=0x55ac, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xc1bd, .a=0x68, .x=0x9f, .y=0x3d, .sp=0xe6, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xc1bd, .value=0x10}, {.addr=0xc1be, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0xc1c5, .a=0x68, .x=0x9f, .y=0x3d, .sp=0xe6, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xc1bd, .value=0x10}, {.addr=0xc1be, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0xc1bd, .value=0x10, .type=IO_READ},
        {.addr=0xc1be, .value=0x06, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x82c4, .a=0x9d, .x=0x42, .y=0x3e, .sp=0xce, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x82c4, .value=0x10}, {.addr=0x82c5, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x82f6, .a=0x9d, .x=0x42, .y=0x3e, .sp=0xce, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x82c4, .value=0x10}, {.addr=0x82c5, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x82c4, .value=0x10, .type=IO_READ},
        {.addr=0x82c5, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x4d82, .a=0xd7, .x=0x7b, .y=0xa4, .sp=0xe3, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x4d82, .value=0x10}, {.addr=0x4d83, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x4d67, .a=0xd7, .x=0x7b, .y=0xa4, .sp=0xe3, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x4d82, .value=0x10}, {.addr=0x4d83, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x4d82, .value=0x10, .type=IO_READ},
        {.addr=0x4d83, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x8092, .a=0x59, .x=0xbe, .y=0x0e, .sp=0xed, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x8092, .value=0x10}, {.addr=0x8093, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x8094, .a=0x59, .x=0xbe, .y=0x0e, .sp=0xed, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x8092, .value=0x10}, {.addr=0x8093, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x8092, .value=0x10, .type=IO_READ},
        {.addr=0x8093, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x823e, .a=0xed, .x=0x2d, .y=0x51, .sp=0xf3, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x823e, .value=0x10}, {.addr=0x823f, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x826c, .a=0xed, .x=0x2d, .y=0x51, .sp=0xf3, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x823e, .value=0x10}, {.addr=0x823f, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x823e, .value=0x10, .type=IO_READ},
        {.addr=0x823f, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x099d, .a=0xf6, .x=0xbf, .y=0x3c, .sp=0xe1, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x099d, .value=0x10}, {.addr=0x099e, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x099f, .a=0xf6, .x=0xbf, .y=0x3c, .sp=0xe1, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x099d, .value=0x10}, {.addr=0x099e, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x099d, .value=0x10, .type=IO_READ},
        {.addr=0x099e, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x4b97, .a=0xd5, .x=0x00, .y=0xf7, .sp=0x1f, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x4b97, .value=0x10}, {.addr=0x4b98, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x4b3b, .a=0xd5, .x=0x00, .y=0xf7, .sp=0x1f, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x4b97, .value=0x10}, {.addr=0x4b98, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x4b97, .value=0x10, .type=IO_READ},
        {.addr=0x4b98, .value=0xa2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x10e3, .a=0x47, .x=0xb9, .y=0x85, .sp=0x51, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x10e3, .value=0x10}, {.addr=0x10e4, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x10d6, .a=0x47, .x=0xb9, .y=0x85, .sp=0x51, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x10e3, .value=0x10}, {.addr=0x10e4, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x10e3, .value=0x10, .type=IO_READ},
        {.addr=0x10e4, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0200) {
    const struct CPU_State initial_cpu = {.pc=0x2829, .a=0xbd, .x=0x51, .y=0x9c, .sp=0xb2, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x2829, .value=0x10}, {.addr=0x282a, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x288f, .a=0xbd, .x=0x51, .y=0x9c, .sp=0xb2, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x2829, .value=0x10}, {.addr=0x282a, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x2829, .value=0x10, .type=IO_READ},
        {.addr=0x282a, .value=0x64, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0201) {
    const struct CPU_State initial_cpu = {.pc=0x7ae0, .a=0x3d, .x=0x82, .y=0xe2, .sp=0x72, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x7ae0, .value=0x10}, {.addr=0x7ae1, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x7ae2, .a=0x3d, .x=0x82, .y=0xe2, .sp=0x72, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x7ae0, .value=0x10}, {.addr=0x7ae1, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x7ae0, .value=0x10, .type=IO_READ},
        {.addr=0x7ae1, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0202) {
    const struct CPU_State initial_cpu = {.pc=0xd4c8, .a=0x73, .x=0x83, .y=0xb3, .sp=0xb9, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xd4c8, .value=0x10}, {.addr=0xd4c9, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xd4ca, .a=0x73, .x=0x83, .y=0xb3, .sp=0xb9, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xd4c8, .value=0x10}, {.addr=0xd4c9, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xd4c8, .value=0x10, .type=IO_READ},
        {.addr=0xd4c9, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0203) {
    const struct CPU_State initial_cpu = {.pc=0xc9b5, .a=0xc0, .x=0x5c, .y=0x76, .sp=0x12, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xc9b5, .value=0x10}, {.addr=0xc9b6, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xc9b7, .a=0xc0, .x=0x5c, .y=0x76, .sp=0x12, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xc9b5, .value=0x10}, {.addr=0xc9b6, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xc9b5, .value=0x10, .type=IO_READ},
        {.addr=0xc9b6, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0204) {
    const struct CPU_State initial_cpu = {.pc=0x2f29, .a=0xe4, .x=0x1f, .y=0xa2, .sp=0x48, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x2f29, .value=0x10}, {.addr=0x2f2a, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x2f2b, .a=0xe4, .x=0x1f, .y=0xa2, .sp=0x48, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x2f29, .value=0x10}, {.addr=0x2f2a, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x2f29, .value=0x10, .type=IO_READ},
        {.addr=0x2f2a, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0205) {
    const struct CPU_State initial_cpu = {.pc=0xb31f, .a=0x86, .x=0x2f, .y=0x7f, .sp=0x53, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xb31f, .value=0x10}, {.addr=0xb320, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xb354, .a=0x86, .x=0x2f, .y=0x7f, .sp=0x53, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0xb31f, .value=0x10}, {.addr=0xb320, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xb31f, .value=0x10, .type=IO_READ},
        {.addr=0xb320, .value=0x33, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0206) {
    const struct CPU_State initial_cpu = {.pc=0x7285, .a=0x56, .x=0x72, .y=0x21, .sp=0xaa, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x7285, .value=0x10}, {.addr=0x7286, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x722d, .a=0x56, .x=0x72, .y=0x21, .sp=0xaa, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x7285, .value=0x10}, {.addr=0x7286, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x7285, .value=0x10, .type=IO_READ},
        {.addr=0x7286, .value=0xa6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0207) {
    const struct CPU_State initial_cpu = {.pc=0x268d, .a=0x8f, .x=0xf7, .y=0xc5, .sp=0x82, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x268d, .value=0x10}, {.addr=0x268e, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x268f, .a=0x8f, .x=0xf7, .y=0xc5, .sp=0x82, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x268d, .value=0x10}, {.addr=0x268e, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x268d, .value=0x10, .type=IO_READ},
        {.addr=0x268e, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0208) {
    const struct CPU_State initial_cpu = {.pc=0x9be5, .a=0x1f, .x=0x8f, .y=0x25, .sp=0xed, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x9be5, .value=0x10}, {.addr=0x9be6, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x9c2a, .a=0x1f, .x=0x8f, .y=0x25, .sp=0xed, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x9be5, .value=0x10}, {.addr=0x9be6, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x9be5, .value=0x10, .type=IO_READ},
        {.addr=0x9be6, .value=0x43, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0209) {
    const struct CPU_State initial_cpu = {.pc=0x27ea, .a=0x07, .x=0xfd, .y=0xe0, .sp=0x42, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x27ea, .value=0x10}, {.addr=0x27eb, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x27b5, .a=0x07, .x=0xfd, .y=0xe0, .sp=0x42, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x27ea, .value=0x10}, {.addr=0x27eb, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x27ea, .value=0x10, .type=IO_READ},
        {.addr=0x27eb, .value=0xc9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_020A) {
    const struct CPU_State initial_cpu = {.pc=0x5437, .a=0x8a, .x=0x90, .y=0x65, .sp=0x25, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x5437, .value=0x10}, {.addr=0x5438, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x5439, .a=0x8a, .x=0x90, .y=0x65, .sp=0x25, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x5437, .value=0x10}, {.addr=0x5438, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x5437, .value=0x10, .type=IO_READ},
        {.addr=0x5438, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_020B) {
    const struct CPU_State initial_cpu = {.pc=0xb910, .a=0xb7, .x=0x13, .y=0x47, .sp=0x89, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xb910, .value=0x10}, {.addr=0xb911, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xb912, .a=0xb7, .x=0x13, .y=0x47, .sp=0x89, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xb910, .value=0x10}, {.addr=0xb911, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xb910, .value=0x10, .type=IO_READ},
        {.addr=0xb911, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_020C) {
    const struct CPU_State initial_cpu = {.pc=0xf71b, .a=0xb3, .x=0xd3, .y=0x09, .sp=0x0d, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xf71b, .value=0x10}, {.addr=0xf71c, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xf6b6, .a=0xb3, .x=0xd3, .y=0x09, .sp=0x0d, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xf71b, .value=0x10}, {.addr=0xf71c, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xf71b, .value=0x10, .type=IO_READ},
        {.addr=0xf71c, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_020D) {
    const struct CPU_State initial_cpu = {.pc=0x413a, .a=0xf8, .x=0x1f, .y=0xd9, .sp=0x22, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x413a, .value=0x10}, {.addr=0x413b, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x410c, .a=0xf8, .x=0x1f, .y=0xd9, .sp=0x22, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x413a, .value=0x10}, {.addr=0x413b, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x413a, .value=0x10, .type=IO_READ},
        {.addr=0x413b, .value=0xd0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_020E) {
    const struct CPU_State initial_cpu = {.pc=0x6eb4, .a=0xb7, .x=0xe8, .y=0xea, .sp=0x25, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x6eb4, .value=0x10}, {.addr=0x6eb5, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x6f29, .a=0xb7, .x=0xe8, .y=0xea, .sp=0x25, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x6eb4, .value=0x10}, {.addr=0x6eb5, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x6eb4, .value=0x10, .type=IO_READ},
        {.addr=0x6eb5, .value=0x73, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_020F) {
    const struct CPU_State initial_cpu = {.pc=0xaebc, .a=0x5e, .x=0xe8, .y=0xef, .sp=0x3b, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0xaebc, .value=0x10}, {.addr=0xaebd, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0xaecc, .a=0x5e, .x=0xe8, .y=0xef, .sp=0x3b, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xaebc, .value=0x10}, {.addr=0xaebd, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0xaebc, .value=0x10, .type=IO_READ},
        {.addr=0xaebd, .value=0x0e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0210) {
    const struct CPU_State initial_cpu = {.pc=0x7e44, .a=0xc1, .x=0x43, .y=0xa5, .sp=0x48, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x7e44, .value=0x10}, {.addr=0x7e45, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x7e46, .a=0xc1, .x=0x43, .y=0xa5, .sp=0x48, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x7e44, .value=0x10}, {.addr=0x7e45, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x7e44, .value=0x10, .type=IO_READ},
        {.addr=0x7e45, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0211) {
    const struct CPU_State initial_cpu = {.pc=0x1466, .a=0x06, .x=0x94, .y=0xeb, .sp=0x90, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x1466, .value=0x10}, {.addr=0x1467, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x1468, .a=0x06, .x=0x94, .y=0xeb, .sp=0x90, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x1466, .value=0x10}, {.addr=0x1467, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x1466, .value=0x10, .type=IO_READ},
        {.addr=0x1467, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0212) {
    const struct CPU_State initial_cpu = {.pc=0x472f, .a=0xf8, .x=0x3a, .y=0x7e, .sp=0x6c, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x472f, .value=0x10}, {.addr=0x4730, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x4731, .a=0xf8, .x=0x3a, .y=0x7e, .sp=0x6c, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x472f, .value=0x10}, {.addr=0x4730, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x472f, .value=0x10, .type=IO_READ},
        {.addr=0x4730, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0213) {
    const struct CPU_State initial_cpu = {.pc=0x6be4, .a=0x0e, .x=0x46, .y=0x28, .sp=0xf6, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x6be4, .value=0x10}, {.addr=0x6be5, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x6b90, .a=0x0e, .x=0x46, .y=0x28, .sp=0xf6, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x6be4, .value=0x10}, {.addr=0x6be5, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x6be4, .value=0x10, .type=IO_READ},
        {.addr=0x6be5, .value=0xaa, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0214) {
    const struct CPU_State initial_cpu = {.pc=0xf08e, .a=0x81, .x=0x9b, .y=0x25, .sp=0xb5, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xf08e, .value=0x10}, {.addr=0xf08f, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xf090, .a=0x81, .x=0x9b, .y=0x25, .sp=0xb5, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0xf08e, .value=0x10}, {.addr=0xf08f, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xf08e, .value=0x10, .type=IO_READ},
        {.addr=0xf08f, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0215) {
    const struct CPU_State initial_cpu = {.pc=0xbaca, .a=0xee, .x=0x7a, .y=0x86, .sp=0xf8, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0xbaca, .value=0x10}, {.addr=0xbacb, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xbacc, .a=0xee, .x=0x7a, .y=0x86, .sp=0xf8, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0xbaca, .value=0x10}, {.addr=0xbacb, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xbaca, .value=0x10, .type=IO_READ},
        {.addr=0xbacb, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0216) {
    const struct CPU_State initial_cpu = {.pc=0xc381, .a=0xe7, .x=0xcf, .y=0xf5, .sp=0xe1, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xc381, .value=0x10}, {.addr=0xc382, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xc383, .a=0xe7, .x=0xcf, .y=0xf5, .sp=0xe1, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0xc381, .value=0x10}, {.addr=0xc382, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xc381, .value=0x10, .type=IO_READ},
        {.addr=0xc382, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0217) {
    const struct CPU_State initial_cpu = {.pc=0xf92a, .a=0xa2, .x=0xd4, .y=0x7c, .sp=0xdc, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xf92a, .value=0x10}, {.addr=0xf92b, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf92c, .a=0xa2, .x=0xd4, .y=0x7c, .sp=0xdc, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xf92a, .value=0x10}, {.addr=0xf92b, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf92a, .value=0x10, .type=IO_READ},
        {.addr=0xf92b, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0218) {
    const struct CPU_State initial_cpu = {.pc=0x3cf6, .a=0x46, .x=0x11, .y=0xf3, .sp=0x38, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x3cf6, .value=0x10}, {.addr=0x3cf7, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3cde, .a=0x46, .x=0x11, .y=0xf3, .sp=0x38, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x3cf6, .value=0x10}, {.addr=0x3cf7, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3cf6, .value=0x10, .type=IO_READ},
        {.addr=0x3cf7, .value=0xe6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0219) {
    const struct CPU_State initial_cpu = {.pc=0xdef9, .a=0xd0, .x=0xfd, .y=0xad, .sp=0xae, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xdef9, .value=0x10}, {.addr=0xdefa, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xdf50, .a=0xd0, .x=0xfd, .y=0xad, .sp=0xae, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xdef9, .value=0x10}, {.addr=0xdefa, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xdef9, .value=0x10, .type=IO_READ},
        {.addr=0xdefa, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_021A) {
    const struct CPU_State initial_cpu = {.pc=0xc286, .a=0xe8, .x=0x90, .y=0x3f, .sp=0x74, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xc286, .value=0x10}, {.addr=0xc287, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xc278, .a=0xe8, .x=0x90, .y=0x3f, .sp=0x74, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0xc286, .value=0x10}, {.addr=0xc287, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xc286, .value=0x10, .type=IO_READ},
        {.addr=0xc287, .value=0xf0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_021B) {
    const struct CPU_State initial_cpu = {.pc=0x9152, .a=0x9e, .x=0xf2, .y=0xa1, .sp=0x14, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x9152, .value=0x10}, {.addr=0x9153, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x918c, .a=0x9e, .x=0xf2, .y=0xa1, .sp=0x14, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x9152, .value=0x10}, {.addr=0x9153, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x9152, .value=0x10, .type=IO_READ},
        {.addr=0x9153, .value=0x38, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_021C) {
    const struct CPU_State initial_cpu = {.pc=0x4aa8, .a=0x62, .x=0x4a, .y=0x4e, .sp=0x9a, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x4aa8, .value=0x10}, {.addr=0x4aa9, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x4a63, .a=0x62, .x=0x4a, .y=0x4e, .sp=0x9a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x4aa8, .value=0x10}, {.addr=0x4aa9, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x4aa8, .value=0x10, .type=IO_READ},
        {.addr=0x4aa9, .value=0xb9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_021D) {
    const struct CPU_State initial_cpu = {.pc=0x3637, .a=0xd3, .x=0xb6, .y=0x24, .sp=0x43, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x3637, .value=0x10}, {.addr=0x3638, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x3639, .a=0xd3, .x=0xb6, .y=0x24, .sp=0x43, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x3637, .value=0x10}, {.addr=0x3638, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x3637, .value=0x10, .type=IO_READ},
        {.addr=0x3638, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_021E) {
    const struct CPU_State initial_cpu = {.pc=0x8343, .a=0x93, .x=0x55, .y=0x87, .sp=0xde, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x8343, .value=0x10}, {.addr=0x8344, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x8345, .a=0x93, .x=0x55, .y=0x87, .sp=0xde, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x8343, .value=0x10}, {.addr=0x8344, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x8343, .value=0x10, .type=IO_READ},
        {.addr=0x8344, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_021F) {
    const struct CPU_State initial_cpu = {.pc=0xb553, .a=0xf5, .x=0xd9, .y=0x4c, .sp=0xf1, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xb553, .value=0x10}, {.addr=0xb554, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb5a2, .a=0xf5, .x=0xd9, .y=0x4c, .sp=0xf1, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0xb553, .value=0x10}, {.addr=0xb554, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb553, .value=0x10, .type=IO_READ},
        {.addr=0xb554, .value=0x4d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0220) {
    const struct CPU_State initial_cpu = {.pc=0x14d6, .a=0xeb, .x=0x13, .y=0x7e, .sp=0x4a, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x14d6, .value=0x10}, {.addr=0x14d7, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x14d8, .a=0xeb, .x=0x13, .y=0x7e, .sp=0x4a, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x14d6, .value=0x10}, {.addr=0x14d7, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x14d6, .value=0x10, .type=IO_READ},
        {.addr=0x14d7, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0221) {
    const struct CPU_State initial_cpu = {.pc=0x7ec5, .a=0xa7, .x=0xfb, .y=0x84, .sp=0xe5, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x7ec5, .value=0x10}, {.addr=0x7ec6, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x7ec7, .a=0xa7, .x=0xfb, .y=0x84, .sp=0xe5, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x7ec5, .value=0x10}, {.addr=0x7ec6, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x7ec5, .value=0x10, .type=IO_READ},
        {.addr=0x7ec6, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0222) {
    const struct CPU_State initial_cpu = {.pc=0x7e2d, .a=0x83, .x=0xf1, .y=0xf7, .sp=0x6d, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x7e2d, .value=0x10}, {.addr=0x7e2e, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x7e04, .a=0x83, .x=0xf1, .y=0xf7, .sp=0x6d, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x7e2d, .value=0x10}, {.addr=0x7e2e, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x7e2d, .value=0x10, .type=IO_READ},
        {.addr=0x7e2e, .value=0xd5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0223) {
    const struct CPU_State initial_cpu = {.pc=0xdd34, .a=0x91, .x=0x13, .y=0xfc, .sp=0x2f, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xdd34, .value=0x10}, {.addr=0xdd35, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xdccb, .a=0x91, .x=0x13, .y=0xfc, .sp=0x2f, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0xdd34, .value=0x10}, {.addr=0xdd35, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xdd34, .value=0x10, .type=IO_READ},
        {.addr=0xdd35, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0224) {
    const struct CPU_State initial_cpu = {.pc=0x7d78, .a=0xe7, .x=0x09, .y=0xff, .sp=0x13, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x7d78, .value=0x10}, {.addr=0x7d79, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x7d7a, .a=0xe7, .x=0x09, .y=0xff, .sp=0x13, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x7d78, .value=0x10}, {.addr=0x7d79, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x7d78, .value=0x10, .type=IO_READ},
        {.addr=0x7d79, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0225) {
    const struct CPU_State initial_cpu = {.pc=0xb76a, .a=0x6c, .x=0x90, .y=0xd9, .sp=0x55, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xb76a, .value=0x10}, {.addr=0xb76b, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xb74f, .a=0x6c, .x=0x90, .y=0xd9, .sp=0x55, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0xb76a, .value=0x10}, {.addr=0xb76b, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xb76a, .value=0x10, .type=IO_READ},
        {.addr=0xb76b, .value=0xe3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0226) {
    const struct CPU_State initial_cpu = {.pc=0x52db, .a=0x20, .x=0x96, .y=0x10, .sp=0x17, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x52db, .value=0x10}, {.addr=0x52dc, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x52df, .a=0x20, .x=0x96, .y=0x10, .sp=0x17, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x52db, .value=0x10}, {.addr=0x52dc, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x52db, .value=0x10, .type=IO_READ},
        {.addr=0x52dc, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0227) {
    const struct CPU_State initial_cpu = {.pc=0xe72e, .a=0x0d, .x=0x78, .y=0x92, .sp=0xf0, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xe72e, .value=0x10}, {.addr=0xe72f, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xe730, .a=0x0d, .x=0x78, .y=0x92, .sp=0xf0, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0xe72e, .value=0x10}, {.addr=0xe72f, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xe72e, .value=0x10, .type=IO_READ},
        {.addr=0xe72f, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0228) {
    const struct CPU_State initial_cpu = {.pc=0x8fe8, .a=0x30, .x=0xa2, .y=0xfc, .sp=0xdf, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x8fe8, .value=0x10}, {.addr=0x8fe9, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x8fea, .a=0x30, .x=0xa2, .y=0xfc, .sp=0xdf, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x8fe8, .value=0x10}, {.addr=0x8fe9, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x8fe8, .value=0x10, .type=IO_READ},
        {.addr=0x8fe9, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0229) {
    const struct CPU_State initial_cpu = {.pc=0x8250, .a=0xbd, .x=0x25, .y=0x99, .sp=0x75, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x8250, .value=0x10}, {.addr=0x8251, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8252, .a=0xbd, .x=0x25, .y=0x99, .sp=0x75, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x8250, .value=0x10}, {.addr=0x8251, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8250, .value=0x10, .type=IO_READ},
        {.addr=0x8251, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_022A) {
    const struct CPU_State initial_cpu = {.pc=0xac2c, .a=0x9c, .x=0xfb, .y=0x69, .sp=0xd4, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0xac2c, .value=0x10}, {.addr=0xac2d, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xac2e, .a=0x9c, .x=0xfb, .y=0x69, .sp=0xd4, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0xac2c, .value=0x10}, {.addr=0xac2d, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xac2c, .value=0x10, .type=IO_READ},
        {.addr=0xac2d, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_022B) {
    const struct CPU_State initial_cpu = {.pc=0x3076, .a=0x09, .x=0xc8, .y=0x7a, .sp=0xdd, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x3076, .value=0x10}, {.addr=0x3077, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x3046, .a=0x09, .x=0xc8, .y=0x7a, .sp=0xdd, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3076, .value=0x10}, {.addr=0x3077, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x3076, .value=0x10, .type=IO_READ},
        {.addr=0x3077, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_022C) {
    const struct CPU_State initial_cpu = {.pc=0xb979, .a=0xce, .x=0xee, .y=0x60, .sp=0xd6, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xb979, .value=0x10}, {.addr=0xb97a, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xb919, .a=0xce, .x=0xee, .y=0x60, .sp=0xd6, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xb979, .value=0x10}, {.addr=0xb97a, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xb979, .value=0x10, .type=IO_READ},
        {.addr=0xb97a, .value=0x9e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_022D) {
    const struct CPU_State initial_cpu = {.pc=0x90ed, .a=0xd7, .x=0xf3, .y=0x0c, .sp=0x14, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x90ed, .value=0x10}, {.addr=0x90ee, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x9131, .a=0xd7, .x=0xf3, .y=0x0c, .sp=0x14, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x90ed, .value=0x10}, {.addr=0x90ee, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x90ed, .value=0x10, .type=IO_READ},
        {.addr=0x90ee, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_022E) {
    const struct CPU_State initial_cpu = {.pc=0xbcf5, .a=0x68, .x=0x8c, .y=0x5e, .sp=0xbe, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0xbcf5, .value=0x10}, {.addr=0xbcf6, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xbd03, .a=0x68, .x=0x8c, .y=0x5e, .sp=0xbe, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0xbcf5, .value=0x10}, {.addr=0xbcf6, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xbcf5, .value=0x10, .type=IO_READ},
        {.addr=0xbcf6, .value=0x0c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_022F) {
    const struct CPU_State initial_cpu = {.pc=0xa533, .a=0x70, .x=0x79, .y=0x75, .sp=0x12, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xa533, .value=0x10}, {.addr=0xa534, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xa5af, .a=0x70, .x=0x79, .y=0x75, .sp=0x12, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xa533, .value=0x10}, {.addr=0xa534, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xa533, .value=0x10, .type=IO_READ},
        {.addr=0xa534, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0230) {
    const struct CPU_State initial_cpu = {.pc=0x3b27, .a=0x4c, .x=0x72, .y=0xde, .sp=0x15, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x3b27, .value=0x10}, {.addr=0x3b28, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x3b29, .a=0x4c, .x=0x72, .y=0xde, .sp=0x15, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x3b27, .value=0x10}, {.addr=0x3b28, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x3b27, .value=0x10, .type=IO_READ},
        {.addr=0x3b28, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0231) {
    const struct CPU_State initial_cpu = {.pc=0x2c30, .a=0x69, .x=0x71, .y=0x04, .sp=0x36, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x2c30, .value=0x10}, {.addr=0x2c31, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x2c32, .a=0x69, .x=0x71, .y=0x04, .sp=0x36, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x2c30, .value=0x10}, {.addr=0x2c31, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x2c30, .value=0x10, .type=IO_READ},
        {.addr=0x2c31, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0232) {
    const struct CPU_State initial_cpu = {.pc=0xeda1, .a=0x1b, .x=0xfa, .y=0x6e, .sp=0x1e, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0xeda1, .value=0x10}, {.addr=0xeda2, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xedb4, .a=0x1b, .x=0xfa, .y=0x6e, .sp=0x1e, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0xeda1, .value=0x10}, {.addr=0xeda2, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xeda1, .value=0x10, .type=IO_READ},
        {.addr=0xeda2, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0233) {
    const struct CPU_State initial_cpu = {.pc=0xf128, .a=0xb0, .x=0x90, .y=0x0d, .sp=0x66, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xf128, .value=0x10}, {.addr=0xf129, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xf11b, .a=0xb0, .x=0x90, .y=0x0d, .sp=0x66, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xf128, .value=0x10}, {.addr=0xf129, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xf128, .value=0x10, .type=IO_READ},
        {.addr=0xf129, .value=0xf1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0234) {
    const struct CPU_State initial_cpu = {.pc=0x544d, .a=0x49, .x=0x32, .y=0x21, .sp=0xc1, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x544d, .value=0x10}, {.addr=0x544e, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x544f, .a=0x49, .x=0x32, .y=0x21, .sp=0xc1, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x544d, .value=0x10}, {.addr=0x544e, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x544d, .value=0x10, .type=IO_READ},
        {.addr=0x544e, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0235) {
    const struct CPU_State initial_cpu = {.pc=0x8f63, .a=0xe0, .x=0x5a, .y=0x84, .sp=0xa3, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x8f63, .value=0x10}, {.addr=0x8f64, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x8f9c, .a=0xe0, .x=0x5a, .y=0x84, .sp=0xa3, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x8f63, .value=0x10}, {.addr=0x8f64, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x8f63, .value=0x10, .type=IO_READ},
        {.addr=0x8f64, .value=0x37, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0236) {
    const struct CPU_State initial_cpu = {.pc=0x3977, .a=0x62, .x=0xcc, .y=0x68, .sp=0x45, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x3977, .value=0x10}, {.addr=0x3978, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x3979, .a=0x62, .x=0xcc, .y=0x68, .sp=0x45, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x3977, .value=0x10}, {.addr=0x3978, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x3977, .value=0x10, .type=IO_READ},
        {.addr=0x3978, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0237) {
    const struct CPU_State initial_cpu = {.pc=0x3383, .a=0x11, .x=0x58, .y=0xdc, .sp=0xe0, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x3383, .value=0x10}, {.addr=0x3384, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x3385, .a=0x11, .x=0x58, .y=0xdc, .sp=0xe0, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x3383, .value=0x10}, {.addr=0x3384, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x3383, .value=0x10, .type=IO_READ},
        {.addr=0x3384, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0238) {
    const struct CPU_State initial_cpu = {.pc=0xae71, .a=0x57, .x=0x72, .y=0x6c, .sp=0xe5, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xae71, .value=0x10}, {.addr=0xae72, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xae73, .a=0x57, .x=0x72, .y=0x6c, .sp=0xe5, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xae71, .value=0x10}, {.addr=0xae72, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xae71, .value=0x10, .type=IO_READ},
        {.addr=0xae72, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0239) {
    const struct CPU_State initial_cpu = {.pc=0xd02d, .a=0x76, .x=0x75, .y=0xac, .sp=0x84, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xd02d, .value=0x10}, {.addr=0xd02e, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xd034, .a=0x76, .x=0x75, .y=0xac, .sp=0x84, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xd02d, .value=0x10}, {.addr=0xd02e, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xd02d, .value=0x10, .type=IO_READ},
        {.addr=0xd02e, .value=0x05, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_023A) {
    const struct CPU_State initial_cpu = {.pc=0x8b20, .a=0x05, .x=0xe6, .y=0x1c, .sp=0x63, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x8b20, .value=0x10}, {.addr=0x8b21, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x8aed, .a=0x05, .x=0xe6, .y=0x1c, .sp=0x63, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x8b20, .value=0x10}, {.addr=0x8b21, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x8b20, .value=0x10, .type=IO_READ},
        {.addr=0x8b21, .value=0xcb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_023B) {
    const struct CPU_State initial_cpu = {.pc=0x7c5f, .a=0x4c, .x=0x21, .y=0x19, .sp=0xde, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x7c5f, .value=0x10}, {.addr=0x7c60, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x7c61, .a=0x4c, .x=0x21, .y=0x19, .sp=0xde, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x7c5f, .value=0x10}, {.addr=0x7c60, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x7c5f, .value=0x10, .type=IO_READ},
        {.addr=0x7c60, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_023C) {
    const struct CPU_State initial_cpu = {.pc=0xac0f, .a=0x47, .x=0xc4, .y=0x98, .sp=0x40, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xac0f, .value=0x10}, {.addr=0xac10, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xac22, .a=0x47, .x=0xc4, .y=0x98, .sp=0x40, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xac0f, .value=0x10}, {.addr=0xac10, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xac0f, .value=0x10, .type=IO_READ},
        {.addr=0xac10, .value=0x11, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_023D) {
    const struct CPU_State initial_cpu = {.pc=0x22c5, .a=0xab, .x=0x6f, .y=0x7d, .sp=0xd2, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x22c5, .value=0x10}, {.addr=0x22c6, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x22c7, .a=0xab, .x=0x6f, .y=0x7d, .sp=0xd2, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x22c5, .value=0x10}, {.addr=0x22c6, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x22c5, .value=0x10, .type=IO_READ},
        {.addr=0x22c6, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_023E) {
    const struct CPU_State initial_cpu = {.pc=0x99d5, .a=0x5d, .x=0x11, .y=0x55, .sp=0xb8, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x99d5, .value=0x10}, {.addr=0x99d6, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x99d7, .a=0x5d, .x=0x11, .y=0x55, .sp=0xb8, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x99d5, .value=0x10}, {.addr=0x99d6, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x99d5, .value=0x10, .type=IO_READ},
        {.addr=0x99d6, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_023F) {
    const struct CPU_State initial_cpu = {.pc=0xa3af, .a=0x67, .x=0x92, .y=0x62, .sp=0x6e, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xa3af, .value=0x10}, {.addr=0xa3b0, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa3ee, .a=0x67, .x=0x92, .y=0x62, .sp=0x6e, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xa3af, .value=0x10}, {.addr=0xa3b0, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa3af, .value=0x10, .type=IO_READ},
        {.addr=0xa3b0, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0240) {
    const struct CPU_State initial_cpu = {.pc=0x4cf6, .a=0xd2, .x=0xa6, .y=0x45, .sp=0x00, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x4cf6, .value=0x10}, {.addr=0x4cf7, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x4cf8, .a=0xd2, .x=0xa6, .y=0x45, .sp=0x00, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x4cf6, .value=0x10}, {.addr=0x4cf7, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x4cf6, .value=0x10, .type=IO_READ},
        {.addr=0x4cf7, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0241) {
    const struct CPU_State initial_cpu = {.pc=0x4ba7, .a=0x19, .x=0xcd, .y=0x08, .sp=0x28, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x4ba7, .value=0x10}, {.addr=0x4ba8, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x4ba9, .a=0x19, .x=0xcd, .y=0x08, .sp=0x28, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x4ba7, .value=0x10}, {.addr=0x4ba8, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x4ba7, .value=0x10, .type=IO_READ},
        {.addr=0x4ba8, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0242) {
    const struct CPU_State initial_cpu = {.pc=0x0a8f, .a=0xac, .x=0x2a, .y=0x02, .sp=0x7b, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0a8f, .value=0x10}, {.addr=0x0a90, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x0ac5, .a=0xac, .x=0x2a, .y=0x02, .sp=0x7b, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0a8f, .value=0x10}, {.addr=0x0a90, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x0a8f, .value=0x10, .type=IO_READ},
        {.addr=0x0a90, .value=0x34, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0243) {
    const struct CPU_State initial_cpu = {.pc=0xa667, .a=0x70, .x=0xa0, .y=0xda, .sp=0xd7, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xa667, .value=0x10}, {.addr=0xa668, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xa669, .a=0x70, .x=0xa0, .y=0xda, .sp=0xd7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xa667, .value=0x10}, {.addr=0xa668, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xa667, .value=0x10, .type=IO_READ},
        {.addr=0xa668, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0244) {
    const struct CPU_State initial_cpu = {.pc=0x0331, .a=0x44, .x=0x16, .y=0x23, .sp=0xe9, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0331, .value=0x10}, {.addr=0x0332, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x0333, .a=0x44, .x=0x16, .y=0x23, .sp=0xe9, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0331, .value=0x10}, {.addr=0x0332, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x0331, .value=0x10, .type=IO_READ},
        {.addr=0x0332, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0245) {
    const struct CPU_State initial_cpu = {.pc=0x19d0, .a=0xf8, .x=0xe3, .y=0x89, .sp=0xae, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x19d0, .value=0x10}, {.addr=0x19d1, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x1a4a, .a=0xf8, .x=0xe3, .y=0x89, .sp=0xae, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x19d0, .value=0x10}, {.addr=0x19d1, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x19d0, .value=0x10, .type=IO_READ},
        {.addr=0x19d1, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0246) {
    const struct CPU_State initial_cpu = {.pc=0x87eb, .a=0xd3, .x=0x25, .y=0x8a, .sp=0x26, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x87eb, .value=0x10}, {.addr=0x87ec, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x8772, .a=0xd3, .x=0x25, .y=0x8a, .sp=0x26, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x87eb, .value=0x10}, {.addr=0x87ec, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x87eb, .value=0x10, .type=IO_READ},
        {.addr=0x87ec, .value=0x85, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0247) {
    const struct CPU_State initial_cpu = {.pc=0xb7e8, .a=0xcd, .x=0x0f, .y=0x5e, .sp=0x92, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xb7e8, .value=0x10}, {.addr=0xb7e9, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0xb7ea, .a=0xcd, .x=0x0f, .y=0x5e, .sp=0x92, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xb7e8, .value=0x10}, {.addr=0xb7e9, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0xb7e8, .value=0x10, .type=IO_READ},
        {.addr=0xb7e9, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0248) {
    const struct CPU_State initial_cpu = {.pc=0x6322, .a=0xe4, .x=0x89, .y=0xd5, .sp=0xef, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x6322, .value=0x10}, {.addr=0x6323, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x6324, .a=0xe4, .x=0x89, .y=0xd5, .sp=0xef, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x6322, .value=0x10}, {.addr=0x6323, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x6322, .value=0x10, .type=IO_READ},
        {.addr=0x6323, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0249) {
    const struct CPU_State initial_cpu = {.pc=0x8491, .a=0x96, .x=0xdc, .y=0x50, .sp=0xf5, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x8491, .value=0x10}, {.addr=0x8492, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x8493, .a=0x96, .x=0xdc, .y=0x50, .sp=0xf5, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x8491, .value=0x10}, {.addr=0x8492, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x8491, .value=0x10, .type=IO_READ},
        {.addr=0x8492, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_024A) {
    const struct CPU_State initial_cpu = {.pc=0xcae7, .a=0x47, .x=0x73, .y=0x9e, .sp=0x17, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xcae7, .value=0x10}, {.addr=0xcae8, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xcb38, .a=0x47, .x=0x73, .y=0x9e, .sp=0x17, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xcae7, .value=0x10}, {.addr=0xcae8, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xcae7, .value=0x10, .type=IO_READ},
        {.addr=0xcae8, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_024B) {
    const struct CPU_State initial_cpu = {.pc=0x699c, .a=0xf7, .x=0xc2, .y=0xe5, .sp=0xc6, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x699c, .value=0x10}, {.addr=0x699d, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x691f, .a=0xf7, .x=0xc2, .y=0xe5, .sp=0xc6, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x699c, .value=0x10}, {.addr=0x699d, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x699c, .value=0x10, .type=IO_READ},
        {.addr=0x699d, .value=0x81, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_024C) {
    const struct CPU_State initial_cpu = {.pc=0xd06b, .a=0x7c, .x=0x7f, .y=0xa2, .sp=0xbe, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xd06b, .value=0x10}, {.addr=0xd06c, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xd06d, .a=0x7c, .x=0x7f, .y=0xa2, .sp=0xbe, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xd06b, .value=0x10}, {.addr=0xd06c, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xd06b, .value=0x10, .type=IO_READ},
        {.addr=0xd06c, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_024D) {
    const struct CPU_State initial_cpu = {.pc=0xd7f6, .a=0x09, .x=0x36, .y=0xf8, .sp=0x53, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xd7f6, .value=0x10}, {.addr=0xd7f7, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xd7f8, .a=0x09, .x=0x36, .y=0xf8, .sp=0x53, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0xd7f6, .value=0x10}, {.addr=0xd7f7, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xd7f6, .value=0x10, .type=IO_READ},
        {.addr=0xd7f7, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_024E) {
    const struct CPU_State initial_cpu = {.pc=0x2b6e, .a=0xcb, .x=0x29, .y=0xdc, .sp=0xab, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x2b6e, .value=0x10}, {.addr=0x2b6f, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x2bc5, .a=0xcb, .x=0x29, .y=0xdc, .sp=0xab, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x2b6e, .value=0x10}, {.addr=0x2b6f, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x2b6e, .value=0x10, .type=IO_READ},
        {.addr=0x2b6f, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_024F) {
    const struct CPU_State initial_cpu = {.pc=0x9e59, .a=0xab, .x=0xc1, .y=0x91, .sp=0xbd, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x9e59, .value=0x10}, {.addr=0x9e5a, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x9e5b, .a=0xab, .x=0xc1, .y=0x91, .sp=0xbd, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x9e59, .value=0x10}, {.addr=0x9e5a, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x9e59, .value=0x10, .type=IO_READ},
        {.addr=0x9e5a, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0250) {
    const struct CPU_State initial_cpu = {.pc=0x8178, .a=0xea, .x=0x12, .y=0x7d, .sp=0x03, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x8178, .value=0x10}, {.addr=0x8179, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x819b, .a=0xea, .x=0x12, .y=0x7d, .sp=0x03, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x8178, .value=0x10}, {.addr=0x8179, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x8178, .value=0x10, .type=IO_READ},
        {.addr=0x8179, .value=0x21, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0251) {
    const struct CPU_State initial_cpu = {.pc=0xf708, .a=0x18, .x=0xe6, .y=0xb8, .sp=0xf1, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xf708, .value=0x10}, {.addr=0xf709, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xf70a, .a=0x18, .x=0xe6, .y=0xb8, .sp=0xf1, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xf708, .value=0x10}, {.addr=0xf709, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xf708, .value=0x10, .type=IO_READ},
        {.addr=0xf709, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0252) {
    const struct CPU_State initial_cpu = {.pc=0xce23, .a=0x40, .x=0x10, .y=0xe8, .sp=0x29, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xce23, .value=0x10}, {.addr=0xce24, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0xcda7, .a=0x40, .x=0x10, .y=0xe8, .sp=0x29, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0xce23, .value=0x10}, {.addr=0xce24, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0xce23, .value=0x10, .type=IO_READ},
        {.addr=0xce24, .value=0x82, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0253) {
    const struct CPU_State initial_cpu = {.pc=0xd5c8, .a=0x36, .x=0xf1, .y=0xee, .sp=0x3a, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xd5c8, .value=0x10}, {.addr=0xd5c9, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xd5ca, .a=0x36, .x=0xf1, .y=0xee, .sp=0x3a, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xd5c8, .value=0x10}, {.addr=0xd5c9, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xd5c8, .value=0x10, .type=IO_READ},
        {.addr=0xd5c9, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0254) {
    const struct CPU_State initial_cpu = {.pc=0xfaa6, .a=0x07, .x=0x23, .y=0xce, .sp=0xf1, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xfaa6, .value=0x10}, {.addr=0xfaa7, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xfac5, .a=0x07, .x=0x23, .y=0xce, .sp=0xf1, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xfaa6, .value=0x10}, {.addr=0xfaa7, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xfaa6, .value=0x10, .type=IO_READ},
        {.addr=0xfaa7, .value=0x1d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0255) {
    const struct CPU_State initial_cpu = {.pc=0xd1f2, .a=0xb8, .x=0x87, .y=0xa7, .sp=0xcd, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xd1f2, .value=0x10}, {.addr=0xd1f3, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xd1d4, .a=0xb8, .x=0x87, .y=0xa7, .sp=0xcd, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xd1f2, .value=0x10}, {.addr=0xd1f3, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xd1f2, .value=0x10, .type=IO_READ},
        {.addr=0xd1f3, .value=0xe0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0256) {
    const struct CPU_State initial_cpu = {.pc=0x87a1, .a=0x17, .x=0x30, .y=0xcb, .sp=0x71, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x87a1, .value=0x10}, {.addr=0x87a2, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x879a, .a=0x17, .x=0x30, .y=0xcb, .sp=0x71, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x87a1, .value=0x10}, {.addr=0x87a2, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x87a1, .value=0x10, .type=IO_READ},
        {.addr=0x87a2, .value=0xf7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0257) {
    const struct CPU_State initial_cpu = {.pc=0xf4eb, .a=0x25, .x=0x58, .y=0xbf, .sp=0xdc, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xf4eb, .value=0x10}, {.addr=0xf4ec, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xf553, .a=0x25, .x=0x58, .y=0xbf, .sp=0xdc, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0xf4eb, .value=0x10}, {.addr=0xf4ec, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xf4eb, .value=0x10, .type=IO_READ},
        {.addr=0xf4ec, .value=0x66, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0258) {
    const struct CPU_State initial_cpu = {.pc=0x17ad, .a=0x17, .x=0x26, .y=0x91, .sp=0x68, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x17ad, .value=0x10}, {.addr=0x17ae, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x17af, .a=0x17, .x=0x26, .y=0x91, .sp=0x68, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x17ad, .value=0x10}, {.addr=0x17ae, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x17ad, .value=0x10, .type=IO_READ},
        {.addr=0x17ae, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0259) {
    const struct CPU_State initial_cpu = {.pc=0x17e7, .a=0x1e, .x=0x20, .y=0xbd, .sp=0x6d, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x17e7, .value=0x10}, {.addr=0x17e8, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x1848, .a=0x1e, .x=0x20, .y=0xbd, .sp=0x6d, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x17e7, .value=0x10}, {.addr=0x17e8, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x17e7, .value=0x10, .type=IO_READ},
        {.addr=0x17e8, .value=0x5f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_025A) {
    const struct CPU_State initial_cpu = {.pc=0x0be3, .a=0xaa, .x=0x10, .y=0x18, .sp=0x5a, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0be3, .value=0x10}, {.addr=0x0be4, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x0bbd, .a=0xaa, .x=0x10, .y=0x18, .sp=0x5a, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x0be3, .value=0x10}, {.addr=0x0be4, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x0be3, .value=0x10, .type=IO_READ},
        {.addr=0x0be4, .value=0xd8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_025B) {
    const struct CPU_State initial_cpu = {.pc=0xd775, .a=0xaa, .x=0xab, .y=0xd8, .sp=0x51, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0xd775, .value=0x10}, {.addr=0xd776, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xd777, .a=0xaa, .x=0xab, .y=0xd8, .sp=0x51, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xd775, .value=0x10}, {.addr=0xd776, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xd775, .value=0x10, .type=IO_READ},
        {.addr=0xd776, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_025C) {
    const struct CPU_State initial_cpu = {.pc=0x9fad, .a=0xbd, .x=0x49, .y=0xa5, .sp=0x69, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x9fad, .value=0x10}, {.addr=0x9fae, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x9faf, .a=0xbd, .x=0x49, .y=0xa5, .sp=0x69, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x9fad, .value=0x10}, {.addr=0x9fae, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x9fad, .value=0x10, .type=IO_READ},
        {.addr=0x9fae, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_025D) {
    const struct CPU_State initial_cpu = {.pc=0xc9c3, .a=0xd5, .x=0xb6, .y=0x7a, .sp=0x01, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xc9c3, .value=0x10}, {.addr=0xc9c4, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xc9c5, .a=0xd5, .x=0xb6, .y=0x7a, .sp=0x01, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xc9c3, .value=0x10}, {.addr=0xc9c4, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xc9c3, .value=0x10, .type=IO_READ},
        {.addr=0xc9c4, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_025E) {
    const struct CPU_State initial_cpu = {.pc=0xb962, .a=0x8d, .x=0x83, .y=0x3f, .sp=0x7f, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xb962, .value=0x10}, {.addr=0xb963, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xb964, .a=0x8d, .x=0x83, .y=0x3f, .sp=0x7f, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xb962, .value=0x10}, {.addr=0xb963, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xb962, .value=0x10, .type=IO_READ},
        {.addr=0xb963, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_025F) {
    const struct CPU_State initial_cpu = {.pc=0x62c5, .a=0xc6, .x=0x89, .y=0xa7, .sp=0x31, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x62c5, .value=0x10}, {.addr=0x62c6, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x62c7, .a=0xc6, .x=0x89, .y=0xa7, .sp=0x31, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x62c5, .value=0x10}, {.addr=0x62c6, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x62c5, .value=0x10, .type=IO_READ},
        {.addr=0x62c6, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0260) {
    const struct CPU_State initial_cpu = {.pc=0x6771, .a=0x88, .x=0x4d, .y=0x04, .sp=0x83, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x6771, .value=0x10}, {.addr=0x6772, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x6772, .a=0x88, .x=0x4d, .y=0x04, .sp=0x83, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x6771, .value=0x10}, {.addr=0x6772, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x6771, .value=0x10, .type=IO_READ},
        {.addr=0x6772, .value=0xff, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0261) {
    const struct CPU_State initial_cpu = {.pc=0xff7a, .a=0x64, .x=0x2b, .y=0xc3, .sp=0x2b, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xff7a, .value=0x10}, {.addr=0xff7b, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xff7c, .a=0x64, .x=0x2b, .y=0xc3, .sp=0x2b, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xff7a, .value=0x10}, {.addr=0xff7b, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xff7a, .value=0x10, .type=IO_READ},
        {.addr=0xff7b, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0262) {
    const struct CPU_State initial_cpu = {.pc=0x5aff, .a=0x3c, .x=0xac, .y=0xd2, .sp=0x96, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x5aff, .value=0x10}, {.addr=0x5b00, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x5b01, .a=0x3c, .x=0xac, .y=0xd2, .sp=0x96, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x5aff, .value=0x10}, {.addr=0x5b00, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x5aff, .value=0x10, .type=IO_READ},
        {.addr=0x5b00, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0263) {
    const struct CPU_State initial_cpu = {.pc=0x432b, .a=0x27, .x=0xdc, .y=0x2d, .sp=0x37, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x432b, .value=0x10}, {.addr=0x432c, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x432d, .a=0x27, .x=0xdc, .y=0x2d, .sp=0x37, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x432b, .value=0x10}, {.addr=0x432c, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x432b, .value=0x10, .type=IO_READ},
        {.addr=0x432c, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0264) {
    const struct CPU_State initial_cpu = {.pc=0x631a, .a=0x2d, .x=0xaa, .y=0x0d, .sp=0x53, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x631a, .value=0x10}, {.addr=0x631b, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x631c, .a=0x2d, .x=0xaa, .y=0x0d, .sp=0x53, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x631a, .value=0x10}, {.addr=0x631b, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x631a, .value=0x10, .type=IO_READ},
        {.addr=0x631b, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0265) {
    const struct CPU_State initial_cpu = {.pc=0x0c60, .a=0x05, .x=0xef, .y=0x73, .sp=0x8c, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0c60, .value=0x10}, {.addr=0x0c61, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x0cd1, .a=0x05, .x=0xef, .y=0x73, .sp=0x8c, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0c60, .value=0x10}, {.addr=0x0c61, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x0c60, .value=0x10, .type=IO_READ},
        {.addr=0x0c61, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0266) {
    const struct CPU_State initial_cpu = {.pc=0xeeee, .a=0xa7, .x=0x48, .y=0x29, .sp=0x9a, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xeeee, .value=0x10}, {.addr=0xeeef, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0xeef0, .a=0xa7, .x=0x48, .y=0x29, .sp=0x9a, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xeeee, .value=0x10}, {.addr=0xeeef, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0xeeee, .value=0x10, .type=IO_READ},
        {.addr=0xeeef, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0267) {
    const struct CPU_State initial_cpu = {.pc=0xc430, .a=0x26, .x=0x01, .y=0xb2, .sp=0xef, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xc430, .value=0x10}, {.addr=0xc431, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0xc405, .a=0x26, .x=0x01, .y=0xb2, .sp=0xef, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xc430, .value=0x10}, {.addr=0xc431, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0xc430, .value=0x10, .type=IO_READ},
        {.addr=0xc431, .value=0xd3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0268) {
    const struct CPU_State initial_cpu = {.pc=0xdb6f, .a=0x69, .x=0x14, .y=0xc1, .sp=0x4c, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xdb6f, .value=0x10}, {.addr=0xdb70, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xdb1f, .a=0x69, .x=0x14, .y=0xc1, .sp=0x4c, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0xdb6f, .value=0x10}, {.addr=0xdb70, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xdb6f, .value=0x10, .type=IO_READ},
        {.addr=0xdb70, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0269) {
    const struct CPU_State initial_cpu = {.pc=0x87de, .a=0x8b, .x=0x84, .y=0xf9, .sp=0x6f, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x87de, .value=0x10}, {.addr=0x87df, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x8790, .a=0x8b, .x=0x84, .y=0xf9, .sp=0x6f, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x87de, .value=0x10}, {.addr=0x87df, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x87de, .value=0x10, .type=IO_READ},
        {.addr=0x87df, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_026A) {
    const struct CPU_State initial_cpu = {.pc=0x7642, .a=0xd5, .x=0x79, .y=0x55, .sp=0xa8, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x7642, .value=0x10}, {.addr=0x7643, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7632, .a=0xd5, .x=0x79, .y=0x55, .sp=0xa8, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x7642, .value=0x10}, {.addr=0x7643, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7642, .value=0x10, .type=IO_READ},
        {.addr=0x7643, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_026B) {
    const struct CPU_State initial_cpu = {.pc=0x9935, .a=0xda, .x=0x78, .y=0x54, .sp=0x6e, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x9935, .value=0x10}, {.addr=0x9936, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x9937, .a=0xda, .x=0x78, .y=0x54, .sp=0x6e, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x9935, .value=0x10}, {.addr=0x9936, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x9935, .value=0x10, .type=IO_READ},
        {.addr=0x9936, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_026C) {
    const struct CPU_State initial_cpu = {.pc=0x488a, .a=0x17, .x=0xc4, .y=0x44, .sp=0xd2, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x488a, .value=0x10}, {.addr=0x488b, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x488c, .a=0x17, .x=0xc4, .y=0x44, .sp=0xd2, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x488a, .value=0x10}, {.addr=0x488b, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x488a, .value=0x10, .type=IO_READ},
        {.addr=0x488b, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_026D) {
    const struct CPU_State initial_cpu = {.pc=0x4c50, .a=0xc7, .x=0xe3, .y=0x88, .sp=0x48, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x4c50, .value=0x10}, {.addr=0x4c51, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x4c40, .a=0xc7, .x=0xe3, .y=0x88, .sp=0x48, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x4c50, .value=0x10}, {.addr=0x4c51, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x4c50, .value=0x10, .type=IO_READ},
        {.addr=0x4c51, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_026E) {
    const struct CPU_State initial_cpu = {.pc=0x0383, .a=0x96, .x=0x58, .y=0x4a, .sp=0x79, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0383, .value=0x10}, {.addr=0x0384, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x0385, .a=0x96, .x=0x58, .y=0x4a, .sp=0x79, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0383, .value=0x10}, {.addr=0x0384, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x0383, .value=0x10, .type=IO_READ},
        {.addr=0x0384, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_026F) {
    const struct CPU_State initial_cpu = {.pc=0x6f43, .a=0xc1, .x=0x03, .y=0xbe, .sp=0x7b, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x6f43, .value=0x10}, {.addr=0x6f44, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x6fb9, .a=0xc1, .x=0x03, .y=0xbe, .sp=0x7b, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x6f43, .value=0x10}, {.addr=0x6f44, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x6f43, .value=0x10, .type=IO_READ},
        {.addr=0x6f44, .value=0x74, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0270) {
    const struct CPU_State initial_cpu = {.pc=0x5b89, .a=0xfd, .x=0x9c, .y=0xd3, .sp=0x90, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x5b89, .value=0x10}, {.addr=0x5b8a, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x5b8b, .a=0xfd, .x=0x9c, .y=0xd3, .sp=0x90, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x5b89, .value=0x10}, {.addr=0x5b8a, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x5b89, .value=0x10, .type=IO_READ},
        {.addr=0x5b8a, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0271) {
    const struct CPU_State initial_cpu = {.pc=0x7a11, .a=0xab, .x=0x74, .y=0x2a, .sp=0xcd, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x7a11, .value=0x10}, {.addr=0x7a12, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x7a13, .a=0xab, .x=0x74, .y=0x2a, .sp=0xcd, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x7a11, .value=0x10}, {.addr=0x7a12, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x7a11, .value=0x10, .type=IO_READ},
        {.addr=0x7a12, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0272) {
    const struct CPU_State initial_cpu = {.pc=0xb02e, .a=0xdc, .x=0x8e, .y=0x21, .sp=0x01, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xb02e, .value=0x10}, {.addr=0xb02f, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xb030, .a=0xdc, .x=0x8e, .y=0x21, .sp=0x01, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xb02e, .value=0x10}, {.addr=0xb02f, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xb02e, .value=0x10, .type=IO_READ},
        {.addr=0xb02f, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0273) {
    const struct CPU_State initial_cpu = {.pc=0x1a7c, .a=0x22, .x=0x9c, .y=0x66, .sp=0xca, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x1a7c, .value=0x10}, {.addr=0x1a7d, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x1a16, .a=0x22, .x=0x9c, .y=0x66, .sp=0xca, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x1a7c, .value=0x10}, {.addr=0x1a7d, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x1a7c, .value=0x10, .type=IO_READ},
        {.addr=0x1a7d, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0274) {
    const struct CPU_State initial_cpu = {.pc=0x3388, .a=0xd4, .x=0x14, .y=0x37, .sp=0x7e, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x3388, .value=0x10}, {.addr=0x3389, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x338a, .a=0xd4, .x=0x14, .y=0x37, .sp=0x7e, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x3388, .value=0x10}, {.addr=0x3389, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x3388, .value=0x10, .type=IO_READ},
        {.addr=0x3389, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0275) {
    const struct CPU_State initial_cpu = {.pc=0x222e, .a=0x37, .x=0xed, .y=0xe7, .sp=0x0f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x222e, .value=0x10}, {.addr=0x222f, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x2230, .a=0x37, .x=0xed, .y=0xe7, .sp=0x0f, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x222e, .value=0x10}, {.addr=0x222f, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x222e, .value=0x10, .type=IO_READ},
        {.addr=0x222f, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0276) {
    const struct CPU_State initial_cpu = {.pc=0xfeae, .a=0x33, .x=0x7f, .y=0x99, .sp=0xbb, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0xfeae, .value=0x10}, {.addr=0xfeaf, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xfeb0, .a=0x33, .x=0x7f, .y=0x99, .sp=0xbb, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xfeae, .value=0x10}, {.addr=0xfeaf, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xfeae, .value=0x10, .type=IO_READ},
        {.addr=0xfeaf, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0277) {
    const struct CPU_State initial_cpu = {.pc=0x53ec, .a=0xdb, .x=0xb6, .y=0xf3, .sp=0xcc, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x53ec, .value=0x10}, {.addr=0x53ed, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x53ee, .a=0xdb, .x=0xb6, .y=0xf3, .sp=0xcc, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x53ec, .value=0x10}, {.addr=0x53ed, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x53ec, .value=0x10, .type=IO_READ},
        {.addr=0x53ed, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0278) {
    const struct CPU_State initial_cpu = {.pc=0x5311, .a=0x38, .x=0x04, .y=0x03, .sp=0x81, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x5311, .value=0x10}, {.addr=0x5312, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x5313, .a=0x38, .x=0x04, .y=0x03, .sp=0x81, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x5311, .value=0x10}, {.addr=0x5312, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x5311, .value=0x10, .type=IO_READ},
        {.addr=0x5312, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0279) {
    const struct CPU_State initial_cpu = {.pc=0xc7ed, .a=0x7b, .x=0x2e, .y=0x10, .sp=0xc9, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xc7ed, .value=0x10}, {.addr=0xc7ee, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xc7ef, .a=0x7b, .x=0x2e, .y=0x10, .sp=0xc9, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xc7ed, .value=0x10}, {.addr=0xc7ee, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xc7ed, .value=0x10, .type=IO_READ},
        {.addr=0xc7ee, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_027A) {
    const struct CPU_State initial_cpu = {.pc=0xa393, .a=0xeb, .x=0x9f, .y=0xa5, .sp=0x1e, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0xa393, .value=0x10}, {.addr=0xa394, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0xa359, .a=0xeb, .x=0x9f, .y=0xa5, .sp=0x1e, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0xa393, .value=0x10}, {.addr=0xa394, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0xa393, .value=0x10, .type=IO_READ},
        {.addr=0xa394, .value=0xc4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_027B) {
    const struct CPU_State initial_cpu = {.pc=0xf2c1, .a=0x4b, .x=0x02, .y=0x2f, .sp=0x89, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xf2c1, .value=0x10}, {.addr=0xf2c2, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xf2f9, .a=0x4b, .x=0x02, .y=0x2f, .sp=0x89, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0xf2c1, .value=0x10}, {.addr=0xf2c2, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xf2c1, .value=0x10, .type=IO_READ},
        {.addr=0xf2c2, .value=0x36, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_027C) {
    const struct CPU_State initial_cpu = {.pc=0x89df, .a=0xca, .x=0x1e, .y=0xce, .sp=0x81, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x89df, .value=0x10}, {.addr=0x89e0, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x89e1, .a=0xca, .x=0x1e, .y=0xce, .sp=0x81, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x89df, .value=0x10}, {.addr=0x89e0, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x89df, .value=0x10, .type=IO_READ},
        {.addr=0x89e0, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_027D) {
    const struct CPU_State initial_cpu = {.pc=0xe8f5, .a=0xb3, .x=0xc9, .y=0x6d, .sp=0x82, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xe8f5, .value=0x10}, {.addr=0xe8f6, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0xe8f7, .a=0xb3, .x=0xc9, .y=0x6d, .sp=0x82, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0xe8f5, .value=0x10}, {.addr=0xe8f6, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0xe8f5, .value=0x10, .type=IO_READ},
        {.addr=0xe8f6, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_027E) {
    const struct CPU_State initial_cpu = {.pc=0xf2e4, .a=0x48, .x=0x4d, .y=0x16, .sp=0xa8, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0xf2e4, .value=0x10}, {.addr=0xf2e5, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0xf299, .a=0x48, .x=0x4d, .y=0x16, .sp=0xa8, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0xf2e4, .value=0x10}, {.addr=0xf2e5, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0xf2e4, .value=0x10, .type=IO_READ},
        {.addr=0xf2e5, .value=0xb3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_027F) {
    const struct CPU_State initial_cpu = {.pc=0xc863, .a=0x24, .x=0xe6, .y=0xa2, .sp=0xa9, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xc863, .value=0x10}, {.addr=0xc864, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xc865, .a=0x24, .x=0xe6, .y=0xa2, .sp=0xa9, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xc863, .value=0x10}, {.addr=0xc864, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xc863, .value=0x10, .type=IO_READ},
        {.addr=0xc864, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0280) {
    const struct CPU_State initial_cpu = {.pc=0xd7b2, .a=0xc2, .x=0x9c, .y=0x38, .sp=0x81, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xd7b2, .value=0x10}, {.addr=0xd7b3, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xd7b4, .a=0xc2, .x=0x9c, .y=0x38, .sp=0x81, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0xd7b2, .value=0x10}, {.addr=0xd7b3, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xd7b2, .value=0x10, .type=IO_READ},
        {.addr=0xd7b3, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0281) {
    const struct CPU_State initial_cpu = {.pc=0xef4d, .a=0x7a, .x=0xfe, .y=0x00, .sp=0xc0, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xef4d, .value=0x10}, {.addr=0xef4e, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xef57, .a=0x7a, .x=0xfe, .y=0x00, .sp=0xc0, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xef4d, .value=0x10}, {.addr=0xef4e, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xef4d, .value=0x10, .type=IO_READ},
        {.addr=0xef4e, .value=0x08, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0282) {
    const struct CPU_State initial_cpu = {.pc=0xa717, .a=0xc8, .x=0x40, .y=0x21, .sp=0xc7, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xa717, .value=0x10}, {.addr=0xa718, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xa741, .a=0xc8, .x=0x40, .y=0x21, .sp=0xc7, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xa717, .value=0x10}, {.addr=0xa718, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xa717, .value=0x10, .type=IO_READ},
        {.addr=0xa718, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0283) {
    const struct CPU_State initial_cpu = {.pc=0xca52, .a=0x8a, .x=0x05, .y=0xea, .sp=0x37, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xca52, .value=0x10}, {.addr=0xca53, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xca54, .a=0x8a, .x=0x05, .y=0xea, .sp=0x37, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xca52, .value=0x10}, {.addr=0xca53, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xca52, .value=0x10, .type=IO_READ},
        {.addr=0xca53, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0284) {
    const struct CPU_State initial_cpu = {.pc=0xdea7, .a=0xd0, .x=0x58, .y=0x36, .sp=0x6f, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xdea7, .value=0x10}, {.addr=0xdea8, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xde34, .a=0xd0, .x=0x58, .y=0x36, .sp=0x6f, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xdea7, .value=0x10}, {.addr=0xdea8, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xdea7, .value=0x10, .type=IO_READ},
        {.addr=0xdea8, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0285) {
    const struct CPU_State initial_cpu = {.pc=0xd3d8, .a=0x6e, .x=0x6e, .y=0xaa, .sp=0xaa, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xd3d8, .value=0x10}, {.addr=0xd3d9, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd3da, .a=0x6e, .x=0x6e, .y=0xaa, .sp=0xaa, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xd3d8, .value=0x10}, {.addr=0xd3d9, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd3d8, .value=0x10, .type=IO_READ},
        {.addr=0xd3d9, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0286) {
    const struct CPU_State initial_cpu = {.pc=0xb4cf, .a=0x64, .x=0x62, .y=0x68, .sp=0x40, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xb4cf, .value=0x10}, {.addr=0xb4d0, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xb542, .a=0x64, .x=0x62, .y=0x68, .sp=0x40, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xb4cf, .value=0x10}, {.addr=0xb4d0, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xb4cf, .value=0x10, .type=IO_READ},
        {.addr=0xb4d0, .value=0x71, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0287) {
    const struct CPU_State initial_cpu = {.pc=0xf084, .a=0x86, .x=0x0f, .y=0x78, .sp=0x47, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0xf084, .value=0x10}, {.addr=0xf085, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xf083, .a=0x86, .x=0x0f, .y=0x78, .sp=0x47, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xf084, .value=0x10}, {.addr=0xf085, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xf084, .value=0x10, .type=IO_READ},
        {.addr=0xf085, .value=0xfd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0288) {
    const struct CPU_State initial_cpu = {.pc=0xc9ea, .a=0x28, .x=0xf4, .y=0xb6, .sp=0xc7, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xc9ea, .value=0x10}, {.addr=0xc9eb, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xca38, .a=0x28, .x=0xf4, .y=0xb6, .sp=0xc7, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xc9ea, .value=0x10}, {.addr=0xc9eb, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xc9ea, .value=0x10, .type=IO_READ},
        {.addr=0xc9eb, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0289) {
    const struct CPU_State initial_cpu = {.pc=0x67e1, .a=0x55, .x=0xa1, .y=0xe3, .sp=0x66, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x67e1, .value=0x10}, {.addr=0x67e2, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x67e3, .a=0x55, .x=0xa1, .y=0xe3, .sp=0x66, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x67e1, .value=0x10}, {.addr=0x67e2, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x67e1, .value=0x10, .type=IO_READ},
        {.addr=0x67e2, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_028A) {
    const struct CPU_State initial_cpu = {.pc=0x5fdf, .a=0xba, .x=0xca, .y=0x7a, .sp=0x5b, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x5fdf, .value=0x10}, {.addr=0x5fe0, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x5fe1, .a=0xba, .x=0xca, .y=0x7a, .sp=0x5b, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x5fdf, .value=0x10}, {.addr=0x5fe0, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x5fdf, .value=0x10, .type=IO_READ},
        {.addr=0x5fe0, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_028B) {
    const struct CPU_State initial_cpu = {.pc=0x9e4c, .a=0x48, .x=0x59, .y=0xcd, .sp=0x14, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x9e4c, .value=0x10}, {.addr=0x9e4d, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x9e0c, .a=0x48, .x=0x59, .y=0xcd, .sp=0x14, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x9e4c, .value=0x10}, {.addr=0x9e4d, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x9e4c, .value=0x10, .type=IO_READ},
        {.addr=0x9e4d, .value=0xbe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_028C) {
    const struct CPU_State initial_cpu = {.pc=0x2dd6, .a=0x78, .x=0x92, .y=0x31, .sp=0x5e, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x2dd6, .value=0x10}, {.addr=0x2dd7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x2dd8, .a=0x78, .x=0x92, .y=0x31, .sp=0x5e, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x2dd6, .value=0x10}, {.addr=0x2dd7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x2dd6, .value=0x10, .type=IO_READ},
        {.addr=0x2dd7, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_028D) {
    const struct CPU_State initial_cpu = {.pc=0x929e, .a=0xb5, .x=0x83, .y=0x1c, .sp=0x8e, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x929e, .value=0x10}, {.addr=0x929f, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x92a0, .a=0xb5, .x=0x83, .y=0x1c, .sp=0x8e, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x929e, .value=0x10}, {.addr=0x929f, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x929e, .value=0x10, .type=IO_READ},
        {.addr=0x929f, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_028E) {
    const struct CPU_State initial_cpu = {.pc=0x5c27, .a=0x40, .x=0x22, .y=0x89, .sp=0x0b, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x5c27, .value=0x10}, {.addr=0x5c28, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x5c91, .a=0x40, .x=0x22, .y=0x89, .sp=0x0b, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x5c27, .value=0x10}, {.addr=0x5c28, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x5c27, .value=0x10, .type=IO_READ},
        {.addr=0x5c28, .value=0x68, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_028F) {
    const struct CPU_State initial_cpu = {.pc=0x9adf, .a=0x8d, .x=0x05, .y=0x94, .sp=0x77, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x9adf, .value=0x10}, {.addr=0x9ae0, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x9ae1, .a=0x8d, .x=0x05, .y=0x94, .sp=0x77, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x9adf, .value=0x10}, {.addr=0x9ae0, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x9adf, .value=0x10, .type=IO_READ},
        {.addr=0x9ae0, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0290) {
    const struct CPU_State initial_cpu = {.pc=0xc58d, .a=0x4a, .x=0x75, .y=0xdc, .sp=0xe5, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xc58d, .value=0x10}, {.addr=0xc58e, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xc596, .a=0x4a, .x=0x75, .y=0xdc, .sp=0xe5, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xc58d, .value=0x10}, {.addr=0xc58e, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xc58d, .value=0x10, .type=IO_READ},
        {.addr=0xc58e, .value=0x07, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0291) {
    const struct CPU_State initial_cpu = {.pc=0x8470, .a=0x18, .x=0x6a, .y=0xc7, .sp=0x4f, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x8470, .value=0x10}, {.addr=0x8471, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x845f, .a=0x18, .x=0x6a, .y=0xc7, .sp=0x4f, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x8470, .value=0x10}, {.addr=0x8471, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8470, .value=0x10, .type=IO_READ},
        {.addr=0x8471, .value=0xed, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0292) {
    const struct CPU_State initial_cpu = {.pc=0xe934, .a=0x1c, .x=0x96, .y=0x92, .sp=0x15, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xe934, .value=0x10}, {.addr=0xe935, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xe962, .a=0x1c, .x=0x96, .y=0x92, .sp=0x15, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xe934, .value=0x10}, {.addr=0xe935, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xe934, .value=0x10, .type=IO_READ},
        {.addr=0xe935, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0293) {
    const struct CPU_State initial_cpu = {.pc=0x8059, .a=0x7e, .x=0x5e, .y=0x51, .sp=0xc4, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x8059, .value=0x10}, {.addr=0x805a, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x80d5, .a=0x7e, .x=0x5e, .y=0x51, .sp=0xc4, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x8059, .value=0x10}, {.addr=0x805a, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x8059, .value=0x10, .type=IO_READ},
        {.addr=0x805a, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0294) {
    const struct CPU_State initial_cpu = {.pc=0x6e32, .a=0x7e, .x=0x33, .y=0x36, .sp=0xda, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x6e32, .value=0x10}, {.addr=0x6e33, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x6e34, .a=0x7e, .x=0x33, .y=0x36, .sp=0xda, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x6e32, .value=0x10}, {.addr=0x6e33, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x6e32, .value=0x10, .type=IO_READ},
        {.addr=0x6e33, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0295) {
    const struct CPU_State initial_cpu = {.pc=0xa545, .a=0x75, .x=0x2d, .y=0x4f, .sp=0xcc, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xa545, .value=0x10}, {.addr=0xa546, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xa547, .a=0x75, .x=0x2d, .y=0x4f, .sp=0xcc, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xa545, .value=0x10}, {.addr=0xa546, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xa545, .value=0x10, .type=IO_READ},
        {.addr=0xa546, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0296) {
    const struct CPU_State initial_cpu = {.pc=0x7769, .a=0x1d, .x=0xb9, .y=0x61, .sp=0x13, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x7769, .value=0x10}, {.addr=0x776a, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x77e0, .a=0x1d, .x=0xb9, .y=0x61, .sp=0x13, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7769, .value=0x10}, {.addr=0x776a, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x7769, .value=0x10, .type=IO_READ},
        {.addr=0x776a, .value=0x75, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0297) {
    const struct CPU_State initial_cpu = {.pc=0x59c5, .a=0xc3, .x=0x4d, .y=0x8b, .sp=0xd8, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x59c5, .value=0x10}, {.addr=0x59c6, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x5a32, .a=0xc3, .x=0x4d, .y=0x8b, .sp=0xd8, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x59c5, .value=0x10}, {.addr=0x59c6, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x59c5, .value=0x10, .type=IO_READ},
        {.addr=0x59c6, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0298) {
    const struct CPU_State initial_cpu = {.pc=0x4b30, .a=0x88, .x=0xa0, .y=0x32, .sp=0x77, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x4b30, .value=0x10}, {.addr=0x4b31, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x4ac9, .a=0x88, .x=0xa0, .y=0x32, .sp=0x77, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x4b30, .value=0x10}, {.addr=0x4b31, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x4b30, .value=0x10, .type=IO_READ},
        {.addr=0x4b31, .value=0x97, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0299) {
    const struct CPU_State initial_cpu = {.pc=0xa22e, .a=0x1d, .x=0xea, .y=0xa0, .sp=0x23, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xa22e, .value=0x10}, {.addr=0xa22f, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xa277, .a=0x1d, .x=0xea, .y=0xa0, .sp=0x23, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xa22e, .value=0x10}, {.addr=0xa22f, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xa22e, .value=0x10, .type=IO_READ},
        {.addr=0xa22f, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_029A) {
    const struct CPU_State initial_cpu = {.pc=0x2d4d, .a=0x3b, .x=0x2e, .y=0xe3, .sp=0xf2, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x2d4d, .value=0x10}, {.addr=0x2d4e, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x2d3b, .a=0x3b, .x=0x2e, .y=0xe3, .sp=0xf2, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x2d4d, .value=0x10}, {.addr=0x2d4e, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x2d4d, .value=0x10, .type=IO_READ},
        {.addr=0x2d4e, .value=0xec, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_029B) {
    const struct CPU_State initial_cpu = {.pc=0x94a4, .a=0xc2, .x=0xeb, .y=0xa6, .sp=0x57, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x94a4, .value=0x10}, {.addr=0x94a5, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x94a6, .a=0xc2, .x=0xeb, .y=0xa6, .sp=0x57, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x94a4, .value=0x10}, {.addr=0x94a5, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x94a4, .value=0x10, .type=IO_READ},
        {.addr=0x94a5, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_029C) {
    const struct CPU_State initial_cpu = {.pc=0x5db7, .a=0x34, .x=0xad, .y=0xeb, .sp=0x1d, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x5db7, .value=0x10}, {.addr=0x5db8, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x5db9, .a=0x34, .x=0xad, .y=0xeb, .sp=0x1d, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x5db7, .value=0x10}, {.addr=0x5db8, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x5db7, .value=0x10, .type=IO_READ},
        {.addr=0x5db8, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_029D) {
    const struct CPU_State initial_cpu = {.pc=0xdc93, .a=0x87, .x=0x17, .y=0xd6, .sp=0xa1, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xdc93, .value=0x10}, {.addr=0xdc94, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xdc95, .a=0x87, .x=0x17, .y=0xd6, .sp=0xa1, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xdc93, .value=0x10}, {.addr=0xdc94, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xdc93, .value=0x10, .type=IO_READ},
        {.addr=0xdc94, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_029E) {
    const struct CPU_State initial_cpu = {.pc=0x930a, .a=0x36, .x=0x1d, .y=0xf9, .sp=0xef, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x930a, .value=0x10}, {.addr=0x930b, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x9302, .a=0x36, .x=0x1d, .y=0xf9, .sp=0xef, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x930a, .value=0x10}, {.addr=0x930b, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x930a, .value=0x10, .type=IO_READ},
        {.addr=0x930b, .value=0xf6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_029F) {
    const struct CPU_State initial_cpu = {.pc=0x323d, .a=0x14, .x=0xbc, .y=0x55, .sp=0xa5, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x323d, .value=0x10}, {.addr=0x323e, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x328a, .a=0x14, .x=0xbc, .y=0x55, .sp=0xa5, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x323d, .value=0x10}, {.addr=0x323e, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x323d, .value=0x10, .type=IO_READ},
        {.addr=0x323e, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x38cb, .a=0x1b, .x=0x24, .y=0xaa, .sp=0x83, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x38cb, .value=0x10}, {.addr=0x38cc, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x38cd, .a=0x1b, .x=0x24, .y=0xaa, .sp=0x83, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x38cb, .value=0x10}, {.addr=0x38cc, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x38cb, .value=0x10, .type=IO_READ},
        {.addr=0x38cc, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x0374, .a=0x26, .x=0x56, .y=0xc9, .sp=0xe3, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0374, .value=0x10}, {.addr=0x0375, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x0376, .a=0x26, .x=0x56, .y=0xc9, .sp=0xe3, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0374, .value=0x10}, {.addr=0x0375, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x0374, .value=0x10, .type=IO_READ},
        {.addr=0x0375, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xe0f4, .a=0x77, .x=0x1c, .y=0x31, .sp=0x1a, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xe0f4, .value=0x10}, {.addr=0xe0f5, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xe0f6, .a=0x77, .x=0x1c, .y=0x31, .sp=0x1a, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0xe0f4, .value=0x10}, {.addr=0xe0f5, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xe0f4, .value=0x10, .type=IO_READ},
        {.addr=0xe0f5, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xb608, .a=0xf8, .x=0xe2, .y=0xb3, .sp=0x86, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xb608, .value=0x10}, {.addr=0xb609, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb60a, .a=0xf8, .x=0xe2, .y=0xb3, .sp=0x86, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xb608, .value=0x10}, {.addr=0xb609, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb608, .value=0x10, .type=IO_READ},
        {.addr=0xb609, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xecc5, .a=0x1d, .x=0xeb, .y=0x1f, .sp=0xd0, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xecc5, .value=0x10}, {.addr=0xecc6, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0xecc8, .a=0x1d, .x=0xeb, .y=0x1f, .sp=0xd0, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0xecc5, .value=0x10}, {.addr=0xecc6, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0xecc5, .value=0x10, .type=IO_READ},
        {.addr=0xecc6, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x550e, .a=0x6a, .x=0xca, .y=0xd4, .sp=0xa6, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x550e, .value=0x10}, {.addr=0x550f, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x54f8, .a=0x6a, .x=0xca, .y=0xd4, .sp=0xa6, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x550e, .value=0x10}, {.addr=0x550f, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x550e, .value=0x10, .type=IO_READ},
        {.addr=0x550f, .value=0xe8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xd50b, .a=0xa9, .x=0x2e, .y=0xbe, .sp=0x47, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0xd50b, .value=0x10}, {.addr=0xd50c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xd51a, .a=0xa9, .x=0x2e, .y=0xbe, .sp=0x47, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xd50b, .value=0x10}, {.addr=0xd50c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xd50b, .value=0x10, .type=IO_READ},
        {.addr=0xd50c, .value=0x0d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x406d, .a=0xdc, .x=0xb5, .y=0x1d, .sp=0x94, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x406d, .value=0x10}, {.addr=0x406e, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x4073, .a=0xdc, .x=0xb5, .y=0x1d, .sp=0x94, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x406d, .value=0x10}, {.addr=0x406e, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x406d, .value=0x10, .type=IO_READ},
        {.addr=0x406e, .value=0x04, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xb36e, .a=0x6b, .x=0xd5, .y=0x91, .sp=0xe5, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xb36e, .value=0x10}, {.addr=0xb36f, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xb370, .a=0x6b, .x=0xd5, .y=0x91, .sp=0xe5, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xb36e, .value=0x10}, {.addr=0xb36f, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xb36e, .value=0x10, .type=IO_READ},
        {.addr=0xb36f, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xd286, .a=0x0c, .x=0x9d, .y=0x59, .sp=0xa2, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0xd286, .value=0x10}, {.addr=0xd287, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xd288, .a=0x0c, .x=0x9d, .y=0x59, .sp=0xa2, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0xd286, .value=0x10}, {.addr=0xd287, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xd286, .value=0x10, .type=IO_READ},
        {.addr=0xd287, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x0526, .a=0xe9, .x=0xfe, .y=0xd8, .sp=0xc5, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0526, .value=0x10}, {.addr=0x0527, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x0528, .a=0xe9, .x=0xfe, .y=0xd8, .sp=0xc5, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0526, .value=0x10}, {.addr=0x0527, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x0526, .value=0x10, .type=IO_READ},
        {.addr=0x0527, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02AB) {
    const struct CPU_State initial_cpu = {.pc=0x2743, .a=0xcb, .x=0xdc, .y=0x4a, .sp=0xeb, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x2743, .value=0x10}, {.addr=0x2744, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x2745, .a=0xcb, .x=0xdc, .y=0x4a, .sp=0xeb, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x2743, .value=0x10}, {.addr=0x2744, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x2743, .value=0x10, .type=IO_READ},
        {.addr=0x2744, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x5684, .a=0x15, .x=0x7e, .y=0x72, .sp=0x55, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x5684, .value=0x10}, {.addr=0x5685, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x5686, .a=0x15, .x=0x7e, .y=0x72, .sp=0x55, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x5684, .value=0x10}, {.addr=0x5685, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x5684, .value=0x10, .type=IO_READ},
        {.addr=0x5685, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xc94e, .a=0x15, .x=0x95, .y=0x42, .sp=0x3d, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xc94e, .value=0x10}, {.addr=0xc94f, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xc904, .a=0x15, .x=0x95, .y=0x42, .sp=0x3d, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xc94e, .value=0x10}, {.addr=0xc94f, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xc94e, .value=0x10, .type=IO_READ},
        {.addr=0xc94f, .value=0xb4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x54eb, .a=0x8a, .x=0x2e, .y=0x2c, .sp=0xa6, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x54eb, .value=0x10}, {.addr=0x54ec, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x54ed, .a=0x8a, .x=0x2e, .y=0x2c, .sp=0xa6, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x54eb, .value=0x10}, {.addr=0x54ec, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x54eb, .value=0x10, .type=IO_READ},
        {.addr=0x54ec, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02AF) {
    const struct CPU_State initial_cpu = {.pc=0xcf1c, .a=0x01, .x=0x88, .y=0x78, .sp=0x25, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xcf1c, .value=0x10}, {.addr=0xcf1d, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xcef3, .a=0x01, .x=0x88, .y=0x78, .sp=0x25, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xcf1c, .value=0x10}, {.addr=0xcf1d, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xcf1c, .value=0x10, .type=IO_READ},
        {.addr=0xcf1d, .value=0xd5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x8758, .a=0x13, .x=0xa3, .y=0x35, .sp=0xb9, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x8758, .value=0x10}, {.addr=0x8759, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x875a, .a=0x13, .x=0xa3, .y=0x35, .sp=0xb9, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x8758, .value=0x10}, {.addr=0x8759, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x8758, .value=0x10, .type=IO_READ},
        {.addr=0x8759, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x2c0e, .a=0x03, .x=0x1f, .y=0x8c, .sp=0xda, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x2c0e, .value=0x10}, {.addr=0x2c0f, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x2c60, .a=0x03, .x=0x1f, .y=0x8c, .sp=0xda, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x2c0e, .value=0x10}, {.addr=0x2c0f, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x2c0e, .value=0x10, .type=IO_READ},
        {.addr=0x2c0f, .value=0x50, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xaf06, .a=0xa7, .x=0x6d, .y=0xde, .sp=0xde, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xaf06, .value=0x10}, {.addr=0xaf07, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xaf08, .a=0xa7, .x=0x6d, .y=0xde, .sp=0xde, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0xaf06, .value=0x10}, {.addr=0xaf07, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xaf06, .value=0x10, .type=IO_READ},
        {.addr=0xaf07, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x3336, .a=0xc2, .x=0xbb, .y=0xd5, .sp=0x41, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x3336, .value=0x10}, {.addr=0x3337, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x3323, .a=0xc2, .x=0xbb, .y=0xd5, .sp=0x41, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x3336, .value=0x10}, {.addr=0x3337, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x3336, .value=0x10, .type=IO_READ},
        {.addr=0x3337, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x9ad0, .a=0x18, .x=0xf8, .y=0xaf, .sp=0xde, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x9ad0, .value=0x10}, {.addr=0x9ad1, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x9ad2, .a=0x18, .x=0xf8, .y=0xaf, .sp=0xde, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x9ad0, .value=0x10}, {.addr=0x9ad1, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x9ad0, .value=0x10, .type=IO_READ},
        {.addr=0x9ad1, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02B5) {
    const struct CPU_State initial_cpu = {.pc=0xf200, .a=0x29, .x=0x10, .y=0xb0, .sp=0x38, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xf200, .value=0x10}, {.addr=0xf201, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xf258, .a=0x29, .x=0x10, .y=0xb0, .sp=0x38, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0xf200, .value=0x10}, {.addr=0xf201, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xf200, .value=0x10, .type=IO_READ},
        {.addr=0xf201, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x5cff, .a=0x31, .x=0x80, .y=0x63, .sp=0x42, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x5cff, .value=0x10}, {.addr=0x5d00, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0x5d28, .a=0x31, .x=0x80, .y=0x63, .sp=0x42, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x5cff, .value=0x10}, {.addr=0x5d00, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0x5cff, .value=0x10, .type=IO_READ},
        {.addr=0x5d00, .value=0x27, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xc6ed, .a=0x14, .x=0x3c, .y=0x26, .sp=0xa3, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xc6ed, .value=0x10}, {.addr=0xc6ee, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xc752, .a=0x14, .x=0x3c, .y=0x26, .sp=0xa3, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0xc6ed, .value=0x10}, {.addr=0xc6ee, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xc6ed, .value=0x10, .type=IO_READ},
        {.addr=0xc6ee, .value=0x63, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x0993, .a=0xa7, .x=0x13, .y=0x47, .sp=0xa6, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0993, .value=0x10}, {.addr=0x0994, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x093d, .a=0xa7, .x=0x13, .y=0x47, .sp=0xa6, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0993, .value=0x10}, {.addr=0x0994, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x0993, .value=0x10, .type=IO_READ},
        {.addr=0x0994, .value=0xa8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02B9) {
    const struct CPU_State initial_cpu = {.pc=0xede8, .a=0x1e, .x=0xda, .y=0x42, .sp=0x51, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xede8, .value=0x10}, {.addr=0xede9, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xedb8, .a=0x1e, .x=0xda, .y=0x42, .sp=0x51, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0xede8, .value=0x10}, {.addr=0xede9, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xede8, .value=0x10, .type=IO_READ},
        {.addr=0xede9, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02BA) {
    const struct CPU_State initial_cpu = {.pc=0xdc3c, .a=0x10, .x=0x73, .y=0xcd, .sp=0xb0, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0xdc3c, .value=0x10}, {.addr=0xdc3d, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xdc0c, .a=0x10, .x=0x73, .y=0xcd, .sp=0xb0, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0xdc3c, .value=0x10}, {.addr=0xdc3d, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xdc3c, .value=0x10, .type=IO_READ},
        {.addr=0xdc3d, .value=0xce, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x757c, .a=0xc9, .x=0xee, .y=0x7a, .sp=0xa9, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x757c, .value=0x10}, {.addr=0x757d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x755d, .a=0xc9, .x=0xee, .y=0x7a, .sp=0xa9, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x757c, .value=0x10}, {.addr=0x757d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x757c, .value=0x10, .type=IO_READ},
        {.addr=0x757d, .value=0xdf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02BC) {
    const struct CPU_State initial_cpu = {.pc=0x5da8, .a=0x7b, .x=0xab, .y=0x28, .sp=0xbe, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x5da8, .value=0x10}, {.addr=0x5da9, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x5daa, .a=0x7b, .x=0xab, .y=0x28, .sp=0xbe, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x5da8, .value=0x10}, {.addr=0x5da9, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x5da8, .value=0x10, .type=IO_READ},
        {.addr=0x5da9, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x98ef, .a=0x2c, .x=0x11, .y=0x67, .sp=0x2e, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x98ef, .value=0x10}, {.addr=0x98f0, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x98f1, .a=0x2c, .x=0x11, .y=0x67, .sp=0x2e, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x98ef, .value=0x10}, {.addr=0x98f0, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x98ef, .value=0x10, .type=IO_READ},
        {.addr=0x98f0, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xf001, .a=0x8d, .x=0x46, .y=0x34, .sp=0x8f, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0xf001, .value=0x10}, {.addr=0xf002, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xf057, .a=0x8d, .x=0x46, .y=0x34, .sp=0x8f, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0xf001, .value=0x10}, {.addr=0xf002, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xf001, .value=0x10, .type=IO_READ},
        {.addr=0xf002, .value=0x54, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x01dd, .a=0x9f, .x=0x61, .y=0xb0, .sp=0x76, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x10}, {.addr=0x01de, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x01df, .a=0x9f, .x=0x61, .y=0xb0, .sp=0x76, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x10}, {.addr=0x01de, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x01dd, .value=0x10, .type=IO_READ},
        {.addr=0x01de, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xa911, .a=0x83, .x=0xd6, .y=0x9d, .sp=0x9f, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xa911, .value=0x10}, {.addr=0xa912, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xa90c, .a=0x83, .x=0xd6, .y=0x9d, .sp=0x9f, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xa911, .value=0x10}, {.addr=0xa912, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xa911, .value=0x10, .type=IO_READ},
        {.addr=0xa912, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x5191, .a=0xcd, .x=0x83, .y=0x92, .sp=0x78, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x5191, .value=0x10}, {.addr=0x5192, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x5193, .a=0xcd, .x=0x83, .y=0x92, .sp=0x78, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x5191, .value=0x10}, {.addr=0x5192, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x5191, .value=0x10, .type=IO_READ},
        {.addr=0x5192, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x9f26, .a=0xb8, .x=0x0f, .y=0x3a, .sp=0xac, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x9f26, .value=0x10}, {.addr=0x9f27, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x9f1b, .a=0xb8, .x=0x0f, .y=0x3a, .sp=0xac, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x9f26, .value=0x10}, {.addr=0x9f27, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x9f26, .value=0x10, .type=IO_READ},
        {.addr=0x9f27, .value=0xf3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x05bc, .a=0x2a, .x=0xff, .y=0xb7, .sp=0xe4, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x05bc, .value=0x10}, {.addr=0x05bd, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x0553, .a=0x2a, .x=0xff, .y=0xb7, .sp=0xe4, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x05bc, .value=0x10}, {.addr=0x05bd, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x05bc, .value=0x10, .type=IO_READ},
        {.addr=0x05bd, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xeab6, .a=0xbe, .x=0xea, .y=0x1e, .sp=0xf9, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xeab6, .value=0x10}, {.addr=0xeab7, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xeae9, .a=0xbe, .x=0xea, .y=0x1e, .sp=0xf9, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xeab6, .value=0x10}, {.addr=0xeab7, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xeab6, .value=0x10, .type=IO_READ},
        {.addr=0xeab7, .value=0x31, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x2764, .a=0xbe, .x=0x13, .y=0x0e, .sp=0xb1, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x2764, .value=0x10}, {.addr=0x2765, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x2766, .a=0xbe, .x=0x13, .y=0x0e, .sp=0xb1, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x2764, .value=0x10}, {.addr=0x2765, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x2764, .value=0x10, .type=IO_READ},
        {.addr=0x2765, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02C6) {
    const struct CPU_State initial_cpu = {.pc=0xd54b, .a=0x83, .x=0xcf, .y=0x85, .sp=0x1c, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xd54b, .value=0x10}, {.addr=0xd54c, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xd54d, .a=0x83, .x=0xcf, .y=0x85, .sp=0x1c, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0xd54b, .value=0x10}, {.addr=0xd54c, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xd54b, .value=0x10, .type=IO_READ},
        {.addr=0xd54c, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x8557, .a=0x9b, .x=0xaf, .y=0xd6, .sp=0x92, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x8557, .value=0x10}, {.addr=0x8558, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x850e, .a=0x9b, .x=0xaf, .y=0xd6, .sp=0x92, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x8557, .value=0x10}, {.addr=0x8558, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x8557, .value=0x10, .type=IO_READ},
        {.addr=0x8558, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x7d6f, .a=0xe7, .x=0x9b, .y=0xf7, .sp=0x36, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x7d6f, .value=0x10}, {.addr=0x7d70, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x7ddf, .a=0xe7, .x=0x9b, .y=0xf7, .sp=0x36, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x7d6f, .value=0x10}, {.addr=0x7d70, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x7d6f, .value=0x10, .type=IO_READ},
        {.addr=0x7d70, .value=0x6e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x3df8, .a=0x70, .x=0x22, .y=0xcb, .sp=0x54, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x3df8, .value=0x10}, {.addr=0x3df9, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x3dfa, .a=0x70, .x=0x22, .y=0xcb, .sp=0x54, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x3df8, .value=0x10}, {.addr=0x3df9, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x3df8, .value=0x10, .type=IO_READ},
        {.addr=0x3df9, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xbf14, .a=0x25, .x=0xba, .y=0x9f, .sp=0x72, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xbf14, .value=0x10}, {.addr=0xbf15, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xbf57, .a=0x25, .x=0xba, .y=0x9f, .sp=0x72, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0xbf14, .value=0x10}, {.addr=0xbf15, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xbf14, .value=0x10, .type=IO_READ},
        {.addr=0xbf15, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x7072, .a=0x05, .x=0x36, .y=0x62, .sp=0xca, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x7072, .value=0x10}, {.addr=0x7073, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x7074, .a=0x05, .x=0x36, .y=0x62, .sp=0xca, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x7072, .value=0x10}, {.addr=0x7073, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x7072, .value=0x10, .type=IO_READ},
        {.addr=0x7073, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xe2d9, .a=0xdd, .x=0xaa, .y=0xee, .sp=0xf8, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xe2d9, .value=0x10}, {.addr=0xe2da, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xe2d9, .a=0xdd, .x=0xaa, .y=0xee, .sp=0xf8, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xe2d9, .value=0x10}, {.addr=0xe2da, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xe2d9, .value=0x10, .type=IO_READ},
        {.addr=0xe2da, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xf0de, .a=0x0f, .x=0x17, .y=0x7e, .sp=0x1d, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0xf0de, .value=0x10}, {.addr=0xf0df, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0xf0e0, .a=0x0f, .x=0x17, .y=0x7e, .sp=0x1d, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0xf0de, .value=0x10}, {.addr=0xf0df, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0xf0de, .value=0x10, .type=IO_READ},
        {.addr=0xf0df, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x1388, .a=0x11, .x=0xda, .y=0x1f, .sp=0xa0, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x1388, .value=0x10}, {.addr=0x1389, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x138a, .a=0x11, .x=0xda, .y=0x1f, .sp=0xa0, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x1388, .value=0x10}, {.addr=0x1389, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x1388, .value=0x10, .type=IO_READ},
        {.addr=0x1389, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xb754, .a=0xf9, .x=0xc0, .y=0xc8, .sp=0x27, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xb754, .value=0x10}, {.addr=0xb755, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xb756, .a=0xf9, .x=0xc0, .y=0xc8, .sp=0x27, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0xb754, .value=0x10}, {.addr=0xb755, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xb754, .value=0x10, .type=IO_READ},
        {.addr=0xb755, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xa11d, .a=0xc8, .x=0xe2, .y=0x83, .sp=0xda, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xa11d, .value=0x10}, {.addr=0xa11e, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xa11f, .a=0xc8, .x=0xe2, .y=0x83, .sp=0xda, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0xa11d, .value=0x10}, {.addr=0xa11e, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xa11d, .value=0x10, .type=IO_READ},
        {.addr=0xa11e, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x8824, .a=0x47, .x=0xc7, .y=0xf8, .sp=0x38, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x8824, .value=0x10}, {.addr=0x8825, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x8826, .a=0x47, .x=0xc7, .y=0xf8, .sp=0x38, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x8824, .value=0x10}, {.addr=0x8825, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x8824, .value=0x10, .type=IO_READ},
        {.addr=0x8825, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x9d0e, .a=0x05, .x=0xb7, .y=0x57, .sp=0x3a, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x9d0e, .value=0x10}, {.addr=0x9d0f, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x9d08, .a=0x05, .x=0xb7, .y=0x57, .sp=0x3a, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x9d0e, .value=0x10}, {.addr=0x9d0f, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x9d0e, .value=0x10, .type=IO_READ},
        {.addr=0x9d0f, .value=0xf8, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x4b88, .a=0xfe, .x=0x15, .y=0xbf, .sp=0x22, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x4b88, .value=0x10}, {.addr=0x4b89, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x4b8a, .a=0xfe, .x=0x15, .y=0xbf, .sp=0x22, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x4b88, .value=0x10}, {.addr=0x4b89, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x4b88, .value=0x10, .type=IO_READ},
        {.addr=0x4b89, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x3817, .a=0xa7, .x=0xa9, .y=0x27, .sp=0xc2, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x3817, .value=0x10}, {.addr=0x3818, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x3824, .a=0xa7, .x=0xa9, .y=0x27, .sp=0xc2, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x3817, .value=0x10}, {.addr=0x3818, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x3817, .value=0x10, .type=IO_READ},
        {.addr=0x3818, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02D5) {
    const struct CPU_State initial_cpu = {.pc=0xb0cc, .a=0x8d, .x=0xd2, .y=0x31, .sp=0x1b, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xb0cc, .value=0x10}, {.addr=0xb0cd, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xb08f, .a=0x8d, .x=0xd2, .y=0x31, .sp=0x1b, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xb0cc, .value=0x10}, {.addr=0xb0cd, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xb0cc, .value=0x10, .type=IO_READ},
        {.addr=0xb0cd, .value=0xc1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xe543, .a=0xf3, .x=0x1c, .y=0x9c, .sp=0x50, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0xe543, .value=0x10}, {.addr=0xe544, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xe545, .a=0xf3, .x=0x1c, .y=0x9c, .sp=0x50, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0xe543, .value=0x10}, {.addr=0xe544, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xe543, .value=0x10, .type=IO_READ},
        {.addr=0xe544, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xa0f8, .a=0xc0, .x=0xce, .y=0x23, .sp=0x09, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xa0f8, .value=0x10}, {.addr=0xa0f9, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xa0f8, .a=0xc0, .x=0xce, .y=0x23, .sp=0x09, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xa0f8, .value=0x10}, {.addr=0xa0f9, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xa0f8, .value=0x10, .type=IO_READ},
        {.addr=0xa0f9, .value=0xfe, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x5d92, .a=0x1b, .x=0x3a, .y=0x9a, .sp=0x20, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x5d92, .value=0x10}, {.addr=0x5d93, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x5d2e, .a=0x1b, .x=0x3a, .y=0x9a, .sp=0x20, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x5d92, .value=0x10}, {.addr=0x5d93, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x5d92, .value=0x10, .type=IO_READ},
        {.addr=0x5d93, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x1c3c, .a=0x25, .x=0x6c, .y=0x99, .sp=0x3d, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x1c3c, .value=0x10}, {.addr=0x1c3d, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x1cb8, .a=0x25, .x=0x6c, .y=0x99, .sp=0x3d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x1c3c, .value=0x10}, {.addr=0x1c3d, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x1c3c, .value=0x10, .type=IO_READ},
        {.addr=0x1c3d, .value=0x7a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x601f, .a=0x4f, .x=0xc3, .y=0xd4, .sp=0x3d, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x601f, .value=0x10}, {.addr=0x6020, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x6021, .a=0x4f, .x=0xc3, .y=0xd4, .sp=0x3d, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x601f, .value=0x10}, {.addr=0x6020, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x601f, .value=0x10, .type=IO_READ},
        {.addr=0x6020, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x25c8, .a=0x4f, .x=0x27, .y=0x2b, .sp=0xf0, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x25c8, .value=0x10}, {.addr=0x25c9, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x2560, .a=0x4f, .x=0x27, .y=0x2b, .sp=0xf0, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x25c8, .value=0x10}, {.addr=0x25c9, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x25c8, .value=0x10, .type=IO_READ},
        {.addr=0x25c9, .value=0x96, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x4088, .a=0x2b, .x=0x8b, .y=0xa0, .sp=0xd1, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x4088, .value=0x10}, {.addr=0x4089, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x408a, .a=0x2b, .x=0x8b, .y=0xa0, .sp=0xd1, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x4088, .value=0x10}, {.addr=0x4089, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x4088, .value=0x10, .type=IO_READ},
        {.addr=0x4089, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x03f1, .a=0x10, .x=0xc7, .y=0xd2, .sp=0x42, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x03f1, .value=0x10}, {.addr=0x03f2, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x03f3, .a=0x10, .x=0xc7, .y=0xd2, .sp=0x42, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x03f1, .value=0x10}, {.addr=0x03f2, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x03f1, .value=0x10, .type=IO_READ},
        {.addr=0x03f2, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x41cc, .a=0x65, .x=0x6a, .y=0x81, .sp=0xd3, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x41cc, .value=0x10}, {.addr=0x41cd, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x4237, .a=0x65, .x=0x6a, .y=0x81, .sp=0xd3, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x41cc, .value=0x10}, {.addr=0x41cd, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x41cc, .value=0x10, .type=IO_READ},
        {.addr=0x41cd, .value=0x69, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x69ab, .a=0xc6, .x=0x67, .y=0x0e, .sp=0x44, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x69ab, .value=0x10}, {.addr=0x69ac, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x69ad, .a=0xc6, .x=0x67, .y=0x0e, .sp=0x44, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x69ab, .value=0x10}, {.addr=0x69ac, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x69ab, .value=0x10, .type=IO_READ},
        {.addr=0x69ac, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02E0) {
    const struct CPU_State initial_cpu = {.pc=0xe58b, .a=0xb8, .x=0xb3, .y=0x4c, .sp=0x68, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xe58b, .value=0x10}, {.addr=0xe58c, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xe58d, .a=0xb8, .x=0xb3, .y=0x4c, .sp=0x68, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0xe58b, .value=0x10}, {.addr=0xe58c, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xe58b, .value=0x10, .type=IO_READ},
        {.addr=0xe58c, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x1664, .a=0x78, .x=0x1e, .y=0x09, .sp=0x71, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x1664, .value=0x10}, {.addr=0x1665, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x1666, .a=0x78, .x=0x1e, .y=0x09, .sp=0x71, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x1664, .value=0x10}, {.addr=0x1665, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x1664, .value=0x10, .type=IO_READ},
        {.addr=0x1665, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x3b54, .a=0x05, .x=0xed, .y=0x21, .sp=0x15, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x3b54, .value=0x10}, {.addr=0x3b55, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x3b56, .a=0x05, .x=0xed, .y=0x21, .sp=0x15, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x3b54, .value=0x10}, {.addr=0x3b55, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x3b54, .value=0x10, .type=IO_READ},
        {.addr=0x3b55, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x6e39, .a=0x4c, .x=0x97, .y=0x2e, .sp=0xa3, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x6e39, .value=0x10}, {.addr=0x6e3a, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x6e3b, .a=0x4c, .x=0x97, .y=0x2e, .sp=0xa3, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x6e39, .value=0x10}, {.addr=0x6e3a, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x6e39, .value=0x10, .type=IO_READ},
        {.addr=0x6e3a, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x6b1e, .a=0x74, .x=0xaa, .y=0x41, .sp=0xf0, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x6b1e, .value=0x10}, {.addr=0x6b1f, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x6b85, .a=0x74, .x=0xaa, .y=0x41, .sp=0xf0, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x6b1e, .value=0x10}, {.addr=0x6b1f, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x6b1e, .value=0x10, .type=IO_READ},
        {.addr=0x6b1f, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x25a9, .a=0xc6, .x=0x3a, .y=0xa9, .sp=0xfd, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x25a9, .value=0x10}, {.addr=0x25aa, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x25ab, .a=0xc6, .x=0x3a, .y=0xa9, .sp=0xfd, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x25a9, .value=0x10}, {.addr=0x25aa, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x25a9, .value=0x10, .type=IO_READ},
        {.addr=0x25aa, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02E6) {
    const struct CPU_State initial_cpu = {.pc=0xfb49, .a=0x42, .x=0x10, .y=0xe9, .sp=0x46, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xfb49, .value=0x10}, {.addr=0xfb4a, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0xfb3f, .a=0x42, .x=0x10, .y=0xe9, .sp=0x46, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xfb49, .value=0x10}, {.addr=0xfb4a, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0xfb49, .value=0x10, .type=IO_READ},
        {.addr=0xfb4a, .value=0xf4, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xb5c3, .a=0x78, .x=0x7e, .y=0x64, .sp=0xc1, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xb5c3, .value=0x10}, {.addr=0xb5c4, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xb606, .a=0x78, .x=0x7e, .y=0x64, .sp=0xc1, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0xb5c3, .value=0x10}, {.addr=0xb5c4, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xb5c3, .value=0x10, .type=IO_READ},
        {.addr=0xb5c4, .value=0x41, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02E8) {
    const struct CPU_State initial_cpu = {.pc=0xff69, .a=0x6c, .x=0x5e, .y=0x53, .sp=0x9e, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xff69, .value=0x10}, {.addr=0xff6a, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xff6b, .a=0x6c, .x=0x5e, .y=0x53, .sp=0x9e, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0xff69, .value=0x10}, {.addr=0xff6a, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xff69, .value=0x10, .type=IO_READ},
        {.addr=0xff6a, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x6f48, .a=0x59, .x=0x10, .y=0xb4, .sp=0xf6, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x6f48, .value=0x10}, {.addr=0x6f49, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x6f4a, .a=0x59, .x=0x10, .y=0xb4, .sp=0xf6, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x6f48, .value=0x10}, {.addr=0x6f49, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x6f48, .value=0x10, .type=IO_READ},
        {.addr=0x6f49, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02EA) {
    const struct CPU_State initial_cpu = {.pc=0xdedc, .a=0x0d, .x=0xe4, .y=0x26, .sp=0x54, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xdedc, .value=0x10}, {.addr=0xdedd, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xdede, .a=0x0d, .x=0xe4, .y=0x26, .sp=0x54, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xdedc, .value=0x10}, {.addr=0xdedd, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xdedc, .value=0x10, .type=IO_READ},
        {.addr=0xdedd, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x3b59, .a=0x38, .x=0x32, .y=0x55, .sp=0xd4, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x3b59, .value=0x10}, {.addr=0x3b5a, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x3b5b, .a=0x38, .x=0x32, .y=0x55, .sp=0xd4, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x3b59, .value=0x10}, {.addr=0x3b5a, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x3b59, .value=0x10, .type=IO_READ},
        {.addr=0x3b5a, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x2496, .a=0x3e, .x=0x16, .y=0xb9, .sp=0xc9, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x2496, .value=0x10}, {.addr=0x2497, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x2498, .a=0x3e, .x=0x16, .y=0xb9, .sp=0xc9, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x2496, .value=0x10}, {.addr=0x2497, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x2496, .value=0x10, .type=IO_READ},
        {.addr=0x2497, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x32b8, .a=0x0a, .x=0x5c, .y=0x8a, .sp=0x39, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x32b8, .value=0x10}, {.addr=0x32b9, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x32d8, .a=0x0a, .x=0x5c, .y=0x8a, .sp=0x39, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x32b8, .value=0x10}, {.addr=0x32b9, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x32b8, .value=0x10, .type=IO_READ},
        {.addr=0x32b9, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xaa55, .a=0x1f, .x=0x29, .y=0x7e, .sp=0x10, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xaa55, .value=0x10}, {.addr=0xaa56, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xaa87, .a=0x1f, .x=0x29, .y=0x7e, .sp=0x10, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xaa55, .value=0x10}, {.addr=0xaa56, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xaa55, .value=0x10, .type=IO_READ},
        {.addr=0xaa56, .value=0x30, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x0b54, .a=0xc5, .x=0x7d, .y=0x02, .sp=0x25, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0b54, .value=0x10}, {.addr=0x0b55, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x0b56, .a=0xc5, .x=0x7d, .y=0x02, .sp=0x25, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0b54, .value=0x10}, {.addr=0x0b55, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x0b54, .value=0x10, .type=IO_READ},
        {.addr=0x0b55, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x44a1, .a=0x52, .x=0xa3, .y=0xc5, .sp=0x21, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x44a1, .value=0x10}, {.addr=0x44a2, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x44a3, .a=0x52, .x=0xa3, .y=0xc5, .sp=0x21, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x44a1, .value=0x10}, {.addr=0x44a2, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x44a1, .value=0x10, .type=IO_READ},
        {.addr=0x44a2, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x96b9, .a=0xf2, .x=0x67, .y=0xc8, .sp=0x85, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x96b9, .value=0x10}, {.addr=0x96ba, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x96bb, .a=0xf2, .x=0x67, .y=0xc8, .sp=0x85, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x96b9, .value=0x10}, {.addr=0x96ba, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x96b9, .value=0x10, .type=IO_READ},
        {.addr=0x96ba, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x6a5c, .a=0x0e, .x=0x74, .y=0xaf, .sp=0xf2, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x6a5c, .value=0x10}, {.addr=0x6a5d, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x6a5e, .a=0x0e, .x=0x74, .y=0xaf, .sp=0xf2, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x6a5c, .value=0x10}, {.addr=0x6a5d, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x6a5c, .value=0x10, .type=IO_READ},
        {.addr=0x6a5d, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x93ca, .a=0x1c, .x=0xcd, .y=0x2f, .sp=0xc4, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x93ca, .value=0x10}, {.addr=0x93cb, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x9354, .a=0x1c, .x=0xcd, .y=0x2f, .sp=0xc4, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x93ca, .value=0x10}, {.addr=0x93cb, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x93ca, .value=0x10, .type=IO_READ},
        {.addr=0x93cb, .value=0x88, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xca96, .a=0xa4, .x=0xb3, .y=0x60, .sp=0x8f, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0xca96, .value=0x10}, {.addr=0xca97, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xcadd, .a=0xa4, .x=0xb3, .y=0x60, .sp=0x8f, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0xca96, .value=0x10}, {.addr=0xca97, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xca96, .value=0x10, .type=IO_READ},
        {.addr=0xca97, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x567d, .a=0x5d, .x=0x06, .y=0x1d, .sp=0x64, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x567d, .value=0x10}, {.addr=0x567e, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x567f, .a=0x5d, .x=0x06, .y=0x1d, .sp=0x64, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x567d, .value=0x10}, {.addr=0x567e, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x567d, .value=0x10, .type=IO_READ},
        {.addr=0x567e, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x3672, .a=0xbd, .x=0xa7, .y=0xe4, .sp=0x7d, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x3672, .value=0x10}, {.addr=0x3673, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x360c, .a=0xbd, .x=0xa7, .y=0xe4, .sp=0x7d, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x3672, .value=0x10}, {.addr=0x3673, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x3672, .value=0x10, .type=IO_READ},
        {.addr=0x3673, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x8cdc, .a=0x48, .x=0x90, .y=0x67, .sp=0xf2, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x8cdc, .value=0x10}, {.addr=0x8cdd, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x8cf4, .a=0x48, .x=0x90, .y=0x67, .sp=0xf2, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x8cdc, .value=0x10}, {.addr=0x8cdd, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x8cdc, .value=0x10, .type=IO_READ},
        {.addr=0x8cdd, .value=0x16, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x09c8, .a=0xe9, .x=0x0a, .y=0x1c, .sp=0x37, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x09c8, .value=0x10}, {.addr=0x09c9, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x09ca, .a=0xe9, .x=0x0a, .y=0x1c, .sp=0x37, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x09c8, .value=0x10}, {.addr=0x09c9, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x09c8, .value=0x10, .type=IO_READ},
        {.addr=0x09c9, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x9dc4, .a=0x76, .x=0x2e, .y=0xed, .sp=0x47, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x9dc4, .value=0x10}, {.addr=0x9dc5, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x9d53, .a=0x76, .x=0x2e, .y=0xed, .sp=0x47, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x9dc4, .value=0x10}, {.addr=0x9dc5, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x9dc4, .value=0x10, .type=IO_READ},
        {.addr=0x9dc5, .value=0x8d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xee50, .a=0x01, .x=0xbe, .y=0xee, .sp=0xb5, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xee50, .value=0x10}, {.addr=0xee51, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xee52, .a=0x01, .x=0xbe, .y=0xee, .sp=0xb5, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xee50, .value=0x10}, {.addr=0xee51, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xee50, .value=0x10, .type=IO_READ},
        {.addr=0xee51, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x4bc9, .a=0x4b, .x=0x7c, .y=0x6f, .sp=0xaa, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x4bc9, .value=0x10}, {.addr=0x4bca, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x4b7a, .a=0x4b, .x=0x7c, .y=0x6f, .sp=0xaa, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x4bc9, .value=0x10}, {.addr=0x4bca, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x4bc9, .value=0x10, .type=IO_READ},
        {.addr=0x4bca, .value=0xaf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x944e, .a=0x55, .x=0x29, .y=0x68, .sp=0x96, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x944e, .value=0x10}, {.addr=0x944f, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x9494, .a=0x55, .x=0x29, .y=0x68, .sp=0x96, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x944e, .value=0x10}, {.addr=0x944f, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x944e, .value=0x10, .type=IO_READ},
        {.addr=0x944f, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xce0a, .a=0x66, .x=0x12, .y=0xd6, .sp=0x38, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xce0a, .value=0x10}, {.addr=0xce0b, .value=0x29}};
    const struct CPU_State final_cpu = {.pc=0xce0c, .a=0x66, .x=0x12, .y=0xd6, .sp=0x38, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0xce0a, .value=0x10}, {.addr=0xce0b, .value=0x29}};
    const struct BusEvent events[] = {
        {.addr=0xce0a, .value=0x10, .type=IO_READ},
        {.addr=0xce0b, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x07e5, .a=0x88, .x=0x60, .y=0x80, .sp=0xbe, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x07e5, .value=0x10}, {.addr=0x07e6, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x07e7, .a=0x88, .x=0x60, .y=0x80, .sp=0xbe, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x07e5, .value=0x10}, {.addr=0x07e6, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x07e5, .value=0x10, .type=IO_READ},
        {.addr=0x07e6, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x13dd, .a=0x45, .x=0xe8, .y=0x36, .sp=0x8f, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x13dd, .value=0x10}, {.addr=0x13de, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x13df, .a=0x45, .x=0xe8, .y=0x36, .sp=0x8f, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x13dd, .value=0x10}, {.addr=0x13de, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x13dd, .value=0x10, .type=IO_READ},
        {.addr=0x13de, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0300) {
    const struct CPU_State initial_cpu = {.pc=0x3e11, .a=0x63, .x=0xca, .y=0xff, .sp=0x76, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x3e11, .value=0x10}, {.addr=0x3e12, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x3e13, .a=0x63, .x=0xca, .y=0xff, .sp=0x76, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x3e11, .value=0x10}, {.addr=0x3e12, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x3e11, .value=0x10, .type=IO_READ},
        {.addr=0x3e12, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0301) {
    const struct CPU_State initial_cpu = {.pc=0x6fdb, .a=0xae, .x=0x23, .y=0x52, .sp=0xf3, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x6fdb, .value=0x10}, {.addr=0x6fdc, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x6fde, .a=0xae, .x=0x23, .y=0x52, .sp=0xf3, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x6fdb, .value=0x10}, {.addr=0x6fdc, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x6fdb, .value=0x10, .type=IO_READ},
        {.addr=0x6fdc, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0302) {
    const struct CPU_State initial_cpu = {.pc=0x2dcc, .a=0x79, .x=0x85, .y=0xe3, .sp=0xb1, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x2dcc, .value=0x10}, {.addr=0x2dcd, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x2df9, .a=0x79, .x=0x85, .y=0xe3, .sp=0xb1, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x2dcc, .value=0x10}, {.addr=0x2dcd, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x2dcc, .value=0x10, .type=IO_READ},
        {.addr=0x2dcd, .value=0x2b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0303) {
    const struct CPU_State initial_cpu = {.pc=0x6c57, .a=0xc6, .x=0x7e, .y=0x24, .sp=0xcf, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x6c57, .value=0x10}, {.addr=0x6c58, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x6c4f, .a=0xc6, .x=0x7e, .y=0x24, .sp=0xcf, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x6c57, .value=0x10}, {.addr=0x6c58, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x6c57, .value=0x10, .type=IO_READ},
        {.addr=0x6c58, .value=0xf6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0304) {
    const struct CPU_State initial_cpu = {.pc=0xb555, .a=0x82, .x=0xe2, .y=0xf7, .sp=0x58, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xb555, .value=0x10}, {.addr=0xb556, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0xb557, .a=0x82, .x=0xe2, .y=0xf7, .sp=0x58, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xb555, .value=0x10}, {.addr=0xb556, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0xb555, .value=0x10, .type=IO_READ},
        {.addr=0xb556, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0305) {
    const struct CPU_State initial_cpu = {.pc=0x6b3e, .a=0x5c, .x=0x27, .y=0x3a, .sp=0x0d, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x6b3e, .value=0x10}, {.addr=0x6b3f, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x6b9f, .a=0x5c, .x=0x27, .y=0x3a, .sp=0x0d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x6b3e, .value=0x10}, {.addr=0x6b3f, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x6b3e, .value=0x10, .type=IO_READ},
        {.addr=0x6b3f, .value=0x5f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0306) {
    const struct CPU_State initial_cpu = {.pc=0x62d6, .a=0x75, .x=0xe3, .y=0x49, .sp=0xf0, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x62d6, .value=0x10}, {.addr=0x62d7, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x62d8, .a=0x75, .x=0xe3, .y=0x49, .sp=0xf0, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x62d6, .value=0x10}, {.addr=0x62d7, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x62d6, .value=0x10, .type=IO_READ},
        {.addr=0x62d7, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0307) {
    const struct CPU_State initial_cpu = {.pc=0xade6, .a=0xfc, .x=0x9c, .y=0xd8, .sp=0xa3, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xade6, .value=0x10}, {.addr=0xade7, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xae48, .a=0xfc, .x=0x9c, .y=0xd8, .sp=0xa3, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0xade6, .value=0x10}, {.addr=0xade7, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xade6, .value=0x10, .type=IO_READ},
        {.addr=0xade7, .value=0x60, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0308) {
    const struct CPU_State initial_cpu = {.pc=0xd98f, .a=0xc8, .x=0xc4, .y=0xb4, .sp=0x43, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xd98f, .value=0x10}, {.addr=0xd990, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0xd920, .a=0xc8, .x=0xc4, .y=0xb4, .sp=0x43, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xd98f, .value=0x10}, {.addr=0xd990, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0xd98f, .value=0x10, .type=IO_READ},
        {.addr=0xd990, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0309) {
    const struct CPU_State initial_cpu = {.pc=0xf8b9, .a=0x48, .x=0x7e, .y=0x60, .sp=0xc8, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0xf8b9, .value=0x10}, {.addr=0xf8ba, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf928, .a=0x48, .x=0x7e, .y=0x60, .sp=0xc8, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xf8b9, .value=0x10}, {.addr=0xf8ba, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf8b9, .value=0x10, .type=IO_READ},
        {.addr=0xf8ba, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_030A) {
    const struct CPU_State initial_cpu = {.pc=0x4a61, .a=0x38, .x=0xd8, .y=0x63, .sp=0x1a, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x4a61, .value=0x10}, {.addr=0x4a62, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x4a73, .a=0x38, .x=0xd8, .y=0x63, .sp=0x1a, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x4a61, .value=0x10}, {.addr=0x4a62, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x4a61, .value=0x10, .type=IO_READ},
        {.addr=0x4a62, .value=0x10, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_030B) {
    const struct CPU_State initial_cpu = {.pc=0x0aef, .a=0xef, .x=0x71, .y=0x70, .sp=0xe6, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0aef, .value=0x10}, {.addr=0x0af0, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x0af1, .a=0xef, .x=0x71, .y=0x70, .sp=0xe6, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x0aef, .value=0x10}, {.addr=0x0af0, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x0aef, .value=0x10, .type=IO_READ},
        {.addr=0x0af0, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_030C) {
    const struct CPU_State initial_cpu = {.pc=0x641f, .a=0x73, .x=0x94, .y=0xc0, .sp=0x4b, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x641f, .value=0x10}, {.addr=0x6420, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x647e, .a=0x73, .x=0x94, .y=0xc0, .sp=0x4b, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x641f, .value=0x10}, {.addr=0x6420, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x641f, .value=0x10, .type=IO_READ},
        {.addr=0x6420, .value=0x5d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_030D) {
    const struct CPU_State initial_cpu = {.pc=0xd3a3, .a=0x51, .x=0xd3, .y=0x25, .sp=0xb0, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xd3a3, .value=0x10}, {.addr=0xd3a4, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xd3c0, .a=0x51, .x=0xd3, .y=0x25, .sp=0xb0, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0xd3a3, .value=0x10}, {.addr=0xd3a4, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xd3a3, .value=0x10, .type=IO_READ},
        {.addr=0xd3a4, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_030E) {
    const struct CPU_State initial_cpu = {.pc=0x7239, .a=0xe6, .x=0x92, .y=0xfa, .sp=0x95, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x7239, .value=0x10}, {.addr=0x723a, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x72b3, .a=0xe6, .x=0x92, .y=0xfa, .sp=0x95, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x7239, .value=0x10}, {.addr=0x723a, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x7239, .value=0x10, .type=IO_READ},
        {.addr=0x723a, .value=0x78, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_030F) {
    const struct CPU_State initial_cpu = {.pc=0x0d6e, .a=0xb3, .x=0x17, .y=0x3d, .sp=0x27, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0d6e, .value=0x10}, {.addr=0x0d6f, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x0d70, .a=0xb3, .x=0x17, .y=0x3d, .sp=0x27, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0d6e, .value=0x10}, {.addr=0x0d6f, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x0d6e, .value=0x10, .type=IO_READ},
        {.addr=0x0d6f, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0310) {
    const struct CPU_State initial_cpu = {.pc=0x9a04, .a=0x98, .x=0x5b, .y=0xdf, .sp=0x0a, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x9a04, .value=0x10}, {.addr=0x9a05, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x9a06, .a=0x98, .x=0x5b, .y=0xdf, .sp=0x0a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x9a04, .value=0x10}, {.addr=0x9a05, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x9a04, .value=0x10, .type=IO_READ},
        {.addr=0x9a05, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0311) {
    const struct CPU_State initial_cpu = {.pc=0xe4ff, .a=0xf4, .x=0xe3, .y=0x0f, .sp=0x4b, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xe4ff, .value=0x10}, {.addr=0xe500, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xe501, .a=0xf4, .x=0xe3, .y=0x0f, .sp=0x4b, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0xe4ff, .value=0x10}, {.addr=0xe500, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xe4ff, .value=0x10, .type=IO_READ},
        {.addr=0xe500, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0312) {
    const struct CPU_State initial_cpu = {.pc=0xbbc0, .a=0x2c, .x=0xa1, .y=0x2b, .sp=0xd1, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xbbc0, .value=0x10}, {.addr=0xbbc1, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xbbc2, .a=0x2c, .x=0xa1, .y=0x2b, .sp=0xd1, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xbbc0, .value=0x10}, {.addr=0xbbc1, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xbbc0, .value=0x10, .type=IO_READ},
        {.addr=0xbbc1, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0313) {
    const struct CPU_State initial_cpu = {.pc=0xcd53, .a=0xc1, .x=0xa9, .y=0x64, .sp=0x67, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0xcd53, .value=0x10}, {.addr=0xcd54, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xcd55, .a=0xc1, .x=0xa9, .y=0x64, .sp=0x67, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xcd53, .value=0x10}, {.addr=0xcd54, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xcd53, .value=0x10, .type=IO_READ},
        {.addr=0xcd54, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0314) {
    const struct CPU_State initial_cpu = {.pc=0xc782, .a=0xa9, .x=0x41, .y=0xb3, .sp=0x5c, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xc782, .value=0x10}, {.addr=0xc783, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xc79c, .a=0xa9, .x=0x41, .y=0xb3, .sp=0x5c, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xc782, .value=0x10}, {.addr=0xc783, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xc782, .value=0x10, .type=IO_READ},
        {.addr=0xc783, .value=0x18, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0315) {
    const struct CPU_State initial_cpu = {.pc=0x5722, .a=0x8c, .x=0x02, .y=0x88, .sp=0x27, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x5722, .value=0x10}, {.addr=0x5723, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0x56af, .a=0x8c, .x=0x02, .y=0x88, .sp=0x27, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x5722, .value=0x10}, {.addr=0x5723, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0x5722, .value=0x10, .type=IO_READ},
        {.addr=0x5723, .value=0x8b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0316) {
    const struct CPU_State initial_cpu = {.pc=0x0f87, .a=0x5e, .x=0xd8, .y=0x41, .sp=0xb5, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0f87, .value=0x10}, {.addr=0x0f88, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x0fde, .a=0x5e, .x=0xd8, .y=0x41, .sp=0xb5, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0f87, .value=0x10}, {.addr=0x0f88, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x0f87, .value=0x10, .type=IO_READ},
        {.addr=0x0f88, .value=0x55, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0317) {
    const struct CPU_State initial_cpu = {.pc=0x42b4, .a=0x37, .x=0x21, .y=0x40, .sp=0x45, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x42b4, .value=0x10}, {.addr=0x42b5, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x4288, .a=0x37, .x=0x21, .y=0x40, .sp=0x45, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x42b4, .value=0x10}, {.addr=0x42b5, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x42b4, .value=0x10, .type=IO_READ},
        {.addr=0x42b5, .value=0xd2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0318) {
    const struct CPU_State initial_cpu = {.pc=0x85cb, .a=0xdf, .x=0x35, .y=0xe8, .sp=0x36, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x85cb, .value=0x10}, {.addr=0x85cc, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x8612, .a=0xdf, .x=0x35, .y=0xe8, .sp=0x36, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x85cb, .value=0x10}, {.addr=0x85cc, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x85cb, .value=0x10, .type=IO_READ},
        {.addr=0x85cc, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0319) {
    const struct CPU_State initial_cpu = {.pc=0x48b9, .a=0x55, .x=0x5d, .y=0x5d, .sp=0x4a, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x48b9, .value=0x10}, {.addr=0x48ba, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x48bb, .a=0x55, .x=0x5d, .y=0x5d, .sp=0x4a, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x48b9, .value=0x10}, {.addr=0x48ba, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x48b9, .value=0x10, .type=IO_READ},
        {.addr=0x48ba, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_031A) {
    const struct CPU_State initial_cpu = {.pc=0x6c82, .a=0x7c, .x=0xb8, .y=0xb5, .sp=0xa5, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x6c82, .value=0x10}, {.addr=0x6c83, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x6cd4, .a=0x7c, .x=0xb8, .y=0xb5, .sp=0xa5, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x6c82, .value=0x10}, {.addr=0x6c83, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x6c82, .value=0x10, .type=IO_READ},
        {.addr=0x6c83, .value=0x50, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_031B) {
    const struct CPU_State initial_cpu = {.pc=0x1c3a, .a=0x37, .x=0x5c, .y=0x7e, .sp=0x18, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x1c3a, .value=0x10}, {.addr=0x1c3b, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x1cab, .a=0x37, .x=0x5c, .y=0x7e, .sp=0x18, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x1c3a, .value=0x10}, {.addr=0x1c3b, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x1c3a, .value=0x10, .type=IO_READ},
        {.addr=0x1c3b, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_031C) {
    const struct CPU_State initial_cpu = {.pc=0xdb4d, .a=0x8d, .x=0x65, .y=0x9c, .sp=0x05, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xdb4d, .value=0x10}, {.addr=0xdb4e, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0xdb4f, .a=0x8d, .x=0x65, .y=0x9c, .sp=0x05, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xdb4d, .value=0x10}, {.addr=0xdb4e, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0xdb4d, .value=0x10, .type=IO_READ},
        {.addr=0xdb4e, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_031D) {
    const struct CPU_State initial_cpu = {.pc=0x6d26, .a=0x5b, .x=0xd7, .y=0xde, .sp=0xfb, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x6d26, .value=0x10}, {.addr=0x6d27, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x6d28, .a=0x5b, .x=0xd7, .y=0xde, .sp=0xfb, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x6d26, .value=0x10}, {.addr=0x6d27, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x6d26, .value=0x10, .type=IO_READ},
        {.addr=0x6d27, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_031E) {
    const struct CPU_State initial_cpu = {.pc=0x16ac, .a=0x8c, .x=0xa3, .y=0x06, .sp=0xb6, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x16ac, .value=0x10}, {.addr=0x16ad, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x16a7, .a=0x8c, .x=0xa3, .y=0x06, .sp=0xb6, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x16ac, .value=0x10}, {.addr=0x16ad, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x16ac, .value=0x10, .type=IO_READ},
        {.addr=0x16ad, .value=0xf9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_031F) {
    const struct CPU_State initial_cpu = {.pc=0xb5bb, .a=0xf0, .x=0xb5, .y=0x35, .sp=0x29, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xb5bb, .value=0x10}, {.addr=0xb5bc, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xb5e9, .a=0xf0, .x=0xb5, .y=0x35, .sp=0x29, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0xb5bb, .value=0x10}, {.addr=0xb5bc, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xb5bb, .value=0x10, .type=IO_READ},
        {.addr=0xb5bc, .value=0x2c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0320) {
    const struct CPU_State initial_cpu = {.pc=0x2f0c, .a=0x78, .x=0xe9, .y=0xd8, .sp=0x2c, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x2f0c, .value=0x10}, {.addr=0x2f0d, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x2f0e, .a=0x78, .x=0xe9, .y=0xd8, .sp=0x2c, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x2f0c, .value=0x10}, {.addr=0x2f0d, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x2f0c, .value=0x10, .type=IO_READ},
        {.addr=0x2f0d, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0321) {
    const struct CPU_State initial_cpu = {.pc=0xe6c6, .a=0x42, .x=0xb9, .y=0xd7, .sp=0x92, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xe6c6, .value=0x10}, {.addr=0xe6c7, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xe72b, .a=0x42, .x=0xb9, .y=0xd7, .sp=0x92, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0xe6c6, .value=0x10}, {.addr=0xe6c7, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xe6c6, .value=0x10, .type=IO_READ},
        {.addr=0xe6c7, .value=0x63, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0322) {
    const struct CPU_State initial_cpu = {.pc=0x53cb, .a=0xf3, .x=0x30, .y=0xa8, .sp=0xfa, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x53cb, .value=0x10}, {.addr=0x53cc, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0x53cd, .a=0xf3, .x=0x30, .y=0xa8, .sp=0xfa, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x53cb, .value=0x10}, {.addr=0x53cc, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0x53cb, .value=0x10, .type=IO_READ},
        {.addr=0x53cc, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0323) {
    const struct CPU_State initial_cpu = {.pc=0x0595, .a=0x46, .x=0xee, .y=0xeb, .sp=0x6b, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0595, .value=0x10}, {.addr=0x0596, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0x0597, .a=0x46, .x=0xee, .y=0xeb, .sp=0x6b, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0595, .value=0x10}, {.addr=0x0596, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0x0595, .value=0x10, .type=IO_READ},
        {.addr=0x0596, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0324) {
    const struct CPU_State initial_cpu = {.pc=0xc1a9, .a=0x43, .x=0xc8, .y=0xfc, .sp=0x07, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xc1a9, .value=0x10}, {.addr=0xc1aa, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xc1ab, .a=0x43, .x=0xc8, .y=0xfc, .sp=0x07, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xc1a9, .value=0x10}, {.addr=0xc1aa, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xc1a9, .value=0x10, .type=IO_READ},
        {.addr=0xc1aa, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0325) {
    const struct CPU_State initial_cpu = {.pc=0xc148, .a=0x76, .x=0xa4, .y=0x08, .sp=0x3d, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xc148, .value=0x10}, {.addr=0xc149, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xc10a, .a=0x76, .x=0xa4, .y=0x08, .sp=0x3d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xc148, .value=0x10}, {.addr=0xc149, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xc148, .value=0x10, .type=IO_READ},
        {.addr=0xc149, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0326) {
    const struct CPU_State initial_cpu = {.pc=0x52d3, .a=0x5a, .x=0x0d, .y=0xf4, .sp=0x7d, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x52d3, .value=0x10}, {.addr=0x52d4, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x52d5, .a=0x5a, .x=0x0d, .y=0xf4, .sp=0x7d, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x52d3, .value=0x10}, {.addr=0x52d4, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x52d3, .value=0x10, .type=IO_READ},
        {.addr=0x52d4, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0327) {
    const struct CPU_State initial_cpu = {.pc=0x4481, .a=0x35, .x=0x76, .y=0xea, .sp=0x91, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x4481, .value=0x10}, {.addr=0x4482, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x4483, .a=0x35, .x=0x76, .y=0xea, .sp=0x91, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x4481, .value=0x10}, {.addr=0x4482, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x4481, .value=0x10, .type=IO_READ},
        {.addr=0x4482, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0328) {
    const struct CPU_State initial_cpu = {.pc=0xd969, .a=0x5b, .x=0xd6, .y=0x52, .sp=0x73, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xd969, .value=0x10}, {.addr=0xd96a, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0xd951, .a=0x5b, .x=0xd6, .y=0x52, .sp=0x73, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xd969, .value=0x10}, {.addr=0xd96a, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0xd969, .value=0x10, .type=IO_READ},
        {.addr=0xd96a, .value=0xe6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0329) {
    const struct CPU_State initial_cpu = {.pc=0xc72e, .a=0xc5, .x=0xbe, .y=0x12, .sp=0x2b, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xc72e, .value=0x10}, {.addr=0xc72f, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0xc730, .a=0xc5, .x=0xbe, .y=0x12, .sp=0x2b, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xc72e, .value=0x10}, {.addr=0xc72f, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0xc72e, .value=0x10, .type=IO_READ},
        {.addr=0xc72f, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_032A) {
    const struct CPU_State initial_cpu = {.pc=0x2070, .a=0x57, .x=0xd6, .y=0xc0, .sp=0xa5, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x2070, .value=0x10}, {.addr=0x2071, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x20ca, .a=0x57, .x=0xd6, .y=0xc0, .sp=0xa5, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x2070, .value=0x10}, {.addr=0x2071, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x2070, .value=0x10, .type=IO_READ},
        {.addr=0x2071, .value=0x58, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_032B) {
    const struct CPU_State initial_cpu = {.pc=0x752b, .a=0xaa, .x=0x4c, .y=0x9b, .sp=0x85, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x752b, .value=0x10}, {.addr=0x752c, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x752d, .a=0xaa, .x=0x4c, .y=0x9b, .sp=0x85, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x752b, .value=0x10}, {.addr=0x752c, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x752b, .value=0x10, .type=IO_READ},
        {.addr=0x752c, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_032C) {
    const struct CPU_State initial_cpu = {.pc=0x0e96, .a=0x0c, .x=0xe7, .y=0x82, .sp=0xd6, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x0e96, .value=0x10}, {.addr=0x0e97, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x0e98, .a=0x0c, .x=0xe7, .y=0x82, .sp=0xd6, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x0e96, .value=0x10}, {.addr=0x0e97, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x0e96, .value=0x10, .type=IO_READ},
        {.addr=0x0e97, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_032D) {
    const struct CPU_State initial_cpu = {.pc=0x128c, .a=0xbe, .x=0x94, .y=0x8a, .sp=0x18, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x128c, .value=0x10}, {.addr=0x128d, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x128e, .a=0xbe, .x=0x94, .y=0x8a, .sp=0x18, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x128c, .value=0x10}, {.addr=0x128d, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x128c, .value=0x10, .type=IO_READ},
        {.addr=0x128d, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_032E) {
    const struct CPU_State initial_cpu = {.pc=0x6687, .a=0x68, .x=0x6f, .y=0x18, .sp=0x15, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x6687, .value=0x10}, {.addr=0x6688, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0x6689, .a=0x68, .x=0x6f, .y=0x18, .sp=0x15, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x6687, .value=0x10}, {.addr=0x6688, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0x6687, .value=0x10, .type=IO_READ},
        {.addr=0x6688, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_032F) {
    const struct CPU_State initial_cpu = {.pc=0x410a, .a=0xbe, .x=0x83, .y=0x9d, .sp=0x5c, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x410a, .value=0x10}, {.addr=0x410b, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x4149, .a=0xbe, .x=0x83, .y=0x9d, .sp=0x5c, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x410a, .value=0x10}, {.addr=0x410b, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x410a, .value=0x10, .type=IO_READ},
        {.addr=0x410b, .value=0x3d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0330) {
    const struct CPU_State initial_cpu = {.pc=0x2d2c, .a=0x19, .x=0x55, .y=0x78, .sp=0x74, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x2d2c, .value=0x10}, {.addr=0x2d2d, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x2d2e, .a=0x19, .x=0x55, .y=0x78, .sp=0x74, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x2d2c, .value=0x10}, {.addr=0x2d2d, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x2d2c, .value=0x10, .type=IO_READ},
        {.addr=0x2d2d, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0331) {
    const struct CPU_State initial_cpu = {.pc=0x3989, .a=0xdd, .x=0xb7, .y=0xf9, .sp=0xae, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x3989, .value=0x10}, {.addr=0x398a, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x398b, .a=0xdd, .x=0xb7, .y=0xf9, .sp=0xae, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x3989, .value=0x10}, {.addr=0x398a, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x3989, .value=0x10, .type=IO_READ},
        {.addr=0x398a, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0332) {
    const struct CPU_State initial_cpu = {.pc=0xdf22, .a=0x58, .x=0x88, .y=0x4f, .sp=0xfc, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xdf22, .value=0x10}, {.addr=0xdf23, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xdf7a, .a=0x58, .x=0x88, .y=0x4f, .sp=0xfc, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xdf22, .value=0x10}, {.addr=0xdf23, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xdf22, .value=0x10, .type=IO_READ},
        {.addr=0xdf23, .value=0x56, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0333) {
    const struct CPU_State initial_cpu = {.pc=0xf8bc, .a=0xd4, .x=0x6e, .y=0xdc, .sp=0x38, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0xf8bc, .value=0x10}, {.addr=0xf8bd, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xf8be, .a=0xd4, .x=0x6e, .y=0xdc, .sp=0x38, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0xf8bc, .value=0x10}, {.addr=0xf8bd, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xf8bc, .value=0x10, .type=IO_READ},
        {.addr=0xf8bd, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0334) {
    const struct CPU_State initial_cpu = {.pc=0xf768, .a=0xc7, .x=0x7a, .y=0xe9, .sp=0x8c, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xf768, .value=0x10}, {.addr=0xf769, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xf76a, .a=0xc7, .x=0x7a, .y=0xe9, .sp=0x8c, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xf768, .value=0x10}, {.addr=0xf769, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xf768, .value=0x10, .type=IO_READ},
        {.addr=0xf769, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0335) {
    const struct CPU_State initial_cpu = {.pc=0x0a86, .a=0x99, .x=0x8f, .y=0xf8, .sp=0xbb, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0a86, .value=0x10}, {.addr=0x0a87, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x0a1c, .a=0x99, .x=0x8f, .y=0xf8, .sp=0xbb, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0a86, .value=0x10}, {.addr=0x0a87, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x0a86, .value=0x10, .type=IO_READ},
        {.addr=0x0a87, .value=0x94, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0336) {
    const struct CPU_State initial_cpu = {.pc=0x1863, .a=0x69, .x=0x71, .y=0xd3, .sp=0x01, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x1863, .value=0x10}, {.addr=0x1864, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x1877, .a=0x69, .x=0x71, .y=0xd3, .sp=0x01, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x1863, .value=0x10}, {.addr=0x1864, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x1863, .value=0x10, .type=IO_READ},
        {.addr=0x1864, .value=0x12, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0337) {
    const struct CPU_State initial_cpu = {.pc=0xfcf1, .a=0x34, .x=0x00, .y=0x26, .sp=0xd3, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0xfcf1, .value=0x10}, {.addr=0xfcf2, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xfcf3, .a=0x34, .x=0x00, .y=0x26, .sp=0xd3, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0xfcf1, .value=0x10}, {.addr=0xfcf2, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xfcf1, .value=0x10, .type=IO_READ},
        {.addr=0xfcf2, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0338) {
    const struct CPU_State initial_cpu = {.pc=0xb29b, .a=0x2f, .x=0x52, .y=0x6a, .sp=0x2a, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xb29b, .value=0x10}, {.addr=0xb29c, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xb29d, .a=0x2f, .x=0x52, .y=0x6a, .sp=0x2a, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xb29b, .value=0x10}, {.addr=0xb29c, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xb29b, .value=0x10, .type=IO_READ},
        {.addr=0xb29c, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0339) {
    const struct CPU_State initial_cpu = {.pc=0xf5a5, .a=0x33, .x=0x16, .y=0x1d, .sp=0x01, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0xf5a5, .value=0x10}, {.addr=0xf5a6, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xf57c, .a=0x33, .x=0x16, .y=0x1d, .sp=0x01, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0xf5a5, .value=0x10}, {.addr=0xf5a6, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xf5a5, .value=0x10, .type=IO_READ},
        {.addr=0xf5a6, .value=0xd5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_033A) {
    const struct CPU_State initial_cpu = {.pc=0xf7c2, .a=0x60, .x=0x41, .y=0x2c, .sp=0xc4, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xf7c2, .value=0x10}, {.addr=0xf7c3, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xf7c4, .a=0x60, .x=0x41, .y=0x2c, .sp=0xc4, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xf7c2, .value=0x10}, {.addr=0xf7c3, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xf7c2, .value=0x10, .type=IO_READ},
        {.addr=0xf7c3, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_033B) {
    const struct CPU_State initial_cpu = {.pc=0x6db2, .a=0x00, .x=0x72, .y=0x82, .sp=0x47, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x6db2, .value=0x10}, {.addr=0x6db3, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x6d75, .a=0x00, .x=0x72, .y=0x82, .sp=0x47, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x6db2, .value=0x10}, {.addr=0x6db3, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x6db2, .value=0x10, .type=IO_READ},
        {.addr=0x6db3, .value=0xc1, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_033C) {
    const struct CPU_State initial_cpu = {.pc=0x56ea, .a=0xeb, .x=0xe5, .y=0xab, .sp=0x29, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x56ea, .value=0x10}, {.addr=0x56eb, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x56ec, .a=0xeb, .x=0xe5, .y=0xab, .sp=0x29, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x56ea, .value=0x10}, {.addr=0x56eb, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x56ea, .value=0x10, .type=IO_READ},
        {.addr=0x56eb, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_033D) {
    const struct CPU_State initial_cpu = {.pc=0x8317, .a=0x0f, .x=0x5b, .y=0x55, .sp=0xd1, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x8317, .value=0x10}, {.addr=0x8318, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x82d9, .a=0x0f, .x=0x5b, .y=0x55, .sp=0xd1, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x8317, .value=0x10}, {.addr=0x8318, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x8317, .value=0x10, .type=IO_READ},
        {.addr=0x8318, .value=0xc0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_033E) {
    const struct CPU_State initial_cpu = {.pc=0x5499, .a=0xc0, .x=0x33, .y=0x1a, .sp=0x76, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x5499, .value=0x10}, {.addr=0x549a, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x549b, .a=0xc0, .x=0x33, .y=0x1a, .sp=0x76, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x5499, .value=0x10}, {.addr=0x549a, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x5499, .value=0x10, .type=IO_READ},
        {.addr=0x549a, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_033F) {
    const struct CPU_State initial_cpu = {.pc=0x7ef6, .a=0x70, .x=0xf8, .y=0x3b, .sp=0xa9, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x7ef6, .value=0x10}, {.addr=0x7ef7, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x7ed3, .a=0x70, .x=0xf8, .y=0x3b, .sp=0xa9, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x7ef6, .value=0x10}, {.addr=0x7ef7, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x7ef6, .value=0x10, .type=IO_READ},
        {.addr=0x7ef7, .value=0xdb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0340) {
    const struct CPU_State initial_cpu = {.pc=0x6f9b, .a=0x49, .x=0xc0, .y=0x02, .sp=0x4c, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x6f9b, .value=0x10}, {.addr=0x6f9c, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x6fe8, .a=0x49, .x=0xc0, .y=0x02, .sp=0x4c, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x6f9b, .value=0x10}, {.addr=0x6f9c, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x6f9b, .value=0x10, .type=IO_READ},
        {.addr=0x6f9c, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0341) {
    const struct CPU_State initial_cpu = {.pc=0x3998, .a=0x5e, .x=0x79, .y=0x98, .sp=0x24, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x3998, .value=0x10}, {.addr=0x3999, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x3959, .a=0x5e, .x=0x79, .y=0x98, .sp=0x24, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x3998, .value=0x10}, {.addr=0x3999, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x3998, .value=0x10, .type=IO_READ},
        {.addr=0x3999, .value=0xbf, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0342) {
    const struct CPU_State initial_cpu = {.pc=0x6707, .a=0x4c, .x=0xea, .y=0xec, .sp=0x94, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x6707, .value=0x10}, {.addr=0x6708, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x6773, .a=0x4c, .x=0xea, .y=0xec, .sp=0x94, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x6707, .value=0x10}, {.addr=0x6708, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x6707, .value=0x10, .type=IO_READ},
        {.addr=0x6708, .value=0x6a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0343) {
    const struct CPU_State initial_cpu = {.pc=0xa40a, .a=0xbf, .x=0xd8, .y=0xcf, .sp=0x74, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0xa40a, .value=0x10}, {.addr=0xa40b, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xa44b, .a=0xbf, .x=0xd8, .y=0xcf, .sp=0x74, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xa40a, .value=0x10}, {.addr=0xa40b, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xa40a, .value=0x10, .type=IO_READ},
        {.addr=0xa40b, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0344) {
    const struct CPU_State initial_cpu = {.pc=0xdafe, .a=0x70, .x=0x9f, .y=0x0b, .sp=0x01, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xdafe, .value=0x10}, {.addr=0xdaff, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xdb3b, .a=0x70, .x=0x9f, .y=0x0b, .sp=0x01, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0xdafe, .value=0x10}, {.addr=0xdaff, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xdafe, .value=0x10, .type=IO_READ},
        {.addr=0xdaff, .value=0x3b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0345) {
    const struct CPU_State initial_cpu = {.pc=0xc308, .a=0x5e, .x=0x1a, .y=0x6e, .sp=0xc3, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xc308, .value=0x10}, {.addr=0xc309, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xc30a, .a=0x5e, .x=0x1a, .y=0x6e, .sp=0xc3, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0xc308, .value=0x10}, {.addr=0xc309, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xc308, .value=0x10, .type=IO_READ},
        {.addr=0xc309, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0346) {
    const struct CPU_State initial_cpu = {.pc=0x769b, .a=0xf4, .x=0x5b, .y=0xe1, .sp=0xe1, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x769b, .value=0x10}, {.addr=0x769c, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x769d, .a=0xf4, .x=0x5b, .y=0xe1, .sp=0xe1, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x769b, .value=0x10}, {.addr=0x769c, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x769b, .value=0x10, .type=IO_READ},
        {.addr=0x769c, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0347) {
    const struct CPU_State initial_cpu = {.pc=0x39c5, .a=0x34, .x=0x37, .y=0x11, .sp=0x92, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x39c5, .value=0x10}, {.addr=0x39c6, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x3a07, .a=0x34, .x=0x37, .y=0x11, .sp=0x92, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x39c5, .value=0x10}, {.addr=0x39c6, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x39c5, .value=0x10, .type=IO_READ},
        {.addr=0x39c6, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0348) {
    const struct CPU_State initial_cpu = {.pc=0xb25c, .a=0xbe, .x=0x1f, .y=0xa3, .sp=0xa3, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xb25c, .value=0x10}, {.addr=0xb25d, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xb23c, .a=0xbe, .x=0x1f, .y=0xa3, .sp=0xa3, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xb25c, .value=0x10}, {.addr=0xb25d, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xb25c, .value=0x10, .type=IO_READ},
        {.addr=0xb25d, .value=0xde, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0349) {
    const struct CPU_State initial_cpu = {.pc=0x45e6, .a=0x1c, .x=0xde, .y=0xd2, .sp=0x0e, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x45e6, .value=0x10}, {.addr=0x45e7, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0x45ef, .a=0x1c, .x=0xde, .y=0xd2, .sp=0x0e, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x45e6, .value=0x10}, {.addr=0x45e7, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0x45e6, .value=0x10, .type=IO_READ},
        {.addr=0x45e7, .value=0x07, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_034A) {
    const struct CPU_State initial_cpu = {.pc=0xe91c, .a=0x3a, .x=0xd4, .y=0xcc, .sp=0xd6, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xe91c, .value=0x10}, {.addr=0xe91d, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xe91e, .a=0x3a, .x=0xd4, .y=0xcc, .sp=0xd6, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xe91c, .value=0x10}, {.addr=0xe91d, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xe91c, .value=0x10, .type=IO_READ},
        {.addr=0xe91d, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_034B) {
    const struct CPU_State initial_cpu = {.pc=0x9c33, .a=0x5d, .x=0x89, .y=0x88, .sp=0x5b, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x9c33, .value=0x10}, {.addr=0x9c34, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x9c35, .a=0x5d, .x=0x89, .y=0x88, .sp=0x5b, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x9c33, .value=0x10}, {.addr=0x9c34, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x9c33, .value=0x10, .type=IO_READ},
        {.addr=0x9c34, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_034C) {
    const struct CPU_State initial_cpu = {.pc=0x0f67, .a=0x0e, .x=0x5a, .y=0x39, .sp=0xa3, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0f67, .value=0x10}, {.addr=0x0f68, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x0f69, .a=0x0e, .x=0x5a, .y=0x39, .sp=0xa3, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0f67, .value=0x10}, {.addr=0x0f68, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x0f67, .value=0x10, .type=IO_READ},
        {.addr=0x0f68, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_034D) {
    const struct CPU_State initial_cpu = {.pc=0x8d87, .a=0xee, .x=0x24, .y=0xfe, .sp=0x0f, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x8d87, .value=0x10}, {.addr=0x8d88, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x8d89, .a=0xee, .x=0x24, .y=0xfe, .sp=0x0f, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x8d87, .value=0x10}, {.addr=0x8d88, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x8d87, .value=0x10, .type=IO_READ},
        {.addr=0x8d88, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_034E) {
    const struct CPU_State initial_cpu = {.pc=0x1f69, .a=0xad, .x=0x84, .y=0x46, .sp=0xf8, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x1f69, .value=0x10}, {.addr=0x1f6a, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0x1f66, .a=0xad, .x=0x84, .y=0x46, .sp=0xf8, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x1f69, .value=0x10}, {.addr=0x1f6a, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0x1f69, .value=0x10, .type=IO_READ},
        {.addr=0x1f6a, .value=0xfb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_034F) {
    const struct CPU_State initial_cpu = {.pc=0x560c, .a=0x6e, .x=0x3b, .y=0x4c, .sp=0x3f, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x560c, .value=0x10}, {.addr=0x560d, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x567d, .a=0x6e, .x=0x3b, .y=0x4c, .sp=0x3f, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x560c, .value=0x10}, {.addr=0x560d, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x560c, .value=0x10, .type=IO_READ},
        {.addr=0x560d, .value=0x6f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0350) {
    const struct CPU_State initial_cpu = {.pc=0x1dae, .a=0x5b, .x=0xec, .y=0x49, .sp=0x58, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x1dae, .value=0x10}, {.addr=0x1daf, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x1db0, .a=0x5b, .x=0xec, .y=0x49, .sp=0x58, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x1dae, .value=0x10}, {.addr=0x1daf, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x1dae, .value=0x10, .type=IO_READ},
        {.addr=0x1daf, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0351) {
    const struct CPU_State initial_cpu = {.pc=0xe1de, .a=0x34, .x=0xfa, .y=0xdf, .sp=0x77, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xe1de, .value=0x10}, {.addr=0xe1df, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0xe1e0, .a=0x34, .x=0xfa, .y=0xdf, .sp=0x77, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xe1de, .value=0x10}, {.addr=0xe1df, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0xe1de, .value=0x10, .type=IO_READ},
        {.addr=0xe1df, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0352) {
    const struct CPU_State initial_cpu = {.pc=0x7651, .a=0x11, .x=0x2f, .y=0x69, .sp=0x31, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x7651, .value=0x10}, {.addr=0x7652, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x7655, .a=0x11, .x=0x2f, .y=0x69, .sp=0x31, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x7651, .value=0x10}, {.addr=0x7652, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x7651, .value=0x10, .type=IO_READ},
        {.addr=0x7652, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0353) {
    const struct CPU_State initial_cpu = {.pc=0x0517, .a=0xa1, .x=0x7b, .y=0x8b, .sp=0x71, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0517, .value=0x10}, {.addr=0x0518, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x0519, .a=0xa1, .x=0x7b, .y=0x8b, .sp=0x71, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0517, .value=0x10}, {.addr=0x0518, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x0517, .value=0x10, .type=IO_READ},
        {.addr=0x0518, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0354) {
    const struct CPU_State initial_cpu = {.pc=0x9058, .a=0x28, .x=0x4f, .y=0x21, .sp=0x43, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x9058, .value=0x10}, {.addr=0x9059, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x905a, .a=0x28, .x=0x4f, .y=0x21, .sp=0x43, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x9058, .value=0x10}, {.addr=0x9059, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x9058, .value=0x10, .type=IO_READ},
        {.addr=0x9059, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0355) {
    const struct CPU_State initial_cpu = {.pc=0x1572, .a=0x1e, .x=0xab, .y=0x6b, .sp=0x74, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x1572, .value=0x10}, {.addr=0x1573, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x15c5, .a=0x1e, .x=0xab, .y=0x6b, .sp=0x74, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x1572, .value=0x10}, {.addr=0x1573, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x1572, .value=0x10, .type=IO_READ},
        {.addr=0x1573, .value=0x51, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0356) {
    const struct CPU_State initial_cpu = {.pc=0xb645, .a=0xd4, .x=0x19, .y=0xb3, .sp=0xdb, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xb645, .value=0x10}, {.addr=0xb646, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0xb614, .a=0xd4, .x=0x19, .y=0xb3, .sp=0xdb, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0xb645, .value=0x10}, {.addr=0xb646, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0xb645, .value=0x10, .type=IO_READ},
        {.addr=0xb646, .value=0xcd, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0357) {
    const struct CPU_State initial_cpu = {.pc=0x41ce, .a=0xd1, .x=0x6d, .y=0xf5, .sp=0x66, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x41ce, .value=0x10}, {.addr=0x41cf, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x41ee, .a=0xd1, .x=0x6d, .y=0xf5, .sp=0x66, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x41ce, .value=0x10}, {.addr=0x41cf, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x41ce, .value=0x10, .type=IO_READ},
        {.addr=0x41cf, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0358) {
    const struct CPU_State initial_cpu = {.pc=0xc1dd, .a=0x57, .x=0xaf, .y=0x74, .sp=0x2f, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xc1dd, .value=0x10}, {.addr=0xc1de, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xc1d4, .a=0x57, .x=0xaf, .y=0x74, .sp=0x2f, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0xc1dd, .value=0x10}, {.addr=0xc1de, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xc1dd, .value=0x10, .type=IO_READ},
        {.addr=0xc1de, .value=0xf5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0359) {
    const struct CPU_State initial_cpu = {.pc=0x2d5e, .a=0x4e, .x=0x5d, .y=0x05, .sp=0xd8, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x2d5e, .value=0x10}, {.addr=0x2d5f, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x2da4, .a=0x4e, .x=0x5d, .y=0x05, .sp=0xd8, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x2d5e, .value=0x10}, {.addr=0x2d5f, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x2d5e, .value=0x10, .type=IO_READ},
        {.addr=0x2d5f, .value=0x44, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_035A) {
    const struct CPU_State initial_cpu = {.pc=0x4a7b, .a=0xf3, .x=0x1c, .y=0x8a, .sp=0x66, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x4a7b, .value=0x10}, {.addr=0x4a7c, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x4a7d, .a=0xf3, .x=0x1c, .y=0x8a, .sp=0x66, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x4a7b, .value=0x10}, {.addr=0x4a7c, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x4a7b, .value=0x10, .type=IO_READ},
        {.addr=0x4a7c, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_035B) {
    const struct CPU_State initial_cpu = {.pc=0xbb2c, .a=0x3c, .x=0xd2, .y=0x89, .sp=0xfe, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xbb2c, .value=0x10}, {.addr=0xbb2d, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xbb30, .a=0x3c, .x=0xd2, .y=0x89, .sp=0xfe, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0xbb2c, .value=0x10}, {.addr=0xbb2d, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xbb2c, .value=0x10, .type=IO_READ},
        {.addr=0xbb2d, .value=0x02, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_035C) {
    const struct CPU_State initial_cpu = {.pc=0x86fb, .a=0xf9, .x=0x90, .y=0x4f, .sp=0xa3, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x86fb, .value=0x10}, {.addr=0x86fc, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x86af, .a=0xf9, .x=0x90, .y=0x4f, .sp=0xa3, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x86fb, .value=0x10}, {.addr=0x86fc, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x86fb, .value=0x10, .type=IO_READ},
        {.addr=0x86fc, .value=0xb2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_035D) {
    const struct CPU_State initial_cpu = {.pc=0x7bb6, .a=0x7f, .x=0x39, .y=0xa9, .sp=0x64, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x7bb6, .value=0x10}, {.addr=0x7bb7, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x7bb8, .a=0x7f, .x=0x39, .y=0xa9, .sp=0x64, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x7bb6, .value=0x10}, {.addr=0x7bb7, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x7bb6, .value=0x10, .type=IO_READ},
        {.addr=0x7bb7, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_035E) {
    const struct CPU_State initial_cpu = {.pc=0x5958, .a=0x15, .x=0x23, .y=0x3a, .sp=0x66, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x5958, .value=0x10}, {.addr=0x5959, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x595a, .a=0x15, .x=0x23, .y=0x3a, .sp=0x66, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x5958, .value=0x10}, {.addr=0x5959, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x5958, .value=0x10, .type=IO_READ},
        {.addr=0x5959, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_035F) {
    const struct CPU_State initial_cpu = {.pc=0xe5dd, .a=0x19, .x=0x02, .y=0xbf, .sp=0x65, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xe5dd, .value=0x10}, {.addr=0xe5de, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0xe61e, .a=0x19, .x=0x02, .y=0xbf, .sp=0x65, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xe5dd, .value=0x10}, {.addr=0xe5de, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0xe5dd, .value=0x10, .type=IO_READ},
        {.addr=0xe5de, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0360) {
    const struct CPU_State initial_cpu = {.pc=0xc28c, .a=0xb1, .x=0x68, .y=0x8b, .sp=0x4b, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xc28c, .value=0x10}, {.addr=0xc28d, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xc227, .a=0xb1, .x=0x68, .y=0x8b, .sp=0x4b, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xc28c, .value=0x10}, {.addr=0xc28d, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xc28c, .value=0x10, .type=IO_READ},
        {.addr=0xc28d, .value=0x99, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0361) {
    const struct CPU_State initial_cpu = {.pc=0x1b60, .a=0xdc, .x=0x9e, .y=0xc5, .sp=0xc3, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x1b60, .value=0x10}, {.addr=0x1b61, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x1b24, .a=0xdc, .x=0x9e, .y=0xc5, .sp=0xc3, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x1b60, .value=0x10}, {.addr=0x1b61, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x1b60, .value=0x10, .type=IO_READ},
        {.addr=0x1b61, .value=0xc2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0362) {
    const struct CPU_State initial_cpu = {.pc=0xde6f, .a=0x2b, .x=0xe6, .y=0xa6, .sp=0xa4, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xde6f, .value=0x10}, {.addr=0xde70, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0xde36, .a=0x2b, .x=0xe6, .y=0xa6, .sp=0xa4, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xde6f, .value=0x10}, {.addr=0xde70, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0xde6f, .value=0x10, .type=IO_READ},
        {.addr=0xde70, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0363) {
    const struct CPU_State initial_cpu = {.pc=0x42ae, .a=0x25, .x=0x37, .y=0x8f, .sp=0xf4, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x42ae, .value=0x10}, {.addr=0x42af, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x4248, .a=0x25, .x=0x37, .y=0x8f, .sp=0xf4, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x42ae, .value=0x10}, {.addr=0x42af, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x42ae, .value=0x10, .type=IO_READ},
        {.addr=0x42af, .value=0x98, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0364) {
    const struct CPU_State initial_cpu = {.pc=0x1ab5, .a=0x12, .x=0x1b, .y=0xba, .sp=0xba, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x1ab5, .value=0x10}, {.addr=0x1ab6, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x1af6, .a=0x12, .x=0x1b, .y=0xba, .sp=0xba, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x1ab5, .value=0x10}, {.addr=0x1ab6, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x1ab5, .value=0x10, .type=IO_READ},
        {.addr=0x1ab6, .value=0x3f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0365) {
    const struct CPU_State initial_cpu = {.pc=0xcac3, .a=0x65, .x=0xfa, .y=0x45, .sp=0xcb, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xcac3, .value=0x10}, {.addr=0xcac4, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0xcac5, .a=0x65, .x=0xfa, .y=0x45, .sp=0xcb, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0xcac3, .value=0x10}, {.addr=0xcac4, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0xcac3, .value=0x10, .type=IO_READ},
        {.addr=0xcac4, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0366) {
    const struct CPU_State initial_cpu = {.pc=0xff43, .a=0xf1, .x=0x83, .y=0x6d, .sp=0x2c, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xff43, .value=0x10}, {.addr=0xff44, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xff45, .a=0xf1, .x=0x83, .y=0x6d, .sp=0x2c, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0xff43, .value=0x10}, {.addr=0xff44, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xff43, .value=0x10, .type=IO_READ},
        {.addr=0xff44, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0367) {
    const struct CPU_State initial_cpu = {.pc=0x59a9, .a=0x0f, .x=0x33, .y=0x8c, .sp=0xc6, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x59a9, .value=0x10}, {.addr=0x59aa, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x59f0, .a=0x0f, .x=0x33, .y=0x8c, .sp=0xc6, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x59a9, .value=0x10}, {.addr=0x59aa, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x59a9, .value=0x10, .type=IO_READ},
        {.addr=0x59aa, .value=0x45, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0368) {
    const struct CPU_State initial_cpu = {.pc=0x6248, .a=0xd4, .x=0x27, .y=0x7d, .sp=0x18, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x6248, .value=0x10}, {.addr=0x6249, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x624a, .a=0xd4, .x=0x27, .y=0x7d, .sp=0x18, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x6248, .value=0x10}, {.addr=0x6249, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x6248, .value=0x10, .type=IO_READ},
        {.addr=0x6249, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0369) {
    const struct CPU_State initial_cpu = {.pc=0x0c57, .a=0xdf, .x=0x33, .y=0xc1, .sp=0x8f, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0c57, .value=0x10}, {.addr=0x0c58, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x0cc0, .a=0xdf, .x=0x33, .y=0xc1, .sp=0x8f, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x0c57, .value=0x10}, {.addr=0x0c58, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x0c57, .value=0x10, .type=IO_READ},
        {.addr=0x0c58, .value=0x67, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_036A) {
    const struct CPU_State initial_cpu = {.pc=0x37fc, .a=0xbf, .x=0x6c, .y=0x6c, .sp=0x50, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x37fc, .value=0x10}, {.addr=0x37fd, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x37fe, .a=0xbf, .x=0x6c, .y=0x6c, .sp=0x50, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x37fc, .value=0x10}, {.addr=0x37fd, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x37fc, .value=0x10, .type=IO_READ},
        {.addr=0x37fd, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_036B) {
    const struct CPU_State initial_cpu = {.pc=0x68d7, .a=0x5a, .x=0x4f, .y=0x3a, .sp=0x4b, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x68d7, .value=0x10}, {.addr=0x68d8, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x68d9, .a=0x5a, .x=0x4f, .y=0x3a, .sp=0x4b, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x68d7, .value=0x10}, {.addr=0x68d8, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x68d7, .value=0x10, .type=IO_READ},
        {.addr=0x68d8, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_036C) {
    const struct CPU_State initial_cpu = {.pc=0xc03c, .a=0x16, .x=0xaf, .y=0x04, .sp=0xad, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xc03c, .value=0x10}, {.addr=0xc03d, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0xc03e, .a=0x16, .x=0xaf, .y=0x04, .sp=0xad, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xc03c, .value=0x10}, {.addr=0xc03d, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0xc03c, .value=0x10, .type=IO_READ},
        {.addr=0xc03d, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_036D) {
    const struct CPU_State initial_cpu = {.pc=0xff83, .a=0x86, .x=0x03, .y=0x36, .sp=0xff, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xff83, .value=0x10}, {.addr=0xff84, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0xff85, .a=0x86, .x=0x03, .y=0x36, .sp=0xff, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0xff83, .value=0x10}, {.addr=0xff84, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0xff83, .value=0x10, .type=IO_READ},
        {.addr=0xff84, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_036E) {
    const struct CPU_State initial_cpu = {.pc=0x29c8, .a=0x60, .x=0x86, .y=0x30, .sp=0x2c, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x29c8, .value=0x10}, {.addr=0x29c9, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x2a13, .a=0x60, .x=0x86, .y=0x30, .sp=0x2c, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x29c8, .value=0x10}, {.addr=0x29c9, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x29c8, .value=0x10, .type=IO_READ},
        {.addr=0x29c9, .value=0x49, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_036F) {
    const struct CPU_State initial_cpu = {.pc=0x58a3, .a=0xa1, .x=0x99, .y=0xd9, .sp=0xf9, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x58a3, .value=0x10}, {.addr=0x58a4, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x58a5, .a=0xa1, .x=0x99, .y=0xd9, .sp=0xf9, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x58a3, .value=0x10}, {.addr=0x58a4, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x58a3, .value=0x10, .type=IO_READ},
        {.addr=0x58a4, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0370) {
    const struct CPU_State initial_cpu = {.pc=0x0cf8, .a=0x5e, .x=0x4f, .y=0x1a, .sp=0xff, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0cf8, .value=0x10}, {.addr=0x0cf9, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x0cfa, .a=0x5e, .x=0x4f, .y=0x1a, .sp=0xff, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x0cf8, .value=0x10}, {.addr=0x0cf9, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x0cf8, .value=0x10, .type=IO_READ},
        {.addr=0x0cf9, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0371) {
    const struct CPU_State initial_cpu = {.pc=0x6a40, .a=0xfe, .x=0xa9, .y=0x08, .sp=0x95, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x6a40, .value=0x10}, {.addr=0x6a41, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x6a42, .a=0xfe, .x=0xa9, .y=0x08, .sp=0x95, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x6a40, .value=0x10}, {.addr=0x6a41, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x6a40, .value=0x10, .type=IO_READ},
        {.addr=0x6a41, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0372) {
    const struct CPU_State initial_cpu = {.pc=0x4c77, .a=0xf5, .x=0xff, .y=0x5b, .sp=0x79, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x4c77, .value=0x10}, {.addr=0x4c78, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x4c9b, .a=0xf5, .x=0xff, .y=0x5b, .sp=0x79, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x4c77, .value=0x10}, {.addr=0x4c78, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x4c77, .value=0x10, .type=IO_READ},
        {.addr=0x4c78, .value=0x22, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0373) {
    const struct CPU_State initial_cpu = {.pc=0xd449, .a=0xfc, .x=0xc1, .y=0x15, .sp=0xad, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0xd449, .value=0x10}, {.addr=0xd44a, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xd44b, .a=0xfc, .x=0xc1, .y=0x15, .sp=0xad, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0xd449, .value=0x10}, {.addr=0xd44a, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xd449, .value=0x10, .type=IO_READ},
        {.addr=0xd44a, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0374) {
    const struct CPU_State initial_cpu = {.pc=0xadae, .a=0x95, .x=0xb7, .y=0xad, .sp=0x28, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xadae, .value=0x10}, {.addr=0xadaf, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0xadee, .a=0x95, .x=0xb7, .y=0xad, .sp=0x28, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0xadae, .value=0x10}, {.addr=0xadaf, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0xadae, .value=0x10, .type=IO_READ},
        {.addr=0xadaf, .value=0x3e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0375) {
    const struct CPU_State initial_cpu = {.pc=0x0f06, .a=0xa7, .x=0x94, .y=0xb3, .sp=0x62, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0f06, .value=0x10}, {.addr=0x0f07, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x0f08, .a=0xa7, .x=0x94, .y=0xb3, .sp=0x62, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x0f06, .value=0x10}, {.addr=0x0f07, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x0f06, .value=0x10, .type=IO_READ},
        {.addr=0x0f07, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0376) {
    const struct CPU_State initial_cpu = {.pc=0x0658, .a=0xed, .x=0xd6, .y=0x55, .sp=0x21, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0658, .value=0x10}, {.addr=0x0659, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x065a, .a=0xed, .x=0xd6, .y=0x55, .sp=0x21, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0658, .value=0x10}, {.addr=0x0659, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x0658, .value=0x10, .type=IO_READ},
        {.addr=0x0659, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0377) {
    const struct CPU_State initial_cpu = {.pc=0x3664, .a=0xb8, .x=0x16, .y=0x39, .sp=0x43, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x3664, .value=0x10}, {.addr=0x3665, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x36a6, .a=0xb8, .x=0x16, .y=0x39, .sp=0x43, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x3664, .value=0x10}, {.addr=0x3665, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x3664, .value=0x10, .type=IO_READ},
        {.addr=0x3665, .value=0x40, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0378) {
    const struct CPU_State initial_cpu = {.pc=0x954b, .a=0x28, .x=0x9b, .y=0x18, .sp=0x42, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x954b, .value=0x10}, {.addr=0x954c, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x958f, .a=0x28, .x=0x9b, .y=0x18, .sp=0x42, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x954b, .value=0x10}, {.addr=0x954c, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x954b, .value=0x10, .type=IO_READ},
        {.addr=0x954c, .value=0x42, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0379) {
    const struct CPU_State initial_cpu = {.pc=0xdda1, .a=0xb0, .x=0xb2, .y=0x59, .sp=0xbc, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xdda1, .value=0x10}, {.addr=0xdda2, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xdda3, .a=0xb0, .x=0xb2, .y=0x59, .sp=0xbc, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xdda1, .value=0x10}, {.addr=0xdda2, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xdda1, .value=0x10, .type=IO_READ},
        {.addr=0xdda2, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_037A) {
    const struct CPU_State initial_cpu = {.pc=0xbf87, .a=0x5b, .x=0xb9, .y=0x07, .sp=0xf5, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xbf87, .value=0x10}, {.addr=0xbf88, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xbf89, .a=0x5b, .x=0xb9, .y=0x07, .sp=0xf5, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0xbf87, .value=0x10}, {.addr=0xbf88, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xbf87, .value=0x10, .type=IO_READ},
        {.addr=0xbf88, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_037B) {
    const struct CPU_State initial_cpu = {.pc=0xd36e, .a=0xf5, .x=0xab, .y=0xa9, .sp=0xce, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xd36e, .value=0x10}, {.addr=0xd36f, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xd37b, .a=0xf5, .x=0xab, .y=0xa9, .sp=0xce, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xd36e, .value=0x10}, {.addr=0xd36f, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xd36e, .value=0x10, .type=IO_READ},
        {.addr=0xd36f, .value=0x0b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_037C) {
    const struct CPU_State initial_cpu = {.pc=0x6b9f, .a=0xcd, .x=0xb3, .y=0x7d, .sp=0x0f, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x6b9f, .value=0x10}, {.addr=0x6ba0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6ba1, .a=0xcd, .x=0xb3, .y=0x7d, .sp=0x0f, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x6b9f, .value=0x10}, {.addr=0x6ba0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6b9f, .value=0x10, .type=IO_READ},
        {.addr=0x6ba0, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_037D) {
    const struct CPU_State initial_cpu = {.pc=0xd8dc, .a=0xfb, .x=0x7a, .y=0x42, .sp=0x14, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xd8dc, .value=0x10}, {.addr=0xd8dd, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xd8fe, .a=0xfb, .x=0x7a, .y=0x42, .sp=0x14, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xd8dc, .value=0x10}, {.addr=0xd8dd, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xd8dc, .value=0x10, .type=IO_READ},
        {.addr=0xd8dd, .value=0x20, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_037E) {
    const struct CPU_State initial_cpu = {.pc=0xa102, .a=0x46, .x=0x78, .y=0x81, .sp=0x32, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0xa102, .value=0x10}, {.addr=0xa103, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xa104, .a=0x46, .x=0x78, .y=0x81, .sp=0x32, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xa102, .value=0x10}, {.addr=0xa103, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xa102, .value=0x10, .type=IO_READ},
        {.addr=0xa103, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_037F) {
    const struct CPU_State initial_cpu = {.pc=0x6532, .a=0x60, .x=0x21, .y=0x22, .sp=0x12, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x6532, .value=0x10}, {.addr=0x6533, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x6504, .a=0x60, .x=0x21, .y=0x22, .sp=0x12, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x6532, .value=0x10}, {.addr=0x6533, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x6532, .value=0x10, .type=IO_READ},
        {.addr=0x6533, .value=0xd0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0380) {
    const struct CPU_State initial_cpu = {.pc=0x3316, .a=0x81, .x=0xda, .y=0x0c, .sp=0x78, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x3316, .value=0x10}, {.addr=0x3317, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x335f, .a=0x81, .x=0xda, .y=0x0c, .sp=0x78, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x3316, .value=0x10}, {.addr=0x3317, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x3316, .value=0x10, .type=IO_READ},
        {.addr=0x3317, .value=0x47, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0381) {
    const struct CPU_State initial_cpu = {.pc=0xd9dd, .a=0x1e, .x=0x55, .y=0x42, .sp=0xd2, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xd9dd, .value=0x10}, {.addr=0xd9de, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xda39, .a=0x1e, .x=0x55, .y=0x42, .sp=0xd2, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0xd9dd, .value=0x10}, {.addr=0xd9de, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xd9dd, .value=0x10, .type=IO_READ},
        {.addr=0xd9de, .value=0x5a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0382) {
    const struct CPU_State initial_cpu = {.pc=0x25db, .a=0x69, .x=0x87, .y=0xbb, .sp=0x2b, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x25db, .value=0x10}, {.addr=0x25dc, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x25dd, .a=0x69, .x=0x87, .y=0xbb, .sp=0x2b, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x25db, .value=0x10}, {.addr=0x25dc, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x25db, .value=0x10, .type=IO_READ},
        {.addr=0x25dc, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0383) {
    const struct CPU_State initial_cpu = {.pc=0x9c83, .a=0x39, .x=0x61, .y=0x1a, .sp=0x5a, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x9c83, .value=0x10}, {.addr=0x9c84, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x9cd4, .a=0x39, .x=0x61, .y=0x1a, .sp=0x5a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x9c83, .value=0x10}, {.addr=0x9c84, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x9c83, .value=0x10, .type=IO_READ},
        {.addr=0x9c84, .value=0x4f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0384) {
    const struct CPU_State initial_cpu = {.pc=0x59b4, .a=0x6e, .x=0xb2, .y=0x96, .sp=0x01, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x59b4, .value=0x10}, {.addr=0x59b5, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x59b6, .a=0x6e, .x=0xb2, .y=0x96, .sp=0x01, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x59b4, .value=0x10}, {.addr=0x59b5, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x59b4, .value=0x10, .type=IO_READ},
        {.addr=0x59b5, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0385) {
    const struct CPU_State initial_cpu = {.pc=0xd77d, .a=0x2f, .x=0x9f, .y=0xfb, .sp=0x3e, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xd77d, .value=0x10}, {.addr=0xd77e, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xd722, .a=0x2f, .x=0x9f, .y=0xfb, .sp=0x3e, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xd77d, .value=0x10}, {.addr=0xd77e, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xd77d, .value=0x10, .type=IO_READ},
        {.addr=0xd77e, .value=0xa3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0386) {
    const struct CPU_State initial_cpu = {.pc=0xac37, .a=0x85, .x=0x53, .y=0xc2, .sp=0x3f, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xac37, .value=0x10}, {.addr=0xac38, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0xac27, .a=0x85, .x=0x53, .y=0xc2, .sp=0x3f, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0xac37, .value=0x10}, {.addr=0xac38, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0xac37, .value=0x10, .type=IO_READ},
        {.addr=0xac38, .value=0xee, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0387) {
    const struct CPU_State initial_cpu = {.pc=0xeb78, .a=0xf6, .x=0xd9, .y=0x28, .sp=0xdd, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xeb78, .value=0x10}, {.addr=0xeb79, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xeb7a, .a=0xf6, .x=0xd9, .y=0x28, .sp=0xdd, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xeb78, .value=0x10}, {.addr=0xeb79, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xeb78, .value=0x10, .type=IO_READ},
        {.addr=0xeb79, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0388) {
    const struct CPU_State initial_cpu = {.pc=0x35ba, .a=0x88, .x=0x8d, .y=0xef, .sp=0x72, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x35ba, .value=0x10}, {.addr=0x35bb, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x356f, .a=0x88, .x=0x8d, .y=0xef, .sp=0x72, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x35ba, .value=0x10}, {.addr=0x35bb, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x35ba, .value=0x10, .type=IO_READ},
        {.addr=0x35bb, .value=0xb3, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0389) {
    const struct CPU_State initial_cpu = {.pc=0xe6f6, .a=0x31, .x=0xb2, .y=0x2d, .sp=0x81, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xe6f6, .value=0x10}, {.addr=0xe6f7, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xe6f8, .a=0x31, .x=0xb2, .y=0x2d, .sp=0x81, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0xe6f6, .value=0x10}, {.addr=0xe6f7, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xe6f6, .value=0x10, .type=IO_READ},
        {.addr=0xe6f7, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_038A) {
    const struct CPU_State initial_cpu = {.pc=0x095e, .a=0xa0, .x=0xe6, .y=0x06, .sp=0x9c, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x095e, .value=0x10}, {.addr=0x095f, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x0960, .a=0xa0, .x=0xe6, .y=0x06, .sp=0x9c, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x095e, .value=0x10}, {.addr=0x095f, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x095e, .value=0x10, .type=IO_READ},
        {.addr=0x095f, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_038B) {
    const struct CPU_State initial_cpu = {.pc=0x21d7, .a=0x8d, .x=0xc9, .y=0x8b, .sp=0xaa, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x21d7, .value=0x10}, {.addr=0x21d8, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0x21d9, .a=0x8d, .x=0xc9, .y=0x8b, .sp=0xaa, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x21d7, .value=0x10}, {.addr=0x21d8, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0x21d7, .value=0x10, .type=IO_READ},
        {.addr=0x21d8, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_038C) {
    const struct CPU_State initial_cpu = {.pc=0x3753, .a=0x26, .x=0x08, .y=0x4b, .sp=0x93, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x3753, .value=0x10}, {.addr=0x3754, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x379b, .a=0x26, .x=0x08, .y=0x4b, .sp=0x93, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x3753, .value=0x10}, {.addr=0x3754, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x3753, .value=0x10, .type=IO_READ},
        {.addr=0x3754, .value=0x46, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_038D) {
    const struct CPU_State initial_cpu = {.pc=0x6562, .a=0x66, .x=0xd7, .y=0xda, .sp=0x79, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x6562, .value=0x10}, {.addr=0x6563, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0x6536, .a=0x66, .x=0xd7, .y=0xda, .sp=0x79, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x6562, .value=0x10}, {.addr=0x6563, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0x6562, .value=0x10, .type=IO_READ},
        {.addr=0x6563, .value=0xd2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_038E) {
    const struct CPU_State initial_cpu = {.pc=0x03f3, .a=0xbc, .x=0x57, .y=0x30, .sp=0x83, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x03f3, .value=0x10}, {.addr=0x03f4, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x03f1, .a=0xbc, .x=0x57, .y=0x30, .sp=0x83, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x03f3, .value=0x10}, {.addr=0x03f4, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x03f3, .value=0x10, .type=IO_READ},
        {.addr=0x03f4, .value=0xfc, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_038F) {
    const struct CPU_State initial_cpu = {.pc=0x4c7a, .a=0xd1, .x=0x7a, .y=0x31, .sp=0xa6, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x4c7a, .value=0x10}, {.addr=0x4c7b, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x4c7c, .a=0xd1, .x=0x7a, .y=0x31, .sp=0xa6, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x4c7a, .value=0x10}, {.addr=0x4c7b, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x4c7a, .value=0x10, .type=IO_READ},
        {.addr=0x4c7b, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0390) {
    const struct CPU_State initial_cpu = {.pc=0xf688, .a=0x7d, .x=0x37, .y=0x7d, .sp=0xa3, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0xf688, .value=0x10}, {.addr=0xf689, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xf68a, .a=0x7d, .x=0x37, .y=0x7d, .sp=0xa3, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0xf688, .value=0x10}, {.addr=0xf689, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xf688, .value=0x10, .type=IO_READ},
        {.addr=0xf689, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0391) {
    const struct CPU_State initial_cpu = {.pc=0x5fd5, .a=0x2e, .x=0xc6, .y=0x17, .sp=0x49, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x5fd5, .value=0x10}, {.addr=0x5fd6, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x5f89, .a=0x2e, .x=0xc6, .y=0x17, .sp=0x49, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x5fd5, .value=0x10}, {.addr=0x5fd6, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x5fd5, .value=0x10, .type=IO_READ},
        {.addr=0x5fd6, .value=0xb2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0392) {
    const struct CPU_State initial_cpu = {.pc=0xbd2d, .a=0xf1, .x=0x1b, .y=0x86, .sp=0x3c, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xbd2d, .value=0x10}, {.addr=0xbd2e, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xbd50, .a=0xf1, .x=0x1b, .y=0x86, .sp=0x3c, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0xbd2d, .value=0x10}, {.addr=0xbd2e, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xbd2d, .value=0x10, .type=IO_READ},
        {.addr=0xbd2e, .value=0x21, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0393) {
    const struct CPU_State initial_cpu = {.pc=0x306b, .a=0x14, .x=0x49, .y=0x1a, .sp=0x5b, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x306b, .value=0x10}, {.addr=0x306c, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x306d, .a=0x14, .x=0x49, .y=0x1a, .sp=0x5b, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x306b, .value=0x10}, {.addr=0x306c, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x306b, .value=0x10, .type=IO_READ},
        {.addr=0x306c, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0394) {
    const struct CPU_State initial_cpu = {.pc=0x2645, .a=0xc9, .x=0x4c, .y=0x32, .sp=0xf5, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x2645, .value=0x10}, {.addr=0x2646, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x2647, .a=0xc9, .x=0x4c, .y=0x32, .sp=0xf5, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x2645, .value=0x10}, {.addr=0x2646, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x2645, .value=0x10, .type=IO_READ},
        {.addr=0x2646, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0395) {
    const struct CPU_State initial_cpu = {.pc=0x50ee, .a=0xd6, .x=0x70, .y=0xa7, .sp=0x0a, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x50ee, .value=0x10}, {.addr=0x50ef, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x50f0, .a=0xd6, .x=0x70, .y=0xa7, .sp=0x0a, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x50ee, .value=0x10}, {.addr=0x50ef, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x50ee, .value=0x10, .type=IO_READ},
        {.addr=0x50ef, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0396) {
    const struct CPU_State initial_cpu = {.pc=0x1572, .a=0x37, .x=0x11, .y=0x0f, .sp=0x42, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x1572, .value=0x10}, {.addr=0x1573, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x1574, .a=0x37, .x=0x11, .y=0x0f, .sp=0x42, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x1572, .value=0x10}, {.addr=0x1573, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x1572, .value=0x10, .type=IO_READ},
        {.addr=0x1573, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0397) {
    const struct CPU_State initial_cpu = {.pc=0xccb1, .a=0x86, .x=0xbe, .y=0xde, .sp=0x4c, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xccb1, .value=0x10}, {.addr=0xccb2, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xccb3, .a=0x86, .x=0xbe, .y=0xde, .sp=0x4c, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xccb1, .value=0x10}, {.addr=0xccb2, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xccb1, .value=0x10, .type=IO_READ},
        {.addr=0xccb2, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0398) {
    const struct CPU_State initial_cpu = {.pc=0x640f, .a=0xd7, .x=0x17, .y=0xa4, .sp=0x02, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x640f, .value=0x10}, {.addr=0x6410, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x6440, .a=0xd7, .x=0x17, .y=0xa4, .sp=0x02, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x640f, .value=0x10}, {.addr=0x6410, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x640f, .value=0x10, .type=IO_READ},
        {.addr=0x6410, .value=0x2f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_0399) {
    const struct CPU_State initial_cpu = {.pc=0x4ea3, .a=0x2d, .x=0x72, .y=0x27, .sp=0xac, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x4ea3, .value=0x10}, {.addr=0x4ea4, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x4ea5, .a=0x2d, .x=0x72, .y=0x27, .sp=0xac, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x4ea3, .value=0x10}, {.addr=0x4ea4, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x4ea3, .value=0x10, .type=IO_READ},
        {.addr=0x4ea4, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_039A) {
    const struct CPU_State initial_cpu = {.pc=0x3af6, .a=0x1b, .x=0x55, .y=0x44, .sp=0x1c, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x3af6, .value=0x10}, {.addr=0x3af7, .value=0xc5}};
    const struct CPU_State final_cpu = {.pc=0x3abd, .a=0x1b, .x=0x55, .y=0x44, .sp=0x1c, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x3af6, .value=0x10}, {.addr=0x3af7, .value=0xc5}};
    const struct BusEvent events[] = {
        {.addr=0x3af6, .value=0x10, .type=IO_READ},
        {.addr=0x3af7, .value=0xc5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_039B) {
    const struct CPU_State initial_cpu = {.pc=0x0f6d, .a=0xd4, .x=0x23, .y=0x89, .sp=0x83, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0f6d, .value=0x10}, {.addr=0x0f6e, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x0f6f, .a=0xd4, .x=0x23, .y=0x89, .sp=0x83, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0f6d, .value=0x10}, {.addr=0x0f6e, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x0f6d, .value=0x10, .type=IO_READ},
        {.addr=0x0f6e, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_039C) {
    const struct CPU_State initial_cpu = {.pc=0x9ef5, .a=0xbe, .x=0xd0, .y=0xbc, .sp=0x1c, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x9ef5, .value=0x10}, {.addr=0x9ef6, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x9ef7, .a=0xbe, .x=0xd0, .y=0xbc, .sp=0x1c, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x9ef5, .value=0x10}, {.addr=0x9ef6, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x9ef5, .value=0x10, .type=IO_READ},
        {.addr=0x9ef6, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_039D) {
    const struct CPU_State initial_cpu = {.pc=0xf446, .a=0xf8, .x=0x85, .y=0x34, .sp=0x35, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xf446, .value=0x10}, {.addr=0xf447, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xf4b5, .a=0xf8, .x=0x85, .y=0x34, .sp=0x35, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0xf446, .value=0x10}, {.addr=0xf447, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xf446, .value=0x10, .type=IO_READ},
        {.addr=0xf447, .value=0x6d, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_039E) {
    const struct CPU_State initial_cpu = {.pc=0x757c, .a=0x6c, .x=0x4a, .y=0xd2, .sp=0x55, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x757c, .value=0x10}, {.addr=0x757d, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x7597, .a=0x6c, .x=0x4a, .y=0xd2, .sp=0x55, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x757c, .value=0x10}, {.addr=0x757d, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x757c, .value=0x10, .type=IO_READ},
        {.addr=0x757d, .value=0x19, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_039F) {
    const struct CPU_State initial_cpu = {.pc=0x3656, .a=0x60, .x=0x3c, .y=0xca, .sp=0x29, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x3656, .value=0x10}, {.addr=0x3657, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x3658, .a=0x60, .x=0x3c, .y=0xca, .sp=0x29, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x3656, .value=0x10}, {.addr=0x3657, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x3656, .value=0x10, .type=IO_READ},
        {.addr=0x3657, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xd2c4, .a=0x11, .x=0x5b, .y=0xbd, .sp=0xdf, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xd2c4, .value=0x10}, {.addr=0xd2c5, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xd2c6, .a=0x11, .x=0x5b, .y=0xbd, .sp=0xdf, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0xd2c4, .value=0x10}, {.addr=0xd2c5, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xd2c4, .value=0x10, .type=IO_READ},
        {.addr=0xd2c5, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x7c59, .a=0x99, .x=0x83, .y=0xd0, .sp=0x4f, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x7c59, .value=0x10}, {.addr=0x7c5a, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x7c46, .a=0x99, .x=0x83, .y=0xd0, .sp=0x4f, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x7c59, .value=0x10}, {.addr=0x7c5a, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x7c59, .value=0x10, .type=IO_READ},
        {.addr=0x7c5a, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x345c, .a=0xe6, .x=0x66, .y=0x24, .sp=0x12, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x345c, .value=0x10}, {.addr=0x345d, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0x3447, .a=0xe6, .x=0x66, .y=0x24, .sp=0x12, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x345c, .value=0x10}, {.addr=0x345d, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0x345c, .value=0x10, .type=IO_READ},
        {.addr=0x345d, .value=0xe9, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x89d7, .a=0x89, .x=0x3b, .y=0x42, .sp=0x50, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x89d7, .value=0x10}, {.addr=0x89d8, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x89d9, .a=0x89, .x=0x3b, .y=0x42, .sp=0x50, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x89d7, .value=0x10}, {.addr=0x89d8, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x89d7, .value=0x10, .type=IO_READ},
        {.addr=0x89d8, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x4062, .a=0xbe, .x=0xd1, .y=0x77, .sp=0x46, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x4062, .value=0x10}, {.addr=0x4063, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x4064, .a=0xbe, .x=0xd1, .y=0x77, .sp=0x46, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x4062, .value=0x10}, {.addr=0x4063, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x4062, .value=0x10, .type=IO_READ},
        {.addr=0x4063, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x7332, .a=0xe3, .x=0xc6, .y=0x70, .sp=0xca, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x7332, .value=0x10}, {.addr=0x7333, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x7334, .a=0xe3, .x=0xc6, .y=0x70, .sp=0xca, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x7332, .value=0x10}, {.addr=0x7333, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x7332, .value=0x10, .type=IO_READ},
        {.addr=0x7333, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x3af4, .a=0x24, .x=0xc9, .y=0x58, .sp=0x91, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x3af4, .value=0x10}, {.addr=0x3af5, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x3aa4, .a=0x24, .x=0xc9, .y=0x58, .sp=0x91, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x3af4, .value=0x10}, {.addr=0x3af5, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x3af4, .value=0x10, .type=IO_READ},
        {.addr=0x3af5, .value=0xae, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x389f, .a=0xc4, .x=0x7f, .y=0x0e, .sp=0xae, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x389f, .value=0x10}, {.addr=0x38a0, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x3833, .a=0xc4, .x=0x7f, .y=0x0e, .sp=0xae, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x389f, .value=0x10}, {.addr=0x38a0, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x389f, .value=0x10, .type=IO_READ},
        {.addr=0x38a0, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xa8e0, .a=0xa7, .x=0x64, .y=0xd0, .sp=0xc8, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xa8e0, .value=0x10}, {.addr=0xa8e1, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0xa897, .a=0xa7, .x=0x64, .y=0xd0, .sp=0xc8, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0xa8e0, .value=0x10}, {.addr=0xa8e1, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0xa8e0, .value=0x10, .type=IO_READ},
        {.addr=0xa8e1, .value=0xb5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x3ed9, .a=0xf3, .x=0x0a, .y=0x9a, .sp=0x6e, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x3ed9, .value=0x10}, {.addr=0x3eda, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x3edb, .a=0xf3, .x=0x0a, .y=0x9a, .sp=0x6e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x3ed9, .value=0x10}, {.addr=0x3eda, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x3ed9, .value=0x10, .type=IO_READ},
        {.addr=0x3eda, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x7649, .a=0xb4, .x=0x8b, .y=0xa3, .sp=0xb5, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x7649, .value=0x10}, {.addr=0x764a, .value=0x01}};
    const struct CPU_State final_cpu = {.pc=0x764c, .a=0xb4, .x=0x8b, .y=0xa3, .sp=0xb5, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x7649, .value=0x10}, {.addr=0x764a, .value=0x01}};
    const struct BusEvent events[] = {
        {.addr=0x7649, .value=0x10, .type=IO_READ},
        {.addr=0x764a, .value=0x01, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03AB) {
    const struct CPU_State initial_cpu = {.pc=0xbb33, .a=0xd4, .x=0x39, .y=0x97, .sp=0x46, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xbb33, .value=0x10}, {.addr=0xbb34, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xbb5f, .a=0xd4, .x=0x39, .y=0x97, .sp=0x46, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0xbb33, .value=0x10}, {.addr=0xbb34, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xbb33, .value=0x10, .type=IO_READ},
        {.addr=0xbb34, .value=0x2a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x7851, .a=0x3e, .x=0x08, .y=0xe2, .sp=0x40, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x7851, .value=0x10}, {.addr=0x7852, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0x7853, .a=0x3e, .x=0x08, .y=0xe2, .sp=0x40, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x7851, .value=0x10}, {.addr=0x7852, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0x7851, .value=0x10, .type=IO_READ},
        {.addr=0x7852, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x9c8d, .a=0x4f, .x=0xc5, .y=0x6e, .sp=0x1a, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x9c8d, .value=0x10}, {.addr=0x9c8e, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x9cb7, .a=0x4f, .x=0xc5, .y=0x6e, .sp=0x1a, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x9c8d, .value=0x10}, {.addr=0x9c8e, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x9c8d, .value=0x10, .type=IO_READ},
        {.addr=0x9c8e, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03AE) {
    const struct CPU_State initial_cpu = {.pc=0x0837, .a=0x49, .x=0xe1, .y=0xd8, .sp=0x7e, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0837, .value=0x10}, {.addr=0x0838, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x0839, .a=0x49, .x=0xe1, .y=0xd8, .sp=0x7e, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x0837, .value=0x10}, {.addr=0x0838, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x0837, .value=0x10, .type=IO_READ},
        {.addr=0x0838, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xe0cc, .a=0x14, .x=0xe5, .y=0x58, .sp=0x81, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xe0cc, .value=0x10}, {.addr=0xe0cd, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xe0a4, .a=0x14, .x=0xe5, .y=0x58, .sp=0x81, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0xe0cc, .value=0x10}, {.addr=0xe0cd, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xe0cc, .value=0x10, .type=IO_READ},
        {.addr=0xe0cd, .value=0xd6, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xf2ff, .a=0x7b, .x=0x7f, .y=0xc9, .sp=0xbd, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xf2ff, .value=0x10}, {.addr=0xf300, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0xf2b1, .a=0x7b, .x=0x7f, .y=0xc9, .sp=0xbd, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xf2ff, .value=0x10}, {.addr=0xf300, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0xf2ff, .value=0x10, .type=IO_READ},
        {.addr=0xf300, .value=0xb0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x922c, .a=0xf7, .x=0xd6, .y=0x8d, .sp=0x24, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x922c, .value=0x10}, {.addr=0x922d, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x92a9, .a=0xf7, .x=0xd6, .y=0x8d, .sp=0x24, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x922c, .value=0x10}, {.addr=0x922d, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x922c, .value=0x10, .type=IO_READ},
        {.addr=0x922d, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x7748, .a=0x2f, .x=0x01, .y=0xfa, .sp=0xc7, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x7748, .value=0x10}, {.addr=0x7749, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x77c1, .a=0x2f, .x=0x01, .y=0xfa, .sp=0xc7, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x7748, .value=0x10}, {.addr=0x7749, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x7748, .value=0x10, .type=IO_READ},
        {.addr=0x7749, .value=0x77, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03B3) {
    const struct CPU_State initial_cpu = {.pc=0xe27d, .a=0x5d, .x=0x64, .y=0x7d, .sp=0xb9, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0xe27d, .value=0x10}, {.addr=0xe27e, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0xe27f, .a=0x5d, .x=0x64, .y=0x7d, .sp=0xb9, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0xe27d, .value=0x10}, {.addr=0xe27e, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0xe27d, .value=0x10, .type=IO_READ},
        {.addr=0xe27e, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x4357, .a=0xd1, .x=0xbc, .y=0xa8, .sp=0x1b, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x4357, .value=0x10}, {.addr=0x4358, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0x4359, .a=0xd1, .x=0xbc, .y=0xa8, .sp=0x1b, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x4357, .value=0x10}, {.addr=0x4358, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0x4357, .value=0x10, .type=IO_READ},
        {.addr=0x4358, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x0a14, .a=0xf1, .x=0xa3, .y=0x40, .sp=0xac, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x0a14, .value=0x10}, {.addr=0x0a15, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x09e6, .a=0xf1, .x=0xa3, .y=0x40, .sp=0xac, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x0a14, .value=0x10}, {.addr=0x0a15, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x0a14, .value=0x10, .type=IO_READ},
        {.addr=0x0a15, .value=0xd0, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x0ede, .a=0x10, .x=0xcb, .y=0x99, .sp=0x3f, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0ede, .value=0x10}, {.addr=0x0edf, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x0f5b, .a=0x10, .x=0xcb, .y=0x99, .sp=0x3f, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0ede, .value=0x10}, {.addr=0x0edf, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x0ede, .value=0x10, .type=IO_READ},
        {.addr=0x0edf, .value=0x7b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x5e07, .a=0x18, .x=0x7b, .y=0x95, .sp=0x9e, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x5e07, .value=0x10}, {.addr=0x5e08, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x5da3, .a=0x18, .x=0x7b, .y=0x95, .sp=0x9e, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x5e07, .value=0x10}, {.addr=0x5e08, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x5e07, .value=0x10, .type=IO_READ},
        {.addr=0x5e08, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x56a7, .a=0x06, .x=0x52, .y=0xcb, .sp=0x10, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x56a7, .value=0x10}, {.addr=0x56a8, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x567e, .a=0x06, .x=0x52, .y=0xcb, .sp=0x10, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x56a7, .value=0x10}, {.addr=0x56a8, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x56a7, .value=0x10, .type=IO_READ},
        {.addr=0x56a8, .value=0xd5, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x1914, .a=0xa0, .x=0xab, .y=0x0d, .sp=0x35, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x1914, .value=0x10}, {.addr=0x1915, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x1916, .a=0xa0, .x=0xab, .y=0x0d, .sp=0x35, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x1914, .value=0x10}, {.addr=0x1915, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x1914, .value=0x10, .type=IO_READ},
        {.addr=0x1915, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x5035, .a=0x3d, .x=0x24, .y=0x4c, .sp=0x55, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x5035, .value=0x10}, {.addr=0x5036, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x5037, .a=0x3d, .x=0x24, .y=0x4c, .sp=0x55, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x5035, .value=0x10}, {.addr=0x5036, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x5035, .value=0x10, .type=IO_READ},
        {.addr=0x5036, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x6186, .a=0x64, .x=0x78, .y=0x24, .sp=0x30, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x6186, .value=0x10}, {.addr=0x6187, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x61a6, .a=0x64, .x=0x78, .y=0x24, .sp=0x30, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x6186, .value=0x10}, {.addr=0x6187, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x6186, .value=0x10, .type=IO_READ},
        {.addr=0x6187, .value=0x1e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x0c46, .a=0xd0, .x=0xae, .y=0x4b, .sp=0x56, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0c46, .value=0x10}, {.addr=0x0c47, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0c48, .a=0xd0, .x=0xae, .y=0x4b, .sp=0x56, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0c46, .value=0x10}, {.addr=0x0c47, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0c46, .value=0x10, .type=IO_READ},
        {.addr=0x0c47, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x37e8, .a=0xab, .x=0xf0, .y=0xd4, .sp=0x52, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x37e8, .value=0x10}, {.addr=0x37e9, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0x37ea, .a=0xab, .x=0xf0, .y=0xd4, .sp=0x52, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x37e8, .value=0x10}, {.addr=0x37e9, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0x37e8, .value=0x10, .type=IO_READ},
        {.addr=0x37e9, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xabce, .a=0x2f, .x=0x73, .y=0x97, .sp=0xbe, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xabce, .value=0x10}, {.addr=0xabcf, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xac1c, .a=0x2f, .x=0x73, .y=0x97, .sp=0xbe, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0xabce, .value=0x10}, {.addr=0xabcf, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xabce, .value=0x10, .type=IO_READ},
        {.addr=0xabcf, .value=0x4c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xb170, .a=0xe2, .x=0xda, .y=0xf4, .sp=0x4d, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xb170, .value=0x10}, {.addr=0xb171, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xb172, .a=0xe2, .x=0xda, .y=0xf4, .sp=0x4d, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0xb170, .value=0x10}, {.addr=0xb171, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xb170, .value=0x10, .type=IO_READ},
        {.addr=0xb171, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xd146, .a=0xcb, .x=0xcf, .y=0xa7, .sp=0xc4, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xd146, .value=0x10}, {.addr=0xd147, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xd0e2, .a=0xcb, .x=0xcf, .y=0xa7, .sp=0xc4, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0xd146, .value=0x10}, {.addr=0xd147, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xd146, .value=0x10, .type=IO_READ},
        {.addr=0xd147, .value=0x9a, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xc2f7, .a=0x7e, .x=0xe4, .y=0x48, .sp=0x61, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0xc2f7, .value=0x10}, {.addr=0xc2f8, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xc2f9, .a=0x7e, .x=0xe4, .y=0x48, .sp=0x61, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0xc2f7, .value=0x10}, {.addr=0xc2f8, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xc2f7, .value=0x10, .type=IO_READ},
        {.addr=0xc2f8, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x1420, .a=0x73, .x=0x3e, .y=0x01, .sp=0x95, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x1420, .value=0x10}, {.addr=0x1421, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x1422, .a=0x73, .x=0x3e, .y=0x01, .sp=0x95, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x1420, .value=0x10}, {.addr=0x1421, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x1420, .value=0x10, .type=IO_READ},
        {.addr=0x1421, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x0553, .a=0x0d, .x=0x12, .y=0x62, .sp=0x85, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0553, .value=0x10}, {.addr=0x0554, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x0570, .a=0x0d, .x=0x12, .y=0x62, .sp=0x85, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0553, .value=0x10}, {.addr=0x0554, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x0553, .value=0x10, .type=IO_READ},
        {.addr=0x0554, .value=0x1b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x2b29, .a=0xe2, .x=0x46, .y=0xd5, .sp=0x55, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x2b29, .value=0x10}, {.addr=0x2b2a, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x2b96, .a=0xe2, .x=0x46, .y=0xd5, .sp=0x55, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x2b29, .value=0x10}, {.addr=0x2b2a, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x2b29, .value=0x10, .type=IO_READ},
        {.addr=0x2b2a, .value=0x6b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x9e7e, .a=0x57, .x=0x67, .y=0x96, .sp=0xf5, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x9e7e, .value=0x10}, {.addr=0x9e7f, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x9ecb, .a=0x57, .x=0x67, .y=0x96, .sp=0xf5, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x9e7e, .value=0x10}, {.addr=0x9e7f, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x9e7e, .value=0x10, .type=IO_READ},
        {.addr=0x9e7f, .value=0x4b, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x11e3, .a=0x3a, .x=0xc2, .y=0x4a, .sp=0x5f, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x11e3, .value=0x10}, {.addr=0x11e4, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x11e5, .a=0x3a, .x=0xc2, .y=0x4a, .sp=0x5f, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x11e3, .value=0x10}, {.addr=0x11e4, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x11e3, .value=0x10, .type=IO_READ},
        {.addr=0x11e4, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xa616, .a=0xfd, .x=0x9b, .y=0x18, .sp=0xab, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xa616, .value=0x10}, {.addr=0xa617, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0xa5a7, .a=0xfd, .x=0x9b, .y=0x18, .sp=0xab, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0xa616, .value=0x10}, {.addr=0xa617, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0xa616, .value=0x10, .type=IO_READ},
        {.addr=0xa617, .value=0x8f, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x0c78, .a=0x7b, .x=0x70, .y=0xdf, .sp=0x17, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x0c78, .value=0x10}, {.addr=0x0c79, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x0c7a, .a=0x7b, .x=0x70, .y=0xdf, .sp=0x17, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x0c78, .value=0x10}, {.addr=0x0c79, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x0c78, .value=0x10, .type=IO_READ},
        {.addr=0x0c79, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03C9) {
    const struct CPU_State initial_cpu = {.pc=0xe673, .a=0xe3, .x=0xb3, .y=0xb2, .sp=0x92, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xe673, .value=0x10}, {.addr=0xe674, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xe69d, .a=0xe3, .x=0xb3, .y=0xb2, .sp=0x92, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0xe673, .value=0x10}, {.addr=0xe674, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xe673, .value=0x10, .type=IO_READ},
        {.addr=0xe674, .value=0x28, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xea5e, .a=0x05, .x=0x12, .y=0xab, .sp=0x9c, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xea5e, .value=0x10}, {.addr=0xea5f, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0xea4b, .a=0x05, .x=0x12, .y=0xab, .sp=0x9c, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0xea5e, .value=0x10}, {.addr=0xea5f, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0xea5e, .value=0x10, .type=IO_READ},
        {.addr=0xea5f, .value=0xeb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xffa8, .a=0xaa, .x=0xca, .y=0x35, .sp=0x8d, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xffa8, .value=0x10}, {.addr=0xffa9, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xffd8, .a=0xaa, .x=0xca, .y=0x35, .sp=0x8d, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xffa8, .value=0x10}, {.addr=0xffa9, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xffa8, .value=0x10, .type=IO_READ},
        {.addr=0xffa9, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03CC) {
    const struct CPU_State initial_cpu = {.pc=0xea31, .a=0xed, .x=0x5c, .y=0x32, .sp=0x8e, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xea31, .value=0x10}, {.addr=0xea32, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xea33, .a=0xed, .x=0x5c, .y=0x32, .sp=0x8e, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0xea31, .value=0x10}, {.addr=0xea32, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xea31, .value=0x10, .type=IO_READ},
        {.addr=0xea32, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x779f, .a=0xb8, .x=0x31, .y=0xd5, .sp=0xd0, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x779f, .value=0x10}, {.addr=0x77a0, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x778b, .a=0xb8, .x=0x31, .y=0xd5, .sp=0xd0, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x779f, .value=0x10}, {.addr=0x77a0, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x779f, .value=0x10, .type=IO_READ},
        {.addr=0x77a0, .value=0xea, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03CE) {
    const struct CPU_State initial_cpu = {.pc=0xad64, .a=0xeb, .x=0x5e, .y=0xea, .sp=0x1a, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xad64, .value=0x10}, {.addr=0xad65, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0xad66, .a=0xeb, .x=0x5e, .y=0xea, .sp=0x1a, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0xad64, .value=0x10}, {.addr=0xad65, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0xad64, .value=0x10, .type=IO_READ},
        {.addr=0xad65, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03CF) {
    const struct CPU_State initial_cpu = {.pc=0xfc6f, .a=0x0c, .x=0xd1, .y=0x2c, .sp=0x46, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0xfc6f, .value=0x10}, {.addr=0xfc70, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xfc71, .a=0x0c, .x=0xd1, .y=0x2c, .sp=0x46, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0xfc6f, .value=0x10}, {.addr=0xfc70, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xfc6f, .value=0x10, .type=IO_READ},
        {.addr=0xfc70, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xe61d, .a=0xec, .x=0xc6, .y=0x0d, .sp=0xee, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xe61d, .value=0x10}, {.addr=0xe61e, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xe61f, .a=0xec, .x=0xc6, .y=0x0d, .sp=0xee, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0xe61d, .value=0x10}, {.addr=0xe61e, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xe61d, .value=0x10, .type=IO_READ},
        {.addr=0xe61e, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x276b, .a=0xec, .x=0xac, .y=0x29, .sp=0x1d, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x276b, .value=0x10}, {.addr=0x276c, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x276d, .a=0xec, .x=0xac, .y=0x29, .sp=0x1d, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x276b, .value=0x10}, {.addr=0x276c, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x276b, .value=0x10, .type=IO_READ},
        {.addr=0x276c, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03D2) {
    const struct CPU_State initial_cpu = {.pc=0xb79e, .a=0xf6, .x=0x9e, .y=0xef, .sp=0xf9, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xb79e, .value=0x10}, {.addr=0xb79f, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xb7a0, .a=0xf6, .x=0x9e, .y=0xef, .sp=0xf9, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xb79e, .value=0x10}, {.addr=0xb79f, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xb79e, .value=0x10, .type=IO_READ},
        {.addr=0xb79f, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x10c8, .a=0xbf, .x=0xbe, .y=0x8f, .sp=0xce, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x10c8, .value=0x10}, {.addr=0x10c9, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x10a1, .a=0xbf, .x=0xbe, .y=0x8f, .sp=0xce, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x10c8, .value=0x10}, {.addr=0x10c9, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x10c8, .value=0x10, .type=IO_READ},
        {.addr=0x10c9, .value=0xd7, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xd9ea, .a=0xac, .x=0xe1, .y=0x8b, .sp=0x84, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xd9ea, .value=0x10}, {.addr=0xd9eb, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xd98e, .a=0xac, .x=0xe1, .y=0x8b, .sp=0x84, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0xd9ea, .value=0x10}, {.addr=0xd9eb, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xd9ea, .value=0x10, .type=IO_READ},
        {.addr=0xd9eb, .value=0xa2, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x2f7e, .a=0xa9, .x=0xb5, .y=0xb4, .sp=0x3f, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x2f7e, .value=0x10}, {.addr=0x2f7f, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x2f80, .a=0xa9, .x=0xb5, .y=0xb4, .sp=0x3f, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x2f7e, .value=0x10}, {.addr=0x2f7f, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x2f7e, .value=0x10, .type=IO_READ},
        {.addr=0x2f7f, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x8a78, .a=0xa5, .x=0x1f, .y=0x91, .sp=0x68, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x8a78, .value=0x10}, {.addr=0x8a79, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x8a7a, .a=0xa5, .x=0x1f, .y=0x91, .sp=0x68, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x8a78, .value=0x10}, {.addr=0x8a79, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x8a78, .value=0x10, .type=IO_READ},
        {.addr=0x8a79, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03D7) {
    const struct CPU_State initial_cpu = {.pc=0x0d14, .a=0x96, .x=0x63, .y=0x6a, .sp=0x16, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0d14, .value=0x10}, {.addr=0x0d15, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x0d1f, .a=0x96, .x=0x63, .y=0x6a, .sp=0x16, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0d14, .value=0x10}, {.addr=0x0d15, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x0d14, .value=0x10, .type=IO_READ},
        {.addr=0x0d15, .value=0x09, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03D8) {
    const struct CPU_State initial_cpu = {.pc=0x32f4, .a=0xb2, .x=0x07, .y=0x09, .sp=0x79, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x32f4, .value=0x10}, {.addr=0x32f5, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x32f6, .a=0xb2, .x=0x07, .y=0x09, .sp=0x79, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x32f4, .value=0x10}, {.addr=0x32f5, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x32f4, .value=0x10, .type=IO_READ},
        {.addr=0x32f5, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xbe55, .a=0xd9, .x=0xcb, .y=0xd3, .sp=0xc8, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xbe55, .value=0x10}, {.addr=0xbe56, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xbe73, .a=0xd9, .x=0xcb, .y=0xd3, .sp=0xc8, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xbe55, .value=0x10}, {.addr=0xbe56, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xbe55, .value=0x10, .type=IO_READ},
        {.addr=0xbe56, .value=0x1c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x36ed, .a=0xad, .x=0x1d, .y=0xf9, .sp=0x79, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x36ed, .value=0x10}, {.addr=0x36ee, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x3684, .a=0xad, .x=0x1d, .y=0xf9, .sp=0x79, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x36ed, .value=0x10}, {.addr=0x36ee, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x36ed, .value=0x10, .type=IO_READ},
        {.addr=0x36ee, .value=0x95, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x4fa1, .a=0x94, .x=0x2e, .y=0x71, .sp=0xb8, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x4fa1, .value=0x10}, {.addr=0x4fa2, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x4fa3, .a=0x94, .x=0x2e, .y=0x71, .sp=0xb8, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x4fa1, .value=0x10}, {.addr=0x4fa2, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x4fa1, .value=0x10, .type=IO_READ},
        {.addr=0x4fa2, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xab54, .a=0x69, .x=0x80, .y=0xa9, .sp=0x73, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xab54, .value=0x10}, {.addr=0xab55, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xab56, .a=0x69, .x=0x80, .y=0xa9, .sp=0x73, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xab54, .value=0x10}, {.addr=0xab55, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xab54, .value=0x10, .type=IO_READ},
        {.addr=0xab55, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x424c, .a=0x31, .x=0x2a, .y=0x57, .sp=0x00, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x424c, .value=0x10}, {.addr=0x424d, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x424e, .a=0x31, .x=0x2a, .y=0x57, .sp=0x00, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x424c, .value=0x10}, {.addr=0x424d, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x424c, .value=0x10, .type=IO_READ},
        {.addr=0x424d, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x5b11, .a=0x9d, .x=0x3d, .y=0xc4, .sp=0x2f, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x5b11, .value=0x10}, {.addr=0x5b12, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x5b13, .a=0x9d, .x=0x3d, .y=0xc4, .sp=0x2f, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x5b11, .value=0x10}, {.addr=0x5b12, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x5b11, .value=0x10, .type=IO_READ},
        {.addr=0x5b12, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03DF) {
    const struct CPU_State initial_cpu = {.pc=0xb396, .a=0x98, .x=0xe7, .y=0xa2, .sp=0x57, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xb396, .value=0x10}, {.addr=0xb397, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xb3c6, .a=0x98, .x=0xe7, .y=0xa2, .sp=0x57, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0xb396, .value=0x10}, {.addr=0xb397, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xb396, .value=0x10, .type=IO_READ},
        {.addr=0xb397, .value=0x2e, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xbf5f, .a=0xa3, .x=0xaa, .y=0xe6, .sp=0x41, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xbf5f, .value=0x10}, {.addr=0xbf60, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xbf61, .a=0xa3, .x=0xaa, .y=0xe6, .sp=0x41, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xbf5f, .value=0x10}, {.addr=0xbf60, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xbf5f, .value=0x10, .type=IO_READ},
        {.addr=0xbf60, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x8685, .a=0xad, .x=0xa2, .y=0x36, .sp=0xd4, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x8685, .value=0x10}, {.addr=0x8686, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x8619, .a=0xad, .x=0xa2, .y=0x36, .sp=0xd4, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x8685, .value=0x10}, {.addr=0x8686, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x8685, .value=0x10, .type=IO_READ},
        {.addr=0x8686, .value=0x92, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x1df8, .a=0x53, .x=0x7e, .y=0x7b, .sp=0x31, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x1df8, .value=0x10}, {.addr=0x1df9, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x1dfa, .a=0x53, .x=0x7e, .y=0x7b, .sp=0x31, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x1df8, .value=0x10}, {.addr=0x1df9, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x1df8, .value=0x10, .type=IO_READ},
        {.addr=0x1df9, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x7c36, .a=0x1a, .x=0xbd, .y=0x9d, .sp=0x85, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x7c36, .value=0x10}, {.addr=0x7c37, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x7c94, .a=0x1a, .x=0xbd, .y=0x9d, .sp=0x85, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x7c36, .value=0x10}, {.addr=0x7c37, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x7c36, .value=0x10, .type=IO_READ},
        {.addr=0x7c37, .value=0x5c, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xb5dc, .a=0xa7, .x=0x08, .y=0x9e, .sp=0x5b, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xb5dc, .value=0x10}, {.addr=0xb5dd, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xb5de, .a=0xa7, .x=0x08, .y=0x9e, .sp=0x5b, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xb5dc, .value=0x10}, {.addr=0xb5dd, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xb5dc, .value=0x10, .type=IO_READ},
        {.addr=0xb5dd, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xa548, .a=0xeb, .x=0xb5, .y=0xec, .sp=0xeb, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xa548, .value=0x10}, {.addr=0xa549, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xa545, .a=0xeb, .x=0xb5, .y=0xec, .sp=0xeb, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xa548, .value=0x10}, {.addr=0xa549, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xa548, .value=0x10, .type=IO_READ},
        {.addr=0xa549, .value=0xfb, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x871c, .a=0x4b, .x=0x2d, .y=0x24, .sp=0x18, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x871c, .value=0x10}, {.addr=0x871d, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x8783, .a=0x4b, .x=0x2d, .y=0x24, .sp=0x18, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x871c, .value=0x10}, {.addr=0x871d, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x871c, .value=0x10, .type=IO_READ},
        {.addr=0x871d, .value=0x65, .type=IO_READ},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_10, _10_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x4c4f, .a=0x12, .x=0xfd, .y=0x1d, .sp=0x88, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x4c4f, .value=0x10}, {.addr=0x4c50, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x4c51, .a=0x12, .x=0xfd, .y=0x1d, .sp=0x88, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x4c4f, .value=0x10}, {.addr=0x4c50, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x4c4f, .value=0x10, .type=IO_READ},
        {.addr=0x4c50, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("10 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
