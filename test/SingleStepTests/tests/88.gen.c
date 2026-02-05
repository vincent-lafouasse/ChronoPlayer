#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_88, _88_0000) {
    const struct CPU_State initial_cpu = {.pc=0xf198, .a=0x21, .x=0x7d, .y=0xf4, .sp=0x8f, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xf198, .value=0x88}, {.addr=0xf199, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xf19a, .a=0x6d, .x=0x7d, .y=0xf4, .sp=0x8f, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xf198, .value=0x88}, {.addr=0xf199, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xf198, .value=0x88, .type=IO_READ},
        {.addr=0xf199, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0001) {
    const struct CPU_State initial_cpu = {.pc=0xf96c, .a=0x3b, .x=0x34, .y=0xa8, .sp=0xd9, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xf96c, .value=0x88}, {.addr=0xf96d, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xf96e, .a=0x7f, .x=0x34, .y=0xa8, .sp=0xd9, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xf96c, .value=0x88}, {.addr=0xf96d, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xf96c, .value=0x88, .type=IO_READ},
        {.addr=0xf96d, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0002) {
    const struct CPU_State initial_cpu = {.pc=0x093b, .a=0xd9, .x=0x36, .y=0x4f, .sp=0x05, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x093b, .value=0x88}, {.addr=0x093c, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x093d, .a=0xf0, .x=0x36, .y=0x4f, .sp=0x05, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x093b, .value=0x88}, {.addr=0x093c, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x093b, .value=0x88, .type=IO_READ},
        {.addr=0x093c, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0003) {
    const struct CPU_State initial_cpu = {.pc=0x8330, .a=0x17, .x=0xdc, .y=0xd5, .sp=0x2d, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x8330, .value=0x88}, {.addr=0x8331, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x8332, .a=0xd0, .x=0xdc, .y=0xd5, .sp=0x2d, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x8330, .value=0x88}, {.addr=0x8331, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x8330, .value=0x88, .type=IO_READ},
        {.addr=0x8331, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0004) {
    const struct CPU_State initial_cpu = {.pc=0x6e91, .a=0x1c, .x=0xec, .y=0x56, .sp=0xa9, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x6e91, .value=0x88}, {.addr=0x6e92, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x6e93, .a=0x20, .x=0xec, .y=0x56, .sp=0xa9, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x6e91, .value=0x88}, {.addr=0x6e92, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x6e91, .value=0x88, .type=IO_READ},
        {.addr=0x6e92, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0005) {
    const struct CPU_State initial_cpu = {.pc=0x6726, .a=0x53, .x=0xb6, .y=0x9d, .sp=0x31, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x6726, .value=0x88}, {.addr=0x6727, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x6728, .a=0x3a, .x=0xb6, .y=0x9d, .sp=0x31, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x6726, .value=0x88}, {.addr=0x6727, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x6726, .value=0x88, .type=IO_READ},
        {.addr=0x6727, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0006) {
    const struct CPU_State initial_cpu = {.pc=0x8d14, .a=0x9a, .x=0x5c, .y=0x87, .sp=0xf7, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x8d14, .value=0x88}, {.addr=0x8d15, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x8d16, .a=0xb2, .x=0x5c, .y=0x87, .sp=0xf7, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x8d14, .value=0x88}, {.addr=0x8d15, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x8d14, .value=0x88, .type=IO_READ},
        {.addr=0x8d15, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0007) {
    const struct CPU_State initial_cpu = {.pc=0xbe6b, .a=0x5e, .x=0x51, .y=0x9e, .sp=0x63, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xbe6b, .value=0x88}, {.addr=0xbe6c, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xbe6d, .a=0xb9, .x=0x51, .y=0x9e, .sp=0x63, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xbe6b, .value=0x88}, {.addr=0xbe6c, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xbe6b, .value=0x88, .type=IO_READ},
        {.addr=0xbe6c, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0008) {
    const struct CPU_State initial_cpu = {.pc=0x782d, .a=0xcc, .x=0xac, .y=0x05, .sp=0x10, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x782d, .value=0x88}, {.addr=0x782e, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x782f, .a=0x64, .x=0xac, .y=0x05, .sp=0x10, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x782d, .value=0x88}, {.addr=0x782e, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x782d, .value=0x88, .type=IO_READ},
        {.addr=0x782e, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0009) {
    const struct CPU_State initial_cpu = {.pc=0x71d0, .a=0xdf, .x=0xb5, .y=0xbc, .sp=0x87, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x71d0, .value=0x88}, {.addr=0x71d1, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x71d2, .a=0x68, .x=0xb5, .y=0xbc, .sp=0x87, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x71d0, .value=0x88}, {.addr=0x71d1, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x71d0, .value=0x88, .type=IO_READ},
        {.addr=0x71d1, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_000A) {
    const struct CPU_State initial_cpu = {.pc=0x8ac1, .a=0xa7, .x=0xea, .y=0xc7, .sp=0x26, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x8ac1, .value=0x88}, {.addr=0x8ac2, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x8ac3, .a=0x16, .x=0xea, .y=0xc7, .sp=0x26, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x8ac1, .value=0x88}, {.addr=0x8ac2, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x8ac1, .value=0x88, .type=IO_READ},
        {.addr=0x8ac2, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_000B) {
    const struct CPU_State initial_cpu = {.pc=0x4ba3, .a=0x62, .x=0x1f, .y=0xac, .sp=0x8c, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x4ba3, .value=0x88}, {.addr=0x4ba4, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x4ba5, .a=0x5b, .x=0x1f, .y=0xac, .sp=0x8c, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4ba3, .value=0x88}, {.addr=0x4ba4, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x4ba3, .value=0x88, .type=IO_READ},
        {.addr=0x4ba4, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_000C) {
    const struct CPU_State initial_cpu = {.pc=0x4236, .a=0xae, .x=0x4f, .y=0xd1, .sp=0x22, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x4236, .value=0x88}, {.addr=0x4237, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x4238, .a=0x08, .x=0x4f, .y=0xd1, .sp=0x22, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x4236, .value=0x88}, {.addr=0x4237, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x4236, .value=0x88, .type=IO_READ},
        {.addr=0x4237, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_000D) {
    const struct CPU_State initial_cpu = {.pc=0xfce8, .a=0x62, .x=0x8d, .y=0xe0, .sp=0xc6, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0xfce8, .value=0x88}, {.addr=0xfce9, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xfcea, .a=0x98, .x=0x8d, .y=0xe0, .sp=0xc6, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xfce8, .value=0x88}, {.addr=0xfce9, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xfce8, .value=0x88, .type=IO_READ},
        {.addr=0xfce9, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_000E) {
    const struct CPU_State initial_cpu = {.pc=0x65fc, .a=0xd5, .x=0x88, .y=0x93, .sp=0xf5, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x65fc, .value=0x88}, {.addr=0x65fd, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x65fe, .a=0x7d, .x=0x88, .y=0x93, .sp=0xf5, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x65fc, .value=0x88}, {.addr=0x65fd, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x65fc, .value=0x88, .type=IO_READ},
        {.addr=0x65fd, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_000F) {
    const struct CPU_State initial_cpu = {.pc=0x7295, .a=0x6f, .x=0x2f, .y=0xce, .sp=0xf2, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x7295, .value=0x88}, {.addr=0x7296, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x7297, .a=0x8a, .x=0x2f, .y=0xce, .sp=0xf2, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x7295, .value=0x88}, {.addr=0x7296, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x7295, .value=0x88, .type=IO_READ},
        {.addr=0x7296, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0010) {
    const struct CPU_State initial_cpu = {.pc=0x13b2, .a=0x04, .x=0xef, .y=0x72, .sp=0x00, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x13b2, .value=0x88}, {.addr=0x13b3, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x13b4, .a=0x59, .x=0xef, .y=0x72, .sp=0x00, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x13b2, .value=0x88}, {.addr=0x13b3, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x13b2, .value=0x88, .type=IO_READ},
        {.addr=0x13b3, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0011) {
    const struct CPU_State initial_cpu = {.pc=0xe24e, .a=0xf1, .x=0x1e, .y=0x2a, .sp=0x3c, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xe24e, .value=0x88}, {.addr=0xe24f, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0xe250, .a=0x81, .x=0x1e, .y=0x2a, .sp=0x3c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xe24e, .value=0x88}, {.addr=0xe24f, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0xe24e, .value=0x88, .type=IO_READ},
        {.addr=0xe24f, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0012) {
    const struct CPU_State initial_cpu = {.pc=0x5326, .a=0xc7, .x=0x2e, .y=0xb1, .sp=0xa9, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x5326, .value=0x88}, {.addr=0x5327, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0x5328, .a=0x69, .x=0x2e, .y=0xb1, .sp=0xa9, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x5326, .value=0x88}, {.addr=0x5327, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0x5326, .value=0x88, .type=IO_READ},
        {.addr=0x5327, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0013) {
    const struct CPU_State initial_cpu = {.pc=0xd659, .a=0xbf, .x=0x2c, .y=0x93, .sp=0x14, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0xd659, .value=0x88}, {.addr=0xd65a, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xd65b, .a=0xf6, .x=0x2c, .y=0x93, .sp=0x14, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xd659, .value=0x88}, {.addr=0xd65a, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xd659, .value=0x88, .type=IO_READ},
        {.addr=0xd65a, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0014) {
    const struct CPU_State initial_cpu = {.pc=0x617a, .a=0x39, .x=0xb8, .y=0x0c, .sp=0xfb, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x617a, .value=0x88}, {.addr=0x617b, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x617c, .a=0x1b, .x=0xb8, .y=0x0c, .sp=0xfb, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x617a, .value=0x88}, {.addr=0x617b, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x617a, .value=0x88, .type=IO_READ},
        {.addr=0x617b, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0015) {
    const struct CPU_State initial_cpu = {.pc=0x85e3, .a=0x46, .x=0xd3, .y=0x76, .sp=0x21, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x85e3, .value=0x88}, {.addr=0x85e4, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x85e5, .a=0xe3, .x=0xd3, .y=0x76, .sp=0x21, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x85e3, .value=0x88}, {.addr=0x85e4, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x85e3, .value=0x88, .type=IO_READ},
        {.addr=0x85e4, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0016) {
    const struct CPU_State initial_cpu = {.pc=0xd94c, .a=0x54, .x=0x3d, .y=0x1b, .sp=0x43, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xd94c, .value=0x88}, {.addr=0xd94d, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xd94e, .a=0x54, .x=0x3d, .y=0x1b, .sp=0x43, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xd94c, .value=0x88}, {.addr=0xd94d, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xd94c, .value=0x88, .type=IO_READ},
        {.addr=0xd94d, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0017) {
    const struct CPU_State initial_cpu = {.pc=0x4181, .a=0x9f, .x=0xff, .y=0x98, .sp=0xc0, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x4181, .value=0x88}, {.addr=0x4182, .value=0xca}};
    const struct CPU_State final_cpu = {.pc=0x4183, .a=0x6a, .x=0xff, .y=0x98, .sp=0xc0, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x4181, .value=0x88}, {.addr=0x4182, .value=0xca}};
    const struct BusEvent events[] = {
        {.addr=0x4181, .value=0x88, .type=IO_READ},
        {.addr=0x4182, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0018) {
    const struct CPU_State initial_cpu = {.pc=0x4f30, .a=0xae, .x=0x78, .y=0xaf, .sp=0x1e, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x4f30, .value=0x88}, {.addr=0x4f31, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0x4f32, .a=0xe3, .x=0x78, .y=0xaf, .sp=0x1e, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x4f30, .value=0x88}, {.addr=0x4f31, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0x4f30, .value=0x88, .type=IO_READ},
        {.addr=0x4f31, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0019) {
    const struct CPU_State initial_cpu = {.pc=0x9b25, .a=0x04, .x=0xd0, .y=0x75, .sp=0x6b, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x9b25, .value=0x88}, {.addr=0x9b26, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x9b27, .a=0x89, .x=0xd0, .y=0x75, .sp=0x6b, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x9b25, .value=0x88}, {.addr=0x9b26, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x9b25, .value=0x88, .type=IO_READ},
        {.addr=0x9b26, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_001A) {
    const struct CPU_State initial_cpu = {.pc=0xc72a, .a=0x76, .x=0x1e, .y=0xca, .sp=0xc7, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xc72a, .value=0x88}, {.addr=0xc72b, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xc72c, .a=0x4b, .x=0x1e, .y=0xca, .sp=0xc7, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xc72a, .value=0x88}, {.addr=0xc72b, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xc72a, .value=0x88, .type=IO_READ},
        {.addr=0xc72b, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_001B) {
    const struct CPU_State initial_cpu = {.pc=0x8307, .a=0xce, .x=0x6b, .y=0x69, .sp=0x75, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x8307, .value=0x88}, {.addr=0x8308, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x8309, .a=0x20, .x=0x6b, .y=0x69, .sp=0x75, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x8307, .value=0x88}, {.addr=0x8308, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x8307, .value=0x88, .type=IO_READ},
        {.addr=0x8308, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_001C) {
    const struct CPU_State initial_cpu = {.pc=0x8462, .a=0xf3, .x=0xa4, .y=0xde, .sp=0x22, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x8462, .value=0x88}, {.addr=0x8463, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x8464, .a=0x06, .x=0xa4, .y=0xde, .sp=0x22, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x8462, .value=0x88}, {.addr=0x8463, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x8462, .value=0x88, .type=IO_READ},
        {.addr=0x8463, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_001D) {
    const struct CPU_State initial_cpu = {.pc=0x51eb, .a=0x5f, .x=0xfb, .y=0x72, .sp=0x89, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x51eb, .value=0x88}, {.addr=0x51ec, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x51ed, .a=0x35, .x=0xfb, .y=0x72, .sp=0x89, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x51eb, .value=0x88}, {.addr=0x51ec, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x51eb, .value=0x88, .type=IO_READ},
        {.addr=0x51ec, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_001E) {
    const struct CPU_State initial_cpu = {.pc=0xb9cc, .a=0x65, .x=0x1e, .y=0xce, .sp=0x9f, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xb9cc, .value=0x88}, {.addr=0xb9cd, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb9ce, .a=0x25, .x=0x1e, .y=0xce, .sp=0x9f, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xb9cc, .value=0x88}, {.addr=0xb9cd, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb9cc, .value=0x88, .type=IO_READ},
        {.addr=0xb9cd, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_001F) {
    const struct CPU_State initial_cpu = {.pc=0xfbf0, .a=0x38, .x=0x52, .y=0xbb, .sp=0xc9, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xfbf0, .value=0x88}, {.addr=0xfbf1, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0xfbf2, .a=0xad, .x=0x52, .y=0xbb, .sp=0xc9, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xfbf0, .value=0x88}, {.addr=0xfbf1, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0xfbf0, .value=0x88, .type=IO_READ},
        {.addr=0xfbf1, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0020) {
    const struct CPU_State initial_cpu = {.pc=0x0035, .a=0xd5, .x=0x9f, .y=0x5a, .sp=0xba, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0035, .value=0x88}, {.addr=0x0036, .value=0x5e}};
    const struct CPU_State final_cpu = {.pc=0x0037, .a=0x33, .x=0x9f, .y=0x5a, .sp=0xba, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0035, .value=0x88}, {.addr=0x0036, .value=0x5e}};
    const struct BusEvent events[] = {
        {.addr=0x0035, .value=0x88, .type=IO_READ},
        {.addr=0x0036, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0021) {
    const struct CPU_State initial_cpu = {.pc=0xe12a, .a=0x30, .x=0x17, .y=0xf8, .sp=0xc0, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xe12a, .value=0x88}, {.addr=0xe12b, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xe12c, .a=0x0a, .x=0x17, .y=0xf8, .sp=0xc0, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xe12a, .value=0x88}, {.addr=0xe12b, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xe12a, .value=0x88, .type=IO_READ},
        {.addr=0xe12b, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0022) {
    const struct CPU_State initial_cpu = {.pc=0xac89, .a=0x43, .x=0xcc, .y=0x42, .sp=0xdf, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xac89, .value=0x88}, {.addr=0xac8a, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xac8b, .a=0xde, .x=0xcc, .y=0x42, .sp=0xdf, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xac89, .value=0x88}, {.addr=0xac8a, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xac89, .value=0x88, .type=IO_READ},
        {.addr=0xac8a, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0023) {
    const struct CPU_State initial_cpu = {.pc=0xbefd, .a=0x08, .x=0x9e, .y=0x32, .sp=0x5d, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xbefd, .value=0x88}, {.addr=0xbefe, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xbeff, .a=0x6c, .x=0x9e, .y=0x32, .sp=0x5d, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xbefd, .value=0x88}, {.addr=0xbefe, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xbefd, .value=0x88, .type=IO_READ},
        {.addr=0xbefe, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0024) {
    const struct CPU_State initial_cpu = {.pc=0x5691, .a=0xc4, .x=0x04, .y=0x24, .sp=0x7a, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x5691, .value=0x88}, {.addr=0x5692, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5693, .a=0x8b, .x=0x04, .y=0x24, .sp=0x7a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x5691, .value=0x88}, {.addr=0x5692, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x5691, .value=0x88, .type=IO_READ},
        {.addr=0x5692, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0025) {
    const struct CPU_State initial_cpu = {.pc=0x5c0a, .a=0x9d, .x=0x9a, .y=0xa7, .sp=0x8b, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x5c0a, .value=0x88}, {.addr=0x5c0b, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x5c0c, .a=0xa3, .x=0x9a, .y=0xa7, .sp=0x8b, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x5c0a, .value=0x88}, {.addr=0x5c0b, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x5c0a, .value=0x88, .type=IO_READ},
        {.addr=0x5c0b, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0026) {
    const struct CPU_State initial_cpu = {.pc=0x31d8, .a=0x9b, .x=0x53, .y=0xd3, .sp=0xe4, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x31d8, .value=0x88}, {.addr=0x31d9, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x31da, .a=0x5a, .x=0x53, .y=0xd3, .sp=0xe4, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x31d8, .value=0x88}, {.addr=0x31d9, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x31d8, .value=0x88, .type=IO_READ},
        {.addr=0x31d9, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0027) {
    const struct CPU_State initial_cpu = {.pc=0x60fc, .a=0xc3, .x=0x1a, .y=0x89, .sp=0xe5, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x60fc, .value=0x88}, {.addr=0x60fd, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x60fe, .a=0x93, .x=0x1a, .y=0x89, .sp=0xe5, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x60fc, .value=0x88}, {.addr=0x60fd, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x60fc, .value=0x88, .type=IO_READ},
        {.addr=0x60fd, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0028) {
    const struct CPU_State initial_cpu = {.pc=0x6309, .a=0x72, .x=0xd5, .y=0x0b, .sp=0x40, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x6309, .value=0x88}, {.addr=0x630a, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x630b, .a=0x0e, .x=0xd5, .y=0x0b, .sp=0x40, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x6309, .value=0x88}, {.addr=0x630a, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x6309, .value=0x88, .type=IO_READ},
        {.addr=0x630a, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0029) {
    const struct CPU_State initial_cpu = {.pc=0x3411, .a=0x6b, .x=0x6a, .y=0xd1, .sp=0xf2, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x3411, .value=0x88}, {.addr=0x3412, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x3413, .a=0x68, .x=0x6a, .y=0xd1, .sp=0xf2, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x3411, .value=0x88}, {.addr=0x3412, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x3411, .value=0x88, .type=IO_READ},
        {.addr=0x3412, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_002A) {
    const struct CPU_State initial_cpu = {.pc=0x4f77, .a=0x22, .x=0x72, .y=0x1d, .sp=0x94, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x4f77, .value=0x88}, {.addr=0x4f78, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4f79, .a=0x5f, .x=0x72, .y=0x1d, .sp=0x94, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x4f77, .value=0x88}, {.addr=0x4f78, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4f77, .value=0x88, .type=IO_READ},
        {.addr=0x4f78, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_002B) {
    const struct CPU_State initial_cpu = {.pc=0x1064, .a=0xbc, .x=0x67, .y=0xc2, .sp=0x2c, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0x1064, .value=0x88}, {.addr=0x1065, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x1066, .a=0x09, .x=0x67, .y=0xc2, .sp=0x2c, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x1064, .value=0x88}, {.addr=0x1065, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x1064, .value=0x88, .type=IO_READ},
        {.addr=0x1065, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_002C) {
    const struct CPU_State initial_cpu = {.pc=0x014f, .a=0xdf, .x=0x72, .y=0xc7, .sp=0x7e, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x88}, {.addr=0x0150, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0151, .a=0x06, .x=0x72, .y=0xc7, .sp=0x7e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x88}, {.addr=0x0150, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x014f, .value=0x88, .type=IO_READ},
        {.addr=0x0150, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_002D) {
    const struct CPU_State initial_cpu = {.pc=0xf92c, .a=0x75, .x=0xd3, .y=0xae, .sp=0x1e, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0xf92c, .value=0x88}, {.addr=0xf92d, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0xf92e, .a=0xfc, .x=0xd3, .y=0xae, .sp=0x1e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xf92c, .value=0x88}, {.addr=0xf92d, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0xf92c, .value=0x88, .type=IO_READ},
        {.addr=0xf92d, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_002E) {
    const struct CPU_State initial_cpu = {.pc=0x0e87, .a=0xaf, .x=0x6a, .y=0x02, .sp=0x06, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0e87, .value=0x88}, {.addr=0x0e88, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x0e89, .a=0xbe, .x=0x6a, .y=0x02, .sp=0x06, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x0e87, .value=0x88}, {.addr=0x0e88, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x0e87, .value=0x88, .type=IO_READ},
        {.addr=0x0e88, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_002F) {
    const struct CPU_State initial_cpu = {.pc=0x53df, .a=0x1e, .x=0x21, .y=0xac, .sp=0x6f, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x53df, .value=0x88}, {.addr=0x53e0, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x53e1, .a=0x81, .x=0x21, .y=0xac, .sp=0x6f, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x53df, .value=0x88}, {.addr=0x53e0, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x53df, .value=0x88, .type=IO_READ},
        {.addr=0x53e0, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0030) {
    const struct CPU_State initial_cpu = {.pc=0x88fa, .a=0x44, .x=0xcd, .y=0x03, .sp=0x6a, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x88fa, .value=0x88}, {.addr=0x88fb, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x88fc, .a=0x2b, .x=0xcd, .y=0x03, .sp=0x6a, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x88fa, .value=0x88}, {.addr=0x88fb, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x88fa, .value=0x88, .type=IO_READ},
        {.addr=0x88fb, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0031) {
    const struct CPU_State initial_cpu = {.pc=0x63dd, .a=0xed, .x=0x16, .y=0xde, .sp=0x9e, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x63dd, .value=0x88}, {.addr=0x63de, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x63df, .a=0x99, .x=0x16, .y=0xde, .sp=0x9e, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x63dd, .value=0x88}, {.addr=0x63de, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x63dd, .value=0x88, .type=IO_READ},
        {.addr=0x63de, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0032) {
    const struct CPU_State initial_cpu = {.pc=0x9cbb, .a=0x48, .x=0x70, .y=0x56, .sp=0x06, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x9cbb, .value=0x88}, {.addr=0x9cbc, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x9cbd, .a=0x8a, .x=0x70, .y=0x56, .sp=0x06, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x9cbb, .value=0x88}, {.addr=0x9cbc, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x9cbb, .value=0x88, .type=IO_READ},
        {.addr=0x9cbc, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0033) {
    const struct CPU_State initial_cpu = {.pc=0xffa2, .a=0xbc, .x=0xae, .y=0xb9, .sp=0xf1, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0xffa2, .value=0x88}, {.addr=0xffa3, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xffa4, .a=0xfe, .x=0xae, .y=0xb9, .sp=0xf1, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xffa2, .value=0x88}, {.addr=0xffa3, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xffa2, .value=0x88, .type=IO_READ},
        {.addr=0xffa3, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0034) {
    const struct CPU_State initial_cpu = {.pc=0x3ebf, .a=0x14, .x=0xe0, .y=0x08, .sp=0x60, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x3ebf, .value=0x88}, {.addr=0x3ec0, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x3ec1, .a=0xc7, .x=0xe0, .y=0x08, .sp=0x60, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x3ebf, .value=0x88}, {.addr=0x3ec0, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x3ebf, .value=0x88, .type=IO_READ},
        {.addr=0x3ec0, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0035) {
    const struct CPU_State initial_cpu = {.pc=0xad8e, .a=0x73, .x=0xf9, .y=0x9f, .sp=0x68, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xad8e, .value=0x88}, {.addr=0xad8f, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xad90, .a=0x93, .x=0xf9, .y=0x9f, .sp=0x68, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xad8e, .value=0x88}, {.addr=0xad8f, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xad8e, .value=0x88, .type=IO_READ},
        {.addr=0xad8f, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0036) {
    const struct CPU_State initial_cpu = {.pc=0x389e, .a=0xd7, .x=0x88, .y=0xe4, .sp=0x3d, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x389e, .value=0x88}, {.addr=0x389f, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x38a0, .a=0xbc, .x=0x88, .y=0xe4, .sp=0x3d, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x389e, .value=0x88}, {.addr=0x389f, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x389e, .value=0x88, .type=IO_READ},
        {.addr=0x389f, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0037) {
    const struct CPU_State initial_cpu = {.pc=0x70ad, .a=0x06, .x=0x19, .y=0x69, .sp=0xbc, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x70ad, .value=0x88}, {.addr=0x70ae, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x70af, .a=0x24, .x=0x19, .y=0x69, .sp=0xbc, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x70ad, .value=0x88}, {.addr=0x70ae, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x70ad, .value=0x88, .type=IO_READ},
        {.addr=0x70ae, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0038) {
    const struct CPU_State initial_cpu = {.pc=0xe08b, .a=0x9a, .x=0xb4, .y=0x23, .sp=0x18, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xe08b, .value=0x88}, {.addr=0xe08c, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xe08d, .a=0x3d, .x=0xb4, .y=0x23, .sp=0x18, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xe08b, .value=0x88}, {.addr=0xe08c, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xe08b, .value=0x88, .type=IO_READ},
        {.addr=0xe08c, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0039) {
    const struct CPU_State initial_cpu = {.pc=0x01ef, .a=0xba, .x=0x84, .y=0x32, .sp=0xb3, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x88}, {.addr=0x01f0, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0x01f1, .a=0xb0, .x=0x84, .y=0x32, .sp=0xb3, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x88}, {.addr=0x01f0, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0x01ef, .value=0x88, .type=IO_READ},
        {.addr=0x01f0, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_003A) {
    const struct CPU_State initial_cpu = {.pc=0x0610, .a=0xa4, .x=0xc1, .y=0x20, .sp=0xe8, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0610, .value=0x88}, {.addr=0x0611, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x0612, .a=0x28, .x=0xc1, .y=0x20, .sp=0xe8, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0610, .value=0x88}, {.addr=0x0611, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x0610, .value=0x88, .type=IO_READ},
        {.addr=0x0611, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_003B) {
    const struct CPU_State initial_cpu = {.pc=0x26ee, .a=0x2a, .x=0xdb, .y=0x84, .sp=0x5b, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x26ee, .value=0x88}, {.addr=0x26ef, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x26f0, .a=0x04, .x=0xdb, .y=0x84, .sp=0x5b, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x26ee, .value=0x88}, {.addr=0x26ef, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x26ee, .value=0x88, .type=IO_READ},
        {.addr=0x26ef, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_003C) {
    const struct CPU_State initial_cpu = {.pc=0x550d, .a=0x84, .x=0x36, .y=0x59, .sp=0x4f, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x550d, .value=0x88}, {.addr=0x550e, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x550f, .a=0x5d, .x=0x36, .y=0x59, .sp=0x4f, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x550d, .value=0x88}, {.addr=0x550e, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x550d, .value=0x88, .type=IO_READ},
        {.addr=0x550e, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_003D) {
    const struct CPU_State initial_cpu = {.pc=0x2102, .a=0x63, .x=0x28, .y=0x37, .sp=0xa7, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x2102, .value=0x88}, {.addr=0x2103, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x2104, .a=0x85, .x=0x28, .y=0x37, .sp=0xa7, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x2102, .value=0x88}, {.addr=0x2103, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x2102, .value=0x88, .type=IO_READ},
        {.addr=0x2103, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_003E) {
    const struct CPU_State initial_cpu = {.pc=0x0910, .a=0xd0, .x=0x39, .y=0x89, .sp=0x94, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0910, .value=0x88}, {.addr=0x0911, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x0912, .a=0x66, .x=0x39, .y=0x89, .sp=0x94, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x0910, .value=0x88}, {.addr=0x0911, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x0910, .value=0x88, .type=IO_READ},
        {.addr=0x0911, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_003F) {
    const struct CPU_State initial_cpu = {.pc=0xd02f, .a=0x01, .x=0x67, .y=0x99, .sp=0x27, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xd02f, .value=0x88}, {.addr=0xd030, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xd031, .a=0xea, .x=0x67, .y=0x99, .sp=0x27, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xd02f, .value=0x88}, {.addr=0xd030, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xd02f, .value=0x88, .type=IO_READ},
        {.addr=0xd030, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0040) {
    const struct CPU_State initial_cpu = {.pc=0x2789, .a=0x67, .x=0xc1, .y=0xb2, .sp=0xbd, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x2789, .value=0x88}, {.addr=0x278a, .value=0xf4}};
    const struct CPU_State final_cpu = {.pc=0x278b, .a=0x5b, .x=0xc1, .y=0xb2, .sp=0xbd, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x2789, .value=0x88}, {.addr=0x278a, .value=0xf4}};
    const struct BusEvent events[] = {
        {.addr=0x2789, .value=0x88, .type=IO_READ},
        {.addr=0x278a, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0041) {
    const struct CPU_State initial_cpu = {.pc=0x4bb2, .a=0x40, .x=0xf8, .y=0x66, .sp=0xcf, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x4bb2, .value=0x88}, {.addr=0x4bb3, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0x4bb4, .a=0x61, .x=0xf8, .y=0x66, .sp=0xcf, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x4bb2, .value=0x88}, {.addr=0x4bb3, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0x4bb2, .value=0x88, .type=IO_READ},
        {.addr=0x4bb3, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0042) {
    const struct CPU_State initial_cpu = {.pc=0xb473, .a=0x3d, .x=0x37, .y=0x67, .sp=0x0c, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xb473, .value=0x88}, {.addr=0xb474, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xb475, .a=0xf9, .x=0x37, .y=0x67, .sp=0x0c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xb473, .value=0x88}, {.addr=0xb474, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xb473, .value=0x88, .type=IO_READ},
        {.addr=0xb474, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0043) {
    const struct CPU_State initial_cpu = {.pc=0x8bf2, .a=0xd5, .x=0x53, .y=0x31, .sp=0x4f, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x8bf2, .value=0x88}, {.addr=0x8bf3, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x8bf4, .a=0x46, .x=0x53, .y=0x31, .sp=0x4f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x8bf2, .value=0x88}, {.addr=0x8bf3, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x8bf2, .value=0x88, .type=IO_READ},
        {.addr=0x8bf3, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0044) {
    const struct CPU_State initial_cpu = {.pc=0x0599, .a=0x8e, .x=0xf9, .y=0x83, .sp=0x39, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0599, .value=0x88}, {.addr=0x059a, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x059b, .a=0x32, .x=0xf9, .y=0x83, .sp=0x39, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x0599, .value=0x88}, {.addr=0x059a, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x0599, .value=0x88, .type=IO_READ},
        {.addr=0x059a, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0045) {
    const struct CPU_State initial_cpu = {.pc=0xebdf, .a=0xee, .x=0x0a, .y=0xc9, .sp=0xc2, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xebdf, .value=0x88}, {.addr=0xebe0, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xebe1, .a=0x4b, .x=0x0a, .y=0xc9, .sp=0xc2, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xebdf, .value=0x88}, {.addr=0xebe0, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xebdf, .value=0x88, .type=IO_READ},
        {.addr=0xebe0, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0046) {
    const struct CPU_State initial_cpu = {.pc=0xc5eb, .a=0x9d, .x=0x42, .y=0x11, .sp=0x56, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xc5eb, .value=0x88}, {.addr=0xc5ec, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xc5ed, .a=0xf0, .x=0x42, .y=0x11, .sp=0x56, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xc5eb, .value=0x88}, {.addr=0xc5ec, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xc5eb, .value=0x88, .type=IO_READ},
        {.addr=0xc5ec, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0047) {
    const struct CPU_State initial_cpu = {.pc=0x21c4, .a=0x93, .x=0x02, .y=0xa4, .sp=0xb2, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x21c4, .value=0x88}, {.addr=0x21c5, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0x21c6, .a=0x28, .x=0x02, .y=0xa4, .sp=0xb2, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x21c4, .value=0x88}, {.addr=0x21c5, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0x21c4, .value=0x88, .type=IO_READ},
        {.addr=0x21c5, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0048) {
    const struct CPU_State initial_cpu = {.pc=0x081a, .a=0xd9, .x=0x1b, .y=0x2c, .sp=0xdf, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x081a, .value=0x88}, {.addr=0x081b, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x081c, .a=0x2d, .x=0x1b, .y=0x2c, .sp=0xdf, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x081a, .value=0x88}, {.addr=0x081b, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x081a, .value=0x88, .type=IO_READ},
        {.addr=0x081b, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0049) {
    const struct CPU_State initial_cpu = {.pc=0xe527, .a=0x1e, .x=0x3b, .y=0x24, .sp=0xce, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0xe527, .value=0x88}, {.addr=0xe528, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xe529, .a=0x71, .x=0x3b, .y=0x24, .sp=0xce, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xe527, .value=0x88}, {.addr=0xe528, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xe527, .value=0x88, .type=IO_READ},
        {.addr=0xe528, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_004A) {
    const struct CPU_State initial_cpu = {.pc=0x5ada, .a=0x9c, .x=0x50, .y=0x59, .sp=0xa0, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x5ada, .value=0x88}, {.addr=0x5adb, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x5adc, .a=0x1f, .x=0x50, .y=0x59, .sp=0xa0, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x5ada, .value=0x88}, {.addr=0x5adb, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x5ada, .value=0x88, .type=IO_READ},
        {.addr=0x5adb, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_004B) {
    const struct CPU_State initial_cpu = {.pc=0x0d5d, .a=0x75, .x=0x34, .y=0x1a, .sp=0xdf, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0d5d, .value=0x88}, {.addr=0x0d5e, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x0d5f, .a=0x24, .x=0x34, .y=0x1a, .sp=0xdf, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0d5d, .value=0x88}, {.addr=0x0d5e, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x0d5d, .value=0x88, .type=IO_READ},
        {.addr=0x0d5e, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_004C) {
    const struct CPU_State initial_cpu = {.pc=0x340d, .a=0xc0, .x=0x90, .y=0xd7, .sp=0x0d, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x340d, .value=0x88}, {.addr=0x340e, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x340f, .a=0x35, .x=0x90, .y=0xd7, .sp=0x0d, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x340d, .value=0x88}, {.addr=0x340e, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x340d, .value=0x88, .type=IO_READ},
        {.addr=0x340e, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_004D) {
    const struct CPU_State initial_cpu = {.pc=0x7f58, .a=0xe9, .x=0xfe, .y=0x64, .sp=0x9a, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x7f58, .value=0x88}, {.addr=0x7f59, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x7f5a, .a=0xb9, .x=0xfe, .y=0x64, .sp=0x9a, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x7f58, .value=0x88}, {.addr=0x7f59, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x7f58, .value=0x88, .type=IO_READ},
        {.addr=0x7f59, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_004E) {
    const struct CPU_State initial_cpu = {.pc=0x439f, .a=0xf5, .x=0x8d, .y=0x28, .sp=0xbb, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x439f, .value=0x88}, {.addr=0x43a0, .value=0x50}};
    const struct CPU_State final_cpu = {.pc=0x43a1, .a=0x46, .x=0x8d, .y=0x28, .sp=0xbb, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x439f, .value=0x88}, {.addr=0x43a0, .value=0x50}};
    const struct BusEvent events[] = {
        {.addr=0x439f, .value=0x88, .type=IO_READ},
        {.addr=0x43a0, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_004F) {
    const struct CPU_State initial_cpu = {.pc=0xbc46, .a=0x02, .x=0x33, .y=0x3e, .sp=0xad, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xbc46, .value=0x88}, {.addr=0xbc47, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0xbc48, .a=0x8e, .x=0x33, .y=0x3e, .sp=0xad, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xbc46, .value=0x88}, {.addr=0xbc47, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0xbc46, .value=0x88, .type=IO_READ},
        {.addr=0xbc47, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0050) {
    const struct CPU_State initial_cpu = {.pc=0x11d5, .a=0xe5, .x=0xa2, .y=0x2d, .sp=0x98, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x11d5, .value=0x88}, {.addr=0x11d6, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x11d7, .a=0xa3, .x=0xa2, .y=0x2d, .sp=0x98, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x11d5, .value=0x88}, {.addr=0x11d6, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x11d5, .value=0x88, .type=IO_READ},
        {.addr=0x11d6, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0051) {
    const struct CPU_State initial_cpu = {.pc=0xb8ec, .a=0x22, .x=0x5b, .y=0xcb, .sp=0x98, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xb8ec, .value=0x88}, {.addr=0xb8ed, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xb8ee, .a=0xda, .x=0x5b, .y=0xcb, .sp=0x98, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xb8ec, .value=0x88}, {.addr=0xb8ed, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xb8ec, .value=0x88, .type=IO_READ},
        {.addr=0xb8ed, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0052) {
    const struct CPU_State initial_cpu = {.pc=0xb20d, .a=0x28, .x=0x93, .y=0xe3, .sp=0x05, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xb20d, .value=0x88}, {.addr=0xb20e, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xb20f, .a=0x39, .x=0x93, .y=0xe3, .sp=0x05, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xb20d, .value=0x88}, {.addr=0xb20e, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xb20d, .value=0x88, .type=IO_READ},
        {.addr=0xb20e, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0053) {
    const struct CPU_State initial_cpu = {.pc=0xb53d, .a=0xd6, .x=0x2a, .y=0x15, .sp=0xfa, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0xb53d, .value=0x88}, {.addr=0xb53e, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xb53f, .a=0xbf, .x=0x2a, .y=0x15, .sp=0xfa, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xb53d, .value=0x88}, {.addr=0xb53e, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xb53d, .value=0x88, .type=IO_READ},
        {.addr=0xb53e, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0054) {
    const struct CPU_State initial_cpu = {.pc=0xd6d4, .a=0x5c, .x=0xdb, .y=0x4c, .sp=0x5a, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xd6d4, .value=0x88}, {.addr=0xd6d5, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xd6d6, .a=0x63, .x=0xdb, .y=0x4c, .sp=0x5a, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0xd6d4, .value=0x88}, {.addr=0xd6d5, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xd6d4, .value=0x88, .type=IO_READ},
        {.addr=0xd6d5, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0055) {
    const struct CPU_State initial_cpu = {.pc=0x20ac, .a=0x1a, .x=0x3e, .y=0xff, .sp=0x77, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x20ac, .value=0x88}, {.addr=0x20ad, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x20ae, .a=0xb9, .x=0x3e, .y=0xff, .sp=0x77, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x20ac, .value=0x88}, {.addr=0x20ad, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x20ac, .value=0x88, .type=IO_READ},
        {.addr=0x20ad, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0056) {
    const struct CPU_State initial_cpu = {.pc=0x59fc, .a=0xfc, .x=0x9c, .y=0x50, .sp=0xb2, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x59fc, .value=0x88}, {.addr=0x59fd, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x59fe, .a=0x12, .x=0x9c, .y=0x50, .sp=0xb2, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x59fc, .value=0x88}, {.addr=0x59fd, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x59fc, .value=0x88, .type=IO_READ},
        {.addr=0x59fd, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0057) {
    const struct CPU_State initial_cpu = {.pc=0xf4d5, .a=0x02, .x=0x13, .y=0x95, .sp=0x08, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xf4d5, .value=0x88}, {.addr=0xf4d6, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xf4d7, .a=0xcb, .x=0x13, .y=0x95, .sp=0x08, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xf4d5, .value=0x88}, {.addr=0xf4d6, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xf4d5, .value=0x88, .type=IO_READ},
        {.addr=0xf4d6, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0058) {
    const struct CPU_State initial_cpu = {.pc=0x2540, .a=0x3c, .x=0x5d, .y=0x1f, .sp=0x2d, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x2540, .value=0x88}, {.addr=0x2541, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x2542, .a=0x2b, .x=0x5d, .y=0x1f, .sp=0x2d, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x2540, .value=0x88}, {.addr=0x2541, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x2540, .value=0x88, .type=IO_READ},
        {.addr=0x2541, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0059) {
    const struct CPU_State initial_cpu = {.pc=0xf29d, .a=0x72, .x=0x58, .y=0x49, .sp=0xcb, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xf29d, .value=0x88}, {.addr=0xf29e, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0xf29f, .a=0xa3, .x=0x58, .y=0x49, .sp=0xcb, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xf29d, .value=0x88}, {.addr=0xf29e, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0xf29d, .value=0x88, .type=IO_READ},
        {.addr=0xf29e, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_005A) {
    const struct CPU_State initial_cpu = {.pc=0x0e20, .a=0xa7, .x=0x3b, .y=0x8e, .sp=0xd8, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0e20, .value=0x88}, {.addr=0x0e21, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x0e22, .a=0x34, .x=0x3b, .y=0x8e, .sp=0xd8, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x0e20, .value=0x88}, {.addr=0x0e21, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x0e20, .value=0x88, .type=IO_READ},
        {.addr=0x0e21, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_005B) {
    const struct CPU_State initial_cpu = {.pc=0xb1e5, .a=0x41, .x=0xe2, .y=0x29, .sp=0x8a, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xb1e5, .value=0x88}, {.addr=0xb1e6, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xb1e7, .a=0x86, .x=0xe2, .y=0x29, .sp=0x8a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xb1e5, .value=0x88}, {.addr=0xb1e6, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xb1e5, .value=0x88, .type=IO_READ},
        {.addr=0xb1e6, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_005C) {
    const struct CPU_State initial_cpu = {.pc=0x30dd, .a=0x49, .x=0x31, .y=0x28, .sp=0xc6, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x30dd, .value=0x88}, {.addr=0x30de, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x30df, .a=0xfb, .x=0x31, .y=0x28, .sp=0xc6, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x30dd, .value=0x88}, {.addr=0x30de, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x30dd, .value=0x88, .type=IO_READ},
        {.addr=0x30de, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_005D) {
    const struct CPU_State initial_cpu = {.pc=0x9241, .a=0xdd, .x=0x75, .y=0x86, .sp=0x07, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x9241, .value=0x88}, {.addr=0x9242, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x9243, .a=0xf7, .x=0x75, .y=0x86, .sp=0x07, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x9241, .value=0x88}, {.addr=0x9242, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x9241, .value=0x88, .type=IO_READ},
        {.addr=0x9242, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_005E) {
    const struct CPU_State initial_cpu = {.pc=0xcceb, .a=0x4c, .x=0x43, .y=0xab, .sp=0x67, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0xcceb, .value=0x88}, {.addr=0xccec, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xcced, .a=0xf0, .x=0x43, .y=0xab, .sp=0x67, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xcceb, .value=0x88}, {.addr=0xccec, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xcceb, .value=0x88, .type=IO_READ},
        {.addr=0xccec, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_005F) {
    const struct CPU_State initial_cpu = {.pc=0x23d6, .a=0xd8, .x=0x4d, .y=0x3b, .sp=0xd9, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x23d6, .value=0x88}, {.addr=0x23d7, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x23d8, .a=0x09, .x=0x4d, .y=0x3b, .sp=0xd9, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x23d6, .value=0x88}, {.addr=0x23d7, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x23d6, .value=0x88, .type=IO_READ},
        {.addr=0x23d7, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0060) {
    const struct CPU_State initial_cpu = {.pc=0xe795, .a=0xda, .x=0x21, .y=0x58, .sp=0x0e, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xe795, .value=0x88}, {.addr=0xe796, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xe797, .a=0x55, .x=0x21, .y=0x58, .sp=0x0e, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xe795, .value=0x88}, {.addr=0xe796, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xe795, .value=0x88, .type=IO_READ},
        {.addr=0xe796, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0061) {
    const struct CPU_State initial_cpu = {.pc=0x51b0, .a=0x28, .x=0x27, .y=0xd1, .sp=0x3e, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x51b0, .value=0x88}, {.addr=0x51b1, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x51b2, .a=0x10, .x=0x27, .y=0xd1, .sp=0x3e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x51b0, .value=0x88}, {.addr=0x51b1, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x51b0, .value=0x88, .type=IO_READ},
        {.addr=0x51b1, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0062) {
    const struct CPU_State initial_cpu = {.pc=0x28e4, .a=0x69, .x=0xa0, .y=0xef, .sp=0xa8, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x28e4, .value=0x88}, {.addr=0x28e5, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0x28e6, .a=0xce, .x=0xa0, .y=0xef, .sp=0xa8, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x28e4, .value=0x88}, {.addr=0x28e5, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0x28e4, .value=0x88, .type=IO_READ},
        {.addr=0x28e5, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0063) {
    const struct CPU_State initial_cpu = {.pc=0x204d, .a=0x75, .x=0x0f, .y=0x9e, .sp=0x83, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x204d, .value=0x88}, {.addr=0x204e, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0x204f, .a=0xa8, .x=0x0f, .y=0x9e, .sp=0x83, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x204d, .value=0x88}, {.addr=0x204e, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0x204d, .value=0x88, .type=IO_READ},
        {.addr=0x204e, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0064) {
    const struct CPU_State initial_cpu = {.pc=0xc68a, .a=0x5d, .x=0xd5, .y=0x77, .sp=0x90, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xc68a, .value=0x88}, {.addr=0xc68b, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xc68c, .a=0x46, .x=0xd5, .y=0x77, .sp=0x90, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xc68a, .value=0x88}, {.addr=0xc68b, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xc68a, .value=0x88, .type=IO_READ},
        {.addr=0xc68b, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0065) {
    const struct CPU_State initial_cpu = {.pc=0x54a7, .a=0xeb, .x=0x51, .y=0x40, .sp=0x4f, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x54a7, .value=0x88}, {.addr=0x54a8, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x54a9, .a=0x7a, .x=0x51, .y=0x40, .sp=0x4f, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x54a7, .value=0x88}, {.addr=0x54a8, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x54a7, .value=0x88, .type=IO_READ},
        {.addr=0x54a8, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0066) {
    const struct CPU_State initial_cpu = {.pc=0x976e, .a=0xd1, .x=0x01, .y=0xf2, .sp=0xbc, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x976e, .value=0x88}, {.addr=0x976f, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9770, .a=0xcd, .x=0x01, .y=0xf2, .sp=0xbc, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x976e, .value=0x88}, {.addr=0x976f, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x976e, .value=0x88, .type=IO_READ},
        {.addr=0x976f, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0067) {
    const struct CPU_State initial_cpu = {.pc=0x6cda, .a=0x02, .x=0xd9, .y=0x25, .sp=0x82, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x6cda, .value=0x88}, {.addr=0x6cdb, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x6cdc, .a=0x02, .x=0xd9, .y=0x25, .sp=0x82, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x6cda, .value=0x88}, {.addr=0x6cdb, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0x6cda, .value=0x88, .type=IO_READ},
        {.addr=0x6cdb, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0068) {
    const struct CPU_State initial_cpu = {.pc=0xb6de, .a=0xc6, .x=0x53, .y=0x63, .sp=0x30, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xb6de, .value=0x88}, {.addr=0xb6df, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xb6e0, .a=0xec, .x=0x53, .y=0x63, .sp=0x30, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xb6de, .value=0x88}, {.addr=0xb6df, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xb6de, .value=0x88, .type=IO_READ},
        {.addr=0xb6df, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0069) {
    const struct CPU_State initial_cpu = {.pc=0xce87, .a=0xb2, .x=0x34, .y=0xfc, .sp=0xb9, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xce87, .value=0x88}, {.addr=0xce88, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0xce89, .a=0xf3, .x=0x34, .y=0xfc, .sp=0xb9, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xce87, .value=0x88}, {.addr=0xce88, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0xce87, .value=0x88, .type=IO_READ},
        {.addr=0xce88, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_006A) {
    const struct CPU_State initial_cpu = {.pc=0x2b05, .a=0x91, .x=0x72, .y=0xfd, .sp=0x3e, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x2b05, .value=0x88}, {.addr=0x2b06, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2b07, .a=0xd7, .x=0x72, .y=0xfd, .sp=0x3e, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x2b05, .value=0x88}, {.addr=0x2b06, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2b05, .value=0x88, .type=IO_READ},
        {.addr=0x2b06, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_006B) {
    const struct CPU_State initial_cpu = {.pc=0xa321, .a=0x88, .x=0x21, .y=0xe8, .sp=0x5a, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0xa321, .value=0x88}, {.addr=0xa322, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0xa323, .a=0xd9, .x=0x21, .y=0xe8, .sp=0x5a, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xa321, .value=0x88}, {.addr=0xa322, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0xa321, .value=0x88, .type=IO_READ},
        {.addr=0xa322, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_006C) {
    const struct CPU_State initial_cpu = {.pc=0x1837, .a=0xf1, .x=0xc5, .y=0x24, .sp=0xda, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x1837, .value=0x88}, {.addr=0x1838, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x1839, .a=0x69, .x=0xc5, .y=0x24, .sp=0xda, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x1837, .value=0x88}, {.addr=0x1838, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x1837, .value=0x88, .type=IO_READ},
        {.addr=0x1838, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_006D) {
    const struct CPU_State initial_cpu = {.pc=0x15cf, .a=0x5c, .x=0xd8, .y=0x7d, .sp=0xed, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x15cf, .value=0x88}, {.addr=0x15d0, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x15d1, .a=0x3b, .x=0xd8, .y=0x7d, .sp=0xed, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x15cf, .value=0x88}, {.addr=0x15d0, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x15cf, .value=0x88, .type=IO_READ},
        {.addr=0x15d0, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_006E) {
    const struct CPU_State initial_cpu = {.pc=0x9cf1, .a=0x37, .x=0x27, .y=0x38, .sp=0xcc, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x9cf1, .value=0x88}, {.addr=0x9cf2, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x9cf3, .a=0xe5, .x=0x27, .y=0x38, .sp=0xcc, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x9cf1, .value=0x88}, {.addr=0x9cf2, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x9cf1, .value=0x88, .type=IO_READ},
        {.addr=0x9cf2, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_006F) {
    const struct CPU_State initial_cpu = {.pc=0x74af, .a=0x6b, .x=0x68, .y=0x1f, .sp=0xe9, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x74af, .value=0x88}, {.addr=0x74b0, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x74b1, .a=0xf3, .x=0x68, .y=0x1f, .sp=0xe9, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x74af, .value=0x88}, {.addr=0x74b0, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x74af, .value=0x88, .type=IO_READ},
        {.addr=0x74b0, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0070) {
    const struct CPU_State initial_cpu = {.pc=0x5afd, .a=0x19, .x=0x99, .y=0x8d, .sp=0x8c, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x5afd, .value=0x88}, {.addr=0x5afe, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x5aff, .a=0xc8, .x=0x99, .y=0x8d, .sp=0x8c, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x5afd, .value=0x88}, {.addr=0x5afe, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5afd, .value=0x88, .type=IO_READ},
        {.addr=0x5afe, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0071) {
    const struct CPU_State initial_cpu = {.pc=0xfad7, .a=0xe8, .x=0x49, .y=0xdd, .sp=0x49, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0xfad7, .value=0x88}, {.addr=0xfad8, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0xfad9, .a=0xaa, .x=0x49, .y=0xdd, .sp=0x49, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xfad7, .value=0x88}, {.addr=0xfad8, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0xfad7, .value=0x88, .type=IO_READ},
        {.addr=0xfad8, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0072) {
    const struct CPU_State initial_cpu = {.pc=0x05f8, .a=0x64, .x=0x51, .y=0xfe, .sp=0x32, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x05f8, .value=0x88}, {.addr=0x05f9, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x05fa, .a=0xfd, .x=0x51, .y=0xfe, .sp=0x32, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x05f8, .value=0x88}, {.addr=0x05f9, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x05f8, .value=0x88, .type=IO_READ},
        {.addr=0x05f9, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0073) {
    const struct CPU_State initial_cpu = {.pc=0xc8a1, .a=0x53, .x=0x62, .y=0xa7, .sp=0x15, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xc8a1, .value=0x88}, {.addr=0xc8a2, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xc8a3, .a=0x47, .x=0x62, .y=0xa7, .sp=0x15, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xc8a1, .value=0x88}, {.addr=0xc8a2, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xc8a1, .value=0x88, .type=IO_READ},
        {.addr=0xc8a2, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0074) {
    const struct CPU_State initial_cpu = {.pc=0xa628, .a=0xe6, .x=0xd0, .y=0x51, .sp=0xac, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xa628, .value=0x88}, {.addr=0xa629, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0xa62a, .a=0x57, .x=0xd0, .y=0x51, .sp=0xac, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xa628, .value=0x88}, {.addr=0xa629, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0xa628, .value=0x88, .type=IO_READ},
        {.addr=0xa629, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0075) {
    const struct CPU_State initial_cpu = {.pc=0x1135, .a=0x50, .x=0x39, .y=0x8c, .sp=0xfb, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x1135, .value=0x88}, {.addr=0x1136, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x1137, .a=0x09, .x=0x39, .y=0x8c, .sp=0xfb, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x1135, .value=0x88}, {.addr=0x1136, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x1135, .value=0x88, .type=IO_READ},
        {.addr=0x1136, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0076) {
    const struct CPU_State initial_cpu = {.pc=0xb046, .a=0x1b, .x=0xc4, .y=0xa6, .sp=0xcb, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xb046, .value=0x88}, {.addr=0xb047, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xb048, .a=0x74, .x=0xc4, .y=0xa6, .sp=0xcb, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xb046, .value=0x88}, {.addr=0xb047, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xb046, .value=0x88, .type=IO_READ},
        {.addr=0xb047, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0077) {
    const struct CPU_State initial_cpu = {.pc=0xf234, .a=0x54, .x=0x0d, .y=0x75, .sp=0xcb, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xf234, .value=0x88}, {.addr=0xf235, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xf236, .a=0x78, .x=0x0d, .y=0x75, .sp=0xcb, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xf234, .value=0x88}, {.addr=0xf235, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xf234, .value=0x88, .type=IO_READ},
        {.addr=0xf235, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0078) {
    const struct CPU_State initial_cpu = {.pc=0x5b17, .a=0x27, .x=0x05, .y=0x6a, .sp=0xdc, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x5b17, .value=0x88}, {.addr=0x5b18, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x5b19, .a=0x45, .x=0x05, .y=0x6a, .sp=0xdc, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x5b17, .value=0x88}, {.addr=0x5b18, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x5b17, .value=0x88, .type=IO_READ},
        {.addr=0x5b18, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0079) {
    const struct CPU_State initial_cpu = {.pc=0xe121, .a=0x74, .x=0x53, .y=0xbf, .sp=0x05, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xe121, .value=0x88}, {.addr=0xe122, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xe123, .a=0x3f, .x=0x53, .y=0xbf, .sp=0x05, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xe121, .value=0x88}, {.addr=0xe122, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xe121, .value=0x88, .type=IO_READ},
        {.addr=0xe122, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_007A) {
    const struct CPU_State initial_cpu = {.pc=0x6b99, .a=0x96, .x=0x40, .y=0xce, .sp=0x1a, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x6b99, .value=0x88}, {.addr=0x6b9a, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0x6b9b, .a=0x51, .x=0x40, .y=0xce, .sp=0x1a, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x6b99, .value=0x88}, {.addr=0x6b9a, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0x6b99, .value=0x88, .type=IO_READ},
        {.addr=0x6b9a, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_007B) {
    const struct CPU_State initial_cpu = {.pc=0xabe8, .a=0x7a, .x=0x9d, .y=0xff, .sp=0x6b, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0xabe8, .value=0x88}, {.addr=0xabe9, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0xabea, .a=0x87, .x=0x9d, .y=0xff, .sp=0x6b, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xabe8, .value=0x88}, {.addr=0xabe9, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0xabe8, .value=0x88, .type=IO_READ},
        {.addr=0xabe9, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_007C) {
    const struct CPU_State initial_cpu = {.pc=0xe504, .a=0x3e, .x=0x97, .y=0x0c, .sp=0xe4, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xe504, .value=0x88}, {.addr=0xe505, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xe506, .a=0x63, .x=0x97, .y=0x0c, .sp=0xe4, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xe504, .value=0x88}, {.addr=0xe505, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xe504, .value=0x88, .type=IO_READ},
        {.addr=0xe505, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_007D) {
    const struct CPU_State initial_cpu = {.pc=0xc8b3, .a=0x98, .x=0x51, .y=0x19, .sp=0x51, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xc8b3, .value=0x88}, {.addr=0xc8b4, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xc8b5, .a=0x56, .x=0x51, .y=0x19, .sp=0x51, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0xc8b3, .value=0x88}, {.addr=0xc8b4, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xc8b3, .value=0x88, .type=IO_READ},
        {.addr=0xc8b4, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_007E) {
    const struct CPU_State initial_cpu = {.pc=0x9e37, .a=0x86, .x=0x22, .y=0xf1, .sp=0xa3, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x9e37, .value=0x88}, {.addr=0x9e38, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x9e39, .a=0x28, .x=0x22, .y=0xf1, .sp=0xa3, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9e37, .value=0x88}, {.addr=0x9e38, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x9e37, .value=0x88, .type=IO_READ},
        {.addr=0x9e38, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_007F) {
    const struct CPU_State initial_cpu = {.pc=0xd9d2, .a=0x83, .x=0x1b, .y=0xb1, .sp=0x9f, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xd9d2, .value=0x88}, {.addr=0xd9d3, .value=0x5a}};
    const struct CPU_State final_cpu = {.pc=0xd9d4, .a=0xdd, .x=0x1b, .y=0xb1, .sp=0x9f, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xd9d2, .value=0x88}, {.addr=0xd9d3, .value=0x5a}};
    const struct BusEvent events[] = {
        {.addr=0xd9d2, .value=0x88, .type=IO_READ},
        {.addr=0xd9d3, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0080) {
    const struct CPU_State initial_cpu = {.pc=0xcf4f, .a=0xb3, .x=0xab, .y=0xd3, .sp=0xe9, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xcf4f, .value=0x88}, {.addr=0xcf50, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcf51, .a=0x21, .x=0xab, .y=0xd3, .sp=0xe9, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xcf4f, .value=0x88}, {.addr=0xcf50, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcf4f, .value=0x88, .type=IO_READ},
        {.addr=0xcf50, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0081) {
    const struct CPU_State initial_cpu = {.pc=0xcdc2, .a=0x23, .x=0x18, .y=0x76, .sp=0xdd, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xcdc2, .value=0x88}, {.addr=0xcdc3, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xcdc4, .a=0x7e, .x=0x18, .y=0x76, .sp=0xdd, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xcdc2, .value=0x88}, {.addr=0xcdc3, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xcdc2, .value=0x88, .type=IO_READ},
        {.addr=0xcdc3, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0082) {
    const struct CPU_State initial_cpu = {.pc=0xe28c, .a=0x44, .x=0x0d, .y=0xc8, .sp=0x02, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xe28c, .value=0x88}, {.addr=0xe28d, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xe28e, .a=0xaa, .x=0x0d, .y=0xc8, .sp=0x02, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xe28c, .value=0x88}, {.addr=0xe28d, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xe28c, .value=0x88, .type=IO_READ},
        {.addr=0xe28d, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0083) {
    const struct CPU_State initial_cpu = {.pc=0xe21f, .a=0xac, .x=0xe8, .y=0x29, .sp=0xfd, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xe21f, .value=0x88}, {.addr=0xe220, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xe221, .a=0x58, .x=0xe8, .y=0x29, .sp=0xfd, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xe21f, .value=0x88}, {.addr=0xe220, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xe21f, .value=0x88, .type=IO_READ},
        {.addr=0xe220, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0084) {
    const struct CPU_State initial_cpu = {.pc=0x9411, .a=0xd2, .x=0x5c, .y=0x05, .sp=0x95, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x9411, .value=0x88}, {.addr=0x9412, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x9413, .a=0x46, .x=0x5c, .y=0x05, .sp=0x95, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9411, .value=0x88}, {.addr=0x9412, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x9411, .value=0x88, .type=IO_READ},
        {.addr=0x9412, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0085) {
    const struct CPU_State initial_cpu = {.pc=0x36e1, .a=0xbf, .x=0xc5, .y=0x23, .sp=0x62, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x36e1, .value=0x88}, {.addr=0x36e2, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x36e3, .a=0xb1, .x=0xc5, .y=0x23, .sp=0x62, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x36e1, .value=0x88}, {.addr=0x36e2, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x36e1, .value=0x88, .type=IO_READ},
        {.addr=0x36e2, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0086) {
    const struct CPU_State initial_cpu = {.pc=0xbee8, .a=0x3e, .x=0x39, .y=0x3f, .sp=0x85, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0xbee8, .value=0x88}, {.addr=0xbee9, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xbeea, .a=0x8d, .x=0x39, .y=0x3f, .sp=0x85, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xbee8, .value=0x88}, {.addr=0xbee9, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xbee8, .value=0x88, .type=IO_READ},
        {.addr=0xbee9, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0087) {
    const struct CPU_State initial_cpu = {.pc=0x77a5, .a=0x0c, .x=0x84, .y=0xd0, .sp=0xce, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x77a5, .value=0x88}, {.addr=0x77a6, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x77a7, .a=0x48, .x=0x84, .y=0xd0, .sp=0xce, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x77a5, .value=0x88}, {.addr=0x77a6, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x77a5, .value=0x88, .type=IO_READ},
        {.addr=0x77a6, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0088) {
    const struct CPU_State initial_cpu = {.pc=0x0b90, .a=0xfd, .x=0xef, .y=0x87, .sp=0x4a, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0b90, .value=0x88}, {.addr=0x0b91, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x0b92, .a=0x49, .x=0xef, .y=0x87, .sp=0x4a, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0b90, .value=0x88}, {.addr=0x0b91, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x0b90, .value=0x88, .type=IO_READ},
        {.addr=0x0b91, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0089) {
    const struct CPU_State initial_cpu = {.pc=0x1583, .a=0x3e, .x=0x23, .y=0x42, .sp=0xa7, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x1583, .value=0x88}, {.addr=0x1584, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x1585, .a=0xe8, .x=0x23, .y=0x42, .sp=0xa7, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x1583, .value=0x88}, {.addr=0x1584, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x1583, .value=0x88, .type=IO_READ},
        {.addr=0x1584, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_008A) {
    const struct CPU_State initial_cpu = {.pc=0x33ef, .a=0x2c, .x=0x4f, .y=0xab, .sp=0x59, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x33ef, .value=0x88}, {.addr=0x33f0, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x33f1, .a=0x51, .x=0x4f, .y=0xab, .sp=0x59, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x33ef, .value=0x88}, {.addr=0x33f0, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x33ef, .value=0x88, .type=IO_READ},
        {.addr=0x33f0, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_008B) {
    const struct CPU_State initial_cpu = {.pc=0x24c2, .a=0x7a, .x=0x73, .y=0xaf, .sp=0xe5, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x24c2, .value=0x88}, {.addr=0x24c3, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x24c4, .a=0x5a, .x=0x73, .y=0xaf, .sp=0xe5, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x24c2, .value=0x88}, {.addr=0x24c3, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x24c2, .value=0x88, .type=IO_READ},
        {.addr=0x24c3, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_008C) {
    const struct CPU_State initial_cpu = {.pc=0x1d87, .a=0x2c, .x=0x7c, .y=0x36, .sp=0x46, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x1d87, .value=0x88}, {.addr=0x1d88, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x1d89, .a=0x58, .x=0x7c, .y=0x36, .sp=0x46, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x1d87, .value=0x88}, {.addr=0x1d88, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x1d87, .value=0x88, .type=IO_READ},
        {.addr=0x1d88, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_008D) {
    const struct CPU_State initial_cpu = {.pc=0x5b2e, .a=0xf1, .x=0xfc, .y=0x04, .sp=0xf8, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x5b2e, .value=0x88}, {.addr=0x5b2f, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x5b30, .a=0x8b, .x=0xfc, .y=0x04, .sp=0xf8, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x5b2e, .value=0x88}, {.addr=0x5b2f, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x5b2e, .value=0x88, .type=IO_READ},
        {.addr=0x5b2f, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_008E) {
    const struct CPU_State initial_cpu = {.pc=0xf4cf, .a=0x8f, .x=0x0d, .y=0xec, .sp=0x70, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0xf4cf, .value=0x88}, {.addr=0xf4d0, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xf4d1, .a=0x39, .x=0x0d, .y=0xec, .sp=0x70, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xf4cf, .value=0x88}, {.addr=0xf4d0, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xf4cf, .value=0x88, .type=IO_READ},
        {.addr=0xf4d0, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_008F) {
    const struct CPU_State initial_cpu = {.pc=0xfdb3, .a=0x3b, .x=0xe7, .y=0x3f, .sp=0x47, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0xfdb3, .value=0x88}, {.addr=0xfdb4, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0xfdb5, .a=0x1f, .x=0xe7, .y=0x3f, .sp=0x47, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xfdb3, .value=0x88}, {.addr=0xfdb4, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0xfdb3, .value=0x88, .type=IO_READ},
        {.addr=0xfdb4, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0090) {
    const struct CPU_State initial_cpu = {.pc=0x629d, .a=0xf4, .x=0x3a, .y=0xad, .sp=0x1d, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x629d, .value=0x88}, {.addr=0x629e, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x629f, .a=0xf7, .x=0x3a, .y=0xad, .sp=0x1d, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x629d, .value=0x88}, {.addr=0x629e, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x629d, .value=0x88, .type=IO_READ},
        {.addr=0x629e, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0091) {
    const struct CPU_State initial_cpu = {.pc=0xa1ad, .a=0xa9, .x=0x7e, .y=0xc1, .sp=0x09, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xa1ad, .value=0x88}, {.addr=0xa1ae, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0xa1af, .a=0xe0, .x=0x7e, .y=0xc1, .sp=0x09, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xa1ad, .value=0x88}, {.addr=0xa1ae, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0xa1ad, .value=0x88, .type=IO_READ},
        {.addr=0xa1ae, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0092) {
    const struct CPU_State initial_cpu = {.pc=0xd3d6, .a=0x91, .x=0x54, .y=0x31, .sp=0x07, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0xd3d6, .value=0x88}, {.addr=0xd3d7, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0xd3d8, .a=0x0d, .x=0x54, .y=0x31, .sp=0x07, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xd3d6, .value=0x88}, {.addr=0xd3d7, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0xd3d6, .value=0x88, .type=IO_READ},
        {.addr=0xd3d7, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0093) {
    const struct CPU_State initial_cpu = {.pc=0x2e87, .a=0x60, .x=0x6a, .y=0xa4, .sp=0xb9, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x2e87, .value=0x88}, {.addr=0x2e88, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2e89, .a=0x20, .x=0x6a, .y=0xa4, .sp=0xb9, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x2e87, .value=0x88}, {.addr=0x2e88, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2e87, .value=0x88, .type=IO_READ},
        {.addr=0x2e88, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0094) {
    const struct CPU_State initial_cpu = {.pc=0x573d, .a=0x5b, .x=0xe1, .y=0xfe, .sp=0x6a, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x573d, .value=0x88}, {.addr=0x573e, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x573f, .a=0xde, .x=0xe1, .y=0xfe, .sp=0x6a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x573d, .value=0x88}, {.addr=0x573e, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x573d, .value=0x88, .type=IO_READ},
        {.addr=0x573e, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0095) {
    const struct CPU_State initial_cpu = {.pc=0xc7e9, .a=0xec, .x=0xd1, .y=0xbb, .sp=0x80, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xc7e9, .value=0x88}, {.addr=0xc7ea, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xc7eb, .a=0x1e, .x=0xd1, .y=0xbb, .sp=0x80, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xc7e9, .value=0x88}, {.addr=0xc7ea, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xc7e9, .value=0x88, .type=IO_READ},
        {.addr=0xc7ea, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0096) {
    const struct CPU_State initial_cpu = {.pc=0x114a, .a=0x6c, .x=0xf2, .y=0xd4, .sp=0xe7, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x114a, .value=0x88}, {.addr=0x114b, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x114c, .a=0x41, .x=0xf2, .y=0xd4, .sp=0xe7, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x114a, .value=0x88}, {.addr=0x114b, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x114a, .value=0x88, .type=IO_READ},
        {.addr=0x114b, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0097) {
    const struct CPU_State initial_cpu = {.pc=0x6180, .a=0x49, .x=0xcf, .y=0x25, .sp=0x08, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x6180, .value=0x88}, {.addr=0x6181, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x6182, .a=0x27, .x=0xcf, .y=0x25, .sp=0x08, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x6180, .value=0x88}, {.addr=0x6181, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x6180, .value=0x88, .type=IO_READ},
        {.addr=0x6181, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0098) {
    const struct CPU_State initial_cpu = {.pc=0x0048, .a=0x02, .x=0x77, .y=0x8a, .sp=0xb4, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0048, .value=0x88}, {.addr=0x0049, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x004a, .a=0x08, .x=0x77, .y=0x8a, .sp=0xb4, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0048, .value=0x88}, {.addr=0x0049, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x0048, .value=0x88, .type=IO_READ},
        {.addr=0x0049, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0099) {
    const struct CPU_State initial_cpu = {.pc=0x42be, .a=0xd0, .x=0x75, .y=0x88, .sp=0x5d, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x42be, .value=0x88}, {.addr=0x42bf, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x42c0, .a=0xe3, .x=0x75, .y=0x88, .sp=0x5d, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x42be, .value=0x88}, {.addr=0x42bf, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x42be, .value=0x88, .type=IO_READ},
        {.addr=0x42bf, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_009A) {
    const struct CPU_State initial_cpu = {.pc=0x71f0, .a=0x30, .x=0xa3, .y=0xfb, .sp=0xeb, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x71f0, .value=0x88}, {.addr=0x71f1, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x71f2, .a=0x3c, .x=0xa3, .y=0xfb, .sp=0xeb, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x71f0, .value=0x88}, {.addr=0x71f1, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x71f0, .value=0x88, .type=IO_READ},
        {.addr=0x71f1, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_009B) {
    const struct CPU_State initial_cpu = {.pc=0x937f, .a=0x2b, .x=0x6f, .y=0xc1, .sp=0x5d, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x937f, .value=0x88}, {.addr=0x9380, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x9381, .a=0xbe, .x=0x6f, .y=0xc1, .sp=0x5d, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x937f, .value=0x88}, {.addr=0x9380, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x937f, .value=0x88, .type=IO_READ},
        {.addr=0x9380, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_009C) {
    const struct CPU_State initial_cpu = {.pc=0xee89, .a=0x86, .x=0x3d, .y=0x0f, .sp=0xd3, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xee89, .value=0x88}, {.addr=0xee8a, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xee8b, .a=0xe1, .x=0x3d, .y=0x0f, .sp=0xd3, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xee89, .value=0x88}, {.addr=0xee8a, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xee89, .value=0x88, .type=IO_READ},
        {.addr=0xee8a, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_009D) {
    const struct CPU_State initial_cpu = {.pc=0x8b53, .a=0xbc, .x=0xa6, .y=0x7d, .sp=0xc4, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x8b53, .value=0x88}, {.addr=0x8b54, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x8b55, .a=0x30, .x=0xa6, .y=0x7d, .sp=0xc4, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x8b53, .value=0x88}, {.addr=0x8b54, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x8b53, .value=0x88, .type=IO_READ},
        {.addr=0x8b54, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_009E) {
    const struct CPU_State initial_cpu = {.pc=0x7be2, .a=0x46, .x=0xd4, .y=0x28, .sp=0x53, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x7be2, .value=0x88}, {.addr=0x7be3, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x7be4, .a=0x21, .x=0xd4, .y=0x28, .sp=0x53, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x7be2, .value=0x88}, {.addr=0x7be3, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x7be2, .value=0x88, .type=IO_READ},
        {.addr=0x7be3, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_009F) {
    const struct CPU_State initial_cpu = {.pc=0x7293, .a=0xbe, .x=0xa8, .y=0xc7, .sp=0xb0, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x7293, .value=0x88}, {.addr=0x7294, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x7295, .a=0xc4, .x=0xa8, .y=0xc7, .sp=0xb0, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x7293, .value=0x88}, {.addr=0x7294, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x7293, .value=0x88, .type=IO_READ},
        {.addr=0x7294, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00A0) {
    const struct CPU_State initial_cpu = {.pc=0xed53, .a=0xf6, .x=0xde, .y=0xc2, .sp=0x39, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xed53, .value=0x88}, {.addr=0xed54, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xed55, .a=0x90, .x=0xde, .y=0xc2, .sp=0x39, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xed53, .value=0x88}, {.addr=0xed54, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xed53, .value=0x88, .type=IO_READ},
        {.addr=0xed54, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00A1) {
    const struct CPU_State initial_cpu = {.pc=0xadc7, .a=0x37, .x=0x3b, .y=0xc3, .sp=0x4d, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xadc7, .value=0x88}, {.addr=0xadc8, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xadc9, .a=0x6a, .x=0x3b, .y=0xc3, .sp=0x4d, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xadc7, .value=0x88}, {.addr=0xadc8, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xadc7, .value=0x88, .type=IO_READ},
        {.addr=0xadc8, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x4072, .a=0xa0, .x=0x23, .y=0x45, .sp=0x11, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x4072, .value=0x88}, {.addr=0x4073, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x4074, .a=0xd1, .x=0x23, .y=0x45, .sp=0x11, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x4072, .value=0x88}, {.addr=0x4073, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x4072, .value=0x88, .type=IO_READ},
        {.addr=0x4073, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x634e, .a=0x83, .x=0x73, .y=0x9c, .sp=0xf9, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x634e, .value=0x88}, {.addr=0x634f, .value=0x9d}};
    const struct CPU_State final_cpu = {.pc=0x6350, .a=0x21, .x=0x73, .y=0x9c, .sp=0xf9, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x634e, .value=0x88}, {.addr=0x634f, .value=0x9d}};
    const struct BusEvent events[] = {
        {.addr=0x634e, .value=0x88, .type=IO_READ},
        {.addr=0x634f, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00A4) {
    const struct CPU_State initial_cpu = {.pc=0x105d, .a=0x88, .x=0x79, .y=0xd8, .sp=0xb3, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x105d, .value=0x88}, {.addr=0x105e, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x105f, .a=0x0a, .x=0x79, .y=0xd8, .sp=0xb3, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x105d, .value=0x88}, {.addr=0x105e, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x105d, .value=0x88, .type=IO_READ},
        {.addr=0x105e, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x2ab7, .a=0x78, .x=0x7a, .y=0xc8, .sp=0xf3, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x2ab7, .value=0x88}, {.addr=0x2ab8, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x2ab9, .a=0x76, .x=0x7a, .y=0xc8, .sp=0xf3, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x2ab7, .value=0x88}, {.addr=0x2ab8, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x2ab7, .value=0x88, .type=IO_READ},
        {.addr=0x2ab8, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x6f72, .a=0x37, .x=0xd4, .y=0x6c, .sp=0x6d, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x6f72, .value=0x88}, {.addr=0x6f73, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x6f74, .a=0xd1, .x=0xd4, .y=0x6c, .sp=0x6d, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x6f72, .value=0x88}, {.addr=0x6f73, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x6f72, .value=0x88, .type=IO_READ},
        {.addr=0x6f73, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xa702, .a=0x3f, .x=0xf3, .y=0x76, .sp=0xa0, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0xa702, .value=0x88}, {.addr=0xa703, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xa704, .a=0x92, .x=0xf3, .y=0x76, .sp=0xa0, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xa702, .value=0x88}, {.addr=0xa703, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xa702, .value=0x88, .type=IO_READ},
        {.addr=0xa703, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x2faa, .a=0x96, .x=0x35, .y=0x39, .sp=0xa0, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x2faa, .value=0x88}, {.addr=0x2fab, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x2fac, .a=0xae, .x=0x35, .y=0x39, .sp=0xa0, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x2faa, .value=0x88}, {.addr=0x2fab, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x2faa, .value=0x88, .type=IO_READ},
        {.addr=0x2fab, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00A9) {
    const struct CPU_State initial_cpu = {.pc=0xd662, .a=0xc5, .x=0x94, .y=0x24, .sp=0x69, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xd662, .value=0x88}, {.addr=0xd663, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xd664, .a=0x1d, .x=0x94, .y=0x24, .sp=0x69, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xd662, .value=0x88}, {.addr=0xd663, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xd662, .value=0x88, .type=IO_READ},
        {.addr=0xd663, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x2d34, .a=0xcd, .x=0xdd, .y=0x66, .sp=0x14, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x2d34, .value=0x88}, {.addr=0x2d35, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x2d36, .a=0x7b, .x=0xdd, .y=0x66, .sp=0x14, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x2d34, .value=0x88}, {.addr=0x2d35, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x2d34, .value=0x88, .type=IO_READ},
        {.addr=0x2d35, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x4a62, .a=0x39, .x=0x6c, .y=0xb0, .sp=0xd5, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x4a62, .value=0x88}, {.addr=0x4a63, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x4a64, .a=0x96, .x=0x6c, .y=0xb0, .sp=0xd5, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x4a62, .value=0x88}, {.addr=0x4a63, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x4a62, .value=0x88, .type=IO_READ},
        {.addr=0x4a63, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00AC) {
    const struct CPU_State initial_cpu = {.pc=0xb592, .a=0x14, .x=0x88, .y=0xb1, .sp=0x17, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0xb592, .value=0x88}, {.addr=0xb593, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xb594, .a=0xff, .x=0x88, .y=0xb1, .sp=0x17, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xb592, .value=0x88}, {.addr=0xb593, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xb592, .value=0x88, .type=IO_READ},
        {.addr=0xb593, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x3985, .a=0x98, .x=0x37, .y=0xe7, .sp=0x04, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x3985, .value=0x88}, {.addr=0x3986, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x3987, .a=0x62, .x=0x37, .y=0xe7, .sp=0x04, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x3985, .value=0x88}, {.addr=0x3986, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x3985, .value=0x88, .type=IO_READ},
        {.addr=0x3986, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xfcf9, .a=0x60, .x=0xc5, .y=0xaf, .sp=0x26, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xfcf9, .value=0x88}, {.addr=0xfcfa, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xfcfb, .a=0x8c, .x=0xc5, .y=0xaf, .sp=0x26, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xfcf9, .value=0x88}, {.addr=0xfcfa, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xfcf9, .value=0x88, .type=IO_READ},
        {.addr=0xfcfa, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00AF) {
    const struct CPU_State initial_cpu = {.pc=0xc601, .a=0xc6, .x=0x45, .y=0x61, .sp=0x51, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0xc601, .value=0x88}, {.addr=0xc602, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xc603, .a=0x0f, .x=0x45, .y=0x61, .sp=0x51, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xc601, .value=0x88}, {.addr=0xc602, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xc601, .value=0x88, .type=IO_READ},
        {.addr=0xc602, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x9e01, .a=0x4c, .x=0x61, .y=0x8f, .sp=0x23, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x9e01, .value=0x88}, {.addr=0x9e02, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x9e03, .a=0x41, .x=0x61, .y=0x8f, .sp=0x23, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x9e01, .value=0x88}, {.addr=0x9e02, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x9e01, .value=0x88, .type=IO_READ},
        {.addr=0x9e02, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x75c9, .a=0xe5, .x=0x7f, .y=0xfd, .sp=0x43, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x75c9, .value=0x88}, {.addr=0x75ca, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x75cb, .a=0xbc, .x=0x7f, .y=0xfd, .sp=0x43, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x75c9, .value=0x88}, {.addr=0x75ca, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x75c9, .value=0x88, .type=IO_READ},
        {.addr=0x75ca, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00B2) {
    const struct CPU_State initial_cpu = {.pc=0x5b31, .a=0xcf, .x=0xac, .y=0x36, .sp=0xfb, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x5b31, .value=0x88}, {.addr=0x5b32, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x5b33, .a=0x3d, .x=0xac, .y=0x36, .sp=0xfb, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x5b31, .value=0x88}, {.addr=0x5b32, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x5b31, .value=0x88, .type=IO_READ},
        {.addr=0x5b32, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x4318, .a=0x51, .x=0xb1, .y=0x57, .sp=0xc7, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x4318, .value=0x88}, {.addr=0x4319, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x431a, .a=0xc2, .x=0xb1, .y=0x57, .sp=0xc7, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x4318, .value=0x88}, {.addr=0x4319, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x4318, .value=0x88, .type=IO_READ},
        {.addr=0x4319, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xf0ec, .a=0xbf, .x=0x9e, .y=0x18, .sp=0xbe, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xf0ec, .value=0x88}, {.addr=0xf0ed, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0xf0ee, .a=0x3f, .x=0x9e, .y=0x18, .sp=0xbe, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xf0ec, .value=0x88}, {.addr=0xf0ed, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0xf0ec, .value=0x88, .type=IO_READ},
        {.addr=0xf0ed, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xe849, .a=0x34, .x=0x2a, .y=0x3f, .sp=0x5c, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xe849, .value=0x88}, {.addr=0xe84a, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0xe84b, .a=0xca, .x=0x2a, .y=0x3f, .sp=0x5c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xe849, .value=0x88}, {.addr=0xe84a, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0xe849, .value=0x88, .type=IO_READ},
        {.addr=0xe84a, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xc0bd, .a=0xb8, .x=0xdb, .y=0xc6, .sp=0x14, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xc0bd, .value=0x88}, {.addr=0xc0be, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xc0bf, .a=0xab, .x=0xdb, .y=0xc6, .sp=0x14, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0xc0bd, .value=0x88}, {.addr=0xc0be, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xc0bd, .value=0x88, .type=IO_READ},
        {.addr=0xc0be, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xb2a4, .a=0xbc, .x=0x14, .y=0xb8, .sp=0xba, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xb2a4, .value=0x88}, {.addr=0xb2a5, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xb2a6, .a=0x60, .x=0x14, .y=0xb8, .sp=0xba, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xb2a4, .value=0x88}, {.addr=0xb2a5, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xb2a4, .value=0x88, .type=IO_READ},
        {.addr=0xb2a5, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x7451, .a=0x99, .x=0x96, .y=0x35, .sp=0x7a, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x7451, .value=0x88}, {.addr=0x7452, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x7453, .a=0x0b, .x=0x96, .y=0x35, .sp=0x7a, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x7451, .value=0x88}, {.addr=0x7452, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x7451, .value=0x88, .type=IO_READ},
        {.addr=0x7452, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00B9) {
    const struct CPU_State initial_cpu = {.pc=0xbfa4, .a=0x06, .x=0x82, .y=0x96, .sp=0x2c, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0xbfa4, .value=0x88}, {.addr=0xbfa5, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0xbfa6, .a=0x0b, .x=0x82, .y=0x96, .sp=0x2c, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xbfa4, .value=0x88}, {.addr=0xbfa5, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0xbfa4, .value=0x88, .type=IO_READ},
        {.addr=0xbfa5, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x2ffb, .a=0x62, .x=0x8c, .y=0xdb, .sp=0x3e, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x2ffb, .value=0x88}, {.addr=0x2ffc, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0x2ffd, .a=0xaa, .x=0x8c, .y=0xdb, .sp=0x3e, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x2ffb, .value=0x88}, {.addr=0x2ffc, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0x2ffb, .value=0x88, .type=IO_READ},
        {.addr=0x2ffc, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xbfb0, .a=0xa0, .x=0x27, .y=0xd9, .sp=0x8f, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0xbfb0, .value=0x88}, {.addr=0xbfb1, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xbfb2, .a=0xc0, .x=0x27, .y=0xd9, .sp=0x8f, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xbfb0, .value=0x88}, {.addr=0xbfb1, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xbfb0, .value=0x88, .type=IO_READ},
        {.addr=0xbfb1, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00BC) {
    const struct CPU_State initial_cpu = {.pc=0x6e0c, .a=0x5d, .x=0xef, .y=0x0b, .sp=0x9b, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x6e0c, .value=0x88}, {.addr=0x6e0d, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x6e0e, .a=0xdd, .x=0xef, .y=0x0b, .sp=0x9b, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x6e0c, .value=0x88}, {.addr=0x6e0d, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x6e0c, .value=0x88, .type=IO_READ},
        {.addr=0x6e0d, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x27c6, .a=0x51, .x=0x63, .y=0x7e, .sp=0xcd, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x27c6, .value=0x88}, {.addr=0x27c7, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x27c8, .a=0xf9, .x=0x63, .y=0x7e, .sp=0xcd, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x27c6, .value=0x88}, {.addr=0x27c7, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x27c6, .value=0x88, .type=IO_READ},
        {.addr=0x27c7, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x5a64, .a=0x35, .x=0x3a, .y=0xe4, .sp=0x84, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x5a64, .value=0x88}, {.addr=0x5a65, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x5a66, .a=0xa8, .x=0x3a, .y=0xe4, .sp=0x84, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x5a64, .value=0x88}, {.addr=0x5a65, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x5a64, .value=0x88, .type=IO_READ},
        {.addr=0x5a65, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x63ab, .a=0x91, .x=0xea, .y=0x77, .sp=0x55, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x63ab, .value=0x88}, {.addr=0x63ac, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x63ad, .a=0xf5, .x=0xea, .y=0x77, .sp=0x55, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x63ab, .value=0x88}, {.addr=0x63ac, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x63ab, .value=0x88, .type=IO_READ},
        {.addr=0x63ac, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x0057, .a=0xb8, .x=0x78, .y=0xab, .sp=0xc9, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0057, .value=0x88}, {.addr=0x0058, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x0059, .a=0xb5, .x=0x78, .y=0xab, .sp=0xc9, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0057, .value=0x88}, {.addr=0x0058, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x0057, .value=0x88, .type=IO_READ},
        {.addr=0x0058, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x32f2, .a=0xd6, .x=0x91, .y=0x96, .sp=0x3c, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x32f2, .value=0x88}, {.addr=0x32f3, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x32f4, .a=0x22, .x=0x91, .y=0x96, .sp=0x3c, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x32f2, .value=0x88}, {.addr=0x32f3, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x32f2, .value=0x88, .type=IO_READ},
        {.addr=0x32f3, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x9d5a, .a=0xce, .x=0x20, .y=0x72, .sp=0xaa, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x9d5a, .value=0x88}, {.addr=0x9d5b, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x9d5c, .a=0x0a, .x=0x20, .y=0x72, .sp=0xaa, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x9d5a, .value=0x88}, {.addr=0x9d5b, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x9d5a, .value=0x88, .type=IO_READ},
        {.addr=0x9d5b, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00C3) {
    const struct CPU_State initial_cpu = {.pc=0x5f98, .a=0xf0, .x=0x9d, .y=0x23, .sp=0x6c, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x5f98, .value=0x88}, {.addr=0x5f99, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0x5f9a, .a=0x9d, .x=0x9d, .y=0x23, .sp=0x6c, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x5f98, .value=0x88}, {.addr=0x5f99, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0x5f98, .value=0x88, .type=IO_READ},
        {.addr=0x5f99, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x3973, .a=0x12, .x=0x40, .y=0xd0, .sp=0x5c, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x3973, .value=0x88}, {.addr=0x3974, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x3975, .a=0xd5, .x=0x40, .y=0xd0, .sp=0x5c, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x3973, .value=0x88}, {.addr=0x3974, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x3973, .value=0x88, .type=IO_READ},
        {.addr=0x3974, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x4546, .a=0x37, .x=0xcc, .y=0x91, .sp=0xaf, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x4546, .value=0x88}, {.addr=0x4547, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x4548, .a=0x58, .x=0xcc, .y=0x91, .sp=0xaf, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x4546, .value=0x88}, {.addr=0x4547, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x4546, .value=0x88, .type=IO_READ},
        {.addr=0x4547, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00C6) {
    const struct CPU_State initial_cpu = {.pc=0x39a3, .a=0xe7, .x=0x4e, .y=0xa0, .sp=0x2b, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x39a3, .value=0x88}, {.addr=0x39a4, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x39a5, .a=0x6e, .x=0x4e, .y=0xa0, .sp=0x2b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x39a3, .value=0x88}, {.addr=0x39a4, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x39a3, .value=0x88, .type=IO_READ},
        {.addr=0x39a4, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00C7) {
    const struct CPU_State initial_cpu = {.pc=0x2a47, .a=0xdf, .x=0x9e, .y=0x97, .sp=0xef, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x2a47, .value=0x88}, {.addr=0x2a48, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0x2a49, .a=0x2f, .x=0x9e, .y=0x97, .sp=0xef, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x2a47, .value=0x88}, {.addr=0x2a48, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0x2a47, .value=0x88, .type=IO_READ},
        {.addr=0x2a48, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x5293, .a=0x07, .x=0x0b, .y=0x03, .sp=0x6d, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x5293, .value=0x88}, {.addr=0x5294, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x5295, .a=0xa2, .x=0x0b, .y=0x03, .sp=0x6d, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x5293, .value=0x88}, {.addr=0x5294, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x5293, .value=0x88, .type=IO_READ},
        {.addr=0x5294, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x5e65, .a=0x16, .x=0x6e, .y=0x2d, .sp=0x29, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x5e65, .value=0x88}, {.addr=0x5e66, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x5e67, .a=0x3a, .x=0x6e, .y=0x2d, .sp=0x29, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x5e65, .value=0x88}, {.addr=0x5e66, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x5e65, .value=0x88, .type=IO_READ},
        {.addr=0x5e66, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00CA) {
    const struct CPU_State initial_cpu = {.pc=0xb612, .a=0xf2, .x=0x8f, .y=0xea, .sp=0x30, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xb612, .value=0x88}, {.addr=0xb613, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xb614, .a=0xdd, .x=0x8f, .y=0xea, .sp=0x30, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xb612, .value=0x88}, {.addr=0xb613, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xb612, .value=0x88, .type=IO_READ},
        {.addr=0xb613, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00CB) {
    const struct CPU_State initial_cpu = {.pc=0xc5d5, .a=0x09, .x=0x43, .y=0xad, .sp=0x6a, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xc5d5, .value=0x88}, {.addr=0xc5d6, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xc5d7, .a=0x83, .x=0x43, .y=0xad, .sp=0x6a, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0xc5d5, .value=0x88}, {.addr=0xc5d6, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xc5d5, .value=0x88, .type=IO_READ},
        {.addr=0xc5d6, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x83c7, .a=0x1a, .x=0xf6, .y=0x03, .sp=0x00, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x83c7, .value=0x88}, {.addr=0x83c8, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x83c9, .a=0x1f, .x=0xf6, .y=0x03, .sp=0x00, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x83c7, .value=0x88}, {.addr=0x83c8, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x83c7, .value=0x88, .type=IO_READ},
        {.addr=0x83c8, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xdbeb, .a=0x23, .x=0xf3, .y=0xa4, .sp=0x0f, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0xdbeb, .value=0x88}, {.addr=0xdbec, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xdbed, .a=0x27, .x=0xf3, .y=0xa4, .sp=0x0f, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0xdbeb, .value=0x88}, {.addr=0xdbec, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xdbeb, .value=0x88, .type=IO_READ},
        {.addr=0xdbec, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x3b80, .a=0x17, .x=0x61, .y=0x61, .sp=0x97, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x3b80, .value=0x88}, {.addr=0x3b81, .value=0xe4}};
    const struct CPU_State final_cpu = {.pc=0x3b82, .a=0xfc, .x=0x61, .y=0x61, .sp=0x97, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x3b80, .value=0x88}, {.addr=0x3b81, .value=0xe4}};
    const struct BusEvent events[] = {
        {.addr=0x3b80, .value=0x88, .type=IO_READ},
        {.addr=0x3b81, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00CF) {
    const struct CPU_State initial_cpu = {.pc=0xa641, .a=0x73, .x=0x45, .y=0x2a, .sp=0x0e, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xa641, .value=0x88}, {.addr=0xa642, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xa643, .a=0x5c, .x=0x45, .y=0x2a, .sp=0x0e, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xa641, .value=0x88}, {.addr=0xa642, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xa641, .value=0x88, .type=IO_READ},
        {.addr=0xa642, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x1ad3, .a=0xf7, .x=0x12, .y=0xd2, .sp=0x88, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x1ad3, .value=0x88}, {.addr=0x1ad4, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x1ad5, .a=0x4a, .x=0x12, .y=0xd2, .sp=0x88, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x1ad3, .value=0x88}, {.addr=0x1ad4, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x1ad3, .value=0x88, .type=IO_READ},
        {.addr=0x1ad4, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00D1) {
    const struct CPU_State initial_cpu = {.pc=0xe55e, .a=0x52, .x=0x33, .y=0xfd, .sp=0x99, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xe55e, .value=0x88}, {.addr=0xe55f, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xe560, .a=0x6d, .x=0x33, .y=0xfd, .sp=0x99, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xe55e, .value=0x88}, {.addr=0xe55f, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xe55e, .value=0x88, .type=IO_READ},
        {.addr=0xe55f, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x6a65, .a=0xae, .x=0xce, .y=0x88, .sp=0x05, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x6a65, .value=0x88}, {.addr=0x6a66, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x6a67, .a=0xbb, .x=0xce, .y=0x88, .sp=0x05, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x6a65, .value=0x88}, {.addr=0x6a66, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x6a65, .value=0x88, .type=IO_READ},
        {.addr=0x6a66, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x4dab, .a=0x73, .x=0xd0, .y=0xe3, .sp=0x5c, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x4dab, .value=0x88}, {.addr=0x4dac, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x4dad, .a=0x3f, .x=0xd0, .y=0xe3, .sp=0x5c, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x4dab, .value=0x88}, {.addr=0x4dac, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x4dab, .value=0x88, .type=IO_READ},
        {.addr=0x4dac, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x5d89, .a=0xb0, .x=0x29, .y=0x81, .sp=0x11, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x5d89, .value=0x88}, {.addr=0x5d8a, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x5d8b, .a=0x86, .x=0x29, .y=0x81, .sp=0x11, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x5d89, .value=0x88}, {.addr=0x5d8a, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x5d89, .value=0x88, .type=IO_READ},
        {.addr=0x5d8a, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xee27, .a=0x9a, .x=0xa9, .y=0x03, .sp=0x6f, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0xee27, .value=0x88}, {.addr=0xee28, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xee29, .a=0x58, .x=0xa9, .y=0x03, .sp=0x6f, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xee27, .value=0x88}, {.addr=0xee28, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xee27, .value=0x88, .type=IO_READ},
        {.addr=0xee28, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00D6) {
    const struct CPU_State initial_cpu = {.pc=0x94df, .a=0x63, .x=0x44, .y=0xa6, .sp=0x93, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x94df, .value=0x88}, {.addr=0x94e0, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x94e1, .a=0x68, .x=0x44, .y=0xa6, .sp=0x93, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x94df, .value=0x88}, {.addr=0x94e0, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x94df, .value=0x88, .type=IO_READ},
        {.addr=0x94e0, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x79ee, .a=0x44, .x=0x5b, .y=0x5a, .sp=0xb7, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x79ee, .value=0x88}, {.addr=0x79ef, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x79f0, .a=0xd9, .x=0x5b, .y=0x5a, .sp=0xb7, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x79ee, .value=0x88}, {.addr=0x79ef, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x79ee, .value=0x88, .type=IO_READ},
        {.addr=0x79ef, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xac8b, .a=0x8c, .x=0xb3, .y=0x83, .sp=0x64, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xac8b, .value=0x88}, {.addr=0xac8c, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xac8d, .a=0xbf, .x=0xb3, .y=0x83, .sp=0x64, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xac8b, .value=0x88}, {.addr=0xac8c, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xac8b, .value=0x88, .type=IO_READ},
        {.addr=0xac8c, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x9b8e, .a=0x9d, .x=0x1a, .y=0x14, .sp=0xd0, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x9b8e, .value=0x88}, {.addr=0x9b8f, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x9b90, .a=0x61, .x=0x1a, .y=0x14, .sp=0xd0, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x9b8e, .value=0x88}, {.addr=0x9b8f, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x9b8e, .value=0x88, .type=IO_READ},
        {.addr=0x9b8f, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xd826, .a=0x54, .x=0xc4, .y=0xf4, .sp=0xf8, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xd826, .value=0x88}, {.addr=0xd827, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0xd828, .a=0x04, .x=0xc4, .y=0xf4, .sp=0xf8, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xd826, .value=0x88}, {.addr=0xd827, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0xd826, .value=0x88, .type=IO_READ},
        {.addr=0xd827, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00DB) {
    const struct CPU_State initial_cpu = {.pc=0xab13, .a=0x46, .x=0xfc, .y=0x5f, .sp=0xf4, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xab13, .value=0x88}, {.addr=0xab14, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0xab15, .a=0x0e, .x=0xfc, .y=0x5f, .sp=0xf4, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xab13, .value=0x88}, {.addr=0xab14, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0xab13, .value=0x88, .type=IO_READ},
        {.addr=0xab14, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00DC) {
    const struct CPU_State initial_cpu = {.pc=0x0746, .a=0xf5, .x=0x75, .y=0x9a, .sp=0x87, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0746, .value=0x88}, {.addr=0x0747, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x0748, .a=0xd7, .x=0x75, .y=0x9a, .sp=0x87, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0746, .value=0x88}, {.addr=0x0747, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x0746, .value=0x88, .type=IO_READ},
        {.addr=0x0747, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00DD) {
    const struct CPU_State initial_cpu = {.pc=0xf5eb, .a=0xf0, .x=0xfe, .y=0xd1, .sp=0x1d, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xf5eb, .value=0x88}, {.addr=0xf5ec, .value=0xad}};
    const struct CPU_State final_cpu = {.pc=0xf5ed, .a=0x9e, .x=0xfe, .y=0xd1, .sp=0x1d, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xf5eb, .value=0x88}, {.addr=0xf5ec, .value=0xad}};
    const struct BusEvent events[] = {
        {.addr=0xf5eb, .value=0x88, .type=IO_READ},
        {.addr=0xf5ec, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x3797, .a=0x81, .x=0xac, .y=0x9a, .sp=0x6e, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x3797, .value=0x88}, {.addr=0x3798, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x3799, .a=0x51, .x=0xac, .y=0x9a, .sp=0x6e, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x3797, .value=0x88}, {.addr=0x3798, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x3797, .value=0x88, .type=IO_READ},
        {.addr=0x3798, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x29ec, .a=0x23, .x=0x83, .y=0xc6, .sp=0x7e, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x29ec, .value=0x88}, {.addr=0x29ed, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x29ee, .a=0x5a, .x=0x83, .y=0xc6, .sp=0x7e, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x29ec, .value=0x88}, {.addr=0x29ed, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x29ec, .value=0x88, .type=IO_READ},
        {.addr=0x29ed, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x4a1b, .a=0x25, .x=0x7f, .y=0x9a, .sp=0x03, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x4a1b, .value=0x88}, {.addr=0x4a1c, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x4a1d, .a=0xb3, .x=0x7f, .y=0x9a, .sp=0x03, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x4a1b, .value=0x88}, {.addr=0x4a1c, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x4a1b, .value=0x88, .type=IO_READ},
        {.addr=0x4a1c, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x2966, .a=0x05, .x=0xf3, .y=0x18, .sp=0xcc, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x2966, .value=0x88}, {.addr=0x2967, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0x2968, .a=0x66, .x=0xf3, .y=0x18, .sp=0xcc, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x2966, .value=0x88}, {.addr=0x2967, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0x2966, .value=0x88, .type=IO_READ},
        {.addr=0x2967, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x720f, .a=0x1f, .x=0xdb, .y=0x01, .sp=0x65, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x720f, .value=0x88}, {.addr=0x7210, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0x7211, .a=0xc8, .x=0xdb, .y=0x01, .sp=0x65, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x720f, .value=0x88}, {.addr=0x7210, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0x720f, .value=0x88, .type=IO_READ},
        {.addr=0x7210, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00E3) {
    const struct CPU_State initial_cpu = {.pc=0xf00f, .a=0x97, .x=0x25, .y=0x25, .sp=0xe4, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0xf00f, .value=0x88}, {.addr=0xf010, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xf011, .a=0xa1, .x=0x25, .y=0x25, .sp=0xe4, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xf00f, .value=0x88}, {.addr=0xf010, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xf00f, .value=0x88, .type=IO_READ},
        {.addr=0xf010, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x9fc2, .a=0x72, .x=0xe0, .y=0x74, .sp=0xbc, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x9fc2, .value=0x88}, {.addr=0x9fc3, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x9fc4, .a=0xdd, .x=0xe0, .y=0x74, .sp=0xbc, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x9fc2, .value=0x88}, {.addr=0x9fc3, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x9fc2, .value=0x88, .type=IO_READ},
        {.addr=0x9fc3, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00E5) {
    const struct CPU_State initial_cpu = {.pc=0xdc11, .a=0xbc, .x=0x16, .y=0x9b, .sp=0xf4, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xdc11, .value=0x88}, {.addr=0xdc12, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xdc13, .a=0x27, .x=0x16, .y=0x9b, .sp=0xf4, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xdc11, .value=0x88}, {.addr=0xdc12, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xdc11, .value=0x88, .type=IO_READ},
        {.addr=0xdc12, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xb5e1, .a=0x43, .x=0x3c, .y=0xfd, .sp=0x6c, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xb5e1, .value=0x88}, {.addr=0xb5e2, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xb5e3, .a=0xf6, .x=0x3c, .y=0xfd, .sp=0x6c, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xb5e1, .value=0x88}, {.addr=0xb5e2, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xb5e1, .value=0x88, .type=IO_READ},
        {.addr=0xb5e2, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00E7) {
    const struct CPU_State initial_cpu = {.pc=0x2601, .a=0xcb, .x=0x90, .y=0xcb, .sp=0x17, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x2601, .value=0x88}, {.addr=0x2602, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x2603, .a=0x05, .x=0x90, .y=0xcb, .sp=0x17, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x2601, .value=0x88}, {.addr=0x2602, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x2601, .value=0x88, .type=IO_READ},
        {.addr=0x2602, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x80f4, .a=0x2b, .x=0x38, .y=0x14, .sp=0xe9, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x80f4, .value=0x88}, {.addr=0x80f5, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x80f6, .a=0xa8, .x=0x38, .y=0x14, .sp=0xe9, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x80f4, .value=0x88}, {.addr=0x80f5, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x80f4, .value=0x88, .type=IO_READ},
        {.addr=0x80f5, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xd098, .a=0x8e, .x=0xfc, .y=0xdc, .sp=0x27, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xd098, .value=0x88}, {.addr=0xd099, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0xd09a, .a=0x46, .x=0xfc, .y=0xdc, .sp=0x27, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xd098, .value=0x88}, {.addr=0xd099, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0xd098, .value=0x88, .type=IO_READ},
        {.addr=0xd099, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00EA) {
    const struct CPU_State initial_cpu = {.pc=0xc521, .a=0xfe, .x=0xb4, .y=0x6f, .sp=0x92, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0xc521, .value=0x88}, {.addr=0xc522, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xc523, .a=0x71, .x=0xb4, .y=0x6f, .sp=0x92, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xc521, .value=0x88}, {.addr=0xc522, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xc521, .value=0x88, .type=IO_READ},
        {.addr=0xc522, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00EB) {
    const struct CPU_State initial_cpu = {.pc=0x591f, .a=0xd8, .x=0x26, .y=0x30, .sp=0xdb, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x591f, .value=0x88}, {.addr=0x5920, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0x5921, .a=0x84, .x=0x26, .y=0x30, .sp=0xdb, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x591f, .value=0x88}, {.addr=0x5920, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0x591f, .value=0x88, .type=IO_READ},
        {.addr=0x5920, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x459b, .a=0x80, .x=0xc9, .y=0xe8, .sp=0xdd, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x459b, .value=0x88}, {.addr=0x459c, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x459d, .a=0x08, .x=0xc9, .y=0xe8, .sp=0xdd, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x459b, .value=0x88}, {.addr=0x459c, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x459b, .value=0x88, .type=IO_READ},
        {.addr=0x459c, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00ED) {
    const struct CPU_State initial_cpu = {.pc=0x02e6, .a=0x82, .x=0xde, .y=0x8f, .sp=0xe6, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x02e6, .value=0x88}, {.addr=0x02e7, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x02e8, .a=0x4c, .x=0xde, .y=0x8f, .sp=0xe6, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x02e6, .value=0x88}, {.addr=0x02e7, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x02e6, .value=0x88, .type=IO_READ},
        {.addr=0x02e7, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00EE) {
    const struct CPU_State initial_cpu = {.pc=0xbe32, .a=0xd7, .x=0x60, .y=0x01, .sp=0x4a, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xbe32, .value=0x88}, {.addr=0xbe33, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xbe34, .a=0xb7, .x=0x60, .y=0x01, .sp=0x4a, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xbe32, .value=0x88}, {.addr=0xbe33, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xbe32, .value=0x88, .type=IO_READ},
        {.addr=0xbe33, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x13fc, .a=0xdf, .x=0x79, .y=0x73, .sp=0x5c, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x13fc, .value=0x88}, {.addr=0x13fd, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0x13fe, .a=0xd2, .x=0x79, .y=0x73, .sp=0x5c, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x13fc, .value=0x88}, {.addr=0x13fd, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x13fc, .value=0x88, .type=IO_READ},
        {.addr=0x13fd, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00F0) {
    const struct CPU_State initial_cpu = {.pc=0xcd99, .a=0xda, .x=0x36, .y=0x75, .sp=0xac, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0xcd99, .value=0x88}, {.addr=0xcd9a, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xcd9b, .a=0xe6, .x=0x36, .y=0x75, .sp=0xac, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xcd99, .value=0x88}, {.addr=0xcd9a, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xcd99, .value=0x88, .type=IO_READ},
        {.addr=0xcd9a, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x19d5, .a=0x29, .x=0xf0, .y=0x15, .sp=0x1c, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x19d5, .value=0x88}, {.addr=0x19d6, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x19d7, .a=0x9f, .x=0xf0, .y=0x15, .sp=0x1c, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x19d5, .value=0x88}, {.addr=0x19d6, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x19d5, .value=0x88, .type=IO_READ},
        {.addr=0x19d6, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x9b5d, .a=0xfb, .x=0xc3, .y=0x6a, .sp=0x3d, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x9b5d, .value=0x88}, {.addr=0x9b5e, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x9b5f, .a=0xfd, .x=0xc3, .y=0x6a, .sp=0x3d, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x9b5d, .value=0x88}, {.addr=0x9b5e, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x9b5d, .value=0x88, .type=IO_READ},
        {.addr=0x9b5e, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00F3) {
    const struct CPU_State initial_cpu = {.pc=0x73ea, .a=0x4e, .x=0x9b, .y=0x79, .sp=0x8d, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x73ea, .value=0x88}, {.addr=0x73eb, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x73ec, .a=0x71, .x=0x9b, .y=0x79, .sp=0x8d, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x73ea, .value=0x88}, {.addr=0x73eb, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x73ea, .value=0x88, .type=IO_READ},
        {.addr=0x73eb, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xbc4c, .a=0xde, .x=0xb9, .y=0x91, .sp=0x6a, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xbc4c, .value=0x88}, {.addr=0xbc4d, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xbc4e, .a=0xde, .x=0xb9, .y=0x91, .sp=0x6a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xbc4c, .value=0x88}, {.addr=0xbc4d, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xbc4c, .value=0x88, .type=IO_READ},
        {.addr=0xbc4d, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x5fbb, .a=0xa9, .x=0x81, .y=0x1f, .sp=0x03, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x5fbb, .value=0x88}, {.addr=0x5fbc, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x5fbd, .a=0x9f, .x=0x81, .y=0x1f, .sp=0x03, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x5fbb, .value=0x88}, {.addr=0x5fbc, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x5fbb, .value=0x88, .type=IO_READ},
        {.addr=0x5fbc, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x6440, .a=0x2e, .x=0xf7, .y=0xd6, .sp=0x4e, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x6440, .value=0x88}, {.addr=0x6441, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x6442, .a=0xce, .x=0xf7, .y=0xd6, .sp=0x4e, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x6440, .value=0x88}, {.addr=0x6441, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x6440, .value=0x88, .type=IO_READ},
        {.addr=0x6441, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00F7) {
    const struct CPU_State initial_cpu = {.pc=0x3311, .a=0xd1, .x=0x80, .y=0x92, .sp=0xa4, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x3311, .value=0x88}, {.addr=0x3312, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0x3313, .a=0x48, .x=0x80, .y=0x92, .sp=0xa4, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x3311, .value=0x88}, {.addr=0x3312, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0x3311, .value=0x88, .type=IO_READ},
        {.addr=0x3312, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00F8) {
    const struct CPU_State initial_cpu = {.pc=0x2ae9, .a=0x0b, .x=0x66, .y=0xc8, .sp=0xdc, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x2ae9, .value=0x88}, {.addr=0x2aea, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x2aeb, .a=0x44, .x=0x66, .y=0xc8, .sp=0xdc, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x2ae9, .value=0x88}, {.addr=0x2aea, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x2ae9, .value=0x88, .type=IO_READ},
        {.addr=0x2aea, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x0d12, .a=0x3c, .x=0xe8, .y=0x9d, .sp=0x2f, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0d12, .value=0x88}, {.addr=0x0d13, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x0d14, .a=0xab, .x=0xe8, .y=0x9d, .sp=0x2f, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0d12, .value=0x88}, {.addr=0x0d13, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x0d12, .value=0x88, .type=IO_READ},
        {.addr=0x0d13, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x9eb4, .a=0xe4, .x=0xfb, .y=0xf2, .sp=0xba, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x9eb4, .value=0x88}, {.addr=0x9eb5, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x9eb6, .a=0x89, .x=0xfb, .y=0xf2, .sp=0xba, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x9eb4, .value=0x88}, {.addr=0x9eb5, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x9eb4, .value=0x88, .type=IO_READ},
        {.addr=0x9eb5, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x5118, .a=0x11, .x=0x16, .y=0x20, .sp=0xf0, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x5118, .value=0x88}, {.addr=0x5119, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x511a, .a=0x1f, .x=0x16, .y=0x20, .sp=0xf0, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x5118, .value=0x88}, {.addr=0x5119, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x5118, .value=0x88, .type=IO_READ},
        {.addr=0x5119, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x9e82, .a=0x21, .x=0x90, .y=0xfe, .sp=0xc8, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x9e82, .value=0x88}, {.addr=0x9e83, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x9e84, .a=0x8c, .x=0x90, .y=0xfe, .sp=0xc8, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x9e82, .value=0x88}, {.addr=0x9e83, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x9e82, .value=0x88, .type=IO_READ},
        {.addr=0x9e83, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x61f4, .a=0x3b, .x=0xb0, .y=0x3d, .sp=0xbf, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x61f4, .value=0x88}, {.addr=0x61f5, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x61f6, .a=0xca, .x=0xb0, .y=0x3d, .sp=0xbf, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x61f4, .value=0x88}, {.addr=0x61f5, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x61f4, .value=0x88, .type=IO_READ},
        {.addr=0x61f5, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x9714, .a=0x86, .x=0x69, .y=0x5f, .sp=0x45, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x9714, .value=0x88}, {.addr=0x9715, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x9716, .a=0xdf, .x=0x69, .y=0x5f, .sp=0x45, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x9714, .value=0x88}, {.addr=0x9715, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x9714, .value=0x88, .type=IO_READ},
        {.addr=0x9715, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x276f, .a=0x59, .x=0x2c, .y=0xd4, .sp=0x4f, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x276f, .value=0x88}, {.addr=0x2770, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x2771, .a=0x49, .x=0x2c, .y=0xd4, .sp=0x4f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x276f, .value=0x88}, {.addr=0x2770, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x276f, .value=0x88, .type=IO_READ},
        {.addr=0x2770, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0100) {
    const struct CPU_State initial_cpu = {.pc=0xc55e, .a=0x92, .x=0x46, .y=0xd4, .sp=0x27, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0xc55e, .value=0x88}, {.addr=0xc55f, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xc560, .a=0x3c, .x=0x46, .y=0xd4, .sp=0x27, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xc55e, .value=0x88}, {.addr=0xc55f, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xc55e, .value=0x88, .type=IO_READ},
        {.addr=0xc55f, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0101) {
    const struct CPU_State initial_cpu = {.pc=0x15a9, .a=0x36, .x=0xc8, .y=0xf1, .sp=0x64, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x15a9, .value=0x88}, {.addr=0x15aa, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x15ab, .a=0xb7, .x=0xc8, .y=0xf1, .sp=0x64, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x15a9, .value=0x88}, {.addr=0x15aa, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x15a9, .value=0x88, .type=IO_READ},
        {.addr=0x15aa, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0102) {
    const struct CPU_State initial_cpu = {.pc=0x83df, .a=0x8b, .x=0xdf, .y=0x44, .sp=0x6b, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x83df, .value=0x88}, {.addr=0x83e0, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x83e1, .a=0x32, .x=0xdf, .y=0x44, .sp=0x6b, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x83df, .value=0x88}, {.addr=0x83e0, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x83df, .value=0x88, .type=IO_READ},
        {.addr=0x83e0, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0103) {
    const struct CPU_State initial_cpu = {.pc=0xe161, .a=0xd8, .x=0xe1, .y=0x0d, .sp=0x9a, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xe161, .value=0x88}, {.addr=0xe162, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xe163, .a=0xed, .x=0xe1, .y=0x0d, .sp=0x9a, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xe161, .value=0x88}, {.addr=0xe162, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xe161, .value=0x88, .type=IO_READ},
        {.addr=0xe162, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0104) {
    const struct CPU_State initial_cpu = {.pc=0x7763, .a=0x88, .x=0x1e, .y=0x8b, .sp=0xc7, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x7763, .value=0x88}, {.addr=0x7764, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x7765, .a=0x77, .x=0x1e, .y=0x8b, .sp=0xc7, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x7763, .value=0x88}, {.addr=0x7764, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x7763, .value=0x88, .type=IO_READ},
        {.addr=0x7764, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0105) {
    const struct CPU_State initial_cpu = {.pc=0x18ff, .a=0xe5, .x=0xf8, .y=0x8c, .sp=0x56, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x18ff, .value=0x88}, {.addr=0x1900, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x1901, .a=0x1e, .x=0xf8, .y=0x8c, .sp=0x56, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x18ff, .value=0x88}, {.addr=0x1900, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x18ff, .value=0x88, .type=IO_READ},
        {.addr=0x1900, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0106) {
    const struct CPU_State initial_cpu = {.pc=0xf0c0, .a=0xef, .x=0x5b, .y=0x6a, .sp=0xc0, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0xf0c0, .value=0x88}, {.addr=0xf0c1, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0xf0c2, .a=0xfe, .x=0x5b, .y=0x6a, .sp=0xc0, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xf0c0, .value=0x88}, {.addr=0xf0c1, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0xf0c0, .value=0x88, .type=IO_READ},
        {.addr=0xf0c1, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0107) {
    const struct CPU_State initial_cpu = {.pc=0x2f54, .a=0xcd, .x=0x81, .y=0xa2, .sp=0x09, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x2f54, .value=0x88}, {.addr=0x2f55, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0x2f56, .a=0xc6, .x=0x81, .y=0xa2, .sp=0x09, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x2f54, .value=0x88}, {.addr=0x2f55, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0x2f54, .value=0x88, .type=IO_READ},
        {.addr=0x2f55, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0108) {
    const struct CPU_State initial_cpu = {.pc=0xfc70, .a=0xe6, .x=0x42, .y=0x37, .sp=0x96, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0xfc70, .value=0x88}, {.addr=0xfc71, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xfc72, .a=0x48, .x=0x42, .y=0x37, .sp=0x96, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xfc70, .value=0x88}, {.addr=0xfc71, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xfc70, .value=0x88, .type=IO_READ},
        {.addr=0xfc71, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0109) {
    const struct CPU_State initial_cpu = {.pc=0xc492, .a=0x16, .x=0xb3, .y=0xa4, .sp=0x45, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0xc492, .value=0x88}, {.addr=0xc493, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xc494, .a=0xee, .x=0xb3, .y=0xa4, .sp=0x45, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xc492, .value=0x88}, {.addr=0xc493, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xc492, .value=0x88, .type=IO_READ},
        {.addr=0xc493, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_010A) {
    const struct CPU_State initial_cpu = {.pc=0xea16, .a=0x80, .x=0x30, .y=0x0c, .sp=0x71, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0xea16, .value=0x88}, {.addr=0xea17, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0xea18, .a=0xc6, .x=0x30, .y=0x0c, .sp=0x71, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xea16, .value=0x88}, {.addr=0xea17, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0xea16, .value=0x88, .type=IO_READ},
        {.addr=0xea17, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_010B) {
    const struct CPU_State initial_cpu = {.pc=0x197d, .a=0x7a, .x=0x97, .y=0x89, .sp=0x8b, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x197d, .value=0x88}, {.addr=0x197e, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x197f, .a=0x54, .x=0x97, .y=0x89, .sp=0x8b, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x197d, .value=0x88}, {.addr=0x197e, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x197d, .value=0x88, .type=IO_READ},
        {.addr=0x197e, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_010C) {
    const struct CPU_State initial_cpu = {.pc=0x4ba7, .a=0x2e, .x=0x35, .y=0x97, .sp=0x85, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x4ba7, .value=0x88}, {.addr=0x4ba8, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x4ba9, .a=0xc1, .x=0x35, .y=0x97, .sp=0x85, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x4ba7, .value=0x88}, {.addr=0x4ba8, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x4ba7, .value=0x88, .type=IO_READ},
        {.addr=0x4ba8, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_010D) {
    const struct CPU_State initial_cpu = {.pc=0x5522, .a=0xc3, .x=0xd8, .y=0x80, .sp=0xaf, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x5522, .value=0x88}, {.addr=0x5523, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x5524, .a=0x6e, .x=0xd8, .y=0x80, .sp=0xaf, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x5522, .value=0x88}, {.addr=0x5523, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x5522, .value=0x88, .type=IO_READ},
        {.addr=0x5523, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_010E) {
    const struct CPU_State initial_cpu = {.pc=0x4374, .a=0xd0, .x=0xe0, .y=0x88, .sp=0x5a, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x4374, .value=0x88}, {.addr=0x4375, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x4376, .a=0xf4, .x=0xe0, .y=0x88, .sp=0x5a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x4374, .value=0x88}, {.addr=0x4375, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x4374, .value=0x88, .type=IO_READ},
        {.addr=0x4375, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_010F) {
    const struct CPU_State initial_cpu = {.pc=0xcc04, .a=0xab, .x=0xa3, .y=0x43, .sp=0xb8, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0xcc04, .value=0x88}, {.addr=0xcc05, .value=0x4a}};
    const struct CPU_State final_cpu = {.pc=0xcc06, .a=0xf5, .x=0xa3, .y=0x43, .sp=0xb8, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xcc04, .value=0x88}, {.addr=0xcc05, .value=0x4a}};
    const struct BusEvent events[] = {
        {.addr=0xcc04, .value=0x88, .type=IO_READ},
        {.addr=0xcc05, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0110) {
    const struct CPU_State initial_cpu = {.pc=0x6b96, .a=0xd1, .x=0x93, .y=0xaf, .sp=0x4f, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x6b96, .value=0x88}, {.addr=0x6b97, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x6b98, .a=0xe4, .x=0x93, .y=0xaf, .sp=0x4f, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x6b96, .value=0x88}, {.addr=0x6b97, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x6b96, .value=0x88, .type=IO_READ},
        {.addr=0x6b97, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0111) {
    const struct CPU_State initial_cpu = {.pc=0x624f, .a=0xd2, .x=0x9b, .y=0x7f, .sp=0x71, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x624f, .value=0x88}, {.addr=0x6250, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x6251, .a=0xa1, .x=0x9b, .y=0x7f, .sp=0x71, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x624f, .value=0x88}, {.addr=0x6250, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x624f, .value=0x88, .type=IO_READ},
        {.addr=0x6250, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0112) {
    const struct CPU_State initial_cpu = {.pc=0x7d91, .a=0x58, .x=0xa7, .y=0x23, .sp=0x23, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x7d91, .value=0x88}, {.addr=0x7d92, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x7d93, .a=0x6b, .x=0xa7, .y=0x23, .sp=0x23, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x7d91, .value=0x88}, {.addr=0x7d92, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x7d91, .value=0x88, .type=IO_READ},
        {.addr=0x7d92, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0113) {
    const struct CPU_State initial_cpu = {.pc=0x783c, .a=0x42, .x=0x99, .y=0x5f, .sp=0xb4, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x783c, .value=0x88}, {.addr=0x783d, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x783e, .a=0xe1, .x=0x99, .y=0x5f, .sp=0xb4, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x783c, .value=0x88}, {.addr=0x783d, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x783c, .value=0x88, .type=IO_READ},
        {.addr=0x783d, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0114) {
    const struct CPU_State initial_cpu = {.pc=0x1290, .a=0x69, .x=0x4c, .y=0xf0, .sp=0x06, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x1290, .value=0x88}, {.addr=0x1291, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x1292, .a=0xf7, .x=0x4c, .y=0xf0, .sp=0x06, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x1290, .value=0x88}, {.addr=0x1291, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x1290, .value=0x88, .type=IO_READ},
        {.addr=0x1291, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0115) {
    const struct CPU_State initial_cpu = {.pc=0xc128, .a=0x2e, .x=0x0d, .y=0xf5, .sp=0x35, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xc128, .value=0x88}, {.addr=0xc129, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0xc12a, .a=0xbe, .x=0x0d, .y=0xf5, .sp=0x35, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xc128, .value=0x88}, {.addr=0xc129, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0xc128, .value=0x88, .type=IO_READ},
        {.addr=0xc129, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0116) {
    const struct CPU_State initial_cpu = {.pc=0x114a, .a=0x28, .x=0x9e, .y=0x1c, .sp=0xe6, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x114a, .value=0x88}, {.addr=0x114b, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x114c, .a=0xe3, .x=0x9e, .y=0x1c, .sp=0xe6, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x114a, .value=0x88}, {.addr=0x114b, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x114a, .value=0x88, .type=IO_READ},
        {.addr=0x114b, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0117) {
    const struct CPU_State initial_cpu = {.pc=0x42e4, .a=0x5d, .x=0x05, .y=0xe9, .sp=0x51, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x42e4, .value=0x88}, {.addr=0x42e5, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x42e6, .a=0xed, .x=0x05, .y=0xe9, .sp=0x51, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x42e4, .value=0x88}, {.addr=0x42e5, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x42e4, .value=0x88, .type=IO_READ},
        {.addr=0x42e5, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0118) {
    const struct CPU_State initial_cpu = {.pc=0x770d, .a=0x6b, .x=0x32, .y=0x87, .sp=0x8f, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x770d, .value=0x88}, {.addr=0x770e, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x770f, .a=0x13, .x=0x32, .y=0x87, .sp=0x8f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x770d, .value=0x88}, {.addr=0x770e, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x770d, .value=0x88, .type=IO_READ},
        {.addr=0x770e, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0119) {
    const struct CPU_State initial_cpu = {.pc=0x2789, .a=0x28, .x=0x4a, .y=0xe3, .sp=0x54, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x2789, .value=0x88}, {.addr=0x278a, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x278b, .a=0x4b, .x=0x4a, .y=0xe3, .sp=0x54, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x2789, .value=0x88}, {.addr=0x278a, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x2789, .value=0x88, .type=IO_READ},
        {.addr=0x278a, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_011A) {
    const struct CPU_State initial_cpu = {.pc=0x9f17, .a=0xd8, .x=0xd0, .y=0x54, .sp=0x35, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x9f17, .value=0x88}, {.addr=0x9f18, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x9f19, .a=0x0d, .x=0xd0, .y=0x54, .sp=0x35, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x9f17, .value=0x88}, {.addr=0x9f18, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x9f17, .value=0x88, .type=IO_READ},
        {.addr=0x9f18, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_011B) {
    const struct CPU_State initial_cpu = {.pc=0x2473, .a=0x60, .x=0xcd, .y=0xf4, .sp=0x1e, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x2473, .value=0x88}, {.addr=0x2474, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2475, .a=0x21, .x=0xcd, .y=0xf4, .sp=0x1e, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x2473, .value=0x88}, {.addr=0x2474, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x2473, .value=0x88, .type=IO_READ},
        {.addr=0x2474, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_011C) {
    const struct CPU_State initial_cpu = {.pc=0xda0d, .a=0x98, .x=0x59, .y=0xaf, .sp=0x28, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0xda0d, .value=0x88}, {.addr=0xda0e, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xda0f, .a=0xaa, .x=0x59, .y=0xaf, .sp=0x28, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xda0d, .value=0x88}, {.addr=0xda0e, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xda0d, .value=0x88, .type=IO_READ},
        {.addr=0xda0e, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_011D) {
    const struct CPU_State initial_cpu = {.pc=0xa3cd, .a=0xcf, .x=0x39, .y=0xa7, .sp=0x22, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xa3cd, .value=0x88}, {.addr=0xa3ce, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0xa3cf, .a=0x40, .x=0x39, .y=0xa7, .sp=0x22, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xa3cd, .value=0x88}, {.addr=0xa3ce, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0xa3cd, .value=0x88, .type=IO_READ},
        {.addr=0xa3ce, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_011E) {
    const struct CPU_State initial_cpu = {.pc=0x8c06, .a=0x40, .x=0x00, .y=0x55, .sp=0x95, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x8c06, .value=0x88}, {.addr=0x8c07, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x8c08, .a=0xcb, .x=0x00, .y=0x55, .sp=0x95, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x8c06, .value=0x88}, {.addr=0x8c07, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x8c06, .value=0x88, .type=IO_READ},
        {.addr=0x8c07, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_011F) {
    const struct CPU_State initial_cpu = {.pc=0x2d99, .a=0x96, .x=0x8d, .y=0x20, .sp=0xce, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x2d99, .value=0x88}, {.addr=0x2d9a, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x2d9b, .a=0x10, .x=0x8d, .y=0x20, .sp=0xce, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x2d99, .value=0x88}, {.addr=0x2d9a, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x2d99, .value=0x88, .type=IO_READ},
        {.addr=0x2d9a, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0120) {
    const struct CPU_State initial_cpu = {.pc=0xe69f, .a=0x67, .x=0x2c, .y=0xcd, .sp=0xbb, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xe69f, .value=0x88}, {.addr=0xe6a0, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xe6a1, .a=0x84, .x=0x2c, .y=0xcd, .sp=0xbb, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xe69f, .value=0x88}, {.addr=0xe6a0, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xe69f, .value=0x88, .type=IO_READ},
        {.addr=0xe6a0, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0121) {
    const struct CPU_State initial_cpu = {.pc=0x2df5, .a=0x51, .x=0xfc, .y=0x8c, .sp=0x95, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x2df5, .value=0x88}, {.addr=0x2df6, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x2df7, .a=0x38, .x=0xfc, .y=0x8c, .sp=0x95, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x2df5, .value=0x88}, {.addr=0x2df6, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x2df5, .value=0x88, .type=IO_READ},
        {.addr=0x2df6, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0122) {
    const struct CPU_State initial_cpu = {.pc=0x448c, .a=0x2e, .x=0x81, .y=0x2e, .sp=0xbd, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x448c, .value=0x88}, {.addr=0x448d, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x448e, .a=0x98, .x=0x81, .y=0x2e, .sp=0xbd, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x448c, .value=0x88}, {.addr=0x448d, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x448c, .value=0x88, .type=IO_READ},
        {.addr=0x448d, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0123) {
    const struct CPU_State initial_cpu = {.pc=0x9cc8, .a=0x4a, .x=0xaa, .y=0xfd, .sp=0xb3, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x9cc8, .value=0x88}, {.addr=0x9cc9, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x9cca, .a=0x02, .x=0xaa, .y=0xfd, .sp=0xb3, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x9cc8, .value=0x88}, {.addr=0x9cc9, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x9cc8, .value=0x88, .type=IO_READ},
        {.addr=0x9cc9, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0124) {
    const struct CPU_State initial_cpu = {.pc=0x04ad, .a=0xa4, .x=0x88, .y=0xc0, .sp=0x8e, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x04ad, .value=0x88}, {.addr=0x04ae, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x04af, .a=0x7e, .x=0x88, .y=0xc0, .sp=0x8e, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x04ad, .value=0x88}, {.addr=0x04ae, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x04ad, .value=0x88, .type=IO_READ},
        {.addr=0x04ae, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0125) {
    const struct CPU_State initial_cpu = {.pc=0x844b, .a=0x61, .x=0xf5, .y=0xbc, .sp=0xa9, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x844b, .value=0x88}, {.addr=0x844c, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x844d, .a=0xa6, .x=0xf5, .y=0xbc, .sp=0xa9, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x844b, .value=0x88}, {.addr=0x844c, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x844b, .value=0x88, .type=IO_READ},
        {.addr=0x844c, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0126) {
    const struct CPU_State initial_cpu = {.pc=0x6ee1, .a=0x29, .x=0x43, .y=0x74, .sp=0xb1, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x6ee1, .value=0x88}, {.addr=0x6ee2, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x6ee3, .a=0xd1, .x=0x43, .y=0x74, .sp=0xb1, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x6ee1, .value=0x88}, {.addr=0x6ee2, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x6ee1, .value=0x88, .type=IO_READ},
        {.addr=0x6ee2, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0127) {
    const struct CPU_State initial_cpu = {.pc=0x75cd, .a=0x3b, .x=0x39, .y=0x38, .sp=0x4d, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x75cd, .value=0x88}, {.addr=0x75ce, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x75cf, .a=0x75, .x=0x39, .y=0x38, .sp=0x4d, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x75cd, .value=0x88}, {.addr=0x75ce, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x75cd, .value=0x88, .type=IO_READ},
        {.addr=0x75ce, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0128) {
    const struct CPU_State initial_cpu = {.pc=0x203b, .a=0xf0, .x=0xfe, .y=0x1e, .sp=0xc0, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x203b, .value=0x88}, {.addr=0x203c, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0x203d, .a=0x7e, .x=0xfe, .y=0x1e, .sp=0xc0, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x203b, .value=0x88}, {.addr=0x203c, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0x203b, .value=0x88, .type=IO_READ},
        {.addr=0x203c, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0129) {
    const struct CPU_State initial_cpu = {.pc=0x312c, .a=0xa9, .x=0x4a, .y=0x47, .sp=0x07, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x312c, .value=0x88}, {.addr=0x312d, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0x312e, .a=0x88, .x=0x4a, .y=0x47, .sp=0x07, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x312c, .value=0x88}, {.addr=0x312d, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0x312c, .value=0x88, .type=IO_READ},
        {.addr=0x312d, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_012A) {
    const struct CPU_State initial_cpu = {.pc=0x7d16, .a=0x34, .x=0x8c, .y=0x37, .sp=0x75, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x7d16, .value=0x88}, {.addr=0x7d17, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x7d18, .a=0x8d, .x=0x8c, .y=0x37, .sp=0x75, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x7d16, .value=0x88}, {.addr=0x7d17, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x7d16, .value=0x88, .type=IO_READ},
        {.addr=0x7d17, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_012B) {
    const struct CPU_State initial_cpu = {.pc=0x9780, .a=0xa1, .x=0xfb, .y=0xcd, .sp=0x6a, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x9780, .value=0x88}, {.addr=0x9781, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x9782, .a=0xd4, .x=0xfb, .y=0xcd, .sp=0x6a, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x9780, .value=0x88}, {.addr=0x9781, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x9780, .value=0x88, .type=IO_READ},
        {.addr=0x9781, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_012C) {
    const struct CPU_State initial_cpu = {.pc=0x00be, .a=0x1d, .x=0x38, .y=0xf4, .sp=0x0f, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x00be, .value=0x88}, {.addr=0x00bf, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x00c0, .a=0xaf, .x=0x38, .y=0xf4, .sp=0x0f, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x00be, .value=0x88}, {.addr=0x00bf, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x00be, .value=0x88, .type=IO_READ},
        {.addr=0x00bf, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_012D) {
    const struct CPU_State initial_cpu = {.pc=0x84f4, .a=0x38, .x=0xdb, .y=0xea, .sp=0x3a, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x84f4, .value=0x88}, {.addr=0x84f5, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x84f6, .a=0x44, .x=0xdb, .y=0xea, .sp=0x3a, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x84f4, .value=0x88}, {.addr=0x84f5, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x84f4, .value=0x88, .type=IO_READ},
        {.addr=0x84f5, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_012E) {
    const struct CPU_State initial_cpu = {.pc=0x2ab4, .a=0x1a, .x=0xa6, .y=0x71, .sp=0x17, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x2ab4, .value=0x88}, {.addr=0x2ab5, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x2ab6, .a=0xaf, .x=0xa6, .y=0x71, .sp=0x17, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x2ab4, .value=0x88}, {.addr=0x2ab5, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x2ab4, .value=0x88, .type=IO_READ},
        {.addr=0x2ab5, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_012F) {
    const struct CPU_State initial_cpu = {.pc=0x05e4, .a=0xc8, .x=0x21, .y=0x68, .sp=0x20, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x05e4, .value=0x88}, {.addr=0x05e5, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x05e6, .a=0x3b, .x=0x21, .y=0x68, .sp=0x20, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x05e4, .value=0x88}, {.addr=0x05e5, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x05e4, .value=0x88, .type=IO_READ},
        {.addr=0x05e5, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0130) {
    const struct CPU_State initial_cpu = {.pc=0xb458, .a=0xf6, .x=0x99, .y=0x5b, .sp=0x95, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xb458, .value=0x88}, {.addr=0xb459, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xb45a, .a=0x13, .x=0x99, .y=0x5b, .sp=0x95, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xb458, .value=0x88}, {.addr=0xb459, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xb458, .value=0x88, .type=IO_READ},
        {.addr=0xb459, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0131) {
    const struct CPU_State initial_cpu = {.pc=0xb23a, .a=0x25, .x=0xc8, .y=0x75, .sp=0x8b, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0xb23a, .value=0x88}, {.addr=0xb23b, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xb23c, .a=0xd2, .x=0xc8, .y=0x75, .sp=0x8b, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xb23a, .value=0x88}, {.addr=0xb23b, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xb23a, .value=0x88, .type=IO_READ},
        {.addr=0xb23b, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0132) {
    const struct CPU_State initial_cpu = {.pc=0x9069, .a=0x2b, .x=0x22, .y=0xc1, .sp=0xba, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x9069, .value=0x88}, {.addr=0x906a, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x906b, .a=0x6b, .x=0x22, .y=0xc1, .sp=0xba, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x9069, .value=0x88}, {.addr=0x906a, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x9069, .value=0x88, .type=IO_READ},
        {.addr=0x906a, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0133) {
    const struct CPU_State initial_cpu = {.pc=0xafe2, .a=0x99, .x=0x62, .y=0xb9, .sp=0xe3, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xafe2, .value=0x88}, {.addr=0xafe3, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xafe4, .a=0xe2, .x=0x62, .y=0xb9, .sp=0xe3, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xafe2, .value=0x88}, {.addr=0xafe3, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xafe2, .value=0x88, .type=IO_READ},
        {.addr=0xafe3, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0134) {
    const struct CPU_State initial_cpu = {.pc=0xad1a, .a=0xdb, .x=0x11, .y=0xee, .sp=0x7c, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xad1a, .value=0x88}, {.addr=0xad1b, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xad1c, .a=0x9c, .x=0x11, .y=0xee, .sp=0x7c, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xad1a, .value=0x88}, {.addr=0xad1b, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xad1a, .value=0x88, .type=IO_READ},
        {.addr=0xad1b, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0135) {
    const struct CPU_State initial_cpu = {.pc=0x0252, .a=0x88, .x=0x40, .y=0x1c, .sp=0xeb, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0252, .value=0x88}, {.addr=0x0253, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0x0254, .a=0x10, .x=0x40, .y=0x1c, .sp=0xeb, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x0252, .value=0x88}, {.addr=0x0253, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0x0252, .value=0x88, .type=IO_READ},
        {.addr=0x0253, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0136) {
    const struct CPU_State initial_cpu = {.pc=0x04ee, .a=0x90, .x=0x25, .y=0x0b, .sp=0x71, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x04ee, .value=0x88}, {.addr=0x04ef, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x04f0, .a=0x81, .x=0x25, .y=0x0b, .sp=0x71, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x04ee, .value=0x88}, {.addr=0x04ef, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x04ee, .value=0x88, .type=IO_READ},
        {.addr=0x04ef, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0137) {
    const struct CPU_State initial_cpu = {.pc=0x4e94, .a=0x30, .x=0x4b, .y=0xae, .sp=0xcc, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x4e94, .value=0x88}, {.addr=0x4e95, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x4e96, .a=0x56, .x=0x4b, .y=0xae, .sp=0xcc, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x4e94, .value=0x88}, {.addr=0x4e95, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x4e94, .value=0x88, .type=IO_READ},
        {.addr=0x4e95, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0138) {
    const struct CPU_State initial_cpu = {.pc=0x4836, .a=0x08, .x=0xac, .y=0x7b, .sp=0xe4, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x4836, .value=0x88}, {.addr=0x4837, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x4838, .a=0x33, .x=0xac, .y=0x7b, .sp=0xe4, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x4836, .value=0x88}, {.addr=0x4837, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x4836, .value=0x88, .type=IO_READ},
        {.addr=0x4837, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0139) {
    const struct CPU_State initial_cpu = {.pc=0xee3d, .a=0x64, .x=0x18, .y=0x78, .sp=0x6e, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0xee3d, .value=0x88}, {.addr=0xee3e, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xee3f, .a=0x79, .x=0x18, .y=0x78, .sp=0x6e, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0xee3d, .value=0x88}, {.addr=0xee3e, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xee3d, .value=0x88, .type=IO_READ},
        {.addr=0xee3e, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_013A) {
    const struct CPU_State initial_cpu = {.pc=0x5fad, .a=0xd5, .x=0x54, .y=0x84, .sp=0xeb, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x5fad, .value=0x88}, {.addr=0x5fae, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x5faf, .a=0x05, .x=0x54, .y=0x84, .sp=0xeb, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x5fad, .value=0x88}, {.addr=0x5fae, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x5fad, .value=0x88, .type=IO_READ},
        {.addr=0x5fae, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_013B) {
    const struct CPU_State initial_cpu = {.pc=0x6c2c, .a=0x53, .x=0xa0, .y=0x71, .sp=0xba, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x6c2c, .value=0x88}, {.addr=0x6c2d, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x6c2e, .a=0x26, .x=0xa0, .y=0x71, .sp=0xba, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x6c2c, .value=0x88}, {.addr=0x6c2d, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x6c2c, .value=0x88, .type=IO_READ},
        {.addr=0x6c2d, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_013C) {
    const struct CPU_State initial_cpu = {.pc=0xd97a, .a=0xfb, .x=0xea, .y=0x7a, .sp=0xef, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xd97a, .value=0x88}, {.addr=0xd97b, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xd97c, .a=0x2f, .x=0xea, .y=0x7a, .sp=0xef, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xd97a, .value=0x88}, {.addr=0xd97b, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xd97a, .value=0x88, .type=IO_READ},
        {.addr=0xd97b, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_013D) {
    const struct CPU_State initial_cpu = {.pc=0x8e12, .a=0x89, .x=0x65, .y=0x1e, .sp=0x32, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x8e12, .value=0x88}, {.addr=0x8e13, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x8e14, .a=0x60, .x=0x65, .y=0x1e, .sp=0x32, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x8e12, .value=0x88}, {.addr=0x8e13, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x8e12, .value=0x88, .type=IO_READ},
        {.addr=0x8e13, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_013E) {
    const struct CPU_State initial_cpu = {.pc=0xb95b, .a=0xb0, .x=0x7d, .y=0xf9, .sp=0x0a, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xb95b, .value=0x88}, {.addr=0xb95c, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xb95d, .a=0x6f, .x=0x7d, .y=0xf9, .sp=0x0a, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xb95b, .value=0x88}, {.addr=0xb95c, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xb95b, .value=0x88, .type=IO_READ},
        {.addr=0xb95c, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_013F) {
    const struct CPU_State initial_cpu = {.pc=0x6b3b, .a=0xa1, .x=0xac, .y=0xf1, .sp=0x36, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x6b3b, .value=0x88}, {.addr=0x6b3c, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x6b3d, .a=0x77, .x=0xac, .y=0xf1, .sp=0x36, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x6b3b, .value=0x88}, {.addr=0x6b3c, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x6b3b, .value=0x88, .type=IO_READ},
        {.addr=0x6b3c, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0140) {
    const struct CPU_State initial_cpu = {.pc=0x7e23, .a=0x3a, .x=0x2f, .y=0x62, .sp=0x56, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x7e23, .value=0x88}, {.addr=0x7e24, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x7e25, .a=0x7d, .x=0x2f, .y=0x62, .sp=0x56, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x7e23, .value=0x88}, {.addr=0x7e24, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x7e23, .value=0x88, .type=IO_READ},
        {.addr=0x7e24, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0141) {
    const struct CPU_State initial_cpu = {.pc=0xd864, .a=0xdd, .x=0x15, .y=0x58, .sp=0xef, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xd864, .value=0x88}, {.addr=0xd865, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0xd866, .a=0x94, .x=0x15, .y=0x58, .sp=0xef, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xd864, .value=0x88}, {.addr=0xd865, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0xd864, .value=0x88, .type=IO_READ},
        {.addr=0xd865, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0142) {
    const struct CPU_State initial_cpu = {.pc=0xf0c5, .a=0xed, .x=0x68, .y=0x86, .sp=0x4c, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0xf0c5, .value=0x88}, {.addr=0xf0c6, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0xf0c7, .a=0xd8, .x=0x68, .y=0x86, .sp=0x4c, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xf0c5, .value=0x88}, {.addr=0xf0c6, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0xf0c5, .value=0x88, .type=IO_READ},
        {.addr=0xf0c6, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0143) {
    const struct CPU_State initial_cpu = {.pc=0x6381, .a=0x23, .x=0xb7, .y=0x2a, .sp=0x6c, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x6381, .value=0x88}, {.addr=0x6382, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x6383, .a=0xd8, .x=0xb7, .y=0x2a, .sp=0x6c, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x6381, .value=0x88}, {.addr=0x6382, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x6381, .value=0x88, .type=IO_READ},
        {.addr=0x6382, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0144) {
    const struct CPU_State initial_cpu = {.pc=0x92f8, .a=0xcc, .x=0x29, .y=0x72, .sp=0x3c, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x92f8, .value=0x88}, {.addr=0x92f9, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x92fa, .a=0xbb, .x=0x29, .y=0x72, .sp=0x3c, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x92f8, .value=0x88}, {.addr=0x92f9, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x92f8, .value=0x88, .type=IO_READ},
        {.addr=0x92f9, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0145) {
    const struct CPU_State initial_cpu = {.pc=0xd4c0, .a=0xd8, .x=0x67, .y=0x3b, .sp=0x5a, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0xd4c0, .value=0x88}, {.addr=0xd4c1, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xd4c2, .a=0x96, .x=0x67, .y=0x3b, .sp=0x5a, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xd4c0, .value=0x88}, {.addr=0xd4c1, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xd4c0, .value=0x88, .type=IO_READ},
        {.addr=0xd4c1, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0146) {
    const struct CPU_State initial_cpu = {.pc=0xcdaf, .a=0x5b, .x=0x1b, .y=0x32, .sp=0xe1, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xcdaf, .value=0x88}, {.addr=0xcdb0, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0xcdb1, .a=0x5a, .x=0x1b, .y=0x32, .sp=0xe1, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xcdaf, .value=0x88}, {.addr=0xcdb0, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0xcdaf, .value=0x88, .type=IO_READ},
        {.addr=0xcdb0, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0147) {
    const struct CPU_State initial_cpu = {.pc=0x9b7f, .a=0xfc, .x=0x2e, .y=0x2e, .sp=0xec, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x9b7f, .value=0x88}, {.addr=0x9b80, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x9b81, .a=0x88, .x=0x2e, .y=0x2e, .sp=0xec, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x9b7f, .value=0x88}, {.addr=0x9b80, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x9b7f, .value=0x88, .type=IO_READ},
        {.addr=0x9b80, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0148) {
    const struct CPU_State initial_cpu = {.pc=0xaca7, .a=0xb2, .x=0x33, .y=0x12, .sp=0x46, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0xaca7, .value=0x88}, {.addr=0xaca8, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0xaca9, .a=0xb7, .x=0x33, .y=0x12, .sp=0x46, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xaca7, .value=0x88}, {.addr=0xaca8, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0xaca7, .value=0x88, .type=IO_READ},
        {.addr=0xaca8, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0149) {
    const struct CPU_State initial_cpu = {.pc=0x33eb, .a=0xd0, .x=0xae, .y=0xb8, .sp=0xe4, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x33eb, .value=0x88}, {.addr=0x33ec, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x33ed, .a=0xbf, .x=0xae, .y=0xb8, .sp=0xe4, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x33eb, .value=0x88}, {.addr=0x33ec, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x33eb, .value=0x88, .type=IO_READ},
        {.addr=0x33ec, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_014A) {
    const struct CPU_State initial_cpu = {.pc=0xd940, .a=0x3f, .x=0xf5, .y=0x65, .sp=0xe7, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xd940, .value=0x88}, {.addr=0xd941, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0xd942, .a=0x3c, .x=0xf5, .y=0x65, .sp=0xe7, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xd940, .value=0x88}, {.addr=0xd941, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0xd940, .value=0x88, .type=IO_READ},
        {.addr=0xd941, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_014B) {
    const struct CPU_State initial_cpu = {.pc=0x6c36, .a=0x3e, .x=0xdf, .y=0x1f, .sp=0xb2, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x6c36, .value=0x88}, {.addr=0x6c37, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x6c38, .a=0x4c, .x=0xdf, .y=0x1f, .sp=0xb2, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x6c36, .value=0x88}, {.addr=0x6c37, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x6c36, .value=0x88, .type=IO_READ},
        {.addr=0x6c37, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_014C) {
    const struct CPU_State initial_cpu = {.pc=0xffaa, .a=0x82, .x=0x9c, .y=0xa6, .sp=0x46, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0xffaa, .value=0x88}, {.addr=0xffab, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xffac, .a=0xd0, .x=0x9c, .y=0xa6, .sp=0x46, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xffaa, .value=0x88}, {.addr=0xffab, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xffaa, .value=0x88, .type=IO_READ},
        {.addr=0xffab, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_014D) {
    const struct CPU_State initial_cpu = {.pc=0x0b18, .a=0xba, .x=0x73, .y=0x4f, .sp=0x25, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0b18, .value=0x88}, {.addr=0x0b19, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x0b1a, .a=0x5c, .x=0x73, .y=0x4f, .sp=0x25, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0b18, .value=0x88}, {.addr=0x0b19, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x0b18, .value=0x88, .type=IO_READ},
        {.addr=0x0b19, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_014E) {
    const struct CPU_State initial_cpu = {.pc=0xc112, .a=0x0d, .x=0x8c, .y=0x28, .sp=0x86, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0xc112, .value=0x88}, {.addr=0xc113, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0xc114, .a=0xdb, .x=0x8c, .y=0x28, .sp=0x86, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xc112, .value=0x88}, {.addr=0xc113, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0xc112, .value=0x88, .type=IO_READ},
        {.addr=0xc113, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_014F) {
    const struct CPU_State initial_cpu = {.pc=0xe588, .a=0xc4, .x=0x62, .y=0xa3, .sp=0xf7, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xe588, .value=0x88}, {.addr=0xe589, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xe58a, .a=0x3e, .x=0x62, .y=0xa3, .sp=0xf7, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xe588, .value=0x88}, {.addr=0xe589, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xe588, .value=0x88, .type=IO_READ},
        {.addr=0xe589, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0150) {
    const struct CPU_State initial_cpu = {.pc=0xbd79, .a=0x87, .x=0x60, .y=0xb4, .sp=0x3e, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xbd79, .value=0x88}, {.addr=0xbd7a, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xbd7b, .a=0x2c, .x=0x60, .y=0xb4, .sp=0x3e, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0xbd79, .value=0x88}, {.addr=0xbd7a, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xbd79, .value=0x88, .type=IO_READ},
        {.addr=0xbd7a, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0151) {
    const struct CPU_State initial_cpu = {.pc=0x1ae8, .a=0x0d, .x=0xf2, .y=0x89, .sp=0x46, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x1ae8, .value=0x88}, {.addr=0x1ae9, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x1aea, .a=0x89, .x=0xf2, .y=0x89, .sp=0x46, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x1ae8, .value=0x88}, {.addr=0x1ae9, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x1ae8, .value=0x88, .type=IO_READ},
        {.addr=0x1ae9, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0152) {
    const struct CPU_State initial_cpu = {.pc=0xdd6d, .a=0x0f, .x=0x10, .y=0xcb, .sp=0x47, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0xdd6d, .value=0x88}, {.addr=0xdd6e, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xdd6f, .a=0x98, .x=0x10, .y=0xcb, .sp=0x47, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xdd6d, .value=0x88}, {.addr=0xdd6e, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xdd6d, .value=0x88, .type=IO_READ},
        {.addr=0xdd6e, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0153) {
    const struct CPU_State initial_cpu = {.pc=0x0475, .a=0x08, .x=0x13, .y=0x65, .sp=0x26, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x0475, .value=0x88}, {.addr=0x0476, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x0477, .a=0x71, .x=0x13, .y=0x65, .sp=0x26, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0475, .value=0x88}, {.addr=0x0476, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x0475, .value=0x88, .type=IO_READ},
        {.addr=0x0476, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0154) {
    const struct CPU_State initial_cpu = {.pc=0x0522, .a=0xf5, .x=0x5e, .y=0x11, .sp=0x50, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0522, .value=0x88}, {.addr=0x0523, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x0524, .a=0x56, .x=0x5e, .y=0x11, .sp=0x50, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0522, .value=0x88}, {.addr=0x0523, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x0522, .value=0x88, .type=IO_READ},
        {.addr=0x0523, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0155) {
    const struct CPU_State initial_cpu = {.pc=0xa0b8, .a=0x2b, .x=0x8b, .y=0x48, .sp=0x0f, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xa0b8, .value=0x88}, {.addr=0xa0b9, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xa0ba, .a=0xf6, .x=0x8b, .y=0x48, .sp=0x0f, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xa0b8, .value=0x88}, {.addr=0xa0b9, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xa0b8, .value=0x88, .type=IO_READ},
        {.addr=0xa0b9, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0156) {
    const struct CPU_State initial_cpu = {.pc=0x1325, .a=0xc1, .x=0x3e, .y=0xc7, .sp=0x3d, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x1325, .value=0x88}, {.addr=0x1326, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x1327, .a=0x4b, .x=0x3e, .y=0xc7, .sp=0x3d, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x1325, .value=0x88}, {.addr=0x1326, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x1325, .value=0x88, .type=IO_READ},
        {.addr=0x1326, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0157) {
    const struct CPU_State initial_cpu = {.pc=0xbec0, .a=0xfe, .x=0xcb, .y=0xa0, .sp=0x8c, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0xbec0, .value=0x88}, {.addr=0xbec1, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0xbec2, .a=0x77, .x=0xcb, .y=0xa0, .sp=0x8c, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xbec0, .value=0x88}, {.addr=0xbec1, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0xbec0, .value=0x88, .type=IO_READ},
        {.addr=0xbec1, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0158) {
    const struct CPU_State initial_cpu = {.pc=0xc376, .a=0x1a, .x=0x38, .y=0xc1, .sp=0xeb, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0xc376, .value=0x88}, {.addr=0xc377, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0xc378, .a=0x43, .x=0x38, .y=0xc1, .sp=0xeb, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xc376, .value=0x88}, {.addr=0xc377, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0xc376, .value=0x88, .type=IO_READ},
        {.addr=0xc377, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0159) {
    const struct CPU_State initial_cpu = {.pc=0xd3ef, .a=0xc8, .x=0x47, .y=0x5c, .sp=0x4d, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xd3ef, .value=0x88}, {.addr=0xd3f0, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xd3f1, .a=0x6b, .x=0x47, .y=0x5c, .sp=0x4d, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xd3ef, .value=0x88}, {.addr=0xd3f0, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xd3ef, .value=0x88, .type=IO_READ},
        {.addr=0xd3f0, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_015A) {
    const struct CPU_State initial_cpu = {.pc=0x5357, .a=0xf5, .x=0x5f, .y=0x92, .sp=0x24, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x5357, .value=0x88}, {.addr=0x5358, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x5359, .a=0xb3, .x=0x5f, .y=0x92, .sp=0x24, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x5357, .value=0x88}, {.addr=0x5358, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x5357, .value=0x88, .type=IO_READ},
        {.addr=0x5358, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_015B) {
    const struct CPU_State initial_cpu = {.pc=0x55f8, .a=0x72, .x=0xb0, .y=0xcf, .sp=0x8a, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x55f8, .value=0x88}, {.addr=0x55f9, .value=0x95}};
    const struct CPU_State final_cpu = {.pc=0x55fa, .a=0x07, .x=0xb0, .y=0xcf, .sp=0x8a, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x55f8, .value=0x88}, {.addr=0x55f9, .value=0x95}};
    const struct BusEvent events[] = {
        {.addr=0x55f8, .value=0x88, .type=IO_READ},
        {.addr=0x55f9, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_015C) {
    const struct CPU_State initial_cpu = {.pc=0x4d9b, .a=0x55, .x=0xe0, .y=0xdb, .sp=0x38, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x4d9b, .value=0x88}, {.addr=0x4d9c, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x4d9d, .a=0x81, .x=0xe0, .y=0xdb, .sp=0x38, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x4d9b, .value=0x88}, {.addr=0x4d9c, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x4d9b, .value=0x88, .type=IO_READ},
        {.addr=0x4d9c, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_015D) {
    const struct CPU_State initial_cpu = {.pc=0xbefe, .a=0x19, .x=0xdb, .y=0x9c, .sp=0xb2, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xbefe, .value=0x88}, {.addr=0xbeff, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xbf00, .a=0x10, .x=0xdb, .y=0x9c, .sp=0xb2, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xbefe, .value=0x88}, {.addr=0xbeff, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xbefe, .value=0x88, .type=IO_READ},
        {.addr=0xbeff, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_015E) {
    const struct CPU_State initial_cpu = {.pc=0xa884, .a=0x5c, .x=0xed, .y=0xa4, .sp=0x41, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xa884, .value=0x88}, {.addr=0xa885, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xa886, .a=0x96, .x=0xed, .y=0xa4, .sp=0x41, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xa884, .value=0x88}, {.addr=0xa885, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xa884, .value=0x88, .type=IO_READ},
        {.addr=0xa885, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_015F) {
    const struct CPU_State initial_cpu = {.pc=0x0aab, .a=0x6d, .x=0x4a, .y=0x8b, .sp=0x76, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0aab, .value=0x88}, {.addr=0x0aac, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0x0aad, .a=0x93, .x=0x4a, .y=0x8b, .sp=0x76, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0aab, .value=0x88}, {.addr=0x0aac, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0x0aab, .value=0x88, .type=IO_READ},
        {.addr=0x0aac, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0160) {
    const struct CPU_State initial_cpu = {.pc=0x3171, .a=0x65, .x=0xdf, .y=0xdc, .sp=0x76, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x3171, .value=0x88}, {.addr=0x3172, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x3173, .a=0x58, .x=0xdf, .y=0xdc, .sp=0x76, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x3171, .value=0x88}, {.addr=0x3172, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x3171, .value=0x88, .type=IO_READ},
        {.addr=0x3172, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0161) {
    const struct CPU_State initial_cpu = {.pc=0xc54f, .a=0x6f, .x=0xca, .y=0xe4, .sp=0xfa, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0xc54f, .value=0x88}, {.addr=0xc550, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xc551, .a=0x06, .x=0xca, .y=0xe4, .sp=0xfa, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xc54f, .value=0x88}, {.addr=0xc550, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xc54f, .value=0x88, .type=IO_READ},
        {.addr=0xc550, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0162) {
    const struct CPU_State initial_cpu = {.pc=0xe00c, .a=0xf0, .x=0x1a, .y=0x78, .sp=0x32, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xe00c, .value=0x88}, {.addr=0xe00d, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0xe00e, .a=0xed, .x=0x1a, .y=0x78, .sp=0x32, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xe00c, .value=0x88}, {.addr=0xe00d, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0xe00c, .value=0x88, .type=IO_READ},
        {.addr=0xe00d, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0163) {
    const struct CPU_State initial_cpu = {.pc=0x834f, .a=0xd8, .x=0x9e, .y=0xf9, .sp=0x51, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x834f, .value=0x88}, {.addr=0x8350, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x8351, .a=0x79, .x=0x9e, .y=0xf9, .sp=0x51, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x834f, .value=0x88}, {.addr=0x8350, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x834f, .value=0x88, .type=IO_READ},
        {.addr=0x8350, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0164) {
    const struct CPU_State initial_cpu = {.pc=0x68ff, .a=0x41, .x=0x1b, .y=0x81, .sp=0xf7, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x68ff, .value=0x88}, {.addr=0x6900, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x6901, .a=0xc3, .x=0x1b, .y=0x81, .sp=0xf7, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x68ff, .value=0x88}, {.addr=0x6900, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x68ff, .value=0x88, .type=IO_READ},
        {.addr=0x6900, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0165) {
    const struct CPU_State initial_cpu = {.pc=0x2c19, .a=0xe8, .x=0x0d, .y=0x9b, .sp=0x54, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x2c19, .value=0x88}, {.addr=0x2c1a, .value=0xf5}};
    const struct CPU_State final_cpu = {.pc=0x2c1b, .a=0xde, .x=0x0d, .y=0x9b, .sp=0x54, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x2c19, .value=0x88}, {.addr=0x2c1a, .value=0xf5}};
    const struct BusEvent events[] = {
        {.addr=0x2c19, .value=0x88, .type=IO_READ},
        {.addr=0x2c1a, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0166) {
    const struct CPU_State initial_cpu = {.pc=0xc0f4, .a=0x53, .x=0x8c, .y=0x26, .sp=0x47, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xc0f4, .value=0x88}, {.addr=0xc0f5, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0xc0f6, .a=0x06, .x=0x8c, .y=0x26, .sp=0x47, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xc0f4, .value=0x88}, {.addr=0xc0f5, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0xc0f4, .value=0x88, .type=IO_READ},
        {.addr=0xc0f5, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0167) {
    const struct CPU_State initial_cpu = {.pc=0x979a, .a=0x28, .x=0x16, .y=0x3b, .sp=0x63, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x979a, .value=0x88}, {.addr=0x979b, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x979c, .a=0xf8, .x=0x16, .y=0x3b, .sp=0x63, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x979a, .value=0x88}, {.addr=0x979b, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x979a, .value=0x88, .type=IO_READ},
        {.addr=0x979b, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0168) {
    const struct CPU_State initial_cpu = {.pc=0xf800, .a=0x69, .x=0xae, .y=0x32, .sp=0xd2, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xf800, .value=0x88}, {.addr=0xf801, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xf802, .a=0xca, .x=0xae, .y=0x32, .sp=0xd2, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xf800, .value=0x88}, {.addr=0xf801, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xf800, .value=0x88, .type=IO_READ},
        {.addr=0xf801, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0169) {
    const struct CPU_State initial_cpu = {.pc=0x6c12, .a=0x8f, .x=0xda, .y=0x89, .sp=0x95, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x6c12, .value=0x88}, {.addr=0x6c13, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x6c14, .a=0x37, .x=0xda, .y=0x89, .sp=0x95, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x6c12, .value=0x88}, {.addr=0x6c13, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x6c12, .value=0x88, .type=IO_READ},
        {.addr=0x6c13, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_016A) {
    const struct CPU_State initial_cpu = {.pc=0x688d, .a=0x3c, .x=0xd1, .y=0x70, .sp=0x90, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x688d, .value=0x88}, {.addr=0x688e, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x688f, .a=0xe1, .x=0xd1, .y=0x70, .sp=0x90, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x688d, .value=0x88}, {.addr=0x688e, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x688d, .value=0x88, .type=IO_READ},
        {.addr=0x688e, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_016B) {
    const struct CPU_State initial_cpu = {.pc=0xf7fb, .a=0xb5, .x=0x4e, .y=0x9b, .sp=0xd3, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0xf7fb, .value=0x88}, {.addr=0xf7fc, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0xf7fd, .a=0x76, .x=0x4e, .y=0x9b, .sp=0xd3, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xf7fb, .value=0x88}, {.addr=0xf7fc, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0xf7fb, .value=0x88, .type=IO_READ},
        {.addr=0xf7fc, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_016C) {
    const struct CPU_State initial_cpu = {.pc=0x081f, .a=0xeb, .x=0xae, .y=0x82, .sp=0x2b, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x081f, .value=0x88}, {.addr=0x0820, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x0821, .a=0xc7, .x=0xae, .y=0x82, .sp=0x2b, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x081f, .value=0x88}, {.addr=0x0820, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x081f, .value=0x88, .type=IO_READ},
        {.addr=0x0820, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_016D) {
    const struct CPU_State initial_cpu = {.pc=0xc5b5, .a=0x9c, .x=0x52, .y=0x60, .sp=0x72, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0xc5b5, .value=0x88}, {.addr=0xc5b6, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xc5b7, .a=0x1f, .x=0x52, .y=0x60, .sp=0x72, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xc5b5, .value=0x88}, {.addr=0xc5b6, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xc5b5, .value=0x88, .type=IO_READ},
        {.addr=0xc5b6, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_016E) {
    const struct CPU_State initial_cpu = {.pc=0x9d25, .a=0x8e, .x=0x3f, .y=0x46, .sp=0x13, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x9d25, .value=0x88}, {.addr=0x9d26, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x9d27, .a=0x03, .x=0x3f, .y=0x46, .sp=0x13, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x9d25, .value=0x88}, {.addr=0x9d26, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x9d25, .value=0x88, .type=IO_READ},
        {.addr=0x9d26, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_016F) {
    const struct CPU_State initial_cpu = {.pc=0xb41b, .a=0xed, .x=0x9a, .y=0x75, .sp=0x16, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xb41b, .value=0x88}, {.addr=0xb41c, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0xb41d, .a=0xe6, .x=0x9a, .y=0x75, .sp=0x16, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0xb41b, .value=0x88}, {.addr=0xb41c, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0xb41b, .value=0x88, .type=IO_READ},
        {.addr=0xb41c, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0170) {
    const struct CPU_State initial_cpu = {.pc=0x075f, .a=0x37, .x=0xc7, .y=0xbb, .sp=0x43, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x075f, .value=0x88}, {.addr=0x0760, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x0761, .a=0x73, .x=0xc7, .y=0xbb, .sp=0x43, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x075f, .value=0x88}, {.addr=0x0760, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x075f, .value=0x88, .type=IO_READ},
        {.addr=0x0760, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0171) {
    const struct CPU_State initial_cpu = {.pc=0xcd35, .a=0x08, .x=0xaa, .y=0x8e, .sp=0x24, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xcd35, .value=0x88}, {.addr=0xcd36, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0xcd37, .a=0x18, .x=0xaa, .y=0x8e, .sp=0x24, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xcd35, .value=0x88}, {.addr=0xcd36, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0xcd35, .value=0x88, .type=IO_READ},
        {.addr=0xcd36, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0172) {
    const struct CPU_State initial_cpu = {.pc=0xea88, .a=0xd5, .x=0x84, .y=0x2d, .sp=0x9e, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xea88, .value=0x88}, {.addr=0xea89, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xea8a, .a=0x98, .x=0x84, .y=0x2d, .sp=0x9e, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xea88, .value=0x88}, {.addr=0xea89, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xea88, .value=0x88, .type=IO_READ},
        {.addr=0xea89, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0173) {
    const struct CPU_State initial_cpu = {.pc=0x9abb, .a=0xc9, .x=0xd9, .y=0xf4, .sp=0x2a, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x9abb, .value=0x88}, {.addr=0x9abc, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x9abd, .a=0x8d, .x=0xd9, .y=0xf4, .sp=0x2a, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x9abb, .value=0x88}, {.addr=0x9abc, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x9abb, .value=0x88, .type=IO_READ},
        {.addr=0x9abc, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0174) {
    const struct CPU_State initial_cpu = {.pc=0xc6d7, .a=0xd6, .x=0x4b, .y=0x4b, .sp=0xb1, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xc6d7, .value=0x88}, {.addr=0xc6d8, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0xc6d9, .a=0x5d, .x=0x4b, .y=0x4b, .sp=0xb1, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xc6d7, .value=0x88}, {.addr=0xc6d8, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0xc6d7, .value=0x88, .type=IO_READ},
        {.addr=0xc6d8, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0175) {
    const struct CPU_State initial_cpu = {.pc=0x1095, .a=0x6f, .x=0x1a, .y=0x87, .sp=0x9e, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x1095, .value=0x88}, {.addr=0x1096, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x1097, .a=0x58, .x=0x1a, .y=0x87, .sp=0x9e, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x1095, .value=0x88}, {.addr=0x1096, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x1095, .value=0x88, .type=IO_READ},
        {.addr=0x1096, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0176) {
    const struct CPU_State initial_cpu = {.pc=0x6223, .a=0xbc, .x=0xb5, .y=0x05, .sp=0x96, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x6223, .value=0x88}, {.addr=0x6224, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0x6225, .a=0x45, .x=0xb5, .y=0x05, .sp=0x96, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x6223, .value=0x88}, {.addr=0x6224, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0x6223, .value=0x88, .type=IO_READ},
        {.addr=0x6224, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0177) {
    const struct CPU_State initial_cpu = {.pc=0x576f, .a=0x57, .x=0xea, .y=0x54, .sp=0x80, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x576f, .value=0x88}, {.addr=0x5770, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x5771, .a=0xda, .x=0xea, .y=0x54, .sp=0x80, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x576f, .value=0x88}, {.addr=0x5770, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x576f, .value=0x88, .type=IO_READ},
        {.addr=0x5770, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0178) {
    const struct CPU_State initial_cpu = {.pc=0x1954, .a=0xb0, .x=0x2f, .y=0x77, .sp=0xbd, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x1954, .value=0x88}, {.addr=0x1955, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x1956, .a=0x27, .x=0x2f, .y=0x77, .sp=0xbd, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x1954, .value=0x88}, {.addr=0x1955, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x1954, .value=0x88, .type=IO_READ},
        {.addr=0x1955, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0179) {
    const struct CPU_State initial_cpu = {.pc=0x8eee, .a=0x40, .x=0x84, .y=0x3c, .sp=0x8a, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x8eee, .value=0x88}, {.addr=0x8eef, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x8ef0, .a=0x87, .x=0x84, .y=0x3c, .sp=0x8a, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x8eee, .value=0x88}, {.addr=0x8eef, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x8eee, .value=0x88, .type=IO_READ},
        {.addr=0x8eef, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_017A) {
    const struct CPU_State initial_cpu = {.pc=0xf198, .a=0x8b, .x=0xfc, .y=0x7d, .sp=0xb6, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0xf198, .value=0x88}, {.addr=0xf199, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xf19a, .a=0xa8, .x=0xfc, .y=0x7d, .sp=0xb6, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xf198, .value=0x88}, {.addr=0xf199, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xf198, .value=0x88, .type=IO_READ},
        {.addr=0xf199, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_017B) {
    const struct CPU_State initial_cpu = {.pc=0xee3d, .a=0x26, .x=0x36, .y=0x93, .sp=0x8a, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0xee3d, .value=0x88}, {.addr=0xee3e, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xee3f, .a=0x61, .x=0x36, .y=0x93, .sp=0x8a, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xee3d, .value=0x88}, {.addr=0xee3e, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xee3d, .value=0x88, .type=IO_READ},
        {.addr=0xee3e, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_017C) {
    const struct CPU_State initial_cpu = {.pc=0x07f4, .a=0xd1, .x=0xb1, .y=0x79, .sp=0xda, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x07f4, .value=0x88}, {.addr=0x07f5, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x07f6, .a=0x1d, .x=0xb1, .y=0x79, .sp=0xda, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x07f4, .value=0x88}, {.addr=0x07f5, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x07f4, .value=0x88, .type=IO_READ},
        {.addr=0x07f5, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_017D) {
    const struct CPU_State initial_cpu = {.pc=0xadf7, .a=0xc9, .x=0x88, .y=0x58, .sp=0xd4, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xadf7, .value=0x88}, {.addr=0xadf8, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xadf9, .a=0x0c, .x=0x88, .y=0x58, .sp=0xd4, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xadf7, .value=0x88}, {.addr=0xadf8, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xadf7, .value=0x88, .type=IO_READ},
        {.addr=0xadf8, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_017E) {
    const struct CPU_State initial_cpu = {.pc=0x8e2d, .a=0x53, .x=0x15, .y=0x29, .sp=0x7f, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x8e2d, .value=0x88}, {.addr=0x8e2e, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x8e2f, .a=0xd7, .x=0x15, .y=0x29, .sp=0x7f, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x8e2d, .value=0x88}, {.addr=0x8e2e, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x8e2d, .value=0x88, .type=IO_READ},
        {.addr=0x8e2e, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_017F) {
    const struct CPU_State initial_cpu = {.pc=0x858f, .a=0x01, .x=0x1c, .y=0xfc, .sp=0x7b, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x858f, .value=0x88}, {.addr=0x8590, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x8591, .a=0x16, .x=0x1c, .y=0xfc, .sp=0x7b, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x858f, .value=0x88}, {.addr=0x8590, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x858f, .value=0x88, .type=IO_READ},
        {.addr=0x8590, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0180) {
    const struct CPU_State initial_cpu = {.pc=0x4366, .a=0x68, .x=0xb5, .y=0x11, .sp=0xcc, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x4366, .value=0x88}, {.addr=0x4367, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x4368, .a=0xf5, .x=0xb5, .y=0x11, .sp=0xcc, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x4366, .value=0x88}, {.addr=0x4367, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x4366, .value=0x88, .type=IO_READ},
        {.addr=0x4367, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0181) {
    const struct CPU_State initial_cpu = {.pc=0x6c9f, .a=0xea, .x=0xe8, .y=0xca, .sp=0xf8, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x6c9f, .value=0x88}, {.addr=0x6ca0, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x6ca1, .a=0x20, .x=0xe8, .y=0xca, .sp=0xf8, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x6c9f, .value=0x88}, {.addr=0x6ca0, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x6c9f, .value=0x88, .type=IO_READ},
        {.addr=0x6ca0, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0182) {
    const struct CPU_State initial_cpu = {.pc=0xbfe1, .a=0xc4, .x=0x62, .y=0xb2, .sp=0x72, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0xbfe1, .value=0x88}, {.addr=0xbfe2, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xbfe3, .a=0xbf, .x=0x62, .y=0xb2, .sp=0x72, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xbfe1, .value=0x88}, {.addr=0xbfe2, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xbfe1, .value=0x88, .type=IO_READ},
        {.addr=0xbfe2, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0183) {
    const struct CPU_State initial_cpu = {.pc=0xeeba, .a=0xe2, .x=0xe9, .y=0xb0, .sp=0xb9, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xeeba, .value=0x88}, {.addr=0xeebb, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0xeebc, .a=0x13, .x=0xe9, .y=0xb0, .sp=0xb9, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xeeba, .value=0x88}, {.addr=0xeebb, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0xeeba, .value=0x88, .type=IO_READ},
        {.addr=0xeebb, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0184) {
    const struct CPU_State initial_cpu = {.pc=0xc76c, .a=0x3c, .x=0xf4, .y=0x53, .sp=0x86, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xc76c, .value=0x88}, {.addr=0xc76d, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xc76e, .a=0x90, .x=0xf4, .y=0x53, .sp=0x86, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xc76c, .value=0x88}, {.addr=0xc76d, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xc76c, .value=0x88, .type=IO_READ},
        {.addr=0xc76d, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0185) {
    const struct CPU_State initial_cpu = {.pc=0xd0df, .a=0x4b, .x=0x5b, .y=0xd7, .sp=0x75, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0xd0df, .value=0x88}, {.addr=0xd0e0, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xd0e1, .a=0x9e, .x=0x5b, .y=0xd7, .sp=0x75, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xd0df, .value=0x88}, {.addr=0xd0e0, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xd0df, .value=0x88, .type=IO_READ},
        {.addr=0xd0e0, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0186) {
    const struct CPU_State initial_cpu = {.pc=0xee41, .a=0x52, .x=0x36, .y=0xe9, .sp=0x1d, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xee41, .value=0x88}, {.addr=0xee42, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0xee43, .a=0x34, .x=0x36, .y=0xe9, .sp=0x1d, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xee41, .value=0x88}, {.addr=0xee42, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0xee41, .value=0x88, .type=IO_READ},
        {.addr=0xee42, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0187) {
    const struct CPU_State initial_cpu = {.pc=0xd350, .a=0xd8, .x=0xec, .y=0x70, .sp=0x39, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0xd350, .value=0x88}, {.addr=0xd351, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xd352, .a=0x21, .x=0xec, .y=0x70, .sp=0x39, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xd350, .value=0x88}, {.addr=0xd351, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xd350, .value=0x88, .type=IO_READ},
        {.addr=0xd351, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0188) {
    const struct CPU_State initial_cpu = {.pc=0x9529, .a=0xa9, .x=0x6d, .y=0x39, .sp=0xa7, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x9529, .value=0x88}, {.addr=0x952a, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x952b, .a=0x59, .x=0x6d, .y=0x39, .sp=0xa7, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9529, .value=0x88}, {.addr=0x952a, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x9529, .value=0x88, .type=IO_READ},
        {.addr=0x952a, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0189) {
    const struct CPU_State initial_cpu = {.pc=0xd5f5, .a=0x02, .x=0x99, .y=0x94, .sp=0xc2, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xd5f5, .value=0x88}, {.addr=0xd5f6, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0xd5f7, .a=0x5a, .x=0x99, .y=0x94, .sp=0xc2, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0xd5f5, .value=0x88}, {.addr=0xd5f6, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0xd5f5, .value=0x88, .type=IO_READ},
        {.addr=0xd5f6, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_018A) {
    const struct CPU_State initial_cpu = {.pc=0x3dd8, .a=0xbb, .x=0xad, .y=0x18, .sp=0x81, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x3dd8, .value=0x88}, {.addr=0x3dd9, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x3dda, .a=0x7c, .x=0xad, .y=0x18, .sp=0x81, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x3dd8, .value=0x88}, {.addr=0x3dd9, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x3dd8, .value=0x88, .type=IO_READ},
        {.addr=0x3dd9, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_018B) {
    const struct CPU_State initial_cpu = {.pc=0x79e3, .a=0x1b, .x=0x35, .y=0xb0, .sp=0x6c, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x79e3, .value=0x88}, {.addr=0x79e4, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x79e5, .a=0x4b, .x=0x35, .y=0xb0, .sp=0x6c, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x79e3, .value=0x88}, {.addr=0x79e4, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x79e3, .value=0x88, .type=IO_READ},
        {.addr=0x79e4, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_018C) {
    const struct CPU_State initial_cpu = {.pc=0x008a, .a=0xbe, .x=0xe5, .y=0xaf, .sp=0xb9, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x008a, .value=0x88}, {.addr=0x008b, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x008c, .a=0x01, .x=0xe5, .y=0xaf, .sp=0xb9, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x008a, .value=0x88}, {.addr=0x008b, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x008a, .value=0x88, .type=IO_READ},
        {.addr=0x008b, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_018D) {
    const struct CPU_State initial_cpu = {.pc=0x0d23, .a=0xac, .x=0x87, .y=0xdd, .sp=0xe3, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0d23, .value=0x88}, {.addr=0x0d24, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x0d25, .a=0xc8, .x=0x87, .y=0xdd, .sp=0xe3, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0d23, .value=0x88}, {.addr=0x0d24, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x0d23, .value=0x88, .type=IO_READ},
        {.addr=0x0d24, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_018E) {
    const struct CPU_State initial_cpu = {.pc=0x73f5, .a=0xca, .x=0xcb, .y=0x5d, .sp=0x03, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x73f5, .value=0x88}, {.addr=0x73f6, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x73f7, .a=0xee, .x=0xcb, .y=0x5d, .sp=0x03, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x73f5, .value=0x88}, {.addr=0x73f6, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x73f5, .value=0x88, .type=IO_READ},
        {.addr=0x73f6, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_018F) {
    const struct CPU_State initial_cpu = {.pc=0x1c79, .a=0xd3, .x=0x1f, .y=0x7a, .sp=0x90, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x1c79, .value=0x88}, {.addr=0x1c7a, .value=0x8f}};
    const struct CPU_State final_cpu = {.pc=0x1c7b, .a=0x63, .x=0x1f, .y=0x7a, .sp=0x90, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x1c79, .value=0x88}, {.addr=0x1c7a, .value=0x8f}};
    const struct BusEvent events[] = {
        {.addr=0x1c79, .value=0x88, .type=IO_READ},
        {.addr=0x1c7a, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0190) {
    const struct CPU_State initial_cpu = {.pc=0xad9f, .a=0xd7, .x=0x6f, .y=0x62, .sp=0xf1, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xad9f, .value=0x88}, {.addr=0xada0, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0xada1, .a=0x46, .x=0x6f, .y=0x62, .sp=0xf1, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xad9f, .value=0x88}, {.addr=0xada0, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0xad9f, .value=0x88, .type=IO_READ},
        {.addr=0xada0, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0191) {
    const struct CPU_State initial_cpu = {.pc=0x1690, .a=0x41, .x=0xb3, .y=0x15, .sp=0x46, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x1690, .value=0x88}, {.addr=0x1691, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0x1692, .a=0x4b, .x=0xb3, .y=0x15, .sp=0x46, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x1690, .value=0x88}, {.addr=0x1691, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0x1690, .value=0x88, .type=IO_READ},
        {.addr=0x1691, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0192) {
    const struct CPU_State initial_cpu = {.pc=0x6416, .a=0x5b, .x=0xfa, .y=0xa5, .sp=0xeb, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x6416, .value=0x88}, {.addr=0x6417, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x6418, .a=0x68, .x=0xfa, .y=0xa5, .sp=0xeb, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x6416, .value=0x88}, {.addr=0x6417, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x6416, .value=0x88, .type=IO_READ},
        {.addr=0x6417, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0193) {
    const struct CPU_State initial_cpu = {.pc=0x0cbb, .a=0x74, .x=0x0c, .y=0xef, .sp=0xa6, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0cbb, .value=0x88}, {.addr=0x0cbc, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x0cbd, .a=0x6d, .x=0x0c, .y=0xef, .sp=0xa6, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x0cbb, .value=0x88}, {.addr=0x0cbc, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x0cbb, .value=0x88, .type=IO_READ},
        {.addr=0x0cbc, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0194) {
    const struct CPU_State initial_cpu = {.pc=0x380f, .a=0x36, .x=0x2c, .y=0x90, .sp=0x76, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x380f, .value=0x88}, {.addr=0x3810, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x3811, .a=0x24, .x=0x2c, .y=0x90, .sp=0x76, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x380f, .value=0x88}, {.addr=0x3810, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x380f, .value=0x88, .type=IO_READ},
        {.addr=0x3810, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0195) {
    const struct CPU_State initial_cpu = {.pc=0xd22d, .a=0x9b, .x=0xd0, .y=0x6f, .sp=0x63, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0xd22d, .value=0x88}, {.addr=0xd22e, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xd22f, .a=0x5d, .x=0xd0, .y=0x6f, .sp=0x63, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xd22d, .value=0x88}, {.addr=0xd22e, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xd22d, .value=0x88, .type=IO_READ},
        {.addr=0xd22e, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0196) {
    const struct CPU_State initial_cpu = {.pc=0x4081, .a=0x9f, .x=0x8a, .y=0xf2, .sp=0x7e, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x4081, .value=0x88}, {.addr=0x4082, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x4083, .a=0xa3, .x=0x8a, .y=0xf2, .sp=0x7e, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x4081, .value=0x88}, {.addr=0x4082, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x4081, .value=0x88, .type=IO_READ},
        {.addr=0x4082, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0197) {
    const struct CPU_State initial_cpu = {.pc=0x3872, .a=0x77, .x=0x9d, .y=0x04, .sp=0x4e, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x3872, .value=0x88}, {.addr=0x3873, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x3874, .a=0xf1, .x=0x9d, .y=0x04, .sp=0x4e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x3872, .value=0x88}, {.addr=0x3873, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x3872, .value=0x88, .type=IO_READ},
        {.addr=0x3873, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0198) {
    const struct CPU_State initial_cpu = {.pc=0x67f0, .a=0x63, .x=0x59, .y=0x31, .sp=0x15, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x67f0, .value=0x88}, {.addr=0x67f1, .value=0x06}};
    const struct CPU_State final_cpu = {.pc=0x67f2, .a=0x6a, .x=0x59, .y=0x31, .sp=0x15, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x67f0, .value=0x88}, {.addr=0x67f1, .value=0x06}};
    const struct BusEvent events[] = {
        {.addr=0x67f0, .value=0x88, .type=IO_READ},
        {.addr=0x67f1, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0199) {
    const struct CPU_State initial_cpu = {.pc=0xeeb8, .a=0x97, .x=0xc9, .y=0xe4, .sp=0xde, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xeeb8, .value=0x88}, {.addr=0xeeb9, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xeeba, .a=0xd9, .x=0xc9, .y=0xe4, .sp=0xde, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xeeb8, .value=0x88}, {.addr=0xeeb9, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xeeb8, .value=0x88, .type=IO_READ},
        {.addr=0xeeb9, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_019A) {
    const struct CPU_State initial_cpu = {.pc=0x6691, .a=0x67, .x=0x13, .y=0x78, .sp=0x34, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x6691, .value=0x88}, {.addr=0x6692, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x6693, .a=0xf2, .x=0x13, .y=0x78, .sp=0x34, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x6691, .value=0x88}, {.addr=0x6692, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x6691, .value=0x88, .type=IO_READ},
        {.addr=0x6692, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_019B) {
    const struct CPU_State initial_cpu = {.pc=0xa5fc, .a=0x7b, .x=0x1c, .y=0x2d, .sp=0x29, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0xa5fc, .value=0x88}, {.addr=0xa5fd, .value=0x97}};
    const struct CPU_State final_cpu = {.pc=0xa5fe, .a=0x12, .x=0x1c, .y=0x2d, .sp=0x29, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xa5fc, .value=0x88}, {.addr=0xa5fd, .value=0x97}};
    const struct BusEvent events[] = {
        {.addr=0xa5fc, .value=0x88, .type=IO_READ},
        {.addr=0xa5fd, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_019C) {
    const struct CPU_State initial_cpu = {.pc=0x3063, .a=0x19, .x=0x17, .y=0x68, .sp=0xc7, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x3063, .value=0x88}, {.addr=0x3064, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x3065, .a=0xdb, .x=0x17, .y=0x68, .sp=0xc7, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x3063, .value=0x88}, {.addr=0x3064, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x3063, .value=0x88, .type=IO_READ},
        {.addr=0x3064, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_019D) {
    const struct CPU_State initial_cpu = {.pc=0x8339, .a=0xc2, .x=0x30, .y=0x12, .sp=0x4b, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x8339, .value=0x88}, {.addr=0x833a, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x833b, .a=0x5c, .x=0x30, .y=0x12, .sp=0x4b, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x8339, .value=0x88}, {.addr=0x833a, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x8339, .value=0x88, .type=IO_READ},
        {.addr=0x833a, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_019E) {
    const struct CPU_State initial_cpu = {.pc=0x46f8, .a=0x00, .x=0xb1, .y=0x7f, .sp=0xb1, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x46f8, .value=0x88}, {.addr=0x46f9, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0x46fa, .a=0x19, .x=0xb1, .y=0x7f, .sp=0xb1, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x46f8, .value=0x88}, {.addr=0x46f9, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x46f8, .value=0x88, .type=IO_READ},
        {.addr=0x46f9, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_019F) {
    const struct CPU_State initial_cpu = {.pc=0x0dcf, .a=0xb6, .x=0x42, .y=0xa2, .sp=0x38, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0dcf, .value=0x88}, {.addr=0x0dd0, .value=0x31}};
    const struct CPU_State final_cpu = {.pc=0x0dd1, .a=0xe8, .x=0x42, .y=0xa2, .sp=0x38, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0dcf, .value=0x88}, {.addr=0x0dd0, .value=0x31}};
    const struct BusEvent events[] = {
        {.addr=0x0dcf, .value=0x88, .type=IO_READ},
        {.addr=0x0dd0, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x84d8, .a=0x2b, .x=0xa2, .y=0x73, .sp=0x8a, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x84d8, .value=0x88}, {.addr=0x84d9, .value=0x70}};
    const struct CPU_State final_cpu = {.pc=0x84da, .a=0x9b, .x=0xa2, .y=0x73, .sp=0x8a, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x84d8, .value=0x88}, {.addr=0x84d9, .value=0x70}};
    const struct BusEvent events[] = {
        {.addr=0x84d8, .value=0x88, .type=IO_READ},
        {.addr=0x84d9, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x7c29, .a=0xb2, .x=0x7a, .y=0x6a, .sp=0x79, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x7c29, .value=0x88}, {.addr=0x7c2a, .value=0x79}};
    const struct CPU_State final_cpu = {.pc=0x7c2b, .a=0x2b, .x=0x7a, .y=0x6a, .sp=0x79, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x7c29, .value=0x88}, {.addr=0x7c2a, .value=0x79}};
    const struct BusEvent events[] = {
        {.addr=0x7c29, .value=0x88, .type=IO_READ},
        {.addr=0x7c2a, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x8c16, .a=0x76, .x=0xac, .y=0xd7, .sp=0xcd, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x8c16, .value=0x88}, {.addr=0x8c17, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x8c18, .a=0x8b, .x=0xac, .y=0xd7, .sp=0xcd, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x8c16, .value=0x88}, {.addr=0x8c17, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x8c16, .value=0x88, .type=IO_READ},
        {.addr=0x8c17, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x6cda, .a=0x1e, .x=0x92, .y=0xe7, .sp=0xaf, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x6cda, .value=0x88}, {.addr=0x6cdb, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x6cdc, .a=0xd6, .x=0x92, .y=0xe7, .sp=0xaf, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x6cda, .value=0x88}, {.addr=0x6cdb, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x6cda, .value=0x88, .type=IO_READ},
        {.addr=0x6cdb, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x9386, .a=0x3d, .x=0x28, .y=0x91, .sp=0xb5, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x9386, .value=0x88}, {.addr=0x9387, .value=0x6e}};
    const struct CPU_State final_cpu = {.pc=0x9388, .a=0xab, .x=0x28, .y=0x91, .sp=0xb5, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x9386, .value=0x88}, {.addr=0x9387, .value=0x6e}};
    const struct BusEvent events[] = {
        {.addr=0x9386, .value=0x88, .type=IO_READ},
        {.addr=0x9387, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xbf5e, .a=0x1c, .x=0xe3, .y=0x0b, .sp=0xa3, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xbf5e, .value=0x88}, {.addr=0xbf5f, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xbf60, .a=0x31, .x=0xe3, .y=0x0b, .sp=0xa3, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xbf5e, .value=0x88}, {.addr=0xbf5f, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xbf5e, .value=0x88, .type=IO_READ},
        {.addr=0xbf5f, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x7eeb, .a=0xa6, .x=0x87, .y=0x13, .sp=0x2a, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x7eeb, .value=0x88}, {.addr=0x7eec, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x7eed, .a=0xe1, .x=0x87, .y=0x13, .sp=0x2a, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x7eeb, .value=0x88}, {.addr=0x7eec, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x7eeb, .value=0x88, .type=IO_READ},
        {.addr=0x7eec, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x8f9b, .a=0x6d, .x=0xa9, .y=0xba, .sp=0x00, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x8f9b, .value=0x88}, {.addr=0x8f9c, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x8f9d, .a=0x5f, .x=0xa9, .y=0xba, .sp=0x00, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x8f9b, .value=0x88}, {.addr=0x8f9c, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x8f9b, .value=0x88, .type=IO_READ},
        {.addr=0x8f9c, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01A8) {
    const struct CPU_State initial_cpu = {.pc=0xfda3, .a=0xb6, .x=0x27, .y=0x3d, .sp=0x00, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xfda3, .value=0x88}, {.addr=0xfda4, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xfda5, .a=0x4c, .x=0x27, .y=0x3d, .sp=0x00, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0xfda3, .value=0x88}, {.addr=0xfda4, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xfda3, .value=0x88, .type=IO_READ},
        {.addr=0xfda4, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01A9) {
    const struct CPU_State initial_cpu = {.pc=0xaafc, .a=0x0b, .x=0x1e, .y=0x2a, .sp=0x6e, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xaafc, .value=0x88}, {.addr=0xaafd, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0xaafe, .a=0xb6, .x=0x1e, .y=0x2a, .sp=0x6e, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xaafc, .value=0x88}, {.addr=0xaafd, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0xaafc, .value=0x88, .type=IO_READ},
        {.addr=0xaafd, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x1844, .a=0xee, .x=0x10, .y=0x24, .sp=0xd9, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x1844, .value=0x88}, {.addr=0x1845, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0x1846, .a=0x28, .x=0x10, .y=0x24, .sp=0xd9, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x1844, .value=0x88}, {.addr=0x1845, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0x1844, .value=0x88, .type=IO_READ},
        {.addr=0x1845, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xa1b5, .a=0x72, .x=0x06, .y=0x3d, .sp=0x41, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xa1b5, .value=0x88}, {.addr=0xa1b6, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xa1b7, .a=0xb4, .x=0x06, .y=0x3d, .sp=0x41, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xa1b5, .value=0x88}, {.addr=0xa1b6, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xa1b5, .value=0x88, .type=IO_READ},
        {.addr=0xa1b6, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01AC) {
    const struct CPU_State initial_cpu = {.pc=0x112f, .a=0xfb, .x=0xed, .y=0x1d, .sp=0xec, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x112f, .value=0x88}, {.addr=0x1130, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0x1131, .a=0xd5, .x=0xed, .y=0x1d, .sp=0xec, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x112f, .value=0x88}, {.addr=0x1130, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0x112f, .value=0x88, .type=IO_READ},
        {.addr=0x1130, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x9421, .a=0x6d, .x=0x40, .y=0x62, .sp=0x4d, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x9421, .value=0x88}, {.addr=0x9422, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x9423, .a=0x82, .x=0x40, .y=0x62, .sp=0x4d, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x9421, .value=0x88}, {.addr=0x9422, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x9421, .value=0x88, .type=IO_READ},
        {.addr=0x9422, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xd427, .a=0x12, .x=0x43, .y=0x0b, .sp=0xeb, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0xd427, .value=0x88}, {.addr=0xd428, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xd429, .a=0x40, .x=0x43, .y=0x0b, .sp=0xeb, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xd427, .value=0x88}, {.addr=0xd428, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xd427, .value=0x88, .type=IO_READ},
        {.addr=0xd428, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01AF) {
    const struct CPU_State initial_cpu = {.pc=0xd139, .a=0xa6, .x=0x20, .y=0xa6, .sp=0xd9, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xd139, .value=0x88}, {.addr=0xd13a, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xd13b, .a=0xb1, .x=0x20, .y=0xa6, .sp=0xd9, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xd139, .value=0x88}, {.addr=0xd13a, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xd139, .value=0x88, .type=IO_READ},
        {.addr=0xd13a, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xf7f9, .a=0xd0, .x=0x5d, .y=0x85, .sp=0x34, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xf7f9, .value=0x88}, {.addr=0xf7fa, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xf7fb, .a=0xff, .x=0x5d, .y=0x85, .sp=0x34, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0xf7f9, .value=0x88}, {.addr=0xf7fa, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xf7f9, .value=0x88, .type=IO_READ},
        {.addr=0xf7fa, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01B1) {
    const struct CPU_State initial_cpu = {.pc=0x5508, .a=0xc1, .x=0xb5, .y=0x2e, .sp=0xcf, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x5508, .value=0x88}, {.addr=0x5509, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x550a, .a=0xb9, .x=0xb5, .y=0x2e, .sp=0xcf, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x5508, .value=0x88}, {.addr=0x5509, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x5508, .value=0x88, .type=IO_READ},
        {.addr=0x5509, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01B2) {
    const struct CPU_State initial_cpu = {.pc=0xcb31, .a=0x53, .x=0x91, .y=0x60, .sp=0x33, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xcb31, .value=0x88}, {.addr=0xcb32, .value=0xf6}};
    const struct CPU_State final_cpu = {.pc=0xcb33, .a=0x4a, .x=0x91, .y=0x60, .sp=0x33, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xcb31, .value=0x88}, {.addr=0xcb32, .value=0xf6}};
    const struct BusEvent events[] = {
        {.addr=0xcb31, .value=0x88, .type=IO_READ},
        {.addr=0xcb32, .value=0xf6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xdff2, .a=0x4c, .x=0x3b, .y=0x79, .sp=0xb9, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xdff2, .value=0x88}, {.addr=0xdff3, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xdff4, .a=0x61, .x=0x3b, .y=0x79, .sp=0xb9, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xdff2, .value=0x88}, {.addr=0xdff3, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xdff2, .value=0x88, .type=IO_READ},
        {.addr=0xdff3, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x6219, .a=0xc1, .x=0x5d, .y=0x05, .sp=0x60, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x6219, .value=0x88}, {.addr=0x621a, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x621b, .a=0xd1, .x=0x5d, .y=0x05, .sp=0x60, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x6219, .value=0x88}, {.addr=0x621a, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x6219, .value=0x88, .type=IO_READ},
        {.addr=0x621a, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x4751, .a=0x29, .x=0xdc, .y=0x21, .sp=0x15, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x4751, .value=0x88}, {.addr=0x4752, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x4753, .a=0x41, .x=0xdc, .y=0x21, .sp=0x15, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x4751, .value=0x88}, {.addr=0x4752, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x4751, .value=0x88, .type=IO_READ},
        {.addr=0x4752, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xbea6, .a=0x00, .x=0x69, .y=0xab, .sp=0xda, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xbea6, .value=0x88}, {.addr=0xbea7, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xbea8, .a=0x09, .x=0x69, .y=0xab, .sp=0xda, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xbea6, .value=0x88}, {.addr=0xbea7, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xbea6, .value=0x88, .type=IO_READ},
        {.addr=0xbea7, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01B7) {
    const struct CPU_State initial_cpu = {.pc=0xa78e, .a=0xb7, .x=0x96, .y=0x85, .sp=0x40, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0xa78e, .value=0x88}, {.addr=0xa78f, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xa790, .a=0xa4, .x=0x96, .y=0x85, .sp=0x40, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xa78e, .value=0x88}, {.addr=0xa78f, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xa78e, .value=0x88, .type=IO_READ},
        {.addr=0xa78f, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xe61f, .a=0xb4, .x=0xd4, .y=0x0d, .sp=0x75, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xe61f, .value=0x88}, {.addr=0xe620, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xe621, .a=0x4d, .x=0xd4, .y=0x0d, .sp=0x75, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0xe61f, .value=0x88}, {.addr=0xe620, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xe61f, .value=0x88, .type=IO_READ},
        {.addr=0xe620, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x6ed7, .a=0x9f, .x=0xbb, .y=0x3f, .sp=0xd4, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x6ed7, .value=0x88}, {.addr=0x6ed8, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x6ed9, .a=0x90, .x=0xbb, .y=0x3f, .sp=0xd4, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x6ed7, .value=0x88}, {.addr=0x6ed8, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x6ed7, .value=0x88, .type=IO_READ},
        {.addr=0x6ed8, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x9f1a, .a=0x0d, .x=0x28, .y=0x49, .sp=0x52, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x9f1a, .value=0x88}, {.addr=0x9f1b, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x9f1c, .a=0xa1, .x=0x28, .y=0x49, .sp=0x52, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x9f1a, .value=0x88}, {.addr=0x9f1b, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x9f1a, .value=0x88, .type=IO_READ},
        {.addr=0x9f1b, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x8fbb, .a=0x75, .x=0xbf, .y=0x99, .sp=0xc4, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x8fbb, .value=0x88}, {.addr=0x8fbc, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x8fbd, .a=0xf6, .x=0xbf, .y=0x99, .sp=0xc4, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x8fbb, .value=0x88}, {.addr=0x8fbc, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x8fbb, .value=0x88, .type=IO_READ},
        {.addr=0x8fbc, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x0e03, .a=0x39, .x=0xa8, .y=0x37, .sp=0xf2, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0e03, .value=0x88}, {.addr=0x0e04, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x0e05, .a=0x06, .x=0xa8, .y=0x37, .sp=0xf2, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0e03, .value=0x88}, {.addr=0x0e04, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x0e03, .value=0x88, .type=IO_READ},
        {.addr=0x0e04, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x9236, .a=0xa5, .x=0xd6, .y=0x78, .sp=0xe7, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x9236, .value=0x88}, {.addr=0x9237, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0x9238, .a=0x4e, .x=0xd6, .y=0x78, .sp=0xe7, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x9236, .value=0x88}, {.addr=0x9237, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0x9236, .value=0x88, .type=IO_READ},
        {.addr=0x9237, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01BE) {
    const struct CPU_State initial_cpu = {.pc=0x971c, .a=0xe2, .x=0xe2, .y=0xce, .sp=0x73, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x971c, .value=0x88}, {.addr=0x971d, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0x971e, .a=0x3d, .x=0xe2, .y=0xce, .sp=0x73, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x971c, .value=0x88}, {.addr=0x971d, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0x971c, .value=0x88, .type=IO_READ},
        {.addr=0x971d, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x0262, .a=0xd9, .x=0x1d, .y=0xc6, .sp=0x54, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0262, .value=0x88}, {.addr=0x0263, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x0264, .a=0x11, .x=0x1d, .y=0xc6, .sp=0x54, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0262, .value=0x88}, {.addr=0x0263, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x0262, .value=0x88, .type=IO_READ},
        {.addr=0x0263, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01C0) {
    const struct CPU_State initial_cpu = {.pc=0xd8f7, .a=0xbe, .x=0x65, .y=0x55, .sp=0x2b, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xd8f7, .value=0x88}, {.addr=0xd8f8, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xd8f9, .a=0x42, .x=0x65, .y=0x55, .sp=0x2b, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0xd8f7, .value=0x88}, {.addr=0xd8f8, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xd8f7, .value=0x88, .type=IO_READ},
        {.addr=0xd8f8, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x08ec, .a=0xfe, .x=0x25, .y=0xa9, .sp=0xe0, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x08ec, .value=0x88}, {.addr=0x08ed, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0x08ee, .a=0xde, .x=0x25, .y=0xa9, .sp=0xe0, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x08ec, .value=0x88}, {.addr=0x08ed, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0x08ec, .value=0x88, .type=IO_READ},
        {.addr=0x08ed, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x3fb3, .a=0xdc, .x=0xa4, .y=0xe7, .sp=0x18, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x3fb3, .value=0x88}, {.addr=0x3fb4, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x3fb5, .a=0xf0, .x=0xa4, .y=0xe7, .sp=0x18, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x3fb3, .value=0x88}, {.addr=0x3fb4, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x3fb3, .value=0x88, .type=IO_READ},
        {.addr=0x3fb4, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x423a, .a=0x0c, .x=0x35, .y=0x6c, .sp=0x5a, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x423a, .value=0x88}, {.addr=0x423b, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x423c, .a=0x2f, .x=0x35, .y=0x6c, .sp=0x5a, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x423a, .value=0x88}, {.addr=0x423b, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x423a, .value=0x88, .type=IO_READ},
        {.addr=0x423b, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01C4) {
    const struct CPU_State initial_cpu = {.pc=0x1ed4, .a=0xa6, .x=0xdc, .y=0x7f, .sp=0xc4, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x1ed4, .value=0x88}, {.addr=0x1ed5, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x1ed6, .a=0x96, .x=0xdc, .y=0x7f, .sp=0xc4, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x1ed4, .value=0x88}, {.addr=0x1ed5, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x1ed4, .value=0x88, .type=IO_READ},
        {.addr=0x1ed5, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01C5) {
    const struct CPU_State initial_cpu = {.pc=0xd7e6, .a=0xef, .x=0x79, .y=0x8d, .sp=0x3e, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xd7e6, .value=0x88}, {.addr=0xd7e7, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0xd7e8, .a=0x3c, .x=0x79, .y=0x8d, .sp=0x3e, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xd7e6, .value=0x88}, {.addr=0xd7e7, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0xd7e6, .value=0x88, .type=IO_READ},
        {.addr=0xd7e7, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01C6) {
    const struct CPU_State initial_cpu = {.pc=0x0483, .a=0xbf, .x=0xa7, .y=0xf0, .sp=0x78, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x0483, .value=0x88}, {.addr=0x0484, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x0485, .a=0xda, .x=0xa7, .y=0xf0, .sp=0x78, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0483, .value=0x88}, {.addr=0x0484, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x0483, .value=0x88, .type=IO_READ},
        {.addr=0x0484, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x2561, .a=0x91, .x=0xc1, .y=0x67, .sp=0xc7, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x2561, .value=0x88}, {.addr=0x2562, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x2563, .a=0xbd, .x=0xc1, .y=0x67, .sp=0xc7, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x2561, .value=0x88}, {.addr=0x2562, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x2561, .value=0x88, .type=IO_READ},
        {.addr=0x2562, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x858a, .a=0x67, .x=0xe7, .y=0x2b, .sp=0xee, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x858a, .value=0x88}, {.addr=0x858b, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x858c, .a=0x3a, .x=0xe7, .y=0x2b, .sp=0xee, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x858a, .value=0x88}, {.addr=0x858b, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x858a, .value=0x88, .type=IO_READ},
        {.addr=0x858b, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01C9) {
    const struct CPU_State initial_cpu = {.pc=0xdd74, .a=0x38, .x=0xbf, .y=0xe1, .sp=0x85, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0xdd74, .value=0x88}, {.addr=0xdd75, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xdd76, .a=0x60, .x=0xbf, .y=0xe1, .sp=0x85, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xdd74, .value=0x88}, {.addr=0xdd75, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xdd74, .value=0x88, .type=IO_READ},
        {.addr=0xdd75, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x15a1, .a=0xcd, .x=0x47, .y=0x58, .sp=0x5c, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x15a1, .value=0x88}, {.addr=0x15a2, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x15a3, .a=0x42, .x=0x47, .y=0x58, .sp=0x5c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x15a1, .value=0x88}, {.addr=0x15a2, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x15a1, .value=0x88, .type=IO_READ},
        {.addr=0x15a2, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01CB) {
    const struct CPU_State initial_cpu = {.pc=0x3a79, .a=0x5e, .x=0x17, .y=0x85, .sp=0x5b, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x3a79, .value=0x88}, {.addr=0x3a7a, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x3a7b, .a=0xf7, .x=0x17, .y=0x85, .sp=0x5b, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x3a79, .value=0x88}, {.addr=0x3a7a, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x3a79, .value=0x88, .type=IO_READ},
        {.addr=0x3a7a, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x66a2, .a=0xed, .x=0x45, .y=0xe0, .sp=0x58, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x66a2, .value=0x88}, {.addr=0x66a3, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x66a4, .a=0x6f, .x=0x45, .y=0xe0, .sp=0x58, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x66a2, .value=0x88}, {.addr=0x66a3, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x66a2, .value=0x88, .type=IO_READ},
        {.addr=0x66a3, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xa81f, .a=0xf2, .x=0xe0, .y=0x72, .sp=0xbc, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xa81f, .value=0x88}, {.addr=0xa820, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0xa821, .a=0x3a, .x=0xe0, .y=0x72, .sp=0xbc, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xa81f, .value=0x88}, {.addr=0xa820, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0xa81f, .value=0x88, .type=IO_READ},
        {.addr=0xa820, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xdcc3, .a=0x62, .x=0x03, .y=0xec, .sp=0x4c, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xdcc3, .value=0x88}, {.addr=0xdcc4, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0xdcc5, .a=0xfc, .x=0x03, .y=0xec, .sp=0x4c, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xdcc3, .value=0x88}, {.addr=0xdcc4, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0xdcc3, .value=0x88, .type=IO_READ},
        {.addr=0xdcc4, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x8116, .a=0x6a, .x=0x78, .y=0x16, .sp=0x7f, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x8116, .value=0x88}, {.addr=0x8117, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x8118, .a=0x42, .x=0x78, .y=0x16, .sp=0x7f, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x8116, .value=0x88}, {.addr=0x8117, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x8116, .value=0x88, .type=IO_READ},
        {.addr=0x8117, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xb280, .a=0xa8, .x=0x85, .y=0x14, .sp=0x31, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0xb280, .value=0x88}, {.addr=0xb281, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0xb282, .a=0x5f, .x=0x85, .y=0x14, .sp=0x31, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xb280, .value=0x88}, {.addr=0xb281, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0xb280, .value=0x88, .type=IO_READ},
        {.addr=0xb281, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x048d, .a=0xb7, .x=0x90, .y=0x2f, .sp=0xd5, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x048d, .value=0x88}, {.addr=0x048e, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x048f, .a=0x2b, .x=0x90, .y=0x2f, .sp=0xd5, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x048d, .value=0x88}, {.addr=0x048e, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x048d, .value=0x88, .type=IO_READ},
        {.addr=0x048e, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x3d5b, .a=0x33, .x=0x78, .y=0x50, .sp=0xfb, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x3d5b, .value=0x88}, {.addr=0x3d5c, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x3d5d, .a=0x32, .x=0x78, .y=0x50, .sp=0xfb, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x3d5b, .value=0x88}, {.addr=0x3d5c, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x3d5b, .value=0x88, .type=IO_READ},
        {.addr=0x3d5c, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01D3) {
    const struct CPU_State initial_cpu = {.pc=0xc8a3, .a=0x53, .x=0x49, .y=0x95, .sp=0x98, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0xc8a3, .value=0x88}, {.addr=0xc8a4, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0xc8a5, .a=0xe9, .x=0x49, .y=0x95, .sp=0x98, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xc8a3, .value=0x88}, {.addr=0xc8a4, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0xc8a3, .value=0x88, .type=IO_READ},
        {.addr=0xc8a4, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x04ee, .a=0x74, .x=0xec, .y=0x43, .sp=0x8c, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x04ee, .value=0x88}, {.addr=0x04ef, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0x04f0, .a=0xb6, .x=0xec, .y=0x43, .sp=0x8c, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x04ee, .value=0x88}, {.addr=0x04ef, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0x04ee, .value=0x88, .type=IO_READ},
        {.addr=0x04ef, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01D5) {
    const struct CPU_State initial_cpu = {.pc=0xee68, .a=0x38, .x=0x05, .y=0x0b, .sp=0x0a, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0xee68, .value=0x88}, {.addr=0xee69, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xee6a, .a=0x07, .x=0x05, .y=0x0b, .sp=0x0a, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0xee68, .value=0x88}, {.addr=0xee69, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xee68, .value=0x88, .type=IO_READ},
        {.addr=0xee69, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x8a5b, .a=0x2b, .x=0x88, .y=0xfc, .sp=0x52, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x8a5b, .value=0x88}, {.addr=0x8a5c, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x8a5d, .a=0x18, .x=0x88, .y=0xfc, .sp=0x52, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x8a5b, .value=0x88}, {.addr=0x8a5c, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x8a5b, .value=0x88, .type=IO_READ},
        {.addr=0x8a5c, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x6c33, .a=0x14, .x=0x13, .y=0x2f, .sp=0x21, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x6c33, .value=0x88}, {.addr=0x6c34, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x6c35, .a=0xb9, .x=0x13, .y=0x2f, .sp=0x21, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6c33, .value=0x88}, {.addr=0x6c34, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x6c33, .value=0x88, .type=IO_READ},
        {.addr=0x6c34, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x24bc, .a=0x99, .x=0xd4, .y=0xaa, .sp=0xca, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x24bc, .value=0x88}, {.addr=0x24bd, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x24be, .a=0xae, .x=0xd4, .y=0xaa, .sp=0xca, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x24bc, .value=0x88}, {.addr=0x24bd, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x24bc, .value=0x88, .type=IO_READ},
        {.addr=0x24bd, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xad88, .a=0x84, .x=0xb3, .y=0xcd, .sp=0x3a, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xad88, .value=0x88}, {.addr=0xad89, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xad8a, .a=0xbf, .x=0xb3, .y=0xcd, .sp=0x3a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xad88, .value=0x88}, {.addr=0xad89, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xad88, .value=0x88, .type=IO_READ},
        {.addr=0xad89, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01DA) {
    const struct CPU_State initial_cpu = {.pc=0x87fc, .a=0x41, .x=0x10, .y=0x78, .sp=0x4f, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x87fc, .value=0x88}, {.addr=0x87fd, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x87fe, .a=0x33, .x=0x10, .y=0x78, .sp=0x4f, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x87fc, .value=0x88}, {.addr=0x87fd, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x87fc, .value=0x88, .type=IO_READ},
        {.addr=0x87fd, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xaac2, .a=0xa5, .x=0x68, .y=0xcf, .sp=0x05, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xaac2, .value=0x88}, {.addr=0xaac3, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xaac4, .a=0xf3, .x=0x68, .y=0xcf, .sp=0x05, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xaac2, .value=0x88}, {.addr=0xaac3, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xaac2, .value=0x88, .type=IO_READ},
        {.addr=0xaac3, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x9355, .a=0x5f, .x=0x97, .y=0x8a, .sp=0x9c, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x9355, .value=0x88}, {.addr=0x9356, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0x9357, .a=0xae, .x=0x97, .y=0x8a, .sp=0x9c, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x9355, .value=0x88}, {.addr=0x9356, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0x9355, .value=0x88, .type=IO_READ},
        {.addr=0x9356, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x7652, .a=0xf3, .x=0x7d, .y=0xeb, .sp=0xfc, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x7652, .value=0x88}, {.addr=0x7653, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x7654, .a=0x77, .x=0x7d, .y=0xeb, .sp=0xfc, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x7652, .value=0x88}, {.addr=0x7653, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x7652, .value=0x88, .type=IO_READ},
        {.addr=0x7653, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x768a, .a=0x6e, .x=0x0c, .y=0x8c, .sp=0xe9, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x768a, .value=0x88}, {.addr=0x768b, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x768c, .a=0xbf, .x=0x0c, .y=0x8c, .sp=0xe9, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x768a, .value=0x88}, {.addr=0x768b, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x768a, .value=0x88, .type=IO_READ},
        {.addr=0x768b, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01DF) {
    const struct CPU_State initial_cpu = {.pc=0xd509, .a=0xda, .x=0x20, .y=0x69, .sp=0x0a, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xd509, .value=0x88}, {.addr=0xd50a, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xd50b, .a=0x1c, .x=0x20, .y=0x69, .sp=0x0a, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xd509, .value=0x88}, {.addr=0xd50a, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xd509, .value=0x88, .type=IO_READ},
        {.addr=0xd50a, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x914b, .a=0xed, .x=0x38, .y=0xc3, .sp=0x5f, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x914b, .value=0x88}, {.addr=0x914c, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x914d, .a=0xc3, .x=0x38, .y=0xc3, .sp=0x5f, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x914b, .value=0x88}, {.addr=0x914c, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x914b, .value=0x88, .type=IO_READ},
        {.addr=0x914c, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x63f3, .a=0x2f, .x=0x81, .y=0xef, .sp=0xbf, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x63f3, .value=0x88}, {.addr=0x63f4, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x63f5, .a=0x66, .x=0x81, .y=0xef, .sp=0xbf, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x63f3, .value=0x88}, {.addr=0x63f4, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x63f3, .value=0x88, .type=IO_READ},
        {.addr=0x63f4, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xbf26, .a=0xb5, .x=0x5c, .y=0xf4, .sp=0x9e, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xbf26, .value=0x88}, {.addr=0xbf27, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xbf28, .a=0x2f, .x=0x5c, .y=0xf4, .sp=0x9e, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xbf26, .value=0x88}, {.addr=0xbf27, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xbf26, .value=0x88, .type=IO_READ},
        {.addr=0xbf27, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xebed, .a=0x0f, .x=0x09, .y=0x99, .sp=0xe3, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0xebed, .value=0x88}, {.addr=0xebee, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xebef, .a=0xdf, .x=0x09, .y=0x99, .sp=0xe3, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xebed, .value=0x88}, {.addr=0xebee, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xebed, .value=0x88, .type=IO_READ},
        {.addr=0xebee, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x6cb6, .a=0x09, .x=0x18, .y=0xe9, .sp=0x09, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x6cb6, .value=0x88}, {.addr=0x6cb7, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x6cb8, .a=0xbf, .x=0x18, .y=0xe9, .sp=0x09, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x6cb6, .value=0x88}, {.addr=0x6cb7, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x6cb6, .value=0x88, .type=IO_READ},
        {.addr=0x6cb7, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x519f, .a=0x42, .x=0x5a, .y=0xfc, .sp=0x0e, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x519f, .value=0x88}, {.addr=0x51a0, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x51a1, .a=0x05, .x=0x5a, .y=0xfc, .sp=0x0e, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x519f, .value=0x88}, {.addr=0x51a0, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x519f, .value=0x88, .type=IO_READ},
        {.addr=0x51a0, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01E6) {
    const struct CPU_State initial_cpu = {.pc=0xf95c, .a=0x71, .x=0xac, .y=0x89, .sp=0x94, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0xf95c, .value=0x88}, {.addr=0xf95d, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xf95e, .a=0xfa, .x=0xac, .y=0x89, .sp=0x94, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xf95c, .value=0x88}, {.addr=0xf95d, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xf95c, .value=0x88, .type=IO_READ},
        {.addr=0xf95d, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x5030, .a=0x18, .x=0x2c, .y=0x17, .sp=0x37, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x5030, .value=0x88}, {.addr=0x5031, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x5032, .a=0x6c, .x=0x2c, .y=0x17, .sp=0x37, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x5030, .value=0x88}, {.addr=0x5031, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x5030, .value=0x88, .type=IO_READ},
        {.addr=0x5031, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x5892, .a=0xe8, .x=0x67, .y=0xeb, .sp=0xc3, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x5892, .value=0x88}, {.addr=0x5893, .value=0xd3}};
    const struct CPU_State final_cpu = {.pc=0x5894, .a=0xbc, .x=0x67, .y=0xeb, .sp=0xc3, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x5892, .value=0x88}, {.addr=0x5893, .value=0xd3}};
    const struct BusEvent events[] = {
        {.addr=0x5892, .value=0x88, .type=IO_READ},
        {.addr=0x5893, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01E9) {
    const struct CPU_State initial_cpu = {.pc=0x3d71, .a=0xf9, .x=0xa5, .y=0xe2, .sp=0x8e, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x3d71, .value=0x88}, {.addr=0x3d72, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x3d73, .a=0x45, .x=0xa5, .y=0xe2, .sp=0x8e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x3d71, .value=0x88}, {.addr=0x3d72, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x3d71, .value=0x88, .type=IO_READ},
        {.addr=0x3d72, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x58d1, .a=0xef, .x=0x68, .y=0x4e, .sp=0x79, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x58d1, .value=0x88}, {.addr=0x58d2, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x58d3, .a=0xf8, .x=0x68, .y=0x4e, .sp=0x79, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x58d1, .value=0x88}, {.addr=0x58d2, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x58d1, .value=0x88, .type=IO_READ},
        {.addr=0x58d2, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xa9df, .a=0xc8, .x=0x59, .y=0xfc, .sp=0x60, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0xa9df, .value=0x88}, {.addr=0xa9e0, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xa9e1, .a=0x4b, .x=0x59, .y=0xfc, .sp=0x60, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0xa9df, .value=0x88}, {.addr=0xa9e0, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xa9df, .value=0x88, .type=IO_READ},
        {.addr=0xa9e0, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xf2d3, .a=0xaf, .x=0x35, .y=0x02, .sp=0xf2, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0xf2d3, .value=0x88}, {.addr=0xf2d4, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0xf2d5, .a=0x47, .x=0x35, .y=0x02, .sp=0xf2, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0xf2d3, .value=0x88}, {.addr=0xf2d4, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0xf2d3, .value=0x88, .type=IO_READ},
        {.addr=0xf2d4, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x26b9, .a=0x76, .x=0xd2, .y=0x3c, .sp=0x06, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x26b9, .value=0x88}, {.addr=0x26ba, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x26bb, .a=0x28, .x=0xd2, .y=0x3c, .sp=0x06, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x26b9, .value=0x88}, {.addr=0x26ba, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x26b9, .value=0x88, .type=IO_READ},
        {.addr=0x26ba, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x5a30, .a=0x7e, .x=0x7c, .y=0x95, .sp=0x8d, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x5a30, .value=0x88}, {.addr=0x5a31, .value=0xb7}};
    const struct CPU_State final_cpu = {.pc=0x5a32, .a=0x35, .x=0x7c, .y=0x95, .sp=0x8d, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x5a30, .value=0x88}, {.addr=0x5a31, .value=0xb7}};
    const struct BusEvent events[] = {
        {.addr=0x5a30, .value=0x88, .type=IO_READ},
        {.addr=0x5a31, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01EF) {
    const struct CPU_State initial_cpu = {.pc=0xea32, .a=0xf3, .x=0x75, .y=0xe6, .sp=0xbd, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0xea32, .value=0x88}, {.addr=0xea33, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0xea34, .a=0x48, .x=0x75, .y=0xe6, .sp=0xbd, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xea32, .value=0x88}, {.addr=0xea33, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0xea32, .value=0x88, .type=IO_READ},
        {.addr=0xea33, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x5a3f, .a=0xdc, .x=0xf1, .y=0xf0, .sp=0xa8, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x5a3f, .value=0x88}, {.addr=0x5a40, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x5a41, .a=0xb1, .x=0xf1, .y=0xf0, .sp=0xa8, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x5a3f, .value=0x88}, {.addr=0x5a40, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x5a3f, .value=0x88, .type=IO_READ},
        {.addr=0x5a40, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xca02, .a=0x66, .x=0x87, .y=0xae, .sp=0xdc, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xca02, .value=0x88}, {.addr=0xca03, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xca04, .a=0xea, .x=0x87, .y=0xae, .sp=0xdc, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xca02, .value=0x88}, {.addr=0xca03, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xca02, .value=0x88, .type=IO_READ},
        {.addr=0xca03, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xfec5, .a=0xc0, .x=0x0a, .y=0xfe, .sp=0xb6, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0xfec5, .value=0x88}, {.addr=0xfec6, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0xfec7, .a=0x0a, .x=0x0a, .y=0xfe, .sp=0xb6, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xfec5, .value=0x88}, {.addr=0xfec6, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0xfec5, .value=0x88, .type=IO_READ},
        {.addr=0xfec6, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01F3) {
    const struct CPU_State initial_cpu = {.pc=0xa7e2, .a=0x05, .x=0x7e, .y=0x26, .sp=0xfb, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xa7e2, .value=0x88}, {.addr=0xa7e3, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xa7e4, .a=0xa4, .x=0x7e, .y=0x26, .sp=0xfb, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xa7e2, .value=0x88}, {.addr=0xa7e3, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xa7e2, .value=0x88, .type=IO_READ},
        {.addr=0xa7e3, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x2b5c, .a=0x4b, .x=0x1d, .y=0x93, .sp=0xd9, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x2b5c, .value=0x88}, {.addr=0x2b5d, .value=0x86}};
    const struct CPU_State final_cpu = {.pc=0x2b5e, .a=0xd2, .x=0x1d, .y=0x93, .sp=0xd9, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x2b5c, .value=0x88}, {.addr=0x2b5d, .value=0x86}};
    const struct BusEvent events[] = {
        {.addr=0x2b5c, .value=0x88, .type=IO_READ},
        {.addr=0x2b5d, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xdec8, .a=0x57, .x=0x9b, .y=0x03, .sp=0x22, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0xdec8, .value=0x88}, {.addr=0xdec9, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xdeca, .a=0x9d, .x=0x9b, .y=0x03, .sp=0x22, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xdec8, .value=0x88}, {.addr=0xdec9, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xdec8, .value=0x88, .type=IO_READ},
        {.addr=0xdec9, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01F6) {
    const struct CPU_State initial_cpu = {.pc=0xf8ff, .a=0x65, .x=0xac, .y=0x73, .sp=0x45, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xf8ff, .value=0x88}, {.addr=0xf900, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xf901, .a=0xc8, .x=0xac, .y=0x73, .sp=0x45, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xf8ff, .value=0x88}, {.addr=0xf900, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xf8ff, .value=0x88, .type=IO_READ},
        {.addr=0xf900, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x49cd, .a=0x40, .x=0x7c, .y=0xa1, .sp=0x91, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x49cd, .value=0x88}, {.addr=0x49ce, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x49cf, .a=0x0e, .x=0x7c, .y=0xa1, .sp=0x91, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x49cd, .value=0x88}, {.addr=0x49ce, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x49cd, .value=0x88, .type=IO_READ},
        {.addr=0x49ce, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01F8) {
    const struct CPU_State initial_cpu = {.pc=0xebe6, .a=0xb2, .x=0x2f, .y=0x00, .sp=0xa3, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xebe6, .value=0x88}, {.addr=0xebe7, .value=0x88}};
    const struct CPU_State final_cpu = {.pc=0xebe8, .a=0x3b, .x=0x2f, .y=0x00, .sp=0xa3, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xebe6, .value=0x88}, {.addr=0xebe7, .value=0x88}};
    const struct BusEvent events[] = {
        {.addr=0xebe6, .value=0x88, .type=IO_READ},
        {.addr=0xebe7, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x9588, .a=0x41, .x=0xec, .y=0xd5, .sp=0xd0, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x9588, .value=0x88}, {.addr=0x9589, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x958a, .a=0x05, .x=0xec, .y=0xd5, .sp=0xd0, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x9588, .value=0x88}, {.addr=0x9589, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x9588, .value=0x88, .type=IO_READ},
        {.addr=0x9589, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01FA) {
    const struct CPU_State initial_cpu = {.pc=0x277c, .a=0xf5, .x=0x0e, .y=0xb7, .sp=0xd1, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x277c, .value=0x88}, {.addr=0x277d, .value=0xb8}};
    const struct CPU_State final_cpu = {.pc=0x277e, .a=0xad, .x=0x0e, .y=0xb7, .sp=0xd1, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x277c, .value=0x88}, {.addr=0x277d, .value=0xb8}};
    const struct BusEvent events[] = {
        {.addr=0x277c, .value=0x88, .type=IO_READ},
        {.addr=0x277d, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xd162, .a=0x0e, .x=0xad, .y=0x9f, .sp=0xe4, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xd162, .value=0x88}, {.addr=0xd163, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0xd164, .a=0x33, .x=0xad, .y=0x9f, .sp=0xe4, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xd162, .value=0x88}, {.addr=0xd163, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0xd162, .value=0x88, .type=IO_READ},
        {.addr=0xd163, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x0b5f, .a=0x15, .x=0xd7, .y=0xf7, .sp=0xca, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0b5f, .value=0x88}, {.addr=0x0b60, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x0b61, .a=0xe4, .x=0xd7, .y=0xf7, .sp=0xca, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0b5f, .value=0x88}, {.addr=0x0b60, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x0b5f, .value=0x88, .type=IO_READ},
        {.addr=0x0b60, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01FD) {
    const struct CPU_State initial_cpu = {.pc=0x5b70, .a=0xbd, .x=0xa4, .y=0x0b, .sp=0x02, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x5b70, .value=0x88}, {.addr=0x5b71, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x5b72, .a=0xf7, .x=0xa4, .y=0x0b, .sp=0x02, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x5b70, .value=0x88}, {.addr=0x5b71, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x5b70, .value=0x88, .type=IO_READ},
        {.addr=0x5b71, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x772b, .a=0x8f, .x=0x7b, .y=0x6c, .sp=0xf6, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x772b, .value=0x88}, {.addr=0x772c, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x772d, .a=0xa6, .x=0x7b, .y=0x6c, .sp=0xf6, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x772b, .value=0x88}, {.addr=0x772c, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x772b, .value=0x88, .type=IO_READ},
        {.addr=0x772c, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x51c6, .a=0xbf, .x=0x6c, .y=0xb4, .sp=0x14, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x51c6, .value=0x88}, {.addr=0x51c7, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x51c8, .a=0x2b, .x=0x6c, .y=0xb4, .sp=0x14, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x51c6, .value=0x88}, {.addr=0x51c7, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x51c6, .value=0x88, .type=IO_READ},
        {.addr=0x51c7, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0200) {
    const struct CPU_State initial_cpu = {.pc=0xc7e1, .a=0xcd, .x=0x2a, .y=0x06, .sp=0xd3, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xc7e1, .value=0x88}, {.addr=0xc7e2, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0xc7e3, .a=0x67, .x=0x2a, .y=0x06, .sp=0xd3, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xc7e1, .value=0x88}, {.addr=0xc7e2, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0xc7e1, .value=0x88, .type=IO_READ},
        {.addr=0xc7e2, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0201) {
    const struct CPU_State initial_cpu = {.pc=0x34dc, .a=0x31, .x=0xfe, .y=0x74, .sp=0xd2, .status=0xb3};
    const struct RamEntry initial_ram[] = {{.addr=0x34dc, .value=0x88}, {.addr=0x34dd, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0x34de, .a=0x9e, .x=0xfe, .y=0x74, .sp=0xd2, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x34dc, .value=0x88}, {.addr=0x34dd, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0x34dc, .value=0x88, .type=IO_READ},
        {.addr=0x34dd, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0202) {
    const struct CPU_State initial_cpu = {.pc=0x9cb7, .a=0xf8, .x=0xad, .y=0xef, .sp=0xf5, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x9cb7, .value=0x88}, {.addr=0x9cb8, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x9cb9, .a=0x2f, .x=0xad, .y=0xef, .sp=0xf5, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x9cb7, .value=0x88}, {.addr=0x9cb8, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x9cb7, .value=0x88, .type=IO_READ},
        {.addr=0x9cb8, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0203) {
    const struct CPU_State initial_cpu = {.pc=0xe85c, .a=0x7d, .x=0xa8, .y=0xfa, .sp=0x86, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xe85c, .value=0x88}, {.addr=0xe85d, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0xe85e, .a=0xe8, .x=0xa8, .y=0xfa, .sp=0x86, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0xe85c, .value=0x88}, {.addr=0xe85d, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0xe85c, .value=0x88, .type=IO_READ},
        {.addr=0xe85d, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0204) {
    const struct CPU_State initial_cpu = {.pc=0x42af, .a=0x1b, .x=0x16, .y=0x88, .sp=0x9e, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x42af, .value=0x88}, {.addr=0x42b0, .value=0xb2}};
    const struct CPU_State final_cpu = {.pc=0x42b1, .a=0xce, .x=0x16, .y=0x88, .sp=0x9e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x42af, .value=0x88}, {.addr=0x42b0, .value=0xb2}};
    const struct BusEvent events[] = {
        {.addr=0x42af, .value=0x88, .type=IO_READ},
        {.addr=0x42b0, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0205) {
    const struct CPU_State initial_cpu = {.pc=0xda39, .a=0xea, .x=0xbf, .y=0xb7, .sp=0x95, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xda39, .value=0x88}, {.addr=0xda3a, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xda3b, .a=0x05, .x=0xbf, .y=0xb7, .sp=0x95, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xda39, .value=0x88}, {.addr=0xda3a, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xda39, .value=0x88, .type=IO_READ},
        {.addr=0xda3a, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0206) {
    const struct CPU_State initial_cpu = {.pc=0xc966, .a=0xb1, .x=0x7a, .y=0x20, .sp=0x74, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xc966, .value=0x88}, {.addr=0xc967, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xc968, .a=0x16, .x=0x7a, .y=0x20, .sp=0x74, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xc966, .value=0x88}, {.addr=0xc967, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xc966, .value=0x88, .type=IO_READ},
        {.addr=0xc967, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0207) {
    const struct CPU_State initial_cpu = {.pc=0xa82c, .a=0x65, .x=0x7b, .y=0x98, .sp=0x7f, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0xa82c, .value=0x88}, {.addr=0xa82d, .value=0x35}};
    const struct CPU_State final_cpu = {.pc=0xa82e, .a=0x9b, .x=0x7b, .y=0x98, .sp=0x7f, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xa82c, .value=0x88}, {.addr=0xa82d, .value=0x35}};
    const struct BusEvent events[] = {
        {.addr=0xa82c, .value=0x88, .type=IO_READ},
        {.addr=0xa82d, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0208) {
    const struct CPU_State initial_cpu = {.pc=0x1c34, .a=0x3e, .x=0x9c, .y=0x46, .sp=0x6c, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x1c34, .value=0x88}, {.addr=0x1c35, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x1c36, .a=0x0d, .x=0x9c, .y=0x46, .sp=0x6c, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x1c34, .value=0x88}, {.addr=0x1c35, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x1c34, .value=0x88, .type=IO_READ},
        {.addr=0x1c35, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0209) {
    const struct CPU_State initial_cpu = {.pc=0x7dd7, .a=0xf7, .x=0xd9, .y=0xdb, .sp=0x70, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x7dd7, .value=0x88}, {.addr=0x7dd8, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x7dd9, .a=0x6c, .x=0xd9, .y=0xdb, .sp=0x70, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x7dd7, .value=0x88}, {.addr=0x7dd8, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x7dd7, .value=0x88, .type=IO_READ},
        {.addr=0x7dd8, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_020A) {
    const struct CPU_State initial_cpu = {.pc=0x44b3, .a=0xd5, .x=0x01, .y=0x93, .sp=0x25, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x44b3, .value=0x88}, {.addr=0x44b4, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x44b5, .a=0xdd, .x=0x01, .y=0x93, .sp=0x25, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x44b3, .value=0x88}, {.addr=0x44b4, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x44b3, .value=0x88, .type=IO_READ},
        {.addr=0x44b4, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_020B) {
    const struct CPU_State initial_cpu = {.pc=0xf8c1, .a=0xcf, .x=0xc4, .y=0x9d, .sp=0x1b, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xf8c1, .value=0x88}, {.addr=0xf8c2, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xf8c3, .a=0xf1, .x=0xc4, .y=0x9d, .sp=0x1b, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xf8c1, .value=0x88}, {.addr=0xf8c2, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xf8c1, .value=0x88, .type=IO_READ},
        {.addr=0xf8c2, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_020C) {
    const struct CPU_State initial_cpu = {.pc=0xcb4e, .a=0xfa, .x=0x55, .y=0x43, .sp=0xc7, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xcb4e, .value=0x88}, {.addr=0xcb4f, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xcb50, .a=0x68, .x=0x55, .y=0x43, .sp=0xc7, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xcb4e, .value=0x88}, {.addr=0xcb4f, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xcb4e, .value=0x88, .type=IO_READ},
        {.addr=0xcb4f, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_020D) {
    const struct CPU_State initial_cpu = {.pc=0xa265, .a=0x19, .x=0x53, .y=0x79, .sp=0x42, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xa265, .value=0x88}, {.addr=0xa266, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xa267, .a=0xb5, .x=0x53, .y=0x79, .sp=0x42, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xa265, .value=0x88}, {.addr=0xa266, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xa265, .value=0x88, .type=IO_READ},
        {.addr=0xa266, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_020E) {
    const struct CPU_State initial_cpu = {.pc=0x2505, .a=0x4d, .x=0x9a, .y=0xf6, .sp=0x39, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x2505, .value=0x88}, {.addr=0x2506, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x2507, .a=0x6f, .x=0x9a, .y=0xf6, .sp=0x39, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x2505, .value=0x88}, {.addr=0x2506, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x2505, .value=0x88, .type=IO_READ},
        {.addr=0x2506, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_020F) {
    const struct CPU_State initial_cpu = {.pc=0x935e, .a=0x54, .x=0xe5, .y=0x61, .sp=0xc6, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x935e, .value=0x88}, {.addr=0x935f, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x9360, .a=0xfe, .x=0xe5, .y=0x61, .sp=0xc6, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x935e, .value=0x88}, {.addr=0x935f, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x935e, .value=0x88, .type=IO_READ},
        {.addr=0x935f, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0210) {
    const struct CPU_State initial_cpu = {.pc=0x77c4, .a=0x4f, .x=0x9a, .y=0x75, .sp=0x5d, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x77c4, .value=0x88}, {.addr=0x77c5, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x77c6, .a=0x14, .x=0x9a, .y=0x75, .sp=0x5d, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x77c4, .value=0x88}, {.addr=0x77c5, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x77c4, .value=0x88, .type=IO_READ},
        {.addr=0x77c5, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0211) {
    const struct CPU_State initial_cpu = {.pc=0xc4fa, .a=0x97, .x=0xb1, .y=0x38, .sp=0x52, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xc4fa, .value=0x88}, {.addr=0xc4fb, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0xc4fc, .a=0xba, .x=0xb1, .y=0x38, .sp=0x52, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xc4fa, .value=0x88}, {.addr=0xc4fb, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0xc4fa, .value=0x88, .type=IO_READ},
        {.addr=0xc4fb, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0212) {
    const struct CPU_State initial_cpu = {.pc=0x7bdd, .a=0x10, .x=0xd2, .y=0x82, .sp=0x6e, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x7bdd, .value=0x88}, {.addr=0x7bde, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0x7bdf, .a=0xcf, .x=0xd2, .y=0x82, .sp=0x6e, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x7bdd, .value=0x88}, {.addr=0x7bde, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0x7bdd, .value=0x88, .type=IO_READ},
        {.addr=0x7bde, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0213) {
    const struct CPU_State initial_cpu = {.pc=0x89df, .a=0xed, .x=0x9a, .y=0x44, .sp=0x60, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x89df, .value=0x88}, {.addr=0x89e0, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x89e1, .a=0x7f, .x=0x9a, .y=0x44, .sp=0x60, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x89df, .value=0x88}, {.addr=0x89e0, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x89df, .value=0x88, .type=IO_READ},
        {.addr=0x89e0, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0214) {
    const struct CPU_State initial_cpu = {.pc=0x2ec8, .a=0xb2, .x=0x23, .y=0x4f, .sp=0x3f, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x2ec8, .value=0x88}, {.addr=0x2ec9, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x2eca, .a=0x82, .x=0x23, .y=0x4f, .sp=0x3f, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x2ec8, .value=0x88}, {.addr=0x2ec9, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x2ec8, .value=0x88, .type=IO_READ},
        {.addr=0x2ec9, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0215) {
    const struct CPU_State initial_cpu = {.pc=0x2fae, .a=0xd9, .x=0x15, .y=0xae, .sp=0x2c, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x2fae, .value=0x88}, {.addr=0x2faf, .value=0x64}};
    const struct CPU_State final_cpu = {.pc=0x2fb0, .a=0x3e, .x=0x15, .y=0xae, .sp=0x2c, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x2fae, .value=0x88}, {.addr=0x2faf, .value=0x64}};
    const struct BusEvent events[] = {
        {.addr=0x2fae, .value=0x88, .type=IO_READ},
        {.addr=0x2faf, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0216) {
    const struct CPU_State initial_cpu = {.pc=0x1f32, .a=0xb9, .x=0xa7, .y=0xd0, .sp=0x5a, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x1f32, .value=0x88}, {.addr=0x1f33, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x1f34, .a=0xbc, .x=0xa7, .y=0xd0, .sp=0x5a, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x1f32, .value=0x88}, {.addr=0x1f33, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x1f32, .value=0x88, .type=IO_READ},
        {.addr=0x1f33, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0217) {
    const struct CPU_State initial_cpu = {.pc=0x5c6a, .a=0x56, .x=0x14, .y=0xad, .sp=0x2c, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x5c6a, .value=0x88}, {.addr=0x5c6b, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0x5c6c, .a=0x07, .x=0x14, .y=0xad, .sp=0x2c, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x5c6a, .value=0x88}, {.addr=0x5c6b, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0x5c6a, .value=0x88, .type=IO_READ},
        {.addr=0x5c6b, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0218) {
    const struct CPU_State initial_cpu = {.pc=0xb5b4, .a=0x58, .x=0x70, .y=0x3c, .sp=0x52, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xb5b4, .value=0x88}, {.addr=0xb5b5, .value=0x76}};
    const struct CPU_State final_cpu = {.pc=0xb5b6, .a=0xcf, .x=0x70, .y=0x3c, .sp=0x52, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xb5b4, .value=0x88}, {.addr=0xb5b5, .value=0x76}};
    const struct BusEvent events[] = {
        {.addr=0xb5b4, .value=0x88, .type=IO_READ},
        {.addr=0xb5b5, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0219) {
    const struct CPU_State initial_cpu = {.pc=0xe06c, .a=0x45, .x=0x7d, .y=0xa0, .sp=0xb1, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0xe06c, .value=0x88}, {.addr=0xe06d, .value=0xd2}};
    const struct CPU_State final_cpu = {.pc=0xe06e, .a=0x18, .x=0x7d, .y=0xa0, .sp=0xb1, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xe06c, .value=0x88}, {.addr=0xe06d, .value=0xd2}};
    const struct BusEvent events[] = {
        {.addr=0xe06c, .value=0x88, .type=IO_READ},
        {.addr=0xe06d, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_021A) {
    const struct CPU_State initial_cpu = {.pc=0xf2b5, .a=0x64, .x=0x00, .y=0xbb, .sp=0xe5, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0xf2b5, .value=0x88}, {.addr=0xf2b6, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xf2b7, .a=0x21, .x=0x00, .y=0xbb, .sp=0xe5, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xf2b5, .value=0x88}, {.addr=0xf2b6, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xf2b5, .value=0x88, .type=IO_READ},
        {.addr=0xf2b6, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_021B) {
    const struct CPU_State initial_cpu = {.pc=0x8e44, .a=0x59, .x=0xb9, .y=0x43, .sp=0xf3, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x8e44, .value=0x88}, {.addr=0x8e45, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x8e46, .a=0xd6, .x=0xb9, .y=0x43, .sp=0xf3, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x8e44, .value=0x88}, {.addr=0x8e45, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x8e44, .value=0x88, .type=IO_READ},
        {.addr=0x8e45, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_021C) {
    const struct CPU_State initial_cpu = {.pc=0x08eb, .a=0x62, .x=0x65, .y=0x09, .sp=0x60, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x08eb, .value=0x88}, {.addr=0x08ec, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x08ed, .a=0xbc, .x=0x65, .y=0x09, .sp=0x60, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x08eb, .value=0x88}, {.addr=0x08ec, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x08eb, .value=0x88, .type=IO_READ},
        {.addr=0x08ec, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_021D) {
    const struct CPU_State initial_cpu = {.pc=0xfbaf, .a=0x7e, .x=0x18, .y=0xa6, .sp=0x1d, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0xfbaf, .value=0x88}, {.addr=0xfbb0, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xfbb1, .a=0x6c, .x=0x18, .y=0xa6, .sp=0x1d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xfbaf, .value=0x88}, {.addr=0xfbb0, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xfbaf, .value=0x88, .type=IO_READ},
        {.addr=0xfbb0, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_021E) {
    const struct CPU_State initial_cpu = {.pc=0xe8cf, .a=0x9d, .x=0xaf, .y=0x5c, .sp=0x06, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0xe8cf, .value=0x88}, {.addr=0xe8d0, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0xe8d1, .a=0xd8, .x=0xaf, .y=0x5c, .sp=0x06, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xe8cf, .value=0x88}, {.addr=0xe8d0, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0xe8cf, .value=0x88, .type=IO_READ},
        {.addr=0xe8d0, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_021F) {
    const struct CPU_State initial_cpu = {.pc=0x25be, .a=0x17, .x=0x26, .y=0x27, .sp=0xa0, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x25be, .value=0x88}, {.addr=0x25bf, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x25c0, .a=0x31, .x=0x26, .y=0x27, .sp=0xa0, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x25be, .value=0x88}, {.addr=0x25bf, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x25be, .value=0x88, .type=IO_READ},
        {.addr=0x25bf, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0220) {
    const struct CPU_State initial_cpu = {.pc=0xd39d, .a=0x39, .x=0x7b, .y=0xa2, .sp=0x83, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xd39d, .value=0x88}, {.addr=0xd39e, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xd39f, .a=0x44, .x=0x7b, .y=0xa2, .sp=0x83, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0xd39d, .value=0x88}, {.addr=0xd39e, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xd39d, .value=0x88, .type=IO_READ},
        {.addr=0xd39e, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0221) {
    const struct CPU_State initial_cpu = {.pc=0x5a4f, .a=0x2f, .x=0x33, .y=0x26, .sp=0xab, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x5a4f, .value=0x88}, {.addr=0x5a50, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0x5a51, .a=0x71, .x=0x33, .y=0x26, .sp=0xab, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x5a4f, .value=0x88}, {.addr=0x5a50, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0x5a4f, .value=0x88, .type=IO_READ},
        {.addr=0x5a50, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0222) {
    const struct CPU_State initial_cpu = {.pc=0x2bde, .a=0xb8, .x=0x4a, .y=0x7c, .sp=0x15, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x2bde, .value=0x88}, {.addr=0x2bdf, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0x2be0, .a=0xe6, .x=0x4a, .y=0x7c, .sp=0x15, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x2bde, .value=0x88}, {.addr=0x2bdf, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0x2bde, .value=0x88, .type=IO_READ},
        {.addr=0x2bdf, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0223) {
    const struct CPU_State initial_cpu = {.pc=0xadfd, .a=0xe8, .x=0x2a, .y=0xe2, .sp=0x33, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0xadfd, .value=0x88}, {.addr=0xadfe, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xadff, .a=0x0c, .x=0x2a, .y=0xe2, .sp=0x33, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xadfd, .value=0x88}, {.addr=0xadfe, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xadfd, .value=0x88, .type=IO_READ},
        {.addr=0xadfe, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0224) {
    const struct CPU_State initial_cpu = {.pc=0x5236, .a=0x10, .x=0x56, .y=0x9e, .sp=0xa4, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x5236, .value=0x88}, {.addr=0x5237, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x5238, .a=0x34, .x=0x56, .y=0x9e, .sp=0xa4, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x5236, .value=0x88}, {.addr=0x5237, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x5236, .value=0x88, .type=IO_READ},
        {.addr=0x5237, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0225) {
    const struct CPU_State initial_cpu = {.pc=0x14cb, .a=0x9b, .x=0x10, .y=0x46, .sp=0x20, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x14cb, .value=0x88}, {.addr=0x14cc, .value=0x0f}};
    const struct CPU_State final_cpu = {.pc=0x14cd, .a=0xaa, .x=0x10, .y=0x46, .sp=0x20, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x14cb, .value=0x88}, {.addr=0x14cc, .value=0x0f}};
    const struct BusEvent events[] = {
        {.addr=0x14cb, .value=0x88, .type=IO_READ},
        {.addr=0x14cc, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0226) {
    const struct CPU_State initial_cpu = {.pc=0x8c53, .a=0xdd, .x=0x96, .y=0x90, .sp=0x86, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x8c53, .value=0x88}, {.addr=0x8c54, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8c55, .a=0x2a, .x=0x96, .y=0x90, .sp=0x86, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x8c53, .value=0x88}, {.addr=0x8c54, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8c53, .value=0x88, .type=IO_READ},
        {.addr=0x8c54, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0227) {
    const struct CPU_State initial_cpu = {.pc=0xe52c, .a=0x0f, .x=0xfa, .y=0x7b, .sp=0x67, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0xe52c, .value=0x88}, {.addr=0xe52d, .value=0x0a}};
    const struct CPU_State final_cpu = {.pc=0xe52e, .a=0x1a, .x=0xfa, .y=0x7b, .sp=0x67, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0xe52c, .value=0x88}, {.addr=0xe52d, .value=0x0a}};
    const struct BusEvent events[] = {
        {.addr=0xe52c, .value=0x88, .type=IO_READ},
        {.addr=0xe52d, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0228) {
    const struct CPU_State initial_cpu = {.pc=0x0aec, .a=0xee, .x=0xa2, .y=0x53, .sp=0xde, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0aec, .value=0x88}, {.addr=0x0aed, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x0aee, .a=0x89, .x=0xa2, .y=0x53, .sp=0xde, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x0aec, .value=0x88}, {.addr=0x0aed, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x0aec, .value=0x88, .type=IO_READ},
        {.addr=0x0aed, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0229) {
    const struct CPU_State initial_cpu = {.pc=0xc961, .a=0x34, .x=0xfa, .y=0x8a, .sp=0xad, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0xc961, .value=0x88}, {.addr=0xc962, .value=0x24}};
    const struct CPU_State final_cpu = {.pc=0xc963, .a=0x59, .x=0xfa, .y=0x8a, .sp=0xad, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xc961, .value=0x88}, {.addr=0xc962, .value=0x24}};
    const struct BusEvent events[] = {
        {.addr=0xc961, .value=0x88, .type=IO_READ},
        {.addr=0xc962, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_022A) {
    const struct CPU_State initial_cpu = {.pc=0x26d5, .a=0xb4, .x=0x0e, .y=0x44, .sp=0x0c, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x26d5, .value=0x88}, {.addr=0x26d6, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0x26d7, .a=0xb8, .x=0x0e, .y=0x44, .sp=0x0c, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x26d5, .value=0x88}, {.addr=0x26d6, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0x26d5, .value=0x88, .type=IO_READ},
        {.addr=0x26d6, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_022B) {
    const struct CPU_State initial_cpu = {.pc=0xbae9, .a=0x92, .x=0x57, .y=0xe3, .sp=0x9c, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0xbae9, .value=0x88}, {.addr=0xbaea, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xbaeb, .a=0xa7, .x=0x57, .y=0xe3, .sp=0x9c, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xbae9, .value=0x88}, {.addr=0xbaea, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xbae9, .value=0x88, .type=IO_READ},
        {.addr=0xbaea, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_022C) {
    const struct CPU_State initial_cpu = {.pc=0x556a, .a=0x49, .x=0x48, .y=0x7e, .sp=0x9f, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x556a, .value=0x88}, {.addr=0x556b, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x556c, .a=0x8e, .x=0x48, .y=0x7e, .sp=0x9f, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x556a, .value=0x88}, {.addr=0x556b, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x556a, .value=0x88, .type=IO_READ},
        {.addr=0x556b, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_022D) {
    const struct CPU_State initial_cpu = {.pc=0x8d7e, .a=0x1a, .x=0x7f, .y=0x59, .sp=0xfe, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x8d7e, .value=0x88}, {.addr=0x8d7f, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x8d80, .a=0xc0, .x=0x7f, .y=0x59, .sp=0xfe, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x8d7e, .value=0x88}, {.addr=0x8d7f, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x8d7e, .value=0x88, .type=IO_READ},
        {.addr=0x8d7f, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_022E) {
    const struct CPU_State initial_cpu = {.pc=0x4abb, .a=0x26, .x=0x6c, .y=0x57, .sp=0x70, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x4abb, .value=0x88}, {.addr=0x4abc, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x4abd, .a=0xd1, .x=0x6c, .y=0x57, .sp=0x70, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x4abb, .value=0x88}, {.addr=0x4abc, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x4abb, .value=0x88, .type=IO_READ},
        {.addr=0x4abc, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_022F) {
    const struct CPU_State initial_cpu = {.pc=0xb740, .a=0x5f, .x=0xb6, .y=0x6e, .sp=0x4b, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0xb740, .value=0x88}, {.addr=0xb741, .value=0x8b}};
    const struct CPU_State final_cpu = {.pc=0xb742, .a=0xea, .x=0xb6, .y=0x6e, .sp=0x4b, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xb740, .value=0x88}, {.addr=0xb741, .value=0x8b}};
    const struct BusEvent events[] = {
        {.addr=0xb740, .value=0x88, .type=IO_READ},
        {.addr=0xb741, .value=0x8b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0230) {
    const struct CPU_State initial_cpu = {.pc=0x0c45, .a=0xb9, .x=0x49, .y=0x06, .sp=0x23, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x0c45, .value=0x88}, {.addr=0x0c46, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x0c47, .a=0x1a, .x=0x49, .y=0x06, .sp=0x23, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0c45, .value=0x88}, {.addr=0x0c46, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x0c45, .value=0x88, .type=IO_READ},
        {.addr=0x0c46, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0231) {
    const struct CPU_State initial_cpu = {.pc=0xf1c6, .a=0xbb, .x=0x4f, .y=0x3a, .sp=0x06, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xf1c6, .value=0x88}, {.addr=0xf1c7, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xf1c8, .a=0xe6, .x=0x4f, .y=0x3a, .sp=0x06, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xf1c6, .value=0x88}, {.addr=0xf1c7, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xf1c6, .value=0x88, .type=IO_READ},
        {.addr=0xf1c7, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0232) {
    const struct CPU_State initial_cpu = {.pc=0xc8b3, .a=0xb4, .x=0xd6, .y=0xeb, .sp=0x8d, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0xc8b3, .value=0x88}, {.addr=0xc8b4, .value=0xa2}};
    const struct CPU_State final_cpu = {.pc=0xc8b5, .a=0x56, .x=0xd6, .y=0xeb, .sp=0x8d, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xc8b3, .value=0x88}, {.addr=0xc8b4, .value=0xa2}};
    const struct BusEvent events[] = {
        {.addr=0xc8b3, .value=0x88, .type=IO_READ},
        {.addr=0xc8b4, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0233) {
    const struct CPU_State initial_cpu = {.pc=0x30db, .a=0xd0, .x=0xe4, .y=0xf9, .sp=0x88, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x30db, .value=0x88}, {.addr=0x30dc, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0x30dd, .a=0xa7, .x=0xe4, .y=0xf9, .sp=0x88, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x30db, .value=0x88}, {.addr=0x30dc, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0x30db, .value=0x88, .type=IO_READ},
        {.addr=0x30dc, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0234) {
    const struct CPU_State initial_cpu = {.pc=0xc966, .a=0xa4, .x=0x5e, .y=0x73, .sp=0x6a, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xc966, .value=0x88}, {.addr=0xc967, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xc968, .a=0xcb, .x=0x5e, .y=0x73, .sp=0x6a, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xc966, .value=0x88}, {.addr=0xc967, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xc966, .value=0x88, .type=IO_READ},
        {.addr=0xc967, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0235) {
    const struct CPU_State initial_cpu = {.pc=0x11cd, .a=0x7f, .x=0x45, .y=0x63, .sp=0x7c, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x11cd, .value=0x88}, {.addr=0x11ce, .value=0xe1}};
    const struct CPU_State final_cpu = {.pc=0x11cf, .a=0x60, .x=0x45, .y=0x63, .sp=0x7c, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x11cd, .value=0x88}, {.addr=0x11ce, .value=0xe1}};
    const struct BusEvent events[] = {
        {.addr=0x11cd, .value=0x88, .type=IO_READ},
        {.addr=0x11ce, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0236) {
    const struct CPU_State initial_cpu = {.pc=0x525f, .a=0xdd, .x=0xa8, .y=0x21, .sp=0xc5, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x525f, .value=0x88}, {.addr=0x5260, .value=0x22}};
    const struct CPU_State final_cpu = {.pc=0x5261, .a=0x00, .x=0xa8, .y=0x21, .sp=0xc5, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x525f, .value=0x88}, {.addr=0x5260, .value=0x22}};
    const struct BusEvent events[] = {
        {.addr=0x525f, .value=0x88, .type=IO_READ},
        {.addr=0x5260, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0237) {
    const struct CPU_State initial_cpu = {.pc=0x80f0, .a=0x4c, .x=0x9d, .y=0xe9, .sp=0x58, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x80f0, .value=0x88}, {.addr=0x80f1, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x80f2, .a=0xdb, .x=0x9d, .y=0xe9, .sp=0x58, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x80f0, .value=0x88}, {.addr=0x80f1, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x80f0, .value=0x88, .type=IO_READ},
        {.addr=0x80f1, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0238) {
    const struct CPU_State initial_cpu = {.pc=0x0260, .a=0x32, .x=0x9f, .y=0xa1, .sp=0x73, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0260, .value=0x88}, {.addr=0x0261, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0262, .a=0x6f, .x=0x9f, .y=0xa1, .sp=0x73, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0260, .value=0x88}, {.addr=0x0261, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0260, .value=0x88, .type=IO_READ},
        {.addr=0x0261, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0239) {
    const struct CPU_State initial_cpu = {.pc=0x8b5a, .a=0x1f, .x=0x9b, .y=0x97, .sp=0xd3, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x8b5a, .value=0x88}, {.addr=0x8b5b, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0x8b5c, .a=0x63, .x=0x9b, .y=0x97, .sp=0xd3, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x8b5a, .value=0x88}, {.addr=0x8b5b, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0x8b5a, .value=0x88, .type=IO_READ},
        {.addr=0x8b5b, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_023A) {
    const struct CPU_State initial_cpu = {.pc=0xaddc, .a=0xc3, .x=0xa4, .y=0x47, .sp=0xf9, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xaddc, .value=0x88}, {.addr=0xaddd, .value=0x5b}};
    const struct CPU_State final_cpu = {.pc=0xadde, .a=0x1f, .x=0xa4, .y=0x47, .sp=0xf9, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xaddc, .value=0x88}, {.addr=0xaddd, .value=0x5b}};
    const struct BusEvent events[] = {
        {.addr=0xaddc, .value=0x88, .type=IO_READ},
        {.addr=0xaddd, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_023B) {
    const struct CPU_State initial_cpu = {.pc=0x940d, .a=0x13, .x=0x9b, .y=0x83, .sp=0xf2, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x940d, .value=0x88}, {.addr=0x940e, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x940f, .a=0xad, .x=0x9b, .y=0x83, .sp=0xf2, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x940d, .value=0x88}, {.addr=0x940e, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x940d, .value=0x88, .type=IO_READ},
        {.addr=0x940e, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_023C) {
    const struct CPU_State initial_cpu = {.pc=0x4d56, .a=0xf5, .x=0x9c, .y=0x23, .sp=0xab, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x4d56, .value=0x88}, {.addr=0x4d57, .value=0x55}};
    const struct CPU_State final_cpu = {.pc=0x4d58, .a=0x4a, .x=0x9c, .y=0x23, .sp=0xab, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x4d56, .value=0x88}, {.addr=0x4d57, .value=0x55}};
    const struct BusEvent events[] = {
        {.addr=0x4d56, .value=0x88, .type=IO_READ},
        {.addr=0x4d57, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_023D) {
    const struct CPU_State initial_cpu = {.pc=0xd35d, .a=0x73, .x=0x27, .y=0x81, .sp=0x38, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xd35d, .value=0x88}, {.addr=0xd35e, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xd35f, .a=0x7b, .x=0x27, .y=0x81, .sp=0x38, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xd35d, .value=0x88}, {.addr=0xd35e, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xd35d, .value=0x88, .type=IO_READ},
        {.addr=0xd35e, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_023E) {
    const struct CPU_State initial_cpu = {.pc=0xe302, .a=0x35, .x=0xad, .y=0x0e, .sp=0xcd, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xe302, .value=0x88}, {.addr=0xe303, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xe304, .a=0x85, .x=0xad, .y=0x0e, .sp=0xcd, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0xe302, .value=0x88}, {.addr=0xe303, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xe302, .value=0x88, .type=IO_READ},
        {.addr=0xe303, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_023F) {
    const struct CPU_State initial_cpu = {.pc=0xe221, .a=0xd5, .x=0xdf, .y=0x06, .sp=0x66, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xe221, .value=0x88}, {.addr=0xe222, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0xe223, .a=0xc2, .x=0xdf, .y=0x06, .sp=0x66, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xe221, .value=0x88}, {.addr=0xe222, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0xe221, .value=0x88, .type=IO_READ},
        {.addr=0xe222, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0240) {
    const struct CPU_State initial_cpu = {.pc=0xfe5c, .a=0xb5, .x=0xd6, .y=0xcc, .sp=0xa4, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0xfe5c, .value=0x88}, {.addr=0xfe5d, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xfe5e, .a=0x9d, .x=0xd6, .y=0xcc, .sp=0xa4, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xfe5c, .value=0x88}, {.addr=0xfe5d, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xfe5c, .value=0x88, .type=IO_READ},
        {.addr=0xfe5d, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0241) {
    const struct CPU_State initial_cpu = {.pc=0x9af7, .a=0x7d, .x=0xe4, .y=0x4e, .sp=0x9c, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x9af7, .value=0x88}, {.addr=0x9af8, .value=0x85}};
    const struct CPU_State final_cpu = {.pc=0x9af9, .a=0x02, .x=0xe4, .y=0x4e, .sp=0x9c, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x9af7, .value=0x88}, {.addr=0x9af8, .value=0x85}};
    const struct BusEvent events[] = {
        {.addr=0x9af7, .value=0x88, .type=IO_READ},
        {.addr=0x9af8, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0242) {
    const struct CPU_State initial_cpu = {.pc=0x7207, .a=0xbd, .x=0x5e, .y=0x38, .sp=0xb9, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x7207, .value=0x88}, {.addr=0x7208, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x7209, .a=0x9b, .x=0x5e, .y=0x38, .sp=0xb9, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x7207, .value=0x88}, {.addr=0x7208, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x7207, .value=0x88, .type=IO_READ},
        {.addr=0x7208, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0243) {
    const struct CPU_State initial_cpu = {.pc=0x8d51, .a=0x7b, .x=0x98, .y=0x83, .sp=0x01, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x8d51, .value=0x88}, {.addr=0x8d52, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0x8d53, .a=0xd2, .x=0x98, .y=0x83, .sp=0x01, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x8d51, .value=0x88}, {.addr=0x8d52, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0x8d51, .value=0x88, .type=IO_READ},
        {.addr=0x8d52, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0244) {
    const struct CPU_State initial_cpu = {.pc=0x3ead, .a=0xe9, .x=0x70, .y=0xdd, .sp=0x3e, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x3ead, .value=0x88}, {.addr=0x3eae, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0x3eaf, .a=0x64, .x=0x70, .y=0xdd, .sp=0x3e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x3ead, .value=0x88}, {.addr=0x3eae, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0x3ead, .value=0x88, .type=IO_READ},
        {.addr=0x3eae, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0245) {
    const struct CPU_State initial_cpu = {.pc=0x2911, .a=0x02, .x=0x68, .y=0xbc, .sp=0x12, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x2911, .value=0x88}, {.addr=0x2912, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x2913, .a=0x36, .x=0x68, .y=0xbc, .sp=0x12, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x2911, .value=0x88}, {.addr=0x2912, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x2911, .value=0x88, .type=IO_READ},
        {.addr=0x2912, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0246) {
    const struct CPU_State initial_cpu = {.pc=0x313d, .a=0xad, .x=0xca, .y=0xd2, .sp=0x0d, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x313d, .value=0x88}, {.addr=0x313e, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0x313f, .a=0x57, .x=0xca, .y=0xd2, .sp=0x0d, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x313d, .value=0x88}, {.addr=0x313e, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0x313d, .value=0x88, .type=IO_READ},
        {.addr=0x313e, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0247) {
    const struct CPU_State initial_cpu = {.pc=0xba55, .a=0x42, .x=0x83, .y=0x8e, .sp=0x83, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xba55, .value=0x88}, {.addr=0xba56, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xba57, .a=0xa4, .x=0x83, .y=0x8e, .sp=0x83, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xba55, .value=0x88}, {.addr=0xba56, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xba55, .value=0x88, .type=IO_READ},
        {.addr=0xba56, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0248) {
    const struct CPU_State initial_cpu = {.pc=0x912d, .a=0xeb, .x=0xcf, .y=0xbb, .sp=0x01, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x912d, .value=0x88}, {.addr=0x912e, .value=0x58}};
    const struct CPU_State final_cpu = {.pc=0x912f, .a=0x43, .x=0xcf, .y=0xbb, .sp=0x01, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x912d, .value=0x88}, {.addr=0x912e, .value=0x58}};
    const struct BusEvent events[] = {
        {.addr=0x912d, .value=0x88, .type=IO_READ},
        {.addr=0x912e, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0249) {
    const struct CPU_State initial_cpu = {.pc=0x3869, .a=0xc0, .x=0xe3, .y=0x97, .sp=0x6e, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x3869, .value=0x88}, {.addr=0x386a, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x386b, .a=0x87, .x=0xe3, .y=0x97, .sp=0x6e, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x3869, .value=0x88}, {.addr=0x386a, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x3869, .value=0x88, .type=IO_READ},
        {.addr=0x386a, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_024A) {
    const struct CPU_State initial_cpu = {.pc=0x0587, .a=0x76, .x=0xce, .y=0x32, .sp=0xf8, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x0587, .value=0x88}, {.addr=0x0588, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x0589, .a=0xf7, .x=0xce, .y=0x32, .sp=0xf8, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0587, .value=0x88}, {.addr=0x0588, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x0587, .value=0x88, .type=IO_READ},
        {.addr=0x0588, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_024B) {
    const struct CPU_State initial_cpu = {.pc=0xacb5, .a=0xa2, .x=0x22, .y=0xef, .sp=0xee, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0xacb5, .value=0x88}, {.addr=0xacb6, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0xacb7, .a=0xcf, .x=0x22, .y=0xef, .sp=0xee, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xacb5, .value=0x88}, {.addr=0xacb6, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0xacb5, .value=0x88, .type=IO_READ},
        {.addr=0xacb6, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_024C) {
    const struct CPU_State initial_cpu = {.pc=0xbfb5, .a=0x66, .x=0x2d, .y=0x7e, .sp=0x4e, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0xbfb5, .value=0x88}, {.addr=0xbfb6, .value=0x27}};
    const struct CPU_State final_cpu = {.pc=0xbfb7, .a=0x8d, .x=0x2d, .y=0x7e, .sp=0x4e, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xbfb5, .value=0x88}, {.addr=0xbfb6, .value=0x27}};
    const struct BusEvent events[] = {
        {.addr=0xbfb5, .value=0x88, .type=IO_READ},
        {.addr=0xbfb6, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_024D) {
    const struct CPU_State initial_cpu = {.pc=0x6e2b, .a=0xdc, .x=0xfd, .y=0x4b, .sp=0x84, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x6e2b, .value=0x88}, {.addr=0x6e2c, .value=0xdb}};
    const struct CPU_State final_cpu = {.pc=0x6e2d, .a=0xb7, .x=0xfd, .y=0x4b, .sp=0x84, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x6e2b, .value=0x88}, {.addr=0x6e2c, .value=0xdb}};
    const struct BusEvent events[] = {
        {.addr=0x6e2b, .value=0x88, .type=IO_READ},
        {.addr=0x6e2c, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_024E) {
    const struct CPU_State initial_cpu = {.pc=0x8776, .a=0xa7, .x=0x08, .y=0x5f, .sp=0xbf, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0x8776, .value=0x88}, {.addr=0x8777, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0x8778, .a=0x1b, .x=0x08, .y=0x5f, .sp=0xbf, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x8776, .value=0x88}, {.addr=0x8777, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0x8776, .value=0x88, .type=IO_READ},
        {.addr=0x8777, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_024F) {
    const struct CPU_State initial_cpu = {.pc=0xa4c3, .a=0xc9, .x=0x01, .y=0xd3, .sp=0xa9, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0xa4c3, .value=0x88}, {.addr=0xa4c4, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0xa4c5, .a=0x1d, .x=0x01, .y=0xd3, .sp=0xa9, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0xa4c3, .value=0x88}, {.addr=0xa4c4, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0xa4c3, .value=0x88, .type=IO_READ},
        {.addr=0xa4c4, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0250) {
    const struct CPU_State initial_cpu = {.pc=0x4ed1, .a=0x55, .x=0x68, .y=0x4a, .sp=0x08, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x4ed1, .value=0x88}, {.addr=0x4ed2, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0x4ed3, .a=0x29, .x=0x68, .y=0x4a, .sp=0x08, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x4ed1, .value=0x88}, {.addr=0x4ed2, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0x4ed1, .value=0x88, .type=IO_READ},
        {.addr=0x4ed2, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0251) {
    const struct CPU_State initial_cpu = {.pc=0x674d, .a=0x90, .x=0x13, .y=0xcb, .sp=0xfa, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x674d, .value=0x88}, {.addr=0x674e, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0x674f, .a=0x21, .x=0x13, .y=0xcb, .sp=0xfa, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x674d, .value=0x88}, {.addr=0x674e, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0x674d, .value=0x88, .type=IO_READ},
        {.addr=0x674e, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0252) {
    const struct CPU_State initial_cpu = {.pc=0x9f31, .a=0x68, .x=0xcc, .y=0x5e, .sp=0x08, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x9f31, .value=0x88}, {.addr=0x9f32, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x9f33, .a=0x1c, .x=0xcc, .y=0x5e, .sp=0x08, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9f31, .value=0x88}, {.addr=0x9f32, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x9f31, .value=0x88, .type=IO_READ},
        {.addr=0x9f32, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0253) {
    const struct CPU_State initial_cpu = {.pc=0xca35, .a=0xf7, .x=0x04, .y=0x9d, .sp=0x4d, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0xca35, .value=0x88}, {.addr=0xca36, .value=0x91}};
    const struct CPU_State final_cpu = {.pc=0xca37, .a=0x89, .x=0x04, .y=0x9d, .sp=0x4d, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0xca35, .value=0x88}, {.addr=0xca36, .value=0x91}};
    const struct BusEvent events[] = {
        {.addr=0xca35, .value=0x88, .type=IO_READ},
        {.addr=0xca36, .value=0x91, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0254) {
    const struct CPU_State initial_cpu = {.pc=0xbd56, .a=0x13, .x=0x36, .y=0x0d, .sp=0xa1, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0xbd56, .value=0x88}, {.addr=0xbd57, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xbd58, .a=0xba, .x=0x36, .y=0x0d, .sp=0xa1, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xbd56, .value=0x88}, {.addr=0xbd57, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xbd56, .value=0x88, .type=IO_READ},
        {.addr=0xbd57, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0255) {
    const struct CPU_State initial_cpu = {.pc=0xf098, .a=0xe0, .x=0x0c, .y=0x05, .sp=0xb1, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0xf098, .value=0x88}, {.addr=0xf099, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0xf09a, .a=0x41, .x=0x0c, .y=0x05, .sp=0xb1, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xf098, .value=0x88}, {.addr=0xf099, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0xf098, .value=0x88, .type=IO_READ},
        {.addr=0xf099, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0256) {
    const struct CPU_State initial_cpu = {.pc=0x6334, .a=0xff, .x=0xec, .y=0xa4, .sp=0xca, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x6334, .value=0x88}, {.addr=0x6335, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0x6336, .a=0x2a, .x=0xec, .y=0xa4, .sp=0xca, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x6334, .value=0x88}, {.addr=0x6335, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0x6334, .value=0x88, .type=IO_READ},
        {.addr=0x6335, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0257) {
    const struct CPU_State initial_cpu = {.pc=0xd0bf, .a=0x63, .x=0x5c, .y=0x41, .sp=0x3b, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0xd0bf, .value=0x88}, {.addr=0xd0c0, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0xd0c1, .a=0xbd, .x=0x5c, .y=0x41, .sp=0x3b, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0xd0bf, .value=0x88}, {.addr=0xd0c0, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0xd0bf, .value=0x88, .type=IO_READ},
        {.addr=0xd0c0, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0258) {
    const struct CPU_State initial_cpu = {.pc=0xce6d, .a=0xef, .x=0xb5, .y=0x3c, .sp=0x53, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xce6d, .value=0x88}, {.addr=0xce6e, .value=0xdf}};
    const struct CPU_State final_cpu = {.pc=0xce6f, .a=0xcf, .x=0xb5, .y=0x3c, .sp=0x53, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xce6d, .value=0x88}, {.addr=0xce6e, .value=0xdf}};
    const struct BusEvent events[] = {
        {.addr=0xce6d, .value=0x88, .type=IO_READ},
        {.addr=0xce6e, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0259) {
    const struct CPU_State initial_cpu = {.pc=0xe65f, .a=0xe9, .x=0x6e, .y=0xf2, .sp=0xa8, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xe65f, .value=0x88}, {.addr=0xe660, .value=0xaa}};
    const struct CPU_State final_cpu = {.pc=0xe661, .a=0x93, .x=0x6e, .y=0xf2, .sp=0xa8, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xe65f, .value=0x88}, {.addr=0xe660, .value=0xaa}};
    const struct BusEvent events[] = {
        {.addr=0xe65f, .value=0x88, .type=IO_READ},
        {.addr=0xe660, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_025A) {
    const struct CPU_State initial_cpu = {.pc=0x5766, .a=0x68, .x=0x1c, .y=0xc2, .sp=0xe4, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x5766, .value=0x88}, {.addr=0x5767, .value=0xc1}};
    const struct CPU_State final_cpu = {.pc=0x5768, .a=0x29, .x=0x1c, .y=0xc2, .sp=0xe4, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x5766, .value=0x88}, {.addr=0x5767, .value=0xc1}};
    const struct BusEvent events[] = {
        {.addr=0x5766, .value=0x88, .type=IO_READ},
        {.addr=0x5767, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_025B) {
    const struct CPU_State initial_cpu = {.pc=0xdf1f, .a=0x23, .x=0x2f, .y=0x5e, .sp=0x31, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xdf1f, .value=0x88}, {.addr=0xdf20, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0xdf21, .a=0xd7, .x=0x2f, .y=0x5e, .sp=0x31, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xdf1f, .value=0x88}, {.addr=0xdf20, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0xdf1f, .value=0x88, .type=IO_READ},
        {.addr=0xdf20, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_025C) {
    const struct CPU_State initial_cpu = {.pc=0x223d, .a=0x1e, .x=0x5f, .y=0x84, .sp=0x10, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x223d, .value=0x88}, {.addr=0x223e, .value=0xb5}};
    const struct CPU_State final_cpu = {.pc=0x223f, .a=0xd3, .x=0x5f, .y=0x84, .sp=0x10, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x223d, .value=0x88}, {.addr=0x223e, .value=0xb5}};
    const struct BusEvent events[] = {
        {.addr=0x223d, .value=0x88, .type=IO_READ},
        {.addr=0x223e, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_025D) {
    const struct CPU_State initial_cpu = {.pc=0xdd80, .a=0x9c, .x=0x56, .y=0xb6, .sp=0x94, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0xdd80, .value=0x88}, {.addr=0xdd81, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xdd82, .a=0x42, .x=0x56, .y=0xb6, .sp=0x94, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xdd80, .value=0x88}, {.addr=0xdd81, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xdd80, .value=0x88, .type=IO_READ},
        {.addr=0xdd81, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_025E) {
    const struct CPU_State initial_cpu = {.pc=0xc1e5, .a=0x89, .x=0xec, .y=0x21, .sp=0x75, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xc1e5, .value=0x88}, {.addr=0xc1e6, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0xc1e7, .a=0x1a, .x=0xec, .y=0x21, .sp=0x75, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0xc1e5, .value=0x88}, {.addr=0xc1e6, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0xc1e5, .value=0x88, .type=IO_READ},
        {.addr=0xc1e6, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_025F) {
    const struct CPU_State initial_cpu = {.pc=0x6ef8, .a=0x8e, .x=0x26, .y=0x5b, .sp=0x0f, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x6ef8, .value=0x88}, {.addr=0x6ef9, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0x6efa, .a=0x12, .x=0x26, .y=0x5b, .sp=0x0f, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x6ef8, .value=0x88}, {.addr=0x6ef9, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0x6ef8, .value=0x88, .type=IO_READ},
        {.addr=0x6ef9, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0260) {
    const struct CPU_State initial_cpu = {.pc=0xa1c0, .a=0xd4, .x=0xb0, .y=0x0a, .sp=0x87, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0xa1c0, .value=0x88}, {.addr=0xa1c1, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0xa1c2, .a=0x12, .x=0xb0, .y=0x0a, .sp=0x87, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xa1c0, .value=0x88}, {.addr=0xa1c1, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0xa1c0, .value=0x88, .type=IO_READ},
        {.addr=0xa1c1, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0261) {
    const struct CPU_State initial_cpu = {.pc=0x8dc4, .a=0xbe, .x=0xa2, .y=0x6f, .sp=0xc6, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x8dc4, .value=0x88}, {.addr=0x8dc5, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x8dc6, .a=0x96, .x=0xa2, .y=0x6f, .sp=0xc6, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x8dc4, .value=0x88}, {.addr=0x8dc5, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x8dc4, .value=0x88, .type=IO_READ},
        {.addr=0x8dc5, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0262) {
    const struct CPU_State initial_cpu = {.pc=0x4d8b, .a=0x08, .x=0xc6, .y=0xaf, .sp=0x18, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x4d8b, .value=0x88}, {.addr=0x4d8c, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x4d8d, .a=0x34, .x=0xc6, .y=0xaf, .sp=0x18, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x4d8b, .value=0x88}, {.addr=0x4d8c, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x4d8b, .value=0x88, .type=IO_READ},
        {.addr=0x4d8c, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0263) {
    const struct CPU_State initial_cpu = {.pc=0x8388, .a=0x98, .x=0xcf, .y=0x4d, .sp=0x39, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x8388, .value=0x88}, {.addr=0x8389, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0x838a, .a=0xab, .x=0xcf, .y=0x4d, .sp=0x39, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x8388, .value=0x88}, {.addr=0x8389, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0x8388, .value=0x88, .type=IO_READ},
        {.addr=0x8389, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0264) {
    const struct CPU_State initial_cpu = {.pc=0x4fe1, .a=0x17, .x=0xbd, .y=0xe0, .sp=0x51, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x4fe1, .value=0x88}, {.addr=0x4fe2, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x4fe3, .a=0x3c, .x=0xbd, .y=0xe0, .sp=0x51, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x4fe1, .value=0x88}, {.addr=0x4fe2, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x4fe1, .value=0x88, .type=IO_READ},
        {.addr=0x4fe2, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0265) {
    const struct CPU_State initial_cpu = {.pc=0x984e, .a=0xf4, .x=0x9e, .y=0xa6, .sp=0x56, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x984e, .value=0x88}, {.addr=0x984f, .value=0xfa}};
    const struct CPU_State final_cpu = {.pc=0x9850, .a=0xef, .x=0x9e, .y=0xa6, .sp=0x56, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x984e, .value=0x88}, {.addr=0x984f, .value=0xfa}};
    const struct BusEvent events[] = {
        {.addr=0x984e, .value=0x88, .type=IO_READ},
        {.addr=0x984f, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0266) {
    const struct CPU_State initial_cpu = {.pc=0xedd6, .a=0x9a, .x=0x8f, .y=0x09, .sp=0x88, .status=0x41};
    const struct RamEntry initial_ram[] = {{.addr=0xedd6, .value=0x88}, {.addr=0xedd7, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0xedd8, .a=0x3f, .x=0x8f, .y=0x09, .sp=0x88, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0xedd6, .value=0x88}, {.addr=0xedd7, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0xedd6, .value=0x88, .type=IO_READ},
        {.addr=0xedd7, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0267) {
    const struct CPU_State initial_cpu = {.pc=0x56d2, .a=0x35, .x=0x01, .y=0xc6, .sp=0x92, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x56d2, .value=0x88}, {.addr=0x56d3, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x56d4, .a=0xa5, .x=0x01, .y=0xc6, .sp=0x92, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x56d2, .value=0x88}, {.addr=0x56d3, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x56d2, .value=0x88, .type=IO_READ},
        {.addr=0x56d3, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0268) {
    const struct CPU_State initial_cpu = {.pc=0x0df0, .a=0x14, .x=0xa9, .y=0x6a, .sp=0x09, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0df0, .value=0x88}, {.addr=0x0df1, .value=0x9a}};
    const struct CPU_State final_cpu = {.pc=0x0df2, .a=0xaf, .x=0xa9, .y=0x6a, .sp=0x09, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0df0, .value=0x88}, {.addr=0x0df1, .value=0x9a}};
    const struct BusEvent events[] = {
        {.addr=0x0df0, .value=0x88, .type=IO_READ},
        {.addr=0x0df1, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0269) {
    const struct CPU_State initial_cpu = {.pc=0x521a, .a=0xa3, .x=0x25, .y=0x84, .sp=0x61, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x521a, .value=0x88}, {.addr=0x521b, .value=0x90}};
    const struct CPU_State final_cpu = {.pc=0x521c, .a=0x33, .x=0x25, .y=0x84, .sp=0x61, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x521a, .value=0x88}, {.addr=0x521b, .value=0x90}};
    const struct BusEvent events[] = {
        {.addr=0x521a, .value=0x88, .type=IO_READ},
        {.addr=0x521b, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_026A) {
    const struct CPU_State initial_cpu = {.pc=0x1f59, .a=0x0b, .x=0x39, .y=0xd6, .sp=0x31, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x1f59, .value=0x88}, {.addr=0x1f5a, .value=0x8a}};
    const struct CPU_State final_cpu = {.pc=0x1f5b, .a=0x95, .x=0x39, .y=0xd6, .sp=0x31, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x1f59, .value=0x88}, {.addr=0x1f5a, .value=0x8a}};
    const struct BusEvent events[] = {
        {.addr=0x1f59, .value=0x88, .type=IO_READ},
        {.addr=0x1f5a, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_026B) {
    const struct CPU_State initial_cpu = {.pc=0xb850, .a=0xc4, .x=0x0d, .y=0x9c, .sp=0x91, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xb850, .value=0x88}, {.addr=0xb851, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0xb852, .a=0x30, .x=0x0d, .y=0x9c, .sp=0x91, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xb850, .value=0x88}, {.addr=0xb851, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0xb850, .value=0x88, .type=IO_READ},
        {.addr=0xb851, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_026C) {
    const struct CPU_State initial_cpu = {.pc=0xce02, .a=0xd3, .x=0x2b, .y=0x26, .sp=0x3e, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0xce02, .value=0x88}, {.addr=0xce03, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0xce04, .a=0xe4, .x=0x2b, .y=0x26, .sp=0x3e, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xce02, .value=0x88}, {.addr=0xce03, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0xce02, .value=0x88, .type=IO_READ},
        {.addr=0xce03, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_026D) {
    const struct CPU_State initial_cpu = {.pc=0xd56d, .a=0x9f, .x=0x8b, .y=0x8b, .sp=0x99, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xd56d, .value=0x88}, {.addr=0xd56e, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xd56f, .a=0x02, .x=0x8b, .y=0x8b, .sp=0x99, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xd56d, .value=0x88}, {.addr=0xd56e, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xd56d, .value=0x88, .type=IO_READ},
        {.addr=0xd56e, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_026E) {
    const struct CPU_State initial_cpu = {.pc=0x13f1, .a=0x05, .x=0xe9, .y=0x4f, .sp=0x79, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x13f1, .value=0x88}, {.addr=0x13f2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x13f3, .a=0x53, .x=0xe9, .y=0x4f, .sp=0x79, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x13f1, .value=0x88}, {.addr=0x13f2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x13f1, .value=0x88, .type=IO_READ},
        {.addr=0x13f2, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_026F) {
    const struct CPU_State initial_cpu = {.pc=0x9286, .a=0xf1, .x=0x8f, .y=0x59, .sp=0xb7, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x9286, .value=0x88}, {.addr=0x9287, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x9288, .a=0x39, .x=0x8f, .y=0x59, .sp=0xb7, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x9286, .value=0x88}, {.addr=0x9287, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x9286, .value=0x88, .type=IO_READ},
        {.addr=0x9287, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0270) {
    const struct CPU_State initial_cpu = {.pc=0x5a99, .a=0xcc, .x=0xb4, .y=0x2a, .sp=0x1d, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x5a99, .value=0x88}, {.addr=0x5a9a, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x5a9b, .a=0x8d, .x=0xb4, .y=0x2a, .sp=0x1d, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x5a99, .value=0x88}, {.addr=0x5a9a, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x5a99, .value=0x88, .type=IO_READ},
        {.addr=0x5a9a, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0271) {
    const struct CPU_State initial_cpu = {.pc=0x2ed8, .a=0x8e, .x=0xcd, .y=0x56, .sp=0x54, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x2ed8, .value=0x88}, {.addr=0x2ed9, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x2eda, .a=0x76, .x=0xcd, .y=0x56, .sp=0x54, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x2ed8, .value=0x88}, {.addr=0x2ed9, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x2ed8, .value=0x88, .type=IO_READ},
        {.addr=0x2ed9, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0272) {
    const struct CPU_State initial_cpu = {.pc=0x0a1f, .a=0x69, .x=0xaa, .y=0xa2, .sp=0x25, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0a1f, .value=0x88}, {.addr=0x0a20, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0a21, .a=0xa7, .x=0xaa, .y=0xa2, .sp=0x25, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0a1f, .value=0x88}, {.addr=0x0a20, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0a1f, .value=0x88, .type=IO_READ},
        {.addr=0x0a20, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0273) {
    const struct CPU_State initial_cpu = {.pc=0x1306, .a=0x18, .x=0xc5, .y=0x6b, .sp=0xbb, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x1306, .value=0x88}, {.addr=0x1307, .value=0x4c}};
    const struct CPU_State final_cpu = {.pc=0x1308, .a=0x65, .x=0xc5, .y=0x6b, .sp=0xbb, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x1306, .value=0x88}, {.addr=0x1307, .value=0x4c}};
    const struct BusEvent events[] = {
        {.addr=0x1306, .value=0x88, .type=IO_READ},
        {.addr=0x1307, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0274) {
    const struct CPU_State initial_cpu = {.pc=0x674b, .a=0x79, .x=0x1b, .y=0xda, .sp=0xfd, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x674b, .value=0x88}, {.addr=0x674c, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0x674d, .a=0xac, .x=0x1b, .y=0xda, .sp=0xfd, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x674b, .value=0x88}, {.addr=0x674c, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0x674b, .value=0x88, .type=IO_READ},
        {.addr=0x674c, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0275) {
    const struct CPU_State initial_cpu = {.pc=0x5ac6, .a=0x84, .x=0xba, .y=0xa9, .sp=0x6e, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x5ac6, .value=0x88}, {.addr=0x5ac7, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x5ac8, .a=0x28, .x=0xba, .y=0xa9, .sp=0x6e, .status=0x41};
    const struct RamEntry final_ram[] = {{.addr=0x5ac6, .value=0x88}, {.addr=0x5ac7, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x5ac6, .value=0x88, .type=IO_READ},
        {.addr=0x5ac7, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0276) {
    const struct CPU_State initial_cpu = {.pc=0xcf99, .a=0x9b, .x=0x02, .y=0x4a, .sp=0x84, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0xcf99, .value=0x88}, {.addr=0xcf9a, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0xcf9b, .a=0xb5, .x=0x02, .y=0x4a, .sp=0x84, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xcf99, .value=0x88}, {.addr=0xcf9a, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0xcf99, .value=0x88, .type=IO_READ},
        {.addr=0xcf9a, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0277) {
    const struct CPU_State initial_cpu = {.pc=0x6acb, .a=0x46, .x=0xf8, .y=0x28, .sp=0x8c, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x6acb, .value=0x88}, {.addr=0x6acc, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x6acd, .a=0xc8, .x=0xf8, .y=0x28, .sp=0x8c, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x6acb, .value=0x88}, {.addr=0x6acc, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x6acb, .value=0x88, .type=IO_READ},
        {.addr=0x6acc, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0278) {
    const struct CPU_State initial_cpu = {.pc=0xf9d7, .a=0x33, .x=0x09, .y=0x88, .sp=0x79, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xf9d7, .value=0x88}, {.addr=0xf9d8, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xf9d9, .a=0x36, .x=0x09, .y=0x88, .sp=0x79, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xf9d7, .value=0x88}, {.addr=0xf9d8, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xf9d7, .value=0x88, .type=IO_READ},
        {.addr=0xf9d8, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0279) {
    const struct CPU_State initial_cpu = {.pc=0x3a48, .a=0x12, .x=0x6c, .y=0xe6, .sp=0xd0, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x3a48, .value=0x88}, {.addr=0x3a49, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3a4a, .a=0x8e, .x=0x6c, .y=0xe6, .sp=0xd0, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x3a48, .value=0x88}, {.addr=0x3a49, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3a48, .value=0x88, .type=IO_READ},
        {.addr=0x3a49, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_027A) {
    const struct CPU_State initial_cpu = {.pc=0x8f68, .a=0x37, .x=0x24, .y=0x74, .sp=0x6f, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x8f68, .value=0x88}, {.addr=0x8f69, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x8f6a, .a=0x05, .x=0x24, .y=0x74, .sp=0x6f, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x8f68, .value=0x88}, {.addr=0x8f69, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x8f68, .value=0x88, .type=IO_READ},
        {.addr=0x8f69, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_027B) {
    const struct CPU_State initial_cpu = {.pc=0xc91a, .a=0x02, .x=0x8f, .y=0x91, .sp=0xd1, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xc91a, .value=0x88}, {.addr=0xc91b, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0xc91c, .a=0x7a, .x=0x8f, .y=0x91, .sp=0xd1, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0xc91a, .value=0x88}, {.addr=0xc91b, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0xc91a, .value=0x88, .type=IO_READ},
        {.addr=0xc91b, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_027C) {
    const struct CPU_State initial_cpu = {.pc=0x2acb, .a=0x7e, .x=0x7d, .y=0xe4, .sp=0x40, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x2acb, .value=0x88}, {.addr=0x2acc, .value=0x36}};
    const struct CPU_State final_cpu = {.pc=0x2acd, .a=0xb4, .x=0x7d, .y=0xe4, .sp=0x40, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x2acb, .value=0x88}, {.addr=0x2acc, .value=0x36}};
    const struct BusEvent events[] = {
        {.addr=0x2acb, .value=0x88, .type=IO_READ},
        {.addr=0x2acc, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_027D) {
    const struct CPU_State initial_cpu = {.pc=0xc57b, .a=0xd9, .x=0x77, .y=0x4f, .sp=0xed, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0xc57b, .value=0x88}, {.addr=0xc57c, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0xc57d, .a=0xc9, .x=0x77, .y=0x4f, .sp=0xed, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xc57b, .value=0x88}, {.addr=0xc57c, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0xc57b, .value=0x88, .type=IO_READ},
        {.addr=0xc57c, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_027E) {
    const struct CPU_State initial_cpu = {.pc=0x8298, .a=0xff, .x=0x61, .y=0x14, .sp=0xd6, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x8298, .value=0x88}, {.addr=0x8299, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x829a, .a=0xb3, .x=0x61, .y=0x14, .sp=0xd6, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x8298, .value=0x88}, {.addr=0x8299, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x8298, .value=0x88, .type=IO_READ},
        {.addr=0x8299, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_027F) {
    const struct CPU_State initial_cpu = {.pc=0x3420, .a=0xb2, .x=0xf4, .y=0x36, .sp=0x9f, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x3420, .value=0x88}, {.addr=0x3421, .value=0x7c}};
    const struct CPU_State final_cpu = {.pc=0x3422, .a=0x2f, .x=0xf4, .y=0x36, .sp=0x9f, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x3420, .value=0x88}, {.addr=0x3421, .value=0x7c}};
    const struct BusEvent events[] = {
        {.addr=0x3420, .value=0x88, .type=IO_READ},
        {.addr=0x3421, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0280) {
    const struct CPU_State initial_cpu = {.pc=0x57e2, .a=0x50, .x=0x7f, .y=0x28, .sp=0xb5, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x57e2, .value=0x88}, {.addr=0x57e3, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x57e4, .a=0x66, .x=0x7f, .y=0x28, .sp=0xb5, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x57e2, .value=0x88}, {.addr=0x57e3, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x57e2, .value=0x88, .type=IO_READ},
        {.addr=0x57e3, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0281) {
    const struct CPU_State initial_cpu = {.pc=0xbf6e, .a=0xbd, .x=0xdd, .y=0xd5, .sp=0x6b, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0xbf6e, .value=0x88}, {.addr=0xbf6f, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0xbf70, .a=0xea, .x=0xdd, .y=0xd5, .sp=0x6b, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xbf6e, .value=0x88}, {.addr=0xbf6f, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0xbf6e, .value=0x88, .type=IO_READ},
        {.addr=0xbf6f, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0282) {
    const struct CPU_State initial_cpu = {.pc=0x2724, .a=0x3c, .x=0x31, .y=0x10, .sp=0xbb, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x2724, .value=0x88}, {.addr=0x2725, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x2726, .a=0xa8, .x=0x31, .y=0x10, .sp=0xbb, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x2724, .value=0x88}, {.addr=0x2725, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x2724, .value=0x88, .type=IO_READ},
        {.addr=0x2725, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0283) {
    const struct CPU_State initial_cpu = {.pc=0xaef4, .a=0xdb, .x=0x35, .y=0xd2, .sp=0xd3, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0xaef4, .value=0x88}, {.addr=0xaef5, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xaef6, .a=0xc2, .x=0x35, .y=0xd2, .sp=0xd3, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xaef4, .value=0x88}, {.addr=0xaef5, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xaef4, .value=0x88, .type=IO_READ},
        {.addr=0xaef5, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0284) {
    const struct CPU_State initial_cpu = {.pc=0xe2ad, .a=0x0d, .x=0xfd, .y=0x2c, .sp=0x52, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0xe2ad, .value=0x88}, {.addr=0xe2ae, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0xe2af, .a=0x50, .x=0xfd, .y=0x2c, .sp=0x52, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xe2ad, .value=0x88}, {.addr=0xe2ae, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0xe2ad, .value=0x88, .type=IO_READ},
        {.addr=0xe2ae, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0285) {
    const struct CPU_State initial_cpu = {.pc=0xb4ca, .a=0x3f, .x=0x2d, .y=0xd0, .sp=0x47, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0xb4ca, .value=0x88}, {.addr=0xb4cb, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0xb4cc, .a=0x37, .x=0x2d, .y=0xd0, .sp=0x47, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xb4ca, .value=0x88}, {.addr=0xb4cb, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0xb4ca, .value=0x88, .type=IO_READ},
        {.addr=0xb4cb, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0286) {
    const struct CPU_State initial_cpu = {.pc=0xff32, .a=0xd0, .x=0xe7, .y=0x73, .sp=0x9d, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0xff32, .value=0x88}, {.addr=0xff33, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0xff34, .a=0x50, .x=0xe7, .y=0x73, .sp=0x9d, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0xff32, .value=0x88}, {.addr=0xff33, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0xff32, .value=0x88, .type=IO_READ},
        {.addr=0xff33, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0287) {
    const struct CPU_State initial_cpu = {.pc=0x9b75, .a=0xaf, .x=0xe2, .y=0x89, .sp=0xfd, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x9b75, .value=0x88}, {.addr=0x9b76, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x9b77, .a=0x11, .x=0xe2, .y=0x89, .sp=0xfd, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x9b75, .value=0x88}, {.addr=0x9b76, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x9b75, .value=0x88, .type=IO_READ},
        {.addr=0x9b76, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0288) {
    const struct CPU_State initial_cpu = {.pc=0x5c0f, .a=0xa9, .x=0x25, .y=0x5d, .sp=0x79, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x5c0f, .value=0x88}, {.addr=0x5c10, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0x5c11, .a=0xcb, .x=0x25, .y=0x5d, .sp=0x79, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x5c0f, .value=0x88}, {.addr=0x5c10, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0x5c0f, .value=0x88, .type=IO_READ},
        {.addr=0x5c10, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0289) {
    const struct CPU_State initial_cpu = {.pc=0x9777, .a=0xf0, .x=0x29, .y=0xee, .sp=0x93, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x9777, .value=0x88}, {.addr=0x9778, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0x9779, .a=0x69, .x=0x29, .y=0xee, .sp=0x93, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x9777, .value=0x88}, {.addr=0x9778, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0x9777, .value=0x88, .type=IO_READ},
        {.addr=0x9778, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_028A) {
    const struct CPU_State initial_cpu = {.pc=0x8792, .a=0x27, .x=0xee, .y=0x7c, .sp=0x9d, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x8792, .value=0x88}, {.addr=0x8793, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0x8794, .a=0x0f, .x=0xee, .y=0x7c, .sp=0x9d, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x8792, .value=0x88}, {.addr=0x8793, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0x8792, .value=0x88, .type=IO_READ},
        {.addr=0x8793, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_028B) {
    const struct CPU_State initial_cpu = {.pc=0x7823, .a=0x9a, .x=0xd6, .y=0xd9, .sp=0x08, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x7823, .value=0x88}, {.addr=0x7824, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x7825, .a=0x04, .x=0xd6, .y=0xd9, .sp=0x08, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x7823, .value=0x88}, {.addr=0x7824, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x7823, .value=0x88, .type=IO_READ},
        {.addr=0x7824, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_028C) {
    const struct CPU_State initial_cpu = {.pc=0x4bfb, .a=0xed, .x=0xc7, .y=0xa9, .sp=0x72, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x4bfb, .value=0x88}, {.addr=0x4bfc, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0x4bfd, .a=0x93, .x=0xc7, .y=0xa9, .sp=0x72, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x4bfb, .value=0x88}, {.addr=0x4bfc, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0x4bfb, .value=0x88, .type=IO_READ},
        {.addr=0x4bfc, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_028D) {
    const struct CPU_State initial_cpu = {.pc=0x96fe, .a=0x6b, .x=0xe2, .y=0x78, .sp=0x4f, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x96fe, .value=0x88}, {.addr=0x96ff, .value=0x5c}};
    const struct CPU_State final_cpu = {.pc=0x9700, .a=0xc7, .x=0xe2, .y=0x78, .sp=0x4f, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x96fe, .value=0x88}, {.addr=0x96ff, .value=0x5c}};
    const struct BusEvent events[] = {
        {.addr=0x96fe, .value=0x88, .type=IO_READ},
        {.addr=0x96ff, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_028E) {
    const struct CPU_State initial_cpu = {.pc=0xd7e4, .a=0xee, .x=0xd7, .y=0x61, .sp=0x96, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xd7e4, .value=0x88}, {.addr=0xd7e5, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xd7e6, .a=0xcc, .x=0xd7, .y=0x61, .sp=0x96, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xd7e4, .value=0x88}, {.addr=0xd7e5, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xd7e4, .value=0x88, .type=IO_READ},
        {.addr=0xd7e5, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_028F) {
    const struct CPU_State initial_cpu = {.pc=0x7479, .a=0x6f, .x=0x0d, .y=0x43, .sp=0x9f, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x7479, .value=0x88}, {.addr=0x747a, .value=0x37}};
    const struct CPU_State final_cpu = {.pc=0x747b, .a=0xa6, .x=0x0d, .y=0x43, .sp=0x9f, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x7479, .value=0x88}, {.addr=0x747a, .value=0x37}};
    const struct BusEvent events[] = {
        {.addr=0x7479, .value=0x88, .type=IO_READ},
        {.addr=0x747a, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0290) {
    const struct CPU_State initial_cpu = {.pc=0x4cc7, .a=0xdb, .x=0x37, .y=0x06, .sp=0x5b, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x4cc7, .value=0x88}, {.addr=0x4cc8, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x4cc9, .a=0xa3, .x=0x37, .y=0x06, .sp=0x5b, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x4cc7, .value=0x88}, {.addr=0x4cc8, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x4cc7, .value=0x88, .type=IO_READ},
        {.addr=0x4cc8, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0291) {
    const struct CPU_State initial_cpu = {.pc=0x2a35, .a=0x9a, .x=0x7a, .y=0x08, .sp=0xf8, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x2a35, .value=0x88}, {.addr=0x2a36, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x2a37, .a=0x0c, .x=0x7a, .y=0x08, .sp=0xf8, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x2a35, .value=0x88}, {.addr=0x2a36, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x2a35, .value=0x88, .type=IO_READ},
        {.addr=0x2a36, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0292) {
    const struct CPU_State initial_cpu = {.pc=0x2718, .a=0xb6, .x=0xeb, .y=0x2e, .sp=0x90, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x2718, .value=0x88}, {.addr=0x2719, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x271a, .a=0xd1, .x=0xeb, .y=0x2e, .sp=0x90, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x2718, .value=0x88}, {.addr=0x2719, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x2718, .value=0x88, .type=IO_READ},
        {.addr=0x2719, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0293) {
    const struct CPU_State initial_cpu = {.pc=0x8f84, .a=0x6a, .x=0x39, .y=0xa6, .sp=0x54, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x8f84, .value=0x88}, {.addr=0x8f85, .value=0xd9}};
    const struct CPU_State final_cpu = {.pc=0x8f86, .a=0x44, .x=0x39, .y=0xa6, .sp=0x54, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x8f84, .value=0x88}, {.addr=0x8f85, .value=0xd9}};
    const struct BusEvent events[] = {
        {.addr=0x8f84, .value=0x88, .type=IO_READ},
        {.addr=0x8f85, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0294) {
    const struct CPU_State initial_cpu = {.pc=0xc80c, .a=0x49, .x=0xcf, .y=0x7b, .sp=0x78, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0xc80c, .value=0x88}, {.addr=0xc80d, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0xc80e, .a=0x25, .x=0xcf, .y=0x7b, .sp=0x78, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xc80c, .value=0x88}, {.addr=0xc80d, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0xc80c, .value=0x88, .type=IO_READ},
        {.addr=0xc80d, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0295) {
    const struct CPU_State initial_cpu = {.pc=0x63e0, .a=0x1f, .x=0x6e, .y=0x7a, .sp=0xd0, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x63e0, .value=0x88}, {.addr=0x63e1, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0x63e2, .a=0xc6, .x=0x6e, .y=0x7a, .sp=0xd0, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x63e0, .value=0x88}, {.addr=0x63e1, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0x63e0, .value=0x88, .type=IO_READ},
        {.addr=0x63e1, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0296) {
    const struct CPU_State initial_cpu = {.pc=0xf6b2, .a=0x5f, .x=0xbd, .y=0xb5, .sp=0x16, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xf6b2, .value=0x88}, {.addr=0xf6b3, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xf6b4, .a=0xde, .x=0xbd, .y=0xb5, .sp=0x16, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xf6b2, .value=0x88}, {.addr=0xf6b3, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xf6b2, .value=0x88, .type=IO_READ},
        {.addr=0xf6b3, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0297) {
    const struct CPU_State initial_cpu = {.pc=0x7f4c, .a=0x73, .x=0x6a, .y=0xe0, .sp=0x12, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x7f4c, .value=0x88}, {.addr=0x7f4d, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0x7f4e, .a=0xd1, .x=0x6a, .y=0xe0, .sp=0x12, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x7f4c, .value=0x88}, {.addr=0x7f4d, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0x7f4c, .value=0x88, .type=IO_READ},
        {.addr=0x7f4d, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0298) {
    const struct CPU_State initial_cpu = {.pc=0x3dbc, .a=0xff, .x=0x39, .y=0x34, .sp=0x1b, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x3dbc, .value=0x88}, {.addr=0x3dbd, .value=0xfe}};
    const struct CPU_State final_cpu = {.pc=0x3dbe, .a=0xfd, .x=0x39, .y=0x34, .sp=0x1b, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x3dbc, .value=0x88}, {.addr=0x3dbd, .value=0xfe}};
    const struct BusEvent events[] = {
        {.addr=0x3dbc, .value=0x88, .type=IO_READ},
        {.addr=0x3dbd, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0299) {
    const struct CPU_State initial_cpu = {.pc=0x1ef8, .a=0x57, .x=0x3c, .y=0x1f, .sp=0x5e, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x1ef8, .value=0x88}, {.addr=0x1ef9, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x1efa, .a=0x92, .x=0x3c, .y=0x1f, .sp=0x5e, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x1ef8, .value=0x88}, {.addr=0x1ef9, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x1ef8, .value=0x88, .type=IO_READ},
        {.addr=0x1ef9, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_029A) {
    const struct CPU_State initial_cpu = {.pc=0x6cd6, .a=0xd1, .x=0x2a, .y=0xf7, .sp=0x5f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x6cd6, .value=0x88}, {.addr=0x6cd7, .value=0xc4}};
    const struct CPU_State final_cpu = {.pc=0x6cd8, .a=0x96, .x=0x2a, .y=0xf7, .sp=0x5f, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x6cd6, .value=0x88}, {.addr=0x6cd7, .value=0xc4}};
    const struct BusEvent events[] = {
        {.addr=0x6cd6, .value=0x88, .type=IO_READ},
        {.addr=0x6cd7, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_029B) {
    const struct CPU_State initial_cpu = {.pc=0xc94c, .a=0xcc, .x=0x12, .y=0x6b, .sp=0x06, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xc94c, .value=0x88}, {.addr=0xc94d, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0xc94e, .a=0xfb, .x=0x12, .y=0x6b, .sp=0x06, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xc94c, .value=0x88}, {.addr=0xc94d, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0xc94c, .value=0x88, .type=IO_READ},
        {.addr=0xc94d, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_029C) {
    const struct CPU_State initial_cpu = {.pc=0xaa16, .a=0x1c, .x=0x34, .y=0xb3, .sp=0x90, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xaa16, .value=0x88}, {.addr=0xaa17, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xaa18, .a=0x06, .x=0x34, .y=0xb3, .sp=0x90, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0xaa16, .value=0x88}, {.addr=0xaa17, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xaa16, .value=0x88, .type=IO_READ},
        {.addr=0xaa17, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_029D) {
    const struct CPU_State initial_cpu = {.pc=0x4171, .a=0xd1, .x=0x43, .y=0xc2, .sp=0xc8, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x4171, .value=0x88}, {.addr=0x4172, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x4173, .a=0x52, .x=0x43, .y=0xc2, .sp=0xc8, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x4171, .value=0x88}, {.addr=0x4172, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x4171, .value=0x88, .type=IO_READ},
        {.addr=0x4172, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_029E) {
    const struct CPU_State initial_cpu = {.pc=0x7c8f, .a=0xfc, .x=0x19, .y=0x86, .sp=0xe8, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x7c8f, .value=0x88}, {.addr=0x7c90, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x7c91, .a=0x6f, .x=0x19, .y=0x86, .sp=0xe8, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x7c8f, .value=0x88}, {.addr=0x7c90, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x7c8f, .value=0x88, .type=IO_READ},
        {.addr=0x7c90, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_029F) {
    const struct CPU_State initial_cpu = {.pc=0x1875, .a=0xbc, .x=0xff, .y=0xbb, .sp=0xfa, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x1875, .value=0x88}, {.addr=0x1876, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0x1877, .a=0x1f, .x=0xff, .y=0xbb, .sp=0xfa, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x1875, .value=0x88}, {.addr=0x1876, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0x1875, .value=0x88, .type=IO_READ},
        {.addr=0x1876, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x05e6, .a=0x4e, .x=0x9a, .y=0x16, .sp=0x12, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x05e6, .value=0x88}, {.addr=0x05e7, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x05e8, .a=0xa2, .x=0x9a, .y=0x16, .sp=0x12, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x05e6, .value=0x88}, {.addr=0x05e7, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x05e6, .value=0x88, .type=IO_READ},
        {.addr=0x05e7, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x368e, .a=0xbb, .x=0xf3, .y=0x5d, .sp=0xf5, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x368e, .value=0x88}, {.addr=0x368f, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x3690, .a=0x8c, .x=0xf3, .y=0x5d, .sp=0xf5, .status=0x91};
    const struct RamEntry final_ram[] = {{.addr=0x368e, .value=0x88}, {.addr=0x368f, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x368e, .value=0x88, .type=IO_READ},
        {.addr=0x368f, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x116f, .a=0x94, .x=0x31, .y=0xcb, .sp=0xeb, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x116f, .value=0x88}, {.addr=0x1170, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x1171, .a=0xeb, .x=0x31, .y=0xcb, .sp=0xeb, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x116f, .value=0x88}, {.addr=0x1170, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x116f, .value=0x88, .type=IO_READ},
        {.addr=0x1170, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x8c2e, .a=0xa6, .x=0xd4, .y=0x1b, .sp=0x4e, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x8c2e, .value=0x88}, {.addr=0x8c2f, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x8c30, .a=0x34, .x=0xd4, .y=0x1b, .sp=0x4e, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x8c2e, .value=0x88}, {.addr=0x8c2f, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x8c2e, .value=0x88, .type=IO_READ},
        {.addr=0x8c2f, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02A4) {
    const struct CPU_State initial_cpu = {.pc=0xc54b, .a=0xa0, .x=0x45, .y=0x24, .sp=0x69, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0xc54b, .value=0x88}, {.addr=0xc54c, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0xc54d, .a=0x11, .x=0x45, .y=0x24, .sp=0x69, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0xc54b, .value=0x88}, {.addr=0xc54c, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0xc54b, .value=0x88, .type=IO_READ},
        {.addr=0xc54c, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02A5) {
    const struct CPU_State initial_cpu = {.pc=0xd4b5, .a=0x99, .x=0xbc, .y=0x16, .sp=0xf2, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xd4b5, .value=0x88}, {.addr=0xd4b6, .value=0x18}};
    const struct CPU_State final_cpu = {.pc=0xd4b7, .a=0xb2, .x=0xbc, .y=0x16, .sp=0xf2, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xd4b5, .value=0x88}, {.addr=0xd4b6, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0xd4b5, .value=0x88, .type=IO_READ},
        {.addr=0xd4b6, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02A6) {
    const struct CPU_State initial_cpu = {.pc=0xa55d, .a=0x7b, .x=0x7c, .y=0x88, .sp=0xe7, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0xa55d, .value=0x88}, {.addr=0xa55e, .value=0x20}};
    const struct CPU_State final_cpu = {.pc=0xa55f, .a=0x9c, .x=0x7c, .y=0x88, .sp=0xe7, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xa55d, .value=0x88}, {.addr=0xa55e, .value=0x20}};
    const struct BusEvent events[] = {
        {.addr=0xa55d, .value=0x88, .type=IO_READ},
        {.addr=0xa55e, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x4efa, .a=0xfb, .x=0x4e, .y=0x7d, .sp=0x6b, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x4efa, .value=0x88}, {.addr=0x4efb, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0x4efc, .a=0x37, .x=0x4e, .y=0x7d, .sp=0x6b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x4efa, .value=0x88}, {.addr=0x4efb, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0x4efa, .value=0x88, .type=IO_READ},
        {.addr=0x4efb, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xeb3c, .a=0x76, .x=0x9b, .y=0xe7, .sp=0x7c, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0xeb3c, .value=0x88}, {.addr=0xeb3d, .value=0x32}};
    const struct CPU_State final_cpu = {.pc=0xeb3e, .a=0xa9, .x=0x9b, .y=0xe7, .sp=0x7c, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xeb3c, .value=0x88}, {.addr=0xeb3d, .value=0x32}};
    const struct BusEvent events[] = {
        {.addr=0xeb3c, .value=0x88, .type=IO_READ},
        {.addr=0xeb3d, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02A9) {
    const struct CPU_State initial_cpu = {.pc=0xf664, .a=0xe4, .x=0x4e, .y=0x66, .sp=0xed, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0xf664, .value=0x88}, {.addr=0xf665, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xf666, .a=0x81, .x=0x4e, .y=0x66, .sp=0xed, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xf664, .value=0x88}, {.addr=0xf665, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xf664, .value=0x88, .type=IO_READ},
        {.addr=0xf665, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x8d45, .a=0x4e, .x=0x3c, .y=0x9f, .sp=0xaf, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x8d45, .value=0x88}, {.addr=0x8d46, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0x8d47, .a=0x26, .x=0x3c, .y=0x9f, .sp=0xaf, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x8d45, .value=0x88}, {.addr=0x8d46, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0x8d45, .value=0x88, .type=IO_READ},
        {.addr=0x8d46, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xf8f1, .a=0x3e, .x=0xa0, .y=0x2e, .sp=0x05, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xf8f1, .value=0x88}, {.addr=0xf8f2, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xf8f3, .a=0xa0, .x=0xa0, .y=0x2e, .sp=0x05, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xf8f1, .value=0x88}, {.addr=0xf8f2, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xf8f1, .value=0x88, .type=IO_READ},
        {.addr=0xf8f2, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xb88d, .a=0x42, .x=0x8d, .y=0xef, .sp=0xaa, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xb88d, .value=0x88}, {.addr=0xb88e, .value=0xbf}};
    const struct CPU_State final_cpu = {.pc=0xb88f, .a=0x01, .x=0x8d, .y=0xef, .sp=0xaa, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xb88d, .value=0x88}, {.addr=0xb88e, .value=0xbf}};
    const struct BusEvent events[] = {
        {.addr=0xb88d, .value=0x88, .type=IO_READ},
        {.addr=0xb88e, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xb920, .a=0x6e, .x=0x36, .y=0x32, .sp=0x6e, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xb920, .value=0x88}, {.addr=0xb921, .value=0x26}};
    const struct CPU_State final_cpu = {.pc=0xb922, .a=0x94, .x=0x36, .y=0x32, .sp=0x6e, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xb920, .value=0x88}, {.addr=0xb921, .value=0x26}};
    const struct BusEvent events[] = {
        {.addr=0xb920, .value=0x88, .type=IO_READ},
        {.addr=0xb921, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x28e1, .a=0x46, .x=0x8f, .y=0x4d, .sp=0x7c, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x28e1, .value=0x88}, {.addr=0x28e2, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x28e3, .a=0x03, .x=0x8f, .y=0x4d, .sp=0x7c, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x28e1, .value=0x88}, {.addr=0x28e2, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x28e1, .value=0x88, .type=IO_READ},
        {.addr=0x28e2, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x9f37, .a=0x3f, .x=0xcb, .y=0x27, .sp=0xd7, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x9f37, .value=0x88}, {.addr=0x9f38, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x9f39, .a=0x2b, .x=0xcb, .y=0x27, .sp=0xd7, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x9f37, .value=0x88}, {.addr=0x9f38, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x9f37, .value=0x88, .type=IO_READ},
        {.addr=0x9f38, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x7a5f, .a=0x90, .x=0x91, .y=0x96, .sp=0x5b, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x7a5f, .value=0x88}, {.addr=0x7a60, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0x7a61, .a=0xe2, .x=0x91, .y=0x96, .sp=0x5b, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x7a5f, .value=0x88}, {.addr=0x7a60, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0x7a5f, .value=0x88, .type=IO_READ},
        {.addr=0x7a60, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xf18f, .a=0x8b, .x=0x37, .y=0x4c, .sp=0x70, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xf18f, .value=0x88}, {.addr=0xf190, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0xf191, .a=0x96, .x=0x37, .y=0x4c, .sp=0x70, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xf18f, .value=0x88}, {.addr=0xf190, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0xf18f, .value=0x88, .type=IO_READ},
        {.addr=0xf190, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xc7bf, .a=0x9d, .x=0xb4, .y=0x5d, .sp=0x6d, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0xc7bf, .value=0x88}, {.addr=0xc7c0, .value=0xda}};
    const struct CPU_State final_cpu = {.pc=0xc7c1, .a=0x77, .x=0xb4, .y=0x5d, .sp=0x6d, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0xc7bf, .value=0x88}, {.addr=0xc7c0, .value=0xda}};
    const struct BusEvent events[] = {
        {.addr=0xc7bf, .value=0x88, .type=IO_READ},
        {.addr=0xc7c0, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x9425, .a=0xd3, .x=0xa7, .y=0xf2, .sp=0x78, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x9425, .value=0x88}, {.addr=0x9426, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0x9427, .a=0x97, .x=0xa7, .y=0xf2, .sp=0x78, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x9425, .value=0x88}, {.addr=0x9426, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0x9425, .value=0x88, .type=IO_READ},
        {.addr=0x9426, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x7cef, .a=0x25, .x=0x53, .y=0xc1, .sp=0xbb, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x7cef, .value=0x88}, {.addr=0x7cf0, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x7cf1, .a=0x33, .x=0x53, .y=0xc1, .sp=0xbb, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x7cef, .value=0x88}, {.addr=0x7cf0, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x7cef, .value=0x88, .type=IO_READ},
        {.addr=0x7cf0, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x8686, .a=0x5d, .x=0x80, .y=0xc8, .sp=0x57, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x8686, .value=0x88}, {.addr=0x8687, .value=0x7f}};
    const struct CPU_State final_cpu = {.pc=0x8688, .a=0xdc, .x=0x80, .y=0xc8, .sp=0x57, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x8686, .value=0x88}, {.addr=0x8687, .value=0x7f}};
    const struct BusEvent events[] = {
        {.addr=0x8686, .value=0x88, .type=IO_READ},
        {.addr=0x8687, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x9318, .a=0x55, .x=0xeb, .y=0xf4, .sp=0x0f, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x9318, .value=0x88}, {.addr=0x9319, .value=0xd0}};
    const struct CPU_State final_cpu = {.pc=0x931a, .a=0x26, .x=0xeb, .y=0xf4, .sp=0x0f, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9318, .value=0x88}, {.addr=0x9319, .value=0xd0}};
    const struct BusEvent events[] = {
        {.addr=0x9318, .value=0x88, .type=IO_READ},
        {.addr=0x9319, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02B7) {
    const struct CPU_State initial_cpu = {.pc=0x9fc4, .a=0x20, .x=0xaa, .y=0xb3, .sp=0xf7, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x9fc4, .value=0x88}, {.addr=0x9fc5, .value=0xee}};
    const struct CPU_State final_cpu = {.pc=0x9fc6, .a=0x0f, .x=0xaa, .y=0xb3, .sp=0xf7, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x9fc4, .value=0x88}, {.addr=0x9fc5, .value=0xee}};
    const struct BusEvent events[] = {
        {.addr=0x9fc4, .value=0x88, .type=IO_READ},
        {.addr=0x9fc5, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x0d1d, .a=0xa8, .x=0xa6, .y=0x63, .sp=0x02, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0d1d, .value=0x88}, {.addr=0x0d1e, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x0d1f, .a=0xd9, .x=0xa6, .y=0x63, .sp=0x02, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0d1d, .value=0x88}, {.addr=0x0d1e, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x0d1d, .value=0x88, .type=IO_READ},
        {.addr=0x0d1e, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x8dd0, .a=0x47, .x=0x7f, .y=0xbf, .sp=0x73, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x8dd0, .value=0x88}, {.addr=0x8dd1, .value=0xb0}};
    const struct CPU_State final_cpu = {.pc=0x8dd2, .a=0xf7, .x=0x7f, .y=0xbf, .sp=0x73, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x8dd0, .value=0x88}, {.addr=0x8dd1, .value=0xb0}};
    const struct BusEvent events[] = {
        {.addr=0x8dd0, .value=0x88, .type=IO_READ},
        {.addr=0x8dd1, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x1e0b, .a=0x33, .x=0x8a, .y=0xfc, .sp=0x89, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x1e0b, .value=0x88}, {.addr=0x1e0c, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0x1e0d, .a=0x4e, .x=0x8a, .y=0xfc, .sp=0x89, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x1e0b, .value=0x88}, {.addr=0x1e0c, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0x1e0b, .value=0x88, .type=IO_READ},
        {.addr=0x1e0c, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x9e36, .a=0x71, .x=0x66, .y=0xde, .sp=0x57, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x9e36, .value=0x88}, {.addr=0x9e37, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x9e38, .a=0xdf, .x=0x66, .y=0xde, .sp=0x57, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x9e36, .value=0x88}, {.addr=0x9e37, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x9e36, .value=0x88, .type=IO_READ},
        {.addr=0x9e37, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xe52e, .a=0x57, .x=0xc9, .y=0x6e, .sp=0xee, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0xe52e, .value=0x88}, {.addr=0xe52f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xe530, .a=0x05, .x=0xc9, .y=0x6e, .sp=0xee, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xe52e, .value=0x88}, {.addr=0xe52f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xe52e, .value=0x88, .type=IO_READ},
        {.addr=0xe52f, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02BD) {
    const struct CPU_State initial_cpu = {.pc=0xd609, .a=0xc5, .x=0xfe, .y=0x5f, .sp=0x68, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0xd609, .value=0x88}, {.addr=0xd60a, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0xd60b, .a=0x88, .x=0xfe, .y=0x5f, .sp=0x68, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xd609, .value=0x88}, {.addr=0xd60a, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0xd609, .value=0x88, .type=IO_READ},
        {.addr=0xd60a, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02BE) {
    const struct CPU_State initial_cpu = {.pc=0xa41b, .a=0xad, .x=0x47, .y=0x9c, .sp=0x0e, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0xa41b, .value=0x88}, {.addr=0xa41c, .value=0x09}};
    const struct CPU_State final_cpu = {.pc=0xa41d, .a=0xb7, .x=0x47, .y=0x9c, .sp=0x0e, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xa41b, .value=0x88}, {.addr=0xa41c, .value=0x09}};
    const struct BusEvent events[] = {
        {.addr=0xa41b, .value=0x88, .type=IO_READ},
        {.addr=0xa41c, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x527d, .a=0x06, .x=0x7c, .y=0x03, .sp=0x21, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x527d, .value=0x88}, {.addr=0x527e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0x527f, .a=0xad, .x=0x7c, .y=0x03, .sp=0x21, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x527d, .value=0x88}, {.addr=0x527e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0x527d, .value=0x88, .type=IO_READ},
        {.addr=0x527e, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02C0) {
    const struct CPU_State initial_cpu = {.pc=0x2fd7, .a=0x32, .x=0x63, .y=0x47, .sp=0x9a, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x2fd7, .value=0x88}, {.addr=0x2fd8, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x2fd9, .a=0x78, .x=0x63, .y=0x47, .sp=0x9a, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x2fd7, .value=0x88}, {.addr=0x2fd8, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x2fd7, .value=0x88, .type=IO_READ},
        {.addr=0x2fd8, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xe4fe, .a=0x25, .x=0xae, .y=0x70, .sp=0x44, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xe4fe, .value=0x88}, {.addr=0xe4ff, .value=0xd6}};
    const struct CPU_State final_cpu = {.pc=0xe500, .a=0xfc, .x=0xae, .y=0x70, .sp=0x44, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xe4fe, .value=0x88}, {.addr=0xe4ff, .value=0xd6}};
    const struct BusEvent events[] = {
        {.addr=0xe4fe, .value=0x88, .type=IO_READ},
        {.addr=0xe4ff, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x0840, .a=0x3e, .x=0x29, .y=0xdc, .sp=0xbc, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0840, .value=0x88}, {.addr=0x0841, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x0842, .a=0x79, .x=0x29, .y=0xdc, .sp=0xbc, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0840, .value=0x88}, {.addr=0x0841, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x0840, .value=0x88, .type=IO_READ},
        {.addr=0x0841, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x7afb, .a=0x32, .x=0x86, .y=0x40, .sp=0xee, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x7afb, .value=0x88}, {.addr=0x7afc, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x7afd, .a=0xfd, .x=0x86, .y=0x40, .sp=0xee, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x7afb, .value=0x88}, {.addr=0x7afc, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x7afb, .value=0x88, .type=IO_READ},
        {.addr=0x7afc, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x0863, .a=0xf7, .x=0x12, .y=0x4c, .sp=0x36, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0863, .value=0x88}, {.addr=0x0864, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x0865, .a=0x09, .x=0x12, .y=0x4c, .sp=0x36, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0863, .value=0x88}, {.addr=0x0864, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x0863, .value=0x88, .type=IO_READ},
        {.addr=0x0864, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02C5) {
    const struct CPU_State initial_cpu = {.pc=0xeb91, .a=0xd0, .x=0x14, .y=0x47, .sp=0x50, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xeb91, .value=0x88}, {.addr=0xeb92, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xeb93, .a=0x75, .x=0x14, .y=0x47, .sp=0x50, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0xeb91, .value=0x88}, {.addr=0xeb92, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xeb91, .value=0x88, .type=IO_READ},
        {.addr=0xeb92, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x6686, .a=0x70, .x=0x20, .y=0xe2, .sp=0x35, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x6686, .value=0x88}, {.addr=0x6687, .value=0x7b}};
    const struct CPU_State final_cpu = {.pc=0x6688, .a=0xec, .x=0x20, .y=0xe2, .sp=0x35, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x6686, .value=0x88}, {.addr=0x6687, .value=0x7b}};
    const struct BusEvent events[] = {
        {.addr=0x6686, .value=0x88, .type=IO_READ},
        {.addr=0x6687, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x9305, .a=0xa9, .x=0xf9, .y=0x40, .sp=0xf9, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x9305, .value=0x88}, {.addr=0x9306, .value=0x72}};
    const struct CPU_State final_cpu = {.pc=0x9307, .a=0x1b, .x=0xf9, .y=0x40, .sp=0xf9, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9305, .value=0x88}, {.addr=0x9306, .value=0x72}};
    const struct BusEvent events[] = {
        {.addr=0x9305, .value=0x88, .type=IO_READ},
        {.addr=0x9306, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x1f31, .a=0xcc, .x=0x90, .y=0x0a, .sp=0x8e, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x1f31, .value=0x88}, {.addr=0x1f32, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0x1f33, .a=0x50, .x=0x90, .y=0x0a, .sp=0x8e, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x1f31, .value=0x88}, {.addr=0x1f32, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0x1f31, .value=0x88, .type=IO_READ},
        {.addr=0x1f32, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xf618, .a=0x16, .x=0x01, .y=0xe3, .sp=0xb6, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0xf618, .value=0x88}, {.addr=0xf619, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xf61a, .a=0x7a, .x=0x01, .y=0xe3, .sp=0xb6, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0xf618, .value=0x88}, {.addr=0xf619, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xf618, .value=0x88, .type=IO_READ},
        {.addr=0xf619, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x7b22, .a=0x9c, .x=0xbe, .y=0xe9, .sp=0x76, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x7b22, .value=0x88}, {.addr=0x7b23, .value=0x34}};
    const struct CPU_State final_cpu = {.pc=0x7b24, .a=0xd1, .x=0xbe, .y=0xe9, .sp=0x76, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x7b22, .value=0x88}, {.addr=0x7b23, .value=0x34}};
    const struct BusEvent events[] = {
        {.addr=0x7b22, .value=0x88, .type=IO_READ},
        {.addr=0x7b23, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02CB) {
    const struct CPU_State initial_cpu = {.pc=0xfd09, .a=0x56, .x=0xbb, .y=0xe4, .sp=0x83, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0xfd09, .value=0x88}, {.addr=0xfd0a, .value=0x4e}};
    const struct CPU_State final_cpu = {.pc=0xfd0b, .a=0xa4, .x=0xbb, .y=0xe4, .sp=0x83, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0xfd09, .value=0x88}, {.addr=0xfd0a, .value=0x4e}};
    const struct BusEvent events[] = {
        {.addr=0xfd09, .value=0x88, .type=IO_READ},
        {.addr=0xfd0a, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xebdc, .a=0x8c, .x=0xba, .y=0x27, .sp=0xbd, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0xebdc, .value=0x88}, {.addr=0xebdd, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0xebde, .a=0xf4, .x=0xba, .y=0x27, .sp=0xbd, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xebdc, .value=0x88}, {.addr=0xebdd, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0xebdc, .value=0x88, .type=IO_READ},
        {.addr=0xebdd, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x8c8f, .a=0x44, .x=0x2e, .y=0x3c, .sp=0x70, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x8c8f, .value=0x88}, {.addr=0x8c90, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x8c91, .a=0xf0, .x=0x2e, .y=0x3c, .sp=0x70, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x8c8f, .value=0x88}, {.addr=0x8c90, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x8c8f, .value=0x88, .type=IO_READ},
        {.addr=0x8c90, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02CE) {
    const struct CPU_State initial_cpu = {.pc=0xd682, .a=0xe4, .x=0x4f, .y=0xc0, .sp=0x8c, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0xd682, .value=0x88}, {.addr=0xd683, .value=0x65}};
    const struct CPU_State final_cpu = {.pc=0xd684, .a=0x4a, .x=0x4f, .y=0xc0, .sp=0x8c, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xd682, .value=0x88}, {.addr=0xd683, .value=0x65}};
    const struct BusEvent events[] = {
        {.addr=0xd682, .value=0x88, .type=IO_READ},
        {.addr=0xd683, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02CF) {
    const struct CPU_State initial_cpu = {.pc=0xa373, .a=0xbb, .x=0xe5, .y=0x72, .sp=0xca, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0xa373, .value=0x88}, {.addr=0xa374, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0xa375, .a=0x13, .x=0xe5, .y=0x72, .sp=0xca, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xa373, .value=0x88}, {.addr=0xa374, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0xa373, .value=0x88, .type=IO_READ},
        {.addr=0xa374, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02D0) {
    const struct CPU_State initial_cpu = {.pc=0x234f, .a=0xb0, .x=0x5f, .y=0xe8, .sp=0x8f, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x234f, .value=0x88}, {.addr=0x2350, .value=0xc0}};
    const struct CPU_State final_cpu = {.pc=0x2351, .a=0x70, .x=0x5f, .y=0xe8, .sp=0x8f, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x234f, .value=0x88}, {.addr=0x2350, .value=0xc0}};
    const struct BusEvent events[] = {
        {.addr=0x234f, .value=0x88, .type=IO_READ},
        {.addr=0x2350, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x7535, .a=0x60, .x=0x6a, .y=0xa0, .sp=0x98, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x7535, .value=0x88}, {.addr=0x7536, .value=0xb4}};
    const struct CPU_State final_cpu = {.pc=0x7537, .a=0x14, .x=0x6a, .y=0xa0, .sp=0x98, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x7535, .value=0x88}, {.addr=0x7536, .value=0xb4}};
    const struct BusEvent events[] = {
        {.addr=0x7535, .value=0x88, .type=IO_READ},
        {.addr=0x7536, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x249a, .a=0x2f, .x=0x9c, .y=0x56, .sp=0x4c, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x249a, .value=0x88}, {.addr=0x249b, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x249c, .a=0xc7, .x=0x9c, .y=0x56, .sp=0x4c, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x249a, .value=0x88}, {.addr=0x249b, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x249a, .value=0x88, .type=IO_READ},
        {.addr=0x249b, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02D3) {
    const struct CPU_State initial_cpu = {.pc=0x438f, .a=0xd1, .x=0x94, .y=0xf9, .sp=0x42, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x438f, .value=0x88}, {.addr=0x4390, .value=0x51}};
    const struct CPU_State final_cpu = {.pc=0x4391, .a=0x23, .x=0x94, .y=0xf9, .sp=0x42, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x438f, .value=0x88}, {.addr=0x4390, .value=0x51}};
    const struct BusEvent events[] = {
        {.addr=0x438f, .value=0x88, .type=IO_READ},
        {.addr=0x4390, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x18d6, .a=0x2d, .x=0xc5, .y=0xbc, .sp=0xd0, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x18d6, .value=0x88}, {.addr=0x18d7, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x18d8, .a=0x1e, .x=0xc5, .y=0xbc, .sp=0xd0, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x18d6, .value=0x88}, {.addr=0x18d7, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x18d6, .value=0x88, .type=IO_READ},
        {.addr=0x18d7, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x5f48, .a=0xc2, .x=0xe3, .y=0x44, .sp=0x7d, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x5f48, .value=0x88}, {.addr=0x5f49, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0x5f4a, .a=0x8b, .x=0xe3, .y=0x44, .sp=0x7d, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x5f48, .value=0x88}, {.addr=0x5f49, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0x5f48, .value=0x88, .type=IO_READ},
        {.addr=0x5f49, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x8cdf, .a=0x18, .x=0x3b, .y=0xae, .sp=0xcc, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x8cdf, .value=0x88}, {.addr=0x8ce0, .value=0x2d}};
    const struct CPU_State final_cpu = {.pc=0x8ce1, .a=0x45, .x=0x3b, .y=0xae, .sp=0xcc, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x8cdf, .value=0x88}, {.addr=0x8ce0, .value=0x2d}};
    const struct BusEvent events[] = {
        {.addr=0x8cdf, .value=0x88, .type=IO_READ},
        {.addr=0x8ce0, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02D7) {
    const struct CPU_State initial_cpu = {.pc=0xa7ad, .a=0xb5, .x=0xa2, .y=0x92, .sp=0xf4, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0xa7ad, .value=0x88}, {.addr=0xa7ae, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xa7af, .a=0xcb, .x=0xa2, .y=0x92, .sp=0xf4, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xa7ad, .value=0x88}, {.addr=0xa7ae, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xa7ad, .value=0x88, .type=IO_READ},
        {.addr=0xa7ae, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xab25, .a=0xab, .x=0x38, .y=0xfd, .sp=0x7b, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0xab25, .value=0x88}, {.addr=0xab26, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xab27, .a=0xcc, .x=0x38, .y=0xfd, .sp=0x7b, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xab25, .value=0x88}, {.addr=0xab26, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xab25, .value=0x88, .type=IO_READ},
        {.addr=0xab26, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x428f, .a=0x7c, .x=0xdc, .y=0x7b, .sp=0x98, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x428f, .value=0x88}, {.addr=0x4290, .value=0x1e}};
    const struct CPU_State final_cpu = {.pc=0x4291, .a=0x9a, .x=0xdc, .y=0x7b, .sp=0x98, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x428f, .value=0x88}, {.addr=0x4290, .value=0x1e}};
    const struct BusEvent events[] = {
        {.addr=0x428f, .value=0x88, .type=IO_READ},
        {.addr=0x4290, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xd036, .a=0x62, .x=0xdd, .y=0x56, .sp=0x13, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0xd036, .value=0x88}, {.addr=0xd037, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xd038, .a=0xfe, .x=0xdd, .y=0x56, .sp=0x13, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xd036, .value=0x88}, {.addr=0xd037, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xd036, .value=0x88, .type=IO_READ},
        {.addr=0xd037, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xc405, .a=0x58, .x=0x98, .y=0x5f, .sp=0x8f, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0xc405, .value=0x88}, {.addr=0xc406, .value=0xe0}};
    const struct CPU_State final_cpu = {.pc=0xc407, .a=0x39, .x=0x98, .y=0x5f, .sp=0x8f, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xc405, .value=0x88}, {.addr=0xc406, .value=0xe0}};
    const struct BusEvent events[] = {
        {.addr=0xc405, .value=0x88, .type=IO_READ},
        {.addr=0xc406, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x3b9b, .a=0x4b, .x=0xc2, .y=0xae, .sp=0x91, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x3b9b, .value=0x88}, {.addr=0x3b9c, .value=0x17}};
    const struct CPU_State final_cpu = {.pc=0x3b9d, .a=0x63, .x=0xc2, .y=0xae, .sp=0x91, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x3b9b, .value=0x88}, {.addr=0x3b9c, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x3b9b, .value=0x88, .type=IO_READ},
        {.addr=0x3b9c, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x9c24, .a=0x6d, .x=0x82, .y=0xa6, .sp=0xa9, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x9c24, .value=0x88}, {.addr=0x9c25, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0x9c26, .a=0x76, .x=0x82, .y=0xa6, .sp=0xa9, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x9c24, .value=0x88}, {.addr=0x9c25, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0x9c24, .value=0x88, .type=IO_READ},
        {.addr=0x9c25, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02DE) {
    const struct CPU_State initial_cpu = {.pc=0xf510, .a=0xf8, .x=0x9d, .y=0x40, .sp=0x39, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xf510, .value=0x88}, {.addr=0xf511, .value=0x60}};
    const struct CPU_State final_cpu = {.pc=0xf512, .a=0x58, .x=0x9d, .y=0x40, .sp=0x39, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xf510, .value=0x88}, {.addr=0xf511, .value=0x60}};
    const struct BusEvent events[] = {
        {.addr=0xf510, .value=0x88, .type=IO_READ},
        {.addr=0xf511, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02DF) {
    const struct CPU_State initial_cpu = {.pc=0x0ef7, .a=0x94, .x=0x93, .y=0xec, .sp=0x30, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0ef7, .value=0x88}, {.addr=0x0ef8, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0x0ef9, .a=0x82, .x=0x93, .y=0xec, .sp=0x30, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0ef7, .value=0x88}, {.addr=0x0ef8, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0x0ef7, .value=0x88, .type=IO_READ},
        {.addr=0x0ef8, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x602b, .a=0x33, .x=0x27, .y=0xcf, .sp=0x3e, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x602b, .value=0x88}, {.addr=0x602c, .value=0xa1}};
    const struct CPU_State final_cpu = {.pc=0x602d, .a=0xd5, .x=0x27, .y=0xcf, .sp=0x3e, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x602b, .value=0x88}, {.addr=0x602c, .value=0xa1}};
    const struct BusEvent events[] = {
        {.addr=0x602b, .value=0x88, .type=IO_READ},
        {.addr=0x602c, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x61da, .a=0x47, .x=0x28, .y=0xda, .sp=0x3c, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x61da, .value=0x88}, {.addr=0x61db, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0x61dc, .a=0x46, .x=0x28, .y=0xda, .sp=0x3c, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x61da, .value=0x88}, {.addr=0x61db, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0x61da, .value=0x88, .type=IO_READ},
        {.addr=0x61db, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xd659, .a=0x6e, .x=0x4a, .y=0x54, .sp=0x2f, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0xd659, .value=0x88}, {.addr=0xd65a, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0xd65b, .a=0x8b, .x=0x4a, .y=0x54, .sp=0x2f, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xd659, .value=0x88}, {.addr=0xd65a, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0xd659, .value=0x88, .type=IO_READ},
        {.addr=0xd65a, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x9c88, .a=0x7a, .x=0x28, .y=0x9f, .sp=0xde, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x9c88, .value=0x88}, {.addr=0x9c89, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0x9c8a, .a=0x87, .x=0x28, .y=0x9f, .sp=0xde, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x9c88, .value=0x88}, {.addr=0x9c89, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0x9c88, .value=0x88, .type=IO_READ},
        {.addr=0x9c89, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02E4) {
    const struct CPU_State initial_cpu = {.pc=0xcb8e, .a=0xb4, .x=0x1f, .y=0x63, .sp=0xaf, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xcb8e, .value=0x88}, {.addr=0xcb8f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xcb90, .a=0x62, .x=0x1f, .y=0x63, .sp=0xaf, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xcb8e, .value=0x88}, {.addr=0xcb8f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xcb8e, .value=0x88, .type=IO_READ},
        {.addr=0xcb8f, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02E5) {
    const struct CPU_State initial_cpu = {.pc=0xc441, .a=0xdf, .x=0x3e, .y=0x1b, .sp=0xa6, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xc441, .value=0x88}, {.addr=0xc442, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xc443, .a=0x18, .x=0x3e, .y=0x1b, .sp=0xa6, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xc441, .value=0x88}, {.addr=0xc442, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xc441, .value=0x88, .type=IO_READ},
        {.addr=0xc442, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x07c6, .a=0x8d, .x=0x0a, .y=0x79, .sp=0xa5, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x07c6, .value=0x88}, {.addr=0x07c7, .value=0x43}};
    const struct CPU_State final_cpu = {.pc=0x07c8, .a=0xd1, .x=0x0a, .y=0x79, .sp=0xa5, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x07c6, .value=0x88}, {.addr=0x07c7, .value=0x43}};
    const struct BusEvent events[] = {
        {.addr=0x07c6, .value=0x88, .type=IO_READ},
        {.addr=0x07c7, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x0dd1, .a=0x48, .x=0x55, .y=0x94, .sp=0xf0, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0dd1, .value=0x88}, {.addr=0x0dd2, .value=0x02}};
    const struct CPU_State final_cpu = {.pc=0x0dd3, .a=0x4b, .x=0x55, .y=0x94, .sp=0xf0, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0dd1, .value=0x88}, {.addr=0x0dd2, .value=0x02}};
    const struct BusEvent events[] = {
        {.addr=0x0dd1, .value=0x88, .type=IO_READ},
        {.addr=0x0dd2, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x40c1, .a=0x0a, .x=0x9f, .y=0xc0, .sp=0xf7, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x40c1, .value=0x88}, {.addr=0x40c2, .value=0x8c}};
    const struct CPU_State final_cpu = {.pc=0x40c3, .a=0x97, .x=0x9f, .y=0xc0, .sp=0xf7, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x40c1, .value=0x88}, {.addr=0x40c2, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x40c1, .value=0x88, .type=IO_READ},
        {.addr=0x40c2, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x0ca9, .a=0x87, .x=0x8c, .y=0x3f, .sp=0x75, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0ca9, .value=0x88}, {.addr=0x0caa, .value=0x75}};
    const struct CPU_State final_cpu = {.pc=0x0cab, .a=0xfd, .x=0x8c, .y=0x3f, .sp=0x75, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0ca9, .value=0x88}, {.addr=0x0caa, .value=0x75}};
    const struct BusEvent events[] = {
        {.addr=0x0ca9, .value=0x88, .type=IO_READ},
        {.addr=0x0caa, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x5b21, .a=0x68, .x=0x87, .y=0xd5, .sp=0x84, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x5b21, .value=0x88}, {.addr=0x5b22, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x5b23, .a=0xb1, .x=0x87, .y=0xd5, .sp=0x84, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x5b21, .value=0x88}, {.addr=0x5b22, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x5b21, .value=0x88, .type=IO_READ},
        {.addr=0x5b22, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x7a0f, .a=0x8a, .x=0xec, .y=0x4e, .sp=0x9c, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x7a0f, .value=0x88}, {.addr=0x7a10, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0x7a11, .a=0x5a, .x=0xec, .y=0x4e, .sp=0x9c, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x7a0f, .value=0x88}, {.addr=0x7a10, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0x7a0f, .value=0x88, .type=IO_READ},
        {.addr=0x7a10, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02EC) {
    const struct CPU_State initial_cpu = {.pc=0x7c1e, .a=0x14, .x=0x07, .y=0x04, .sp=0xa5, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x7c1e, .value=0x88}, {.addr=0x7c1f, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0x7c20, .a=0xb5, .x=0x07, .y=0x04, .sp=0xa5, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x7c1e, .value=0x88}, {.addr=0x7c1f, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0x7c1e, .value=0x88, .type=IO_READ},
        {.addr=0x7c1f, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x54c6, .a=0x2d, .x=0x01, .y=0xb6, .sp=0xd8, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x54c6, .value=0x88}, {.addr=0x54c7, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x54c8, .a=0x96, .x=0x01, .y=0xb6, .sp=0xd8, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x54c6, .value=0x88}, {.addr=0x54c7, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x54c6, .value=0x88, .type=IO_READ},
        {.addr=0x54c7, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xdf7c, .a=0x00, .x=0x7a, .y=0x11, .sp=0xbe, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0xdf7c, .value=0x88}, {.addr=0xdf7d, .value=0xed}};
    const struct CPU_State final_cpu = {.pc=0xdf7e, .a=0xee, .x=0x7a, .y=0x11, .sp=0xbe, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xdf7c, .value=0x88}, {.addr=0xdf7d, .value=0xed}};
    const struct BusEvent events[] = {
        {.addr=0xdf7c, .value=0x88, .type=IO_READ},
        {.addr=0xdf7d, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x97c1, .a=0x41, .x=0xfc, .y=0xeb, .sp=0xbc, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x97c1, .value=0x88}, {.addr=0x97c2, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x97c3, .a=0x56, .x=0xfc, .y=0xeb, .sp=0xbc, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x97c1, .value=0x88}, {.addr=0x97c2, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x97c1, .value=0x88, .type=IO_READ},
        {.addr=0x97c2, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xda0a, .a=0x39, .x=0x60, .y=0xce, .sp=0x84, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0xda0a, .value=0x88}, {.addr=0xda0b, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0xda0c, .a=0x2b, .x=0x60, .y=0xce, .sp=0x84, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xda0a, .value=0x88}, {.addr=0xda0b, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0xda0a, .value=0x88, .type=IO_READ},
        {.addr=0xda0b, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x35ae, .a=0x1c, .x=0x42, .y=0x4b, .sp=0xe2, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x35ae, .value=0x88}, {.addr=0x35af, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x35b0, .a=0x87, .x=0x42, .y=0x4b, .sp=0xe2, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x35ae, .value=0x88}, {.addr=0x35af, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x35ae, .value=0x88, .type=IO_READ},
        {.addr=0x35af, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x26f1, .a=0x41, .x=0x27, .y=0x31, .sp=0x2b, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x26f1, .value=0x88}, {.addr=0x26f2, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x26f3, .a=0x2a, .x=0x27, .y=0x31, .sp=0x2b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x26f1, .value=0x88}, {.addr=0x26f2, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x26f1, .value=0x88, .type=IO_READ},
        {.addr=0x26f2, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02F3) {
    const struct CPU_State initial_cpu = {.pc=0x97bf, .a=0xad, .x=0xca, .y=0x84, .sp=0xd4, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x97bf, .value=0x88}, {.addr=0x97c0, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x97c1, .a=0xf3, .x=0xca, .y=0x84, .sp=0xd4, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x97bf, .value=0x88}, {.addr=0x97c0, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x97bf, .value=0x88, .type=IO_READ},
        {.addr=0x97c0, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xc167, .a=0x2e, .x=0x30, .y=0x47, .sp=0x11, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0xc167, .value=0x88}, {.addr=0xc168, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc169, .a=0xd5, .x=0x30, .y=0x47, .sp=0x11, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xc167, .value=0x88}, {.addr=0xc168, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc167, .value=0x88, .type=IO_READ},
        {.addr=0xc168, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xb043, .a=0xfa, .x=0x6e, .y=0xe6, .sp=0xbc, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0xb043, .value=0x88}, {.addr=0xb044, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0xb045, .a=0x9d, .x=0x6e, .y=0xe6, .sp=0xbc, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0xb043, .value=0x88}, {.addr=0xb044, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0xb043, .value=0x88, .type=IO_READ},
        {.addr=0xb044, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02F6) {
    const struct CPU_State initial_cpu = {.pc=0xbc17, .a=0x9b, .x=0x13, .y=0x6d, .sp=0x86, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xbc17, .value=0x88}, {.addr=0xbc18, .value=0x08}};
    const struct CPU_State final_cpu = {.pc=0xbc19, .a=0xa3, .x=0x13, .y=0x6d, .sp=0x86, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xbc17, .value=0x88}, {.addr=0xbc18, .value=0x08}};
    const struct BusEvent events[] = {
        {.addr=0xbc17, .value=0x88, .type=IO_READ},
        {.addr=0xbc18, .value=0x08, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x689d, .a=0xeb, .x=0x18, .y=0x20, .sp=0x58, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x689d, .value=0x88}, {.addr=0x689e, .value=0xc2}};
    const struct CPU_State final_cpu = {.pc=0x689f, .a=0xae, .x=0x18, .y=0x20, .sp=0x58, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x689d, .value=0x88}, {.addr=0x689e, .value=0xc2}};
    const struct BusEvent events[] = {
        {.addr=0x689d, .value=0x88, .type=IO_READ},
        {.addr=0x689e, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02F8) {
    const struct CPU_State initial_cpu = {.pc=0xd2ce, .a=0x62, .x=0x24, .y=0x89, .sp=0x1a, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0xd2ce, .value=0x88}, {.addr=0xd2cf, .value=0xa0}};
    const struct CPU_State final_cpu = {.pc=0xd2d0, .a=0x02, .x=0x24, .y=0x89, .sp=0x1a, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xd2ce, .value=0x88}, {.addr=0xd2cf, .value=0xa0}};
    const struct BusEvent events[] = {
        {.addr=0xd2ce, .value=0x88, .type=IO_READ},
        {.addr=0xd2cf, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02F9) {
    const struct CPU_State initial_cpu = {.pc=0xa29a, .a=0x6f, .x=0x40, .y=0xc9, .sp=0xbf, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xa29a, .value=0x88}, {.addr=0xa29b, .value=0xa7}};
    const struct CPU_State final_cpu = {.pc=0xa29c, .a=0x17, .x=0x40, .y=0xc9, .sp=0xbf, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0xa29a, .value=0x88}, {.addr=0xa29b, .value=0xa7}};
    const struct BusEvent events[] = {
        {.addr=0xa29a, .value=0x88, .type=IO_READ},
        {.addr=0xa29b, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02FA) {
    const struct CPU_State initial_cpu = {.pc=0x0e85, .a=0x3e, .x=0x07, .y=0x34, .sp=0x6c, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x0e85, .value=0x88}, {.addr=0x0e86, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x0e87, .a=0x2b, .x=0x07, .y=0x34, .sp=0x6c, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0e85, .value=0x88}, {.addr=0x0e86, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x0e85, .value=0x88, .type=IO_READ},
        {.addr=0x0e86, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x61bc, .a=0x87, .x=0x59, .y=0xfa, .sp=0x4d, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x61bc, .value=0x88}, {.addr=0x61bd, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x61be, .a=0x2b, .x=0x59, .y=0xfa, .sp=0x4d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x61bc, .value=0x88}, {.addr=0x61bd, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x61bc, .value=0x88, .type=IO_READ},
        {.addr=0x61bd, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xa2d0, .a=0xe2, .x=0x3e, .y=0x72, .sp=0x4d, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xa2d0, .value=0x88}, {.addr=0xa2d1, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xa2d2, .a=0x94, .x=0x3e, .y=0x72, .sp=0x4d, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0xa2d0, .value=0x88}, {.addr=0xa2d1, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xa2d0, .value=0x88, .type=IO_READ},
        {.addr=0xa2d1, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02FD) {
    const struct CPU_State initial_cpu = {.pc=0xc179, .a=0x9f, .x=0xfe, .y=0x76, .sp=0xfc, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0xc179, .value=0x88}, {.addr=0xc17a, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xc17b, .a=0xbe, .x=0xfe, .y=0x76, .sp=0xfc, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xc179, .value=0x88}, {.addr=0xc17a, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xc179, .value=0x88, .type=IO_READ},
        {.addr=0xc17a, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xb183, .a=0x16, .x=0x16, .y=0xcd, .sp=0x49, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xb183, .value=0x88}, {.addr=0xb184, .value=0xf3}};
    const struct CPU_State final_cpu = {.pc=0xb185, .a=0x0a, .x=0x16, .y=0xcd, .sp=0x49, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xb183, .value=0x88}, {.addr=0xb184, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0xb183, .value=0x88, .type=IO_READ},
        {.addr=0xb184, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_02FF) {
    const struct CPU_State initial_cpu = {.pc=0xf202, .a=0x72, .x=0x56, .y=0x24, .sp=0x95, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0xf202, .value=0x88}, {.addr=0xf203, .value=0x62}};
    const struct CPU_State final_cpu = {.pc=0xf204, .a=0xd4, .x=0x56, .y=0x24, .sp=0x95, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0xf202, .value=0x88}, {.addr=0xf203, .value=0x62}};
    const struct BusEvent events[] = {
        {.addr=0xf202, .value=0x88, .type=IO_READ},
        {.addr=0xf203, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0300) {
    const struct CPU_State initial_cpu = {.pc=0x76d2, .a=0xad, .x=0x2d, .y=0x16, .sp=0xcb, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x76d2, .value=0x88}, {.addr=0x76d3, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x76d4, .a=0xf4, .x=0x2d, .y=0x16, .sp=0xcb, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x76d2, .value=0x88}, {.addr=0x76d3, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x76d2, .value=0x88, .type=IO_READ},
        {.addr=0x76d3, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0301) {
    const struct CPU_State initial_cpu = {.pc=0x157c, .a=0x46, .x=0x37, .y=0x05, .sp=0xea, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x157c, .value=0x88}, {.addr=0x157d, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x157e, .a=0xe2, .x=0x37, .y=0x05, .sp=0xea, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x157c, .value=0x88}, {.addr=0x157d, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x157c, .value=0x88, .type=IO_READ},
        {.addr=0x157d, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0302) {
    const struct CPU_State initial_cpu = {.pc=0x95cf, .a=0xb9, .x=0x2a, .y=0x82, .sp=0xd8, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x95cf, .value=0x88}, {.addr=0x95d0, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x95d1, .a=0xcd, .x=0x2a, .y=0x82, .sp=0xd8, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x95cf, .value=0x88}, {.addr=0x95d0, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x95cf, .value=0x88, .type=IO_READ},
        {.addr=0x95d0, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0303) {
    const struct CPU_State initial_cpu = {.pc=0xbcc5, .a=0xe4, .x=0x2c, .y=0x9d, .sp=0xd6, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xbcc5, .value=0x88}, {.addr=0xbcc6, .value=0x1a}};
    const struct CPU_State final_cpu = {.pc=0xbcc7, .a=0xfe, .x=0x2c, .y=0x9d, .sp=0xd6, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xbcc5, .value=0x88}, {.addr=0xbcc6, .value=0x1a}};
    const struct BusEvent events[] = {
        {.addr=0xbcc5, .value=0x88, .type=IO_READ},
        {.addr=0xbcc6, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0304) {
    const struct CPU_State initial_cpu = {.pc=0x4875, .a=0x30, .x=0x1c, .y=0xc0, .sp=0x4d, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x4875, .value=0x88}, {.addr=0x4876, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0x4877, .a=0x54, .x=0x1c, .y=0xc0, .sp=0x4d, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x4875, .value=0x88}, {.addr=0x4876, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0x4875, .value=0x88, .type=IO_READ},
        {.addr=0x4876, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0305) {
    const struct CPU_State initial_cpu = {.pc=0x81c2, .a=0x98, .x=0x69, .y=0xa6, .sp=0x3e, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x81c2, .value=0x88}, {.addr=0x81c3, .value=0x53}};
    const struct CPU_State final_cpu = {.pc=0x81c4, .a=0xeb, .x=0x69, .y=0xa6, .sp=0x3e, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x81c2, .value=0x88}, {.addr=0x81c3, .value=0x53}};
    const struct BusEvent events[] = {
        {.addr=0x81c2, .value=0x88, .type=IO_READ},
        {.addr=0x81c3, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0306) {
    const struct CPU_State initial_cpu = {.pc=0x0dcd, .a=0xd6, .x=0xd0, .y=0x8e, .sp=0xbe, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x0dcd, .value=0x88}, {.addr=0x0dce, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x0dcf, .a=0xb3, .x=0xd0, .y=0x8e, .sp=0xbe, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0dcd, .value=0x88}, {.addr=0x0dce, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x0dcd, .value=0x88, .type=IO_READ},
        {.addr=0x0dce, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0307) {
    const struct CPU_State initial_cpu = {.pc=0xa326, .a=0x00, .x=0x08, .y=0xd8, .sp=0x2b, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0xa326, .value=0x88}, {.addr=0xa327, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0xa328, .a=0xc9, .x=0x08, .y=0xd8, .sp=0x2b, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xa326, .value=0x88}, {.addr=0xa327, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0xa326, .value=0x88, .type=IO_READ},
        {.addr=0xa327, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0308) {
    const struct CPU_State initial_cpu = {.pc=0x10cf, .a=0xa0, .x=0xfc, .y=0x72, .sp=0x59, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x10cf, .value=0x88}, {.addr=0x10d0, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0x10d1, .a=0x6c, .x=0xfc, .y=0x72, .sp=0x59, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x10cf, .value=0x88}, {.addr=0x10d0, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0x10cf, .value=0x88, .type=IO_READ},
        {.addr=0x10d0, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0309) {
    const struct CPU_State initial_cpu = {.pc=0x7c36, .a=0x6a, .x=0x2a, .y=0x83, .sp=0x13, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x7c36, .value=0x88}, {.addr=0x7c37, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x7c38, .a=0x3b, .x=0x2a, .y=0x83, .sp=0x13, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x7c36, .value=0x88}, {.addr=0x7c37, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x7c36, .value=0x88, .type=IO_READ},
        {.addr=0x7c37, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_030A) {
    const struct CPU_State initial_cpu = {.pc=0xe44d, .a=0x09, .x=0xb1, .y=0x75, .sp=0xd3, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xe44d, .value=0x88}, {.addr=0xe44e, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xe44f, .a=0xae, .x=0xb1, .y=0x75, .sp=0xd3, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xe44d, .value=0x88}, {.addr=0xe44e, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xe44d, .value=0x88, .type=IO_READ},
        {.addr=0xe44e, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_030B) {
    const struct CPU_State initial_cpu = {.pc=0xfe3c, .a=0x70, .x=0x35, .y=0xb1, .sp=0xb4, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0xfe3c, .value=0x88}, {.addr=0xfe3d, .value=0xe9}};
    const struct CPU_State final_cpu = {.pc=0xfe3e, .a=0x59, .x=0x35, .y=0xb1, .sp=0xb4, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xfe3c, .value=0x88}, {.addr=0xfe3d, .value=0xe9}};
    const struct BusEvent events[] = {
        {.addr=0xfe3c, .value=0x88, .type=IO_READ},
        {.addr=0xfe3d, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_030C) {
    const struct CPU_State initial_cpu = {.pc=0x57d2, .a=0xe7, .x=0x5a, .y=0xdb, .sp=0xe2, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x57d2, .value=0x88}, {.addr=0x57d3, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x57d4, .a=0x4f, .x=0x5a, .y=0xdb, .sp=0xe2, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x57d2, .value=0x88}, {.addr=0x57d3, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x57d2, .value=0x88, .type=IO_READ},
        {.addr=0x57d3, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_030D) {
    const struct CPU_State initial_cpu = {.pc=0xb2a5, .a=0xed, .x=0xe2, .y=0x0d, .sp=0x1d, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0xb2a5, .value=0x88}, {.addr=0xb2a6, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xb2a7, .a=0x9b, .x=0xe2, .y=0x0d, .sp=0x1d, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0xb2a5, .value=0x88}, {.addr=0xb2a6, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xb2a5, .value=0x88, .type=IO_READ},
        {.addr=0xb2a6, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_030E) {
    const struct CPU_State initial_cpu = {.pc=0x2cb8, .a=0x66, .x=0xd2, .y=0x77, .sp=0x28, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x2cb8, .value=0x88}, {.addr=0x2cb9, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0x2cba, .a=0x3c, .x=0xd2, .y=0x77, .sp=0x28, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x2cb8, .value=0x88}, {.addr=0x2cb9, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0x2cb8, .value=0x88, .type=IO_READ},
        {.addr=0x2cb9, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_030F) {
    const struct CPU_State initial_cpu = {.pc=0x4b6b, .a=0xf9, .x=0xe7, .y=0xee, .sp=0xb0, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x4b6b, .value=0x88}, {.addr=0x4b6c, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x4b6d, .a=0xeb, .x=0xe7, .y=0xee, .sp=0xb0, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x4b6b, .value=0x88}, {.addr=0x4b6c, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x4b6b, .value=0x88, .type=IO_READ},
        {.addr=0x4b6c, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0310) {
    const struct CPU_State initial_cpu = {.pc=0x11b8, .a=0x4f, .x=0x3b, .y=0x6a, .sp=0x83, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x11b8, .value=0x88}, {.addr=0x11b9, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x11ba, .a=0x5b, .x=0x3b, .y=0x6a, .sp=0x83, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x11b8, .value=0x88}, {.addr=0x11b9, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x11b8, .value=0x88, .type=IO_READ},
        {.addr=0x11b9, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0311) {
    const struct CPU_State initial_cpu = {.pc=0x9390, .a=0x8e, .x=0x37, .y=0x75, .sp=0x89, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x9390, .value=0x88}, {.addr=0x9391, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x9392, .a=0x2e, .x=0x37, .y=0x75, .sp=0x89, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x9390, .value=0x88}, {.addr=0x9391, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x9390, .value=0x88, .type=IO_READ},
        {.addr=0x9391, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0312) {
    const struct CPU_State initial_cpu = {.pc=0x6232, .a=0xe4, .x=0xc4, .y=0x5b, .sp=0x22, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x6232, .value=0x88}, {.addr=0x6233, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0x6234, .a=0xd5, .x=0xc4, .y=0x5b, .sp=0x22, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x6232, .value=0x88}, {.addr=0x6233, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0x6232, .value=0x88, .type=IO_READ},
        {.addr=0x6233, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0313) {
    const struct CPU_State initial_cpu = {.pc=0x4dbc, .a=0x17, .x=0x68, .y=0x2c, .sp=0xe6, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x4dbc, .value=0x88}, {.addr=0x4dbd, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x4dbe, .a=0x09, .x=0x68, .y=0x2c, .sp=0xe6, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x4dbc, .value=0x88}, {.addr=0x4dbd, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x4dbc, .value=0x88, .type=IO_READ},
        {.addr=0x4dbd, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0314) {
    const struct CPU_State initial_cpu = {.pc=0x4e86, .a=0x05, .x=0x98, .y=0x1c, .sp=0xb8, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x4e86, .value=0x88}, {.addr=0x4e87, .value=0xec}};
    const struct CPU_State final_cpu = {.pc=0x4e88, .a=0xf2, .x=0x98, .y=0x1c, .sp=0xb8, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x4e86, .value=0x88}, {.addr=0x4e87, .value=0xec}};
    const struct BusEvent events[] = {
        {.addr=0x4e86, .value=0x88, .type=IO_READ},
        {.addr=0x4e87, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0315) {
    const struct CPU_State initial_cpu = {.pc=0xd66c, .a=0x79, .x=0xcf, .y=0x67, .sp=0x1e, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0xd66c, .value=0x88}, {.addr=0xd66d, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0xd66e, .a=0x8f, .x=0xcf, .y=0x67, .sp=0x1e, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0xd66c, .value=0x88}, {.addr=0xd66d, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0xd66c, .value=0x88, .type=IO_READ},
        {.addr=0xd66d, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0316) {
    const struct CPU_State initial_cpu = {.pc=0x17f3, .a=0x2e, .x=0x73, .y=0x1a, .sp=0xe0, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x17f3, .value=0x88}, {.addr=0x17f4, .value=0x7d}};
    const struct CPU_State final_cpu = {.pc=0x17f5, .a=0xac, .x=0x73, .y=0x1a, .sp=0xe0, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x17f3, .value=0x88}, {.addr=0x17f4, .value=0x7d}};
    const struct BusEvent events[] = {
        {.addr=0x17f3, .value=0x88, .type=IO_READ},
        {.addr=0x17f4, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0317) {
    const struct CPU_State initial_cpu = {.pc=0xfdd3, .a=0x89, .x=0xed, .y=0xa1, .sp=0x62, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0xfdd3, .value=0x88}, {.addr=0xfdd4, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xfdd5, .a=0xd7, .x=0xed, .y=0xa1, .sp=0x62, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xfdd3, .value=0x88}, {.addr=0xfdd4, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xfdd3, .value=0x88, .type=IO_READ},
        {.addr=0xfdd4, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0318) {
    const struct CPU_State initial_cpu = {.pc=0x79ab, .a=0x8d, .x=0xff, .y=0x21, .sp=0x24, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x79ab, .value=0x88}, {.addr=0x79ac, .value=0xf2}};
    const struct CPU_State final_cpu = {.pc=0x79ad, .a=0x7f, .x=0xff, .y=0x21, .sp=0x24, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x79ab, .value=0x88}, {.addr=0x79ac, .value=0xf2}};
    const struct BusEvent events[] = {
        {.addr=0x79ab, .value=0x88, .type=IO_READ},
        {.addr=0x79ac, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0319) {
    const struct CPU_State initial_cpu = {.pc=0xc86e, .a=0x09, .x=0x4f, .y=0x17, .sp=0x36, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0xc86e, .value=0x88}, {.addr=0xc86f, .value=0x39}};
    const struct CPU_State final_cpu = {.pc=0xc870, .a=0x43, .x=0x4f, .y=0x17, .sp=0x36, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xc86e, .value=0x88}, {.addr=0xc86f, .value=0x39}};
    const struct BusEvent events[] = {
        {.addr=0xc86e, .value=0x88, .type=IO_READ},
        {.addr=0xc86f, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_031A) {
    const struct CPU_State initial_cpu = {.pc=0xc176, .a=0x83, .x=0x30, .y=0x65, .sp=0x18, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0xc176, .value=0x88}, {.addr=0xc177, .value=0x21}};
    const struct CPU_State final_cpu = {.pc=0xc178, .a=0xa4, .x=0x30, .y=0x65, .sp=0x18, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0xc176, .value=0x88}, {.addr=0xc177, .value=0x21}};
    const struct BusEvent events[] = {
        {.addr=0xc176, .value=0x88, .type=IO_READ},
        {.addr=0xc177, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_031B) {
    const struct CPU_State initial_cpu = {.pc=0xc27d, .a=0x2a, .x=0xfc, .y=0x44, .sp=0xa0, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0xc27d, .value=0x88}, {.addr=0xc27e, .value=0xa6}};
    const struct CPU_State final_cpu = {.pc=0xc27f, .a=0xd1, .x=0xfc, .y=0x44, .sp=0xa0, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xc27d, .value=0x88}, {.addr=0xc27e, .value=0xa6}};
    const struct BusEvent events[] = {
        {.addr=0xc27d, .value=0x88, .type=IO_READ},
        {.addr=0xc27e, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_031C) {
    const struct CPU_State initial_cpu = {.pc=0x0e01, .a=0x98, .x=0x78, .y=0x32, .sp=0x88, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0e01, .value=0x88}, {.addr=0x0e02, .value=0x46}};
    const struct CPU_State final_cpu = {.pc=0x0e03, .a=0xde, .x=0x78, .y=0x32, .sp=0x88, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0e01, .value=0x88}, {.addr=0x0e02, .value=0x46}};
    const struct BusEvent events[] = {
        {.addr=0x0e01, .value=0x88, .type=IO_READ},
        {.addr=0x0e02, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_031D) {
    const struct CPU_State initial_cpu = {.pc=0x4bab, .a=0x64, .x=0x11, .y=0x8f, .sp=0xc7, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x4bab, .value=0x88}, {.addr=0x4bac, .value=0x19}};
    const struct CPU_State final_cpu = {.pc=0x4bad, .a=0x7e, .x=0x11, .y=0x8f, .sp=0xc7, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x4bab, .value=0x88}, {.addr=0x4bac, .value=0x19}};
    const struct BusEvent events[] = {
        {.addr=0x4bab, .value=0x88, .type=IO_READ},
        {.addr=0x4bac, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_031E) {
    const struct CPU_State initial_cpu = {.pc=0xddbd, .a=0x41, .x=0x1e, .y=0xf9, .sp=0x93, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0xddbd, .value=0x88}, {.addr=0xddbe, .value=0xc3}};
    const struct CPU_State final_cpu = {.pc=0xddbf, .a=0x04, .x=0x1e, .y=0xf9, .sp=0x93, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xddbd, .value=0x88}, {.addr=0xddbe, .value=0xc3}};
    const struct BusEvent events[] = {
        {.addr=0xddbd, .value=0x88, .type=IO_READ},
        {.addr=0xddbe, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_031F) {
    const struct CPU_State initial_cpu = {.pc=0xed6a, .a=0xcb, .x=0xe2, .y=0x2a, .sp=0x77, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xed6a, .value=0x88}, {.addr=0xed6b, .value=0x78}};
    const struct CPU_State final_cpu = {.pc=0xed6c, .a=0x43, .x=0xe2, .y=0x2a, .sp=0x77, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xed6a, .value=0x88}, {.addr=0xed6b, .value=0x78}};
    const struct BusEvent events[] = {
        {.addr=0xed6a, .value=0x88, .type=IO_READ},
        {.addr=0xed6b, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0320) {
    const struct CPU_State initial_cpu = {.pc=0xd65f, .a=0xd0, .x=0x95, .y=0xe5, .sp=0x14, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0xd65f, .value=0x88}, {.addr=0xd660, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0xd661, .a=0x3d, .x=0x95, .y=0xe5, .sp=0x14, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xd65f, .value=0x88}, {.addr=0xd660, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0xd65f, .value=0x88, .type=IO_READ},
        {.addr=0xd660, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0321) {
    const struct CPU_State initial_cpu = {.pc=0xeec1, .a=0x6a, .x=0xa7, .y=0xb2, .sp=0x79, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0xeec1, .value=0x88}, {.addr=0xeec2, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xeec3, .a=0x48, .x=0xa7, .y=0xb2, .sp=0x79, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xeec1, .value=0x88}, {.addr=0xeec2, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xeec1, .value=0x88, .type=IO_READ},
        {.addr=0xeec2, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0322) {
    const struct CPU_State initial_cpu = {.pc=0xcfbd, .a=0xdc, .x=0xa0, .y=0x42, .sp=0x6e, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0xcfbd, .value=0x88}, {.addr=0xcfbe, .value=0x2a}};
    const struct CPU_State final_cpu = {.pc=0xcfbf, .a=0x06, .x=0xa0, .y=0x42, .sp=0x6e, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xcfbd, .value=0x88}, {.addr=0xcfbe, .value=0x2a}};
    const struct BusEvent events[] = {
        {.addr=0xcfbd, .value=0x88, .type=IO_READ},
        {.addr=0xcfbe, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0323) {
    const struct CPU_State initial_cpu = {.pc=0x9dd7, .a=0x62, .x=0xf8, .y=0x5c, .sp=0x0c, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x9dd7, .value=0x88}, {.addr=0x9dd8, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0x9dd9, .a=0x7d, .x=0xf8, .y=0x5c, .sp=0x0c, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x9dd7, .value=0x88}, {.addr=0x9dd8, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0x9dd7, .value=0x88, .type=IO_READ},
        {.addr=0x9dd8, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0324) {
    const struct CPU_State initial_cpu = {.pc=0x1f91, .a=0x97, .x=0xcd, .y=0x03, .sp=0xda, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x1f91, .value=0x88}, {.addr=0x1f92, .value=0x57}};
    const struct CPU_State final_cpu = {.pc=0x1f93, .a=0xef, .x=0xcd, .y=0x03, .sp=0xda, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x1f91, .value=0x88}, {.addr=0x1f92, .value=0x57}};
    const struct BusEvent events[] = {
        {.addr=0x1f91, .value=0x88, .type=IO_READ},
        {.addr=0x1f92, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0325) {
    const struct CPU_State initial_cpu = {.pc=0xc80d, .a=0x69, .x=0x90, .y=0xe5, .sp=0x80, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0xc80d, .value=0x88}, {.addr=0xc80e, .value=0xba}};
    const struct CPU_State final_cpu = {.pc=0xc80f, .a=0x24, .x=0x90, .y=0xe5, .sp=0x80, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xc80d, .value=0x88}, {.addr=0xc80e, .value=0xba}};
    const struct BusEvent events[] = {
        {.addr=0xc80d, .value=0x88, .type=IO_READ},
        {.addr=0xc80e, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0326) {
    const struct CPU_State initial_cpu = {.pc=0x21cb, .a=0xec, .x=0xdb, .y=0x22, .sp=0x8d, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x21cb, .value=0x88}, {.addr=0x21cc, .value=0x92}};
    const struct CPU_State final_cpu = {.pc=0x21cd, .a=0x7e, .x=0xdb, .y=0x22, .sp=0x8d, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x21cb, .value=0x88}, {.addr=0x21cc, .value=0x92}};
    const struct BusEvent events[] = {
        {.addr=0x21cb, .value=0x88, .type=IO_READ},
        {.addr=0x21cc, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0327) {
    const struct CPU_State initial_cpu = {.pc=0x98be, .a=0xd2, .x=0x6c, .y=0x76, .sp=0xe1, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x98be, .value=0x88}, {.addr=0x98bf, .value=0x05}};
    const struct CPU_State final_cpu = {.pc=0x98c0, .a=0xd7, .x=0x6c, .y=0x76, .sp=0xe1, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x98be, .value=0x88}, {.addr=0x98bf, .value=0x05}};
    const struct BusEvent events[] = {
        {.addr=0x98be, .value=0x88, .type=IO_READ},
        {.addr=0x98bf, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0328) {
    const struct CPU_State initial_cpu = {.pc=0x56dc, .a=0x3c, .x=0x99, .y=0x7a, .sp=0x0a, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x56dc, .value=0x88}, {.addr=0x56dd, .value=0x3f}};
    const struct CPU_State final_cpu = {.pc=0x56de, .a=0x7b, .x=0x99, .y=0x7a, .sp=0x0a, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x56dc, .value=0x88}, {.addr=0x56dd, .value=0x3f}};
    const struct BusEvent events[] = {
        {.addr=0x56dc, .value=0x88, .type=IO_READ},
        {.addr=0x56dd, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0329) {
    const struct CPU_State initial_cpu = {.pc=0xda67, .a=0x8b, .x=0x2a, .y=0xff, .sp=0x4f, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xda67, .value=0x88}, {.addr=0xda68, .value=0x52}};
    const struct CPU_State final_cpu = {.pc=0xda69, .a=0xde, .x=0x2a, .y=0xff, .sp=0x4f, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0xda67, .value=0x88}, {.addr=0xda68, .value=0x52}};
    const struct BusEvent events[] = {
        {.addr=0xda67, .value=0x88, .type=IO_READ},
        {.addr=0xda68, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_032A) {
    const struct CPU_State initial_cpu = {.pc=0x5e82, .a=0x7a, .x=0x41, .y=0x84, .sp=0x55, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x5e82, .value=0x88}, {.addr=0x5e83, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x5e84, .a=0x0e, .x=0x41, .y=0x84, .sp=0x55, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x5e82, .value=0x88}, {.addr=0x5e83, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x5e82, .value=0x88, .type=IO_READ},
        {.addr=0x5e83, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_032B) {
    const struct CPU_State initial_cpu = {.pc=0x1b44, .a=0xfb, .x=0xf7, .y=0x3b, .sp=0x40, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x1b44, .value=0x88}, {.addr=0x1b45, .value=0x40}};
    const struct CPU_State final_cpu = {.pc=0x1b46, .a=0x3b, .x=0xf7, .y=0x3b, .sp=0x40, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x1b44, .value=0x88}, {.addr=0x1b45, .value=0x40}};
    const struct BusEvent events[] = {
        {.addr=0x1b44, .value=0x88, .type=IO_READ},
        {.addr=0x1b45, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_032C) {
    const struct CPU_State initial_cpu = {.pc=0x80df, .a=0xcb, .x=0x6a, .y=0xd6, .sp=0x50, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x80df, .value=0x88}, {.addr=0x80e0, .value=0x10}};
    const struct CPU_State final_cpu = {.pc=0x80e1, .a=0xdc, .x=0x6a, .y=0xd6, .sp=0x50, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x80df, .value=0x88}, {.addr=0x80e0, .value=0x10}};
    const struct BusEvent events[] = {
        {.addr=0x80df, .value=0x88, .type=IO_READ},
        {.addr=0x80e0, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_032D) {
    const struct CPU_State initial_cpu = {.pc=0xd222, .a=0x73, .x=0x47, .y=0x26, .sp=0xee, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0xd222, .value=0x88}, {.addr=0xd223, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0xd224, .a=0x50, .x=0x47, .y=0x26, .sp=0xee, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0xd222, .value=0x88}, {.addr=0xd223, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0xd222, .value=0x88, .type=IO_READ},
        {.addr=0xd223, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_032E) {
    const struct CPU_State initial_cpu = {.pc=0x3773, .a=0xf4, .x=0x4a, .y=0x73, .sp=0x8c, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x3773, .value=0x88}, {.addr=0x3774, .value=0xe6}};
    const struct CPU_State final_cpu = {.pc=0x3775, .a=0xdb, .x=0x4a, .y=0x73, .sp=0x8c, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x3773, .value=0x88}, {.addr=0x3774, .value=0xe6}};
    const struct BusEvent events[] = {
        {.addr=0x3773, .value=0x88, .type=IO_READ},
        {.addr=0x3774, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_032F) {
    const struct CPU_State initial_cpu = {.pc=0xc76e, .a=0xd2, .x=0x97, .y=0x1a, .sp=0x77, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0xc76e, .value=0x88}, {.addr=0xc76f, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xc770, .a=0xfd, .x=0x97, .y=0x1a, .sp=0x77, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xc76e, .value=0x88}, {.addr=0xc76f, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xc76e, .value=0x88, .type=IO_READ},
        {.addr=0xc76f, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0330) {
    const struct CPU_State initial_cpu = {.pc=0x29d5, .a=0x74, .x=0xc1, .y=0x03, .sp=0xf4, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x29d5, .value=0x88}, {.addr=0x29d6, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0x29d7, .a=0x28, .x=0xc1, .y=0x03, .sp=0xf4, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x29d5, .value=0x88}, {.addr=0x29d6, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0x29d5, .value=0x88, .type=IO_READ},
        {.addr=0x29d6, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0331) {
    const struct CPU_State initial_cpu = {.pc=0xd5e4, .a=0x01, .x=0xca, .y=0xba, .sp=0x6f, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0xd5e4, .value=0x88}, {.addr=0xd5e5, .value=0xa5}};
    const struct CPU_State final_cpu = {.pc=0xd5e6, .a=0xa6, .x=0xca, .y=0xba, .sp=0x6f, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xd5e4, .value=0x88}, {.addr=0xd5e5, .value=0xa5}};
    const struct BusEvent events[] = {
        {.addr=0xd5e4, .value=0x88, .type=IO_READ},
        {.addr=0xd5e5, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0332) {
    const struct CPU_State initial_cpu = {.pc=0x276f, .a=0xcf, .x=0x18, .y=0xb7, .sp=0x6d, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x276f, .value=0x88}, {.addr=0x2770, .value=0x93}};
    const struct CPU_State final_cpu = {.pc=0x2771, .a=0x63, .x=0x18, .y=0xb7, .sp=0x6d, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x276f, .value=0x88}, {.addr=0x2770, .value=0x93}};
    const struct BusEvent events[] = {
        {.addr=0x276f, .value=0x88, .type=IO_READ},
        {.addr=0x2770, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0333) {
    const struct CPU_State initial_cpu = {.pc=0xe140, .a=0x53, .x=0x5b, .y=0xf7, .sp=0x33, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xe140, .value=0x88}, {.addr=0xe141, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xe142, .a=0xd2, .x=0x5b, .y=0xf7, .sp=0x33, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xe140, .value=0x88}, {.addr=0xe141, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xe140, .value=0x88, .type=IO_READ},
        {.addr=0xe141, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0334) {
    const struct CPU_State initial_cpu = {.pc=0x53dc, .a=0x73, .x=0x6f, .y=0xe7, .sp=0xea, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x53dc, .value=0x88}, {.addr=0x53dd, .value=0x6b}};
    const struct CPU_State final_cpu = {.pc=0x53de, .a=0xde, .x=0x6f, .y=0xe7, .sp=0xea, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x53dc, .value=0x88}, {.addr=0x53dd, .value=0x6b}};
    const struct BusEvent events[] = {
        {.addr=0x53dc, .value=0x88, .type=IO_READ},
        {.addr=0x53dd, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0335) {
    const struct CPU_State initial_cpu = {.pc=0x3da4, .a=0xbe, .x=0xfc, .y=0x87, .sp=0xe9, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x3da4, .value=0x88}, {.addr=0x3da5, .value=0x80}};
    const struct CPU_State final_cpu = {.pc=0x3da6, .a=0x3f, .x=0xfc, .y=0x87, .sp=0xe9, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x3da4, .value=0x88}, {.addr=0x3da5, .value=0x80}};
    const struct BusEvent events[] = {
        {.addr=0x3da4, .value=0x88, .type=IO_READ},
        {.addr=0x3da5, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0336) {
    const struct CPU_State initial_cpu = {.pc=0x6e85, .a=0xd8, .x=0x37, .y=0x5b, .sp=0x9d, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x6e85, .value=0x88}, {.addr=0x6e86, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x6e87, .a=0xf7, .x=0x37, .y=0x5b, .sp=0x9d, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x6e85, .value=0x88}, {.addr=0x6e86, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x6e85, .value=0x88, .type=IO_READ},
        {.addr=0x6e86, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0337) {
    const struct CPU_State initial_cpu = {.pc=0xcd52, .a=0x44, .x=0x8d, .y=0xa2, .sp=0x92, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0xcd52, .value=0x88}, {.addr=0xcd53, .value=0x94}};
    const struct CPU_State final_cpu = {.pc=0xcd54, .a=0xd9, .x=0x8d, .y=0xa2, .sp=0x92, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0xcd52, .value=0x88}, {.addr=0xcd53, .value=0x94}};
    const struct BusEvent events[] = {
        {.addr=0xcd52, .value=0x88, .type=IO_READ},
        {.addr=0xcd53, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0338) {
    const struct CPU_State initial_cpu = {.pc=0x4919, .a=0x02, .x=0x71, .y=0x9d, .sp=0x5e, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x4919, .value=0x88}, {.addr=0x491a, .value=0x61}};
    const struct CPU_State final_cpu = {.pc=0x491b, .a=0x64, .x=0x71, .y=0x9d, .sp=0x5e, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x4919, .value=0x88}, {.addr=0x491a, .value=0x61}};
    const struct BusEvent events[] = {
        {.addr=0x4919, .value=0x88, .type=IO_READ},
        {.addr=0x491a, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0339) {
    const struct CPU_State initial_cpu = {.pc=0xea0e, .a=0x77, .x=0x68, .y=0xba, .sp=0xe1, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0xea0e, .value=0x88}, {.addr=0xea0f, .value=0x48}};
    const struct CPU_State final_cpu = {.pc=0xea10, .a=0xbf, .x=0x68, .y=0xba, .sp=0xe1, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0xea0e, .value=0x88}, {.addr=0xea0f, .value=0x48}};
    const struct BusEvent events[] = {
        {.addr=0xea0e, .value=0x88, .type=IO_READ},
        {.addr=0xea0f, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_033A) {
    const struct CPU_State initial_cpu = {.pc=0xa6a8, .a=0xb1, .x=0xf1, .y=0xaa, .sp=0x92, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0xa6a8, .value=0x88}, {.addr=0xa6a9, .value=0xfb}};
    const struct CPU_State final_cpu = {.pc=0xa6aa, .a=0xad, .x=0xf1, .y=0xaa, .sp=0x92, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0xa6a8, .value=0x88}, {.addr=0xa6a9, .value=0xfb}};
    const struct BusEvent events[] = {
        {.addr=0xa6a8, .value=0x88, .type=IO_READ},
        {.addr=0xa6a9, .value=0xfb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_033B) {
    const struct CPU_State initial_cpu = {.pc=0x38e2, .a=0x52, .x=0xd0, .y=0x95, .sp=0x86, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x38e2, .value=0x88}, {.addr=0x38e3, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x38e4, .a=0x9d, .x=0xd0, .y=0x95, .sp=0x86, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x38e2, .value=0x88}, {.addr=0x38e3, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x38e2, .value=0x88, .type=IO_READ},
        {.addr=0x38e3, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_033C) {
    const struct CPU_State initial_cpu = {.pc=0x21ac, .a=0xea, .x=0x5e, .y=0x31, .sp=0x6d, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x21ac, .value=0x88}, {.addr=0x21ad, .value=0x69}};
    const struct CPU_State final_cpu = {.pc=0x21ae, .a=0x53, .x=0x5e, .y=0x31, .sp=0x6d, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x21ac, .value=0x88}, {.addr=0x21ad, .value=0x69}};
    const struct BusEvent events[] = {
        {.addr=0x21ac, .value=0x88, .type=IO_READ},
        {.addr=0x21ad, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_033D) {
    const struct CPU_State initial_cpu = {.pc=0x8cb0, .a=0xa8, .x=0x42, .y=0x50, .sp=0x7c, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x8cb0, .value=0x88}, {.addr=0x8cb1, .value=0xab}};
    const struct CPU_State final_cpu = {.pc=0x8cb2, .a=0x54, .x=0x42, .y=0x50, .sp=0x7c, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x8cb0, .value=0x88}, {.addr=0x8cb1, .value=0xab}};
    const struct BusEvent events[] = {
        {.addr=0x8cb0, .value=0x88, .type=IO_READ},
        {.addr=0x8cb1, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_033E) {
    const struct CPU_State initial_cpu = {.pc=0xee1d, .a=0x4a, .x=0xd2, .y=0xbc, .sp=0xac, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0xee1d, .value=0x88}, {.addr=0xee1e, .value=0x3b}};
    const struct CPU_State final_cpu = {.pc=0xee1f, .a=0x85, .x=0xd2, .y=0xbc, .sp=0xac, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0xee1d, .value=0x88}, {.addr=0xee1e, .value=0x3b}};
    const struct BusEvent events[] = {
        {.addr=0xee1d, .value=0x88, .type=IO_READ},
        {.addr=0xee1e, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_033F) {
    const struct CPU_State initial_cpu = {.pc=0x7733, .a=0xd7, .x=0xd7, .y=0x6a, .sp=0xa9, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x7733, .value=0x88}, {.addr=0x7734, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x7735, .a=0x14, .x=0xd7, .y=0x6a, .sp=0xa9, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x7733, .value=0x88}, {.addr=0x7734, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x7733, .value=0x88, .type=IO_READ},
        {.addr=0x7734, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0340) {
    const struct CPU_State initial_cpu = {.pc=0xe707, .a=0xd9, .x=0xd4, .y=0x50, .sp=0xd7, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xe707, .value=0x88}, {.addr=0xe708, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xe709, .a=0xd3, .x=0xd4, .y=0x50, .sp=0xd7, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0xe707, .value=0x88}, {.addr=0xe708, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xe707, .value=0x88, .type=IO_READ},
        {.addr=0xe708, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0341) {
    const struct CPU_State initial_cpu = {.pc=0x83a2, .a=0xc5, .x=0x2b, .y=0x1f, .sp=0x87, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x83a2, .value=0x88}, {.addr=0x83a3, .value=0x98}};
    const struct CPU_State final_cpu = {.pc=0x83a4, .a=0x5e, .x=0x2b, .y=0x1f, .sp=0x87, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x83a2, .value=0x88}, {.addr=0x83a3, .value=0x98}};
    const struct BusEvent events[] = {
        {.addr=0x83a2, .value=0x88, .type=IO_READ},
        {.addr=0x83a3, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0342) {
    const struct CPU_State initial_cpu = {.pc=0x2052, .a=0x22, .x=0x6e, .y=0x0f, .sp=0xb0, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x2052, .value=0x88}, {.addr=0x2053, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x2054, .a=0x27, .x=0x6e, .y=0x0f, .sp=0xb0, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x2052, .value=0x88}, {.addr=0x2053, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x2052, .value=0x88, .type=IO_READ},
        {.addr=0x2053, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0343) {
    const struct CPU_State initial_cpu = {.pc=0x6c1e, .a=0xe3, .x=0x8d, .y=0x3e, .sp=0x12, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x6c1e, .value=0x88}, {.addr=0x6c1f, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x6c20, .a=0xb4, .x=0x8d, .y=0x3e, .sp=0x12, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x6c1e, .value=0x88}, {.addr=0x6c1f, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x6c1e, .value=0x88, .type=IO_READ},
        {.addr=0x6c1f, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0344) {
    const struct CPU_State initial_cpu = {.pc=0x9497, .a=0xed, .x=0xba, .y=0xbe, .sp=0xb5, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x9497, .value=0x88}, {.addr=0x9498, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x9499, .a=0x6e, .x=0xba, .y=0xbe, .sp=0xb5, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x9497, .value=0x88}, {.addr=0x9498, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x9497, .value=0x88, .type=IO_READ},
        {.addr=0x9498, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0345) {
    const struct CPU_State initial_cpu = {.pc=0x06d7, .a=0x74, .x=0xb3, .y=0xb5, .sp=0x8d, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x06d7, .value=0x88}, {.addr=0x06d8, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0x06d9, .a=0xba, .x=0xb3, .y=0xb5, .sp=0x8d, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x06d7, .value=0x88}, {.addr=0x06d8, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0x06d7, .value=0x88, .type=IO_READ},
        {.addr=0x06d8, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0346) {
    const struct CPU_State initial_cpu = {.pc=0x2025, .a=0xfb, .x=0x54, .y=0x9d, .sp=0x5a, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x2025, .value=0x88}, {.addr=0x2026, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x2027, .a=0xf8, .x=0x54, .y=0x9d, .sp=0x5a, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x2025, .value=0x88}, {.addr=0x2026, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x2025, .value=0x88, .type=IO_READ},
        {.addr=0x2026, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0347) {
    const struct CPU_State initial_cpu = {.pc=0x3563, .a=0xfa, .x=0x47, .y=0xd3, .sp=0x00, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x3563, .value=0x88}, {.addr=0x3564, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x3565, .a=0xd7, .x=0x47, .y=0xd3, .sp=0x00, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x3563, .value=0x88}, {.addr=0x3564, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x3563, .value=0x88, .type=IO_READ},
        {.addr=0x3564, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0348) {
    const struct CPU_State initial_cpu = {.pc=0x8572, .a=0x22, .x=0x50, .y=0xa6, .sp=0x7e, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x8572, .value=0x88}, {.addr=0x8573, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x8574, .a=0xee, .x=0x50, .y=0xa6, .sp=0x7e, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x8572, .value=0x88}, {.addr=0x8573, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x8572, .value=0x88, .type=IO_READ},
        {.addr=0x8573, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0349) {
    const struct CPU_State initial_cpu = {.pc=0xa856, .a=0xb1, .x=0xa1, .y=0xbb, .sp=0x12, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0xa856, .value=0x88}, {.addr=0xa857, .value=0x6c}};
    const struct CPU_State final_cpu = {.pc=0xa858, .a=0x1d, .x=0xa1, .y=0xbb, .sp=0x12, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xa856, .value=0x88}, {.addr=0xa857, .value=0x6c}};
    const struct BusEvent events[] = {
        {.addr=0xa856, .value=0x88, .type=IO_READ},
        {.addr=0xa857, .value=0x6c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_034A) {
    const struct CPU_State initial_cpu = {.pc=0xf16a, .a=0xe5, .x=0xfb, .y=0x78, .sp=0x91, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0xf16a, .value=0x88}, {.addr=0xf16b, .value=0xe5}};
    const struct CPU_State final_cpu = {.pc=0xf16c, .a=0xca, .x=0xfb, .y=0x78, .sp=0x91, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0xf16a, .value=0x88}, {.addr=0xf16b, .value=0xe5}};
    const struct BusEvent events[] = {
        {.addr=0xf16a, .value=0x88, .type=IO_READ},
        {.addr=0xf16b, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_034B) {
    const struct CPU_State initial_cpu = {.pc=0x0772, .a=0xe1, .x=0x20, .y=0x0d, .sp=0x5c, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0772, .value=0x88}, {.addr=0x0773, .value=0x77}};
    const struct CPU_State final_cpu = {.pc=0x0774, .a=0x59, .x=0x20, .y=0x0d, .sp=0x5c, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0772, .value=0x88}, {.addr=0x0773, .value=0x77}};
    const struct BusEvent events[] = {
        {.addr=0x0772, .value=0x88, .type=IO_READ},
        {.addr=0x0773, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_034C) {
    const struct CPU_State initial_cpu = {.pc=0x4072, .a=0x2e, .x=0x25, .y=0x0c, .sp=0x36, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x4072, .value=0x88}, {.addr=0x4073, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0x4074, .a=0xb6, .x=0x25, .y=0x0c, .sp=0x36, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x4072, .value=0x88}, {.addr=0x4073, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0x4072, .value=0x88, .type=IO_READ},
        {.addr=0x4073, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_034D) {
    const struct CPU_State initial_cpu = {.pc=0x525a, .a=0x54, .x=0xf8, .y=0xa9, .sp=0x78, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x525a, .value=0x88}, {.addr=0x525b, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0x525c, .a=0x3d, .x=0xf8, .y=0xa9, .sp=0x78, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x525a, .value=0x88}, {.addr=0x525b, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0x525a, .value=0x88, .type=IO_READ},
        {.addr=0x525b, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_034E) {
    const struct CPU_State initial_cpu = {.pc=0xafa7, .a=0x56, .x=0xce, .y=0x31, .sp=0x09, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0xafa7, .value=0x88}, {.addr=0xafa8, .value=0x23}};
    const struct CPU_State final_cpu = {.pc=0xafa9, .a=0x7a, .x=0xce, .y=0x31, .sp=0x09, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0xafa7, .value=0x88}, {.addr=0xafa8, .value=0x23}};
    const struct BusEvent events[] = {
        {.addr=0xafa7, .value=0x88, .type=IO_READ},
        {.addr=0xafa8, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_034F) {
    const struct CPU_State initial_cpu = {.pc=0x0f24, .a=0x3b, .x=0xec, .y=0x29, .sp=0xf4, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0f24, .value=0x88}, {.addr=0x0f25, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x0f26, .a=0xf6, .x=0xec, .y=0x29, .sp=0xf4, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0f24, .value=0x88}, {.addr=0x0f25, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x0f24, .value=0x88, .type=IO_READ},
        {.addr=0x0f25, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0350) {
    const struct CPU_State initial_cpu = {.pc=0xa5d0, .a=0xfc, .x=0x69, .y=0x33, .sp=0xf2, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0xa5d0, .value=0x88}, {.addr=0xa5d1, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0xa5d2, .a=0x1c, .x=0x69, .y=0x33, .sp=0xf2, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xa5d0, .value=0x88}, {.addr=0xa5d1, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0xa5d0, .value=0x88, .type=IO_READ},
        {.addr=0xa5d1, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0351) {
    const struct CPU_State initial_cpu = {.pc=0xab6d, .a=0x8e, .x=0x5c, .y=0x1a, .sp=0x64, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0xab6d, .value=0x88}, {.addr=0xab6e, .value=0x07}};
    const struct CPU_State final_cpu = {.pc=0xab6f, .a=0x95, .x=0x5c, .y=0x1a, .sp=0x64, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xab6d, .value=0x88}, {.addr=0xab6e, .value=0x07}};
    const struct BusEvent events[] = {
        {.addr=0xab6d, .value=0x88, .type=IO_READ},
        {.addr=0xab6e, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0352) {
    const struct CPU_State initial_cpu = {.pc=0x853e, .a=0x61, .x=0x0e, .y=0xe5, .sp=0xfc, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x853e, .value=0x88}, {.addr=0x853f, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x8540, .a=0x40, .x=0x0e, .y=0xe5, .sp=0xfc, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x853e, .value=0x88}, {.addr=0x853f, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x853e, .value=0x88, .type=IO_READ},
        {.addr=0x853f, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0353) {
    const struct CPU_State initial_cpu = {.pc=0xe8f7, .a=0xe3, .x=0x0b, .y=0xcc, .sp=0xb3, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xe8f7, .value=0x88}, {.addr=0xe8f8, .value=0x1b}};
    const struct CPU_State final_cpu = {.pc=0xe8f9, .a=0xff, .x=0x0b, .y=0xcc, .sp=0xb3, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0xe8f7, .value=0x88}, {.addr=0xe8f8, .value=0x1b}};
    const struct BusEvent events[] = {
        {.addr=0xe8f7, .value=0x88, .type=IO_READ},
        {.addr=0xe8f8, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0354) {
    const struct CPU_State initial_cpu = {.pc=0x2029, .a=0xaf, .x=0x51, .y=0x3c, .sp=0x16, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x2029, .value=0x88}, {.addr=0x202a, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x202b, .a=0xe8, .x=0x51, .y=0x3c, .sp=0x16, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x2029, .value=0x88}, {.addr=0x202a, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x2029, .value=0x88, .type=IO_READ},
        {.addr=0x202a, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0355) {
    const struct CPU_State initial_cpu = {.pc=0x6445, .a=0xae, .x=0x92, .y=0xb5, .sp=0x7f, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x6445, .value=0x88}, {.addr=0x6446, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x6447, .a=0x52, .x=0x92, .y=0xb5, .sp=0x7f, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x6445, .value=0x88}, {.addr=0x6446, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x6445, .value=0x88, .type=IO_READ},
        {.addr=0x6446, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0356) {
    const struct CPU_State initial_cpu = {.pc=0xbd86, .a=0x51, .x=0xaf, .y=0xc0, .sp=0x57, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0xbd86, .value=0x88}, {.addr=0xbd87, .value=0x73}};
    const struct CPU_State final_cpu = {.pc=0xbd88, .a=0xc4, .x=0xaf, .y=0xc0, .sp=0x57, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0xbd86, .value=0x88}, {.addr=0xbd87, .value=0x73}};
    const struct BusEvent events[] = {
        {.addr=0xbd86, .value=0x88, .type=IO_READ},
        {.addr=0xbd87, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0357) {
    const struct CPU_State initial_cpu = {.pc=0x6e48, .a=0x9d, .x=0x95, .y=0x73, .sp=0x17, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x6e48, .value=0x88}, {.addr=0x6e49, .value=0xfd}};
    const struct CPU_State final_cpu = {.pc=0x6e4a, .a=0x9b, .x=0x95, .y=0x73, .sp=0x17, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x6e48, .value=0x88}, {.addr=0x6e49, .value=0xfd}};
    const struct BusEvent events[] = {
        {.addr=0x6e48, .value=0x88, .type=IO_READ},
        {.addr=0x6e49, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0358) {
    const struct CPU_State initial_cpu = {.pc=0xb8b7, .a=0x64, .x=0x45, .y=0x49, .sp=0x5c, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0xb8b7, .value=0x88}, {.addr=0xb8b8, .value=0x63}};
    const struct CPU_State final_cpu = {.pc=0xb8b9, .a=0xc8, .x=0x45, .y=0x49, .sp=0x5c, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0xb8b7, .value=0x88}, {.addr=0xb8b8, .value=0x63}};
    const struct BusEvent events[] = {
        {.addr=0xb8b7, .value=0x88, .type=IO_READ},
        {.addr=0xb8b8, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0359) {
    const struct CPU_State initial_cpu = {.pc=0x3924, .a=0x0f, .x=0x87, .y=0xc1, .sp=0xe2, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x3924, .value=0x88}, {.addr=0x3925, .value=0xc8}};
    const struct CPU_State final_cpu = {.pc=0x3926, .a=0xd7, .x=0x87, .y=0xc1, .sp=0xe2, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x3924, .value=0x88}, {.addr=0x3925, .value=0xc8}};
    const struct BusEvent events[] = {
        {.addr=0x3924, .value=0x88, .type=IO_READ},
        {.addr=0x3925, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_035A) {
    const struct CPU_State initial_cpu = {.pc=0xabf8, .a=0xcf, .x=0xd3, .y=0x7f, .sp=0x4c, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xabf8, .value=0x88}, {.addr=0xabf9, .value=0x66}};
    const struct CPU_State final_cpu = {.pc=0xabfa, .a=0x35, .x=0xd3, .y=0x7f, .sp=0x4c, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0xabf8, .value=0x88}, {.addr=0xabf9, .value=0x66}};
    const struct BusEvent events[] = {
        {.addr=0xabf8, .value=0x88, .type=IO_READ},
        {.addr=0xabf9, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_035B) {
    const struct CPU_State initial_cpu = {.pc=0x5ff0, .a=0xd1, .x=0x22, .y=0xf6, .sp=0xfa, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x5ff0, .value=0x88}, {.addr=0x5ff1, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x5ff2, .a=0x52, .x=0x22, .y=0xf6, .sp=0xfa, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x5ff0, .value=0x88}, {.addr=0x5ff1, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x5ff0, .value=0x88, .type=IO_READ},
        {.addr=0x5ff1, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_035C) {
    const struct CPU_State initial_cpu = {.pc=0x7b50, .a=0xab, .x=0x6c, .y=0x79, .sp=0x57, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x7b50, .value=0x88}, {.addr=0x7b51, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x7b52, .a=0x95, .x=0x6c, .y=0x79, .sp=0x57, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x7b50, .value=0x88}, {.addr=0x7b51, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x7b50, .value=0x88, .type=IO_READ},
        {.addr=0x7b51, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_035D) {
    const struct CPU_State initial_cpu = {.pc=0x5c54, .a=0xc1, .x=0x93, .y=0x17, .sp=0xc8, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x5c54, .value=0x88}, {.addr=0x5c55, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0x5c56, .a=0x99, .x=0x93, .y=0x17, .sp=0xc8, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x5c54, .value=0x88}, {.addr=0x5c55, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0x5c54, .value=0x88, .type=IO_READ},
        {.addr=0x5c55, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_035E) {
    const struct CPU_State initial_cpu = {.pc=0x42fe, .a=0x9a, .x=0x84, .y=0x73, .sp=0xef, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x42fe, .value=0x88}, {.addr=0x42ff, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x4300, .a=0x02, .x=0x84, .y=0x73, .sp=0xef, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x42fe, .value=0x88}, {.addr=0x42ff, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x42fe, .value=0x88, .type=IO_READ},
        {.addr=0x42ff, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_035F) {
    const struct CPU_State initial_cpu = {.pc=0xf138, .a=0xca, .x=0x72, .y=0x18, .sp=0xae, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xf138, .value=0x88}, {.addr=0xf139, .value=0xf9}};
    const struct CPU_State final_cpu = {.pc=0xf13a, .a=0xc3, .x=0x72, .y=0x18, .sp=0xae, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0xf138, .value=0x88}, {.addr=0xf139, .value=0xf9}};
    const struct BusEvent events[] = {
        {.addr=0xf138, .value=0x88, .type=IO_READ},
        {.addr=0xf139, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0360) {
    const struct CPU_State initial_cpu = {.pc=0x438f, .a=0x03, .x=0x55, .y=0x77, .sp=0xb5, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x438f, .value=0x88}, {.addr=0x4390, .value=0xdc}};
    const struct CPU_State final_cpu = {.pc=0x4391, .a=0xe0, .x=0x55, .y=0x77, .sp=0xb5, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x438f, .value=0x88}, {.addr=0x4390, .value=0xdc}};
    const struct BusEvent events[] = {
        {.addr=0x438f, .value=0x88, .type=IO_READ},
        {.addr=0x4390, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0361) {
    const struct CPU_State initial_cpu = {.pc=0x9fb6, .a=0xa2, .x=0x91, .y=0xec, .sp=0xa3, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x9fb6, .value=0x88}, {.addr=0x9fb7, .value=0xa3}};
    const struct CPU_State final_cpu = {.pc=0x9fb8, .a=0x45, .x=0x91, .y=0xec, .sp=0xa3, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x9fb6, .value=0x88}, {.addr=0x9fb7, .value=0xa3}};
    const struct BusEvent events[] = {
        {.addr=0x9fb6, .value=0x88, .type=IO_READ},
        {.addr=0x9fb7, .value=0xa3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0362) {
    const struct CPU_State initial_cpu = {.pc=0xcf3c, .a=0xbb, .x=0x1f, .y=0x12, .sp=0x8f, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0xcf3c, .value=0x88}, {.addr=0xcf3d, .value=0xd8}};
    const struct CPU_State final_cpu = {.pc=0xcf3e, .a=0x93, .x=0x1f, .y=0x12, .sp=0x8f, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0xcf3c, .value=0x88}, {.addr=0xcf3d, .value=0xd8}};
    const struct BusEvent events[] = {
        {.addr=0xcf3c, .value=0x88, .type=IO_READ},
        {.addr=0xcf3d, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0363) {
    const struct CPU_State initial_cpu = {.pc=0xc70b, .a=0x59, .x=0x11, .y=0xad, .sp=0x8a, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xc70b, .value=0x88}, {.addr=0xc70c, .value=0xd5}};
    const struct CPU_State final_cpu = {.pc=0xc70d, .a=0x2f, .x=0x11, .y=0xad, .sp=0x8a, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0xc70b, .value=0x88}, {.addr=0xc70c, .value=0xd5}};
    const struct BusEvent events[] = {
        {.addr=0xc70b, .value=0x88, .type=IO_READ},
        {.addr=0xc70c, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0364) {
    const struct CPU_State initial_cpu = {.pc=0x3e16, .a=0x77, .x=0xe9, .y=0x5d, .sp=0xb9, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x3e16, .value=0x88}, {.addr=0x3e17, .value=0x74}};
    const struct CPU_State final_cpu = {.pc=0x3e18, .a=0xec, .x=0xe9, .y=0x5d, .sp=0xb9, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x3e16, .value=0x88}, {.addr=0x3e17, .value=0x74}};
    const struct BusEvent events[] = {
        {.addr=0x3e16, .value=0x88, .type=IO_READ},
        {.addr=0x3e17, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0365) {
    const struct CPU_State initial_cpu = {.pc=0xfa96, .a=0x4e, .x=0x7d, .y=0xcf, .sp=0x85, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0xfa96, .value=0x88}, {.addr=0xfa97, .value=0xac}};
    const struct CPU_State final_cpu = {.pc=0xfa98, .a=0xfa, .x=0x7d, .y=0xcf, .sp=0x85, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0xfa96, .value=0x88}, {.addr=0xfa97, .value=0xac}};
    const struct BusEvent events[] = {
        {.addr=0xfa96, .value=0x88, .type=IO_READ},
        {.addr=0xfa97, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0366) {
    const struct CPU_State initial_cpu = {.pc=0x9c04, .a=0xbe, .x=0xdf, .y=0x8d, .sp=0x33, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x9c04, .value=0x88}, {.addr=0x9c05, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x9c06, .a=0xb5, .x=0xdf, .y=0x8d, .sp=0x33, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x9c04, .value=0x88}, {.addr=0x9c05, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x9c04, .value=0x88, .type=IO_READ},
        {.addr=0x9c05, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0367) {
    const struct CPU_State initial_cpu = {.pc=0x34fe, .a=0x45, .x=0xce, .y=0xb1, .sp=0x41, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x34fe, .value=0x88}, {.addr=0x34ff, .value=0xf0}};
    const struct CPU_State final_cpu = {.pc=0x3500, .a=0x36, .x=0xce, .y=0xb1, .sp=0x41, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x34fe, .value=0x88}, {.addr=0x34ff, .value=0xf0}};
    const struct BusEvent events[] = {
        {.addr=0x34fe, .value=0x88, .type=IO_READ},
        {.addr=0x34ff, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0368) {
    const struct CPU_State initial_cpu = {.pc=0x4503, .a=0x12, .x=0xbb, .y=0xc9, .sp=0x1c, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x4503, .value=0x88}, {.addr=0x4504, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0x4505, .a=0xb0, .x=0xbb, .y=0xc9, .sp=0x1c, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x4503, .value=0x88}, {.addr=0x4504, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0x4503, .value=0x88, .type=IO_READ},
        {.addr=0x4504, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0369) {
    const struct CPU_State initial_cpu = {.pc=0x7f66, .a=0xcd, .x=0x39, .y=0xbb, .sp=0x70, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x7f66, .value=0x88}, {.addr=0x7f67, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x7f68, .a=0x3a, .x=0x39, .y=0xbb, .sp=0x70, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x7f66, .value=0x88}, {.addr=0x7f67, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x7f66, .value=0x88, .type=IO_READ},
        {.addr=0x7f67, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_036A) {
    const struct CPU_State initial_cpu = {.pc=0x9e91, .a=0xff, .x=0x3f, .y=0x48, .sp=0x1d, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x9e91, .value=0x88}, {.addr=0x9e92, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x9e93, .a=0x46, .x=0x3f, .y=0x48, .sp=0x1d, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x9e91, .value=0x88}, {.addr=0x9e92, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x9e91, .value=0x88, .type=IO_READ},
        {.addr=0x9e92, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_036B) {
    const struct CPU_State initial_cpu = {.pc=0xaf75, .a=0xd4, .x=0x73, .y=0x39, .sp=0x8b, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0xaf75, .value=0x88}, {.addr=0xaf76, .value=0xb3}};
    const struct CPU_State final_cpu = {.pc=0xaf77, .a=0x87, .x=0x73, .y=0x39, .sp=0x8b, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0xaf75, .value=0x88}, {.addr=0xaf76, .value=0xb3}};
    const struct BusEvent events[] = {
        {.addr=0xaf75, .value=0x88, .type=IO_READ},
        {.addr=0xaf76, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_036C) {
    const struct CPU_State initial_cpu = {.pc=0xa20b, .a=0x53, .x=0x30, .y=0xcd, .sp=0x77, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xa20b, .value=0x88}, {.addr=0xa20c, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa20d, .a=0x0f, .x=0x30, .y=0xcd, .sp=0x77, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0xa20b, .value=0x88}, {.addr=0xa20c, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa20b, .value=0x88, .type=IO_READ},
        {.addr=0xa20c, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_036D) {
    const struct CPU_State initial_cpu = {.pc=0x0627, .a=0x21, .x=0xb1, .y=0x61, .sp=0x73, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0627, .value=0x88}, {.addr=0x0628, .value=0xc7}};
    const struct CPU_State final_cpu = {.pc=0x0629, .a=0xe9, .x=0xb1, .y=0x61, .sp=0x73, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0627, .value=0x88}, {.addr=0x0628, .value=0xc7}};
    const struct BusEvent events[] = {
        {.addr=0x0627, .value=0x88, .type=IO_READ},
        {.addr=0x0628, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_036E) {
    const struct CPU_State initial_cpu = {.pc=0x72c3, .a=0xdc, .x=0x29, .y=0x76, .sp=0x3b, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x72c3, .value=0x88}, {.addr=0x72c4, .value=0x25}};
    const struct CPU_State final_cpu = {.pc=0x72c5, .a=0x01, .x=0x29, .y=0x76, .sp=0x3b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x72c3, .value=0x88}, {.addr=0x72c4, .value=0x25}};
    const struct BusEvent events[] = {
        {.addr=0x72c3, .value=0x88, .type=IO_READ},
        {.addr=0x72c4, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_036F) {
    const struct CPU_State initial_cpu = {.pc=0xa735, .a=0x03, .x=0x6f, .y=0x64, .sp=0x99, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0xa735, .value=0x88}, {.addr=0xa736, .value=0xa8}};
    const struct CPU_State final_cpu = {.pc=0xa737, .a=0xab, .x=0x6f, .y=0x64, .sp=0x99, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0xa735, .value=0x88}, {.addr=0xa736, .value=0xa8}};
    const struct BusEvent events[] = {
        {.addr=0xa735, .value=0x88, .type=IO_READ},
        {.addr=0xa736, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0370) {
    const struct CPU_State initial_cpu = {.pc=0x75a9, .a=0x13, .x=0x8c, .y=0x85, .sp=0xfd, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x75a9, .value=0x88}, {.addr=0x75aa, .value=0x38}};
    const struct CPU_State final_cpu = {.pc=0x75ab, .a=0x4b, .x=0x8c, .y=0x85, .sp=0xfd, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x75a9, .value=0x88}, {.addr=0x75aa, .value=0x38}};
    const struct BusEvent events[] = {
        {.addr=0x75a9, .value=0x88, .type=IO_READ},
        {.addr=0x75aa, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0371) {
    const struct CPU_State initial_cpu = {.pc=0xcefc, .a=0x62, .x=0x51, .y=0x4c, .sp=0x97, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0xcefc, .value=0x88}, {.addr=0xcefd, .value=0x56}};
    const struct CPU_State final_cpu = {.pc=0xcefe, .a=0xb9, .x=0x51, .y=0x4c, .sp=0x97, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0xcefc, .value=0x88}, {.addr=0xcefd, .value=0x56}};
    const struct BusEvent events[] = {
        {.addr=0xcefc, .value=0x88, .type=IO_READ},
        {.addr=0xcefd, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0372) {
    const struct CPU_State initial_cpu = {.pc=0x9d1e, .a=0x95, .x=0x8a, .y=0xaf, .sp=0x4e, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x9d1e, .value=0x88}, {.addr=0x9d1f, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0x9d20, .a=0x53, .x=0x8a, .y=0xaf, .sp=0x4e, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x9d1e, .value=0x88}, {.addr=0x9d1f, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0x9d1e, .value=0x88, .type=IO_READ},
        {.addr=0x9d1f, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0373) {
    const struct CPU_State initial_cpu = {.pc=0x0d78, .a=0x87, .x=0xc7, .y=0x8b, .sp=0xc2, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x0d78, .value=0x88}, {.addr=0x0d79, .value=0x0b}};
    const struct CPU_State final_cpu = {.pc=0x0d7a, .a=0x92, .x=0xc7, .y=0x8b, .sp=0xc2, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0d78, .value=0x88}, {.addr=0x0d79, .value=0x0b}};
    const struct BusEvent events[] = {
        {.addr=0x0d78, .value=0x88, .type=IO_READ},
        {.addr=0x0d79, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0374) {
    const struct CPU_State initial_cpu = {.pc=0x7744, .a=0xa4, .x=0xda, .y=0x70, .sp=0x7b, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x7744, .value=0x88}, {.addr=0x7745, .value=0xb9}};
    const struct CPU_State final_cpu = {.pc=0x7746, .a=0x5e, .x=0xda, .y=0x70, .sp=0x7b, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x7744, .value=0x88}, {.addr=0x7745, .value=0xb9}};
    const struct BusEvent events[] = {
        {.addr=0x7744, .value=0x88, .type=IO_READ},
        {.addr=0x7745, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0375) {
    const struct CPU_State initial_cpu = {.pc=0xb320, .a=0xe8, .x=0xef, .y=0xd8, .sp=0xb6, .status=0x91};
    const struct RamEntry initial_ram[] = {{.addr=0xb320, .value=0x88}, {.addr=0xb321, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0xb322, .a=0xfd, .x=0xef, .y=0xd8, .sp=0xb6, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0xb320, .value=0x88}, {.addr=0xb321, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0xb320, .value=0x88, .type=IO_READ},
        {.addr=0xb321, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0376) {
    const struct CPU_State initial_cpu = {.pc=0x4296, .a=0xfe, .x=0x4e, .y=0xd7, .sp=0x48, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x4296, .value=0x88}, {.addr=0x4297, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x4298, .a=0x3b, .x=0x4e, .y=0xd7, .sp=0x48, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x4296, .value=0x88}, {.addr=0x4297, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x4296, .value=0x88, .type=IO_READ},
        {.addr=0x4297, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0377) {
    const struct CPU_State initial_cpu = {.pc=0x6f04, .a=0xec, .x=0x56, .y=0x1b, .sp=0x00, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x6f04, .value=0x88}, {.addr=0x6f05, .value=0x71}};
    const struct CPU_State final_cpu = {.pc=0x6f06, .a=0x5d, .x=0x56, .y=0x1b, .sp=0x00, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x6f04, .value=0x88}, {.addr=0x6f05, .value=0x71}};
    const struct BusEvent events[] = {
        {.addr=0x6f04, .value=0x88, .type=IO_READ},
        {.addr=0x6f05, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0378) {
    const struct CPU_State initial_cpu = {.pc=0x9177, .a=0x51, .x=0xc0, .y=0x12, .sp=0xef, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x9177, .value=0x88}, {.addr=0x9178, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x9179, .a=0x2f, .x=0xc0, .y=0x12, .sp=0xef, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x9177, .value=0x88}, {.addr=0x9178, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x9177, .value=0x88, .type=IO_READ},
        {.addr=0x9178, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0379) {
    const struct CPU_State initial_cpu = {.pc=0xbaba, .a=0x2b, .x=0xbb, .y=0xe5, .sp=0xc7, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0xbaba, .value=0x88}, {.addr=0xbabb, .value=0x44}};
    const struct CPU_State final_cpu = {.pc=0xbabc, .a=0x70, .x=0xbb, .y=0xe5, .sp=0xc7, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0xbaba, .value=0x88}, {.addr=0xbabb, .value=0x44}};
    const struct BusEvent events[] = {
        {.addr=0xbaba, .value=0x88, .type=IO_READ},
        {.addr=0xbabb, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_037A) {
    const struct CPU_State initial_cpu = {.pc=0x59ba, .a=0xc3, .x=0x72, .y=0x4e, .sp=0x6b, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x59ba, .value=0x88}, {.addr=0x59bb, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0x59bc, .a=0x5e, .x=0x72, .y=0x4e, .sp=0x6b, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x59ba, .value=0x88}, {.addr=0x59bb, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0x59ba, .value=0x88, .type=IO_READ},
        {.addr=0x59bb, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_037B) {
    const struct CPU_State initial_cpu = {.pc=0xacf2, .a=0x2b, .x=0x00, .y=0x0d, .sp=0x90, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0xacf2, .value=0x88}, {.addr=0xacf3, .value=0x45}};
    const struct CPU_State final_cpu = {.pc=0xacf4, .a=0x71, .x=0x00, .y=0x0d, .sp=0x90, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0xacf2, .value=0x88}, {.addr=0xacf3, .value=0x45}};
    const struct BusEvent events[] = {
        {.addr=0xacf2, .value=0x88, .type=IO_READ},
        {.addr=0xacf3, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_037C) {
    const struct CPU_State initial_cpu = {.pc=0x1000, .a=0x1b, .x=0x16, .y=0x23, .sp=0x87, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x1000, .value=0x88}, {.addr=0x1001, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0x1002, .a=0xda, .x=0x16, .y=0x23, .sp=0x87, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x1000, .value=0x88}, {.addr=0x1001, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0x1000, .value=0x88, .type=IO_READ},
        {.addr=0x1001, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_037D) {
    const struct CPU_State initial_cpu = {.pc=0xf3bd, .a=0x6d, .x=0x33, .y=0xc7, .sp=0x34, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0xf3bd, .value=0x88}, {.addr=0xf3be, .value=0xbe}};
    const struct CPU_State final_cpu = {.pc=0xf3bf, .a=0x2b, .x=0x33, .y=0xc7, .sp=0x34, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0xf3bd, .value=0x88}, {.addr=0xf3be, .value=0xbe}};
    const struct BusEvent events[] = {
        {.addr=0xf3bd, .value=0x88, .type=IO_READ},
        {.addr=0xf3be, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_037E) {
    const struct CPU_State initial_cpu = {.pc=0x06fe, .a=0xbd, .x=0xfa, .y=0x56, .sp=0xa8, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x06fe, .value=0x88}, {.addr=0x06ff, .value=0x2f}};
    const struct CPU_State final_cpu = {.pc=0x0700, .a=0xec, .x=0xfa, .y=0x56, .sp=0xa8, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x06fe, .value=0x88}, {.addr=0x06ff, .value=0x2f}};
    const struct BusEvent events[] = {
        {.addr=0x06fe, .value=0x88, .type=IO_READ},
        {.addr=0x06ff, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_037F) {
    const struct CPU_State initial_cpu = {.pc=0x280f, .a=0xc5, .x=0x77, .y=0x78, .sp=0x8c, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x280f, .value=0x88}, {.addr=0x2810, .value=0xce}};
    const struct CPU_State final_cpu = {.pc=0x2811, .a=0x93, .x=0x77, .y=0x78, .sp=0x8c, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x280f, .value=0x88}, {.addr=0x2810, .value=0xce}};
    const struct BusEvent events[] = {
        {.addr=0x280f, .value=0x88, .type=IO_READ},
        {.addr=0x2810, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0380) {
    const struct CPU_State initial_cpu = {.pc=0xc95b, .a=0x60, .x=0x22, .y=0x37, .sp=0xd3, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xc95b, .value=0x88}, {.addr=0xc95c, .value=0x41}};
    const struct CPU_State final_cpu = {.pc=0xc95d, .a=0xa1, .x=0x22, .y=0x37, .sp=0xd3, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0xc95b, .value=0x88}, {.addr=0xc95c, .value=0x41}};
    const struct BusEvent events[] = {
        {.addr=0xc95b, .value=0x88, .type=IO_READ},
        {.addr=0xc95c, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0381) {
    const struct CPU_State initial_cpu = {.pc=0xb33a, .a=0xde, .x=0xd3, .y=0x41, .sp=0x5c, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0xb33a, .value=0x88}, {.addr=0xb33b, .value=0x1c}};
    const struct CPU_State final_cpu = {.pc=0xb33c, .a=0xfb, .x=0xd3, .y=0x41, .sp=0x5c, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xb33a, .value=0x88}, {.addr=0xb33b, .value=0x1c}};
    const struct BusEvent events[] = {
        {.addr=0xb33a, .value=0x88, .type=IO_READ},
        {.addr=0xb33b, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0382) {
    const struct CPU_State initial_cpu = {.pc=0xd42d, .a=0x52, .x=0x3c, .y=0x62, .sp=0x0a, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xd42d, .value=0x88}, {.addr=0xd42e, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0xd42f, .a=0xb1, .x=0x3c, .y=0x62, .sp=0x0a, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xd42d, .value=0x88}, {.addr=0xd42e, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0xd42d, .value=0x88, .type=IO_READ},
        {.addr=0xd42e, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0383) {
    const struct CPU_State initial_cpu = {.pc=0x1c9e, .a=0xc9, .x=0x33, .y=0x05, .sp=0xad, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x1c9e, .value=0x88}, {.addr=0x1c9f, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x1ca0, .a=0xa7, .x=0x33, .y=0x05, .sp=0xad, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x1c9e, .value=0x88}, {.addr=0x1c9f, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x1c9e, .value=0x88, .type=IO_READ},
        {.addr=0x1c9f, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0384) {
    const struct CPU_State initial_cpu = {.pc=0x197d, .a=0xe7, .x=0xc4, .y=0xd3, .sp=0xaa, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x197d, .value=0x88}, {.addr=0x197e, .value=0x99}};
    const struct CPU_State final_cpu = {.pc=0x197f, .a=0x81, .x=0xc4, .y=0xd3, .sp=0xaa, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x197d, .value=0x88}, {.addr=0x197e, .value=0x99}};
    const struct BusEvent events[] = {
        {.addr=0x197d, .value=0x88, .type=IO_READ},
        {.addr=0x197e, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0385) {
    const struct CPU_State initial_cpu = {.pc=0x6a33, .a=0xf2, .x=0x85, .y=0xd9, .sp=0x15, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x6a33, .value=0x88}, {.addr=0x6a34, .value=0x4b}};
    const struct CPU_State final_cpu = {.pc=0x6a35, .a=0x3d, .x=0x85, .y=0xd9, .sp=0x15, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x6a33, .value=0x88}, {.addr=0x6a34, .value=0x4b}};
    const struct BusEvent events[] = {
        {.addr=0x6a33, .value=0x88, .type=IO_READ},
        {.addr=0x6a34, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0386) {
    const struct CPU_State initial_cpu = {.pc=0x0503, .a=0x5a, .x=0x7d, .y=0xca, .sp=0x89, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0503, .value=0x88}, {.addr=0x0504, .value=0xea}};
    const struct CPU_State final_cpu = {.pc=0x0505, .a=0x44, .x=0x7d, .y=0xca, .sp=0x89, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0503, .value=0x88}, {.addr=0x0504, .value=0xea}};
    const struct BusEvent events[] = {
        {.addr=0x0503, .value=0x88, .type=IO_READ},
        {.addr=0x0504, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0387) {
    const struct CPU_State initial_cpu = {.pc=0x2877, .a=0xf2, .x=0x39, .y=0x90, .sp=0xff, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x2877, .value=0x88}, {.addr=0x2878, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x2879, .a=0x39, .x=0x39, .y=0x90, .sp=0xff, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x2877, .value=0x88}, {.addr=0x2878, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x2877, .value=0x88, .type=IO_READ},
        {.addr=0x2878, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0388) {
    const struct CPU_State initial_cpu = {.pc=0x0cd5, .a=0xd1, .x=0x39, .y=0x3e, .sp=0xca, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0cd5, .value=0x88}, {.addr=0x0cd6, .value=0x04}};
    const struct CPU_State final_cpu = {.pc=0x0cd7, .a=0xd6, .x=0x39, .y=0x3e, .sp=0xca, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0cd5, .value=0x88}, {.addr=0x0cd6, .value=0x04}};
    const struct BusEvent events[] = {
        {.addr=0x0cd5, .value=0x88, .type=IO_READ},
        {.addr=0x0cd6, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0389) {
    const struct CPU_State initial_cpu = {.pc=0xafdd, .a=0x2d, .x=0xc1, .y=0xbf, .sp=0x3c, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0xafdd, .value=0x88}, {.addr=0xafde, .value=0x03}};
    const struct CPU_State final_cpu = {.pc=0xafdf, .a=0x30, .x=0xc1, .y=0xbf, .sp=0x3c, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0xafdd, .value=0x88}, {.addr=0xafde, .value=0x03}};
    const struct BusEvent events[] = {
        {.addr=0xafdd, .value=0x88, .type=IO_READ},
        {.addr=0xafde, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_038A) {
    const struct CPU_State initial_cpu = {.pc=0xac79, .a=0x45, .x=0xd2, .y=0x94, .sp=0x32, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0xac79, .value=0x88}, {.addr=0xac7a, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0xac7b, .a=0x00, .x=0xd2, .y=0x94, .sp=0x32, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0xac79, .value=0x88}, {.addr=0xac7a, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0xac79, .value=0x88, .type=IO_READ},
        {.addr=0xac7a, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_038B) {
    const struct CPU_State initial_cpu = {.pc=0xe738, .a=0x82, .x=0xab, .y=0x7c, .sp=0x37, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0xe738, .value=0x88}, {.addr=0xe739, .value=0x7e}};
    const struct CPU_State final_cpu = {.pc=0xe73a, .a=0x01, .x=0xab, .y=0x7c, .sp=0x37, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xe738, .value=0x88}, {.addr=0xe739, .value=0x7e}};
    const struct BusEvent events[] = {
        {.addr=0xe738, .value=0x88, .type=IO_READ},
        {.addr=0xe739, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_038C) {
    const struct CPU_State initial_cpu = {.pc=0xac78, .a=0x42, .x=0xe2, .y=0xb7, .sp=0x5e, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0xac78, .value=0x88}, {.addr=0xac79, .value=0xf1}};
    const struct CPU_State final_cpu = {.pc=0xac7a, .a=0x33, .x=0xe2, .y=0xb7, .sp=0x5e, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0xac78, .value=0x88}, {.addr=0xac79, .value=0xf1}};
    const struct BusEvent events[] = {
        {.addr=0xac78, .value=0x88, .type=IO_READ},
        {.addr=0xac79, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_038D) {
    const struct CPU_State initial_cpu = {.pc=0x0154, .a=0x7c, .x=0x9e, .y=0xc1, .sp=0xa2, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x88}, {.addr=0x0155, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0x0156, .a=0xeb, .x=0x9e, .y=0xc1, .sp=0xa2, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x88}, {.addr=0x0155, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0x0154, .value=0x88, .type=IO_READ},
        {.addr=0x0155, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_038E) {
    const struct CPU_State initial_cpu = {.pc=0x58f6, .a=0x29, .x=0x68, .y=0x8b, .sp=0x32, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x58f6, .value=0x88}, {.addr=0x58f7, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x58f8, .a=0x25, .x=0x68, .y=0x8b, .sp=0x32, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x58f6, .value=0x88}, {.addr=0x58f7, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x58f6, .value=0x88, .type=IO_READ},
        {.addr=0x58f7, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_038F) {
    const struct CPU_State initial_cpu = {.pc=0x275f, .a=0xf6, .x=0xab, .y=0x95, .sp=0x6d, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x275f, .value=0x88}, {.addr=0x2760, .value=0x15}};
    const struct CPU_State final_cpu = {.pc=0x2761, .a=0x0c, .x=0xab, .y=0x95, .sp=0x6d, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x275f, .value=0x88}, {.addr=0x2760, .value=0x15}};
    const struct BusEvent events[] = {
        {.addr=0x275f, .value=0x88, .type=IO_READ},
        {.addr=0x2760, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0390) {
    const struct CPU_State initial_cpu = {.pc=0x5a09, .a=0xc2, .x=0xd3, .y=0x73, .sp=0x83, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x5a09, .value=0x88}, {.addr=0x5a0a, .value=0xef}};
    const struct CPU_State final_cpu = {.pc=0x5a0b, .a=0xb2, .x=0xd3, .y=0x73, .sp=0x83, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x5a09, .value=0x88}, {.addr=0x5a0a, .value=0xef}};
    const struct BusEvent events[] = {
        {.addr=0x5a09, .value=0x88, .type=IO_READ},
        {.addr=0x5a0a, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0391) {
    const struct CPU_State initial_cpu = {.pc=0x3d07, .a=0xba, .x=0xfc, .y=0xb5, .sp=0x4c, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x3d07, .value=0x88}, {.addr=0x3d08, .value=0x28}};
    const struct CPU_State final_cpu = {.pc=0x3d09, .a=0xe2, .x=0xfc, .y=0xb5, .sp=0x4c, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x3d07, .value=0x88}, {.addr=0x3d08, .value=0x28}};
    const struct BusEvent events[] = {
        {.addr=0x3d07, .value=0x88, .type=IO_READ},
        {.addr=0x3d08, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0392) {
    const struct CPU_State initial_cpu = {.pc=0xb90b, .a=0x05, .x=0xaf, .y=0x21, .sp=0x3b, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0xb90b, .value=0x88}, {.addr=0xb90c, .value=0x9e}};
    const struct CPU_State final_cpu = {.pc=0xb90d, .a=0xa4, .x=0xaf, .y=0x21, .sp=0x3b, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0xb90b, .value=0x88}, {.addr=0xb90c, .value=0x9e}};
    const struct BusEvent events[] = {
        {.addr=0xb90b, .value=0x88, .type=IO_READ},
        {.addr=0xb90c, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0393) {
    const struct CPU_State initial_cpu = {.pc=0xd3d1, .a=0x09, .x=0x3a, .y=0xaf, .sp=0x63, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0xd3d1, .value=0x88}, {.addr=0xd3d2, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0xd3d3, .a=0xe7, .x=0x3a, .y=0xaf, .sp=0x63, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xd3d1, .value=0x88}, {.addr=0xd3d2, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0xd3d1, .value=0x88, .type=IO_READ},
        {.addr=0xd3d2, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0394) {
    const struct CPU_State initial_cpu = {.pc=0x0efc, .a=0x24, .x=0x7e, .y=0x13, .sp=0x85, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x0efc, .value=0x88}, {.addr=0x0efd, .value=0x3d}};
    const struct CPU_State final_cpu = {.pc=0x0efe, .a=0x61, .x=0x7e, .y=0x13, .sp=0x85, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x0efc, .value=0x88}, {.addr=0x0efd, .value=0x3d}};
    const struct BusEvent events[] = {
        {.addr=0x0efc, .value=0x88, .type=IO_READ},
        {.addr=0x0efd, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0395) {
    const struct CPU_State initial_cpu = {.pc=0x94f8, .a=0x1c, .x=0x3c, .y=0x3e, .sp=0x98, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x94f8, .value=0x88}, {.addr=0x94f9, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x94fa, .a=0x86, .x=0x3c, .y=0x3e, .sp=0x98, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x94f8, .value=0x88}, {.addr=0x94f9, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x94f8, .value=0x88, .type=IO_READ},
        {.addr=0x94f9, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0396) {
    const struct CPU_State initial_cpu = {.pc=0x9a1a, .a=0x17, .x=0x9c, .y=0x1e, .sp=0x21, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x9a1a, .value=0x88}, {.addr=0x9a1b, .value=0xe3}};
    const struct CPU_State final_cpu = {.pc=0x9a1c, .a=0xfa, .x=0x9c, .y=0x1e, .sp=0x21, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x9a1a, .value=0x88}, {.addr=0x9a1b, .value=0xe3}};
    const struct BusEvent events[] = {
        {.addr=0x9a1a, .value=0x88, .type=IO_READ},
        {.addr=0x9a1b, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0397) {
    const struct CPU_State initial_cpu = {.pc=0xd8b2, .a=0x98, .x=0x83, .y=0xa6, .sp=0xe8, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0xd8b2, .value=0x88}, {.addr=0xd8b3, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0xd8b4, .a=0x64, .x=0x83, .y=0xa6, .sp=0xe8, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0xd8b2, .value=0x88}, {.addr=0xd8b3, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0xd8b2, .value=0x88, .type=IO_READ},
        {.addr=0xd8b3, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0398) {
    const struct CPU_State initial_cpu = {.pc=0x7a49, .a=0xfb, .x=0xff, .y=0x24, .sp=0x93, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x7a49, .value=0x88}, {.addr=0x7a4a, .value=0x9f}};
    const struct CPU_State final_cpu = {.pc=0x7a4b, .a=0x9b, .x=0xff, .y=0x24, .sp=0x93, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x7a49, .value=0x88}, {.addr=0x7a4a, .value=0x9f}};
    const struct BusEvent events[] = {
        {.addr=0x7a49, .value=0x88, .type=IO_READ},
        {.addr=0x7a4a, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_0399) {
    const struct CPU_State initial_cpu = {.pc=0x60fc, .a=0x7e, .x=0x75, .y=0x19, .sp=0x96, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x60fc, .value=0x88}, {.addr=0x60fd, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0x60fe, .a=0x2c, .x=0x75, .y=0x19, .sp=0x96, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x60fc, .value=0x88}, {.addr=0x60fd, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0x60fc, .value=0x88, .type=IO_READ},
        {.addr=0x60fd, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_039A) {
    const struct CPU_State initial_cpu = {.pc=0xa5c6, .a=0x0f, .x=0xfb, .y=0x59, .sp=0xba, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0xa5c6, .value=0x88}, {.addr=0xa5c7, .value=0xb1}};
    const struct CPU_State final_cpu = {.pc=0xa5c8, .a=0xc0, .x=0xfb, .y=0x59, .sp=0xba, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xa5c6, .value=0x88}, {.addr=0xa5c7, .value=0xb1}};
    const struct BusEvent events[] = {
        {.addr=0xa5c6, .value=0x88, .type=IO_READ},
        {.addr=0xa5c7, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_039B) {
    const struct CPU_State initial_cpu = {.pc=0xd86d, .a=0xcb, .x=0x4e, .y=0xc6, .sp=0x0e, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0xd86d, .value=0x88}, {.addr=0xd86e, .value=0xcc}};
    const struct CPU_State final_cpu = {.pc=0xd86f, .a=0x98, .x=0x4e, .y=0xc6, .sp=0x0e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xd86d, .value=0x88}, {.addr=0xd86e, .value=0xcc}};
    const struct BusEvent events[] = {
        {.addr=0xd86d, .value=0x88, .type=IO_READ},
        {.addr=0xd86e, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_039C) {
    const struct CPU_State initial_cpu = {.pc=0x38da, .a=0x66, .x=0x4d, .y=0x90, .sp=0xab, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x38da, .value=0x88}, {.addr=0x38db, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x38dc, .a=0x7a, .x=0x4d, .y=0x90, .sp=0xab, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x38da, .value=0x88}, {.addr=0x38db, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x38da, .value=0x88, .type=IO_READ},
        {.addr=0x38db, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_039D) {
    const struct CPU_State initial_cpu = {.pc=0x7a2b, .a=0x29, .x=0xf2, .y=0xc5, .sp=0xfa, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x7a2b, .value=0x88}, {.addr=0x7a2c, .value=0x49}};
    const struct CPU_State final_cpu = {.pc=0x7a2d, .a=0x73, .x=0xf2, .y=0xc5, .sp=0xfa, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x7a2b, .value=0x88}, {.addr=0x7a2c, .value=0x49}};
    const struct BusEvent events[] = {
        {.addr=0x7a2b, .value=0x88, .type=IO_READ},
        {.addr=0x7a2c, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_039E) {
    const struct CPU_State initial_cpu = {.pc=0x13b0, .a=0xfe, .x=0x5d, .y=0x12, .sp=0x32, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x13b0, .value=0x88}, {.addr=0x13b1, .value=0xcd}};
    const struct CPU_State final_cpu = {.pc=0x13b2, .a=0xcc, .x=0x5d, .y=0x12, .sp=0x32, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x13b0, .value=0x88}, {.addr=0x13b1, .value=0xcd}};
    const struct BusEvent events[] = {
        {.addr=0x13b0, .value=0x88, .type=IO_READ},
        {.addr=0x13b1, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_039F) {
    const struct CPU_State initial_cpu = {.pc=0xccae, .a=0x3b, .x=0x19, .y=0xf4, .sp=0x58, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0xccae, .value=0x88}, {.addr=0xccaf, .value=0x6f}};
    const struct CPU_State final_cpu = {.pc=0xccb0, .a=0xaa, .x=0x19, .y=0xf4, .sp=0x58, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xccae, .value=0x88}, {.addr=0xccaf, .value=0x6f}};
    const struct BusEvent events[] = {
        {.addr=0xccae, .value=0x88, .type=IO_READ},
        {.addr=0xccaf, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03A0) {
    const struct CPU_State initial_cpu = {.pc=0xb1d1, .a=0x1f, .x=0xc0, .y=0x6e, .sp=0xbb, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0xb1d1, .value=0x88}, {.addr=0xb1d2, .value=0xe8}};
    const struct CPU_State final_cpu = {.pc=0xb1d3, .a=0x08, .x=0xc0, .y=0x6e, .sp=0xbb, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0xb1d1, .value=0x88}, {.addr=0xb1d2, .value=0xe8}};
    const struct BusEvent events[] = {
        {.addr=0xb1d1, .value=0x88, .type=IO_READ},
        {.addr=0xb1d2, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x923d, .a=0xf9, .x=0xff, .y=0xc5, .sp=0xd8, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x923d, .value=0x88}, {.addr=0x923e, .value=0x14}};
    const struct CPU_State final_cpu = {.pc=0x923f, .a=0x0e, .x=0xff, .y=0xc5, .sp=0xd8, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x923d, .value=0x88}, {.addr=0x923e, .value=0x14}};
    const struct BusEvent events[] = {
        {.addr=0x923d, .value=0x88, .type=IO_READ},
        {.addr=0x923e, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x0a36, .a=0x8a, .x=0xc9, .y=0xc9, .sp=0x57, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0a36, .value=0x88}, {.addr=0x0a37, .value=0x3c}};
    const struct CPU_State final_cpu = {.pc=0x0a38, .a=0xc7, .x=0xc9, .y=0xc9, .sp=0x57, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x0a36, .value=0x88}, {.addr=0x0a37, .value=0x3c}};
    const struct BusEvent events[] = {
        {.addr=0x0a36, .value=0x88, .type=IO_READ},
        {.addr=0x0a37, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xf1c2, .a=0x4a, .x=0xf2, .y=0x6d, .sp=0xd7, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0xf1c2, .value=0x88}, {.addr=0xf1c3, .value=0x87}};
    const struct CPU_State final_cpu = {.pc=0xf1c4, .a=0xd1, .x=0xf2, .y=0x6d, .sp=0xd7, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xf1c2, .value=0x88}, {.addr=0xf1c3, .value=0x87}};
    const struct BusEvent events[] = {
        {.addr=0xf1c2, .value=0x88, .type=IO_READ},
        {.addr=0xf1c3, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x79bc, .a=0x4e, .x=0x30, .y=0xa3, .sp=0x25, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x79bc, .value=0x88}, {.addr=0x79bd, .value=0x82}};
    const struct CPU_State final_cpu = {.pc=0x79be, .a=0xd0, .x=0x30, .y=0xa3, .sp=0x25, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x79bc, .value=0x88}, {.addr=0x79bd, .value=0x82}};
    const struct BusEvent events[] = {
        {.addr=0x79bc, .value=0x88, .type=IO_READ},
        {.addr=0x79bd, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xead1, .a=0x83, .x=0x91, .y=0x7d, .sp=0xeb, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0xead1, .value=0x88}, {.addr=0xead2, .value=0xbd}};
    const struct CPU_State final_cpu = {.pc=0xead3, .a=0x40, .x=0x91, .y=0x7d, .sp=0xeb, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0xead1, .value=0x88}, {.addr=0xead2, .value=0xbd}};
    const struct BusEvent events[] = {
        {.addr=0xead1, .value=0x88, .type=IO_READ},
        {.addr=0xead2, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x7ebe, .a=0xe4, .x=0x0b, .y=0x7b, .sp=0x8e, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x7ebe, .value=0x88}, {.addr=0x7ebf, .value=0x59}};
    const struct CPU_State final_cpu = {.pc=0x7ec0, .a=0x3d, .x=0x0b, .y=0x7b, .sp=0x8e, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x7ebe, .value=0x88}, {.addr=0x7ebf, .value=0x59}};
    const struct BusEvent events[] = {
        {.addr=0x7ebe, .value=0x88, .type=IO_READ},
        {.addr=0x7ebf, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x1cb5, .a=0xd2, .x=0x63, .y=0x56, .sp=0x6c, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x1cb5, .value=0x88}, {.addr=0x1cb6, .value=0x3e}};
    const struct CPU_State final_cpu = {.pc=0x1cb7, .a=0x10, .x=0x63, .y=0x56, .sp=0x6c, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x1cb5, .value=0x88}, {.addr=0x1cb6, .value=0x3e}};
    const struct BusEvent events[] = {
        {.addr=0x1cb5, .value=0x88, .type=IO_READ},
        {.addr=0x1cb6, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x27f7, .a=0x6b, .x=0x45, .y=0x7a, .sp=0xf0, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x27f7, .value=0x88}, {.addr=0x27f8, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0x27f9, .a=0x28, .x=0x45, .y=0x7a, .sp=0xf0, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x27f7, .value=0x88}, {.addr=0x27f8, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0x27f7, .value=0x88, .type=IO_READ},
        {.addr=0x27f8, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xe4c9, .a=0x2b, .x=0xf0, .y=0xc9, .sp=0x64, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0xe4c9, .value=0x88}, {.addr=0xe4ca, .value=0xd4}};
    const struct CPU_State final_cpu = {.pc=0xe4cb, .a=0x00, .x=0xf0, .y=0xc9, .sp=0x64, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0xe4c9, .value=0x88}, {.addr=0xe4ca, .value=0xd4}};
    const struct BusEvent events[] = {
        {.addr=0xe4c9, .value=0x88, .type=IO_READ},
        {.addr=0xe4ca, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xa22e, .a=0x46, .x=0x47, .y=0x39, .sp=0xdd, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0xa22e, .value=0x88}, {.addr=0xa22f, .value=0xae}};
    const struct CPU_State final_cpu = {.pc=0xa230, .a=0xf5, .x=0x47, .y=0x39, .sp=0xdd, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0xa22e, .value=0x88}, {.addr=0xa22f, .value=0xae}};
    const struct BusEvent events[] = {
        {.addr=0xa22e, .value=0x88, .type=IO_READ},
        {.addr=0xa22f, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x40b8, .a=0x0a, .x=0x16, .y=0x76, .sp=0xdf, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x40b8, .value=0x88}, {.addr=0x40b9, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x40ba, .a=0x27, .x=0x16, .y=0x76, .sp=0xdf, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x40b8, .value=0x88}, {.addr=0x40b9, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x40b8, .value=0x88, .type=IO_READ},
        {.addr=0x40b9, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x0eb5, .a=0xb2, .x=0x1e, .y=0x6c, .sp=0x85, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0eb5, .value=0x88}, {.addr=0x0eb6, .value=0xde}};
    const struct CPU_State final_cpu = {.pc=0x0eb7, .a=0x90, .x=0x1e, .y=0x6c, .sp=0x85, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0eb5, .value=0x88}, {.addr=0x0eb6, .value=0xde}};
    const struct BusEvent events[] = {
        {.addr=0x0eb5, .value=0x88, .type=IO_READ},
        {.addr=0x0eb6, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03AD) {
    const struct CPU_State initial_cpu = {.pc=0xc4a7, .a=0x44, .x=0xd2, .y=0xfb, .sp=0x67, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0xc4a7, .value=0x88}, {.addr=0xc4a8, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0xc4a9, .a=0xe1, .x=0xd2, .y=0xfb, .sp=0x67, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0xc4a7, .value=0x88}, {.addr=0xc4a8, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0xc4a7, .value=0x88, .type=IO_READ},
        {.addr=0xc4a8, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xc943, .a=0x42, .x=0x7e, .y=0xf7, .sp=0x54, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0xc943, .value=0x88}, {.addr=0xc944, .value=0x4f}};
    const struct CPU_State final_cpu = {.pc=0xc945, .a=0x91, .x=0x7e, .y=0xf7, .sp=0x54, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xc943, .value=0x88}, {.addr=0xc944, .value=0x4f}};
    const struct BusEvent events[] = {
        {.addr=0xc943, .value=0x88, .type=IO_READ},
        {.addr=0xc944, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x2b10, .a=0x8d, .x=0x32, .y=0xda, .sp=0x03, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x2b10, .value=0x88}, {.addr=0x2b11, .value=0x54}};
    const struct CPU_State final_cpu = {.pc=0x2b12, .a=0xe2, .x=0x32, .y=0xda, .sp=0x03, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x2b10, .value=0x88}, {.addr=0x2b11, .value=0x54}};
    const struct BusEvent events[] = {
        {.addr=0x2b10, .value=0x88, .type=IO_READ},
        {.addr=0x2b11, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03B0) {
    const struct CPU_State initial_cpu = {.pc=0xfa4a, .a=0xa5, .x=0x0b, .y=0x96, .sp=0x51, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0xfa4a, .value=0x88}, {.addr=0xfa4b, .value=0xe7}};
    const struct CPU_State final_cpu = {.pc=0xfa4c, .a=0x8c, .x=0x0b, .y=0x96, .sp=0x51, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0xfa4a, .value=0x88}, {.addr=0xfa4b, .value=0xe7}};
    const struct BusEvent events[] = {
        {.addr=0xfa4a, .value=0x88, .type=IO_READ},
        {.addr=0xfa4b, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x43bf, .a=0x41, .x=0x14, .y=0xa7, .sp=0x56, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x43bf, .value=0x88}, {.addr=0x43c0, .value=0xa4}};
    const struct CPU_State final_cpu = {.pc=0x43c1, .a=0xe6, .x=0x14, .y=0xa7, .sp=0x56, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x43bf, .value=0x88}, {.addr=0x43c0, .value=0xa4}};
    const struct BusEvent events[] = {
        {.addr=0x43bf, .value=0x88, .type=IO_READ},
        {.addr=0x43c0, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x1e13, .a=0xf2, .x=0xd3, .y=0x38, .sp=0xd4, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x1e13, .value=0x88}, {.addr=0x1e14, .value=0xf8}};
    const struct CPU_State final_cpu = {.pc=0x1e15, .a=0xea, .x=0xd3, .y=0x38, .sp=0xd4, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x1e13, .value=0x88}, {.addr=0x1e14, .value=0xf8}};
    const struct BusEvent events[] = {
        {.addr=0x1e13, .value=0x88, .type=IO_READ},
        {.addr=0x1e14, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x479e, .a=0x29, .x=0x5c, .y=0xd2, .sp=0x8c, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x479e, .value=0x88}, {.addr=0x479f, .value=0x9c}};
    const struct CPU_State final_cpu = {.pc=0x47a0, .a=0xc6, .x=0x5c, .y=0xd2, .sp=0x8c, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x479e, .value=0x88}, {.addr=0x479f, .value=0x9c}};
    const struct BusEvent events[] = {
        {.addr=0x479e, .value=0x88, .type=IO_READ},
        {.addr=0x479f, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x253b, .a=0x20, .x=0x20, .y=0xfb, .sp=0xf8, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x253b, .value=0x88}, {.addr=0x253c, .value=0x11}};
    const struct CPU_State final_cpu = {.pc=0x253d, .a=0x31, .x=0x20, .y=0xfb, .sp=0xf8, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x253b, .value=0x88}, {.addr=0x253c, .value=0x11}};
    const struct BusEvent events[] = {
        {.addr=0x253b, .value=0x88, .type=IO_READ},
        {.addr=0x253c, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xd16a, .a=0x00, .x=0x7a, .y=0x73, .sp=0xe6, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0xd16a, .value=0x88}, {.addr=0xd16b, .value=0x12}};
    const struct CPU_State final_cpu = {.pc=0xd16c, .a=0x12, .x=0x7a, .y=0x73, .sp=0xe6, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0xd16a, .value=0x88}, {.addr=0xd16b, .value=0x12}};
    const struct BusEvent events[] = {
        {.addr=0xd16a, .value=0x88, .type=IO_READ},
        {.addr=0xd16b, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x5648, .a=0xdf, .x=0x8b, .y=0xb5, .sp=0x37, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x5648, .value=0x88}, {.addr=0x5649, .value=0x68}};
    const struct CPU_State final_cpu = {.pc=0x564a, .a=0x47, .x=0x8b, .y=0xb5, .sp=0x37, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x5648, .value=0x88}, {.addr=0x5649, .value=0x68}};
    const struct BusEvent events[] = {
        {.addr=0x5648, .value=0x88, .type=IO_READ},
        {.addr=0x5649, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xc127, .a=0x66, .x=0x87, .y=0x83, .sp=0xb2, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0xc127, .value=0x88}, {.addr=0xc128, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0xc129, .a=0xc5, .x=0x87, .y=0x83, .sp=0xb2, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0xc127, .value=0x88}, {.addr=0xc128, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0xc127, .value=0x88, .type=IO_READ},
        {.addr=0xc128, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03B8) {
    const struct CPU_State initial_cpu = {.pc=0xe9f1, .a=0x55, .x=0xc1, .y=0xf8, .sp=0x09, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0xe9f1, .value=0x88}, {.addr=0xe9f2, .value=0x2b}};
    const struct CPU_State final_cpu = {.pc=0xe9f3, .a=0x81, .x=0xc1, .y=0xf8, .sp=0x09, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0xe9f1, .value=0x88}, {.addr=0xe9f2, .value=0x2b}};
    const struct BusEvent events[] = {
        {.addr=0xe9f1, .value=0x88, .type=IO_READ},
        {.addr=0xe9f2, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03B9) {
    const struct CPU_State initial_cpu = {.pc=0xe6d7, .a=0x37, .x=0x64, .y=0x4c, .sp=0xfc, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0xe6d7, .value=0x88}, {.addr=0xe6d8, .value=0xd7}};
    const struct CPU_State final_cpu = {.pc=0xe6d9, .a=0x0f, .x=0x64, .y=0x4c, .sp=0xfc, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0xe6d7, .value=0x88}, {.addr=0xe6d8, .value=0xd7}};
    const struct BusEvent events[] = {
        {.addr=0xe6d7, .value=0x88, .type=IO_READ},
        {.addr=0xe6d8, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x5212, .a=0xad, .x=0x20, .y=0x54, .sp=0x73, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x5212, .value=0x88}, {.addr=0x5213, .value=0x6a}};
    const struct CPU_State final_cpu = {.pc=0x5214, .a=0x18, .x=0x20, .y=0x54, .sp=0x73, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x5212, .value=0x88}, {.addr=0x5213, .value=0x6a}};
    const struct BusEvent events[] = {
        {.addr=0x5212, .value=0x88, .type=IO_READ},
        {.addr=0x5213, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x419a, .a=0xba, .x=0xbc, .y=0x3e, .sp=0x18, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x419a, .value=0x88}, {.addr=0x419b, .value=0xb6}};
    const struct CPU_State final_cpu = {.pc=0x419c, .a=0x70, .x=0xbc, .y=0x3e, .sp=0x18, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x419a, .value=0x88}, {.addr=0x419b, .value=0xb6}};
    const struct BusEvent events[] = {
        {.addr=0x419a, .value=0x88, .type=IO_READ},
        {.addr=0x419b, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03BC) {
    const struct CPU_State initial_cpu = {.pc=0xd87f, .a=0x4d, .x=0x22, .y=0x7c, .sp=0x24, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0xd87f, .value=0x88}, {.addr=0xd880, .value=0x89}};
    const struct CPU_State final_cpu = {.pc=0xd881, .a=0xd7, .x=0x22, .y=0x7c, .sp=0x24, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0xd87f, .value=0x88}, {.addr=0xd880, .value=0x89}};
    const struct BusEvent events[] = {
        {.addr=0xd87f, .value=0x88, .type=IO_READ},
        {.addr=0xd880, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x81ef, .a=0xbb, .x=0x0e, .y=0xb7, .sp=0xed, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x81ef, .value=0x88}, {.addr=0x81f0, .value=0x5f}};
    const struct CPU_State final_cpu = {.pc=0x81f1, .a=0x1a, .x=0x0e, .y=0xb7, .sp=0xed, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x81ef, .value=0x88}, {.addr=0x81f0, .value=0x5f}};
    const struct BusEvent events[] = {
        {.addr=0x81ef, .value=0x88, .type=IO_READ},
        {.addr=0x81f0, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03BE) {
    const struct CPU_State initial_cpu = {.pc=0x045d, .a=0xe7, .x=0xdd, .y=0x0f, .sp=0xd8, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x045d, .value=0x88}, {.addr=0x045e, .value=0xe2}};
    const struct CPU_State final_cpu = {.pc=0x045f, .a=0xca, .x=0xdd, .y=0x0f, .sp=0xd8, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x045d, .value=0x88}, {.addr=0x045e, .value=0xe2}};
    const struct BusEvent events[] = {
        {.addr=0x045d, .value=0x88, .type=IO_READ},
        {.addr=0x045e, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03BF) {
    const struct CPU_State initial_cpu = {.pc=0x04d3, .a=0xd5, .x=0x53, .y=0xea, .sp=0x38, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x04d3, .value=0x88}, {.addr=0x04d4, .value=0xdd}};
    const struct CPU_State final_cpu = {.pc=0x04d5, .a=0xb3, .x=0x53, .y=0xea, .sp=0x38, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x04d3, .value=0x88}, {.addr=0x04d4, .value=0xdd}};
    const struct BusEvent events[] = {
        {.addr=0x04d3, .value=0x88, .type=IO_READ},
        {.addr=0x04d4, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x7290, .a=0x2a, .x=0xaa, .y=0x81, .sp=0xe7, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x7290, .value=0x88}, {.addr=0x7291, .value=0x81}};
    const struct CPU_State final_cpu = {.pc=0x7292, .a=0xac, .x=0xaa, .y=0x81, .sp=0xe7, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x7290, .value=0x88}, {.addr=0x7291, .value=0x81}};
    const struct BusEvent events[] = {
        {.addr=0x7290, .value=0x88, .type=IO_READ},
        {.addr=0x7291, .value=0x81, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x573c, .a=0x3f, .x=0xa9, .y=0xc5, .sp=0x96, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x573c, .value=0x88}, {.addr=0x573d, .value=0x30}};
    const struct CPU_State final_cpu = {.pc=0x573e, .a=0x6f, .x=0xa9, .y=0xc5, .sp=0x96, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x573c, .value=0x88}, {.addr=0x573d, .value=0x30}};
    const struct BusEvent events[] = {
        {.addr=0x573c, .value=0x88, .type=IO_READ},
        {.addr=0x573d, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x929f, .a=0x13, .x=0x7e, .y=0xc1, .sp=0x19, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x929f, .value=0x88}, {.addr=0x92a0, .value=0x0c}};
    const struct CPU_State final_cpu = {.pc=0x92a1, .a=0x20, .x=0x7e, .y=0xc1, .sp=0x19, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x929f, .value=0x88}, {.addr=0x92a0, .value=0x0c}};
    const struct BusEvent events[] = {
        {.addr=0x929f, .value=0x88, .type=IO_READ},
        {.addr=0x92a0, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x3a0e, .a=0x1b, .x=0x96, .y=0x09, .sp=0x45, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x3a0e, .value=0x88}, {.addr=0x3a0f, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x3a10, .a=0x13, .x=0x96, .y=0x09, .sp=0x45, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x3a0e, .value=0x88}, {.addr=0x3a0f, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x3a0e, .value=0x88, .type=IO_READ},
        {.addr=0x3a0f, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x8c65, .a=0xc6, .x=0x48, .y=0x87, .sp=0x25, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x8c65, .value=0x88}, {.addr=0x8c66, .value=0x6d}};
    const struct CPU_State final_cpu = {.pc=0x8c67, .a=0x34, .x=0x48, .y=0x87, .sp=0x25, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x8c65, .value=0x88}, {.addr=0x8c66, .value=0x6d}};
    const struct BusEvent events[] = {
        {.addr=0x8c65, .value=0x88, .type=IO_READ},
        {.addr=0x8c66, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xcae5, .a=0x95, .x=0x0c, .y=0x68, .sp=0x20, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0xcae5, .value=0x88}, {.addr=0xcae6, .value=0xff}};
    const struct CPU_State final_cpu = {.pc=0xcae7, .a=0x94, .x=0x0c, .y=0x68, .sp=0x20, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xcae5, .value=0x88}, {.addr=0xcae6, .value=0xff}};
    const struct BusEvent events[] = {
        {.addr=0xcae5, .value=0x88, .type=IO_READ},
        {.addr=0xcae6, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xf4e4, .a=0xe5, .x=0x11, .y=0xf0, .sp=0xe3, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0xf4e4, .value=0x88}, {.addr=0xf4e5, .value=0x0d}};
    const struct CPU_State final_cpu = {.pc=0xf4e6, .a=0xf3, .x=0x11, .y=0xf0, .sp=0xe3, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xf4e4, .value=0x88}, {.addr=0xf4e5, .value=0x0d}};
    const struct BusEvent events[] = {
        {.addr=0xf4e4, .value=0x88, .type=IO_READ},
        {.addr=0xf4e5, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xc486, .a=0x24, .x=0xb6, .y=0x5d, .sp=0x4b, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0xc486, .value=0x88}, {.addr=0xc487, .value=0x84}};
    const struct CPU_State final_cpu = {.pc=0xc488, .a=0xa8, .x=0xb6, .y=0x5d, .sp=0x4b, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xc486, .value=0x88}, {.addr=0xc487, .value=0x84}};
    const struct BusEvent events[] = {
        {.addr=0xc486, .value=0x88, .type=IO_READ},
        {.addr=0xc487, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03C8) {
    const struct CPU_State initial_cpu = {.pc=0x4c0b, .a=0xb0, .x=0x8a, .y=0x0b, .sp=0x71, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x4c0b, .value=0x88}, {.addr=0x4c0c, .value=0x47}};
    const struct CPU_State final_cpu = {.pc=0x4c0d, .a=0xf7, .x=0x8a, .y=0x0b, .sp=0x71, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x4c0b, .value=0x88}, {.addr=0x4c0c, .value=0x47}};
    const struct BusEvent events[] = {
        {.addr=0x4c0b, .value=0x88, .type=IO_READ},
        {.addr=0x4c0c, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x84f5, .a=0xd3, .x=0xa9, .y=0x7d, .sp=0xba, .status=0x0c};
    const struct RamEntry initial_ram[] = {{.addr=0x84f5, .value=0x88}, {.addr=0x84f6, .value=0x2c}};
    const struct CPU_State final_cpu = {.pc=0x84f7, .a=0xff, .x=0xa9, .y=0x7d, .sp=0xba, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x84f5, .value=0x88}, {.addr=0x84f6, .value=0x2c}};
    const struct BusEvent events[] = {
        {.addr=0x84f5, .value=0x88, .type=IO_READ},
        {.addr=0x84f6, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03CA) {
    const struct CPU_State initial_cpu = {.pc=0xa95a, .a=0x2a, .x=0x25, .y=0x8f, .sp=0x43, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0xa95a, .value=0x88}, {.addr=0xa95b, .value=0xbc}};
    const struct CPU_State final_cpu = {.pc=0xa95c, .a=0xe6, .x=0x25, .y=0x8f, .sp=0x43, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xa95a, .value=0x88}, {.addr=0xa95b, .value=0xbc}};
    const struct BusEvent events[] = {
        {.addr=0xa95a, .value=0x88, .type=IO_READ},
        {.addr=0xa95b, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x63e9, .a=0x3b, .x=0xc6, .y=0x49, .sp=0xd1, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x63e9, .value=0x88}, {.addr=0x63ea, .value=0x96}};
    const struct CPU_State final_cpu = {.pc=0x63eb, .a=0xd1, .x=0xc6, .y=0x49, .sp=0xd1, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x63e9, .value=0x88}, {.addr=0x63ea, .value=0x96}};
    const struct BusEvent events[] = {
        {.addr=0x63e9, .value=0x88, .type=IO_READ},
        {.addr=0x63ea, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x8a61, .a=0xd5, .x=0x16, .y=0x71, .sp=0x04, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x8a61, .value=0x88}, {.addr=0x8a62, .value=0xbb}};
    const struct CPU_State final_cpu = {.pc=0x8a63, .a=0x90, .x=0x16, .y=0x71, .sp=0x04, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x8a61, .value=0x88}, {.addr=0x8a62, .value=0xbb}};
    const struct BusEvent events[] = {
        {.addr=0x8a61, .value=0x88, .type=IO_READ},
        {.addr=0x8a62, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xaa34, .a=0x5c, .x=0xf2, .y=0x0d, .sp=0xa1, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0xaa34, .value=0x88}, {.addr=0xaa35, .value=0x83}};
    const struct CPU_State final_cpu = {.pc=0xaa36, .a=0xe0, .x=0xf2, .y=0x0d, .sp=0xa1, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xaa34, .value=0x88}, {.addr=0xaa35, .value=0x83}};
    const struct BusEvent events[] = {
        {.addr=0xaa34, .value=0x88, .type=IO_READ},
        {.addr=0xaa35, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x8059, .a=0x58, .x=0x40, .y=0xd8, .sp=0x88, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x8059, .value=0x88}, {.addr=0x805a, .value=0x3a}};
    const struct CPU_State final_cpu = {.pc=0x805b, .a=0x93, .x=0x40, .y=0xd8, .sp=0x88, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x8059, .value=0x88}, {.addr=0x805a, .value=0x3a}};
    const struct BusEvent events[] = {
        {.addr=0x8059, .value=0x88, .type=IO_READ},
        {.addr=0x805a, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x9a32, .a=0xb8, .x=0xb6, .y=0x6f, .sp=0x45, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x9a32, .value=0x88}, {.addr=0x9a33, .value=0xfc}};
    const struct CPU_State final_cpu = {.pc=0x9a34, .a=0xb4, .x=0xb6, .y=0x6f, .sp=0x45, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x9a32, .value=0x88}, {.addr=0x9a33, .value=0xfc}};
    const struct BusEvent events[] = {
        {.addr=0x9a32, .value=0x88, .type=IO_READ},
        {.addr=0x9a33, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03D0) {
    const struct CPU_State initial_cpu = {.pc=0xe0fa, .a=0x09, .x=0xf1, .y=0x0e, .sp=0x3e, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0xe0fa, .value=0x88}, {.addr=0xe0fb, .value=0xc9}};
    const struct CPU_State final_cpu = {.pc=0xe0fc, .a=0xd2, .x=0xf1, .y=0x0e, .sp=0x3e, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0xe0fa, .value=0x88}, {.addr=0xe0fb, .value=0xc9}};
    const struct BusEvent events[] = {
        {.addr=0xe0fa, .value=0x88, .type=IO_READ},
        {.addr=0xe0fb, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xd9bc, .a=0xe6, .x=0x17, .y=0x39, .sp=0xda, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0xd9bc, .value=0x88}, {.addr=0xd9bd, .value=0xcf}};
    const struct CPU_State final_cpu = {.pc=0xd9be, .a=0xb6, .x=0x17, .y=0x39, .sp=0xda, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0xd9bc, .value=0x88}, {.addr=0xd9bd, .value=0xcf}};
    const struct BusEvent events[] = {
        {.addr=0xd9bc, .value=0x88, .type=IO_READ},
        {.addr=0xd9bd, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x8781, .a=0x56, .x=0x44, .y=0x63, .sp=0x25, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x8781, .value=0x88}, {.addr=0x8782, .value=0xf7}};
    const struct CPU_State final_cpu = {.pc=0x8783, .a=0x4d, .x=0x44, .y=0x63, .sp=0x25, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x8781, .value=0x88}, {.addr=0x8782, .value=0xf7}};
    const struct BusEvent events[] = {
        {.addr=0x8781, .value=0x88, .type=IO_READ},
        {.addr=0x8782, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03D3) {
    const struct CPU_State initial_cpu = {.pc=0x5025, .a=0x62, .x=0x9a, .y=0x6b, .sp=0xd7, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x5025, .value=0x88}, {.addr=0x5026, .value=0x67}};
    const struct CPU_State final_cpu = {.pc=0x5027, .a=0xca, .x=0x9a, .y=0x6b, .sp=0xd7, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x5025, .value=0x88}, {.addr=0x5026, .value=0x67}};
    const struct BusEvent events[] = {
        {.addr=0x5025, .value=0x88, .type=IO_READ},
        {.addr=0x5026, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03D4) {
    const struct CPU_State initial_cpu = {.pc=0x9422, .a=0x78, .x=0x20, .y=0xe0, .sp=0x1f, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x9422, .value=0x88}, {.addr=0x9423, .value=0xd1}};
    const struct CPU_State final_cpu = {.pc=0x9424, .a=0x4a, .x=0x20, .y=0xe0, .sp=0x1f, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x9422, .value=0x88}, {.addr=0x9423, .value=0xd1}};
    const struct BusEvent events[] = {
        {.addr=0x9422, .value=0x88, .type=IO_READ},
        {.addr=0x9423, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x1377, .a=0xf0, .x=0x9e, .y=0x3d, .sp=0xed, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x1377, .value=0x88}, {.addr=0x1378, .value=0xeb}};
    const struct CPU_State final_cpu = {.pc=0x1379, .a=0xdc, .x=0x9e, .y=0x3d, .sp=0xed, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x1377, .value=0x88}, {.addr=0x1378, .value=0xeb}};
    const struct BusEvent events[] = {
        {.addr=0x1377, .value=0x88, .type=IO_READ},
        {.addr=0x1378, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x586e, .a=0x5b, .x=0x2e, .y=0xf8, .sp=0x4d, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x586e, .value=0x88}, {.addr=0x586f, .value=0xc6}};
    const struct CPU_State final_cpu = {.pc=0x5870, .a=0x22, .x=0x2e, .y=0xf8, .sp=0x4d, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x586e, .value=0x88}, {.addr=0x586f, .value=0xc6}};
    const struct BusEvent events[] = {
        {.addr=0x586e, .value=0x88, .type=IO_READ},
        {.addr=0x586f, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xc432, .a=0xec, .x=0x0b, .y=0x95, .sp=0xaa, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0xc432, .value=0x88}, {.addr=0xc433, .value=0x42}};
    const struct CPU_State final_cpu = {.pc=0xc434, .a=0x2f, .x=0x0b, .y=0x95, .sp=0xaa, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0xc432, .value=0x88}, {.addr=0xc433, .value=0x42}};
    const struct BusEvent events[] = {
        {.addr=0xc432, .value=0x88, .type=IO_READ},
        {.addr=0xc433, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xfb00, .a=0xfb, .x=0x77, .y=0x0f, .sp=0x0b, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0xfb00, .value=0x88}, {.addr=0xfb01, .value=0xa9}};
    const struct CPU_State final_cpu = {.pc=0xfb02, .a=0xa5, .x=0x77, .y=0x0f, .sp=0x0b, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0xfb00, .value=0x88}, {.addr=0xfb01, .value=0xa9}};
    const struct BusEvent events[] = {
        {.addr=0xfb00, .value=0x88, .type=IO_READ},
        {.addr=0xfb01, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x5634, .a=0xf9, .x=0x08, .y=0x27, .sp=0x60, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x5634, .value=0x88}, {.addr=0x5635, .value=0x1f}};
    const struct CPU_State final_cpu = {.pc=0x5636, .a=0x18, .x=0x08, .y=0x27, .sp=0x60, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x5634, .value=0x88}, {.addr=0x5635, .value=0x1f}};
    const struct BusEvent events[] = {
        {.addr=0x5634, .value=0x88, .type=IO_READ},
        {.addr=0x5635, .value=0x1f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x1ab7, .a=0x69, .x=0xaa, .y=0xf9, .sp=0xc7, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x1ab7, .value=0x88}, {.addr=0x1ab8, .value=0x13}};
    const struct CPU_State final_cpu = {.pc=0x1ab9, .a=0x7d, .x=0xaa, .y=0xf9, .sp=0xc7, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x1ab7, .value=0x88}, {.addr=0x1ab8, .value=0x13}};
    const struct BusEvent events[] = {
        {.addr=0x1ab7, .value=0x88, .type=IO_READ},
        {.addr=0x1ab8, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x11d9, .a=0x05, .x=0x03, .y=0x6e, .sp=0x3b, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x11d9, .value=0x88}, {.addr=0x11da, .value=0x8e}};
    const struct CPU_State final_cpu = {.pc=0x11db, .a=0x94, .x=0x03, .y=0x6e, .sp=0x3b, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x11d9, .value=0x88}, {.addr=0x11da, .value=0x8e}};
    const struct BusEvent events[] = {
        {.addr=0x11d9, .value=0x88, .type=IO_READ},
        {.addr=0x11da, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03DC) {
    const struct CPU_State initial_cpu = {.pc=0xdcff, .a=0x02, .x=0x6c, .y=0x9e, .sp=0x49, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0xdcff, .value=0x88}, {.addr=0xdd00, .value=0x33}};
    const struct CPU_State final_cpu = {.pc=0xdd01, .a=0x36, .x=0x6c, .y=0x9e, .sp=0x49, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0xdcff, .value=0x88}, {.addr=0xdd00, .value=0x33}};
    const struct BusEvent events[] = {
        {.addr=0xdcff, .value=0x88, .type=IO_READ},
        {.addr=0xdd00, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03DD) {
    const struct CPU_State initial_cpu = {.pc=0xdbaa, .a=0xaa, .x=0x6c, .y=0x98, .sp=0x11, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0xdbaa, .value=0x88}, {.addr=0xdbab, .value=0x5d}};
    const struct CPU_State final_cpu = {.pc=0xdbac, .a=0x08, .x=0x6c, .y=0x98, .sp=0x11, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0xdbaa, .value=0x88}, {.addr=0xdbab, .value=0x5d}};
    const struct BusEvent events[] = {
        {.addr=0xdbaa, .value=0x88, .type=IO_READ},
        {.addr=0xdbab, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x1dbb, .a=0x1e, .x=0x4e, .y=0xef, .sp=0x86, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x1dbb, .value=0x88}, {.addr=0x1dbc, .value=0x1d}};
    const struct CPU_State final_cpu = {.pc=0x1dbd, .a=0x3b, .x=0x4e, .y=0xef, .sp=0x86, .status=0x0c};
    const struct RamEntry final_ram[] = {{.addr=0x1dbb, .value=0x88}, {.addr=0x1dbc, .value=0x1d}};
    const struct BusEvent events[] = {
        {.addr=0x1dbb, .value=0x88, .type=IO_READ},
        {.addr=0x1dbc, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x4bde, .a=0x99, .x=0x91, .y=0x30, .sp=0x07, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x4bde, .value=0x88}, {.addr=0x4bdf, .value=0x0e}};
    const struct CPU_State final_cpu = {.pc=0x4be0, .a=0xa7, .x=0x91, .y=0x30, .sp=0x07, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x4bde, .value=0x88}, {.addr=0x4bdf, .value=0x0e}};
    const struct BusEvent events[] = {
        {.addr=0x4bde, .value=0x88, .type=IO_READ},
        {.addr=0x4bdf, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x9e5d, .a=0x0e, .x=0xd9, .y=0xaf, .sp=0xbb, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x9e5d, .value=0x88}, {.addr=0x9e5e, .value=0x16}};
    const struct CPU_State final_cpu = {.pc=0x9e5f, .a=0x25, .x=0xd9, .y=0xaf, .sp=0xbb, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x9e5d, .value=0x88}, {.addr=0x9e5e, .value=0x16}};
    const struct BusEvent events[] = {
        {.addr=0x9e5d, .value=0x88, .type=IO_READ},
        {.addr=0x9e5e, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xa9c3, .a=0x33, .x=0xac, .y=0x03, .sp=0xd9, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0xa9c3, .value=0x88}, {.addr=0xa9c4, .value=0x8d}};
    const struct CPU_State final_cpu = {.pc=0xa9c5, .a=0xc1, .x=0xac, .y=0x03, .sp=0xd9, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0xa9c3, .value=0x88}, {.addr=0xa9c4, .value=0x8d}};
    const struct BusEvent events[] = {
        {.addr=0xa9c3, .value=0x88, .type=IO_READ},
        {.addr=0xa9c4, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xcf40, .a=0x8b, .x=0x97, .y=0xd8, .sp=0x6a, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0xcf40, .value=0x88}, {.addr=0xcf41, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0xcf42, .a=0x8b, .x=0x97, .y=0xd8, .sp=0x6a, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0xcf40, .value=0x88}, {.addr=0xcf41, .value=0x00}};
    const struct BusEvent events[] = {
        {.addr=0xcf40, .value=0x88, .type=IO_READ},
        {.addr=0xcf41, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x7b8b, .a=0xb4, .x=0x3c, .y=0x26, .sp=0x8f, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x7b8b, .value=0x88}, {.addr=0x7b8c, .value=0xcb}};
    const struct CPU_State final_cpu = {.pc=0x7b8d, .a=0x80, .x=0x3c, .y=0x26, .sp=0x8f, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x7b8b, .value=0x88}, {.addr=0x7b8c, .value=0xcb}};
    const struct BusEvent events[] = {
        {.addr=0x7b8b, .value=0x88, .type=IO_READ},
        {.addr=0x7b8c, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xc49a, .a=0x7a, .x=0xff, .y=0x74, .sp=0x1a, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0xc49a, .value=0x88}, {.addr=0xc49b, .value=0x7a}};
    const struct CPU_State final_cpu = {.pc=0xc49c, .a=0xf4, .x=0xff, .y=0x74, .sp=0x1a, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0xc49a, .value=0x88}, {.addr=0xc49b, .value=0x7a}};
    const struct BusEvent events[] = {
        {.addr=0xc49a, .value=0x88, .type=IO_READ},
        {.addr=0xc49b, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x5639, .a=0x9c, .x=0x1a, .y=0x84, .sp=0x93, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x5639, .value=0x88}, {.addr=0x563a, .value=0xaf}};
    const struct CPU_State final_cpu = {.pc=0x563b, .a=0x4b, .x=0x1a, .y=0x84, .sp=0x93, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x5639, .value=0x88}, {.addr=0x563a, .value=0xaf}};
    const struct BusEvent events[] = {
        {.addr=0x5639, .value=0x88, .type=IO_READ},
        {.addr=0x563a, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xc1d9, .a=0x37, .x=0x19, .y=0x7b, .sp=0x16, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0xc1d9, .value=0x88}, {.addr=0xc1da, .value=0x9b}};
    const struct CPU_State final_cpu = {.pc=0xc1db, .a=0xd2, .x=0x19, .y=0x7b, .sp=0x16, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0xc1d9, .value=0x88}, {.addr=0xc1da, .value=0x9b}};
    const struct BusEvent events[] = {
        {.addr=0xc1d9, .value=0x88, .type=IO_READ},
        {.addr=0xc1da, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_88, _88_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xaa39, .a=0xe0, .x=0x66, .y=0x8f, .sp=0x19, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0xaa39, .value=0x88}, {.addr=0xaa3a, .value=0x2e}};
    const struct CPU_State final_cpu = {.pc=0xaa3b, .a=0x0e, .x=0x66, .y=0x8f, .sp=0x19, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0xaa39, .value=0x88}, {.addr=0xaa3a, .value=0x2e}};
    const struct BusEvent events[] = {
        {.addr=0xaa39, .value=0x88, .type=IO_READ},
        {.addr=0xaa3a, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("88 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
