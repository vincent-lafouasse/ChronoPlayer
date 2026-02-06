#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_4D, _4D_0000) {
    const struct CPU_State initial_cpu = {.pc=0xa752, .a=0xb3, .x=0x4a, .y=0x20, .sp=0x4c, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x00}, {.addr=0xa752, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa753, .a=0xb3, .x=0x4a, .y=0x20, .sp=0x4b, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x4a}, {.addr=0xa752, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa752, .value=0x4d, .type=IO_READ},
        {.addr=0xa753, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x4a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0001) {
    const struct CPU_State initial_cpu = {.pc=0x349f, .a=0x8f, .x=0x6b, .y=0x66, .sp=0x9c, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x00}, {.addr=0x349f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x34a0, .a=0x8f, .x=0x6b, .y=0x66, .sp=0x9b, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0x6b}, {.addr=0x349f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x349f, .value=0x4d, .type=IO_READ},
        {.addr=0x34a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0002) {
    const struct CPU_State initial_cpu = {.pc=0xb440, .a=0xdc, .x=0xca, .y=0x7f, .sp=0x7d, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0xb440, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb441, .a=0xdc, .x=0xca, .y=0x7f, .sp=0x7c, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xca}, {.addr=0xb440, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb440, .value=0x4d, .type=IO_READ},
        {.addr=0xb441, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0003) {
    const struct CPU_State initial_cpu = {.pc=0xba45, .a=0x81, .x=0x09, .y=0x52, .sp=0xb6, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0xba45, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xba46, .a=0x81, .x=0x09, .y=0x52, .sp=0xb5, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x09}, {.addr=0xba45, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xba45, .value=0x4d, .type=IO_READ},
        {.addr=0xba46, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x09, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0004) {
    const struct CPU_State initial_cpu = {.pc=0xa520, .a=0x4b, .x=0x15, .y=0xc0, .sp=0xba, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x00}, {.addr=0xa520, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa521, .a=0x4b, .x=0x15, .y=0xc0, .sp=0xb9, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x15}, {.addr=0xa520, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa520, .value=0x4d, .type=IO_READ},
        {.addr=0xa521, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0x15, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0005) {
    const struct CPU_State initial_cpu = {.pc=0xff76, .a=0xc7, .x=0xe9, .y=0xb6, .sp=0x1b, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0xff76, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xff77, .a=0xc7, .x=0xe9, .y=0xb6, .sp=0x1a, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xe9}, {.addr=0xff76, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xff76, .value=0x4d, .type=IO_READ},
        {.addr=0xff77, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0006) {
    const struct CPU_State initial_cpu = {.pc=0x1c35, .a=0x47, .x=0x07, .y=0x8c, .sp=0xac, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x00}, {.addr=0x1c35, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1c36, .a=0x47, .x=0x07, .y=0x8c, .sp=0xab, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x07}, {.addr=0x1c35, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1c35, .value=0x4d, .type=IO_READ},
        {.addr=0x1c36, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0x07, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0007) {
    const struct CPU_State initial_cpu = {.pc=0x6b40, .a=0x11, .x=0x77, .y=0x5c, .sp=0xe3, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0x6b40, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6b41, .a=0x11, .x=0x77, .y=0x5c, .sp=0xe2, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x77}, {.addr=0x6b40, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6b40, .value=0x4d, .type=IO_READ},
        {.addr=0x6b41, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0x77, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0008) {
    const struct CPU_State initial_cpu = {.pc=0x07df, .a=0x44, .x=0x02, .y=0x6c, .sp=0x0f, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x00}, {.addr=0x07df, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x07e0, .a=0x44, .x=0x02, .y=0x6c, .sp=0x0e, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0x02}, {.addr=0x07df, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x07df, .value=0x4d, .type=IO_READ},
        {.addr=0x07e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0x02, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0009) {
    const struct CPU_State initial_cpu = {.pc=0xadd2, .a=0x68, .x=0xd7, .y=0x6f, .sp=0x17, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x00}, {.addr=0xadd2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xadd3, .a=0x68, .x=0xd7, .y=0x6f, .sp=0x16, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0xd7}, {.addr=0xadd2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xadd2, .value=0x4d, .type=IO_READ},
        {.addr=0xadd3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0xd7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_000A) {
    const struct CPU_State initial_cpu = {.pc=0xef72, .a=0x6b, .x=0xb5, .y=0x2a, .sp=0x82, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0xef72, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xef73, .a=0x6b, .x=0xb5, .y=0x2a, .sp=0x81, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xb5}, {.addr=0xef72, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xef72, .value=0x4d, .type=IO_READ},
        {.addr=0xef73, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0xb5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_000B) {
    const struct CPU_State initial_cpu = {.pc=0x2c3f, .a=0xf4, .x=0x37, .y=0x37, .sp=0x40, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x00}, {.addr=0x2c3f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2c40, .a=0xf4, .x=0x37, .y=0x37, .sp=0x3f, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x37}, {.addr=0x2c3f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2c3f, .value=0x4d, .type=IO_READ},
        {.addr=0x2c40, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_000C) {
    const struct CPU_State initial_cpu = {.pc=0xdf86, .a=0x6f, .x=0x9c, .y=0xfd, .sp=0xb9, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0xdf86, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xdf87, .a=0x6f, .x=0x9c, .y=0xfd, .sp=0xb8, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x9c}, {.addr=0xdf86, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xdf86, .value=0x4d, .type=IO_READ},
        {.addr=0xdf87, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x9c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_000D) {
    const struct CPU_State initial_cpu = {.pc=0x400f, .a=0x37, .x=0x4b, .y=0x66, .sp=0x6e, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x00}, {.addr=0x400f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4010, .a=0x37, .x=0x4b, .y=0x66, .sp=0x6d, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x4b}, {.addr=0x400f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x400f, .value=0x4d, .type=IO_READ},
        {.addr=0x4010, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x4b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_000E) {
    const struct CPU_State initial_cpu = {.pc=0x55f5, .a=0x7d, .x=0x98, .y=0xcf, .sp=0x6a, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x00}, {.addr=0x55f5, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x55f6, .a=0x7d, .x=0x98, .y=0xcf, .sp=0x69, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x98}, {.addr=0x55f5, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x55f5, .value=0x4d, .type=IO_READ},
        {.addr=0x55f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x98, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_000F) {
    const struct CPU_State initial_cpu = {.pc=0xcc97, .a=0x96, .x=0x3f, .y=0x56, .sp=0xc3, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x00}, {.addr=0xcc97, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcc98, .a=0x96, .x=0x3f, .y=0x56, .sp=0xc2, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x3f}, {.addr=0xcc97, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcc97, .value=0x4d, .type=IO_READ},
        {.addr=0xcc98, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0x3f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0010) {
    const struct CPU_State initial_cpu = {.pc=0xd73a, .a=0xff, .x=0xf0, .y=0xb9, .sp=0x3c, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0xd73a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd73b, .a=0xff, .x=0xf0, .y=0xb9, .sp=0x3b, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xf0}, {.addr=0xd73a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd73a, .value=0x4d, .type=IO_READ},
        {.addr=0xd73b, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0011) {
    const struct CPU_State initial_cpu = {.pc=0x3352, .a=0x99, .x=0xce, .y=0x30, .sp=0x0e, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x00}, {.addr=0x3352, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3353, .a=0x99, .x=0xce, .y=0x30, .sp=0x0d, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0xce}, {.addr=0x3352, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3352, .value=0x4d, .type=IO_READ},
        {.addr=0x3353, .value=DUMMY, .type=IO_READ},
        {.addr=0x010e, .value=0xce, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0012) {
    const struct CPU_State initial_cpu = {.pc=0x3b8f, .a=0x17, .x=0x62, .y=0x9c, .sp=0xb3, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x00}, {.addr=0x3b8f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3b90, .a=0x17, .x=0x62, .y=0x9c, .sp=0xb2, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x62}, {.addr=0x3b8f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3b8f, .value=0x4d, .type=IO_READ},
        {.addr=0x3b90, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0013) {
    const struct CPU_State initial_cpu = {.pc=0x1387, .a=0x61, .x=0xc1, .y=0x7b, .sp=0x27, .status=0x4c};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x00}, {.addr=0x1387, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1388, .a=0x61, .x=0xc1, .y=0x7b, .sp=0x26, .status=0x4c};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0xc1}, {.addr=0x1387, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1387, .value=0x4d, .type=IO_READ},
        {.addr=0x1388, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0014) {
    const struct CPU_State initial_cpu = {.pc=0xb157, .a=0xce, .x=0x4e, .y=0x97, .sp=0xf5, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x00}, {.addr=0xb157, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb158, .a=0xce, .x=0x4e, .y=0x97, .sp=0xf4, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x4e}, {.addr=0xb157, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb157, .value=0x4d, .type=IO_READ},
        {.addr=0xb158, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0x4e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0015) {
    const struct CPU_State initial_cpu = {.pc=0x24d0, .a=0x6e, .x=0x48, .y=0xf5, .sp=0x90, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x00}, {.addr=0x24d0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x24d1, .a=0x6e, .x=0x48, .y=0xf5, .sp=0x8f, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x48}, {.addr=0x24d0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x24d0, .value=0x4d, .type=IO_READ},
        {.addr=0x24d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0x48, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0016) {
    const struct CPU_State initial_cpu = {.pc=0x1be3, .a=0x21, .x=0xea, .y=0x42, .sp=0x73, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x00}, {.addr=0x1be3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1be4, .a=0x21, .x=0xea, .y=0x42, .sp=0x72, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xea}, {.addr=0x1be3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1be3, .value=0x4d, .type=IO_READ},
        {.addr=0x1be4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0xea, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0017) {
    const struct CPU_State initial_cpu = {.pc=0xe9c6, .a=0xb2, .x=0x04, .y=0xcf, .sp=0xd9, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x00}, {.addr=0xe9c6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe9c7, .a=0xb2, .x=0x04, .y=0xcf, .sp=0xd8, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x04}, {.addr=0xe9c6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe9c6, .value=0x4d, .type=IO_READ},
        {.addr=0xe9c7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0018) {
    const struct CPU_State initial_cpu = {.pc=0x878a, .a=0x5e, .x=0xd6, .y=0x3f, .sp=0x67, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0x878a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x878b, .a=0x5e, .x=0xd6, .y=0x3f, .sp=0x66, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xd6}, {.addr=0x878a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x878a, .value=0x4d, .type=IO_READ},
        {.addr=0x878b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0xd6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0019) {
    const struct CPU_State initial_cpu = {.pc=0x1e62, .a=0x2d, .x=0xe0, .y=0xa7, .sp=0xf4, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x00}, {.addr=0x1e62, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1e63, .a=0x2d, .x=0xe0, .y=0xa7, .sp=0xf3, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0xe0}, {.addr=0x1e62, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1e62, .value=0x4d, .type=IO_READ},
        {.addr=0x1e63, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0xe0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_001A) {
    const struct CPU_State initial_cpu = {.pc=0x9d51, .a=0xd6, .x=0x6d, .y=0x75, .sp=0x65, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x00}, {.addr=0x9d51, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9d52, .a=0xd6, .x=0x6d, .y=0x75, .sp=0x64, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x6d}, {.addr=0x9d51, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9d51, .value=0x4d, .type=IO_READ},
        {.addr=0x9d52, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0x6d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_001B) {
    const struct CPU_State initial_cpu = {.pc=0x4794, .a=0x63, .x=0x63, .y=0x3f, .sp=0x59, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0x4794, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4795, .a=0x63, .x=0x63, .y=0x3f, .sp=0x58, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x63}, {.addr=0x4794, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4794, .value=0x4d, .type=IO_READ},
        {.addr=0x4795, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x63, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_001C) {
    const struct CPU_State initial_cpu = {.pc=0x960f, .a=0xa4, .x=0x46, .y=0x06, .sp=0xce, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x00}, {.addr=0x960f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9610, .a=0xa4, .x=0x46, .y=0x06, .sp=0xcd, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x46}, {.addr=0x960f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x960f, .value=0x4d, .type=IO_READ},
        {.addr=0x9610, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x46, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_001D) {
    const struct CPU_State initial_cpu = {.pc=0xac24, .a=0xbe, .x=0x57, .y=0xf8, .sp=0x84, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x00}, {.addr=0xac24, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xac25, .a=0xbe, .x=0x57, .y=0xf8, .sp=0x83, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0x57}, {.addr=0xac24, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xac24, .value=0x4d, .type=IO_READ},
        {.addr=0xac25, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0x57, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_001E) {
    const struct CPU_State initial_cpu = {.pc=0x6961, .a=0x11, .x=0x60, .y=0xe0, .sp=0xc1, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0x6961, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6962, .a=0x11, .x=0x60, .y=0xe0, .sp=0xc0, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x60}, {.addr=0x6961, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6961, .value=0x4d, .type=IO_READ},
        {.addr=0x6962, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x60, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_001F) {
    const struct CPU_State initial_cpu = {.pc=0x5aef, .a=0x2f, .x=0xae, .y=0xc2, .sp=0x4b, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x00}, {.addr=0x5aef, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5af0, .a=0x2f, .x=0xae, .y=0xc2, .sp=0x4a, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xae}, {.addr=0x5aef, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5aef, .value=0x4d, .type=IO_READ},
        {.addr=0x5af0, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0020) {
    const struct CPU_State initial_cpu = {.pc=0x3fef, .a=0x4c, .x=0xd9, .y=0xf6, .sp=0x64, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x00}, {.addr=0x3fef, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3ff0, .a=0x4c, .x=0xd9, .y=0xf6, .sp=0x63, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0xd9}, {.addr=0x3fef, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3fef, .value=0x4d, .type=IO_READ},
        {.addr=0x3ff0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0xd9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0021) {
    const struct CPU_State initial_cpu = {.pc=0x8ce4, .a=0xac, .x=0xf1, .y=0x7f, .sp=0x27, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x00}, {.addr=0x8ce4, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8ce5, .a=0xac, .x=0xf1, .y=0x7f, .sp=0x26, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0xf1}, {.addr=0x8ce4, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8ce4, .value=0x4d, .type=IO_READ},
        {.addr=0x8ce5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0xf1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0022) {
    const struct CPU_State initial_cpu = {.pc=0x6997, .a=0xe9, .x=0x64, .y=0x48, .sp=0x51, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x00}, {.addr=0x6997, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6998, .a=0xe9, .x=0x64, .y=0x48, .sp=0x50, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x64}, {.addr=0x6997, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6997, .value=0x4d, .type=IO_READ},
        {.addr=0x6998, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0x64, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0023) {
    const struct CPU_State initial_cpu = {.pc=0x9171, .a=0x76, .x=0x5b, .y=0xa3, .sp=0x0a, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0x9171, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9172, .a=0x76, .x=0x5b, .y=0xa3, .sp=0x09, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x5b}, {.addr=0x9171, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9171, .value=0x4d, .type=IO_READ},
        {.addr=0x9172, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x5b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0024) {
    const struct CPU_State initial_cpu = {.pc=0xbd38, .a=0x6d, .x=0x8e, .y=0x0c, .sp=0x83, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x00}, {.addr=0xbd38, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbd39, .a=0x6d, .x=0x8e, .y=0x0c, .sp=0x82, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x8e}, {.addr=0xbd38, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbd38, .value=0x4d, .type=IO_READ},
        {.addr=0xbd39, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x8e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0025) {
    const struct CPU_State initial_cpu = {.pc=0xb187, .a=0x6f, .x=0xce, .y=0x3e, .sp=0x93, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x00}, {.addr=0xb187, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb188, .a=0x6f, .x=0xce, .y=0x3e, .sp=0x92, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xce}, {.addr=0xb187, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb187, .value=0x4d, .type=IO_READ},
        {.addr=0xb188, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0xce, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0026) {
    const struct CPU_State initial_cpu = {.pc=0x600e, .a=0x44, .x=0x25, .y=0x79, .sp=0xc0, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x00}, {.addr=0x600e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x600f, .a=0x44, .x=0x25, .y=0x79, .sp=0xbf, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x25}, {.addr=0x600e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x600e, .value=0x4d, .type=IO_READ},
        {.addr=0x600f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0x25, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0027) {
    const struct CPU_State initial_cpu = {.pc=0x0afe, .a=0x2d, .x=0x0f, .y=0x07, .sp=0x65, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x00}, {.addr=0x0afe, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0aff, .a=0x2d, .x=0x0f, .y=0x07, .sp=0x64, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x0f}, {.addr=0x0afe, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0afe, .value=0x4d, .type=IO_READ},
        {.addr=0x0aff, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0x0f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0028) {
    const struct CPU_State initial_cpu = {.pc=0xc3db, .a=0x1e, .x=0x10, .y=0x7d, .sp=0x53, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0xc3db, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc3dc, .a=0x1e, .x=0x10, .y=0x7d, .sp=0x52, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x10}, {.addr=0xc3db, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc3db, .value=0x4d, .type=IO_READ},
        {.addr=0xc3dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x10, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0029) {
    const struct CPU_State initial_cpu = {.pc=0x2613, .a=0x76, .x=0x18, .y=0x45, .sp=0x42, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x00}, {.addr=0x2613, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2614, .a=0x76, .x=0x18, .y=0x45, .sp=0x41, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0x18}, {.addr=0x2613, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2613, .value=0x4d, .type=IO_READ},
        {.addr=0x2614, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0x18, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_002A) {
    const struct CPU_State initial_cpu = {.pc=0x1052, .a=0xf8, .x=0x1e, .y=0xdc, .sp=0x8f, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0x1052, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1053, .a=0xf8, .x=0x1e, .y=0xdc, .sp=0x8e, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x1e}, {.addr=0x1052, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1052, .value=0x4d, .type=IO_READ},
        {.addr=0x1053, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_002B) {
    const struct CPU_State initial_cpu = {.pc=0x59bb, .a=0x08, .x=0xbd, .y=0x45, .sp=0x41, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x00}, {.addr=0x59bb, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x59bc, .a=0x08, .x=0xbd, .y=0x45, .sp=0x40, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xbd}, {.addr=0x59bb, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x59bb, .value=0x4d, .type=IO_READ},
        {.addr=0x59bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0xbd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_002C) {
    const struct CPU_State initial_cpu = {.pc=0x970d, .a=0xbd, .x=0x1c, .y=0x04, .sp=0xd6, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x00}, {.addr=0x970d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x970e, .a=0xbd, .x=0x1c, .y=0x04, .sp=0xd5, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x1c}, {.addr=0x970d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x970d, .value=0x4d, .type=IO_READ},
        {.addr=0x970e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x1c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_002D) {
    const struct CPU_State initial_cpu = {.pc=0x8bbd, .a=0xd6, .x=0x1b, .y=0x97, .sp=0x83, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x00}, {.addr=0x8bbd, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8bbe, .a=0xd6, .x=0x1b, .y=0x97, .sp=0x82, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0x1b}, {.addr=0x8bbd, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8bbd, .value=0x4d, .type=IO_READ},
        {.addr=0x8bbe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 002D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_002E) {
    const struct CPU_State initial_cpu = {.pc=0xa648, .a=0xb5, .x=0x3c, .y=0x4a, .sp=0xf2, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x00}, {.addr=0xa648, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa649, .a=0xb5, .x=0x3c, .y=0x4a, .sp=0xf1, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x3c}, {.addr=0xa648, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa648, .value=0x4d, .type=IO_READ},
        {.addr=0xa649, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x3c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_002F) {
    const struct CPU_State initial_cpu = {.pc=0x0678, .a=0xc2, .x=0x4e, .y=0x58, .sp=0xf9, .status=0x0f};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x00}, {.addr=0x0678, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0679, .a=0xc2, .x=0x4e, .y=0x58, .sp=0xf8, .status=0x0f};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x4e}, {.addr=0x0678, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0678, .value=0x4d, .type=IO_READ},
        {.addr=0x0679, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x4e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0030) {
    const struct CPU_State initial_cpu = {.pc=0x66eb, .a=0xbd, .x=0xf1, .y=0x52, .sp=0x35, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0x66eb, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x66ec, .a=0xbd, .x=0xf1, .y=0x52, .sp=0x34, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xf1}, {.addr=0x66eb, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x66eb, .value=0x4d, .type=IO_READ},
        {.addr=0x66ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0xf1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0031) {
    const struct CPU_State initial_cpu = {.pc=0x989b, .a=0x4d, .x=0xac, .y=0x87, .sp=0x12, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0x989b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x989c, .a=0x4d, .x=0xac, .y=0x87, .sp=0x11, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xac}, {.addr=0x989b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x989b, .value=0x4d, .type=IO_READ},
        {.addr=0x989c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0xac, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0032) {
    const struct CPU_State initial_cpu = {.pc=0x1498, .a=0x49, .x=0x68, .y=0xc4, .sp=0x1c, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x00}, {.addr=0x1498, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1499, .a=0x49, .x=0x68, .y=0xc4, .sp=0x1b, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x68}, {.addr=0x1498, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1498, .value=0x4d, .type=IO_READ},
        {.addr=0x1499, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0033) {
    const struct CPU_State initial_cpu = {.pc=0x5ebc, .a=0xa0, .x=0x7e, .y=0x8a, .sp=0x96, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0x5ebc, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5ebd, .a=0xa0, .x=0x7e, .y=0x8a, .sp=0x95, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x7e}, {.addr=0x5ebc, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5ebc, .value=0x4d, .type=IO_READ},
        {.addr=0x5ebd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x7e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0034) {
    const struct CPU_State initial_cpu = {.pc=0xad00, .a=0xb3, .x=0xe0, .y=0x1b, .sp=0xe1, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x00}, {.addr=0xad00, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xad01, .a=0xb3, .x=0xe0, .y=0x1b, .sp=0xe0, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0xe0}, {.addr=0xad00, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xad00, .value=0x4d, .type=IO_READ},
        {.addr=0xad01, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0xe0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0035) {
    const struct CPU_State initial_cpu = {.pc=0x9cb2, .a=0xa9, .x=0xeb, .y=0x0d, .sp=0xa9, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x00}, {.addr=0x9cb2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9cb3, .a=0xa9, .x=0xeb, .y=0x0d, .sp=0xa8, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0xeb}, {.addr=0x9cb2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9cb2, .value=0x4d, .type=IO_READ},
        {.addr=0x9cb3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0036) {
    const struct CPU_State initial_cpu = {.pc=0xb6c0, .a=0x25, .x=0xed, .y=0x80, .sp=0x8a, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x00}, {.addr=0xb6c0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb6c1, .a=0x25, .x=0xed, .y=0x80, .sp=0x89, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xed}, {.addr=0xb6c0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb6c0, .value=0x4d, .type=IO_READ},
        {.addr=0xb6c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0xed, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0037) {
    const struct CPU_State initial_cpu = {.pc=0xf97c, .a=0x33, .x=0x97, .y=0x5f, .sp=0xe0, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x00}, {.addr=0xf97c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf97d, .a=0x33, .x=0x97, .y=0x5f, .sp=0xdf, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x97}, {.addr=0xf97c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf97c, .value=0x4d, .type=IO_READ},
        {.addr=0xf97d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0038) {
    const struct CPU_State initial_cpu = {.pc=0xde92, .a=0xaa, .x=0x57, .y=0xd3, .sp=0xf2, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x00}, {.addr=0xde92, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xde93, .a=0xaa, .x=0x57, .y=0xd3, .sp=0xf1, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x57}, {.addr=0xde92, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xde92, .value=0x4d, .type=IO_READ},
        {.addr=0xde93, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x57, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0039) {
    const struct CPU_State initial_cpu = {.pc=0x03d6, .a=0x41, .x=0xc3, .y=0x5a, .sp=0xab, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x00}, {.addr=0x03d6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x03d7, .a=0x41, .x=0xc3, .y=0x5a, .sp=0xaa, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xc3}, {.addr=0x03d6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x03d6, .value=0x4d, .type=IO_READ},
        {.addr=0x03d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0xc3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_003A) {
    const struct CPU_State initial_cpu = {.pc=0x419c, .a=0xbd, .x=0xb8, .y=0x98, .sp=0x07, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0x419c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x419d, .a=0xbd, .x=0xb8, .y=0x98, .sp=0x06, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xb8}, {.addr=0x419c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x419c, .value=0x4d, .type=IO_READ},
        {.addr=0x419d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0xb8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_003B) {
    const struct CPU_State initial_cpu = {.pc=0x3c23, .a=0xdc, .x=0xeb, .y=0x20, .sp=0x48, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x00}, {.addr=0x3c23, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3c24, .a=0xdc, .x=0xeb, .y=0x20, .sp=0x47, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0xeb}, {.addr=0x3c23, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3c23, .value=0x4d, .type=IO_READ},
        {.addr=0x3c24, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_003C) {
    const struct CPU_State initial_cpu = {.pc=0xf66b, .a=0x56, .x=0xa4, .y=0x05, .sp=0x12, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0xf66b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf66c, .a=0x56, .x=0xa4, .y=0x05, .sp=0x11, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xa4}, {.addr=0xf66b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf66b, .value=0x4d, .type=IO_READ},
        {.addr=0xf66c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_003D) {
    const struct CPU_State initial_cpu = {.pc=0x90a2, .a=0x11, .x=0x93, .y=0x0f, .sp=0x6f, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0x90a2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x90a3, .a=0x11, .x=0x93, .y=0x0f, .sp=0x6e, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x93}, {.addr=0x90a2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x90a2, .value=0x4d, .type=IO_READ},
        {.addr=0x90a3, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x93, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_003E) {
    const struct CPU_State initial_cpu = {.pc=0x02ba, .a=0xbc, .x=0xc2, .y=0xf5, .sp=0xe4, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0x02ba, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x02bb, .a=0xbc, .x=0xc2, .y=0xf5, .sp=0xe3, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xc2}, {.addr=0x02ba, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x02ba, .value=0x4d, .type=IO_READ},
        {.addr=0x02bb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0xc2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_003F) {
    const struct CPU_State initial_cpu = {.pc=0x605c, .a=0x4f, .x=0xf7, .y=0x2c, .sp=0xc3, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x00}, {.addr=0x605c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x605d, .a=0x4f, .x=0xf7, .y=0x2c, .sp=0xc2, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xf7}, {.addr=0x605c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x605c, .value=0x4d, .type=IO_READ},
        {.addr=0x605d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0xf7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0040) {
    const struct CPU_State initial_cpu = {.pc=0x78c7, .a=0xda, .x=0xea, .y=0x2e, .sp=0x89, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0x78c7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x78c8, .a=0xda, .x=0xea, .y=0x2e, .sp=0x88, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0xea}, {.addr=0x78c7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x78c7, .value=0x4d, .type=IO_READ},
        {.addr=0x78c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0xea, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0041) {
    const struct CPU_State initial_cpu = {.pc=0x4d5d, .a=0x08, .x=0x9d, .y=0x4b, .sp=0xea, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x00}, {.addr=0x4d5d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4d5e, .a=0x08, .x=0x9d, .y=0x4b, .sp=0xe9, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x9d}, {.addr=0x4d5d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4d5d, .value=0x4d, .type=IO_READ},
        {.addr=0x4d5e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x9d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0042) {
    const struct CPU_State initial_cpu = {.pc=0x85ae, .a=0x3d, .x=0x28, .y=0x04, .sp=0x00, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x00}, {.addr=0x85ae, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x85af, .a=0x3d, .x=0x28, .y=0x04, .sp=0xff, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x28}, {.addr=0x85ae, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x85ae, .value=0x4d, .type=IO_READ},
        {.addr=0x85af, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0x28, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0043) {
    const struct CPU_State initial_cpu = {.pc=0xf964, .a=0x3f, .x=0x11, .y=0xf9, .sp=0xb8, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0xf964, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf965, .a=0x3f, .x=0x11, .y=0xf9, .sp=0xb7, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x11}, {.addr=0xf964, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf964, .value=0x4d, .type=IO_READ},
        {.addr=0xf965, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x11, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0044) {
    const struct CPU_State initial_cpu = {.pc=0x03b3, .a=0x8a, .x=0x2f, .y=0xb7, .sp=0x8b, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x00}, {.addr=0x03b3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x03b4, .a=0x8a, .x=0x2f, .y=0xb7, .sp=0x8a, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x2f}, {.addr=0x03b3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x03b3, .value=0x4d, .type=IO_READ},
        {.addr=0x03b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x2f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0045) {
    const struct CPU_State initial_cpu = {.pc=0x3092, .a=0x1b, .x=0xe2, .y=0xb7, .sp=0xf5, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x00}, {.addr=0x3092, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3093, .a=0x1b, .x=0xe2, .y=0xb7, .sp=0xf4, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0xe2}, {.addr=0x3092, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3092, .value=0x4d, .type=IO_READ},
        {.addr=0x3093, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0xe2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0046) {
    const struct CPU_State initial_cpu = {.pc=0xca87, .a=0xf8, .x=0xc9, .y=0x1c, .sp=0x7a, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0xca87, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xca88, .a=0xf8, .x=0xc9, .y=0x1c, .sp=0x79, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0xc9}, {.addr=0xca87, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xca87, .value=0x4d, .type=IO_READ},
        {.addr=0xca88, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0xc9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0047) {
    const struct CPU_State initial_cpu = {.pc=0x7d52, .a=0x37, .x=0xfa, .y=0xc8, .sp=0x80, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0x7d52, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7d53, .a=0x37, .x=0xfa, .y=0xc8, .sp=0x7f, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xfa}, {.addr=0x7d52, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7d52, .value=0x4d, .type=IO_READ},
        {.addr=0x7d53, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0xfa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0048) {
    const struct CPU_State initial_cpu = {.pc=0x82e3, .a=0xd8, .x=0x09, .y=0x36, .sp=0x93, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x00}, {.addr=0x82e3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x82e4, .a=0xd8, .x=0x09, .y=0x36, .sp=0x92, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x09}, {.addr=0x82e3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x82e3, .value=0x4d, .type=IO_READ},
        {.addr=0x82e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x09, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0049) {
    const struct CPU_State initial_cpu = {.pc=0xcb0f, .a=0xd0, .x=0x10, .y=0x7a, .sp=0xe7, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x00}, {.addr=0xcb0f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcb10, .a=0xd0, .x=0x10, .y=0x7a, .sp=0xe6, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x10}, {.addr=0xcb0f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcb0f, .value=0x4d, .type=IO_READ},
        {.addr=0xcb10, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0x10, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_004A) {
    const struct CPU_State initial_cpu = {.pc=0x51ab, .a=0x75, .x=0xb5, .y=0x23, .sp=0x9a, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0x51ab, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x51ac, .a=0x75, .x=0xb5, .y=0x23, .sp=0x99, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0xb5}, {.addr=0x51ab, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x51ab, .value=0x4d, .type=IO_READ},
        {.addr=0x51ac, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0xb5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_004B) {
    const struct CPU_State initial_cpu = {.pc=0xafb8, .a=0x0b, .x=0x74, .y=0x29, .sp=0x3e, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x00}, {.addr=0xafb8, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xafb9, .a=0x0b, .x=0x74, .y=0x29, .sp=0x3d, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x74}, {.addr=0xafb8, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xafb8, .value=0x4d, .type=IO_READ},
        {.addr=0xafb9, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x74, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_004C) {
    const struct CPU_State initial_cpu = {.pc=0x6140, .a=0xbd, .x=0x70, .y=0x0a, .sp=0x46, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0x6140, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6141, .a=0xbd, .x=0x70, .y=0x0a, .sp=0x45, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x70}, {.addr=0x6140, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6140, .value=0x4d, .type=IO_READ},
        {.addr=0x6141, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x70, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_004D) {
    const struct CPU_State initial_cpu = {.pc=0xe5b3, .a=0x80, .x=0xdc, .y=0xc3, .sp=0x08, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x00}, {.addr=0xe5b3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe5b4, .a=0x80, .x=0xdc, .y=0xc3, .sp=0x07, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0xdc}, {.addr=0xe5b3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe5b3, .value=0x4d, .type=IO_READ},
        {.addr=0xe5b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_004E) {
    const struct CPU_State initial_cpu = {.pc=0x4448, .a=0x89, .x=0x7e, .y=0x31, .sp=0x37, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x00}, {.addr=0x4448, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4449, .a=0x89, .x=0x7e, .y=0x31, .sp=0x36, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x7e}, {.addr=0x4448, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4448, .value=0x4d, .type=IO_READ},
        {.addr=0x4449, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0x7e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_004F) {
    const struct CPU_State initial_cpu = {.pc=0x01e0, .a=0x72, .x=0xf4, .y=0x5c, .sp=0xa2, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x00}, {.addr=0x01e0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x01e1, .a=0x72, .x=0xf4, .y=0x5c, .sp=0xa1, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0xf4}, {.addr=0x01e0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x01e0, .value=0x4d, .type=IO_READ},
        {.addr=0x01e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0xf4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0050) {
    const struct CPU_State initial_cpu = {.pc=0xcb5f, .a=0x18, .x=0x34, .y=0x08, .sp=0x1f, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x00}, {.addr=0xcb5f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcb60, .a=0x18, .x=0x34, .y=0x08, .sp=0x1e, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x34}, {.addr=0xcb5f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcb5f, .value=0x4d, .type=IO_READ},
        {.addr=0xcb60, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x34, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0051) {
    const struct CPU_State initial_cpu = {.pc=0x5aab, .a=0xfd, .x=0xd5, .y=0xfc, .sp=0xa3, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x00}, {.addr=0x5aab, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5aac, .a=0xfd, .x=0xd5, .y=0xfc, .sp=0xa2, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0xd5}, {.addr=0x5aab, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5aab, .value=0x4d, .type=IO_READ},
        {.addr=0x5aac, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0xd5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0052) {
    const struct CPU_State initial_cpu = {.pc=0x516e, .a=0xa6, .x=0xca, .y=0xf3, .sp=0xbd, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0x516e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x516f, .a=0xa6, .x=0xca, .y=0xf3, .sp=0xbc, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0xca}, {.addr=0x516e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x516e, .value=0x4d, .type=IO_READ},
        {.addr=0x516f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0053) {
    const struct CPU_State initial_cpu = {.pc=0x10f6, .a=0xb2, .x=0x94, .y=0xd0, .sp=0x07, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0x10f6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x10f7, .a=0xb2, .x=0x94, .y=0xd0, .sp=0x06, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x94}, {.addr=0x10f6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x10f6, .value=0x4d, .type=IO_READ},
        {.addr=0x10f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x94, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0054) {
    const struct CPU_State initial_cpu = {.pc=0x73f2, .a=0x93, .x=0x96, .y=0xbf, .sp=0xee, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0x73f2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x73f3, .a=0x93, .x=0x96, .y=0xbf, .sp=0xed, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x96}, {.addr=0x73f2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x73f2, .value=0x4d, .type=IO_READ},
        {.addr=0x73f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x96, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0055) {
    const struct CPU_State initial_cpu = {.pc=0x25ce, .a=0x0b, .x=0x60, .y=0xe6, .sp=0x1b, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0x25ce, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x25cf, .a=0x0b, .x=0x60, .y=0xe6, .sp=0x1a, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x60}, {.addr=0x25ce, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x25ce, .value=0x4d, .type=IO_READ},
        {.addr=0x25cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x60, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0056) {
    const struct CPU_State initial_cpu = {.pc=0x6216, .a=0xf1, .x=0xc8, .y=0x26, .sp=0x38, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0x6216, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6217, .a=0xf1, .x=0xc8, .y=0x26, .sp=0x37, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0xc8}, {.addr=0x6216, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6216, .value=0x4d, .type=IO_READ},
        {.addr=0x6217, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0xc8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0057) {
    const struct CPU_State initial_cpu = {.pc=0x37ae, .a=0x33, .x=0xbc, .y=0xda, .sp=0xbb, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x00}, {.addr=0x37ae, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x37af, .a=0x33, .x=0xbc, .y=0xda, .sp=0xba, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0xbc}, {.addr=0x37ae, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x37ae, .value=0x4d, .type=IO_READ},
        {.addr=0x37af, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0xbc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0058) {
    const struct CPU_State initial_cpu = {.pc=0x88ca, .a=0x14, .x=0x9b, .y=0x99, .sp=0x11, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0x88ca, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x88cb, .a=0x14, .x=0x9b, .y=0x99, .sp=0x10, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0x9b}, {.addr=0x88ca, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x88ca, .value=0x4d, .type=IO_READ},
        {.addr=0x88cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0x9b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0059) {
    const struct CPU_State initial_cpu = {.pc=0x22ac, .a=0xa3, .x=0x69, .y=0x88, .sp=0x99, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x00}, {.addr=0x22ac, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x22ad, .a=0xa3, .x=0x69, .y=0x88, .sp=0x98, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x69}, {.addr=0x22ac, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x22ac, .value=0x4d, .type=IO_READ},
        {.addr=0x22ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0x69, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_005A) {
    const struct CPU_State initial_cpu = {.pc=0xb6fe, .a=0x99, .x=0x53, .y=0x10, .sp=0x0a, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0xb6fe, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb6ff, .a=0x99, .x=0x53, .y=0x10, .sp=0x09, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x53}, {.addr=0xb6fe, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb6fe, .value=0x4d, .type=IO_READ},
        {.addr=0xb6ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x53, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_005B) {
    const struct CPU_State initial_cpu = {.pc=0x2840, .a=0xc8, .x=0xda, .y=0x25, .sp=0x4e, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0x2840, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2841, .a=0xc8, .x=0xda, .y=0x25, .sp=0x4d, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xda}, {.addr=0x2840, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2840, .value=0x4d, .type=IO_READ},
        {.addr=0x2841, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0xda, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_005C) {
    const struct CPU_State initial_cpu = {.pc=0x7754, .a=0x44, .x=0x75, .y=0xc4, .sp=0xe9, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x00}, {.addr=0x7754, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7755, .a=0x44, .x=0x75, .y=0xc4, .sp=0xe8, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x75}, {.addr=0x7754, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7754, .value=0x4d, .type=IO_READ},
        {.addr=0x7755, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0x75, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_005D) {
    const struct CPU_State initial_cpu = {.pc=0x3da0, .a=0xe3, .x=0xd2, .y=0xae, .sp=0x8c, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x00}, {.addr=0x3da0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3da1, .a=0xe3, .x=0xd2, .y=0xae, .sp=0x8b, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xd2}, {.addr=0x3da0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3da0, .value=0x4d, .type=IO_READ},
        {.addr=0x3da1, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0xd2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_005E) {
    const struct CPU_State initial_cpu = {.pc=0xad77, .a=0xcf, .x=0xbf, .y=0x53, .sp=0x93, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x00}, {.addr=0xad77, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xad78, .a=0xcf, .x=0xbf, .y=0x53, .sp=0x92, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xbf}, {.addr=0xad77, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xad77, .value=0x4d, .type=IO_READ},
        {.addr=0xad78, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0xbf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_005F) {
    const struct CPU_State initial_cpu = {.pc=0xbf48, .a=0xb6, .x=0xea, .y=0xa7, .sp=0x89, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0xbf48, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbf49, .a=0xb6, .x=0xea, .y=0xa7, .sp=0x88, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0xea}, {.addr=0xbf48, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbf48, .value=0x4d, .type=IO_READ},
        {.addr=0xbf49, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0xea, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0060) {
    const struct CPU_State initial_cpu = {.pc=0x5a54, .a=0x8e, .x=0xa5, .y=0x88, .sp=0xfd, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0x5a54, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5a55, .a=0x8e, .x=0xa5, .y=0x88, .sp=0xfc, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0xa5}, {.addr=0x5a54, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5a54, .value=0x4d, .type=IO_READ},
        {.addr=0x5a55, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0xa5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0061) {
    const struct CPU_State initial_cpu = {.pc=0x0359, .a=0x72, .x=0xbe, .y=0x4f, .sp=0x39, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x00}, {.addr=0x0359, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x035a, .a=0x72, .x=0xbe, .y=0x4f, .sp=0x38, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0xbe}, {.addr=0x0359, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0359, .value=0x4d, .type=IO_READ},
        {.addr=0x035a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0xbe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0062) {
    const struct CPU_State initial_cpu = {.pc=0x4dd2, .a=0x69, .x=0x77, .y=0x10, .sp=0x74, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x00}, {.addr=0x4dd2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4dd3, .a=0x69, .x=0x77, .y=0x10, .sp=0x73, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x77}, {.addr=0x4dd2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4dd2, .value=0x4d, .type=IO_READ},
        {.addr=0x4dd3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x77, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0063) {
    const struct CPU_State initial_cpu = {.pc=0xfb76, .a=0x26, .x=0x56, .y=0x37, .sp=0x33, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0xfb76, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xfb77, .a=0x26, .x=0x56, .y=0x37, .sp=0x32, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x56}, {.addr=0xfb76, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xfb76, .value=0x4d, .type=IO_READ},
        {.addr=0xfb77, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x56, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0064) {
    const struct CPU_State initial_cpu = {.pc=0xf0ec, .a=0xa9, .x=0xca, .y=0xc7, .sp=0xe9, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x00}, {.addr=0xf0ec, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf0ed, .a=0xa9, .x=0xca, .y=0xc7, .sp=0xe8, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0xca}, {.addr=0xf0ec, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf0ec, .value=0x4d, .type=IO_READ},
        {.addr=0xf0ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0065) {
    const struct CPU_State initial_cpu = {.pc=0x4a67, .a=0x1e, .x=0x9d, .y=0xe4, .sp=0x23, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x00}, {.addr=0x4a67, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4a68, .a=0x1e, .x=0x9d, .y=0xe4, .sp=0x22, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x9d}, {.addr=0x4a67, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4a67, .value=0x4d, .type=IO_READ},
        {.addr=0x4a68, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x9d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0066) {
    const struct CPU_State initial_cpu = {.pc=0x36e5, .a=0x0d, .x=0xe6, .y=0x02, .sp=0x6e, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x00}, {.addr=0x36e5, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x36e6, .a=0x0d, .x=0xe6, .y=0x02, .sp=0x6d, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0xe6}, {.addr=0x36e5, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x36e5, .value=0x4d, .type=IO_READ},
        {.addr=0x36e6, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0xe6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0067) {
    const struct CPU_State initial_cpu = {.pc=0x4a5f, .a=0x14, .x=0x7d, .y=0xd2, .sp=0xee, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0x4a5f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4a60, .a=0x14, .x=0x7d, .y=0xd2, .sp=0xed, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x7d}, {.addr=0x4a5f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4a5f, .value=0x4d, .type=IO_READ},
        {.addr=0x4a60, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x7d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0068) {
    const struct CPU_State initial_cpu = {.pc=0x1538, .a=0xb6, .x=0xd9, .y=0xe2, .sp=0xb1, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0x1538, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1539, .a=0xb6, .x=0xd9, .y=0xe2, .sp=0xb0, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0xd9}, {.addr=0x1538, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1538, .value=0x4d, .type=IO_READ},
        {.addr=0x1539, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0xd9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0069) {
    const struct CPU_State initial_cpu = {.pc=0x7e72, .a=0x68, .x=0xa6, .y=0x6f, .sp=0xbb, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x00}, {.addr=0x7e72, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7e73, .a=0x68, .x=0xa6, .y=0x6f, .sp=0xba, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0xa6}, {.addr=0x7e72, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7e72, .value=0x4d, .type=IO_READ},
        {.addr=0x7e73, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0xa6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_006A) {
    const struct CPU_State initial_cpu = {.pc=0xf19d, .a=0x4f, .x=0xaa, .y=0x03, .sp=0x32, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x00}, {.addr=0xf19d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf19e, .a=0x4f, .x=0xaa, .y=0x03, .sp=0x31, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0xaa}, {.addr=0xf19d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf19d, .value=0x4d, .type=IO_READ},
        {.addr=0xf19e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0xaa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_006B) {
    const struct CPU_State initial_cpu = {.pc=0xbb2a, .a=0x12, .x=0x82, .y=0x8f, .sp=0xa5, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0xbb2a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbb2b, .a=0x12, .x=0x82, .y=0x8f, .sp=0xa4, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x82}, {.addr=0xbb2a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbb2a, .value=0x4d, .type=IO_READ},
        {.addr=0xbb2b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x82, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_006C) {
    const struct CPU_State initial_cpu = {.pc=0x7ba6, .a=0x31, .x=0x79, .y=0xcf, .sp=0x7d, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0x7ba6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7ba7, .a=0x31, .x=0x79, .y=0xcf, .sp=0x7c, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x79}, {.addr=0x7ba6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7ba6, .value=0x4d, .type=IO_READ},
        {.addr=0x7ba7, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_006D) {
    const struct CPU_State initial_cpu = {.pc=0xcdb1, .a=0x67, .x=0x48, .y=0x76, .sp=0xee, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0xcdb1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcdb2, .a=0x67, .x=0x48, .y=0x76, .sp=0xed, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x48}, {.addr=0xcdb1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcdb1, .value=0x4d, .type=IO_READ},
        {.addr=0xcdb2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x48, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 006D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_006E) {
    const struct CPU_State initial_cpu = {.pc=0xe6e0, .a=0xc9, .x=0x33, .y=0xf8, .sp=0xbd, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0xe6e0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe6e1, .a=0xc9, .x=0x33, .y=0xf8, .sp=0xbc, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x33}, {.addr=0xe6e0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe6e0, .value=0x4d, .type=IO_READ},
        {.addr=0xe6e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_006F) {
    const struct CPU_State initial_cpu = {.pc=0xb702, .a=0x28, .x=0x12, .y=0x41, .sp=0x70, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x00}, {.addr=0xb702, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb703, .a=0x28, .x=0x12, .y=0x41, .sp=0x6f, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x12}, {.addr=0xb702, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb702, .value=0x4d, .type=IO_READ},
        {.addr=0xb703, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x12, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0070) {
    const struct CPU_State initial_cpu = {.pc=0xdeec, .a=0x0e, .x=0x62, .y=0xa9, .sp=0x56, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x00}, {.addr=0xdeec, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xdeed, .a=0x0e, .x=0x62, .y=0xa9, .sp=0x55, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x62}, {.addr=0xdeec, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xdeec, .value=0x4d, .type=IO_READ},
        {.addr=0xdeed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0071) {
    const struct CPU_State initial_cpu = {.pc=0x8499, .a=0x76, .x=0xa2, .y=0x76, .sp=0x94, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0x8499, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x849a, .a=0x76, .x=0xa2, .y=0x76, .sp=0x93, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xa2}, {.addr=0x8499, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8499, .value=0x4d, .type=IO_READ},
        {.addr=0x849a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0xa2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0072) {
    const struct CPU_State initial_cpu = {.pc=0xf344, .a=0x16, .x=0xab, .y=0xdc, .sp=0x4e, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0xf344, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf345, .a=0x16, .x=0xab, .y=0xdc, .sp=0x4d, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xab}, {.addr=0xf344, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf344, .value=0x4d, .type=IO_READ},
        {.addr=0xf345, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0xab, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0073) {
    const struct CPU_State initial_cpu = {.pc=0x965a, .a=0x0a, .x=0x38, .y=0x88, .sp=0x18, .status=0xe8};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x00}, {.addr=0x965a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x965b, .a=0x0a, .x=0x38, .y=0x88, .sp=0x17, .status=0xe8};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x38}, {.addr=0x965a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x965a, .value=0x4d, .type=IO_READ},
        {.addr=0x965b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x38, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0074) {
    const struct CPU_State initial_cpu = {.pc=0x9d7d, .a=0xc8, .x=0x9b, .y=0xbc, .sp=0xb9, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0x9d7d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9d7e, .a=0xc8, .x=0x9b, .y=0xbc, .sp=0xb8, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x9b}, {.addr=0x9d7d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9d7d, .value=0x4d, .type=IO_READ},
        {.addr=0x9d7e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x9b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0075) {
    const struct CPU_State initial_cpu = {.pc=0x55ef, .a=0x8f, .x=0x56, .y=0xb2, .sp=0xda, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x00}, {.addr=0x55ef, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x55f0, .a=0x8f, .x=0x56, .y=0xb2, .sp=0xd9, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x56}, {.addr=0x55ef, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x55ef, .value=0x4d, .type=IO_READ},
        {.addr=0x55f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0x56, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0076) {
    const struct CPU_State initial_cpu = {.pc=0xbc07, .a=0x3d, .x=0xe3, .y=0x0c, .sp=0x4f, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x00}, {.addr=0xbc07, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbc08, .a=0x3d, .x=0xe3, .y=0x0c, .sp=0x4e, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0xe3}, {.addr=0xbc07, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbc07, .value=0x4d, .type=IO_READ},
        {.addr=0xbc08, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0077) {
    const struct CPU_State initial_cpu = {.pc=0xf78a, .a=0x81, .x=0xd6, .y=0x42, .sp=0x4b, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x00}, {.addr=0xf78a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf78b, .a=0x81, .x=0xd6, .y=0x42, .sp=0x4a, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xd6}, {.addr=0xf78a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf78a, .value=0x4d, .type=IO_READ},
        {.addr=0xf78b, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0xd6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0078) {
    const struct CPU_State initial_cpu = {.pc=0x7dff, .a=0x61, .x=0x90, .y=0x07, .sp=0x4f, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x00}, {.addr=0x7dff, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7e00, .a=0x61, .x=0x90, .y=0x07, .sp=0x4e, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x90}, {.addr=0x7dff, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7dff, .value=0x4d, .type=IO_READ},
        {.addr=0x7e00, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0x90, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0079) {
    const struct CPU_State initial_cpu = {.pc=0xb527, .a=0x59, .x=0xc2, .y=0x5a, .sp=0x84, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0184, .value=0x00}, {.addr=0xb527, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb528, .a=0x59, .x=0xc2, .y=0x5a, .sp=0x83, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0184, .value=0xc2}, {.addr=0xb527, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb527, .value=0x4d, .type=IO_READ},
        {.addr=0xb528, .value=DUMMY, .type=IO_READ},
        {.addr=0x0184, .value=0xc2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_007A) {
    const struct CPU_State initial_cpu = {.pc=0xe3ac, .a=0x96, .x=0xb1, .y=0x11, .sp=0xab, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x00}, {.addr=0xe3ac, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe3ad, .a=0x96, .x=0xb1, .y=0x11, .sp=0xaa, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xb1}, {.addr=0xe3ac, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe3ac, .value=0x4d, .type=IO_READ},
        {.addr=0xe3ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0xb1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_007B) {
    const struct CPU_State initial_cpu = {.pc=0x1e4b, .a=0x66, .x=0xea, .y=0xb8, .sp=0x67, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0x1e4b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1e4c, .a=0x66, .x=0xea, .y=0xb8, .sp=0x66, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0xea}, {.addr=0x1e4b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1e4b, .value=0x4d, .type=IO_READ},
        {.addr=0x1e4c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0xea, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_007C) {
    const struct CPU_State initial_cpu = {.pc=0x11b9, .a=0x6c, .x=0x2e, .y=0x4d, .sp=0xe2, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x00}, {.addr=0x11b9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x11ba, .a=0x6c, .x=0x2e, .y=0x4d, .sp=0xe1, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x2e}, {.addr=0x11b9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x11b9, .value=0x4d, .type=IO_READ},
        {.addr=0x11ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x2e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_007D) {
    const struct CPU_State initial_cpu = {.pc=0xb223, .a=0x32, .x=0x30, .y=0x24, .sp=0xc8, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x00}, {.addr=0xb223, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb224, .a=0x32, .x=0x30, .y=0x24, .sp=0xc7, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x30}, {.addr=0xb223, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb223, .value=0x4d, .type=IO_READ},
        {.addr=0xb224, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0x30, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_007E) {
    const struct CPU_State initial_cpu = {.pc=0x5de2, .a=0x0d, .x=0xc7, .y=0x28, .sp=0x71, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x00}, {.addr=0x5de2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5de3, .a=0x0d, .x=0xc7, .y=0x28, .sp=0x70, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xc7}, {.addr=0x5de2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5de2, .value=0x4d, .type=IO_READ},
        {.addr=0x5de3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0xc7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_007F) {
    const struct CPU_State initial_cpu = {.pc=0x307f, .a=0x45, .x=0x21, .y=0x63, .sp=0x8b, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x00}, {.addr=0x307f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3080, .a=0x45, .x=0x21, .y=0x63, .sp=0x8a, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x21}, {.addr=0x307f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x307f, .value=0x4d, .type=IO_READ},
        {.addr=0x3080, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x21, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0080) {
    const struct CPU_State initial_cpu = {.pc=0x9d5e, .a=0x9d, .x=0x5e, .y=0x95, .sp=0x25, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x00}, {.addr=0x9d5e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9d5f, .a=0x9d, .x=0x5e, .y=0x95, .sp=0x24, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x5e}, {.addr=0x9d5e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9d5e, .value=0x4d, .type=IO_READ},
        {.addr=0x9d5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0x5e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0081) {
    const struct CPU_State initial_cpu = {.pc=0x4a3c, .a=0x0e, .x=0x96, .y=0x94, .sp=0x04, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0x4a3c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4a3d, .a=0x0e, .x=0x96, .y=0x94, .sp=0x03, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x96}, {.addr=0x4a3c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4a3c, .value=0x4d, .type=IO_READ},
        {.addr=0x4a3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x96, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0082) {
    const struct CPU_State initial_cpu = {.pc=0x54ce, .a=0x26, .x=0x8e, .y=0x29, .sp=0xb3, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x00}, {.addr=0x54ce, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x54cf, .a=0x26, .x=0x8e, .y=0x29, .sp=0xb2, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x8e}, {.addr=0x54ce, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x54ce, .value=0x4d, .type=IO_READ},
        {.addr=0x54cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x8e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0083) {
    const struct CPU_State initial_cpu = {.pc=0x8fd9, .a=0x6f, .x=0x7f, .y=0xfd, .sp=0x41, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x00}, {.addr=0x8fd9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8fda, .a=0x6f, .x=0x7f, .y=0xfd, .sp=0x40, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x7f}, {.addr=0x8fd9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8fd9, .value=0x4d, .type=IO_READ},
        {.addr=0x8fda, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0x7f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0084) {
    const struct CPU_State initial_cpu = {.pc=0x5b17, .a=0x68, .x=0xd2, .y=0x25, .sp=0xd0, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x00}, {.addr=0x5b17, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5b18, .a=0x68, .x=0xd2, .y=0x25, .sp=0xcf, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0xd2}, {.addr=0x5b17, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5b17, .value=0x4d, .type=IO_READ},
        {.addr=0x5b18, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0xd2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0085) {
    const struct CPU_State initial_cpu = {.pc=0x81d0, .a=0xe4, .x=0x5b, .y=0x8b, .sp=0xa0, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0x81d0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x81d1, .a=0xe4, .x=0x5b, .y=0x8b, .sp=0x9f, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x5b}, {.addr=0x81d0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x81d0, .value=0x4d, .type=IO_READ},
        {.addr=0x81d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0x5b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0086) {
    const struct CPU_State initial_cpu = {.pc=0x1c2c, .a=0xdc, .x=0xca, .y=0xef, .sp=0x2a, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x00}, {.addr=0x1c2c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1c2d, .a=0xdc, .x=0xca, .y=0xef, .sp=0x29, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xca}, {.addr=0x1c2c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1c2c, .value=0x4d, .type=IO_READ},
        {.addr=0x1c2d, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0087) {
    const struct CPU_State initial_cpu = {.pc=0x47b0, .a=0x2e, .x=0x06, .y=0xe8, .sp=0x54, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x00}, {.addr=0x47b0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x47b1, .a=0x2e, .x=0x06, .y=0xe8, .sp=0x53, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x06}, {.addr=0x47b0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x47b0, .value=0x4d, .type=IO_READ},
        {.addr=0x47b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0x06, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0088) {
    const struct CPU_State initial_cpu = {.pc=0xf236, .a=0x8e, .x=0x9a, .y=0x0c, .sp=0x6a, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x00}, {.addr=0xf236, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf237, .a=0x8e, .x=0x9a, .y=0x0c, .sp=0x69, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x9a}, {.addr=0xf236, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf236, .value=0x4d, .type=IO_READ},
        {.addr=0xf237, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x9a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0089) {
    const struct CPU_State initial_cpu = {.pc=0xef19, .a=0xcb, .x=0x6c, .y=0xbf, .sp=0x6f, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0xef19, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xef1a, .a=0xcb, .x=0x6c, .y=0xbf, .sp=0x6e, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x6c}, {.addr=0xef19, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xef19, .value=0x4d, .type=IO_READ},
        {.addr=0xef1a, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x6c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_008A) {
    const struct CPU_State initial_cpu = {.pc=0x5427, .a=0x7f, .x=0x31, .y=0x1c, .sp=0x4c, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x00}, {.addr=0x5427, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5428, .a=0x7f, .x=0x31, .y=0x1c, .sp=0x4b, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x31}, {.addr=0x5427, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5427, .value=0x4d, .type=IO_READ},
        {.addr=0x5428, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x31, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_008B) {
    const struct CPU_State initial_cpu = {.pc=0xeead, .a=0x25, .x=0x24, .y=0x82, .sp=0x12, .status=0xd9};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0xeead, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xeeae, .a=0x25, .x=0x24, .y=0x82, .sp=0x11, .status=0xd9};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x24}, {.addr=0xeead, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xeead, .value=0x4d, .type=IO_READ},
        {.addr=0xeeae, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0x24, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_008C) {
    const struct CPU_State initial_cpu = {.pc=0xcdb9, .a=0xb1, .x=0x06, .y=0x57, .sp=0x80, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0xcdb9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcdba, .a=0xb1, .x=0x06, .y=0x57, .sp=0x7f, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x06}, {.addr=0xcdb9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcdb9, .value=0x4d, .type=IO_READ},
        {.addr=0xcdba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x06, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_008D) {
    const struct CPU_State initial_cpu = {.pc=0xc5f4, .a=0xdf, .x=0xca, .y=0x86, .sp=0x40, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x00}, {.addr=0xc5f4, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc5f5, .a=0xdf, .x=0xca, .y=0x86, .sp=0x3f, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xca}, {.addr=0xc5f4, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc5f4, .value=0x4d, .type=IO_READ},
        {.addr=0xc5f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_008E) {
    const struct CPU_State initial_cpu = {.pc=0x1b78, .a=0xf6, .x=0x85, .y=0xf9, .sp=0x56, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x00}, {.addr=0x1b78, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1b79, .a=0xf6, .x=0x85, .y=0xf9, .sp=0x55, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x85}, {.addr=0x1b78, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1b78, .value=0x4d, .type=IO_READ},
        {.addr=0x1b79, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x85, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_008F) {
    const struct CPU_State initial_cpu = {.pc=0xbee6, .a=0xf8, .x=0x4e, .y=0xd3, .sp=0xaf, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x00}, {.addr=0xbee6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbee7, .a=0xf8, .x=0x4e, .y=0xd3, .sp=0xae, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0x4e}, {.addr=0xbee6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbee6, .value=0x4d, .type=IO_READ},
        {.addr=0xbee7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0x4e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0090) {
    const struct CPU_State initial_cpu = {.pc=0x28a3, .a=0xb0, .x=0x7d, .y=0x20, .sp=0xf3, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x00}, {.addr=0x28a3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x28a4, .a=0xb0, .x=0x7d, .y=0x20, .sp=0xf2, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x7d}, {.addr=0x28a3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x28a3, .value=0x4d, .type=IO_READ},
        {.addr=0x28a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0x7d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0091) {
    const struct CPU_State initial_cpu = {.pc=0x37f9, .a=0xda, .x=0xef, .y=0xd6, .sp=0x9e, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x00}, {.addr=0x37f9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x37fa, .a=0xda, .x=0xef, .y=0xd6, .sp=0x9d, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0xef}, {.addr=0x37f9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x37f9, .value=0x4d, .type=IO_READ},
        {.addr=0x37fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0xef, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0092) {
    const struct CPU_State initial_cpu = {.pc=0x8cee, .a=0x68, .x=0xf6, .y=0xef, .sp=0xb3, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x00}, {.addr=0x8cee, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8cef, .a=0x68, .x=0xf6, .y=0xef, .sp=0xb2, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0xf6}, {.addr=0x8cee, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8cee, .value=0x4d, .type=IO_READ},
        {.addr=0x8cef, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0xf6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0093) {
    const struct CPU_State initial_cpu = {.pc=0xfe30, .a=0x85, .x=0x3e, .y=0x54, .sp=0xd3, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0xfe30, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xfe31, .a=0x85, .x=0x3e, .y=0x54, .sp=0xd2, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x3e}, {.addr=0xfe30, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xfe30, .value=0x4d, .type=IO_READ},
        {.addr=0xfe31, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x3e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0094) {
    const struct CPU_State initial_cpu = {.pc=0x8c2f, .a=0x14, .x=0xda, .y=0x41, .sp=0x57, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0x8c2f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8c30, .a=0x14, .x=0xda, .y=0x41, .sp=0x56, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0xda}, {.addr=0x8c2f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8c2f, .value=0x4d, .type=IO_READ},
        {.addr=0x8c30, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0xda, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0095) {
    const struct CPU_State initial_cpu = {.pc=0x6354, .a=0xff, .x=0x31, .y=0x58, .sp=0x61, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x00}, {.addr=0x6354, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6355, .a=0xff, .x=0x31, .y=0x58, .sp=0x60, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x31}, {.addr=0x6354, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6354, .value=0x4d, .type=IO_READ},
        {.addr=0x6355, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x31, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0096) {
    const struct CPU_State initial_cpu = {.pc=0x37f1, .a=0x5c, .x=0x58, .y=0x44, .sp=0x75, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x00}, {.addr=0x37f1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x37f2, .a=0x5c, .x=0x58, .y=0x44, .sp=0x74, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x58}, {.addr=0x37f1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x37f1, .value=0x4d, .type=IO_READ},
        {.addr=0x37f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0x58, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0097) {
    const struct CPU_State initial_cpu = {.pc=0xde8a, .a=0x1c, .x=0x7f, .y=0x58, .sp=0xf4, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x01f4, .value=0x00}, {.addr=0xde8a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xde8b, .a=0x1c, .x=0x7f, .y=0x58, .sp=0xf3, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x01f4, .value=0x7f}, {.addr=0xde8a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xde8a, .value=0x4d, .type=IO_READ},
        {.addr=0xde8b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f4, .value=0x7f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0098) {
    const struct CPU_State initial_cpu = {.pc=0x986e, .a=0x7f, .x=0x7a, .y=0x83, .sp=0xb0, .status=0xce};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0x986e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x986f, .a=0x7f, .x=0x7a, .y=0x83, .sp=0xaf, .status=0xce};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x7a}, {.addr=0x986e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x986e, .value=0x4d, .type=IO_READ},
        {.addr=0x986f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x7a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0099) {
    const struct CPU_State initial_cpu = {.pc=0x64b8, .a=0x21, .x=0x3e, .y=0x3f, .sp=0x3e, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x00}, {.addr=0x64b8, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x64b9, .a=0x21, .x=0x3e, .y=0x3f, .sp=0x3d, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x3e}, {.addr=0x64b8, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x64b8, .value=0x4d, .type=IO_READ},
        {.addr=0x64b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x3e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_009A) {
    const struct CPU_State initial_cpu = {.pc=0x7250, .a=0x84, .x=0x58, .y=0xe9, .sp=0xeb, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0x7250, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7251, .a=0x84, .x=0x58, .y=0xe9, .sp=0xea, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x58}, {.addr=0x7250, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7250, .value=0x4d, .type=IO_READ},
        {.addr=0x7251, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x58, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_009B) {
    const struct CPU_State initial_cpu = {.pc=0xb346, .a=0x79, .x=0x87, .y=0x09, .sp=0x72, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x00}, {.addr=0xb346, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb347, .a=0x79, .x=0x87, .y=0x09, .sp=0x71, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x87}, {.addr=0xb346, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb346, .value=0x4d, .type=IO_READ},
        {.addr=0xb347, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0x87, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_009C) {
    const struct CPU_State initial_cpu = {.pc=0x417c, .a=0x93, .x=0xca, .y=0x3f, .sp=0xe4, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0x417c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x417d, .a=0x93, .x=0xca, .y=0x3f, .sp=0xe3, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xca}, {.addr=0x417c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x417c, .value=0x4d, .type=IO_READ},
        {.addr=0x417d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_009D) {
    const struct CPU_State initial_cpu = {.pc=0xca9c, .a=0xbd, .x=0xf2, .y=0xdd, .sp=0xb9, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0xca9c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xca9d, .a=0xbd, .x=0xf2, .y=0xdd, .sp=0xb8, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xf2}, {.addr=0xca9c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xca9c, .value=0x4d, .type=IO_READ},
        {.addr=0xca9d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0xf2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_009E) {
    const struct CPU_State initial_cpu = {.pc=0x05d3, .a=0xe5, .x=0x8b, .y=0xbf, .sp=0x81, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x00}, {.addr=0x05d3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x05d4, .a=0xe5, .x=0x8b, .y=0xbf, .sp=0x80, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x8b}, {.addr=0x05d3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x05d3, .value=0x4d, .type=IO_READ},
        {.addr=0x05d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0x8b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_009F) {
    const struct CPU_State initial_cpu = {.pc=0x2aeb, .a=0x70, .x=0xe4, .y=0xcc, .sp=0x45, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x00}, {.addr=0x2aeb, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2aec, .a=0x70, .x=0xe4, .y=0xcc, .sp=0x44, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xe4}, {.addr=0x2aeb, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2aeb, .value=0x4d, .type=IO_READ},
        {.addr=0x2aec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0xe4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x9c3c, .a=0xbf, .x=0x42, .y=0x16, .sp=0x13, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0x9c3c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9c3d, .a=0xbf, .x=0x42, .y=0x16, .sp=0x12, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x42}, {.addr=0x9c3c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9c3c, .value=0x4d, .type=IO_READ},
        {.addr=0x9c3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x42, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00A1) {
    const struct CPU_State initial_cpu = {.pc=0xa355, .a=0xbf, .x=0xeb, .y=0x2b, .sp=0x97, .status=0x1b};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x00}, {.addr=0xa355, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa356, .a=0xbf, .x=0xeb, .y=0x2b, .sp=0x96, .status=0x1b};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0xeb}, {.addr=0xa355, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa355, .value=0x4d, .type=IO_READ},
        {.addr=0xa356, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x3ae8, .a=0xed, .x=0x2e, .y=0xd4, .sp=0x92, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x00}, {.addr=0x3ae8, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3ae9, .a=0xed, .x=0x2e, .y=0xd4, .sp=0x91, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x2e}, {.addr=0x3ae8, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3ae8, .value=0x4d, .type=IO_READ},
        {.addr=0x3ae9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0x2e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x0d26, .a=0x35, .x=0x05, .y=0x2e, .sp=0x50, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x00}, {.addr=0x0d26, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0d27, .a=0x35, .x=0x05, .y=0x2e, .sp=0x4f, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x05}, {.addr=0x0d26, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0d26, .value=0x4d, .type=IO_READ},
        {.addr=0x0d27, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0x05, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xb880, .a=0xe9, .x=0xf8, .y=0x80, .sp=0xc3, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x00}, {.addr=0xb880, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb881, .a=0xe9, .x=0xf8, .y=0x80, .sp=0xc2, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xf8}, {.addr=0xb880, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb880, .value=0x4d, .type=IO_READ},
        {.addr=0xb881, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0xf8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x003a, .a=0xa2, .x=0x18, .y=0xcd, .sp=0x3c, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x003a, .value=0x4d}, {.addr=0x013c, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x003b, .a=0xa2, .x=0x18, .y=0xcd, .sp=0x3b, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x003a, .value=0x4d}, {.addr=0x013c, .value=0x18}};
    const struct BusEvent events[] = {
        {.addr=0x003a, .value=0x4d, .type=IO_READ},
        {.addr=0x003b, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x18, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00A6) {
    const struct CPU_State initial_cpu = {.pc=0xdb1b, .a=0x6a, .x=0xa6, .y=0x19, .sp=0xf7, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x00}, {.addr=0xdb1b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xdb1c, .a=0x6a, .x=0xa6, .y=0x19, .sp=0xf6, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0xa6}, {.addr=0xdb1b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xdb1b, .value=0x4d, .type=IO_READ},
        {.addr=0xdb1c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0xa6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00A7) {
    const struct CPU_State initial_cpu = {.pc=0x79e9, .a=0xd1, .x=0x79, .y=0x00, .sp=0x7c, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x00}, {.addr=0x79e9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x79ea, .a=0xd1, .x=0x79, .y=0x00, .sp=0x7b, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x79}, {.addr=0x79e9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x79e9, .value=0x4d, .type=IO_READ},
        {.addr=0x79ea, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x0b4c, .a=0x5e, .x=0x53, .y=0x1c, .sp=0xa2, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x00}, {.addr=0x0b4c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0b4d, .a=0x5e, .x=0x53, .y=0x1c, .sp=0xa1, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x53}, {.addr=0x0b4c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0b4c, .value=0x4d, .type=IO_READ},
        {.addr=0x0b4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x53, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x4a4a, .a=0x1c, .x=0x00, .y=0xed, .sp=0xe5, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x00}, {.addr=0x4a4a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4a4b, .a=0x1c, .x=0x00, .y=0xed, .sp=0xe4, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x00}, {.addr=0x4a4a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4a4a, .value=0x4d, .type=IO_READ},
        {.addr=0x4a4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x00, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x3768, .a=0xb6, .x=0x16, .y=0xf7, .sp=0x6b, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x00}, {.addr=0x3768, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3769, .a=0xb6, .x=0x16, .y=0xf7, .sp=0x6a, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x16}, {.addr=0x3768, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3768, .value=0x4d, .type=IO_READ},
        {.addr=0x3769, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0x16, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x565d, .a=0xa1, .x=0x37, .y=0xde, .sp=0xb5, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x00}, {.addr=0x565d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x565e, .a=0xa1, .x=0x37, .y=0xde, .sp=0xb4, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x37}, {.addr=0x565d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x565d, .value=0x4d, .type=IO_READ},
        {.addr=0x565e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x96ca, .a=0xf4, .x=0xc0, .y=0x7a, .sp=0xc4, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0x96ca, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x96cb, .a=0xf4, .x=0xc0, .y=0x7a, .sp=0xc3, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0xc0}, {.addr=0x96ca, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x96ca, .value=0x4d, .type=IO_READ},
        {.addr=0x96cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0xc0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x4ddd, .a=0x1b, .x=0x8c, .y=0x74, .sp=0xd6, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x00}, {.addr=0x4ddd, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4dde, .a=0x1b, .x=0x8c, .y=0x74, .sp=0xd5, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x8c}, {.addr=0x4ddd, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4ddd, .value=0x4d, .type=IO_READ},
        {.addr=0x4dde, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x8c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xe018, .a=0xe0, .x=0x07, .y=0x41, .sp=0x7c, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x00}, {.addr=0xe018, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe019, .a=0xe0, .x=0x07, .y=0x41, .sp=0x7b, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x07}, {.addr=0xe018, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe018, .value=0x4d, .type=IO_READ},
        {.addr=0xe019, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x07, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x109d, .a=0xa9, .x=0xe2, .y=0x0f, .sp=0xe3, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0x109d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x109e, .a=0xa9, .x=0xe2, .y=0x0f, .sp=0xe2, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xe2}, {.addr=0x109d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x109d, .value=0x4d, .type=IO_READ},
        {.addr=0x109e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0xe2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x8209, .a=0x78, .x=0x03, .y=0xbd, .sp=0x66, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x00}, {.addr=0x8209, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x820a, .a=0x78, .x=0x03, .y=0xbd, .sp=0x65, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x03}, {.addr=0x8209, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8209, .value=0x4d, .type=IO_READ},
        {.addr=0x820a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x03, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x996b, .a=0x58, .x=0x34, .y=0x76, .sp=0x8e, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0x996b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x996c, .a=0x58, .x=0x34, .y=0x76, .sp=0x8d, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x34}, {.addr=0x996b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x996b, .value=0x4d, .type=IO_READ},
        {.addr=0x996c, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x34, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xd0cb, .a=0x05, .x=0xa7, .y=0x90, .sp=0x7b, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x00}, {.addr=0xd0cb, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd0cc, .a=0x05, .x=0xa7, .y=0x90, .sp=0x7a, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xa7}, {.addr=0xd0cb, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd0cb, .value=0x4d, .type=IO_READ},
        {.addr=0xd0cc, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xa7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00B3) {
    const struct CPU_State initial_cpu = {.pc=0x9a6f, .a=0xe5, .x=0x2d, .y=0xce, .sp=0x77, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x00}, {.addr=0x9a6f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9a70, .a=0xe5, .x=0x2d, .y=0xce, .sp=0x76, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x2d}, {.addr=0x9a6f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9a6f, .value=0x4d, .type=IO_READ},
        {.addr=0x9a70, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x2d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xadca, .a=0x87, .x=0xbb, .y=0x26, .sp=0x27, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x00}, {.addr=0xadca, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xadcb, .a=0x87, .x=0xbb, .y=0x26, .sp=0x26, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0xbb}, {.addr=0xadca, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xadca, .value=0x4d, .type=IO_READ},
        {.addr=0xadcb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0xbb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00B5) {
    const struct CPU_State initial_cpu = {.pc=0xeba4, .a=0xe1, .x=0x12, .y=0x73, .sp=0x44, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x00}, {.addr=0xeba4, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xeba5, .a=0xe1, .x=0x12, .y=0x73, .sp=0x43, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x12}, {.addr=0xeba4, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xeba4, .value=0x4d, .type=IO_READ},
        {.addr=0xeba5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0x12, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00B6) {
    const struct CPU_State initial_cpu = {.pc=0x5813, .a=0xdf, .x=0x3b, .y=0xe6, .sp=0xdd, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x00}, {.addr=0x5813, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5814, .a=0xdf, .x=0x3b, .y=0xe6, .sp=0xdc, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0x3b}, {.addr=0x5813, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5813, .value=0x4d, .type=IO_READ},
        {.addr=0x5814, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0x3b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xafa3, .a=0xee, .x=0x4f, .y=0x2c, .sp=0x02, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x00}, {.addr=0xafa3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xafa4, .a=0xee, .x=0x4f, .y=0x2c, .sp=0x01, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x4f}, {.addr=0xafa3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xafa3, .value=0x4d, .type=IO_READ},
        {.addr=0xafa4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0x4f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00B8) {
    const struct CPU_State initial_cpu = {.pc=0x8744, .a=0xc7, .x=0xf9, .y=0x7b, .sp=0xe2, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x00}, {.addr=0x8744, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8745, .a=0xc7, .x=0xf9, .y=0x7b, .sp=0xe1, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xf9}, {.addr=0x8744, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8744, .value=0x4d, .type=IO_READ},
        {.addr=0x8745, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0xf9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x1260, .a=0x51, .x=0x76, .y=0xe3, .sp=0x31, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x00}, {.addr=0x1260, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1261, .a=0x51, .x=0x76, .y=0xe3, .sp=0x30, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x76}, {.addr=0x1260, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1260, .value=0x4d, .type=IO_READ},
        {.addr=0x1261, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x76, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00BA) {
    const struct CPU_State initial_cpu = {.pc=0x0806, .a=0x89, .x=0x44, .y=0xeb, .sp=0x78, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0x0806, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0807, .a=0x89, .x=0x44, .y=0xeb, .sp=0x77, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x44}, {.addr=0x0806, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0806, .value=0x4d, .type=IO_READ},
        {.addr=0x0807, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x44, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00BB) {
    const struct CPU_State initial_cpu = {.pc=0x5c94, .a=0xc5, .x=0xac, .y=0xb7, .sp=0xb5, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x00}, {.addr=0x5c94, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5c95, .a=0xc5, .x=0xac, .y=0xb7, .sp=0xb4, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0xac}, {.addr=0x5c94, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5c94, .value=0x4d, .type=IO_READ},
        {.addr=0x5c95, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0xac, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00BC) {
    const struct CPU_State initial_cpu = {.pc=0xff5f, .a=0x33, .x=0x99, .y=0xfc, .sp=0x92, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x00}, {.addr=0xff5f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xff60, .a=0x33, .x=0x99, .y=0xfc, .sp=0x91, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x99}, {.addr=0xff5f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xff5f, .value=0x4d, .type=IO_READ},
        {.addr=0xff60, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0x99, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00BD) {
    const struct CPU_State initial_cpu = {.pc=0x13f0, .a=0x63, .x=0x7c, .y=0x3d, .sp=0x75, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x00}, {.addr=0x13f0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x13f1, .a=0x63, .x=0x7c, .y=0x3d, .sp=0x74, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x7c}, {.addr=0x13f0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x13f0, .value=0x4d, .type=IO_READ},
        {.addr=0x13f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0x7c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00BE) {
    const struct CPU_State initial_cpu = {.pc=0xa7ed, .a=0x47, .x=0xbf, .y=0xb8, .sp=0xcc, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x00}, {.addr=0xa7ed, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa7ee, .a=0x47, .x=0xbf, .y=0xb8, .sp=0xcb, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xbf}, {.addr=0xa7ed, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa7ed, .value=0x4d, .type=IO_READ},
        {.addr=0xa7ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0xbf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x2b51, .a=0xd1, .x=0x26, .y=0xff, .sp=0x28, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x00}, {.addr=0x2b51, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2b52, .a=0xd1, .x=0x26, .y=0xff, .sp=0x27, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x26}, {.addr=0x2b51, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2b51, .value=0x4d, .type=IO_READ},
        {.addr=0x2b52, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00C0) {
    const struct CPU_State initial_cpu = {.pc=0x9225, .a=0x3c, .x=0x55, .y=0x86, .sp=0x18, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x00}, {.addr=0x9225, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9226, .a=0x3c, .x=0x55, .y=0x86, .sp=0x17, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x55}, {.addr=0x9225, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9225, .value=0x4d, .type=IO_READ},
        {.addr=0x9226, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x55, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x3e8e, .a=0xd9, .x=0x60, .y=0x28, .sp=0xb7, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x00}, {.addr=0x3e8e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3e8f, .a=0xd9, .x=0x60, .y=0x28, .sp=0xb6, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x60}, {.addr=0x3e8e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3e8e, .value=0x4d, .type=IO_READ},
        {.addr=0x3e8f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x60, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x93f0, .a=0x33, .x=0x98, .y=0x43, .sp=0xa3, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x00}, {.addr=0x93f0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x93f1, .a=0x33, .x=0x98, .y=0x43, .sp=0xa2, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x98}, {.addr=0x93f0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x93f0, .value=0x4d, .type=IO_READ},
        {.addr=0x93f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x98, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xb277, .a=0xe4, .x=0xbb, .y=0xfc, .sp=0xee, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0xb277, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb278, .a=0xe4, .x=0xbb, .y=0xfc, .sp=0xed, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xbb}, {.addr=0xb277, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb277, .value=0x4d, .type=IO_READ},
        {.addr=0xb278, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0xbb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x1948, .a=0xc7, .x=0xee, .y=0xfe, .sp=0xf3, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x00}, {.addr=0x1948, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1949, .a=0xc7, .x=0xee, .y=0xfe, .sp=0xf2, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0xee}, {.addr=0x1948, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1948, .value=0x4d, .type=IO_READ},
        {.addr=0x1949, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0xee, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x8c59, .a=0x15, .x=0x6e, .y=0x72, .sp=0xeb, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0x8c59, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8c5a, .a=0x15, .x=0x6e, .y=0x72, .sp=0xea, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x6e}, {.addr=0x8c59, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8c59, .value=0x4d, .type=IO_READ},
        {.addr=0x8c5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x6e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00C6) {
    const struct CPU_State initial_cpu = {.pc=0xd505, .a=0x17, .x=0x49, .y=0x50, .sp=0x3d, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x00}, {.addr=0xd505, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd506, .a=0x17, .x=0x49, .y=0x50, .sp=0x3c, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x49}, {.addr=0xd505, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd505, .value=0x4d, .type=IO_READ},
        {.addr=0xd506, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0x49, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xc54b, .a=0xe3, .x=0x6d, .y=0x60, .sp=0xd0, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x00}, {.addr=0xc54b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc54c, .a=0xe3, .x=0x6d, .y=0x60, .sp=0xcf, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x6d}, {.addr=0xc54b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc54b, .value=0x4d, .type=IO_READ},
        {.addr=0xc54c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0x6d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x5acd, .a=0x58, .x=0xde, .y=0x46, .sp=0x7f, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x00}, {.addr=0x5acd, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5ace, .a=0x58, .x=0xde, .y=0x46, .sp=0x7e, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0xde}, {.addr=0x5acd, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5acd, .value=0x4d, .type=IO_READ},
        {.addr=0x5ace, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0xde, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x21ca, .a=0x55, .x=0xc3, .y=0x7b, .sp=0x2e, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x21ca, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x21cb, .a=0x55, .x=0xc3, .y=0x7b, .sp=0x2d, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xc3}, {.addr=0x21ca, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x21ca, .value=0x4d, .type=IO_READ},
        {.addr=0x21cb, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0xc3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x6cec, .a=0x90, .x=0x1f, .y=0xc0, .sp=0xc5, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x00}, {.addr=0x6cec, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6ced, .a=0x90, .x=0x1f, .y=0xc0, .sp=0xc4, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x1f}, {.addr=0x6cec, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6cec, .value=0x4d, .type=IO_READ},
        {.addr=0x6ced, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0x1f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x868d, .a=0x9d, .x=0x2e, .y=0xf8, .sp=0x76, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x00}, {.addr=0x868d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x868e, .a=0x9d, .x=0x2e, .y=0xf8, .sp=0x75, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x2e}, {.addr=0x868d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x868d, .value=0x4d, .type=IO_READ},
        {.addr=0x868e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0x2e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x7ffc, .a=0xcb, .x=0xfd, .y=0x3b, .sp=0x8a, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x00}, {.addr=0x7ffc, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7ffd, .a=0xcb, .x=0xfd, .y=0x3b, .sp=0x89, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xfd}, {.addr=0x7ffc, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7ffc, .value=0x4d, .type=IO_READ},
        {.addr=0x7ffd, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0xfd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00CD) {
    const struct CPU_State initial_cpu = {.pc=0xe79c, .a=0x7b, .x=0x31, .y=0xb2, .sp=0x4b, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x00}, {.addr=0xe79c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe79d, .a=0x7b, .x=0x31, .y=0xb2, .sp=0x4a, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x31}, {.addr=0xe79c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe79c, .value=0x4d, .type=IO_READ},
        {.addr=0xe79d, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0x31, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x8355, .a=0xcf, .x=0xe2, .y=0x35, .sp=0xd0, .status=0x65};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x00}, {.addr=0x8355, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8356, .a=0xcf, .x=0xe2, .y=0x35, .sp=0xcf, .status=0x65};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0xe2}, {.addr=0x8355, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8355, .value=0x4d, .type=IO_READ},
        {.addr=0x8356, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0xe2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x291f, .a=0x33, .x=0x27, .y=0x1d, .sp=0x8e, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x018e, .value=0x00}, {.addr=0x291f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2920, .a=0x33, .x=0x27, .y=0x1d, .sp=0x8d, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x018e, .value=0x27}, {.addr=0x291f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x291f, .value=0x4d, .type=IO_READ},
        {.addr=0x2920, .value=DUMMY, .type=IO_READ},
        {.addr=0x018e, .value=0x27, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x76f9, .a=0x81, .x=0xcd, .y=0xd3, .sp=0x44, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x00}, {.addr=0x76f9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x76fa, .a=0x81, .x=0xcd, .y=0xd3, .sp=0x43, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xcd}, {.addr=0x76f9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x76f9, .value=0x4d, .type=IO_READ},
        {.addr=0x76fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0xcd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x8e49, .a=0xcc, .x=0x39, .y=0x4d, .sp=0x59, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0x8e49, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8e4a, .a=0xcc, .x=0x39, .y=0x4d, .sp=0x58, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x39}, {.addr=0x8e49, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8e49, .value=0x4d, .type=IO_READ},
        {.addr=0x8e4a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x39, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00D2) {
    const struct CPU_State initial_cpu = {.pc=0xc295, .a=0x33, .x=0xa4, .y=0x0f, .sp=0x47, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0xc295, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc296, .a=0x33, .x=0xa4, .y=0x0f, .sp=0x46, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0xa4}, {.addr=0xc295, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc295, .value=0x4d, .type=IO_READ},
        {.addr=0xc296, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x894f, .a=0xa7, .x=0xc1, .y=0x3c, .sp=0x4e, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0x894f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8950, .a=0xa7, .x=0xc1, .y=0x3c, .sp=0x4d, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xc1}, {.addr=0x894f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x894f, .value=0x4d, .type=IO_READ},
        {.addr=0x8950, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00D4) {
    const struct CPU_State initial_cpu = {.pc=0x4ada, .a=0x06, .x=0xc8, .y=0x7f, .sp=0xbd, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0x4ada, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4adb, .a=0x06, .x=0xc8, .y=0x7f, .sp=0xbc, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0xc8}, {.addr=0x4ada, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4ada, .value=0x4d, .type=IO_READ},
        {.addr=0x4adb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0xc8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xaf9f, .a=0x00, .x=0xcd, .y=0xfa, .sp=0xbb, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x00}, {.addr=0xaf9f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xafa0, .a=0x00, .x=0xcd, .y=0xfa, .sp=0xba, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0xcd}, {.addr=0xaf9f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xaf9f, .value=0x4d, .type=IO_READ},
        {.addr=0xafa0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0xcd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xb18d, .a=0xc5, .x=0x85, .y=0xe3, .sp=0xae, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x00}, {.addr=0xb18d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb18e, .a=0xc5, .x=0x85, .y=0xe3, .sp=0xad, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x85}, {.addr=0xb18d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb18d, .value=0x4d, .type=IO_READ},
        {.addr=0xb18e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x85, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x7671, .a=0xc9, .x=0xec, .y=0x06, .sp=0x44, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x00}, {.addr=0x7671, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7672, .a=0xc9, .x=0xec, .y=0x06, .sp=0x43, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0xec}, {.addr=0x7671, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7671, .value=0x4d, .type=IO_READ},
        {.addr=0x7672, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0xec, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00D8) {
    const struct CPU_State initial_cpu = {.pc=0xa465, .a=0xf7, .x=0x66, .y=0xa5, .sp=0xb8, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0xa465, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa466, .a=0xf7, .x=0x66, .y=0xa5, .sp=0xb7, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x66}, {.addr=0xa465, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa465, .value=0x4d, .type=IO_READ},
        {.addr=0xa466, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x66, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00D9) {
    const struct CPU_State initial_cpu = {.pc=0xc639, .a=0xe8, .x=0x23, .y=0x1d, .sp=0xdf, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0xc639, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc63a, .a=0xe8, .x=0x23, .y=0x1d, .sp=0xde, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x23}, {.addr=0xc639, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc639, .value=0x4d, .type=IO_READ},
        {.addr=0xc63a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x23, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00DA) {
    const struct CPU_State initial_cpu = {.pc=0x0ae8, .a=0x53, .x=0x00, .y=0xe7, .sp=0xf7, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x00}, {.addr=0x0ae8, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0ae9, .a=0x53, .x=0x00, .y=0xe7, .sp=0xf6, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x00}, {.addr=0x0ae8, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0ae8, .value=0x4d, .type=IO_READ},
        {.addr=0x0ae9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0x00, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x2fd9, .a=0x41, .x=0x26, .y=0x4f, .sp=0x7b, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x00}, {.addr=0x2fd9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2fda, .a=0x41, .x=0x26, .y=0x4f, .sp=0x7a, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x26}, {.addr=0x2fd9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2fd9, .value=0x4d, .type=IO_READ},
        {.addr=0x2fda, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xeb89, .a=0x28, .x=0xeb, .y=0x6b, .sp=0xbe, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x00}, {.addr=0xeb89, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xeb8a, .a=0x28, .x=0xeb, .y=0x6b, .sp=0xbd, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0xeb}, {.addr=0xeb89, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xeb89, .value=0x4d, .type=IO_READ},
        {.addr=0xeb8a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x1e76, .a=0x17, .x=0x2c, .y=0xc2, .sp=0xf5, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x00}, {.addr=0x1e76, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1e77, .a=0x17, .x=0x2c, .y=0xc2, .sp=0xf4, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x2c}, {.addr=0x1e76, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1e76, .value=0x4d, .type=IO_READ},
        {.addr=0x1e77, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00DE) {
    const struct CPU_State initial_cpu = {.pc=0x59b7, .a=0x5c, .x=0x0b, .y=0x20, .sp=0x21, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x00}, {.addr=0x59b7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x59b8, .a=0x5c, .x=0x0b, .y=0x20, .sp=0x20, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x0b}, {.addr=0x59b7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x59b7, .value=0x4d, .type=IO_READ},
        {.addr=0x59b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0x0b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00DF) {
    const struct CPU_State initial_cpu = {.pc=0x4f38, .a=0xe1, .x=0xde, .y=0xf6, .sp=0x83, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x0183, .value=0x00}, {.addr=0x4f38, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4f39, .a=0xe1, .x=0xde, .y=0xf6, .sp=0x82, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x0183, .value=0xde}, {.addr=0x4f38, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4f38, .value=0x4d, .type=IO_READ},
        {.addr=0x4f39, .value=DUMMY, .type=IO_READ},
        {.addr=0x0183, .value=0xde, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00E0) {
    const struct CPU_State initial_cpu = {.pc=0xc096, .a=0x69, .x=0x04, .y=0x1a, .sp=0x78, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0xc096, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc097, .a=0x69, .x=0x04, .y=0x1a, .sp=0x77, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x04}, {.addr=0xc096, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc096, .value=0x4d, .type=IO_READ},
        {.addr=0xc097, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x213b, .a=0x00, .x=0x05, .y=0x96, .sp=0x2a, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x00}, {.addr=0x213b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x213c, .a=0x00, .x=0x05, .y=0x96, .sp=0x29, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x05}, {.addr=0x213b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x213b, .value=0x4d, .type=IO_READ},
        {.addr=0x213c, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0x05, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x8c7d, .a=0x21, .x=0xdf, .y=0x86, .sp=0x28, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x00}, {.addr=0x8c7d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8c7e, .a=0x21, .x=0xdf, .y=0x86, .sp=0x27, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xdf}, {.addr=0x8c7d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8c7d, .value=0x4d, .type=IO_READ},
        {.addr=0x8c7e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0xdf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x6ff2, .a=0x3b, .x=0x7e, .y=0x35, .sp=0xef, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0x6ff2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6ff3, .a=0x3b, .x=0x7e, .y=0x35, .sp=0xee, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x7e}, {.addr=0x6ff2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6ff2, .value=0x4d, .type=IO_READ},
        {.addr=0x6ff3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x7e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x43d4, .a=0xe8, .x=0xd1, .y=0x60, .sp=0x08, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x00}, {.addr=0x43d4, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x43d5, .a=0xe8, .x=0xd1, .y=0x60, .sp=0x07, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0xd1}, {.addr=0x43d4, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x43d4, .value=0x4d, .type=IO_READ},
        {.addr=0x43d5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0xd1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x7b99, .a=0x3f, .x=0x67, .y=0x16, .sp=0xfa, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x00}, {.addr=0x7b99, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7b9a, .a=0x3f, .x=0x67, .y=0x16, .sp=0xf9, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x67}, {.addr=0x7b99, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7b99, .value=0x4d, .type=IO_READ},
        {.addr=0x7b9a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0x67, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00E6) {
    const struct CPU_State initial_cpu = {.pc=0x9dba, .a=0x92, .x=0xbf, .y=0x21, .sp=0x11, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0x9dba, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9dbb, .a=0x92, .x=0xbf, .y=0x21, .sp=0x10, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0xbf}, {.addr=0x9dba, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9dba, .value=0x4d, .type=IO_READ},
        {.addr=0x9dbb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0xbf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xe18c, .a=0x13, .x=0xa8, .y=0xba, .sp=0xc0, .status=0xb8};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x00}, {.addr=0xe18c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe18d, .a=0x13, .x=0xa8, .y=0xba, .sp=0xbf, .status=0xb8};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0xa8}, {.addr=0xe18c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe18c, .value=0x4d, .type=IO_READ},
        {.addr=0xe18d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0xa8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00E8) {
    const struct CPU_State initial_cpu = {.pc=0xe62c, .a=0x77, .x=0x62, .y=0x47, .sp=0xc3, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x00}, {.addr=0xe62c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe62d, .a=0x77, .x=0x62, .y=0x47, .sp=0xc2, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x62}, {.addr=0xe62c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe62c, .value=0x4d, .type=IO_READ},
        {.addr=0xe62d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00E9) {
    const struct CPU_State initial_cpu = {.pc=0x6997, .a=0x88, .x=0x81, .y=0x1d, .sp=0xe2, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x00}, {.addr=0x6997, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6998, .a=0x88, .x=0x81, .y=0x1d, .sp=0xe1, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0x81}, {.addr=0x6997, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6997, .value=0x4d, .type=IO_READ},
        {.addr=0x6998, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0x81, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x0b51, .a=0xda, .x=0x21, .y=0xea, .sp=0x26, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x00}, {.addr=0x0b51, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0b52, .a=0xda, .x=0x21, .y=0xea, .sp=0x25, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x21}, {.addr=0x0b51, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0b51, .value=0x4d, .type=IO_READ},
        {.addr=0x0b52, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0x21, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xd708, .a=0x08, .x=0x4c, .y=0x91, .sp=0x11, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0111, .value=0x00}, {.addr=0xd708, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd709, .a=0x08, .x=0x4c, .y=0x91, .sp=0x10, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0111, .value=0x4c}, {.addr=0xd708, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd708, .value=0x4d, .type=IO_READ},
        {.addr=0xd709, .value=DUMMY, .type=IO_READ},
        {.addr=0x0111, .value=0x4c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00EC) {
    const struct CPU_State initial_cpu = {.pc=0x18c7, .a=0x50, .x=0xf6, .y=0xc5, .sp=0x2b, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x18c7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x18c8, .a=0x50, .x=0xf6, .y=0xc5, .sp=0x2a, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xf6}, {.addr=0x18c7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x18c7, .value=0x4d, .type=IO_READ},
        {.addr=0x18c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0xf6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xd5c3, .a=0x97, .x=0x78, .y=0xb9, .sp=0xbe, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x00}, {.addr=0xd5c3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd5c4, .a=0x97, .x=0x78, .y=0xb9, .sp=0xbd, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x78}, {.addr=0xd5c3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd5c3, .value=0x4d, .type=IO_READ},
        {.addr=0xd5c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0x78, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00EE) {
    const struct CPU_State initial_cpu = {.pc=0x61f2, .a=0x65, .x=0x73, .y=0xd5, .sp=0x95, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x00}, {.addr=0x61f2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x61f3, .a=0x65, .x=0x73, .y=0xd5, .sp=0x94, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0x73}, {.addr=0x61f2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x61f2, .value=0x4d, .type=IO_READ},
        {.addr=0x61f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0x73, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00EF) {
    const struct CPU_State initial_cpu = {.pc=0x77f2, .a=0xd5, .x=0xb2, .y=0x90, .sp=0xbc, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x00}, {.addr=0x77f2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x77f3, .a=0xd5, .x=0xb2, .y=0x90, .sp=0xbb, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0xb2}, {.addr=0x77f2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x77f2, .value=0x4d, .type=IO_READ},
        {.addr=0x77f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x348e, .a=0x7a, .x=0xee, .y=0x62, .sp=0x75, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x00}, {.addr=0x348e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x348f, .a=0x7a, .x=0xee, .y=0x62, .sp=0x74, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0xee}, {.addr=0x348e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x348e, .value=0x4d, .type=IO_READ},
        {.addr=0x348f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0xee, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x6a3f, .a=0x9b, .x=0xb4, .y=0x2a, .sp=0xe4, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0x6a3f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6a40, .a=0x9b, .x=0xb4, .y=0x2a, .sp=0xe3, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xb4}, {.addr=0x6a3f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6a3f, .value=0x4d, .type=IO_READ},
        {.addr=0x6a40, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0xb4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00F2) {
    const struct CPU_State initial_cpu = {.pc=0x0745, .a=0x7f, .x=0xa5, .y=0x41, .sp=0x1b, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0x0745, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0746, .a=0x7f, .x=0xa5, .y=0x41, .sp=0x1a, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0xa5}, {.addr=0x0745, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0745, .value=0x4d, .type=IO_READ},
        {.addr=0x0746, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0xa5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xffb0, .a=0x51, .x=0x1d, .y=0xcf, .sp=0xbe, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x00}, {.addr=0xffb0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xffb1, .a=0x51, .x=0x1d, .y=0xcf, .sp=0xbd, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0x1d}, {.addr=0xffb0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xffb0, .value=0x4d, .type=IO_READ},
        {.addr=0xffb1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0x1d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xeb38, .a=0xbd, .x=0xdf, .y=0x5a, .sp=0x0b, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x00}, {.addr=0xeb38, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xeb39, .a=0xbd, .x=0xdf, .y=0x5a, .sp=0x0a, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0xdf}, {.addr=0xeb38, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xeb38, .value=0x4d, .type=IO_READ},
        {.addr=0xeb39, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0xdf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00F5) {
    const struct CPU_State initial_cpu = {.pc=0xdcbc, .a=0x5f, .x=0x68, .y=0x99, .sp=0xee, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0xdcbc, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xdcbd, .a=0x5f, .x=0x68, .y=0x99, .sp=0xed, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0x68}, {.addr=0xdcbc, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xdcbc, .value=0x4d, .type=IO_READ},
        {.addr=0xdcbd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00F6) {
    const struct CPU_State initial_cpu = {.pc=0xd073, .a=0x08, .x=0x9b, .y=0xa1, .sp=0x80, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0xd073, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd074, .a=0x08, .x=0x9b, .y=0xa1, .sp=0x7f, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x9b}, {.addr=0xd073, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd073, .value=0x4d, .type=IO_READ},
        {.addr=0xd074, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x9b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xe311, .a=0x24, .x=0x42, .y=0x49, .sp=0xef, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0xe311, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe312, .a=0x24, .x=0x42, .y=0x49, .sp=0xee, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x42}, {.addr=0xe311, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe311, .value=0x4d, .type=IO_READ},
        {.addr=0xe312, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x42, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xda6f, .a=0x8f, .x=0xcf, .y=0x57, .sp=0x17, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x00}, {.addr=0xda6f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xda70, .a=0x8f, .x=0xcf, .y=0x57, .sp=0x16, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0xcf}, {.addr=0xda6f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xda6f, .value=0x4d, .type=IO_READ},
        {.addr=0xda70, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0xcf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00F9) {
    const struct CPU_State initial_cpu = {.pc=0xd408, .a=0x95, .x=0x94, .y=0x5b, .sp=0x86, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x00}, {.addr=0xd408, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd409, .a=0x95, .x=0x94, .y=0x5b, .sp=0x85, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x94}, {.addr=0xd408, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd408, .value=0x4d, .type=IO_READ},
        {.addr=0xd409, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0x94, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x4bea, .a=0xa7, .x=0x28, .y=0x48, .sp=0x5e, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x00}, {.addr=0x4bea, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4beb, .a=0xa7, .x=0x28, .y=0x48, .sp=0x5d, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x28}, {.addr=0x4bea, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4bea, .value=0x4d, .type=IO_READ},
        {.addr=0x4beb, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0x28, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00FB) {
    const struct CPU_State initial_cpu = {.pc=0xebad, .a=0x31, .x=0x8a, .y=0x71, .sp=0xac, .status=0x9a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x00}, {.addr=0xebad, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xebae, .a=0x31, .x=0x8a, .y=0x71, .sp=0xab, .status=0x9a};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0x8a}, {.addr=0xebad, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xebad, .value=0x4d, .type=IO_READ},
        {.addr=0xebae, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0x8a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x14fc, .a=0xb7, .x=0xe5, .y=0x31, .sp=0x53, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0x14fc, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x14fd, .a=0xb7, .x=0xe5, .y=0x31, .sp=0x52, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0xe5}, {.addr=0x14fc, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x14fc, .value=0x4d, .type=IO_READ},
        {.addr=0x14fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0xe5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00FD) {
    const struct CPU_State initial_cpu = {.pc=0x2d6e, .a=0x1e, .x=0x75, .y=0x6d, .sp=0x64, .status=0x59};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x00}, {.addr=0x2d6e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2d6f, .a=0x1e, .x=0x75, .y=0x6d, .sp=0x63, .status=0x59};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x75}, {.addr=0x2d6e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2d6e, .value=0x4d, .type=IO_READ},
        {.addr=0x2d6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x75, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00FE) {
    const struct CPU_State initial_cpu = {.pc=0xce40, .a=0x71, .x=0xa3, .y=0x6c, .sp=0x80, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0xce40, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xce41, .a=0x71, .x=0xa3, .y=0x6c, .sp=0x7f, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xa3}, {.addr=0xce40, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xce40, .value=0x4d, .type=IO_READ},
        {.addr=0xce41, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0xa3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x3c7b, .a=0x00, .x=0x24, .y=0x15, .sp=0x5c, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x00}, {.addr=0x3c7b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3c7c, .a=0x00, .x=0x24, .y=0x15, .sp=0x5b, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x24}, {.addr=0x3c7b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3c7b, .value=0x4d, .type=IO_READ},
        {.addr=0x3c7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x24, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0100) {
    const struct CPU_State initial_cpu = {.pc=0x627a, .a=0x23, .x=0x6c, .y=0xaf, .sp=0x2e, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x627a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x627b, .a=0x23, .x=0x6c, .y=0xaf, .sp=0x2d, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0x6c}, {.addr=0x627a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x627a, .value=0x4d, .type=IO_READ},
        {.addr=0x627b, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0x6c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0101) {
    const struct CPU_State initial_cpu = {.pc=0xb076, .a=0xf7, .x=0x5b, .y=0xe4, .sp=0x6d, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x00}, {.addr=0xb076, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb077, .a=0xf7, .x=0x5b, .y=0xe4, .sp=0x6c, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x5b}, {.addr=0xb076, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb076, .value=0x4d, .type=IO_READ},
        {.addr=0xb077, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x5b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0102) {
    const struct CPU_State initial_cpu = {.pc=0xc91f, .a=0x68, .x=0x25, .y=0x32, .sp=0x3e, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x00}, {.addr=0xc91f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc920, .a=0x68, .x=0x25, .y=0x32, .sp=0x3d, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x25}, {.addr=0xc91f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc91f, .value=0x4d, .type=IO_READ},
        {.addr=0xc920, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x25, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0103) {
    const struct CPU_State initial_cpu = {.pc=0x17cf, .a=0x78, .x=0x8b, .y=0x46, .sp=0xa0, .status=0xaa};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0x17cf, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x17d0, .a=0x78, .x=0x8b, .y=0x46, .sp=0x9f, .status=0xaa};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0x8b}, {.addr=0x17cf, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x17cf, .value=0x4d, .type=IO_READ},
        {.addr=0x17d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0x8b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0104) {
    const struct CPU_State initial_cpu = {.pc=0xe923, .a=0x4a, .x=0x7b, .y=0xa9, .sp=0x46, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0xe923, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe924, .a=0x4a, .x=0x7b, .y=0xa9, .sp=0x45, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x7b}, {.addr=0xe923, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe923, .value=0x4d, .type=IO_READ},
        {.addr=0xe924, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x7b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0105) {
    const struct CPU_State initial_cpu = {.pc=0x3ecf, .a=0xc0, .x=0xc6, .y=0xee, .sp=0x3e, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x00}, {.addr=0x3ecf, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3ed0, .a=0xc0, .x=0xc6, .y=0xee, .sp=0x3d, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0xc6}, {.addr=0x3ecf, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3ecf, .value=0x4d, .type=IO_READ},
        {.addr=0x3ed0, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0106) {
    const struct CPU_State initial_cpu = {.pc=0xb91c, .a=0x74, .x=0xf6, .y=0xcb, .sp=0x07, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0xb91c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb91d, .a=0x74, .x=0xf6, .y=0xcb, .sp=0x06, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xf6}, {.addr=0xb91c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb91c, .value=0x4d, .type=IO_READ},
        {.addr=0xb91d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0xf6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0107) {
    const struct CPU_State initial_cpu = {.pc=0x063b, .a=0xcf, .x=0x7f, .y=0x55, .sp=0x8b, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x00}, {.addr=0x063b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x063c, .a=0xcf, .x=0x7f, .y=0x55, .sp=0x8a, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x7f}, {.addr=0x063b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x063b, .value=0x4d, .type=IO_READ},
        {.addr=0x063c, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x7f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0108) {
    const struct CPU_State initial_cpu = {.pc=0xf81d, .a=0x30, .x=0x48, .y=0x56, .sp=0x3e, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x00}, {.addr=0xf81d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf81e, .a=0x30, .x=0x48, .y=0x56, .sp=0x3d, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x48}, {.addr=0xf81d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf81d, .value=0x4d, .type=IO_READ},
        {.addr=0xf81e, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x48, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0109) {
    const struct CPU_State initial_cpu = {.pc=0x1ed2, .a=0x85, .x=0xd6, .y=0xd8, .sp=0xe3, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0x1ed2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1ed3, .a=0x85, .x=0xd6, .y=0xd8, .sp=0xe2, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xd6}, {.addr=0x1ed2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1ed2, .value=0x4d, .type=IO_READ},
        {.addr=0x1ed3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0xd6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_010A) {
    const struct CPU_State initial_cpu = {.pc=0x56a6, .a=0xcc, .x=0x9d, .y=0xaf, .sp=0x56, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x00}, {.addr=0x56a6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x56a7, .a=0xcc, .x=0x9d, .y=0xaf, .sp=0x55, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x9d}, {.addr=0x56a6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x56a6, .value=0x4d, .type=IO_READ},
        {.addr=0x56a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x9d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_010B) {
    const struct CPU_State initial_cpu = {.pc=0xd44f, .a=0xca, .x=0x99, .y=0x03, .sp=0x1a, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x00}, {.addr=0xd44f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd450, .a=0xca, .x=0x99, .y=0x03, .sp=0x19, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x99}, {.addr=0xd44f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd44f, .value=0x4d, .type=IO_READ},
        {.addr=0xd450, .value=DUMMY, .type=IO_READ},
        {.addr=0x011a, .value=0x99, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_010C) {
    const struct CPU_State initial_cpu = {.pc=0x151e, .a=0x6c, .x=0x10, .y=0x30, .sp=0x12, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0x151e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x151f, .a=0x6c, .x=0x10, .y=0x30, .sp=0x11, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x10}, {.addr=0x151e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x151e, .value=0x4d, .type=IO_READ},
        {.addr=0x151f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0x10, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_010D) {
    const struct CPU_State initial_cpu = {.pc=0x3446, .a=0x3b, .x=0xa9, .y=0x5c, .sp=0x91, .status=0xbe};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x00}, {.addr=0x3446, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3447, .a=0x3b, .x=0xa9, .y=0x5c, .sp=0x90, .status=0xbe};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0xa9}, {.addr=0x3446, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3446, .value=0x4d, .type=IO_READ},
        {.addr=0x3447, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_010E) {
    const struct CPU_State initial_cpu = {.pc=0xd4c7, .a=0x3a, .x=0x34, .y=0xfa, .sp=0xe1, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x00}, {.addr=0xd4c7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd4c8, .a=0x3a, .x=0x34, .y=0xfa, .sp=0xe0, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x34}, {.addr=0xd4c7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd4c7, .value=0x4d, .type=IO_READ},
        {.addr=0xd4c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x34, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_010F) {
    const struct CPU_State initial_cpu = {.pc=0x2be0, .a=0x47, .x=0x01, .y=0x8a, .sp=0x82, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0x2be0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2be1, .a=0x47, .x=0x01, .y=0x8a, .sp=0x81, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x01}, {.addr=0x2be0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2be0, .value=0x4d, .type=IO_READ},
        {.addr=0x2be1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x01, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0110) {
    const struct CPU_State initial_cpu = {.pc=0x0b37, .a=0x04, .x=0x64, .y=0x7e, .sp=0xff, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x00}, {.addr=0x0b37, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0b38, .a=0x04, .x=0x64, .y=0x7e, .sp=0xfe, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x64}, {.addr=0x0b37, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0b37, .value=0x4d, .type=IO_READ},
        {.addr=0x0b38, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x64, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0111) {
    const struct CPU_State initial_cpu = {.pc=0x6288, .a=0x43, .x=0xd3, .y=0xed, .sp=0xad, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x00}, {.addr=0x6288, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6289, .a=0x43, .x=0xd3, .y=0xed, .sp=0xac, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0xd3}, {.addr=0x6288, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6288, .value=0x4d, .type=IO_READ},
        {.addr=0x6289, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0xd3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0112) {
    const struct CPU_State initial_cpu = {.pc=0x3b34, .a=0x55, .x=0xc2, .y=0x63, .sp=0x9c, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x00}, {.addr=0x3b34, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3b35, .a=0x55, .x=0xc2, .y=0x63, .sp=0x9b, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xc2}, {.addr=0x3b34, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3b34, .value=0x4d, .type=IO_READ},
        {.addr=0x3b35, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0xc2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0113) {
    const struct CPU_State initial_cpu = {.pc=0x0a27, .a=0x8f, .x=0x99, .y=0x6d, .sp=0x87, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x00}, {.addr=0x0a27, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0a28, .a=0x8f, .x=0x99, .y=0x6d, .sp=0x86, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x99}, {.addr=0x0a27, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0a27, .value=0x4d, .type=IO_READ},
        {.addr=0x0a28, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x99, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0114) {
    const struct CPU_State initial_cpu = {.pc=0x1673, .a=0x5d, .x=0x83, .y=0x0c, .sp=0xd8, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x00}, {.addr=0x1673, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1674, .a=0x5d, .x=0x83, .y=0x0c, .sp=0xd7, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x83}, {.addr=0x1673, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1673, .value=0x4d, .type=IO_READ},
        {.addr=0x1674, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x83, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0115) {
    const struct CPU_State initial_cpu = {.pc=0xce68, .a=0xa1, .x=0xe4, .y=0x11, .sp=0xb8, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0xce68, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xce69, .a=0xa1, .x=0xe4, .y=0x11, .sp=0xb7, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xe4}, {.addr=0xce68, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xce68, .value=0x4d, .type=IO_READ},
        {.addr=0xce69, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0xe4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0116) {
    const struct CPU_State initial_cpu = {.pc=0x3965, .a=0xb0, .x=0x0e, .y=0xa5, .sp=0x18, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x00}, {.addr=0x3965, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3966, .a=0xb0, .x=0x0e, .y=0xa5, .sp=0x17, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x0e}, {.addr=0x3965, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3965, .value=0x4d, .type=IO_READ},
        {.addr=0x3966, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x0e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0117) {
    const struct CPU_State initial_cpu = {.pc=0x36f6, .a=0x21, .x=0x8f, .y=0x9b, .sp=0x00, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x00}, {.addr=0x36f6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x36f7, .a=0x21, .x=0x8f, .y=0x9b, .sp=0xff, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x8f}, {.addr=0x36f6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x36f6, .value=0x4d, .type=IO_READ},
        {.addr=0x36f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0x8f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0118) {
    const struct CPU_State initial_cpu = {.pc=0xc3fd, .a=0xea, .x=0xf4, .y=0xa5, .sp=0x02, .status=0xe2};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x00}, {.addr=0xc3fd, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc3fe, .a=0xea, .x=0xf4, .y=0xa5, .sp=0x01, .status=0xe2};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xf4}, {.addr=0xc3fd, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc3fd, .value=0x4d, .type=IO_READ},
        {.addr=0xc3fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0xf4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0119) {
    const struct CPU_State initial_cpu = {.pc=0x4b0d, .a=0xc3, .x=0x5d, .y=0x12, .sp=0x5f, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0x4b0d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4b0e, .a=0xc3, .x=0x5d, .y=0x12, .sp=0x5e, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x5d}, {.addr=0x4b0d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4b0d, .value=0x4d, .type=IO_READ},
        {.addr=0x4b0e, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x5d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_011A) {
    const struct CPU_State initial_cpu = {.pc=0x9252, .a=0x5a, .x=0xd7, .y=0xa5, .sp=0xf1, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x00}, {.addr=0x9252, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9253, .a=0x5a, .x=0xd7, .y=0xa5, .sp=0xf0, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0xd7}, {.addr=0x9252, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9252, .value=0x4d, .type=IO_READ},
        {.addr=0x9253, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0xd7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_011B) {
    const struct CPU_State initial_cpu = {.pc=0x25c1, .a=0xce, .x=0x9a, .y=0x95, .sp=0xe4, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0x25c1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x25c2, .a=0xce, .x=0x9a, .y=0x95, .sp=0xe3, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x9a}, {.addr=0x25c1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x25c1, .value=0x4d, .type=IO_READ},
        {.addr=0x25c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x9a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_011C) {
    const struct CPU_State initial_cpu = {.pc=0x90cf, .a=0x58, .x=0xd2, .y=0x1f, .sp=0xa7, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x00}, {.addr=0x90cf, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x90d0, .a=0x58, .x=0xd2, .y=0x1f, .sp=0xa6, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0xd2}, {.addr=0x90cf, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x90cf, .value=0x4d, .type=IO_READ},
        {.addr=0x90d0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0xd2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_011D) {
    const struct CPU_State initial_cpu = {.pc=0x28ad, .a=0x43, .x=0x20, .y=0xb3, .sp=0x46, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0x28ad, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x28ae, .a=0x43, .x=0x20, .y=0xb3, .sp=0x45, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x20}, {.addr=0x28ad, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x28ad, .value=0x4d, .type=IO_READ},
        {.addr=0x28ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_011E) {
    const struct CPU_State initial_cpu = {.pc=0x4152, .a=0xac, .x=0xad, .y=0xf7, .sp=0x93, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x00}, {.addr=0x4152, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4153, .a=0xac, .x=0xad, .y=0xf7, .sp=0x92, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0xad}, {.addr=0x4152, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4152, .value=0x4d, .type=IO_READ},
        {.addr=0x4153, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0xad, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_011F) {
    const struct CPU_State initial_cpu = {.pc=0x6048, .a=0x92, .x=0x9c, .y=0x6d, .sp=0xdf, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0x6048, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6049, .a=0x92, .x=0x9c, .y=0x6d, .sp=0xde, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x9c}, {.addr=0x6048, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6048, .value=0x4d, .type=IO_READ},
        {.addr=0x6049, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x9c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0120) {
    const struct CPU_State initial_cpu = {.pc=0xcebd, .a=0x67, .x=0x8d, .y=0xfe, .sp=0x49, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x00}, {.addr=0xcebd, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcebe, .a=0x67, .x=0x8d, .y=0xfe, .sp=0x48, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x8d}, {.addr=0xcebd, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcebd, .value=0x4d, .type=IO_READ},
        {.addr=0xcebe, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0x8d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0121) {
    const struct CPU_State initial_cpu = {.pc=0xb588, .a=0x93, .x=0xbe, .y=0x6d, .sp=0x7f, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x00}, {.addr=0xb588, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb589, .a=0x93, .x=0xbe, .y=0x6d, .sp=0x7e, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0xbe}, {.addr=0xb588, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb588, .value=0x4d, .type=IO_READ},
        {.addr=0xb589, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0xbe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0122) {
    const struct CPU_State initial_cpu = {.pc=0x5271, .a=0x94, .x=0x76, .y=0x09, .sp=0x3c, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0x5271, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5272, .a=0x94, .x=0x76, .y=0x09, .sp=0x3b, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x76}, {.addr=0x5271, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5271, .value=0x4d, .type=IO_READ},
        {.addr=0x5272, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x76, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0123) {
    const struct CPU_State initial_cpu = {.pc=0xd1af, .a=0xe3, .x=0x4a, .y=0x70, .sp=0x22, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0xd1af, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd1b0, .a=0xe3, .x=0x4a, .y=0x70, .sp=0x21, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x4a}, {.addr=0xd1af, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd1af, .value=0x4d, .type=IO_READ},
        {.addr=0xd1b0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x4a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0124) {
    const struct CPU_State initial_cpu = {.pc=0x7d2e, .a=0x95, .x=0x68, .y=0x43, .sp=0x82, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0x7d2e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7d2f, .a=0x95, .x=0x68, .y=0x43, .sp=0x81, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x68}, {.addr=0x7d2e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7d2e, .value=0x4d, .type=IO_READ},
        {.addr=0x7d2f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0125) {
    const struct CPU_State initial_cpu = {.pc=0xe6ac, .a=0x2d, .x=0x65, .y=0x10, .sp=0x51, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x00}, {.addr=0xe6ac, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe6ad, .a=0x2d, .x=0x65, .y=0x10, .sp=0x50, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0x65}, {.addr=0xe6ac, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe6ac, .value=0x4d, .type=IO_READ},
        {.addr=0xe6ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0x65, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0126) {
    const struct CPU_State initial_cpu = {.pc=0x1bc3, .a=0x25, .x=0x1d, .y=0xfe, .sp=0xeb, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0x1bc3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1bc4, .a=0x25, .x=0x1d, .y=0xfe, .sp=0xea, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x1d}, {.addr=0x1bc3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1bc3, .value=0x4d, .type=IO_READ},
        {.addr=0x1bc4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x1d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0127) {
    const struct CPU_State initial_cpu = {.pc=0xd58e, .a=0x55, .x=0xbc, .y=0x3b, .sp=0xdf, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0xd58e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd58f, .a=0x55, .x=0xbc, .y=0x3b, .sp=0xde, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xbc}, {.addr=0xd58e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd58e, .value=0x4d, .type=IO_READ},
        {.addr=0xd58f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0xbc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0128) {
    const struct CPU_State initial_cpu = {.pc=0x2e0c, .a=0x45, .x=0x6a, .y=0xf4, .sp=0x98, .status=0xbf};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0x2e0c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2e0d, .a=0x45, .x=0x6a, .y=0xf4, .sp=0x97, .status=0xbf};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x6a}, {.addr=0x2e0c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2e0c, .value=0x4d, .type=IO_READ},
        {.addr=0x2e0d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x6a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0129) {
    const struct CPU_State initial_cpu = {.pc=0xffcd, .a=0x15, .x=0x86, .y=0x37, .sp=0x8a, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x00}, {.addr=0xffcd, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xffce, .a=0x15, .x=0x86, .y=0x37, .sp=0x89, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0x86}, {.addr=0xffcd, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xffcd, .value=0x4d, .type=IO_READ},
        {.addr=0xffce, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0x86, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_012A) {
    const struct CPU_State initial_cpu = {.pc=0x9d4e, .a=0x97, .x=0xcd, .y=0xcd, .sp=0x02, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x00}, {.addr=0x9d4e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9d4f, .a=0x97, .x=0xcd, .y=0xcd, .sp=0x01, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xcd}, {.addr=0x9d4e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9d4e, .value=0x4d, .type=IO_READ},
        {.addr=0x9d4f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0xcd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_012B) {
    const struct CPU_State initial_cpu = {.pc=0x26d1, .a=0x17, .x=0x48, .y=0xa2, .sp=0xf1, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x00}, {.addr=0x26d1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x26d2, .a=0x17, .x=0x48, .y=0xa2, .sp=0xf0, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x48}, {.addr=0x26d1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x26d1, .value=0x4d, .type=IO_READ},
        {.addr=0x26d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x48, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_012C) {
    const struct CPU_State initial_cpu = {.pc=0xbe70, .a=0x6c, .x=0xca, .y=0x52, .sp=0x72, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x00}, {.addr=0xbe70, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbe71, .a=0x6c, .x=0xca, .y=0x52, .sp=0x71, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xca}, {.addr=0xbe70, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbe70, .value=0x4d, .type=IO_READ},
        {.addr=0xbe71, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_012D) {
    const struct CPU_State initial_cpu = {.pc=0xf09b, .a=0xfa, .x=0xe0, .y=0x11, .sp=0x12, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0xf09b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf09c, .a=0xfa, .x=0xe0, .y=0x11, .sp=0x11, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xe0}, {.addr=0xf09b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf09b, .value=0x4d, .type=IO_READ},
        {.addr=0xf09c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0xe0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_012E) {
    const struct CPU_State initial_cpu = {.pc=0x5d18, .a=0x03, .x=0xb1, .y=0x43, .sp=0x57, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0x5d18, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5d19, .a=0x03, .x=0xb1, .y=0x43, .sp=0x56, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0xb1}, {.addr=0x5d18, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5d18, .value=0x4d, .type=IO_READ},
        {.addr=0x5d19, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0xb1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_012F) {
    const struct CPU_State initial_cpu = {.pc=0xa5a1, .a=0x0b, .x=0x7c, .y=0x2d, .sp=0xf8, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x00}, {.addr=0xa5a1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa5a2, .a=0x0b, .x=0x7c, .y=0x2d, .sp=0xf7, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x7c}, {.addr=0xa5a1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa5a1, .value=0x4d, .type=IO_READ},
        {.addr=0xa5a2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0x7c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0130) {
    const struct CPU_State initial_cpu = {.pc=0xd0c0, .a=0x47, .x=0x25, .y=0xfb, .sp=0x94, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0xd0c0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd0c1, .a=0x47, .x=0x25, .y=0xfb, .sp=0x93, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x25}, {.addr=0xd0c0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd0c0, .value=0x4d, .type=IO_READ},
        {.addr=0xd0c1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x25, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0131) {
    const struct CPU_State initial_cpu = {.pc=0x9d74, .a=0xaa, .x=0x72, .y=0x26, .sp=0xe6, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x00}, {.addr=0x9d74, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9d75, .a=0xaa, .x=0x72, .y=0x26, .sp=0xe5, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x72}, {.addr=0x9d74, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9d74, .value=0x4d, .type=IO_READ},
        {.addr=0x9d75, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x72, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0132) {
    const struct CPU_State initial_cpu = {.pc=0x3c99, .a=0x7b, .x=0x3b, .y=0xc2, .sp=0x7e, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x00}, {.addr=0x3c99, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3c9a, .a=0x7b, .x=0x3b, .y=0xc2, .sp=0x7d, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x3b}, {.addr=0x3c99, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3c99, .value=0x4d, .type=IO_READ},
        {.addr=0x3c9a, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0x3b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0133) {
    const struct CPU_State initial_cpu = {.pc=0xa39f, .a=0x6b, .x=0x59, .y=0xff, .sp=0x4a, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x00}, {.addr=0xa39f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa3a0, .a=0x6b, .x=0x59, .y=0xff, .sp=0x49, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x59}, {.addr=0xa39f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa39f, .value=0x4d, .type=IO_READ},
        {.addr=0xa3a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x59, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0134) {
    const struct CPU_State initial_cpu = {.pc=0xa74b, .a=0xe9, .x=0xbf, .y=0x73, .sp=0xe8, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x00}, {.addr=0xa74b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa74c, .a=0xe9, .x=0xbf, .y=0x73, .sp=0xe7, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xbf}, {.addr=0xa74b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa74b, .value=0x4d, .type=IO_READ},
        {.addr=0xa74c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0xbf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0135) {
    const struct CPU_State initial_cpu = {.pc=0x98b1, .a=0xc1, .x=0x4b, .y=0xe1, .sp=0x34, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x00}, {.addr=0x98b1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x98b2, .a=0xc1, .x=0x4b, .y=0xe1, .sp=0x33, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x4b}, {.addr=0x98b1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x98b1, .value=0x4d, .type=IO_READ},
        {.addr=0x98b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0x4b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0135", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0136) {
    const struct CPU_State initial_cpu = {.pc=0x678f, .a=0x67, .x=0xae, .y=0x7f, .sp=0x88, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x00}, {.addr=0x678f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6790, .a=0x67, .x=0xae, .y=0x7f, .sp=0x87, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0xae}, {.addr=0x678f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x678f, .value=0x4d, .type=IO_READ},
        {.addr=0x6790, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0137) {
    const struct CPU_State initial_cpu = {.pc=0xaa0f, .a=0x82, .x=0xd3, .y=0xd5, .sp=0x58, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x00}, {.addr=0xaa0f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xaa10, .a=0x82, .x=0xd3, .y=0xd5, .sp=0x57, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0xd3}, {.addr=0xaa0f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xaa0f, .value=0x4d, .type=IO_READ},
        {.addr=0xaa10, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0xd3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0138) {
    const struct CPU_State initial_cpu = {.pc=0xcfad, .a=0x45, .x=0xae, .y=0x36, .sp=0xfa, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x00}, {.addr=0xcfad, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcfae, .a=0x45, .x=0xae, .y=0x36, .sp=0xf9, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0xae}, {.addr=0xcfad, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcfad, .value=0x4d, .type=IO_READ},
        {.addr=0xcfae, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0139) {
    const struct CPU_State initial_cpu = {.pc=0x0f7e, .a=0xb3, .x=0x6e, .y=0xc7, .sp=0xb5, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x00}, {.addr=0x0f7e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0f7f, .a=0xb3, .x=0x6e, .y=0xc7, .sp=0xb4, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0x6e}, {.addr=0x0f7e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0f7e, .value=0x4d, .type=IO_READ},
        {.addr=0x0f7f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0x6e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_013A) {
    const struct CPU_State initial_cpu = {.pc=0xece3, .a=0x6e, .x=0xd2, .y=0x20, .sp=0x0e, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x00}, {.addr=0xece3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xece4, .a=0x6e, .x=0xd2, .y=0x20, .sp=0x0d, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0xd2}, {.addr=0xece3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xece3, .value=0x4d, .type=IO_READ},
        {.addr=0xece4, .value=DUMMY, .type=IO_READ},
        {.addr=0x010e, .value=0xd2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_013B) {
    const struct CPU_State initial_cpu = {.pc=0xf764, .a=0x8a, .x=0xe1, .y=0x5b, .sp=0x22, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0xf764, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf765, .a=0x8a, .x=0xe1, .y=0x5b, .sp=0x21, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0xe1}, {.addr=0xf764, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf764, .value=0x4d, .type=IO_READ},
        {.addr=0xf765, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0xe1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_013C) {
    const struct CPU_State initial_cpu = {.pc=0x363c, .a=0xfc, .x=0xe9, .y=0xa8, .sp=0x2e, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x363c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x363d, .a=0xfc, .x=0xe9, .y=0xa8, .sp=0x2d, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xe9}, {.addr=0x363c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x363c, .value=0x4d, .type=IO_READ},
        {.addr=0x363d, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_013D) {
    const struct CPU_State initial_cpu = {.pc=0xdd29, .a=0xb6, .x=0x15, .y=0x3f, .sp=0xf8, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x00}, {.addr=0xdd29, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xdd2a, .a=0xb6, .x=0x15, .y=0x3f, .sp=0xf7, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x15}, {.addr=0xdd29, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xdd29, .value=0x4d, .type=IO_READ},
        {.addr=0xdd2a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0x15, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_013E) {
    const struct CPU_State initial_cpu = {.pc=0xc489, .a=0x6a, .x=0xfd, .y=0x30, .sp=0xd3, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0xc489, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc48a, .a=0x6a, .x=0xfd, .y=0x30, .sp=0xd2, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0xfd}, {.addr=0xc489, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc489, .value=0x4d, .type=IO_READ},
        {.addr=0xc48a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0xfd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_013F) {
    const struct CPU_State initial_cpu = {.pc=0xb8c3, .a=0xc6, .x=0x71, .y=0x6e, .sp=0xb1, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0xb8c3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb8c4, .a=0xc6, .x=0x71, .y=0x6e, .sp=0xb0, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x71}, {.addr=0xb8c3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb8c3, .value=0x4d, .type=IO_READ},
        {.addr=0xb8c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x71, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0140) {
    const struct CPU_State initial_cpu = {.pc=0x0a57, .a=0x4e, .x=0x1c, .y=0x01, .sp=0xf2, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01f2, .value=0x00}, {.addr=0x0a57, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0a58, .a=0x4e, .x=0x1c, .y=0x01, .sp=0xf1, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x01f2, .value=0x1c}, {.addr=0x0a57, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0a57, .value=0x4d, .type=IO_READ},
        {.addr=0x0a58, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f2, .value=0x1c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0141) {
    const struct CPU_State initial_cpu = {.pc=0x1cb7, .a=0x22, .x=0xc5, .y=0x74, .sp=0xef, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0x1cb7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1cb8, .a=0x22, .x=0xc5, .y=0x74, .sp=0xee, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xc5}, {.addr=0x1cb7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1cb7, .value=0x4d, .type=IO_READ},
        {.addr=0x1cb8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0xc5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0142) {
    const struct CPU_State initial_cpu = {.pc=0x8588, .a=0x92, .x=0xb5, .y=0xc8, .sp=0x52, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x00}, {.addr=0x8588, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8589, .a=0x92, .x=0xb5, .y=0xc8, .sp=0x51, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0xb5}, {.addr=0x8588, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8588, .value=0x4d, .type=IO_READ},
        {.addr=0x8589, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0xb5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0143) {
    const struct CPU_State initial_cpu = {.pc=0x768c, .a=0x7f, .x=0x0e, .y=0x24, .sp=0xdb, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x00}, {.addr=0x768c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x768d, .a=0x7f, .x=0x0e, .y=0x24, .sp=0xda, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x0e}, {.addr=0x768c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x768c, .value=0x4d, .type=IO_READ},
        {.addr=0x768d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x0e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0144) {
    const struct CPU_State initial_cpu = {.pc=0x4f4a, .a=0xd3, .x=0x2c, .y=0x87, .sp=0x0c, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x00}, {.addr=0x4f4a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4f4b, .a=0xd3, .x=0x2c, .y=0x87, .sp=0x0b, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x2c}, {.addr=0x4f4a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4f4a, .value=0x4d, .type=IO_READ},
        {.addr=0x4f4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0144", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0145) {
    const struct CPU_State initial_cpu = {.pc=0xda58, .a=0x84, .x=0x9a, .y=0xcf, .sp=0xc0, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x00}, {.addr=0xda58, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xda59, .a=0x84, .x=0x9a, .y=0xcf, .sp=0xbf, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x9a}, {.addr=0xda58, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xda58, .value=0x4d, .type=IO_READ},
        {.addr=0xda59, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0x9a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0145", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0146) {
    const struct CPU_State initial_cpu = {.pc=0x1128, .a=0x72, .x=0x5d, .y=0x13, .sp=0xe8, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x00}, {.addr=0x1128, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1129, .a=0x72, .x=0x5d, .y=0x13, .sp=0xe7, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0x5d}, {.addr=0x1128, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1128, .value=0x4d, .type=IO_READ},
        {.addr=0x1129, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0x5d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0146", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0147) {
    const struct CPU_State initial_cpu = {.pc=0xb318, .a=0x9f, .x=0x42, .y=0x0e, .sp=0x05, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x00}, {.addr=0xb318, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb319, .a=0x9f, .x=0x42, .y=0x0e, .sp=0x04, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x42}, {.addr=0xb318, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb318, .value=0x4d, .type=IO_READ},
        {.addr=0xb319, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x42, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0148) {
    const struct CPU_State initial_cpu = {.pc=0xb731, .a=0x96, .x=0x8b, .y=0xb9, .sp=0xf5, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01f5, .value=0x00}, {.addr=0xb731, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb732, .a=0x96, .x=0x8b, .y=0xb9, .sp=0xf4, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01f5, .value=0x8b}, {.addr=0xb731, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb731, .value=0x4d, .type=IO_READ},
        {.addr=0xb732, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f5, .value=0x8b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0149) {
    const struct CPU_State initial_cpu = {.pc=0x0c3b, .a=0x44, .x=0x46, .y=0xd3, .sp=0x56, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x00}, {.addr=0x0c3b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0c3c, .a=0x44, .x=0x46, .y=0xd3, .sp=0x55, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x46}, {.addr=0x0c3b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0c3b, .value=0x4d, .type=IO_READ},
        {.addr=0x0c3c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x46, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_014A) {
    const struct CPU_State initial_cpu = {.pc=0xe25e, .a=0xad, .x=0x69, .y=0xb2, .sp=0x22, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0xe25e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe25f, .a=0xad, .x=0x69, .y=0xb2, .sp=0x21, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x69}, {.addr=0xe25e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe25e, .value=0x4d, .type=IO_READ},
        {.addr=0xe25f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x69, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_014B) {
    const struct CPU_State initial_cpu = {.pc=0x2ec1, .a=0x41, .x=0x74, .y=0xd6, .sp=0xb6, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0x2ec1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2ec2, .a=0x41, .x=0x74, .y=0xd6, .sp=0xb5, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x74}, {.addr=0x2ec1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2ec1, .value=0x4d, .type=IO_READ},
        {.addr=0x2ec2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x74, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_014C) {
    const struct CPU_State initial_cpu = {.pc=0x2994, .a=0x0d, .x=0x35, .y=0x95, .sp=0x2f, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x00}, {.addr=0x2994, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2995, .a=0x0d, .x=0x35, .y=0x95, .sp=0x2e, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x35}, {.addr=0x2994, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2994, .value=0x4d, .type=IO_READ},
        {.addr=0x2995, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x35, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_014D) {
    const struct CPU_State initial_cpu = {.pc=0x409d, .a=0x48, .x=0xe7, .y=0xc2, .sp=0x05, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x00}, {.addr=0x409d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x409e, .a=0x48, .x=0xe7, .y=0xc2, .sp=0x04, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0xe7}, {.addr=0x409d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x409d, .value=0x4d, .type=IO_READ},
        {.addr=0x409e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0xe7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_014E) {
    const struct CPU_State initial_cpu = {.pc=0x9f80, .a=0x5a, .x=0x5f, .y=0x96, .sp=0xba, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x00}, {.addr=0x9f80, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9f81, .a=0x5a, .x=0x5f, .y=0x96, .sp=0xb9, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x5f}, {.addr=0x9f80, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9f80, .value=0x4d, .type=IO_READ},
        {.addr=0x9f81, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0x5f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_014F) {
    const struct CPU_State initial_cpu = {.pc=0x748b, .a=0x7b, .x=0xc3, .y=0x0d, .sp=0x8c, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x00}, {.addr=0x748b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x748c, .a=0x7b, .x=0xc3, .y=0x0d, .sp=0x8b, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xc3}, {.addr=0x748b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x748b, .value=0x4d, .type=IO_READ},
        {.addr=0x748c, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0xc3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0150) {
    const struct CPU_State initial_cpu = {.pc=0x8e78, .a=0x3a, .x=0x8a, .y=0x11, .sp=0xf8, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x00}, {.addr=0x8e78, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8e79, .a=0x3a, .x=0x8a, .y=0x11, .sp=0xf7, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0x8a}, {.addr=0x8e78, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8e78, .value=0x4d, .type=IO_READ},
        {.addr=0x8e79, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0x8a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0151) {
    const struct CPU_State initial_cpu = {.pc=0x7311, .a=0xc5, .x=0xd5, .y=0xd5, .sp=0x96, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0x7311, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7312, .a=0xc5, .x=0xd5, .y=0xd5, .sp=0x95, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0xd5}, {.addr=0x7311, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7311, .value=0x4d, .type=IO_READ},
        {.addr=0x7312, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0xd5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0152) {
    const struct CPU_State initial_cpu = {.pc=0xb52d, .a=0x4f, .x=0x76, .y=0xa6, .sp=0x97, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0197, .value=0x00}, {.addr=0xb52d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb52e, .a=0x4f, .x=0x76, .y=0xa6, .sp=0x96, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0197, .value=0x76}, {.addr=0xb52d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb52d, .value=0x4d, .type=IO_READ},
        {.addr=0xb52e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0197, .value=0x76, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0153) {
    const struct CPU_State initial_cpu = {.pc=0x3fec, .a=0xb5, .x=0x25, .y=0x70, .sp=0x54, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x00}, {.addr=0x3fec, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3fed, .a=0xb5, .x=0x25, .y=0x70, .sp=0x53, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x25}, {.addr=0x3fec, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3fec, .value=0x4d, .type=IO_READ},
        {.addr=0x3fed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0x25, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0154) {
    const struct CPU_State initial_cpu = {.pc=0x9f1f, .a=0xf9, .x=0xf4, .y=0x71, .sp=0x1e, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x011e, .value=0x00}, {.addr=0x9f1f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9f20, .a=0xf9, .x=0xf4, .y=0x71, .sp=0x1d, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x011e, .value=0xf4}, {.addr=0x9f1f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9f1f, .value=0x4d, .type=IO_READ},
        {.addr=0x9f20, .value=DUMMY, .type=IO_READ},
        {.addr=0x011e, .value=0xf4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0155) {
    const struct CPU_State initial_cpu = {.pc=0x309b, .a=0x9d, .x=0x75, .y=0xe4, .sp=0x4b, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x00}, {.addr=0x309b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x309c, .a=0x9d, .x=0x75, .y=0xe4, .sp=0x4a, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0x75}, {.addr=0x309b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x309b, .value=0x4d, .type=IO_READ},
        {.addr=0x309c, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0x75, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0156) {
    const struct CPU_State initial_cpu = {.pc=0x7b4c, .a=0x6e, .x=0x26, .y=0x56, .sp=0xdf, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0x7b4c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7b4d, .a=0x6e, .x=0x26, .y=0x56, .sp=0xde, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x26}, {.addr=0x7b4c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7b4c, .value=0x4d, .type=IO_READ},
        {.addr=0x7b4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0157) {
    const struct CPU_State initial_cpu = {.pc=0x54eb, .a=0x2a, .x=0xa1, .y=0xd2, .sp=0xd3, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0x54eb, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x54ec, .a=0x2a, .x=0xa1, .y=0xd2, .sp=0xd2, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0xa1}, {.addr=0x54eb, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x54eb, .value=0x4d, .type=IO_READ},
        {.addr=0x54ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0xa1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0158) {
    const struct CPU_State initial_cpu = {.pc=0x2c17, .a=0x3e, .x=0x7b, .y=0x6f, .sp=0x82, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0x2c17, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2c18, .a=0x3e, .x=0x7b, .y=0x6f, .sp=0x81, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0x7b}, {.addr=0x2c17, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2c17, .value=0x4d, .type=IO_READ},
        {.addr=0x2c18, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0x7b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0159) {
    const struct CPU_State initial_cpu = {.pc=0xd874, .a=0x9f, .x=0xa7, .y=0xfc, .sp=0x8f, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0xd874, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd875, .a=0x9f, .x=0xa7, .y=0xfc, .sp=0x8e, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0xa7}, {.addr=0xd874, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd874, .value=0x4d, .type=IO_READ},
        {.addr=0xd875, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0xa7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_015A) {
    const struct CPU_State initial_cpu = {.pc=0x760d, .a=0x55, .x=0x1d, .y=0x0b, .sp=0x81, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x00}, {.addr=0x760d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x760e, .a=0x55, .x=0x1d, .y=0x0b, .sp=0x80, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x1d}, {.addr=0x760d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x760d, .value=0x4d, .type=IO_READ},
        {.addr=0x760e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0x1d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_015B) {
    const struct CPU_State initial_cpu = {.pc=0x1db6, .a=0xbc, .x=0x09, .y=0xc7, .sp=0x6a, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x00}, {.addr=0x1db6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1db7, .a=0xbc, .x=0x09, .y=0xc7, .sp=0x69, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0x09}, {.addr=0x1db6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1db6, .value=0x4d, .type=IO_READ},
        {.addr=0x1db7, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0x09, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_015C) {
    const struct CPU_State initial_cpu = {.pc=0x99e8, .a=0xd7, .x=0x89, .y=0xbf, .sp=0xe1, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x00}, {.addr=0x99e8, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x99e9, .a=0xd7, .x=0x89, .y=0xbf, .sp=0xe0, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x89}, {.addr=0x99e8, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x99e8, .value=0x4d, .type=IO_READ},
        {.addr=0x99e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x89, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_015D) {
    const struct CPU_State initial_cpu = {.pc=0x2a37, .a=0xbe, .x=0x68, .y=0x4a, .sp=0xda, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x00}, {.addr=0x2a37, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2a38, .a=0xbe, .x=0x68, .y=0x4a, .sp=0xd9, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x68}, {.addr=0x2a37, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2a37, .value=0x4d, .type=IO_READ},
        {.addr=0x2a38, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_015E) {
    const struct CPU_State initial_cpu = {.pc=0xc0d2, .a=0xc3, .x=0x98, .y=0x86, .sp=0x26, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x00}, {.addr=0xc0d2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc0d3, .a=0xc3, .x=0x98, .y=0x86, .sp=0x25, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x98}, {.addr=0xc0d2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc0d2, .value=0x4d, .type=IO_READ},
        {.addr=0xc0d3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0x98, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_015F) {
    const struct CPU_State initial_cpu = {.pc=0x3eaf, .a=0x9d, .x=0x11, .y=0x90, .sp=0x4e, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0x3eaf, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3eb0, .a=0x9d, .x=0x11, .y=0x90, .sp=0x4d, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x11}, {.addr=0x3eaf, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3eaf, .value=0x4d, .type=IO_READ},
        {.addr=0x3eb0, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x11, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0160) {
    const struct CPU_State initial_cpu = {.pc=0xb566, .a=0xca, .x=0x18, .y=0x88, .sp=0x4d, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x014d, .value=0x00}, {.addr=0xb566, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb567, .a=0xca, .x=0x18, .y=0x88, .sp=0x4c, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x014d, .value=0x18}, {.addr=0xb566, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb566, .value=0x4d, .type=IO_READ},
        {.addr=0xb567, .value=DUMMY, .type=IO_READ},
        {.addr=0x014d, .value=0x18, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0161) {
    const struct CPU_State initial_cpu = {.pc=0x4d97, .a=0xc6, .x=0xc9, .y=0x87, .sp=0x52, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0152, .value=0x00}, {.addr=0x4d97, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4d98, .a=0xc6, .x=0xc9, .y=0x87, .sp=0x51, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0152, .value=0xc9}, {.addr=0x4d97, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4d97, .value=0x4d, .type=IO_READ},
        {.addr=0x4d98, .value=DUMMY, .type=IO_READ},
        {.addr=0x0152, .value=0xc9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0162) {
    const struct CPU_State initial_cpu = {.pc=0xb5b0, .a=0xad, .x=0x48, .y=0xf7, .sp=0xf3, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x00}, {.addr=0xb5b0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb5b1, .a=0xad, .x=0x48, .y=0xf7, .sp=0xf2, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x48}, {.addr=0xb5b0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb5b0, .value=0x4d, .type=IO_READ},
        {.addr=0xb5b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0x48, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0163) {
    const struct CPU_State initial_cpu = {.pc=0x2b19, .a=0xbb, .x=0xd8, .y=0x17, .sp=0xb6, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0x2b19, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2b1a, .a=0xbb, .x=0xd8, .y=0x17, .sp=0xb5, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0xd8}, {.addr=0x2b19, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2b19, .value=0x4d, .type=IO_READ},
        {.addr=0x2b1a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0xd8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0164) {
    const struct CPU_State initial_cpu = {.pc=0xa8f6, .a=0x87, .x=0xf3, .y=0xa4, .sp=0x9c, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x019c, .value=0x00}, {.addr=0xa8f6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa8f7, .a=0x87, .x=0xf3, .y=0xa4, .sp=0x9b, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x019c, .value=0xf3}, {.addr=0xa8f6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa8f6, .value=0x4d, .type=IO_READ},
        {.addr=0xa8f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x019c, .value=0xf3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0165) {
    const struct CPU_State initial_cpu = {.pc=0x39e0, .a=0x77, .x=0x32, .y=0xd8, .sp=0xe9, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x00}, {.addr=0x39e0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x39e1, .a=0x77, .x=0x32, .y=0xd8, .sp=0xe8, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x32}, {.addr=0x39e0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x39e0, .value=0x4d, .type=IO_READ},
        {.addr=0x39e1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0x32, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0166) {
    const struct CPU_State initial_cpu = {.pc=0xd3e2, .a=0x18, .x=0x03, .y=0x40, .sp=0x56, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x00}, {.addr=0xd3e2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd3e3, .a=0x18, .x=0x03, .y=0x40, .sp=0x55, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x03}, {.addr=0xd3e2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd3e2, .value=0x4d, .type=IO_READ},
        {.addr=0xd3e3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x03, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0167) {
    const struct CPU_State initial_cpu = {.pc=0xaa18, .a=0xce, .x=0x18, .y=0xd2, .sp=0x31, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x00}, {.addr=0xaa18, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xaa19, .a=0xce, .x=0x18, .y=0xd2, .sp=0x30, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x18}, {.addr=0xaa18, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xaa18, .value=0x4d, .type=IO_READ},
        {.addr=0xaa19, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x18, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0168) {
    const struct CPU_State initial_cpu = {.pc=0x17bb, .a=0x00, .x=0x6b, .y=0x1e, .sp=0x28, .status=0x55};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x00}, {.addr=0x17bb, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x17bc, .a=0x00, .x=0x6b, .y=0x1e, .sp=0x27, .status=0x55};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0x6b}, {.addr=0x17bb, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x17bb, .value=0x4d, .type=IO_READ},
        {.addr=0x17bc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0169) {
    const struct CPU_State initial_cpu = {.pc=0xbbf3, .a=0x83, .x=0x43, .y=0xcb, .sp=0x88, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x00}, {.addr=0xbbf3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbbf4, .a=0x83, .x=0x43, .y=0xcb, .sp=0x87, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x43}, {.addr=0xbbf3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbbf3, .value=0x4d, .type=IO_READ},
        {.addr=0xbbf4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0x43, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_016A) {
    const struct CPU_State initial_cpu = {.pc=0x57fa, .a=0x0a, .x=0xc7, .y=0xf7, .sp=0x28, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0128, .value=0x00}, {.addr=0x57fa, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x57fb, .a=0x0a, .x=0xc7, .y=0xf7, .sp=0x27, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0128, .value=0xc7}, {.addr=0x57fa, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x57fa, .value=0x4d, .type=IO_READ},
        {.addr=0x57fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0128, .value=0xc7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_016B) {
    const struct CPU_State initial_cpu = {.pc=0x4dda, .a=0xa5, .x=0x08, .y=0xb5, .sp=0x75, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x00}, {.addr=0x4dda, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4ddb, .a=0xa5, .x=0x08, .y=0xb5, .sp=0x74, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x08}, {.addr=0x4dda, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4dda, .value=0x4d, .type=IO_READ},
        {.addr=0x4ddb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0x08, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_016C) {
    const struct CPU_State initial_cpu = {.pc=0xbc46, .a=0xbd, .x=0xef, .y=0xc2, .sp=0x8f, .status=0x3a};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0xbc46, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbc47, .a=0xbd, .x=0xef, .y=0xc2, .sp=0x8e, .status=0x3a};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0xef}, {.addr=0xbc46, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbc46, .value=0x4d, .type=IO_READ},
        {.addr=0xbc47, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0xef, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_016D) {
    const struct CPU_State initial_cpu = {.pc=0x9ff6, .a=0x7c, .x=0x58, .y=0xbb, .sp=0x16, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0x9ff6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9ff7, .a=0x7c, .x=0x58, .y=0xbb, .sp=0x15, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x58}, {.addr=0x9ff6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9ff6, .value=0x4d, .type=IO_READ},
        {.addr=0x9ff7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0x58, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_016E) {
    const struct CPU_State initial_cpu = {.pc=0x761c, .a=0xd1, .x=0xe1, .y=0x97, .sp=0x5a, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x00}, {.addr=0x761c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x761d, .a=0xd1, .x=0xe1, .y=0x97, .sp=0x59, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xe1}, {.addr=0x761c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x761c, .value=0x4d, .type=IO_READ},
        {.addr=0x761d, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0xe1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_016F) {
    const struct CPU_State initial_cpu = {.pc=0x731d, .a=0xd4, .x=0x23, .y=0x1d, .sp=0x06, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0x731d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x731e, .a=0xd4, .x=0x23, .y=0x1d, .sp=0x05, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x23}, {.addr=0x731d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x731d, .value=0x4d, .type=IO_READ},
        {.addr=0x731e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x23, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0170) {
    const struct CPU_State initial_cpu = {.pc=0x4a87, .a=0x08, .x=0x27, .y=0x9a, .sp=0xd1, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0x4a87, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4a88, .a=0x08, .x=0x27, .y=0x9a, .sp=0xd0, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x27}, {.addr=0x4a87, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4a87, .value=0x4d, .type=IO_READ},
        {.addr=0x4a88, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0x27, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0171) {
    const struct CPU_State initial_cpu = {.pc=0xab3b, .a=0x96, .x=0xd9, .y=0x13, .sp=0xbc, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x00}, {.addr=0xab3b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xab3c, .a=0x96, .x=0xd9, .y=0x13, .sp=0xbb, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0xd9}, {.addr=0xab3b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xab3b, .value=0x4d, .type=IO_READ},
        {.addr=0xab3c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0xd9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0172) {
    const struct CPU_State initial_cpu = {.pc=0xc9ee, .a=0x29, .x=0xb2, .y=0x68, .sp=0x46, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0xc9ee, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc9ef, .a=0x29, .x=0xb2, .y=0x68, .sp=0x45, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0xb2}, {.addr=0xc9ee, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc9ee, .value=0x4d, .type=IO_READ},
        {.addr=0xc9ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0173) {
    const struct CPU_State initial_cpu = {.pc=0xfd19, .a=0xd8, .x=0x11, .y=0xe2, .sp=0x29, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x00}, {.addr=0xfd19, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xfd1a, .a=0xd8, .x=0x11, .y=0xe2, .sp=0x28, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x11}, {.addr=0xfd19, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xfd19, .value=0x4d, .type=IO_READ},
        {.addr=0xfd1a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0x11, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0174) {
    const struct CPU_State initial_cpu = {.pc=0xdf9d, .a=0xc0, .x=0x19, .y=0xe4, .sp=0x64, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x00}, {.addr=0xdf9d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xdf9e, .a=0xc0, .x=0x19, .y=0xe4, .sp=0x63, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x19}, {.addr=0xdf9d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xdf9d, .value=0x4d, .type=IO_READ},
        {.addr=0xdf9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x19, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0175) {
    const struct CPU_State initial_cpu = {.pc=0xa6ac, .a=0xf7, .x=0x7e, .y=0x6f, .sp=0x0b, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x00}, {.addr=0xa6ac, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa6ad, .a=0xf7, .x=0x7e, .y=0x6f, .sp=0x0a, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0x7e}, {.addr=0xa6ac, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa6ac, .value=0x4d, .type=IO_READ},
        {.addr=0xa6ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0x7e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0176) {
    const struct CPU_State initial_cpu = {.pc=0x8788, .a=0x85, .x=0x26, .y=0x8b, .sp=0xb6, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0x8788, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8789, .a=0x85, .x=0x26, .y=0x8b, .sp=0xb5, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x26}, {.addr=0x8788, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8788, .value=0x4d, .type=IO_READ},
        {.addr=0x8789, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0177) {
    const struct CPU_State initial_cpu = {.pc=0xc875, .a=0xc2, .x=0x19, .y=0x2f, .sp=0x39, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x00}, {.addr=0xc875, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc876, .a=0xc2, .x=0x19, .y=0x2f, .sp=0x38, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x19}, {.addr=0xc875, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc875, .value=0x4d, .type=IO_READ},
        {.addr=0xc876, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0x19, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0178) {
    const struct CPU_State initial_cpu = {.pc=0x33d1, .a=0xaa, .x=0x18, .y=0x1f, .sp=0x8c, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x00}, {.addr=0x33d1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x33d2, .a=0xaa, .x=0x18, .y=0x1f, .sp=0x8b, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0x18}, {.addr=0x33d1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x33d1, .value=0x4d, .type=IO_READ},
        {.addr=0x33d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0x18, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0179) {
    const struct CPU_State initial_cpu = {.pc=0xb7f5, .a=0xe9, .x=0x00, .y=0x95, .sp=0xb6, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0xb7f5, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb7f6, .a=0xe9, .x=0x00, .y=0x95, .sp=0xb5, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0xb7f5, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb7f5, .value=0x4d, .type=IO_READ},
        {.addr=0xb7f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x00, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_017A) {
    const struct CPU_State initial_cpu = {.pc=0x42b8, .a=0x3a, .x=0x0a, .y=0xa8, .sp=0xe9, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x00}, {.addr=0x42b8, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x42b9, .a=0x3a, .x=0x0a, .y=0xa8, .sp=0xe8, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x0a}, {.addr=0x42b8, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x42b8, .value=0x4d, .type=IO_READ},
        {.addr=0x42b9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_017B) {
    const struct CPU_State initial_cpu = {.pc=0x303c, .a=0xa0, .x=0xed, .y=0xdd, .sp=0xcf, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x00}, {.addr=0x303c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x303d, .a=0xa0, .x=0xed, .y=0xdd, .sp=0xce, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xed}, {.addr=0x303c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x303c, .value=0x4d, .type=IO_READ},
        {.addr=0x303d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0xed, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_017C) {
    const struct CPU_State initial_cpu = {.pc=0xdf72, .a=0x0b, .x=0x11, .y=0x81, .sp=0x29, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x00}, {.addr=0xdf72, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xdf73, .a=0x0b, .x=0x11, .y=0x81, .sp=0x28, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x11}, {.addr=0xdf72, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xdf72, .value=0x4d, .type=IO_READ},
        {.addr=0xdf73, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0x11, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_017D) {
    const struct CPU_State initial_cpu = {.pc=0xf03f, .a=0x44, .x=0xcb, .y=0xb9, .sp=0x24, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x00}, {.addr=0xf03f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf040, .a=0x44, .x=0xcb, .y=0xb9, .sp=0x23, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xcb}, {.addr=0xf03f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf03f, .value=0x4d, .type=IO_READ},
        {.addr=0xf040, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0xcb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_017E) {
    const struct CPU_State initial_cpu = {.pc=0xfcb3, .a=0x33, .x=0x62, .y=0x43, .sp=0xdf, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0xfcb3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xfcb4, .a=0x33, .x=0x62, .y=0x43, .sp=0xde, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x62}, {.addr=0xfcb3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xfcb3, .value=0x4d, .type=IO_READ},
        {.addr=0xfcb4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_017F) {
    const struct CPU_State initial_cpu = {.pc=0x01e4, .a=0x74, .x=0x27, .y=0xb8, .sp=0xae, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x00}, {.addr=0x01e4, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x01e5, .a=0x74, .x=0x27, .y=0xb8, .sp=0xad, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x27}, {.addr=0x01e4, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x01e4, .value=0x4d, .type=IO_READ},
        {.addr=0x01e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x27, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0180) {
    const struct CPU_State initial_cpu = {.pc=0xbc66, .a=0x4e, .x=0x1c, .y=0x11, .sp=0xb4, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0xbc66, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbc67, .a=0x4e, .x=0x1c, .y=0x11, .sp=0xb3, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x1c}, {.addr=0xbc66, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbc66, .value=0x4d, .type=IO_READ},
        {.addr=0xbc67, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x1c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0181) {
    const struct CPU_State initial_cpu = {.pc=0x47c5, .a=0x4b, .x=0x8b, .y=0xb0, .sp=0xa5, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0x47c5, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x47c6, .a=0x4b, .x=0x8b, .y=0xb0, .sp=0xa4, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x8b}, {.addr=0x47c5, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x47c5, .value=0x4d, .type=IO_READ},
        {.addr=0x47c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x8b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0182) {
    const struct CPU_State initial_cpu = {.pc=0x0c6a, .a=0x4a, .x=0xa4, .y=0x14, .sp=0xcc, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x00}, {.addr=0x0c6a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0c6b, .a=0x4a, .x=0xa4, .y=0x14, .sp=0xcb, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xa4}, {.addr=0x0c6a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0c6a, .value=0x4d, .type=IO_READ},
        {.addr=0x0c6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0183) {
    const struct CPU_State initial_cpu = {.pc=0xcd6b, .a=0x61, .x=0xff, .y=0xa8, .sp=0x27, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x00}, {.addr=0xcd6b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcd6c, .a=0x61, .x=0xff, .y=0xa8, .sp=0x26, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0xff}, {.addr=0xcd6b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcd6b, .value=0x4d, .type=IO_READ},
        {.addr=0xcd6c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0xff, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0184) {
    const struct CPU_State initial_cpu = {.pc=0xc328, .a=0x11, .x=0x6b, .y=0xe2, .sp=0xc8, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x00}, {.addr=0xc328, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc329, .a=0x11, .x=0x6b, .y=0xe2, .sp=0xc7, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x6b}, {.addr=0xc328, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc328, .value=0x4d, .type=IO_READ},
        {.addr=0xc329, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0185) {
    const struct CPU_State initial_cpu = {.pc=0x4d5b, .a=0x00, .x=0xab, .y=0x12, .sp=0x26, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x00}, {.addr=0x4d5b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4d5c, .a=0x00, .x=0xab, .y=0x12, .sp=0x25, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xab}, {.addr=0x4d5b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4d5b, .value=0x4d, .type=IO_READ},
        {.addr=0x4d5c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0xab, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0186) {
    const struct CPU_State initial_cpu = {.pc=0xa4a6, .a=0x22, .x=0x20, .y=0x88, .sp=0x5e, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x00}, {.addr=0xa4a6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa4a7, .a=0x22, .x=0x20, .y=0x88, .sp=0x5d, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0x20}, {.addr=0xa4a6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa4a6, .value=0x4d, .type=IO_READ},
        {.addr=0xa4a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0187) {
    const struct CPU_State initial_cpu = {.pc=0xcd6b, .a=0xaf, .x=0x3b, .y=0xa5, .sp=0xca, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x00}, {.addr=0xcd6b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcd6c, .a=0xaf, .x=0x3b, .y=0xa5, .sp=0xc9, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x3b}, {.addr=0xcd6b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcd6b, .value=0x4d, .type=IO_READ},
        {.addr=0xcd6c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x3b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0188) {
    const struct CPU_State initial_cpu = {.pc=0x5da0, .a=0x62, .x=0x3f, .y=0x13, .sp=0x57, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0x5da0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5da1, .a=0x62, .x=0x3f, .y=0x13, .sp=0x56, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x3f}, {.addr=0x5da0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5da0, .value=0x4d, .type=IO_READ},
        {.addr=0x5da1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x3f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0189) {
    const struct CPU_State initial_cpu = {.pc=0x6656, .a=0x43, .x=0x85, .y=0x6e, .sp=0xf9, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x00}, {.addr=0x6656, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6657, .a=0x43, .x=0x85, .y=0x6e, .sp=0xf8, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x85}, {.addr=0x6656, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6656, .value=0x4d, .type=IO_READ},
        {.addr=0x6657, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x85, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_018A) {
    const struct CPU_State initial_cpu = {.pc=0xaac4, .a=0xca, .x=0xb4, .y=0xc7, .sp=0xdf, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0xaac4, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xaac5, .a=0xca, .x=0xb4, .y=0xc7, .sp=0xde, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xb4}, {.addr=0xaac4, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xaac4, .value=0x4d, .type=IO_READ},
        {.addr=0xaac5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0xb4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_018B) {
    const struct CPU_State initial_cpu = {.pc=0x5d83, .a=0xd3, .x=0x1c, .y=0x8e, .sp=0xe1, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x00}, {.addr=0x5d83, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5d84, .a=0xd3, .x=0x1c, .y=0x8e, .sp=0xe0, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x1c}, {.addr=0x5d83, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5d83, .value=0x4d, .type=IO_READ},
        {.addr=0x5d84, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x1c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_018C) {
    const struct CPU_State initial_cpu = {.pc=0x9cf2, .a=0xad, .x=0x0f, .y=0xd7, .sp=0xd9, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x00}, {.addr=0x9cf2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9cf3, .a=0xad, .x=0x0f, .y=0xd7, .sp=0xd8, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x0f}, {.addr=0x9cf2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9cf2, .value=0x4d, .type=IO_READ},
        {.addr=0x9cf3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x0f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_018D) {
    const struct CPU_State initial_cpu = {.pc=0x44bd, .a=0x14, .x=0xe8, .y=0xc9, .sp=0x2e, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x44bd, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x44be, .a=0x14, .x=0xe8, .y=0xc9, .sp=0x2d, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xe8}, {.addr=0x44bd, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x44bd, .value=0x4d, .type=IO_READ},
        {.addr=0x44be, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0xe8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_018E) {
    const struct CPU_State initial_cpu = {.pc=0x2f95, .a=0x4f, .x=0xc7, .y=0x20, .sp=0xef, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0x2f95, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2f96, .a=0x4f, .x=0xc7, .y=0x20, .sp=0xee, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0xc7}, {.addr=0x2f95, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2f95, .value=0x4d, .type=IO_READ},
        {.addr=0x2f96, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0xc7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_018F) {
    const struct CPU_State initial_cpu = {.pc=0x7452, .a=0x2f, .x=0x44, .y=0xe1, .sp=0x30, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0130, .value=0x00}, {.addr=0x7452, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7453, .a=0x2f, .x=0x44, .y=0xe1, .sp=0x2f, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0130, .value=0x44}, {.addr=0x7452, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7452, .value=0x4d, .type=IO_READ},
        {.addr=0x7453, .value=DUMMY, .type=IO_READ},
        {.addr=0x0130, .value=0x44, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0190) {
    const struct CPU_State initial_cpu = {.pc=0xa88a, .a=0xb8, .x=0x02, .y=0x79, .sp=0xb9, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0xa88a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa88b, .a=0xb8, .x=0x02, .y=0x79, .sp=0xb8, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x02}, {.addr=0xa88a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa88a, .value=0x4d, .type=IO_READ},
        {.addr=0xa88b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x02, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0191) {
    const struct CPU_State initial_cpu = {.pc=0x4c40, .a=0xd1, .x=0xa0, .y=0xb5, .sp=0x99, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x00}, {.addr=0x4c40, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4c41, .a=0xd1, .x=0xa0, .y=0xb5, .sp=0x98, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0xa0}, {.addr=0x4c40, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4c40, .value=0x4d, .type=IO_READ},
        {.addr=0x4c41, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0xa0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0192) {
    const struct CPU_State initial_cpu = {.pc=0x7f1e, .a=0xf5, .x=0x50, .y=0x6b, .sp=0xff, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x00}, {.addr=0x7f1e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7f1f, .a=0xf5, .x=0x50, .y=0x6b, .sp=0xfe, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x50}, {.addr=0x7f1e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7f1e, .value=0x4d, .type=IO_READ},
        {.addr=0x7f1f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x50, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0193) {
    const struct CPU_State initial_cpu = {.pc=0xf336, .a=0xa2, .x=0x8f, .y=0xc7, .sp=0x56, .status=0x0b};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x00}, {.addr=0xf336, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf337, .a=0xa2, .x=0x8f, .y=0xc7, .sp=0x55, .status=0x0b};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x8f}, {.addr=0xf336, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf336, .value=0x4d, .type=IO_READ},
        {.addr=0xf337, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x8f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0194) {
    const struct CPU_State initial_cpu = {.pc=0x8654, .a=0xea, .x=0xbc, .y=0x78, .sp=0x0f, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x010f, .value=0x00}, {.addr=0x8654, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8655, .a=0xea, .x=0xbc, .y=0x78, .sp=0x0e, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x010f, .value=0xbc}, {.addr=0x8654, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8654, .value=0x4d, .type=IO_READ},
        {.addr=0x8655, .value=DUMMY, .type=IO_READ},
        {.addr=0x010f, .value=0xbc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0195) {
    const struct CPU_State initial_cpu = {.pc=0x01fe, .a=0x27, .x=0x89, .y=0x93, .sp=0xd6, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x00}, {.addr=0x01fe, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x01ff, .a=0x27, .x=0x89, .y=0x93, .sp=0xd5, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x89}, {.addr=0x01fe, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x01fe, .value=0x4d, .type=IO_READ},
        {.addr=0x01ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x89, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0196) {
    const struct CPU_State initial_cpu = {.pc=0x6d10, .a=0x7f, .x=0xf9, .y=0x01, .sp=0xcd, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x00}, {.addr=0x6d10, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6d11, .a=0x7f, .x=0xf9, .y=0x01, .sp=0xcc, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0xf9}, {.addr=0x6d10, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6d10, .value=0x4d, .type=IO_READ},
        {.addr=0x6d11, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0xf9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0197) {
    const struct CPU_State initial_cpu = {.pc=0xed18, .a=0x42, .x=0x0e, .y=0x66, .sp=0x65, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x00}, {.addr=0xed18, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xed19, .a=0x42, .x=0x0e, .y=0x66, .sp=0x64, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0x0e}, {.addr=0xed18, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xed18, .value=0x4d, .type=IO_READ},
        {.addr=0xed19, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0x0e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0198) {
    const struct CPU_State initial_cpu = {.pc=0xb800, .a=0x52, .x=0x1f, .y=0xe2, .sp=0x98, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0xb800, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb801, .a=0x52, .x=0x1f, .y=0xe2, .sp=0x97, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x1f}, {.addr=0xb800, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb800, .value=0x4d, .type=IO_READ},
        {.addr=0xb801, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x1f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0199) {
    const struct CPU_State initial_cpu = {.pc=0x5e9b, .a=0xb8, .x=0x0a, .y=0xac, .sp=0x6f, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0x5e9b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5e9c, .a=0xb8, .x=0x0a, .y=0xac, .sp=0x6e, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x0a}, {.addr=0x5e9b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5e9b, .value=0x4d, .type=IO_READ},
        {.addr=0x5e9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_019A) {
    const struct CPU_State initial_cpu = {.pc=0x4750, .a=0x05, .x=0xb9, .y=0x73, .sp=0x7d, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0x4750, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4751, .a=0x05, .x=0xb9, .y=0x73, .sp=0x7c, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0xb9}, {.addr=0x4750, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4750, .value=0x4d, .type=IO_READ},
        {.addr=0x4751, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0xb9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_019B) {
    const struct CPU_State initial_cpu = {.pc=0x6103, .a=0x98, .x=0xb1, .y=0x23, .sp=0xa8, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0x6103, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6104, .a=0x98, .x=0xb1, .y=0x23, .sp=0xa7, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0xb1}, {.addr=0x6103, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6103, .value=0x4d, .type=IO_READ},
        {.addr=0x6104, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0xb1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_019C) {
    const struct CPU_State initial_cpu = {.pc=0x747a, .a=0x9b, .x=0x6b, .y=0x30, .sp=0x8d, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x00}, {.addr=0x747a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x747b, .a=0x9b, .x=0x6b, .y=0x30, .sp=0x8c, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x6b}, {.addr=0x747a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x747a, .value=0x4d, .type=IO_READ},
        {.addr=0x747b, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_019D) {
    const struct CPU_State initial_cpu = {.pc=0x4665, .a=0x9e, .x=0x8f, .y=0x0f, .sp=0x00, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x00}, {.addr=0x4665, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4666, .a=0x9e, .x=0x8f, .y=0x0f, .sp=0xff, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x8f}, {.addr=0x4665, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4665, .value=0x4d, .type=IO_READ},
        {.addr=0x4666, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0x8f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_019E) {
    const struct CPU_State initial_cpu = {.pc=0xd5e6, .a=0x7c, .x=0xa8, .y=0x80, .sp=0xe3, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0xd5e6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd5e7, .a=0x7c, .x=0xa8, .y=0x80, .sp=0xe2, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0xa8}, {.addr=0xd5e6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd5e6, .value=0x4d, .type=IO_READ},
        {.addr=0xd5e7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0xa8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_019F) {
    const struct CPU_State initial_cpu = {.pc=0xb334, .a=0x26, .x=0xec, .y=0x68, .sp=0xfa, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x00}, {.addr=0xb334, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb335, .a=0x26, .x=0xec, .y=0x68, .sp=0xf9, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0xec}, {.addr=0xb334, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb334, .value=0x4d, .type=IO_READ},
        {.addr=0xb335, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0xec, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01A0) {
    const struct CPU_State initial_cpu = {.pc=0xb673, .a=0xd7, .x=0xef, .y=0x90, .sp=0xb8, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0xb673, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb674, .a=0xd7, .x=0xef, .y=0x90, .sp=0xb7, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0xef}, {.addr=0xb673, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb673, .value=0x4d, .type=IO_READ},
        {.addr=0xb674, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0xef, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01A1) {
    const struct CPU_State initial_cpu = {.pc=0x5b44, .a=0x18, .x=0x00, .y=0x78, .sp=0xe6, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x00}, {.addr=0x5b44, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5b45, .a=0x18, .x=0x00, .y=0x78, .sp=0xe5, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0x00}, {.addr=0x5b44, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5b44, .value=0x4d, .type=IO_READ},
        {.addr=0x5b45, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0x00, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01A2) {
    const struct CPU_State initial_cpu = {.pc=0xce23, .a=0x97, .x=0x62, .y=0xec, .sp=0x46, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0xce23, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xce24, .a=0x97, .x=0x62, .y=0xec, .sp=0x45, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x62}, {.addr=0xce23, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xce23, .value=0x4d, .type=IO_READ},
        {.addr=0xce24, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01A3) {
    const struct CPU_State initial_cpu = {.pc=0xa9f4, .a=0x40, .x=0x37, .y=0x18, .sp=0x00, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x00}, {.addr=0xa9f4, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa9f5, .a=0x40, .x=0x37, .y=0x18, .sp=0xff, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x37}, {.addr=0xa9f4, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa9f4, .value=0x4d, .type=IO_READ},
        {.addr=0xa9f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01A4) {
    const struct CPU_State initial_cpu = {.pc=0xda3d, .a=0xee, .x=0x66, .y=0xa1, .sp=0x2c, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x00}, {.addr=0xda3d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xda3e, .a=0xee, .x=0x66, .y=0xa1, .sp=0x2b, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x66}, {.addr=0xda3d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xda3d, .value=0x4d, .type=IO_READ},
        {.addr=0xda3e, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x66, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01A5) {
    const struct CPU_State initial_cpu = {.pc=0xd760, .a=0x95, .x=0x54, .y=0x92, .sp=0xbf, .status=0x36};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x00}, {.addr=0xd760, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd761, .a=0x95, .x=0x54, .y=0x92, .sp=0xbe, .status=0x36};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x54}, {.addr=0xd760, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd760, .value=0x4d, .type=IO_READ},
        {.addr=0xd761, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0x54, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01A6) {
    const struct CPU_State initial_cpu = {.pc=0xe2e8, .a=0x60, .x=0x04, .y=0xdd, .sp=0x29, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x0129, .value=0x00}, {.addr=0xe2e8, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe2e9, .a=0x60, .x=0x04, .y=0xdd, .sp=0x28, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x0129, .value=0x04}, {.addr=0xe2e8, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe2e8, .value=0x4d, .type=IO_READ},
        {.addr=0xe2e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0129, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01A7) {
    const struct CPU_State initial_cpu = {.pc=0x4294, .a=0x98, .x=0x34, .y=0x4b, .sp=0x9e, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x00}, {.addr=0x4294, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4295, .a=0x98, .x=0x34, .y=0x4b, .sp=0x9d, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x34}, {.addr=0x4294, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4294, .value=0x4d, .type=IO_READ},
        {.addr=0x4295, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x34, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x9767, .a=0xbc, .x=0x5b, .y=0xb0, .sp=0xb8, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0x9767, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9768, .a=0xbc, .x=0x5b, .y=0xb0, .sp=0xb7, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x5b}, {.addr=0x9767, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9767, .value=0x4d, .type=IO_READ},
        {.addr=0x9768, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x5b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x2dd7, .a=0xe5, .x=0x58, .y=0x02, .sp=0xc0, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x00}, {.addr=0x2dd7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2dd8, .a=0xe5, .x=0x58, .y=0x02, .sp=0xbf, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x58}, {.addr=0x2dd7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2dd7, .value=0x4d, .type=IO_READ},
        {.addr=0x2dd8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0x58, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x777d, .a=0x83, .x=0x97, .y=0xe4, .sp=0x21, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x00}, {.addr=0x777d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x777e, .a=0x83, .x=0x97, .y=0xe4, .sp=0x20, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x97}, {.addr=0x777d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x777d, .value=0x4d, .type=IO_READ},
        {.addr=0x777e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01AB) {
    const struct CPU_State initial_cpu = {.pc=0xe6b9, .a=0x66, .x=0x98, .y=0x4a, .sp=0x71, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x00}, {.addr=0xe6b9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe6ba, .a=0x66, .x=0x98, .y=0x4a, .sp=0x70, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x98}, {.addr=0xe6b9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe6b9, .value=0x4d, .type=IO_READ},
        {.addr=0xe6ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0x98, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xd5b6, .a=0x80, .x=0xae, .y=0xbf, .sp=0xa1, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0xd5b6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd5b7, .a=0x80, .x=0xae, .y=0xbf, .sp=0xa0, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xae}, {.addr=0xd5b6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd5b6, .value=0x4d, .type=IO_READ},
        {.addr=0xd5b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x3d85, .a=0x61, .x=0x88, .y=0x7f, .sp=0xb4, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0x3d85, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3d86, .a=0x61, .x=0x88, .y=0x7f, .sp=0xb3, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x88}, {.addr=0x3d85, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3d85, .value=0x4d, .type=IO_READ},
        {.addr=0x3d86, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x88, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01AE) {
    const struct CPU_State initial_cpu = {.pc=0x3d8e, .a=0x58, .x=0x03, .y=0xc1, .sp=0xfd, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0x3d8e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3d8f, .a=0x58, .x=0x03, .y=0xc1, .sp=0xfc, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x03}, {.addr=0x3d8e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3d8e, .value=0x4d, .type=IO_READ},
        {.addr=0x3d8f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x03, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x5fb8, .a=0xdf, .x=0x5f, .y=0xfd, .sp=0xa9, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x00}, {.addr=0x5fb8, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5fb9, .a=0xdf, .x=0x5f, .y=0xfd, .sp=0xa8, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0x5f}, {.addr=0x5fb8, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5fb8, .value=0x4d, .type=IO_READ},
        {.addr=0x5fb9, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0x5f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01B0) {
    const struct CPU_State initial_cpu = {.pc=0x7eb1, .a=0x51, .x=0x35, .y=0x26, .sp=0xe1, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x00}, {.addr=0x7eb1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7eb2, .a=0x51, .x=0x35, .y=0x26, .sp=0xe0, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x35}, {.addr=0x7eb1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7eb1, .value=0x4d, .type=IO_READ},
        {.addr=0x7eb2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x35, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01B1) {
    const struct CPU_State initial_cpu = {.pc=0xec14, .a=0x6a, .x=0xdc, .y=0xef, .sp=0xac, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x01ac, .value=0x00}, {.addr=0xec14, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xec15, .a=0x6a, .x=0xdc, .y=0xef, .sp=0xab, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x01ac, .value=0xdc}, {.addr=0xec14, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xec14, .value=0x4d, .type=IO_READ},
        {.addr=0xec15, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ac, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x83e4, .a=0x5e, .x=0x41, .y=0xde, .sp=0x68, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x00}, {.addr=0x83e4, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x83e5, .a=0x5e, .x=0x41, .y=0xde, .sp=0x67, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0x41}, {.addr=0x83e4, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x83e4, .value=0x4d, .type=IO_READ},
        {.addr=0x83e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0x41, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01B3) {
    const struct CPU_State initial_cpu = {.pc=0x4f35, .a=0xeb, .x=0x89, .y=0xfd, .sp=0x06, .status=0x54};
    const struct RamEntry initial_ram[] = {{.addr=0x0106, .value=0x00}, {.addr=0x4f35, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4f36, .a=0xeb, .x=0x89, .y=0xfd, .sp=0x05, .status=0x54};
    const struct RamEntry final_ram[] = {{.addr=0x0106, .value=0x89}, {.addr=0x4f35, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4f35, .value=0x4d, .type=IO_READ},
        {.addr=0x4f36, .value=DUMMY, .type=IO_READ},
        {.addr=0x0106, .value=0x89, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x034b, .a=0xc2, .x=0x1b, .y=0xea, .sp=0x70, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x00}, {.addr=0x034b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x034c, .a=0xc2, .x=0x1b, .y=0xea, .sp=0x6f, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x1b}, {.addr=0x034b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x034b, .value=0x4d, .type=IO_READ},
        {.addr=0x034c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x2419, .a=0x59, .x=0x26, .y=0xdd, .sp=0xa6, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x01a6, .value=0x00}, {.addr=0x2419, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x241a, .a=0x59, .x=0x26, .y=0xdd, .sp=0xa5, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x01a6, .value=0x26}, {.addr=0x2419, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2419, .value=0x4d, .type=IO_READ},
        {.addr=0x241a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a6, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01B6) {
    const struct CPU_State initial_cpu = {.pc=0xc169, .a=0x89, .x=0x9b, .y=0xbe, .sp=0x4e, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0xc169, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc16a, .a=0x89, .x=0x9b, .y=0xbe, .sp=0x4d, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x9b}, {.addr=0xc169, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc169, .value=0x4d, .type=IO_READ},
        {.addr=0xc16a, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x9b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x5e48, .a=0x59, .x=0x6f, .y=0x03, .sp=0x7f, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x017f, .value=0x00}, {.addr=0x5e48, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5e49, .a=0x59, .x=0x6f, .y=0x03, .sp=0x7e, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x017f, .value=0x6f}, {.addr=0x5e48, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5e48, .value=0x4d, .type=IO_READ},
        {.addr=0x5e49, .value=DUMMY, .type=IO_READ},
        {.addr=0x017f, .value=0x6f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01B8) {
    const struct CPU_State initial_cpu = {.pc=0x4875, .a=0x9c, .x=0x16, .y=0x7c, .sp=0x53, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0153, .value=0x00}, {.addr=0x4875, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4876, .a=0x9c, .x=0x16, .y=0x7c, .sp=0x52, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0153, .value=0x16}, {.addr=0x4875, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4875, .value=0x4d, .type=IO_READ},
        {.addr=0x4876, .value=DUMMY, .type=IO_READ},
        {.addr=0x0153, .value=0x16, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x2db1, .a=0x6b, .x=0x2f, .y=0xd5, .sp=0xc9, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x00}, {.addr=0x2db1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2db2, .a=0x6b, .x=0x2f, .y=0xd5, .sp=0xc8, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x2f}, {.addr=0x2db1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2db1, .value=0x4d, .type=IO_READ},
        {.addr=0x2db2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x2f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x76b7, .a=0xba, .x=0x06, .y=0xb7, .sp=0x24, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x00}, {.addr=0x76b7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x76b8, .a=0xba, .x=0x06, .y=0xb7, .sp=0x23, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0x06}, {.addr=0x76b7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x76b7, .value=0x4d, .type=IO_READ},
        {.addr=0x76b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0x06, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01BB) {
    const struct CPU_State initial_cpu = {.pc=0x1259, .a=0xd9, .x=0xb5, .y=0xa3, .sp=0xa9, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x01a9, .value=0x00}, {.addr=0x1259, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x125a, .a=0xd9, .x=0xb5, .y=0xa3, .sp=0xa8, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x01a9, .value=0xb5}, {.addr=0x1259, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1259, .value=0x4d, .type=IO_READ},
        {.addr=0x125a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a9, .value=0xb5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01BC) {
    const struct CPU_State initial_cpu = {.pc=0x820c, .a=0x3b, .x=0x30, .y=0xc6, .sp=0x9e, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x019e, .value=0x00}, {.addr=0x820c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x820d, .a=0x3b, .x=0x30, .y=0xc6, .sp=0x9d, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x019e, .value=0x30}, {.addr=0x820c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x820c, .value=0x4d, .type=IO_READ},
        {.addr=0x820d, .value=DUMMY, .type=IO_READ},
        {.addr=0x019e, .value=0x30, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x0d41, .a=0x78, .x=0x5c, .y=0xf3, .sp=0xba, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x01ba, .value=0x00}, {.addr=0x0d41, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0d42, .a=0x78, .x=0x5c, .y=0xf3, .sp=0xb9, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x01ba, .value=0x5c}, {.addr=0x0d41, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0d41, .value=0x4d, .type=IO_READ},
        {.addr=0x0d42, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ba, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xfd0c, .a=0xce, .x=0x7c, .y=0x04, .sp=0xc2, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x00}, {.addr=0xfd0c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xfd0d, .a=0xce, .x=0x7c, .y=0x04, .sp=0xc1, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x7c}, {.addr=0xfd0c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xfd0c, .value=0x4d, .type=IO_READ},
        {.addr=0xfd0d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0x7c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01BF) {
    const struct CPU_State initial_cpu = {.pc=0xac28, .a=0xb0, .x=0x0c, .y=0x6d, .sp=0x8d, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x00}, {.addr=0xac28, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xac29, .a=0xb0, .x=0x0c, .y=0x6d, .sp=0x8c, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x0c}, {.addr=0xac28, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xac28, .value=0x4d, .type=IO_READ},
        {.addr=0xac29, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x4caa, .a=0x77, .x=0xf4, .y=0x2a, .sp=0xc0, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x00}, {.addr=0x4caa, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4cab, .a=0x77, .x=0xf4, .y=0x2a, .sp=0xbf, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0xf4}, {.addr=0x4caa, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4caa, .value=0x4d, .type=IO_READ},
        {.addr=0x4cab, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0xf4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x3ff5, .a=0x41, .x=0xcc, .y=0x8f, .sp=0xf3, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x00}, {.addr=0x3ff5, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3ff6, .a=0x41, .x=0xcc, .y=0x8f, .sp=0xf2, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0xcc}, {.addr=0x3ff5, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3ff5, .value=0x4d, .type=IO_READ},
        {.addr=0x3ff6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0xcc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x3456, .a=0xef, .x=0x0a, .y=0x77, .sp=0x89, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0x3456, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3457, .a=0xef, .x=0x0a, .y=0x77, .sp=0x88, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x0a}, {.addr=0x3456, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3456, .value=0x4d, .type=IO_READ},
        {.addr=0x3457, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01C3) {
    const struct CPU_State initial_cpu = {.pc=0x0601, .a=0xe2, .x=0x57, .y=0xb0, .sp=0xb8, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0x0601, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0602, .a=0xe2, .x=0x57, .y=0xb0, .sp=0xb7, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x57}, {.addr=0x0601, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0601, .value=0x4d, .type=IO_READ},
        {.addr=0x0602, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x57, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xa10b, .a=0x16, .x=0x08, .y=0x06, .sp=0xdb, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x00}, {.addr=0xa10b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa10c, .a=0x16, .x=0x08, .y=0x06, .sp=0xda, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x08}, {.addr=0xa10b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa10b, .value=0x4d, .type=IO_READ},
        {.addr=0xa10c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x08, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x79ee, .a=0x99, .x=0x1e, .y=0xcc, .sp=0xfe, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x00}, {.addr=0x79ee, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x79ef, .a=0x99, .x=0x1e, .y=0xcc, .sp=0xfd, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x1e}, {.addr=0x79ee, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x79ee, .value=0x4d, .type=IO_READ},
        {.addr=0x79ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01C6) {
    const struct CPU_State initial_cpu = {.pc=0xa371, .a=0xde, .x=0xd1, .y=0x2a, .sp=0x94, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0xa371, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa372, .a=0xde, .x=0xd1, .y=0x2a, .sp=0x93, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xd1}, {.addr=0xa371, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa371, .value=0x4d, .type=IO_READ},
        {.addr=0xa372, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0xd1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01C7) {
    const struct CPU_State initial_cpu = {.pc=0xc671, .a=0x87, .x=0xca, .y=0xa8, .sp=0xe8, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x01e8, .value=0x00}, {.addr=0xc671, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc672, .a=0x87, .x=0xca, .y=0xa8, .sp=0xe7, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x01e8, .value=0xca}, {.addr=0xc671, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc671, .value=0x4d, .type=IO_READ},
        {.addr=0xc672, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e8, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01C8) {
    const struct CPU_State initial_cpu = {.pc=0x3f6a, .a=0x16, .x=0xae, .y=0x8c, .sp=0xcc, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x00}, {.addr=0x3f6a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3f6b, .a=0x16, .x=0xae, .y=0x8c, .sp=0xcb, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xae}, {.addr=0x3f6a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3f6a, .value=0x4d, .type=IO_READ},
        {.addr=0x3f6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01C9) {
    const struct CPU_State initial_cpu = {.pc=0x9a84, .a=0x77, .x=0x27, .y=0xba, .sp=0xfc, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0x9a84, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9a85, .a=0x77, .x=0x27, .y=0xba, .sp=0xfb, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x27}, {.addr=0x9a84, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9a84, .value=0x4d, .type=IO_READ},
        {.addr=0x9a85, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x27, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01CA) {
    const struct CPU_State initial_cpu = {.pc=0xc8df, .a=0x64, .x=0xfe, .y=0x8e, .sp=0x87, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x00}, {.addr=0xc8df, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc8e0, .a=0x64, .x=0xfe, .y=0x8e, .sp=0x86, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0xfe}, {.addr=0xc8df, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc8df, .value=0x4d, .type=IO_READ},
        {.addr=0xc8e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0xfe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01CB) {
    const struct CPU_State initial_cpu = {.pc=0xae64, .a=0xd9, .x=0x63, .y=0x2b, .sp=0x71, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x00}, {.addr=0xae64, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xae65, .a=0xd9, .x=0x63, .y=0x2b, .sp=0x70, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0x63}, {.addr=0xae64, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xae64, .value=0x4d, .type=IO_READ},
        {.addr=0xae65, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0x63, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01CC) {
    const struct CPU_State initial_cpu = {.pc=0x84c3, .a=0x78, .x=0x07, .y=0xe3, .sp=0x4c, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x00}, {.addr=0x84c3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x84c4, .a=0x78, .x=0x07, .y=0xe3, .sp=0x4b, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0x07}, {.addr=0x84c3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x84c3, .value=0x4d, .type=IO_READ},
        {.addr=0x84c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0x07, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01CD) {
    const struct CPU_State initial_cpu = {.pc=0xcf2f, .a=0x75, .x=0x07, .y=0x8e, .sp=0xe3, .status=0x53};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0xcf2f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcf30, .a=0x75, .x=0x07, .y=0x8e, .sp=0xe2, .status=0x53};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x07}, {.addr=0xcf2f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcf2f, .value=0x4d, .type=IO_READ},
        {.addr=0xcf30, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0x07, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xa05a, .a=0x85, .x=0x16, .y=0x5d, .sp=0xd9, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x00}, {.addr=0xa05a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa05b, .a=0x85, .x=0x16, .y=0x5d, .sp=0xd8, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0x16}, {.addr=0xa05a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa05a, .value=0x4d, .type=IO_READ},
        {.addr=0xa05b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0x16, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x2019, .a=0xe0, .x=0x24, .y=0xfa, .sp=0x79, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x00}, {.addr=0x2019, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x201a, .a=0xe0, .x=0x24, .y=0xfa, .sp=0x78, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0x24}, {.addr=0x2019, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2019, .value=0x4d, .type=IO_READ},
        {.addr=0x201a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0x24, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01D0) {
    const struct CPU_State initial_cpu = {.pc=0x45c3, .a=0x0a, .x=0x2d, .y=0x63, .sp=0x2c, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x00}, {.addr=0x45c3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x45c4, .a=0x0a, .x=0x2d, .y=0x63, .sp=0x2b, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x2d}, {.addr=0x45c3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x45c3, .value=0x4d, .type=IO_READ},
        {.addr=0x45c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x2d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x15c5, .a=0xc9, .x=0x62, .y=0x06, .sp=0x92, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x00}, {.addr=0x15c5, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x15c6, .a=0xc9, .x=0x62, .y=0x06, .sp=0x91, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x62}, {.addr=0x15c5, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x15c5, .value=0x4d, .type=IO_READ},
        {.addr=0x15c6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x11b6, .a=0xd7, .x=0xf0, .y=0x39, .sp=0x85, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x00}, {.addr=0x11b6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x11b7, .a=0xd7, .x=0xf0, .y=0x39, .sp=0x84, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0xf0}, {.addr=0x11b6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x11b6, .value=0x4d, .type=IO_READ},
        {.addr=0x11b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x6ab1, .a=0x6b, .x=0xa8, .y=0x4c, .sp=0x5e, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x00}, {.addr=0x6ab1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6ab2, .a=0x6b, .x=0xa8, .y=0x4c, .sp=0x5d, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0xa8}, {.addr=0x6ab1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6ab1, .value=0x4d, .type=IO_READ},
        {.addr=0x6ab2, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0xa8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01D4) {
    const struct CPU_State initial_cpu = {.pc=0xbcf2, .a=0x22, .x=0xf4, .y=0x11, .sp=0xfa, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x00}, {.addr=0xbcf2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbcf3, .a=0x22, .x=0xf4, .y=0x11, .sp=0xf9, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0xf4}, {.addr=0xbcf2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbcf2, .value=0x4d, .type=IO_READ},
        {.addr=0xbcf3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0xf4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x65cd, .a=0xff, .x=0x8e, .y=0x09, .sp=0xd3, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0x65cd, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x65ce, .a=0xff, .x=0x8e, .y=0x09, .sp=0xd2, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x8e}, {.addr=0x65cd, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x65cd, .value=0x4d, .type=IO_READ},
        {.addr=0x65ce, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x8e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x4141, .a=0x1f, .x=0xcc, .y=0xa0, .sp=0x4b, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x00}, {.addr=0x4141, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4142, .a=0x1f, .x=0xcc, .y=0xa0, .sp=0x4a, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xcc}, {.addr=0x4141, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4141, .value=0x4d, .type=IO_READ},
        {.addr=0x4142, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0xcc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x478f, .a=0x38, .x=0x15, .y=0xf8, .sp=0x96, .status=0xb0};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0x478f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4790, .a=0x38, .x=0x15, .y=0xf8, .sp=0x95, .status=0xb0};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x15}, {.addr=0x478f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x478f, .value=0x4d, .type=IO_READ},
        {.addr=0x4790, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x15, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01D8) {
    const struct CPU_State initial_cpu = {.pc=0x0492, .a=0x81, .x=0xeb, .y=0x44, .sp=0x50, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x00}, {.addr=0x0492, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0493, .a=0x81, .x=0xeb, .y=0x44, .sp=0x4f, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xeb}, {.addr=0x0492, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0492, .value=0x4d, .type=IO_READ},
        {.addr=0x0493, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01D9) {
    const struct CPU_State initial_cpu = {.pc=0x3209, .a=0xa1, .x=0x5d, .y=0xb2, .sp=0x1d, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x00}, {.addr=0x3209, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x320a, .a=0xa1, .x=0x5d, .y=0xb2, .sp=0x1c, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x5d}, {.addr=0x3209, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3209, .value=0x4d, .type=IO_READ},
        {.addr=0x320a, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x5d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xcf20, .a=0xa4, .x=0x8b, .y=0xd2, .sp=0x6f, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0xcf20, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcf21, .a=0xa4, .x=0x8b, .y=0xd2, .sp=0x6e, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0x8b}, {.addr=0xcf20, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcf20, .value=0x4d, .type=IO_READ},
        {.addr=0xcf21, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0x8b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01DB) {
    const struct CPU_State initial_cpu = {.pc=0xe4a7, .a=0x58, .x=0x39, .y=0x99, .sp=0x94, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0xe4a7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe4a8, .a=0x58, .x=0x39, .y=0x99, .sp=0x93, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x39}, {.addr=0xe4a7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe4a7, .value=0x4d, .type=IO_READ},
        {.addr=0xe4a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x39, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01DC) {
    const struct CPU_State initial_cpu = {.pc=0xc3c4, .a=0x59, .x=0x19, .y=0x6c, .sp=0xb8, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x01b8, .value=0x00}, {.addr=0xc3c4, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc3c5, .a=0x59, .x=0x19, .y=0x6c, .sp=0xb7, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x01b8, .value=0x19}, {.addr=0xc3c4, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc3c4, .value=0x4d, .type=IO_READ},
        {.addr=0xc3c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b8, .value=0x19, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x3f9d, .a=0xe8, .x=0x3d, .y=0x6b, .sp=0x2d, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x00}, {.addr=0x3f9d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3f9e, .a=0xe8, .x=0x3d, .y=0x6b, .sp=0x2c, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x3d}, {.addr=0x3f9d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3f9d, .value=0x4d, .type=IO_READ},
        {.addr=0x3f9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0x3d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01DE) {
    const struct CPU_State initial_cpu = {.pc=0x8689, .a=0xdc, .x=0xb0, .y=0x2f, .sp=0x07, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0x8689, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x868a, .a=0xdc, .x=0xb0, .y=0x2f, .sp=0x06, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xb0}, {.addr=0x8689, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8689, .value=0x4d, .type=IO_READ},
        {.addr=0x868a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0xb0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x2faa, .a=0x74, .x=0xad, .y=0x51, .sp=0xc6, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x01c6, .value=0x00}, {.addr=0x2faa, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2fab, .a=0x74, .x=0xad, .y=0x51, .sp=0xc5, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x01c6, .value=0xad}, {.addr=0x2faa, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2faa, .value=0x4d, .type=IO_READ},
        {.addr=0x2fab, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c6, .value=0xad, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01E0) {
    const struct CPU_State initial_cpu = {.pc=0x6249, .a=0xee, .x=0x49, .y=0x03, .sp=0x07, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0x6249, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x624a, .a=0xee, .x=0x49, .y=0x03, .sp=0x06, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x49}, {.addr=0x6249, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6249, .value=0x4d, .type=IO_READ},
        {.addr=0x624a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x49, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01E1) {
    const struct CPU_State initial_cpu = {.pc=0x029c, .a=0x76, .x=0x6c, .y=0xa5, .sp=0x6c, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x00}, {.addr=0x029c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x029d, .a=0x76, .x=0x6c, .y=0xa5, .sp=0x6b, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x6c}, {.addr=0x029c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x029c, .value=0x4d, .type=IO_READ},
        {.addr=0x029d, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x6c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01E2) {
    const struct CPU_State initial_cpu = {.pc=0x706d, .a=0x7a, .x=0x2b, .y=0x14, .sp=0xb3, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x00}, {.addr=0x706d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x706e, .a=0x7a, .x=0x2b, .y=0x14, .sp=0xb2, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x2b}, {.addr=0x706d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x706d, .value=0x4d, .type=IO_READ},
        {.addr=0x706e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x2b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xc8bf, .a=0xe6, .x=0xdc, .y=0x7a, .sp=0xb9, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0xc8bf, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc8c0, .a=0xe6, .x=0xdc, .y=0x7a, .sp=0xb8, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xdc}, {.addr=0xc8bf, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc8bf, .value=0x4d, .type=IO_READ},
        {.addr=0xc8c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x9ef0, .a=0xce, .x=0x2a, .y=0x2f, .sp=0xfc, .status=0x93};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0x9ef0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9ef1, .a=0xce, .x=0x2a, .y=0x2f, .sp=0xfb, .status=0x93};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x2a}, {.addr=0x9ef0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9ef0, .value=0x4d, .type=IO_READ},
        {.addr=0x9ef1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x2a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01E5) {
    const struct CPU_State initial_cpu = {.pc=0x474a, .a=0xd4, .x=0x4a, .y=0xae, .sp=0x87, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x00}, {.addr=0x474a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x474b, .a=0xd4, .x=0x4a, .y=0xae, .sp=0x86, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x4a}, {.addr=0x474a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x474a, .value=0x4d, .type=IO_READ},
        {.addr=0x474b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x4a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x5be1, .a=0x62, .x=0xb9, .y=0x95, .sp=0x2a, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x00}, {.addr=0x5be1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5be2, .a=0x62, .x=0xb9, .y=0x95, .sp=0x29, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xb9}, {.addr=0x5be1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5be1, .value=0x4d, .type=IO_READ},
        {.addr=0x5be2, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0xb9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x3229, .a=0xeb, .x=0x1a, .y=0x0e, .sp=0x7b, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x00}, {.addr=0x3229, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x322a, .a=0xeb, .x=0x1a, .y=0x0e, .sp=0x7a, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x1a}, {.addr=0x3229, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3229, .value=0x4d, .type=IO_READ},
        {.addr=0x322a, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x1a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x82b3, .a=0x10, .x=0xff, .y=0x35, .sp=0x5c, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x00}, {.addr=0x82b3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x82b4, .a=0x10, .x=0xff, .y=0x35, .sp=0x5b, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0xff}, {.addr=0x82b3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x82b3, .value=0x4d, .type=IO_READ},
        {.addr=0x82b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0xff, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xb998, .a=0x02, .x=0x4f, .y=0xbe, .sp=0xcd, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x00}, {.addr=0xb998, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb999, .a=0x02, .x=0x4f, .y=0xbe, .sp=0xcc, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x4f}, {.addr=0xb998, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb998, .value=0x4d, .type=IO_READ},
        {.addr=0xb999, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0x4f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x6cc8, .a=0xae, .x=0x08, .y=0x25, .sp=0x16, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0x6cc8, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6cc9, .a=0xae, .x=0x08, .y=0x25, .sp=0x15, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x08}, {.addr=0x6cc8, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6cc8, .value=0x4d, .type=IO_READ},
        {.addr=0x6cc9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0x08, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xf88e, .a=0xba, .x=0xcc, .y=0xc3, .sp=0x0e, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x010e, .value=0x00}, {.addr=0xf88e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf88f, .a=0xba, .x=0xcc, .y=0xc3, .sp=0x0d, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x010e, .value=0xcc}, {.addr=0xf88e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf88e, .value=0x4d, .type=IO_READ},
        {.addr=0xf88f, .value=DUMMY, .type=IO_READ},
        {.addr=0x010e, .value=0xcc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xa11d, .a=0x95, .x=0x7d, .y=0x19, .sp=0xdc, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x00}, {.addr=0xa11d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa11e, .a=0x95, .x=0x7d, .y=0x19, .sp=0xdb, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x7d}, {.addr=0xa11d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa11d, .value=0x4d, .type=IO_READ},
        {.addr=0xa11e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0x7d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x05df, .a=0x6a, .x=0x65, .y=0x81, .sp=0xb7, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x00}, {.addr=0x05df, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x05e0, .a=0x6a, .x=0x65, .y=0x81, .sp=0xb6, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0x65}, {.addr=0x05df, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x05df, .value=0x4d, .type=IO_READ},
        {.addr=0x05e0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0x65, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01EE) {
    const struct CPU_State initial_cpu = {.pc=0x02fa, .a=0x1b, .x=0x64, .y=0x52, .sp=0xcf, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x00}, {.addr=0x02fa, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x02fb, .a=0x1b, .x=0x64, .y=0x52, .sp=0xce, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x64}, {.addr=0x02fa, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x02fa, .value=0x4d, .type=IO_READ},
        {.addr=0x02fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0x64, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x0989, .a=0xcd, .x=0x6c, .y=0xf9, .sp=0x5a, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x00}, {.addr=0x0989, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x098a, .a=0xcd, .x=0x6c, .y=0xf9, .sp=0x59, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0x6c}, {.addr=0x0989, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0989, .value=0x4d, .type=IO_READ},
        {.addr=0x098a, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0x6c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01F0) {
    const struct CPU_State initial_cpu = {.pc=0x0012, .a=0xd8, .x=0x17, .y=0x0f, .sp=0xd6, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0012, .value=0x4d}, {.addr=0x01d6, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x0013, .a=0xd8, .x=0x17, .y=0x0f, .sp=0xd5, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0012, .value=0x4d}, {.addr=0x01d6, .value=0x17}};
    const struct BusEvent events[] = {
        {.addr=0x0012, .value=0x4d, .type=IO_READ},
        {.addr=0x0013, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x17, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01F1) {
    const struct CPU_State initial_cpu = {.pc=0x45d3, .a=0xac, .x=0x61, .y=0x4a, .sp=0xe3, .status=0xf9};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0x45d3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x45d4, .a=0xac, .x=0x61, .y=0x4a, .sp=0xe2, .status=0xf9};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x61}, {.addr=0x45d3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x45d3, .value=0x4d, .type=IO_READ},
        {.addr=0x45d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0x61, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xe50d, .a=0x1b, .x=0x90, .y=0xce, .sp=0x4f, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x00}, {.addr=0xe50d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe50e, .a=0x1b, .x=0x90, .y=0xce, .sp=0x4e, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x90}, {.addr=0xe50d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe50d, .value=0x4d, .type=IO_READ},
        {.addr=0xe50e, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0x90, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x90a8, .a=0x81, .x=0xfb, .y=0x7f, .sp=0x42, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x00}, {.addr=0x90a8, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x90a9, .a=0x81, .x=0xfb, .y=0x7f, .sp=0x41, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xfb}, {.addr=0x90a8, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x90a8, .value=0x4d, .type=IO_READ},
        {.addr=0x90a9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0xfb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x9bd6, .a=0x25, .x=0x7e, .y=0x9e, .sp=0x8b, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x00}, {.addr=0x9bd6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9bd7, .a=0x25, .x=0x7e, .y=0x9e, .sp=0x8a, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0x7e}, {.addr=0x9bd6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9bd6, .value=0x4d, .type=IO_READ},
        {.addr=0x9bd7, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0x7e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01F5) {
    const struct CPU_State initial_cpu = {.pc=0x2a89, .a=0xb0, .x=0x2b, .y=0xd7, .sp=0x96, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0x2a89, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2a8a, .a=0xb0, .x=0x2b, .y=0xd7, .sp=0x95, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x2b}, {.addr=0x2a89, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2a89, .value=0x4d, .type=IO_READ},
        {.addr=0x2a8a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x2b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x9b8c, .a=0x2d, .x=0xf2, .y=0x46, .sp=0x16, .status=0xe5};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0x9b8c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9b8d, .a=0x2d, .x=0xf2, .y=0x46, .sp=0x15, .status=0xe5};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0xf2}, {.addr=0x9b8c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9b8c, .value=0x4d, .type=IO_READ},
        {.addr=0x9b8d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0xf2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x66e4, .a=0x7b, .x=0x62, .y=0x28, .sp=0x43, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x00}, {.addr=0x66e4, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x66e5, .a=0x7b, .x=0x62, .y=0x28, .sp=0x42, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x62}, {.addr=0x66e4, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x66e4, .value=0x4d, .type=IO_READ},
        {.addr=0x66e5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x6fc0, .a=0x56, .x=0xca, .y=0xa6, .sp=0x2e, .status=0x06};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x6fc0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6fc1, .a=0x56, .x=0xca, .y=0xa6, .sp=0x2d, .status=0x06};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xca}, {.addr=0x6fc0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6fc0, .value=0x4d, .type=IO_READ},
        {.addr=0x6fc1, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x96a9, .a=0xbc, .x=0xb5, .y=0xa4, .sp=0x49, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x00}, {.addr=0x96a9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x96aa, .a=0xbc, .x=0xb5, .y=0xa4, .sp=0x48, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0xb5}, {.addr=0x96a9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x96a9, .value=0x4d, .type=IO_READ},
        {.addr=0x96aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0xb5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xcb0f, .a=0xdf, .x=0x46, .y=0x34, .sp=0x12, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0xcb0f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcb10, .a=0xdf, .x=0x46, .y=0x34, .sp=0x11, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0x46}, {.addr=0xcb0f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcb0f, .value=0x4d, .type=IO_READ},
        {.addr=0xcb10, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0x46, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01FB) {
    const struct CPU_State initial_cpu = {.pc=0xb52a, .a=0xee, .x=0xda, .y=0x76, .sp=0x82, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0182, .value=0x00}, {.addr=0xb52a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb52b, .a=0xee, .x=0xda, .y=0x76, .sp=0x81, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0182, .value=0xda}, {.addr=0xb52a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb52a, .value=0x4d, .type=IO_READ},
        {.addr=0xb52b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0182, .value=0xda, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x6ba6, .a=0x7c, .x=0xa2, .y=0x83, .sp=0x4b, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x00}, {.addr=0x6ba6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6ba7, .a=0x7c, .x=0xa2, .y=0x83, .sp=0x4a, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xa2}, {.addr=0x6ba6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6ba6, .value=0x4d, .type=IO_READ},
        {.addr=0x6ba7, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0xa2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xb893, .a=0xc2, .x=0x5c, .y=0xc7, .sp=0xb4, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0xb893, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb894, .a=0xc2, .x=0x5c, .y=0xc7, .sp=0xb3, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x5c}, {.addr=0xb893, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb893, .value=0x4d, .type=IO_READ},
        {.addr=0xb894, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01FE) {
    const struct CPU_State initial_cpu = {.pc=0x1c59, .a=0x85, .x=0x02, .y=0x94, .sp=0x99, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0199, .value=0x00}, {.addr=0x1c59, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1c5a, .a=0x85, .x=0x02, .y=0x94, .sp=0x98, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x0199, .value=0x02}, {.addr=0x1c59, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1c59, .value=0x4d, .type=IO_READ},
        {.addr=0x1c5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0199, .value=0x02, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_01FF) {
    const struct CPU_State initial_cpu = {.pc=0xa3dc, .a=0x93, .x=0x35, .y=0x06, .sp=0x43, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x00}, {.addr=0xa3dc, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa3dd, .a=0x93, .x=0x35, .y=0x06, .sp=0x42, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x35}, {.addr=0xa3dc, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa3dc, .value=0x4d, .type=IO_READ},
        {.addr=0xa3dd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x35, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0200) {
    const struct CPU_State initial_cpu = {.pc=0x8a7b, .a=0x37, .x=0x9e, .y=0x75, .sp=0x3a, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x00}, {.addr=0x8a7b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8a7c, .a=0x37, .x=0x9e, .y=0x75, .sp=0x39, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x9e}, {.addr=0x8a7b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8a7b, .value=0x4d, .type=IO_READ},
        {.addr=0x8a7c, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x9e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0201) {
    const struct CPU_State initial_cpu = {.pc=0x9358, .a=0x76, .x=0x2b, .y=0x0b, .sp=0x0c, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x010c, .value=0x00}, {.addr=0x9358, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9359, .a=0x76, .x=0x2b, .y=0x0b, .sp=0x0b, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x010c, .value=0x2b}, {.addr=0x9358, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9358, .value=0x4d, .type=IO_READ},
        {.addr=0x9359, .value=DUMMY, .type=IO_READ},
        {.addr=0x010c, .value=0x2b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0202) {
    const struct CPU_State initial_cpu = {.pc=0x3f1a, .a=0x6f, .x=0x4e, .y=0xaf, .sp=0x43, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x00}, {.addr=0x3f1a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3f1b, .a=0x6f, .x=0x4e, .y=0xaf, .sp=0x42, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x4e}, {.addr=0x3f1a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3f1a, .value=0x4d, .type=IO_READ},
        {.addr=0x3f1b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x4e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0203) {
    const struct CPU_State initial_cpu = {.pc=0xe74a, .a=0x81, .x=0x3e, .y=0x39, .sp=0xe7, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x00}, {.addr=0xe74a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe74b, .a=0x81, .x=0x3e, .y=0x39, .sp=0xe6, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x3e}, {.addr=0xe74a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe74a, .value=0x4d, .type=IO_READ},
        {.addr=0xe74b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0x3e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0204) {
    const struct CPU_State initial_cpu = {.pc=0x0597, .a=0xed, .x=0x1a, .y=0x97, .sp=0xca, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x00}, {.addr=0x0597, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0598, .a=0xed, .x=0x1a, .y=0x97, .sp=0xc9, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0x1a}, {.addr=0x0597, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0597, .value=0x4d, .type=IO_READ},
        {.addr=0x0598, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0x1a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0205) {
    const struct CPU_State initial_cpu = {.pc=0xaa6e, .a=0x3e, .x=0xbb, .y=0x71, .sp=0x3f, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x00}, {.addr=0xaa6e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xaa6f, .a=0x3e, .x=0xbb, .y=0x71, .sp=0x3e, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0xbb}, {.addr=0xaa6e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xaa6e, .value=0x4d, .type=IO_READ},
        {.addr=0xaa6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0xbb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0206) {
    const struct CPU_State initial_cpu = {.pc=0x9237, .a=0xf1, .x=0xf3, .y=0x76, .sp=0x22, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0x9237, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9238, .a=0xf1, .x=0xf3, .y=0x76, .sp=0x21, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0xf3}, {.addr=0x9237, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9237, .value=0x4d, .type=IO_READ},
        {.addr=0x9238, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0xf3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0207) {
    const struct CPU_State initial_cpu = {.pc=0x5853, .a=0xb1, .x=0x18, .y=0xef, .sp=0x93, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x00}, {.addr=0x5853, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5854, .a=0xb1, .x=0x18, .y=0xef, .sp=0x92, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x18}, {.addr=0x5853, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5853, .value=0x4d, .type=IO_READ},
        {.addr=0x5854, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x18, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0208) {
    const struct CPU_State initial_cpu = {.pc=0x06c9, .a=0xd5, .x=0xa7, .y=0x2d, .sp=0xb9, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0x06c9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x06ca, .a=0xd5, .x=0xa7, .y=0x2d, .sp=0xb8, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xa7}, {.addr=0x06c9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x06c9, .value=0x4d, .type=IO_READ},
        {.addr=0x06ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0xa7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0209) {
    const struct CPU_State initial_cpu = {.pc=0x6986, .a=0xa0, .x=0x5a, .y=0x7c, .sp=0x10, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0x6986, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6987, .a=0xa0, .x=0x5a, .y=0x7c, .sp=0x0f, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x5a}, {.addr=0x6986, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6986, .value=0x4d, .type=IO_READ},
        {.addr=0x6987, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x5a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_020A) {
    const struct CPU_State initial_cpu = {.pc=0x9787, .a=0xa9, .x=0x5f, .y=0xcf, .sp=0x2f, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x012f, .value=0x00}, {.addr=0x9787, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9788, .a=0xa9, .x=0x5f, .y=0xcf, .sp=0x2e, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x012f, .value=0x5f}, {.addr=0x9787, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9787, .value=0x4d, .type=IO_READ},
        {.addr=0x9788, .value=DUMMY, .type=IO_READ},
        {.addr=0x012f, .value=0x5f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_020B) {
    const struct CPU_State initial_cpu = {.pc=0x8f17, .a=0xa3, .x=0x92, .y=0xb2, .sp=0x27, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0127, .value=0x00}, {.addr=0x8f17, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8f18, .a=0xa3, .x=0x92, .y=0xb2, .sp=0x26, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0127, .value=0x92}, {.addr=0x8f17, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8f17, .value=0x4d, .type=IO_READ},
        {.addr=0x8f18, .value=DUMMY, .type=IO_READ},
        {.addr=0x0127, .value=0x92, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_020C) {
    const struct CPU_State initial_cpu = {.pc=0x2f14, .a=0x9a, .x=0x63, .y=0xf6, .sp=0xb1, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0x2f14, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2f15, .a=0x9a, .x=0x63, .y=0xf6, .sp=0xb0, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x63}, {.addr=0x2f14, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2f14, .value=0x4d, .type=IO_READ},
        {.addr=0x2f15, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x63, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_020D) {
    const struct CPU_State initial_cpu = {.pc=0x6783, .a=0xbe, .x=0xa0, .y=0x63, .sp=0xab, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x00}, {.addr=0x6783, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6784, .a=0xbe, .x=0xa0, .y=0x63, .sp=0xaa, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xa0}, {.addr=0x6783, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6783, .value=0x4d, .type=IO_READ},
        {.addr=0x6784, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0xa0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_020E) {
    const struct CPU_State initial_cpu = {.pc=0x3d78, .a=0x89, .x=0x5c, .y=0x9c, .sp=0x05, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x00}, {.addr=0x3d78, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3d79, .a=0x89, .x=0x5c, .y=0x9c, .sp=0x04, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x5c}, {.addr=0x3d78, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3d78, .value=0x4d, .type=IO_READ},
        {.addr=0x3d79, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_020F) {
    const struct CPU_State initial_cpu = {.pc=0x1edc, .a=0xa7, .x=0xa4, .y=0xb2, .sp=0x09, .status=0x01};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x00}, {.addr=0x1edc, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1edd, .a=0xa7, .x=0xa4, .y=0xb2, .sp=0x08, .status=0x01};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xa4}, {.addr=0x1edc, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1edc, .value=0x4d, .type=IO_READ},
        {.addr=0x1edd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0210) {
    const struct CPU_State initial_cpu = {.pc=0xf090, .a=0x10, .x=0x1d, .y=0x33, .sp=0xc1, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0xf090, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf091, .a=0x10, .x=0x1d, .y=0x33, .sp=0xc0, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x1d}, {.addr=0xf090, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf090, .value=0x4d, .type=IO_READ},
        {.addr=0xf091, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x1d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0211) {
    const struct CPU_State initial_cpu = {.pc=0xb8ff, .a=0xd4, .x=0xf8, .y=0x97, .sp=0x95, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x0195, .value=0x00}, {.addr=0xb8ff, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb900, .a=0xd4, .x=0xf8, .y=0x97, .sp=0x94, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x0195, .value=0xf8}, {.addr=0xb8ff, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb8ff, .value=0x4d, .type=IO_READ},
        {.addr=0xb900, .value=DUMMY, .type=IO_READ},
        {.addr=0x0195, .value=0xf8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0212) {
    const struct CPU_State initial_cpu = {.pc=0x7040, .a=0xb4, .x=0xde, .y=0x37, .sp=0x50, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x00}, {.addr=0x7040, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7041, .a=0xb4, .x=0xde, .y=0x37, .sp=0x4f, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0xde}, {.addr=0x7040, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7040, .value=0x4d, .type=IO_READ},
        {.addr=0x7041, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0xde, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0213) {
    const struct CPU_State initial_cpu = {.pc=0x3682, .a=0xdf, .x=0x18, .y=0x6a, .sp=0x03, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x00}, {.addr=0x3682, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3683, .a=0xdf, .x=0x18, .y=0x6a, .sp=0x02, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0x18}, {.addr=0x3682, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3682, .value=0x4d, .type=IO_READ},
        {.addr=0x3683, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0x18, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0214) {
    const struct CPU_State initial_cpu = {.pc=0x0e8e, .a=0x4f, .x=0x03, .y=0x07, .sp=0x62, .status=0x5a};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x00}, {.addr=0x0e8e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0e8f, .a=0x4f, .x=0x03, .y=0x07, .sp=0x61, .status=0x5a};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x03}, {.addr=0x0e8e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0e8e, .value=0x4d, .type=IO_READ},
        {.addr=0x0e8f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x03, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0215) {
    const struct CPU_State initial_cpu = {.pc=0x4147, .a=0xb8, .x=0xd7, .y=0x89, .sp=0x2c, .status=0x7b};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x00}, {.addr=0x4147, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4148, .a=0xb8, .x=0xd7, .y=0x89, .sp=0x2b, .status=0x7b};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0xd7}, {.addr=0x4147, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4147, .value=0x4d, .type=IO_READ},
        {.addr=0x4148, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0xd7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0216) {
    const struct CPU_State initial_cpu = {.pc=0xdbe5, .a=0xe2, .x=0xc6, .y=0xfa, .sp=0x51, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x0151, .value=0x00}, {.addr=0xdbe5, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xdbe6, .a=0xe2, .x=0xc6, .y=0xfa, .sp=0x50, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x0151, .value=0xc6}, {.addr=0xdbe5, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xdbe5, .value=0x4d, .type=IO_READ},
        {.addr=0xdbe6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0151, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0217) {
    const struct CPU_State initial_cpu = {.pc=0xdf54, .a=0x63, .x=0xfb, .y=0xc8, .sp=0x9f, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x00}, {.addr=0xdf54, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xdf55, .a=0x63, .x=0xfb, .y=0xc8, .sp=0x9e, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0xfb}, {.addr=0xdf54, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xdf54, .value=0x4d, .type=IO_READ},
        {.addr=0xdf55, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0xfb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0218) {
    const struct CPU_State initial_cpu = {.pc=0xb1eb, .a=0xb7, .x=0xec, .y=0x8a, .sp=0x68, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x0168, .value=0x00}, {.addr=0xb1eb, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb1ec, .a=0xb7, .x=0xec, .y=0x8a, .sp=0x67, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x0168, .value=0xec}, {.addr=0xb1eb, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb1eb, .value=0x4d, .type=IO_READ},
        {.addr=0xb1ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0168, .value=0xec, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0219) {
    const struct CPU_State initial_cpu = {.pc=0x6770, .a=0x23, .x=0x15, .y=0x1e, .sp=0xf1, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x01f1, .value=0x00}, {.addr=0x6770, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6771, .a=0x23, .x=0x15, .y=0x1e, .sp=0xf0, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x01f1, .value=0x15}, {.addr=0x6770, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6770, .value=0x4d, .type=IO_READ},
        {.addr=0x6771, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f1, .value=0x15, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_021A) {
    const struct CPU_State initial_cpu = {.pc=0xa358, .a=0x5b, .x=0xf4, .y=0xdb, .sp=0xe4, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0xa358, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa359, .a=0x5b, .x=0xf4, .y=0xdb, .sp=0xe3, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0xf4}, {.addr=0xa358, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa358, .value=0x4d, .type=IO_READ},
        {.addr=0xa359, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0xf4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_021B) {
    const struct CPU_State initial_cpu = {.pc=0xe8f9, .a=0xbc, .x=0x53, .y=0xce, .sp=0xea, .status=0x23};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x00}, {.addr=0xe8f9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe8fa, .a=0xbc, .x=0x53, .y=0xce, .sp=0xe9, .status=0x23};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x53}, {.addr=0xe8f9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe8f9, .value=0x4d, .type=IO_READ},
        {.addr=0xe8fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x53, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_021C) {
    const struct CPU_State initial_cpu = {.pc=0xfef3, .a=0x39, .x=0x09, .y=0xed, .sp=0x80, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0xfef3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xfef4, .a=0x39, .x=0x09, .y=0xed, .sp=0x7f, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x09}, {.addr=0xfef3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xfef3, .value=0x4d, .type=IO_READ},
        {.addr=0xfef4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x09, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_021D) {
    const struct CPU_State initial_cpu = {.pc=0x61ed, .a=0xbb, .x=0xc3, .y=0xdb, .sp=0x48, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x00}, {.addr=0x61ed, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x61ee, .a=0xbb, .x=0xc3, .y=0xdb, .sp=0x47, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0xc3}, {.addr=0x61ed, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x61ed, .value=0x4d, .type=IO_READ},
        {.addr=0x61ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0xc3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_021E) {
    const struct CPU_State initial_cpu = {.pc=0xaa26, .a=0xbd, .x=0x79, .y=0x7a, .sp=0x7b, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x00}, {.addr=0xaa26, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xaa27, .a=0xbd, .x=0x79, .y=0x7a, .sp=0x7a, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x79}, {.addr=0xaa26, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xaa26, .value=0x4d, .type=IO_READ},
        {.addr=0xaa27, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_021F) {
    const struct CPU_State initial_cpu = {.pc=0x46d6, .a=0x33, .x=0xe3, .y=0xa1, .sp=0xaf, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x01af, .value=0x00}, {.addr=0x46d6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x46d7, .a=0x33, .x=0xe3, .y=0xa1, .sp=0xae, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x01af, .value=0xe3}, {.addr=0x46d6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x46d6, .value=0x4d, .type=IO_READ},
        {.addr=0x46d7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01af, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0220) {
    const struct CPU_State initial_cpu = {.pc=0x802c, .a=0x03, .x=0x0b, .y=0x8a, .sp=0xe0, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x00}, {.addr=0x802c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x802d, .a=0x03, .x=0x0b, .y=0x8a, .sp=0xdf, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x0b}, {.addr=0x802c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x802c, .value=0x4d, .type=IO_READ},
        {.addr=0x802d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x0b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0221) {
    const struct CPU_State initial_cpu = {.pc=0xb1ae, .a=0x23, .x=0x77, .y=0xce, .sp=0xa8, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0xb1ae, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb1af, .a=0x23, .x=0x77, .y=0xce, .sp=0xa7, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x77}, {.addr=0xb1ae, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb1ae, .value=0x4d, .type=IO_READ},
        {.addr=0xb1af, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0x77, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0222) {
    const struct CPU_State initial_cpu = {.pc=0xd1c9, .a=0x0f, .x=0x2d, .y=0x7a, .sp=0x3d, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x00}, {.addr=0xd1c9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd1ca, .a=0x0f, .x=0x2d, .y=0x7a, .sp=0x3c, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x2d}, {.addr=0xd1c9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd1c9, .value=0x4d, .type=IO_READ},
        {.addr=0xd1ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0x2d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0223) {
    const struct CPU_State initial_cpu = {.pc=0xc04d, .a=0x2d, .x=0x98, .y=0x6a, .sp=0xf3, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x00}, {.addr=0xc04d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc04e, .a=0x2d, .x=0x98, .y=0x6a, .sp=0xf2, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x98}, {.addr=0xc04d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc04d, .value=0x4d, .type=IO_READ},
        {.addr=0xc04e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0x98, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0224) {
    const struct CPU_State initial_cpu = {.pc=0xd56e, .a=0x59, .x=0x88, .y=0xe3, .sp=0xc2, .status=0xf7};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x00}, {.addr=0xd56e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd56f, .a=0x59, .x=0x88, .y=0xe3, .sp=0xc1, .status=0xf7};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x88}, {.addr=0xd56e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd56e, .value=0x4d, .type=IO_READ},
        {.addr=0xd56f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0x88, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0225) {
    const struct CPU_State initial_cpu = {.pc=0x8019, .a=0x00, .x=0x7c, .y=0x29, .sp=0xea, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ea, .value=0x00}, {.addr=0x8019, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x801a, .a=0x00, .x=0x7c, .y=0x29, .sp=0xe9, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01ea, .value=0x7c}, {.addr=0x8019, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8019, .value=0x4d, .type=IO_READ},
        {.addr=0x801a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ea, .value=0x7c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0226) {
    const struct CPU_State initial_cpu = {.pc=0x803e, .a=0x45, .x=0x45, .y=0x24, .sp=0xb6, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01b6, .value=0x00}, {.addr=0x803e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x803f, .a=0x45, .x=0x45, .y=0x24, .sp=0xb5, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01b6, .value=0x45}, {.addr=0x803e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x803e, .value=0x4d, .type=IO_READ},
        {.addr=0x803f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b6, .value=0x45, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0227) {
    const struct CPU_State initial_cpu = {.pc=0xf6c9, .a=0xea, .x=0xc2, .y=0xba, .sp=0x34, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x00}, {.addr=0xf6c9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf6ca, .a=0xea, .x=0xc2, .y=0xba, .sp=0x33, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0xc2}, {.addr=0xf6c9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf6c9, .value=0x4d, .type=IO_READ},
        {.addr=0xf6ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0xc2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0228) {
    const struct CPU_State initial_cpu = {.pc=0x568f, .a=0xbb, .x=0xc9, .y=0x49, .sp=0xff, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x00}, {.addr=0x568f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5690, .a=0xbb, .x=0xc9, .y=0x49, .sp=0xfe, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0xc9}, {.addr=0x568f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x568f, .value=0x4d, .type=IO_READ},
        {.addr=0x5690, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0xc9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0229) {
    const struct CPU_State initial_cpu = {.pc=0x0f72, .a=0x6a, .x=0xb3, .y=0x3f, .sp=0x6d, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x00}, {.addr=0x0f72, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0f73, .a=0x6a, .x=0xb3, .y=0x3f, .sp=0x6c, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0xb3}, {.addr=0x0f72, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0f72, .value=0x4d, .type=IO_READ},
        {.addr=0x0f73, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0xb3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_022A) {
    const struct CPU_State initial_cpu = {.pc=0x0a6f, .a=0xd1, .x=0x4e, .y=0x18, .sp=0x78, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0x0a6f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0a70, .a=0xd1, .x=0x4e, .y=0x18, .sp=0x77, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x4e}, {.addr=0x0a6f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0a6f, .value=0x4d, .type=IO_READ},
        {.addr=0x0a70, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x4e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_022B) {
    const struct CPU_State initial_cpu = {.pc=0x6b23, .a=0x0a, .x=0xc2, .y=0x1d, .sp=0x26, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x00}, {.addr=0x6b23, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6b24, .a=0x0a, .x=0xc2, .y=0x1d, .sp=0x25, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0xc2}, {.addr=0x6b23, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6b23, .value=0x4d, .type=IO_READ},
        {.addr=0x6b24, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0xc2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_022C) {
    const struct CPU_State initial_cpu = {.pc=0xfb3b, .a=0xe3, .x=0x42, .y=0xb2, .sp=0x43, .status=0x94};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x00}, {.addr=0xfb3b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xfb3c, .a=0xe3, .x=0x42, .y=0xb2, .sp=0x42, .status=0x94};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x42}, {.addr=0xfb3b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xfb3b, .value=0x4d, .type=IO_READ},
        {.addr=0xfb3c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x42, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_022D) {
    const struct CPU_State initial_cpu = {.pc=0xe7fe, .a=0xf3, .x=0x55, .y=0x1a, .sp=0xa3, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x01a3, .value=0x00}, {.addr=0xe7fe, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe7ff, .a=0xf3, .x=0x55, .y=0x1a, .sp=0xa2, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x01a3, .value=0x55}, {.addr=0xe7fe, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe7fe, .value=0x4d, .type=IO_READ},
        {.addr=0xe7ff, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a3, .value=0x55, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_022E) {
    const struct CPU_State initial_cpu = {.pc=0x7e4a, .a=0xdf, .x=0x74, .y=0xf6, .sp=0xf3, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x00}, {.addr=0x7e4a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7e4b, .a=0xdf, .x=0x74, .y=0xf6, .sp=0xf2, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x74}, {.addr=0x7e4a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7e4a, .value=0x4d, .type=IO_READ},
        {.addr=0x7e4b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0x74, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_022F) {
    const struct CPU_State initial_cpu = {.pc=0xc274, .a=0x51, .x=0xb9, .y=0x8c, .sp=0xcc, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x00}, {.addr=0xc274, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc275, .a=0x51, .x=0xb9, .y=0x8c, .sp=0xcb, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xb9}, {.addr=0xc274, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc274, .value=0x4d, .type=IO_READ},
        {.addr=0xc275, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0xb9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0230) {
    const struct CPU_State initial_cpu = {.pc=0x2832, .a=0x9e, .x=0x87, .y=0x10, .sp=0xfb, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0x2832, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2833, .a=0x9e, .x=0x87, .y=0x10, .sp=0xfa, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x87}, {.addr=0x2832, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2832, .value=0x4d, .type=IO_READ},
        {.addr=0x2833, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x87, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0231) {
    const struct CPU_State initial_cpu = {.pc=0x8022, .a=0x9d, .x=0x62, .y=0x38, .sp=0xe3, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0x8022, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8023, .a=0x9d, .x=0x62, .y=0x38, .sp=0xe2, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x62}, {.addr=0x8022, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8022, .value=0x4d, .type=IO_READ},
        {.addr=0x8023, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0232) {
    const struct CPU_State initial_cpu = {.pc=0xccb9, .a=0x9f, .x=0xa3, .y=0x43, .sp=0x05, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x00}, {.addr=0xccb9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xccba, .a=0x9f, .x=0xa3, .y=0x43, .sp=0x04, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0xa3}, {.addr=0xccb9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xccb9, .value=0x4d, .type=IO_READ},
        {.addr=0xccba, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0xa3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0233) {
    const struct CPU_State initial_cpu = {.pc=0xca3f, .a=0x49, .x=0xe3, .y=0xe1, .sp=0x77, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x00}, {.addr=0xca3f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xca40, .a=0x49, .x=0xe3, .y=0xe1, .sp=0x76, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0xe3}, {.addr=0xca3f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xca3f, .value=0x4d, .type=IO_READ},
        {.addr=0xca40, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0234) {
    const struct CPU_State initial_cpu = {.pc=0xff9f, .a=0x95, .x=0xc1, .y=0x93, .sp=0xb5, .status=0x51};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x00}, {.addr=0xff9f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xffa0, .a=0x95, .x=0xc1, .y=0x93, .sp=0xb4, .status=0x51};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0xc1}, {.addr=0xff9f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xff9f, .value=0x4d, .type=IO_READ},
        {.addr=0xffa0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0235) {
    const struct CPU_State initial_cpu = {.pc=0x24d9, .a=0x43, .x=0xa0, .y=0x6e, .sp=0x92, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x00}, {.addr=0x24d9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x24da, .a=0x43, .x=0xa0, .y=0x6e, .sp=0x91, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0xa0}, {.addr=0x24d9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x24d9, .value=0x4d, .type=IO_READ},
        {.addr=0x24da, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0xa0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0236) {
    const struct CPU_State initial_cpu = {.pc=0x8d67, .a=0xa1, .x=0x48, .y=0xab, .sp=0xb9, .status=0x85};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0x8d67, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8d68, .a=0xa1, .x=0x48, .y=0xab, .sp=0xb8, .status=0x85};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0x48}, {.addr=0x8d67, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8d67, .value=0x4d, .type=IO_READ},
        {.addr=0x8d68, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0x48, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0237) {
    const struct CPU_State initial_cpu = {.pc=0xa15b, .a=0x6c, .x=0xfc, .y=0x99, .sp=0xdf, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0xa15b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa15c, .a=0x6c, .x=0xfc, .y=0x99, .sp=0xde, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xfc}, {.addr=0xa15b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa15b, .value=0x4d, .type=IO_READ},
        {.addr=0xa15c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0xfc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0238) {
    const struct CPU_State initial_cpu = {.pc=0xc1bf, .a=0xfd, .x=0xad, .y=0x17, .sp=0xa4, .status=0x90};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x00}, {.addr=0xc1bf, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc1c0, .a=0xfd, .x=0xad, .y=0x17, .sp=0xa3, .status=0x90};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0xad}, {.addr=0xc1bf, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc1bf, .value=0x4d, .type=IO_READ},
        {.addr=0xc1c0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0xad, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0239) {
    const struct CPU_State initial_cpu = {.pc=0x07aa, .a=0xbf, .x=0x0e, .y=0xd2, .sp=0x17, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x0117, .value=0x00}, {.addr=0x07aa, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x07ab, .a=0xbf, .x=0x0e, .y=0xd2, .sp=0x16, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x0117, .value=0x0e}, {.addr=0x07aa, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x07aa, .value=0x4d, .type=IO_READ},
        {.addr=0x07ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0117, .value=0x0e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_023A) {
    const struct CPU_State initial_cpu = {.pc=0x5b07, .a=0xe5, .x=0xaf, .y=0x04, .sp=0x80, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0x5b07, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5b08, .a=0xe5, .x=0xaf, .y=0x04, .sp=0x7f, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0xaf}, {.addr=0x5b07, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5b07, .value=0x4d, .type=IO_READ},
        {.addr=0x5b08, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0xaf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_023B) {
    const struct CPU_State initial_cpu = {.pc=0x5c34, .a=0xba, .x=0x97, .y=0x54, .sp=0x21, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x00}, {.addr=0x5c34, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5c35, .a=0xba, .x=0x97, .y=0x54, .sp=0x20, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x97}, {.addr=0x5c34, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5c34, .value=0x4d, .type=IO_READ},
        {.addr=0x5c35, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0x97, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_023C) {
    const struct CPU_State initial_cpu = {.pc=0xbdc3, .a=0xb4, .x=0x5e, .y=0x1c, .sp=0x43, .status=0xd7};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x00}, {.addr=0xbdc3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbdc4, .a=0xb4, .x=0x5e, .y=0x1c, .sp=0x42, .status=0xd7};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x5e}, {.addr=0xbdc3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbdc3, .value=0x4d, .type=IO_READ},
        {.addr=0xbdc4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x5e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_023D) {
    const struct CPU_State initial_cpu = {.pc=0x8660, .a=0x88, .x=0x3f, .y=0x87, .sp=0x5f, .status=0x8f};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0x8660, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8661, .a=0x88, .x=0x3f, .y=0x87, .sp=0x5e, .status=0x8f};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0x3f}, {.addr=0x8660, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8660, .value=0x4d, .type=IO_READ},
        {.addr=0x8661, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0x3f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_023E) {
    const struct CPU_State initial_cpu = {.pc=0xcd69, .a=0xeb, .x=0x73, .y=0x3f, .sp=0x8d, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x018d, .value=0x00}, {.addr=0xcd69, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcd6a, .a=0xeb, .x=0x73, .y=0x3f, .sp=0x8c, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x018d, .value=0x73}, {.addr=0xcd69, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcd69, .value=0x4d, .type=IO_READ},
        {.addr=0xcd6a, .value=DUMMY, .type=IO_READ},
        {.addr=0x018d, .value=0x73, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_023F) {
    const struct CPU_State initial_cpu = {.pc=0xc563, .a=0x0c, .x=0x30, .y=0x97, .sp=0xd6, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x00}, {.addr=0xc563, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc564, .a=0x0c, .x=0x30, .y=0x97, .sp=0xd5, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x30}, {.addr=0xc563, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc563, .value=0x4d, .type=IO_READ},
        {.addr=0xc564, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x30, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0240) {
    const struct CPU_State initial_cpu = {.pc=0xd55c, .a=0xc9, .x=0xbb, .y=0xe5, .sp=0xbe, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x00}, {.addr=0xd55c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd55d, .a=0xc9, .x=0xbb, .y=0xe5, .sp=0xbd, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0xbb}, {.addr=0xd55c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd55c, .value=0x4d, .type=IO_READ},
        {.addr=0xd55d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0xbb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0241) {
    const struct CPU_State initial_cpu = {.pc=0x4ec4, .a=0x7d, .x=0xa0, .y=0x25, .sp=0x2c, .status=0x38};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x00}, {.addr=0x4ec4, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4ec5, .a=0x7d, .x=0xa0, .y=0x25, .sp=0x2b, .status=0x38};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0xa0}, {.addr=0x4ec4, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4ec4, .value=0x4d, .type=IO_READ},
        {.addr=0x4ec5, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0xa0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0242) {
    const struct CPU_State initial_cpu = {.pc=0x5cbd, .a=0xd0, .x=0xfa, .y=0x02, .sp=0x2c, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x00}, {.addr=0x5cbd, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5cbe, .a=0xd0, .x=0xfa, .y=0x02, .sp=0x2b, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0xfa}, {.addr=0x5cbd, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5cbd, .value=0x4d, .type=IO_READ},
        {.addr=0x5cbe, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0xfa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0243) {
    const struct CPU_State initial_cpu = {.pc=0x1ab1, .a=0x75, .x=0x8e, .y=0x87, .sp=0x05, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x00}, {.addr=0x1ab1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1ab2, .a=0x75, .x=0x8e, .y=0x87, .sp=0x04, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x8e}, {.addr=0x1ab1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1ab1, .value=0x4d, .type=IO_READ},
        {.addr=0x1ab2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x8e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0244) {
    const struct CPU_State initial_cpu = {.pc=0x3b17, .a=0xde, .x=0x7c, .y=0x08, .sp=0x01, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x00}, {.addr=0x3b17, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3b18, .a=0xde, .x=0x7c, .y=0x08, .sp=0x00, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0x7c}, {.addr=0x3b17, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3b17, .value=0x4d, .type=IO_READ},
        {.addr=0x3b18, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0x7c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0245) {
    const struct CPU_State initial_cpu = {.pc=0x4c39, .a=0xab, .x=0xa7, .y=0x5d, .sp=0xa0, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x01a0, .value=0x00}, {.addr=0x4c39, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4c3a, .a=0xab, .x=0xa7, .y=0x5d, .sp=0x9f, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x01a0, .value=0xa7}, {.addr=0x4c39, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4c39, .value=0x4d, .type=IO_READ},
        {.addr=0x4c3a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a0, .value=0xa7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0246) {
    const struct CPU_State initial_cpu = {.pc=0x8d52, .a=0x3d, .x=0xe9, .y=0xc6, .sp=0xdd, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x00}, {.addr=0x8d52, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8d53, .a=0x3d, .x=0xe9, .y=0xc6, .sp=0xdc, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0xe9}, {.addr=0x8d52, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8d52, .value=0x4d, .type=IO_READ},
        {.addr=0x8d53, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0247) {
    const struct CPU_State initial_cpu = {.pc=0x8fa4, .a=0x9b, .x=0x04, .y=0xc1, .sp=0xb1, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0x8fa4, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8fa5, .a=0x9b, .x=0x04, .y=0xc1, .sp=0xb0, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x04}, {.addr=0x8fa4, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8fa4, .value=0x4d, .type=IO_READ},
        {.addr=0x8fa5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0248) {
    const struct CPU_State initial_cpu = {.pc=0x6b33, .a=0x7c, .x=0x5f, .y=0x6a, .sp=0xe4, .status=0x2e};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0x6b33, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6b34, .a=0x7c, .x=0x5f, .y=0x6a, .sp=0xe3, .status=0x2e};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x5f}, {.addr=0x6b33, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6b33, .value=0x4d, .type=IO_READ},
        {.addr=0x6b34, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x5f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0249) {
    const struct CPU_State initial_cpu = {.pc=0x47e1, .a=0x0a, .x=0x18, .y=0x38, .sp=0x59, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0x47e1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x47e2, .a=0x0a, .x=0x18, .y=0x38, .sp=0x58, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x18}, {.addr=0x47e1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x47e1, .value=0x4d, .type=IO_READ},
        {.addr=0x47e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x18, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_024A) {
    const struct CPU_State initial_cpu = {.pc=0xc534, .a=0xa5, .x=0x37, .y=0x4c, .sp=0xc4, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0xc534, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc535, .a=0xa5, .x=0x37, .y=0x4c, .sp=0xc3, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x37}, {.addr=0xc534, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc534, .value=0x4d, .type=IO_READ},
        {.addr=0xc535, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_024B) {
    const struct CPU_State initial_cpu = {.pc=0xa036, .a=0xe7, .x=0x00, .y=0xb8, .sp=0x78, .status=0xe3};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0xa036, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa037, .a=0xe7, .x=0x00, .y=0xb8, .sp=0x77, .status=0xe3};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0xa036, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa036, .value=0x4d, .type=IO_READ},
        {.addr=0xa037, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x00, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_024C) {
    const struct CPU_State initial_cpu = {.pc=0xe030, .a=0x46, .x=0x63, .y=0xc0, .sp=0x6b, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x00}, {.addr=0xe030, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe031, .a=0x46, .x=0x63, .y=0xc0, .sp=0x6a, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x63}, {.addr=0xe030, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe030, .value=0x4d, .type=IO_READ},
        {.addr=0xe031, .value=DUMMY, .type=IO_READ},
        {.addr=0x016b, .value=0x63, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_024D) {
    const struct CPU_State initial_cpu = {.pc=0x2063, .a=0x58, .x=0x71, .y=0x2a, .sp=0x55, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x00}, {.addr=0x2063, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2064, .a=0x58, .x=0x71, .y=0x2a, .sp=0x54, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x71}, {.addr=0x2063, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2063, .value=0x4d, .type=IO_READ},
        {.addr=0x2064, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x71, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_024E) {
    const struct CPU_State initial_cpu = {.pc=0x61d1, .a=0x70, .x=0x28, .y=0x41, .sp=0x4e, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0x61d1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x61d2, .a=0x70, .x=0x28, .y=0x41, .sp=0x4d, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0x28}, {.addr=0x61d1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x61d1, .value=0x4d, .type=IO_READ},
        {.addr=0x61d2, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0x28, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_024F) {
    const struct CPU_State initial_cpu = {.pc=0xa1de, .a=0x0d, .x=0xe7, .y=0xbf, .sp=0x2d, .status=0x77};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x00}, {.addr=0xa1de, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa1df, .a=0x0d, .x=0xe7, .y=0xbf, .sp=0x2c, .status=0x77};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0xe7}, {.addr=0xa1de, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa1de, .value=0x4d, .type=IO_READ},
        {.addr=0xa1df, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0xe7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0250) {
    const struct CPU_State initial_cpu = {.pc=0x6517, .a=0x3e, .x=0x44, .y=0xb6, .sp=0x80, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0x6517, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6518, .a=0x3e, .x=0x44, .y=0xb6, .sp=0x7f, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x44}, {.addr=0x6517, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6517, .value=0x4d, .type=IO_READ},
        {.addr=0x6518, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x44, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0251) {
    const struct CPU_State initial_cpu = {.pc=0x0abd, .a=0x0e, .x=0xa1, .y=0x53, .sp=0x9b, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x019b, .value=0x00}, {.addr=0x0abd, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0abe, .a=0x0e, .x=0xa1, .y=0x53, .sp=0x9a, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x019b, .value=0xa1}, {.addr=0x0abd, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0abd, .value=0x4d, .type=IO_READ},
        {.addr=0x0abe, .value=DUMMY, .type=IO_READ},
        {.addr=0x019b, .value=0xa1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0252) {
    const struct CPU_State initial_cpu = {.pc=0x9167, .a=0x02, .x=0xe3, .y=0x50, .sp=0xb7, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x00}, {.addr=0x9167, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9168, .a=0x02, .x=0xe3, .y=0x50, .sp=0xb6, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0xe3}, {.addr=0x9167, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9167, .value=0x4d, .type=IO_READ},
        {.addr=0x9168, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0253) {
    const struct CPU_State initial_cpu = {.pc=0xe4ef, .a=0x3c, .x=0x84, .y=0xe2, .sp=0xa7, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x00}, {.addr=0xe4ef, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe4f0, .a=0x3c, .x=0x84, .y=0xe2, .sp=0xa6, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x84}, {.addr=0xe4ef, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe4ef, .value=0x4d, .type=IO_READ},
        {.addr=0xe4f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0x84, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0254) {
    const struct CPU_State initial_cpu = {.pc=0x2fce, .a=0x90, .x=0x8d, .y=0x26, .sp=0xc0, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x01c0, .value=0x00}, {.addr=0x2fce, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2fcf, .a=0x90, .x=0x8d, .y=0x26, .sp=0xbf, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x01c0, .value=0x8d}, {.addr=0x2fce, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2fce, .value=0x4d, .type=IO_READ},
        {.addr=0x2fcf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c0, .value=0x8d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0255) {
    const struct CPU_State initial_cpu = {.pc=0xbcb9, .a=0x63, .x=0xa1, .y=0xbd, .sp=0xd9, .status=0x49};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x00}, {.addr=0xbcb9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbcba, .a=0x63, .x=0xa1, .y=0xbd, .sp=0xd8, .status=0x49};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0xa1}, {.addr=0xbcb9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbcb9, .value=0x4d, .type=IO_READ},
        {.addr=0xbcba, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0xa1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0256) {
    const struct CPU_State initial_cpu = {.pc=0xcd76, .a=0x7d, .x=0x50, .y=0x5a, .sp=0x2d, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x00}, {.addr=0xcd76, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcd77, .a=0x7d, .x=0x50, .y=0x5a, .sp=0x2c, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x50}, {.addr=0xcd76, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcd76, .value=0x4d, .type=IO_READ},
        {.addr=0xcd77, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0x50, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0257) {
    const struct CPU_State initial_cpu = {.pc=0x6799, .a=0xcd, .x=0xae, .y=0xfb, .sp=0xdc, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x00}, {.addr=0x6799, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x679a, .a=0xcd, .x=0xae, .y=0xfb, .sp=0xdb, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xae}, {.addr=0x6799, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6799, .value=0x4d, .type=IO_READ},
        {.addr=0x679a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0xae, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0258) {
    const struct CPU_State initial_cpu = {.pc=0x902a, .a=0x5a, .x=0xdc, .y=0x23, .sp=0xb4, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0x902a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x902b, .a=0x5a, .x=0xdc, .y=0x23, .sp=0xb3, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0xdc}, {.addr=0x902a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x902a, .value=0x4d, .type=IO_READ},
        {.addr=0x902b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0259) {
    const struct CPU_State initial_cpu = {.pc=0x065d, .a=0x1e, .x=0x77, .y=0xb2, .sp=0xc2, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x00}, {.addr=0x065d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x065e, .a=0x1e, .x=0x77, .y=0xb2, .sp=0xc1, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x77}, {.addr=0x065d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x065d, .value=0x4d, .type=IO_READ},
        {.addr=0x065e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0x77, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_025A) {
    const struct CPU_State initial_cpu = {.pc=0x81f0, .a=0x77, .x=0xc4, .y=0x17, .sp=0x60, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x00}, {.addr=0x81f0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x81f1, .a=0x77, .x=0xc4, .y=0x17, .sp=0x5f, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0xc4}, {.addr=0x81f0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x81f0, .value=0x4d, .type=IO_READ},
        {.addr=0x81f1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0xc4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_025B) {
    const struct CPU_State initial_cpu = {.pc=0x928b, .a=0x2a, .x=0x07, .y=0xf4, .sp=0xf9, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x00}, {.addr=0x928b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x928c, .a=0x2a, .x=0x07, .y=0xf4, .sp=0xf8, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x07}, {.addr=0x928b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x928b, .value=0x4d, .type=IO_READ},
        {.addr=0x928c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x07, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_025C) {
    const struct CPU_State initial_cpu = {.pc=0x6e3b, .a=0x0a, .x=0xea, .y=0x44, .sp=0xbc, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x00}, {.addr=0x6e3b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6e3c, .a=0x0a, .x=0xea, .y=0x44, .sp=0xbb, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0xea}, {.addr=0x6e3b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6e3b, .value=0x4d, .type=IO_READ},
        {.addr=0x6e3c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0xea, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_025D) {
    const struct CPU_State initial_cpu = {.pc=0x2393, .a=0x1c, .x=0x4d, .y=0x32, .sp=0xad, .status=0xec};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x00}, {.addr=0x2393, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2394, .a=0x1c, .x=0x4d, .y=0x32, .sp=0xac, .status=0xec};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x4d}, {.addr=0x2393, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2393, .value=0x4d, .type=IO_READ},
        {.addr=0x2394, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0x4d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_025E) {
    const struct CPU_State initial_cpu = {.pc=0x8069, .a=0x3a, .x=0x70, .y=0x44, .sp=0xe3, .status=0x21};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0x8069, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x806a, .a=0x3a, .x=0x70, .y=0x44, .sp=0xe2, .status=0x21};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x70}, {.addr=0x8069, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8069, .value=0x4d, .type=IO_READ},
        {.addr=0x806a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0x70, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_025F) {
    const struct CPU_State initial_cpu = {.pc=0x19bd, .a=0x1c, .x=0xb0, .y=0x88, .sp=0xb7, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01b7, .value=0x00}, {.addr=0x19bd, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x19be, .a=0x1c, .x=0xb0, .y=0x88, .sp=0xb6, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01b7, .value=0xb0}, {.addr=0x19bd, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x19bd, .value=0x4d, .type=IO_READ},
        {.addr=0x19be, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b7, .value=0xb0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0260) {
    const struct CPU_State initial_cpu = {.pc=0xac84, .a=0xd0, .x=0xc1, .y=0xbc, .sp=0xcc, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x00}, {.addr=0xac84, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xac85, .a=0xd0, .x=0xc1, .y=0xbc, .sp=0xcb, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xc1}, {.addr=0xac84, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xac84, .value=0x4d, .type=IO_READ},
        {.addr=0xac85, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0261) {
    const struct CPU_State initial_cpu = {.pc=0xdb26, .a=0xac, .x=0x73, .y=0x63, .sp=0xe3, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0xdb26, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xdb27, .a=0xac, .x=0x73, .y=0x63, .sp=0xe2, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x73}, {.addr=0xdb26, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xdb26, .value=0x4d, .type=IO_READ},
        {.addr=0xdb27, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0x73, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0262) {
    const struct CPU_State initial_cpu = {.pc=0xe38e, .a=0x23, .x=0x70, .y=0x2e, .sp=0x21, .status=0x72};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x00}, {.addr=0xe38e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe38f, .a=0x23, .x=0x70, .y=0x2e, .sp=0x20, .status=0x72};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x70}, {.addr=0xe38e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe38e, .value=0x4d, .type=IO_READ},
        {.addr=0xe38f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0x70, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0263) {
    const struct CPU_State initial_cpu = {.pc=0xb610, .a=0x7c, .x=0x6f, .y=0x0b, .sp=0x04, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x0104, .value=0x00}, {.addr=0xb610, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb611, .a=0x7c, .x=0x6f, .y=0x0b, .sp=0x03, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x0104, .value=0x6f}, {.addr=0xb610, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb610, .value=0x4d, .type=IO_READ},
        {.addr=0xb611, .value=DUMMY, .type=IO_READ},
        {.addr=0x0104, .value=0x6f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0264) {
    const struct CPU_State initial_cpu = {.pc=0x6f4b, .a=0xbe, .x=0xb1, .y=0x99, .sp=0x2b, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x6f4b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6f4c, .a=0xbe, .x=0xb1, .y=0x99, .sp=0x2a, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0xb1}, {.addr=0x6f4b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6f4b, .value=0x4d, .type=IO_READ},
        {.addr=0x6f4c, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0xb1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0265) {
    const struct CPU_State initial_cpu = {.pc=0xd84f, .a=0x8d, .x=0xcb, .y=0xfe, .sp=0xdd, .status=0x7d};
    const struct RamEntry initial_ram[] = {{.addr=0x01dd, .value=0x00}, {.addr=0xd84f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd850, .a=0x8d, .x=0xcb, .y=0xfe, .sp=0xdc, .status=0x7d};
    const struct RamEntry final_ram[] = {{.addr=0x01dd, .value=0xcb}, {.addr=0xd84f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd84f, .value=0x4d, .type=IO_READ},
        {.addr=0xd850, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dd, .value=0xcb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0266) {
    const struct CPU_State initial_cpu = {.pc=0x236c, .a=0x9c, .x=0x8d, .y=0x9e, .sp=0xd3, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0x236c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x236d, .a=0x9c, .x=0x8d, .y=0x9e, .sp=0xd2, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x8d}, {.addr=0x236c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x236c, .value=0x4d, .type=IO_READ},
        {.addr=0x236d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x8d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0267) {
    const struct CPU_State initial_cpu = {.pc=0xe3b7, .a=0xf7, .x=0x8a, .y=0xce, .sp=0x6c, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x00}, {.addr=0xe3b7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe3b8, .a=0xf7, .x=0x8a, .y=0xce, .sp=0x6b, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x8a}, {.addr=0xe3b7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe3b7, .value=0x4d, .type=IO_READ},
        {.addr=0xe3b8, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x8a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0268) {
    const struct CPU_State initial_cpu = {.pc=0x7ca7, .a=0x47, .x=0xe3, .y=0x03, .sp=0xfc, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0x7ca7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7ca8, .a=0x47, .x=0xe3, .y=0x03, .sp=0xfb, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0xe3}, {.addr=0x7ca7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7ca7, .value=0x4d, .type=IO_READ},
        {.addr=0x7ca8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0269) {
    const struct CPU_State initial_cpu = {.pc=0x8fb4, .a=0xbe, .x=0xcd, .y=0x03, .sp=0xde, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x00}, {.addr=0x8fb4, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8fb5, .a=0xbe, .x=0xcd, .y=0x03, .sp=0xdd, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xcd}, {.addr=0x8fb4, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8fb4, .value=0x4d, .type=IO_READ},
        {.addr=0x8fb5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0xcd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_026A) {
    const struct CPU_State initial_cpu = {.pc=0x4da7, .a=0x9a, .x=0xa5, .y=0x43, .sp=0xe0, .status=0x81};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x00}, {.addr=0x4da7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4da8, .a=0x9a, .x=0xa5, .y=0x43, .sp=0xdf, .status=0x81};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0xa5}, {.addr=0x4da7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4da7, .value=0x4d, .type=IO_READ},
        {.addr=0x4da8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0xa5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_026B) {
    const struct CPU_State initial_cpu = {.pc=0x74be, .a=0x3e, .x=0x33, .y=0x38, .sp=0xfe, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x00}, {.addr=0x74be, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x74bf, .a=0x3e, .x=0x33, .y=0x38, .sp=0xfd, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x33}, {.addr=0x74be, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x74be, .value=0x4d, .type=IO_READ},
        {.addr=0x74bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_026C) {
    const struct CPU_State initial_cpu = {.pc=0x969d, .a=0x00, .x=0x59, .y=0xa5, .sp=0xad, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x00}, {.addr=0x969d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x969e, .a=0x00, .x=0x59, .y=0xa5, .sp=0xac, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x59}, {.addr=0x969d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x969d, .value=0x4d, .type=IO_READ},
        {.addr=0x969e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0x59, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_026D) {
    const struct CPU_State initial_cpu = {.pc=0x3cd1, .a=0xb2, .x=0xb0, .y=0x82, .sp=0x41, .status=0x5b};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x00}, {.addr=0x3cd1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3cd2, .a=0xb2, .x=0xb0, .y=0x82, .sp=0x40, .status=0x5b};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xb0}, {.addr=0x3cd1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3cd1, .value=0x4d, .type=IO_READ},
        {.addr=0x3cd2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0xb0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_026E) {
    const struct CPU_State initial_cpu = {.pc=0x8038, .a=0xa2, .x=0x5b, .y=0xbf, .sp=0x57, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0157, .value=0x00}, {.addr=0x8038, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8039, .a=0xa2, .x=0x5b, .y=0xbf, .sp=0x56, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0157, .value=0x5b}, {.addr=0x8038, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8038, .value=0x4d, .type=IO_READ},
        {.addr=0x8039, .value=DUMMY, .type=IO_READ},
        {.addr=0x0157, .value=0x5b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_026F) {
    const struct CPU_State initial_cpu = {.pc=0x304d, .a=0x00, .x=0x9c, .y=0x4c, .sp=0x3c, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0x304d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x304e, .a=0x00, .x=0x9c, .y=0x4c, .sp=0x3b, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x9c}, {.addr=0x304d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x304d, .value=0x4d, .type=IO_READ},
        {.addr=0x304e, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x9c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0270) {
    const struct CPU_State initial_cpu = {.pc=0xcd4c, .a=0x8a, .x=0xfc, .y=0x7f, .sp=0xbe, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01be, .value=0x00}, {.addr=0xcd4c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcd4d, .a=0x8a, .x=0xfc, .y=0x7f, .sp=0xbd, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01be, .value=0xfc}, {.addr=0xcd4c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcd4c, .value=0x4d, .type=IO_READ},
        {.addr=0xcd4d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01be, .value=0xfc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0271) {
    const struct CPU_State initial_cpu = {.pc=0x982c, .a=0x59, .x=0x59, .y=0x3c, .sp=0xce, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x00}, {.addr=0x982c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x982d, .a=0x59, .x=0x59, .y=0x3c, .sp=0xcd, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x59}, {.addr=0x982c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x982c, .value=0x4d, .type=IO_READ},
        {.addr=0x982d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x59, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0272) {
    const struct CPU_State initial_cpu = {.pc=0xd619, .a=0xdd, .x=0xfc, .y=0xd2, .sp=0xa5, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0xd619, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd61a, .a=0xdd, .x=0xfc, .y=0xd2, .sp=0xa4, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xfc}, {.addr=0xd619, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd619, .value=0x4d, .type=IO_READ},
        {.addr=0xd61a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0xfc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0273) {
    const struct CPU_State initial_cpu = {.pc=0x4af5, .a=0xb5, .x=0x07, .y=0x21, .sp=0x34, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0134, .value=0x00}, {.addr=0x4af5, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4af6, .a=0xb5, .x=0x07, .y=0x21, .sp=0x33, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0134, .value=0x07}, {.addr=0x4af5, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4af5, .value=0x4d, .type=IO_READ},
        {.addr=0x4af6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0134, .value=0x07, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0274) {
    const struct CPU_State initial_cpu = {.pc=0xcbc9, .a=0xfe, .x=0x32, .y=0x16, .sp=0x92, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0192, .value=0x00}, {.addr=0xcbc9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcbca, .a=0xfe, .x=0x32, .y=0x16, .sp=0x91, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0192, .value=0x32}, {.addr=0xcbc9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcbc9, .value=0x4d, .type=IO_READ},
        {.addr=0xcbca, .value=DUMMY, .type=IO_READ},
        {.addr=0x0192, .value=0x32, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0275) {
    const struct CPU_State initial_cpu = {.pc=0x22c7, .a=0x39, .x=0xce, .y=0xf5, .sp=0x72, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x00}, {.addr=0x22c7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x22c8, .a=0x39, .x=0xce, .y=0xf5, .sp=0x71, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0xce}, {.addr=0x22c7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x22c7, .value=0x4d, .type=IO_READ},
        {.addr=0x22c8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0xce, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0276) {
    const struct CPU_State initial_cpu = {.pc=0x9640, .a=0x79, .x=0x80, .y=0xa1, .sp=0x43, .status=0xa4};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x00}, {.addr=0x9640, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9641, .a=0x79, .x=0x80, .y=0xa1, .sp=0x42, .status=0xa4};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0x80}, {.addr=0x9640, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9640, .value=0x4d, .type=IO_READ},
        {.addr=0x9641, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0x80, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0277) {
    const struct CPU_State initial_cpu = {.pc=0xf253, .a=0xa1, .x=0x79, .y=0x64, .sp=0x13, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0xf253, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf254, .a=0xa1, .x=0x79, .y=0x64, .sp=0x12, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0x79}, {.addr=0xf253, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf253, .value=0x4d, .type=IO_READ},
        {.addr=0xf254, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0x79, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0278) {
    const struct CPU_State initial_cpu = {.pc=0x5501, .a=0x4f, .x=0x07, .y=0xc0, .sp=0x05, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x00}, {.addr=0x5501, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5502, .a=0x4f, .x=0x07, .y=0xc0, .sp=0x04, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x07}, {.addr=0x5501, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5501, .value=0x4d, .type=IO_READ},
        {.addr=0x5502, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x07, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0279) {
    const struct CPU_State initial_cpu = {.pc=0xca5c, .a=0x38, .x=0x91, .y=0xc9, .sp=0xfb, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0xca5c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xca5d, .a=0x38, .x=0x91, .y=0xc9, .sp=0xfa, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x91}, {.addr=0xca5c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xca5c, .value=0x4d, .type=IO_READ},
        {.addr=0xca5d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x91, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_027A) {
    const struct CPU_State initial_cpu = {.pc=0x8618, .a=0xeb, .x=0x61, .y=0x08, .sp=0xff, .status=0xa9};
    const struct RamEntry initial_ram[] = {{.addr=0x01ff, .value=0x00}, {.addr=0x8618, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8619, .a=0xeb, .x=0x61, .y=0x08, .sp=0xfe, .status=0xa9};
    const struct RamEntry final_ram[] = {{.addr=0x01ff, .value=0x61}, {.addr=0x8618, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8618, .value=0x4d, .type=IO_READ},
        {.addr=0x8619, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ff, .value=0x61, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_027B) {
    const struct CPU_State initial_cpu = {.pc=0x5d2d, .a=0xef, .x=0x7f, .y=0xfb, .sp=0x85, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0185, .value=0x00}, {.addr=0x5d2d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5d2e, .a=0xef, .x=0x7f, .y=0xfb, .sp=0x84, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0185, .value=0x7f}, {.addr=0x5d2d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5d2d, .value=0x4d, .type=IO_READ},
        {.addr=0x5d2e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0185, .value=0x7f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_027C) {
    const struct CPU_State initial_cpu = {.pc=0x8c73, .a=0x93, .x=0x05, .y=0x56, .sp=0x2b, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x8c73, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8c74, .a=0x93, .x=0x05, .y=0x56, .sp=0x2a, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x05}, {.addr=0x8c73, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8c73, .value=0x4d, .type=IO_READ},
        {.addr=0x8c74, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0x05, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_027D) {
    const struct CPU_State initial_cpu = {.pc=0x41e3, .a=0xd3, .x=0x11, .y=0x30, .sp=0x1c, .status=0x12};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x00}, {.addr=0x41e3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x41e4, .a=0xd3, .x=0x11, .y=0x30, .sp=0x1b, .status=0x12};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0x11}, {.addr=0x41e3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x41e3, .value=0x4d, .type=IO_READ},
        {.addr=0x41e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0x11, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_027E) {
    const struct CPU_State initial_cpu = {.pc=0x641f, .a=0x67, .x=0xcb, .y=0x51, .sp=0x79, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x00}, {.addr=0x641f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6420, .a=0x67, .x=0xcb, .y=0x51, .sp=0x78, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0xcb}, {.addr=0x641f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x641f, .value=0x4d, .type=IO_READ},
        {.addr=0x6420, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0xcb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_027F) {
    const struct CPU_State initial_cpu = {.pc=0x5316, .a=0x3b, .x=0xdb, .y=0x90, .sp=0xe2, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x00}, {.addr=0x5316, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5317, .a=0x3b, .x=0xdb, .y=0x90, .sp=0xe1, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xdb}, {.addr=0x5316, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5316, .value=0x4d, .type=IO_READ},
        {.addr=0x5317, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0xdb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0280) {
    const struct CPU_State initial_cpu = {.pc=0x4d61, .a=0x36, .x=0x7c, .y=0xd6, .sp=0xc9, .status=0xa8};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x00}, {.addr=0x4d61, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4d62, .a=0x36, .x=0x7c, .y=0xd6, .sp=0xc8, .status=0xa8};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x7c}, {.addr=0x4d61, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4d61, .value=0x4d, .type=IO_READ},
        {.addr=0x4d62, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x7c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0281) {
    const struct CPU_State initial_cpu = {.pc=0x671a, .a=0xea, .x=0xd3, .y=0x53, .sp=0xf8, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x00}, {.addr=0x671a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x671b, .a=0xea, .x=0xd3, .y=0x53, .sp=0xf7, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xd3}, {.addr=0x671a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x671a, .value=0x4d, .type=IO_READ},
        {.addr=0x671b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0xd3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0282) {
    const struct CPU_State initial_cpu = {.pc=0x4380, .a=0x2a, .x=0xad, .y=0x0e, .sp=0x7a, .status=0xf0};
    const struct RamEntry initial_ram[] = {{.addr=0x017a, .value=0x00}, {.addr=0x4380, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4381, .a=0x2a, .x=0xad, .y=0x0e, .sp=0x79, .status=0xf0};
    const struct RamEntry final_ram[] = {{.addr=0x017a, .value=0xad}, {.addr=0x4380, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4380, .value=0x4d, .type=IO_READ},
        {.addr=0x4381, .value=DUMMY, .type=IO_READ},
        {.addr=0x017a, .value=0xad, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0282", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0283) {
    const struct CPU_State initial_cpu = {.pc=0x556f, .a=0x1f, .x=0x99, .y=0x9a, .sp=0xce, .status=0x33};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x00}, {.addr=0x556f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5570, .a=0x1f, .x=0x99, .y=0x9a, .sp=0xcd, .status=0x33};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x99}, {.addr=0x556f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x556f, .value=0x4d, .type=IO_READ},
        {.addr=0x5570, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x99, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0284) {
    const struct CPU_State initial_cpu = {.pc=0x54f9, .a=0x68, .x=0x91, .y=0x27, .sp=0xfa, .status=0xe0};
    const struct RamEntry initial_ram[] = {{.addr=0x01fa, .value=0x00}, {.addr=0x54f9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x54fa, .a=0x68, .x=0x91, .y=0x27, .sp=0xf9, .status=0xe0};
    const struct RamEntry final_ram[] = {{.addr=0x01fa, .value=0x91}, {.addr=0x54f9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x54f9, .value=0x4d, .type=IO_READ},
        {.addr=0x54fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fa, .value=0x91, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0285) {
    const struct CPU_State initial_cpu = {.pc=0xa5fb, .a=0x91, .x=0x46, .y=0xa9, .sp=0xdb, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x01db, .value=0x00}, {.addr=0xa5fb, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa5fc, .a=0x91, .x=0x46, .y=0xa9, .sp=0xda, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x01db, .value=0x46}, {.addr=0xa5fb, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa5fb, .value=0x4d, .type=IO_READ},
        {.addr=0xa5fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01db, .value=0x46, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0286) {
    const struct CPU_State initial_cpu = {.pc=0xea19, .a=0xfc, .x=0xe6, .y=0x55, .sp=0xa1, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01a1, .value=0x00}, {.addr=0xea19, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xea1a, .a=0xfc, .x=0xe6, .y=0x55, .sp=0xa0, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x01a1, .value=0xe6}, {.addr=0xea19, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xea19, .value=0x4d, .type=IO_READ},
        {.addr=0xea1a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a1, .value=0xe6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0287) {
    const struct CPU_State initial_cpu = {.pc=0xd53c, .a=0xc1, .x=0xa1, .y=0x2a, .sp=0x35, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0xd53c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd53d, .a=0xc1, .x=0xa1, .y=0x2a, .sp=0x34, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0xa1}, {.addr=0xd53c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd53c, .value=0x4d, .type=IO_READ},
        {.addr=0xd53d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0xa1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0288) {
    const struct CPU_State initial_cpu = {.pc=0xf2ea, .a=0x0b, .x=0x7c, .y=0x84, .sp=0x88, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0188, .value=0x00}, {.addr=0xf2ea, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf2eb, .a=0x0b, .x=0x7c, .y=0x84, .sp=0x87, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x0188, .value=0x7c}, {.addr=0xf2ea, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf2ea, .value=0x4d, .type=IO_READ},
        {.addr=0xf2eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0188, .value=0x7c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0289) {
    const struct CPU_State initial_cpu = {.pc=0x8eda, .a=0x3d, .x=0xf0, .y=0x29, .sp=0xcf, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x00}, {.addr=0x8eda, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8edb, .a=0x3d, .x=0xf0, .y=0x29, .sp=0xce, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xf0}, {.addr=0x8eda, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8eda, .value=0x4d, .type=IO_READ},
        {.addr=0x8edb, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_028A) {
    const struct CPU_State initial_cpu = {.pc=0x489f, .a=0xef, .x=0xa3, .y=0x05, .sp=0x4b, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x014b, .value=0x00}, {.addr=0x489f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x48a0, .a=0xef, .x=0xa3, .y=0x05, .sp=0x4a, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x014b, .value=0xa3}, {.addr=0x489f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x489f, .value=0x4d, .type=IO_READ},
        {.addr=0x48a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x014b, .value=0xa3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_028B) {
    const struct CPU_State initial_cpu = {.pc=0x93ff, .a=0x39, .x=0xdf, .y=0xa8, .sp=0xfb, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0x93ff, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9400, .a=0x39, .x=0xdf, .y=0xa8, .sp=0xfa, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0xdf}, {.addr=0x93ff, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x93ff, .value=0x4d, .type=IO_READ},
        {.addr=0x9400, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0xdf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_028C) {
    const struct CPU_State initial_cpu = {.pc=0x1233, .a=0x5d, .x=0x19, .y=0x86, .sp=0x5d, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x00}, {.addr=0x1233, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1234, .a=0x5d, .x=0x19, .y=0x86, .sp=0x5c, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x19}, {.addr=0x1233, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1233, .value=0x4d, .type=IO_READ},
        {.addr=0x1234, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0x19, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_028D) {
    const struct CPU_State initial_cpu = {.pc=0xb7ad, .a=0x68, .x=0xda, .y=0x7b, .sp=0x47, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0xb7ad, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb7ae, .a=0x68, .x=0xda, .y=0x7b, .sp=0x46, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0xda}, {.addr=0xb7ad, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb7ad, .value=0x4d, .type=IO_READ},
        {.addr=0xb7ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0xda, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_028E) {
    const struct CPU_State initial_cpu = {.pc=0xb438, .a=0x13, .x=0xe8, .y=0x8e, .sp=0x37, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x00}, {.addr=0xb438, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb439, .a=0x13, .x=0xe8, .y=0x8e, .sp=0x36, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0xe8}, {.addr=0xb438, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb438, .value=0x4d, .type=IO_READ},
        {.addr=0xb439, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0xe8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_028F) {
    const struct CPU_State initial_cpu = {.pc=0xa99b, .a=0x62, .x=0x5e, .y=0xbb, .sp=0x05, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x00}, {.addr=0xa99b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa99c, .a=0x62, .x=0x5e, .y=0xbb, .sp=0x04, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x5e}, {.addr=0xa99b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa99b, .value=0x4d, .type=IO_READ},
        {.addr=0xa99c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x5e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0290) {
    const struct CPU_State initial_cpu = {.pc=0xf0e8, .a=0x2d, .x=0x1a, .y=0x7b, .sp=0x32, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x00}, {.addr=0xf0e8, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf0e9, .a=0x2d, .x=0x1a, .y=0x7b, .sp=0x31, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0x1a}, {.addr=0xf0e8, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf0e8, .value=0x4d, .type=IO_READ},
        {.addr=0xf0e9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0x1a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0291) {
    const struct CPU_State initial_cpu = {.pc=0x1239, .a=0x55, .x=0xf0, .y=0x6b, .sp=0x91, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x00}, {.addr=0x1239, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x123a, .a=0x55, .x=0xf0, .y=0x6b, .sp=0x90, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0xf0}, {.addr=0x1239, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1239, .value=0x4d, .type=IO_READ},
        {.addr=0x123a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0292) {
    const struct CPU_State initial_cpu = {.pc=0x8f35, .a=0xd5, .x=0xaf, .y=0xc9, .sp=0xd1, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0x8f35, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8f36, .a=0xd5, .x=0xaf, .y=0xc9, .sp=0xd0, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xaf}, {.addr=0x8f35, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8f35, .value=0x4d, .type=IO_READ},
        {.addr=0x8f36, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0xaf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0293) {
    const struct CPU_State initial_cpu = {.pc=0xfe06, .a=0x92, .x=0x6b, .y=0xbd, .sp=0xe4, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0xfe06, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xfe07, .a=0x92, .x=0x6b, .y=0xbd, .sp=0xe3, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x6b}, {.addr=0xfe06, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xfe06, .value=0x4d, .type=IO_READ},
        {.addr=0xfe07, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0294) {
    const struct CPU_State initial_cpu = {.pc=0xb11f, .a=0x97, .x=0xa9, .y=0x27, .sp=0x73, .status=0xfa};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x00}, {.addr=0xb11f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb120, .a=0x97, .x=0xa9, .y=0x27, .sp=0x72, .status=0xfa};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xa9}, {.addr=0xb11f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb11f, .value=0x4d, .type=IO_READ},
        {.addr=0xb120, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0xa9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0295) {
    const struct CPU_State initial_cpu = {.pc=0x5f5b, .a=0x8c, .x=0xa0, .y=0x7d, .sp=0x74, .status=0x17};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x00}, {.addr=0x5f5b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5f5c, .a=0x8c, .x=0xa0, .y=0x7d, .sp=0x73, .status=0x17};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0xa0}, {.addr=0x5f5b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5f5b, .value=0x4d, .type=IO_READ},
        {.addr=0x5f5c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0xa0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0296) {
    const struct CPU_State initial_cpu = {.pc=0x09ac, .a=0x16, .x=0x92, .y=0xdc, .sp=0xf7, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x00}, {.addr=0x09ac, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x09ad, .a=0x16, .x=0x92, .y=0xdc, .sp=0xf6, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x92}, {.addr=0x09ac, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x09ac, .value=0x4d, .type=IO_READ},
        {.addr=0x09ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0x92, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0297) {
    const struct CPU_State initial_cpu = {.pc=0x19f4, .a=0x51, .x=0x5e, .y=0xf5, .sp=0x78, .status=0xc2};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0x19f4, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x19f5, .a=0x51, .x=0x5e, .y=0xf5, .sp=0x77, .status=0xc2};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x5e}, {.addr=0x19f4, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x19f4, .value=0x4d, .type=IO_READ},
        {.addr=0x19f5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x5e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0298) {
    const struct CPU_State initial_cpu = {.pc=0x5e35, .a=0xb9, .x=0xb2, .y=0x7a, .sp=0x79, .status=0x96};
    const struct RamEntry initial_ram[] = {{.addr=0x0179, .value=0x00}, {.addr=0x5e35, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5e36, .a=0xb9, .x=0xb2, .y=0x7a, .sp=0x78, .status=0x96};
    const struct RamEntry final_ram[] = {{.addr=0x0179, .value=0xb2}, {.addr=0x5e35, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5e35, .value=0x4d, .type=IO_READ},
        {.addr=0x5e36, .value=DUMMY, .type=IO_READ},
        {.addr=0x0179, .value=0xb2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0299) {
    const struct CPU_State initial_cpu = {.pc=0x077b, .a=0x08, .x=0x56, .y=0x2f, .sp=0xfc, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x01fc, .value=0x00}, {.addr=0x077b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x077c, .a=0x08, .x=0x56, .y=0x2f, .sp=0xfb, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x01fc, .value=0x56}, {.addr=0x077b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x077b, .value=0x4d, .type=IO_READ},
        {.addr=0x077c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fc, .value=0x56, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_029A) {
    const struct CPU_State initial_cpu = {.pc=0x5170, .a=0xda, .x=0x2f, .y=0xbe, .sp=0x6d, .status=0x67};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x00}, {.addr=0x5170, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5171, .a=0xda, .x=0x2f, .y=0xbe, .sp=0x6c, .status=0x67};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x2f}, {.addr=0x5170, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5170, .value=0x4d, .type=IO_READ},
        {.addr=0x5171, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x2f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_029B) {
    const struct CPU_State initial_cpu = {.pc=0x3f55, .a=0x41, .x=0xe4, .y=0x81, .sp=0x21, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x00}, {.addr=0x3f55, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3f56, .a=0x41, .x=0xe4, .y=0x81, .sp=0x20, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xe4}, {.addr=0x3f55, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3f55, .value=0x4d, .type=IO_READ},
        {.addr=0x3f56, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0xe4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_029C) {
    const struct CPU_State initial_cpu = {.pc=0x895d, .a=0x13, .x=0xc8, .y=0xfc, .sp=0x73, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x0173, .value=0x00}, {.addr=0x895d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x895e, .a=0x13, .x=0xc8, .y=0xfc, .sp=0x72, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x0173, .value=0xc8}, {.addr=0x895d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x895d, .value=0x4d, .type=IO_READ},
        {.addr=0x895e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0173, .value=0xc8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_029D) {
    const struct CPU_State initial_cpu = {.pc=0x14c9, .a=0x43, .x=0x25, .y=0x26, .sp=0xf0, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x00}, {.addr=0x14c9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x14ca, .a=0x43, .x=0x25, .y=0x26, .sp=0xef, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x25}, {.addr=0x14c9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x14c9, .value=0x4d, .type=IO_READ},
        {.addr=0x14ca, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0x25, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_029E) {
    const struct CPU_State initial_cpu = {.pc=0x7fa6, .a=0xd2, .x=0xc2, .y=0x79, .sp=0xdc, .status=0x9b};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x00}, {.addr=0x7fa6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7fa7, .a=0xd2, .x=0xc2, .y=0x79, .sp=0xdb, .status=0x9b};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xc2}, {.addr=0x7fa6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7fa6, .value=0x4d, .type=IO_READ},
        {.addr=0x7fa7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0xc2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_029F) {
    const struct CPU_State initial_cpu = {.pc=0x0def, .a=0x1e, .x=0xfe, .y=0xce, .sp=0x43, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0143, .value=0x00}, {.addr=0x0def, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0df0, .a=0x1e, .x=0xfe, .y=0xce, .sp=0x42, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0143, .value=0xfe}, {.addr=0x0def, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0def, .value=0x4d, .type=IO_READ},
        {.addr=0x0df0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0143, .value=0xfe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02A0) {
    const struct CPU_State initial_cpu = {.pc=0x02e3, .a=0xa7, .x=0xa3, .y=0x4d, .sp=0xb2, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x00}, {.addr=0x02e3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x02e4, .a=0xa7, .x=0xa3, .y=0x4d, .sp=0xb1, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xa3}, {.addr=0x02e3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x02e3, .value=0x4d, .type=IO_READ},
        {.addr=0x02e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0xa3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02A1) {
    const struct CPU_State initial_cpu = {.pc=0xc3a5, .a=0xab, .x=0xd1, .y=0x0f, .sp=0x7b, .status=0xdd};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x00}, {.addr=0xc3a5, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc3a6, .a=0xab, .x=0xd1, .y=0x0f, .sp=0x7a, .status=0xdd};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0xd1}, {.addr=0xc3a5, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc3a5, .value=0x4d, .type=IO_READ},
        {.addr=0xc3a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0xd1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02A2) {
    const struct CPU_State initial_cpu = {.pc=0x28ea, .a=0x60, .x=0xab, .y=0xc4, .sp=0x47, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0147, .value=0x00}, {.addr=0x28ea, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x28eb, .a=0x60, .x=0xab, .y=0xc4, .sp=0x46, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0147, .value=0xab}, {.addr=0x28ea, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x28ea, .value=0x4d, .type=IO_READ},
        {.addr=0x28eb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0147, .value=0xab, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02A3) {
    const struct CPU_State initial_cpu = {.pc=0xa42f, .a=0x1a, .x=0xd0, .y=0x85, .sp=0x2e, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0xa42f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa430, .a=0x1a, .x=0xd0, .y=0x85, .sp=0x2d, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xd0}, {.addr=0xa42f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa42f, .value=0x4d, .type=IO_READ},
        {.addr=0xa430, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0xd0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x6f2d, .a=0xb5, .x=0x88, .y=0x23, .sp=0x26, .status=0x13};
    const struct RamEntry initial_ram[] = {{.addr=0x0126, .value=0x00}, {.addr=0x6f2d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6f2e, .a=0xb5, .x=0x88, .y=0x23, .sp=0x25, .status=0x13};
    const struct RamEntry final_ram[] = {{.addr=0x0126, .value=0x88}, {.addr=0x6f2d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6f2d, .value=0x4d, .type=IO_READ},
        {.addr=0x6f2e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0126, .value=0x88, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x4b0a, .a=0x4a, .x=0x6f, .y=0x0a, .sp=0x3c, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0x4b0a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4b0b, .a=0x4a, .x=0x6f, .y=0x0a, .sp=0x3b, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0x6f}, {.addr=0x4b0a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4b0a, .value=0x4d, .type=IO_READ},
        {.addr=0x4b0b, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0x6f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x243b, .a=0x53, .x=0xe3, .y=0xac, .sp=0x71, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x0171, .value=0x00}, {.addr=0x243b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x243c, .a=0x53, .x=0xe3, .y=0xac, .sp=0x70, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x0171, .value=0xe3}, {.addr=0x243b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x243b, .value=0x4d, .type=IO_READ},
        {.addr=0x243c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0171, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02A7) {
    const struct CPU_State initial_cpu = {.pc=0xadbb, .a=0xfb, .x=0xdb, .y=0x4d, .sp=0xcf, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x00}, {.addr=0xadbb, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xadbc, .a=0xfb, .x=0xdb, .y=0x4d, .sp=0xce, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0xdb}, {.addr=0xadbb, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xadbb, .value=0x4d, .type=IO_READ},
        {.addr=0xadbc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0xdb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02A8) {
    const struct CPU_State initial_cpu = {.pc=0xcc6a, .a=0xd4, .x=0x7f, .y=0x93, .sp=0x80, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x0180, .value=0x00}, {.addr=0xcc6a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcc6b, .a=0xd4, .x=0x7f, .y=0x93, .sp=0x7f, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x0180, .value=0x7f}, {.addr=0xcc6a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcc6a, .value=0x4d, .type=IO_READ},
        {.addr=0xcc6b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0180, .value=0x7f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x8c3c, .a=0xa9, .x=0xf2, .y=0x8e, .sp=0x94, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0x8c3c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8c3d, .a=0xa9, .x=0xf2, .y=0x8e, .sp=0x93, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xf2}, {.addr=0x8c3c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8c3c, .value=0x4d, .type=IO_READ},
        {.addr=0x8c3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0xf2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x42f8, .a=0xdc, .x=0x9e, .y=0xc0, .sp=0x72, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0172, .value=0x00}, {.addr=0x42f8, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x42f9, .a=0xdc, .x=0x9e, .y=0xc0, .sp=0x71, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0172, .value=0x9e}, {.addr=0x42f8, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x42f8, .value=0x4d, .type=IO_READ},
        {.addr=0x42f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0172, .value=0x9e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xbe6f, .a=0x93, .x=0x8f, .y=0x52, .sp=0xfe, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x00}, {.addr=0xbe6f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbe70, .a=0x93, .x=0x8f, .y=0x52, .sp=0xfd, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0x8f}, {.addr=0xbe6f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbe6f, .value=0x4d, .type=IO_READ},
        {.addr=0xbe70, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0x8f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02AC) {
    const struct CPU_State initial_cpu = {.pc=0xc2a7, .a=0x2b, .x=0x66, .y=0x54, .sp=0xd6, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x00}, {.addr=0xc2a7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc2a8, .a=0x2b, .x=0x66, .y=0x54, .sp=0xd5, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x66}, {.addr=0xc2a7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc2a7, .value=0x4d, .type=IO_READ},
        {.addr=0xc2a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x66, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02AD) {
    const struct CPU_State initial_cpu = {.pc=0xbd59, .a=0x71, .x=0x6a, .y=0xf6, .sp=0x54, .status=0x2a};
    const struct RamEntry initial_ram[] = {{.addr=0x0154, .value=0x00}, {.addr=0xbd59, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbd5a, .a=0x71, .x=0x6a, .y=0xf6, .sp=0x53, .status=0x2a};
    const struct RamEntry final_ram[] = {{.addr=0x0154, .value=0x6a}, {.addr=0xbd59, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbd59, .value=0x4d, .type=IO_READ},
        {.addr=0xbd5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0154, .value=0x6a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02AE) {
    const struct CPU_State initial_cpu = {.pc=0x05b9, .a=0xde, .x=0xfb, .y=0xd6, .sp=0x2a, .status=0x9c};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x00}, {.addr=0x05b9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x05ba, .a=0xde, .x=0xfb, .y=0xd6, .sp=0x29, .status=0x9c};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0xfb}, {.addr=0x05b9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x05b9, .value=0x4d, .type=IO_READ},
        {.addr=0x05ba, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0xfb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x69ee, .a=0xed, .x=0x0e, .y=0xf1, .sp=0x14, .status=0xdb};
    const struct RamEntry initial_ram[] = {{.addr=0x0114, .value=0x00}, {.addr=0x69ee, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x69ef, .a=0xed, .x=0x0e, .y=0xf1, .sp=0x13, .status=0xdb};
    const struct RamEntry final_ram[] = {{.addr=0x0114, .value=0x0e}, {.addr=0x69ee, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x69ee, .value=0x4d, .type=IO_READ},
        {.addr=0x69ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0114, .value=0x0e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02B0) {
    const struct CPU_State initial_cpu = {.pc=0x8084, .a=0x95, .x=0xb6, .y=0x34, .sp=0xc3, .status=0x28};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x00}, {.addr=0x8084, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8085, .a=0x95, .x=0xb6, .y=0x34, .sp=0xc2, .status=0x28};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xb6}, {.addr=0x8084, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8084, .value=0x4d, .type=IO_READ},
        {.addr=0x8085, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0xb6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02B1) {
    const struct CPU_State initial_cpu = {.pc=0xbbb1, .a=0xaa, .x=0xef, .y=0x54, .sp=0xd5, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x00}, {.addr=0xbbb1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbbb2, .a=0xaa, .x=0xef, .y=0x54, .sp=0xd4, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0xef}, {.addr=0xbbb1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbbb1, .value=0x4d, .type=IO_READ},
        {.addr=0xbbb2, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0xef, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02B2) {
    const struct CPU_State initial_cpu = {.pc=0x9f6e, .a=0xb0, .x=0x48, .y=0x0a, .sp=0x56, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x00}, {.addr=0x9f6e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9f6f, .a=0xb0, .x=0x48, .y=0x0a, .sp=0x55, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0x48}, {.addr=0x9f6e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9f6e, .value=0x4d, .type=IO_READ},
        {.addr=0x9f6f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0x48, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02B3) {
    const struct CPU_State initial_cpu = {.pc=0x2050, .a=0xb4, .x=0x33, .y=0x8c, .sp=0x0a, .status=0x95};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0x2050, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2051, .a=0xb4, .x=0x33, .y=0x8c, .sp=0x09, .status=0x95};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0x33}, {.addr=0x2050, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2050, .value=0x4d, .type=IO_READ},
        {.addr=0x2051, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02B4) {
    const struct CPU_State initial_cpu = {.pc=0xa25d, .a=0xd7, .x=0x4e, .y=0x6e, .sp=0x69, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0169, .value=0x00}, {.addr=0xa25d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa25e, .a=0xd7, .x=0x4e, .y=0x6e, .sp=0x68, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0169, .value=0x4e}, {.addr=0xa25d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa25d, .value=0x4d, .type=IO_READ},
        {.addr=0xa25e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0169, .value=0x4e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x3022, .a=0xb0, .x=0x12, .y=0x36, .sp=0x77, .status=0x66};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x00}, {.addr=0x3022, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3023, .a=0xb0, .x=0x12, .y=0x36, .sp=0x76, .status=0x66};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x12}, {.addr=0x3022, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3022, .value=0x4d, .type=IO_READ},
        {.addr=0x3023, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x12, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x25ad, .a=0x6a, .x=0xb0, .y=0xeb, .sp=0x37, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x00}, {.addr=0x25ad, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x25ae, .a=0x6a, .x=0xb0, .y=0xeb, .sp=0x36, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0xb0}, {.addr=0x25ad, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x25ad, .value=0x4d, .type=IO_READ},
        {.addr=0x25ae, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0xb0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xb269, .a=0x1f, .x=0x87, .y=0xd2, .sp=0xe4, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01e4, .value=0x00}, {.addr=0xb269, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb26a, .a=0x1f, .x=0x87, .y=0xd2, .sp=0xe3, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x01e4, .value=0x87}, {.addr=0xb269, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb269, .value=0x4d, .type=IO_READ},
        {.addr=0xb26a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e4, .value=0x87, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02B8) {
    const struct CPU_State initial_cpu = {.pc=0xc2da, .a=0xe5, .x=0xec, .y=0x0f, .sp=0x00, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x00}, {.addr=0xc2da, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc2db, .a=0xe5, .x=0xec, .y=0x0f, .sp=0xff, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xec}, {.addr=0xc2da, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc2da, .value=0x4d, .type=IO_READ},
        {.addr=0xc2db, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0xec, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x61eb, .a=0xaf, .x=0xf9, .y=0xf9, .sp=0x48, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x00}, {.addr=0x61eb, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x61ec, .a=0xaf, .x=0xf9, .y=0xf9, .sp=0x47, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0xf9}, {.addr=0x61eb, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x61eb, .value=0x4d, .type=IO_READ},
        {.addr=0x61ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0xf9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x729f, .a=0xa0, .x=0x2a, .y=0xa3, .sp=0xce, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x00}, {.addr=0x729f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x72a0, .a=0xa0, .x=0x2a, .y=0xa3, .sp=0xcd, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x2a}, {.addr=0x729f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x729f, .value=0x4d, .type=IO_READ},
        {.addr=0x72a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x2a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02BB) {
    const struct CPU_State initial_cpu = {.pc=0xafb2, .a=0xd6, .x=0x24, .y=0x3d, .sp=0xef, .status=0x56};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0xafb2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xafb3, .a=0xd6, .x=0x24, .y=0x3d, .sp=0xee, .status=0x56};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x24}, {.addr=0xafb2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xafb2, .value=0x4d, .type=IO_READ},
        {.addr=0xafb3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x24, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xd32c, .a=0xaa, .x=0xa0, .y=0xe5, .sp=0x03, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0103, .value=0x00}, {.addr=0xd32c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd32d, .a=0xaa, .x=0xa0, .y=0xe5, .sp=0x02, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0103, .value=0xa0}, {.addr=0xd32c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd32c, .value=0x4d, .type=IO_READ},
        {.addr=0xd32d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0103, .value=0xa0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x8c01, .a=0xb4, .x=0x49, .y=0xdd, .sp=0x94, .status=0xb6};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0x8c01, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8c02, .a=0xb4, .x=0x49, .y=0xdd, .sp=0x93, .status=0xb6};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x49}, {.addr=0x8c01, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8c01, .value=0x4d, .type=IO_READ},
        {.addr=0x8c02, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x49, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x858b, .a=0x43, .x=0x6b, .y=0x21, .sp=0x6e, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x00}, {.addr=0x858b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x858c, .a=0x43, .x=0x6b, .y=0x21, .sp=0x6d, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x6b}, {.addr=0x858b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x858b, .value=0x4d, .type=IO_READ},
        {.addr=0x858c, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x6b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02BF) {
    const struct CPU_State initial_cpu = {.pc=0xbf07, .a=0x79, .x=0xeb, .y=0x29, .sp=0x07, .status=0xe7};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0xbf07, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbf08, .a=0x79, .x=0xeb, .y=0x29, .sp=0x06, .status=0xe7};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xeb}, {.addr=0xbf07, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbf07, .value=0x4d, .type=IO_READ},
        {.addr=0xbf08, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xd6a5, .a=0xd1, .x=0xf7, .y=0xb4, .sp=0x91, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x00}, {.addr=0xd6a5, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd6a6, .a=0xd1, .x=0xf7, .y=0xb4, .sp=0x90, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0xf7}, {.addr=0xd6a5, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd6a5, .value=0x4d, .type=IO_READ},
        {.addr=0xd6a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0xf7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02C1) {
    const struct CPU_State initial_cpu = {.pc=0x8f9f, .a=0x2d, .x=0xbb, .y=0x66, .sp=0xe6, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x01e6, .value=0x00}, {.addr=0x8f9f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8fa0, .a=0x2d, .x=0xbb, .y=0x66, .sp=0xe5, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x01e6, .value=0xbb}, {.addr=0x8f9f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8f9f, .value=0x4d, .type=IO_READ},
        {.addr=0x8fa0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e6, .value=0xbb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02C2) {
    const struct CPU_State initial_cpu = {.pc=0x2171, .a=0xb4, .x=0xca, .y=0x78, .sp=0x45, .status=0x98};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x00}, {.addr=0x2171, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2172, .a=0xb4, .x=0xca, .y=0x78, .sp=0x44, .status=0x98};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0xca}, {.addr=0x2171, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2171, .value=0x4d, .type=IO_READ},
        {.addr=0x2172, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x69be, .a=0x85, .x=0x28, .y=0x3f, .sp=0x08, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x00}, {.addr=0x69be, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x69bf, .a=0x85, .x=0x28, .y=0x3f, .sp=0x07, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x28}, {.addr=0x69be, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x69be, .value=0x4d, .type=IO_READ},
        {.addr=0x69bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0x28, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02C4) {
    const struct CPU_State initial_cpu = {.pc=0x354b, .a=0xfb, .x=0x0b, .y=0x22, .sp=0xd1, .status=0x7c};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0x354b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x354c, .a=0xfb, .x=0x0b, .y=0x22, .sp=0xd0, .status=0x7c};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0x0b}, {.addr=0x354b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x354b, .value=0x4d, .type=IO_READ},
        {.addr=0x354c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0x0b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x082a, .a=0x92, .x=0x85, .y=0x94, .sp=0xad, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x00}, {.addr=0x082a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x082b, .a=0x92, .x=0x85, .y=0x94, .sp=0xac, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0x85}, {.addr=0x082a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x082a, .value=0x4d, .type=IO_READ},
        {.addr=0x082b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0x85, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x9b59, .a=0x74, .x=0x2e, .y=0xe6, .sp=0x10, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0x9b59, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9b5a, .a=0x74, .x=0x2e, .y=0xe6, .sp=0x0f, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0x2e}, {.addr=0x9b59, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9b59, .value=0x4d, .type=IO_READ},
        {.addr=0x9b5a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0x2e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02C7) {
    const struct CPU_State initial_cpu = {.pc=0x3c41, .a=0xa1, .x=0x0d, .y=0x03, .sp=0xd8, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x01d8, .value=0x00}, {.addr=0x3c41, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3c42, .a=0xa1, .x=0x0d, .y=0x03, .sp=0xd7, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x01d8, .value=0x0d}, {.addr=0x3c41, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3c41, .value=0x4d, .type=IO_READ},
        {.addr=0x3c42, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d8, .value=0x0d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02C8) {
    const struct CPU_State initial_cpu = {.pc=0x1a3c, .a=0x95, .x=0xeb, .y=0xae, .sp=0xc2, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x00}, {.addr=0x1a3c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1a3d, .a=0x95, .x=0xeb, .y=0xae, .sp=0xc1, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0xeb}, {.addr=0x1a3c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1a3c, .value=0x4d, .type=IO_READ},
        {.addr=0x1a3d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02C9) {
    const struct CPU_State initial_cpu = {.pc=0x8556, .a=0x7b, .x=0xe8, .y=0x73, .sp=0x46, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0x8556, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8557, .a=0x7b, .x=0xe8, .y=0x73, .sp=0x45, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0xe8}, {.addr=0x8556, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8556, .value=0x4d, .type=IO_READ},
        {.addr=0x8557, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0xe8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02CA) {
    const struct CPU_State initial_cpu = {.pc=0xafa8, .a=0x84, .x=0xd3, .y=0xc9, .sp=0x5b, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x00}, {.addr=0xafa8, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xafa9, .a=0x84, .x=0xd3, .y=0xc9, .sp=0x5a, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0xd3}, {.addr=0xafa8, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xafa8, .value=0x4d, .type=IO_READ},
        {.addr=0xafa9, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0xd3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x68d9, .a=0x38, .x=0x60, .y=0x59, .sp=0x5c, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x00}, {.addr=0x68d9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x68da, .a=0x38, .x=0x60, .y=0x59, .sp=0x5b, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x60}, {.addr=0x68d9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x68d9, .value=0x4d, .type=IO_READ},
        {.addr=0x68da, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x60, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xacbb, .a=0x2c, .x=0x84, .y=0x46, .sp=0xf9, .status=0x69};
    const struct RamEntry initial_ram[] = {{.addr=0x01f9, .value=0x00}, {.addr=0xacbb, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xacbc, .a=0x2c, .x=0x84, .y=0x46, .sp=0xf8, .status=0x69};
    const struct RamEntry final_ram[] = {{.addr=0x01f9, .value=0x84}, {.addr=0xacbb, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xacbb, .value=0x4d, .type=IO_READ},
        {.addr=0xacbc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f9, .value=0x84, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02CD) {
    const struct CPU_State initial_cpu = {.pc=0xd5d8, .a=0x76, .x=0xc3, .y=0x21, .sp=0x4e, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x014e, .value=0x00}, {.addr=0xd5d8, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd5d9, .a=0x76, .x=0xc3, .y=0x21, .sp=0x4d, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x014e, .value=0xc3}, {.addr=0xd5d8, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd5d8, .value=0x4d, .type=IO_READ},
        {.addr=0xd5d9, .value=DUMMY, .type=IO_READ},
        {.addr=0x014e, .value=0xc3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x3c90, .a=0xb5, .x=0x71, .y=0x8b, .sp=0xdc, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x00}, {.addr=0x3c90, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3c91, .a=0xb5, .x=0x71, .y=0x8b, .sp=0xdb, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x71}, {.addr=0x3c90, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3c90, .value=0x4d, .type=IO_READ},
        {.addr=0x3c91, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0x71, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x6108, .a=0x6d, .x=0xf5, .y=0x11, .sp=0x89, .status=0x14};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0x6108, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6109, .a=0x6d, .x=0xf5, .y=0x11, .sp=0x88, .status=0x14};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0xf5}, {.addr=0x6108, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6108, .value=0x4d, .type=IO_READ},
        {.addr=0x6109, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0xf5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xde91, .a=0x89, .x=0x24, .y=0xa5, .sp=0x00, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x00}, {.addr=0xde91, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xde92, .a=0x89, .x=0x24, .y=0xa5, .sp=0xff, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0x24}, {.addr=0xde91, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xde91, .value=0x4d, .type=IO_READ},
        {.addr=0xde92, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0x24, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02D1) {
    const struct CPU_State initial_cpu = {.pc=0xc66e, .a=0x28, .x=0x77, .y=0x70, .sp=0xb4, .status=0xc3};
    const struct RamEntry initial_ram[] = {{.addr=0x01b4, .value=0x00}, {.addr=0xc66e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc66f, .a=0x28, .x=0x77, .y=0x70, .sp=0xb3, .status=0xc3};
    const struct RamEntry final_ram[] = {{.addr=0x01b4, .value=0x77}, {.addr=0xc66e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc66e, .value=0x4d, .type=IO_READ},
        {.addr=0xc66f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b4, .value=0x77, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02D2) {
    const struct CPU_State initial_cpu = {.pc=0x0d9a, .a=0x5e, .x=0xd5, .y=0xd8, .sp=0xaa, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x00}, {.addr=0x0d9a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0d9b, .a=0x5e, .x=0xd5, .y=0xd8, .sp=0xa9, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0xd5}, {.addr=0x0d9a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0d9a, .value=0x4d, .type=IO_READ},
        {.addr=0x0d9b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0xd5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xd097, .a=0xbc, .x=0x29, .y=0x1e, .sp=0x5d, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x015d, .value=0x00}, {.addr=0xd097, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd098, .a=0xbc, .x=0x29, .y=0x1e, .sp=0x5c, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x015d, .value=0x29}, {.addr=0xd097, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd097, .value=0x4d, .type=IO_READ},
        {.addr=0xd098, .value=DUMMY, .type=IO_READ},
        {.addr=0x015d, .value=0x29, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x6af5, .a=0x0c, .x=0x12, .y=0x8d, .sp=0xe9, .status=0x5c};
    const struct RamEntry initial_ram[] = {{.addr=0x01e9, .value=0x00}, {.addr=0x6af5, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6af6, .a=0x0c, .x=0x12, .y=0x8d, .sp=0xe8, .status=0x5c};
    const struct RamEntry final_ram[] = {{.addr=0x01e9, .value=0x12}, {.addr=0x6af5, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6af5, .value=0x4d, .type=IO_READ},
        {.addr=0x6af6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e9, .value=0x12, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x2889, .a=0x16, .x=0x4a, .y=0x2b, .sp=0xd3, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0x2889, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x288a, .a=0x16, .x=0x4a, .y=0x2b, .sp=0xd2, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0x4a}, {.addr=0x2889, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2889, .value=0x4d, .type=IO_READ},
        {.addr=0x288a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0x4a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02D6) {
    const struct CPU_State initial_cpu = {.pc=0xff07, .a=0x42, .x=0x0e, .y=0x27, .sp=0xc5, .status=0x0e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x00}, {.addr=0xff07, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xff08, .a=0x42, .x=0x0e, .y=0x27, .sp=0xc4, .status=0x0e};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x0e}, {.addr=0xff07, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xff07, .value=0x4d, .type=IO_READ},
        {.addr=0xff08, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0x0e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x1b73, .a=0x08, .x=0xc8, .y=0x1f, .sp=0xe2, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x01e2, .value=0x00}, {.addr=0x1b73, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1b74, .a=0x08, .x=0xc8, .y=0x1f, .sp=0xe1, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x01e2, .value=0xc8}, {.addr=0x1b73, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1b73, .value=0x4d, .type=IO_READ},
        {.addr=0x1b74, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e2, .value=0xc8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02D8) {
    const struct CPU_State initial_cpu = {.pc=0xf35e, .a=0x15, .x=0x25, .y=0xb3, .sp=0x1b, .status=0xb7};
    const struct RamEntry initial_ram[] = {{.addr=0x011b, .value=0x00}, {.addr=0xf35e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf35f, .a=0x15, .x=0x25, .y=0xb3, .sp=0x1a, .status=0xb7};
    const struct RamEntry final_ram[] = {{.addr=0x011b, .value=0x25}, {.addr=0xf35e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf35e, .value=0x4d, .type=IO_READ},
        {.addr=0xf35f, .value=DUMMY, .type=IO_READ},
        {.addr=0x011b, .value=0x25, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x7330, .a=0x2e, .x=0x53, .y=0x0e, .sp=0x2d, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x00}, {.addr=0x7330, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7331, .a=0x2e, .x=0x53, .y=0x0e, .sp=0x2c, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x53}, {.addr=0x7330, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7330, .value=0x4d, .type=IO_READ},
        {.addr=0x7331, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0x53, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02DA) {
    const struct CPU_State initial_cpu = {.pc=0x016b, .a=0xfa, .x=0xf3, .y=0x89, .sp=0x89, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x016b, .value=0x4d}, {.addr=0x0189, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x016c, .a=0xfa, .x=0xf3, .y=0x89, .sp=0x88, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x016b, .value=0x4d}, {.addr=0x0189, .value=0xf3}};
    const struct BusEvent events[] = {
        {.addr=0x016b, .value=0x4d, .type=IO_READ},
        {.addr=0x016c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0xf3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02DB) {
    const struct CPU_State initial_cpu = {.pc=0x4a1d, .a=0x53, .x=0xf0, .y=0xcc, .sp=0xde, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x00}, {.addr=0x4a1d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4a1e, .a=0x53, .x=0xf0, .y=0xcc, .sp=0xdd, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0xf0}, {.addr=0x4a1d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4a1d, .value=0x4d, .type=IO_READ},
        {.addr=0x4a1e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02DC) {
    const struct CPU_State initial_cpu = {.pc=0x62e7, .a=0x66, .x=0x9b, .y=0x10, .sp=0xf7, .status=0x02};
    const struct RamEntry initial_ram[] = {{.addr=0x01f7, .value=0x00}, {.addr=0x62e7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x62e8, .a=0x66, .x=0x9b, .y=0x10, .sp=0xf6, .status=0x02};
    const struct RamEntry final_ram[] = {{.addr=0x01f7, .value=0x9b}, {.addr=0x62e7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x62e7, .value=0x4d, .type=IO_READ},
        {.addr=0x62e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f7, .value=0x9b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02DD) {
    const struct CPU_State initial_cpu = {.pc=0x7960, .a=0xd6, .x=0xb8, .y=0xc0, .sp=0x5f, .status=0x4e};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0x7960, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7961, .a=0xd6, .x=0xb8, .y=0xc0, .sp=0x5e, .status=0x4e};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0xb8}, {.addr=0x7960, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7960, .value=0x4d, .type=IO_READ},
        {.addr=0x7961, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0xb8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02DE) {
    const struct CPU_State initial_cpu = {.pc=0x4441, .a=0xfa, .x=0x07, .y=0x0e, .sp=0x2d, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x012d, .value=0x00}, {.addr=0x4441, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4442, .a=0xfa, .x=0x07, .y=0x0e, .sp=0x2c, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x012d, .value=0x07}, {.addr=0x4441, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4441, .value=0x4d, .type=IO_READ},
        {.addr=0x4442, .value=DUMMY, .type=IO_READ},
        {.addr=0x012d, .value=0x07, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xe854, .a=0x53, .x=0x2d, .y=0x2f, .sp=0x75, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0175, .value=0x00}, {.addr=0xe854, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe855, .a=0x53, .x=0x2d, .y=0x2f, .sp=0x74, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0175, .value=0x2d}, {.addr=0xe854, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe854, .value=0x4d, .type=IO_READ},
        {.addr=0xe855, .value=DUMMY, .type=IO_READ},
        {.addr=0x0175, .value=0x2d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x84f6, .a=0x34, .x=0xe6, .y=0x14, .sp=0x09, .status=0x3e};
    const struct RamEntry initial_ram[] = {{.addr=0x0109, .value=0x00}, {.addr=0x84f6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x84f7, .a=0x34, .x=0xe6, .y=0x14, .sp=0x08, .status=0x3e};
    const struct RamEntry final_ram[] = {{.addr=0x0109, .value=0xe6}, {.addr=0x84f6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x84f6, .value=0x4d, .type=IO_READ},
        {.addr=0x84f7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0109, .value=0xe6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x3e2d, .a=0x46, .x=0x17, .y=0xe2, .sp=0x64, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x00}, {.addr=0x3e2d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3e2e, .a=0x46, .x=0x17, .y=0xe2, .sp=0x63, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x17}, {.addr=0x3e2d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3e2d, .value=0x4d, .type=IO_READ},
        {.addr=0x3e2e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x17, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02E2) {
    const struct CPU_State initial_cpu = {.pc=0x097e, .a=0x11, .x=0x14, .y=0x4f, .sp=0xdf, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0x097e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x097f, .a=0x11, .x=0x14, .y=0x4f, .sp=0xde, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x14}, {.addr=0x097e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x097e, .value=0x4d, .type=IO_READ},
        {.addr=0x097f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x14, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02E3) {
    const struct CPU_State initial_cpu = {.pc=0xcc94, .a=0x20, .x=0x14, .y=0xa8, .sp=0x46, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0xcc94, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcc95, .a=0x20, .x=0x14, .y=0xa8, .sp=0x45, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x14}, {.addr=0xcc94, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcc94, .value=0x4d, .type=IO_READ},
        {.addr=0xcc95, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x14, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x2f20, .a=0xb1, .x=0x3c, .y=0xf7, .sp=0xc9, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x00}, {.addr=0x2f20, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2f21, .a=0xb1, .x=0x3c, .y=0xf7, .sp=0xc8, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0x3c}, {.addr=0x2f20, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2f20, .value=0x4d, .type=IO_READ},
        {.addr=0x2f21, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0x3c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x45d3, .a=0x06, .x=0xf7, .y=0xe7, .sp=0x9f, .status=0xc7};
    const struct RamEntry initial_ram[] = {{.addr=0x019f, .value=0x00}, {.addr=0x45d3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x45d4, .a=0x06, .x=0xf7, .y=0xe7, .sp=0x9e, .status=0xc7};
    const struct RamEntry final_ram[] = {{.addr=0x019f, .value=0xf7}, {.addr=0x45d3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x45d3, .value=0x4d, .type=IO_READ},
        {.addr=0x45d4, .value=DUMMY, .type=IO_READ},
        {.addr=0x019f, .value=0xf7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x6da2, .a=0xd9, .x=0xeb, .y=0x2d, .sp=0xb5, .status=0xef};
    const struct RamEntry initial_ram[] = {{.addr=0x01b5, .value=0x00}, {.addr=0x6da2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6da3, .a=0xd9, .x=0xeb, .y=0x2d, .sp=0xb4, .status=0xef};
    const struct RamEntry final_ram[] = {{.addr=0x01b5, .value=0xeb}, {.addr=0x6da2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6da2, .value=0x4d, .type=IO_READ},
        {.addr=0x6da3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b5, .value=0xeb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02E7) {
    const struct CPU_State initial_cpu = {.pc=0xc2fc, .a=0x98, .x=0x3a, .y=0x39, .sp=0x96, .status=0x68};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0xc2fc, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc2fd, .a=0x98, .x=0x3a, .y=0x39, .sp=0x95, .status=0x68};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0x3a}, {.addr=0xc2fc, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc2fc, .value=0x4d, .type=IO_READ},
        {.addr=0xc2fd, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0x3a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x0ba8, .a=0x15, .x=0xa6, .y=0x00, .sp=0x3f, .status=0x1c};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x00}, {.addr=0x0ba8, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0ba9, .a=0x15, .x=0xa6, .y=0x00, .sp=0x3e, .status=0x1c};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0xa6}, {.addr=0x0ba8, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0ba8, .value=0x4d, .type=IO_READ},
        {.addr=0x0ba9, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0xa6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02E9) {
    const struct CPU_State initial_cpu = {.pc=0xf2b2, .a=0xd6, .x=0x33, .y=0x91, .sp=0xd7, .status=0x84};
    const struct RamEntry initial_ram[] = {{.addr=0x01d7, .value=0x00}, {.addr=0xf2b2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf2b3, .a=0xd6, .x=0x33, .y=0x91, .sp=0xd6, .status=0x84};
    const struct RamEntry final_ram[] = {{.addr=0x01d7, .value=0x33}, {.addr=0xf2b2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf2b2, .value=0x4d, .type=IO_READ},
        {.addr=0xf2b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d7, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x5788, .a=0x49, .x=0xe8, .y=0x61, .sp=0xb9, .status=0x74};
    const struct RamEntry initial_ram[] = {{.addr=0x01b9, .value=0x00}, {.addr=0x5788, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5789, .a=0x49, .x=0xe8, .y=0x61, .sp=0xb8, .status=0x74};
    const struct RamEntry final_ram[] = {{.addr=0x01b9, .value=0xe8}, {.addr=0x5788, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5788, .value=0x4d, .type=IO_READ},
        {.addr=0x5789, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b9, .value=0xe8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02EB) {
    const struct CPU_State initial_cpu = {.pc=0xc59b, .a=0xa3, .x=0xf2, .y=0xe5, .sp=0x3c, .status=0x99};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0xc59b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc59c, .a=0xa3, .x=0xf2, .y=0xe5, .sp=0x3b, .status=0x99};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xf2}, {.addr=0xc59b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc59b, .value=0x4d, .type=IO_READ},
        {.addr=0xc59c, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0xf2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xfab1, .a=0x5c, .x=0x32, .y=0xa0, .sp=0x50, .status=0xed};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x00}, {.addr=0xfab1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xfab2, .a=0x5c, .x=0x32, .y=0xa0, .sp=0x4f, .status=0xed};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x32}, {.addr=0xfab1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xfab1, .value=0x4d, .type=IO_READ},
        {.addr=0xfab2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0x32, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x5b71, .a=0xcc, .x=0x48, .y=0x09, .sp=0x33, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x0133, .value=0x00}, {.addr=0x5b71, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5b72, .a=0xcc, .x=0x48, .y=0x09, .sp=0x32, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x0133, .value=0x48}, {.addr=0x5b71, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5b71, .value=0x4d, .type=IO_READ},
        {.addr=0x5b72, .value=DUMMY, .type=IO_READ},
        {.addr=0x0133, .value=0x48, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xf657, .a=0xd6, .x=0xe2, .y=0xff, .sp=0xc4, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0xf657, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf658, .a=0xd6, .x=0xe2, .y=0xff, .sp=0xc3, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0xe2}, {.addr=0xf657, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf657, .value=0x4d, .type=IO_READ},
        {.addr=0xf658, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0xe2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x2070, .a=0x5c, .x=0x88, .y=0x67, .sp=0x86, .status=0xc8};
    const struct RamEntry initial_ram[] = {{.addr=0x0186, .value=0x00}, {.addr=0x2070, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2071, .a=0x5c, .x=0x88, .y=0x67, .sp=0x85, .status=0xc8};
    const struct RamEntry final_ram[] = {{.addr=0x0186, .value=0x88}, {.addr=0x2070, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2070, .value=0x4d, .type=IO_READ},
        {.addr=0x2071, .value=DUMMY, .type=IO_READ},
        {.addr=0x0186, .value=0x88, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02F0) {
    const struct CPU_State initial_cpu = {.pc=0xa2aa, .a=0x10, .x=0xbc, .y=0x70, .sp=0x00, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0100, .value=0x00}, {.addr=0xa2aa, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa2ab, .a=0x10, .x=0xbc, .y=0x70, .sp=0xff, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0100, .value=0xbc}, {.addr=0xa2aa, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa2aa, .value=0x4d, .type=IO_READ},
        {.addr=0xa2ab, .value=DUMMY, .type=IO_READ},
        {.addr=0x0100, .value=0xbc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x5b1f, .a=0x1a, .x=0xcd, .y=0xd3, .sp=0x96, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x0196, .value=0x00}, {.addr=0x5b1f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5b20, .a=0x1a, .x=0xcd, .y=0xd3, .sp=0x95, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x0196, .value=0xcd}, {.addr=0x5b1f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5b1f, .value=0x4d, .type=IO_READ},
        {.addr=0x5b20, .value=DUMMY, .type=IO_READ},
        {.addr=0x0196, .value=0xcd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x4596, .a=0x72, .x=0x2d, .y=0x83, .sp=0xfd, .status=0x80};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0x4596, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4597, .a=0x72, .x=0x2d, .y=0x83, .sp=0xfc, .status=0x80};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x2d}, {.addr=0x4596, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4596, .value=0x4d, .type=IO_READ},
        {.addr=0x4597, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x2d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xba81, .a=0x67, .x=0x01, .y=0xfe, .sp=0x3d, .status=0xa3};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x00}, {.addr=0xba81, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xba82, .a=0x67, .x=0x01, .y=0xfe, .sp=0x3c, .status=0xa3};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x01}, {.addr=0xba81, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xba81, .value=0x4d, .type=IO_READ},
        {.addr=0xba82, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0x01, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02F4) {
    const struct CPU_State initial_cpu = {.pc=0xedfa, .a=0xa6, .x=0xc4, .y=0x90, .sp=0x20, .status=0xd1};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x00}, {.addr=0xedfa, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xedfb, .a=0xa6, .x=0xc4, .y=0x90, .sp=0x1f, .status=0xd1};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0xc4}, {.addr=0xedfa, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xedfa, .value=0x4d, .type=IO_READ},
        {.addr=0xedfb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0xc4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02F5) {
    const struct CPU_State initial_cpu = {.pc=0x47ac, .a=0x15, .x=0xd3, .y=0xc9, .sp=0xdf, .status=0x29};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0x47ac, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x47ad, .a=0x15, .x=0xd3, .y=0xc9, .sp=0xde, .status=0x29};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0xd3}, {.addr=0x47ac, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x47ac, .value=0x4d, .type=IO_READ},
        {.addr=0x47ad, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0xd3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x2fe5, .a=0xae, .x=0xff, .y=0xa0, .sp=0x8a, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x00}, {.addr=0x2fe5, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2fe6, .a=0xae, .x=0xff, .y=0xa0, .sp=0x89, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xff}, {.addr=0x2fe5, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2fe5, .value=0x4d, .type=IO_READ},
        {.addr=0x2fe6, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0xff, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02F7) {
    const struct CPU_State initial_cpu = {.pc=0xf957, .a=0xe7, .x=0xe9, .y=0x2e, .sp=0x76, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x00}, {.addr=0xf957, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf958, .a=0xe7, .x=0xe9, .y=0x2e, .sp=0x75, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0xe9}, {.addr=0xf957, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf957, .value=0x4d, .type=IO_READ},
        {.addr=0xf958, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x3c83, .a=0x82, .x=0x25, .y=0x46, .sp=0xbf, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x00}, {.addr=0x3c83, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3c84, .a=0x82, .x=0x25, .y=0x46, .sp=0xbe, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x25}, {.addr=0x3c83, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3c83, .value=0x4d, .type=IO_READ},
        {.addr=0x3c84, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0x25, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x2cac, .a=0xc6, .x=0x1b, .y=0x9e, .sp=0x94, .status=0xad};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0x2cac, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2cad, .a=0xc6, .x=0x1b, .y=0x9e, .sp=0x93, .status=0xad};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0x1b}, {.addr=0x2cac, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2cac, .value=0x4d, .type=IO_READ},
        {.addr=0x2cad, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xad87, .a=0x4c, .x=0xd0, .y=0x1d, .sp=0x0b, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x010b, .value=0x00}, {.addr=0xad87, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xad88, .a=0x4c, .x=0xd0, .y=0x1d, .sp=0x0a, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x010b, .value=0xd0}, {.addr=0xad87, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xad87, .value=0x4d, .type=IO_READ},
        {.addr=0xad88, .value=DUMMY, .type=IO_READ},
        {.addr=0x010b, .value=0xd0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02FB) {
    const struct CPU_State initial_cpu = {.pc=0x39c4, .a=0x66, .x=0x9f, .y=0x27, .sp=0x1d, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x00}, {.addr=0x39c4, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x39c5, .a=0x66, .x=0x9f, .y=0x27, .sp=0x1c, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x9f}, {.addr=0x39c4, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x39c4, .value=0x4d, .type=IO_READ},
        {.addr=0x39c5, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x9f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02FC) {
    const struct CPU_State initial_cpu = {.pc=0xb922, .a=0xfb, .x=0xd1, .y=0x42, .sp=0x5e, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x015e, .value=0x00}, {.addr=0xb922, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb923, .a=0xfb, .x=0xd1, .y=0x42, .sp=0x5d, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x015e, .value=0xd1}, {.addr=0xb922, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb922, .value=0x4d, .type=IO_READ},
        {.addr=0xb923, .value=DUMMY, .type=IO_READ},
        {.addr=0x015e, .value=0xd1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x7edf, .a=0x50, .x=0xf9, .y=0x14, .sp=0x39, .status=0x6a};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x00}, {.addr=0x7edf, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7ee0, .a=0x50, .x=0xf9, .y=0x14, .sp=0x38, .status=0x6a};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0xf9}, {.addr=0x7edf, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7edf, .value=0x4d, .type=IO_READ},
        {.addr=0x7ee0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0xf9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02FE) {
    const struct CPU_State initial_cpu = {.pc=0xd381, .a=0x12, .x=0x5e, .y=0x1d, .sp=0xa8, .status=0x6b};
    const struct RamEntry initial_ram[] = {{.addr=0x01a8, .value=0x00}, {.addr=0xd381, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd382, .a=0x12, .x=0x5e, .y=0x1d, .sp=0xa7, .status=0x6b};
    const struct RamEntry final_ram[] = {{.addr=0x01a8, .value=0x5e}, {.addr=0xd381, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd381, .value=0x4d, .type=IO_READ},
        {.addr=0xd382, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a8, .value=0x5e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x61bd, .a=0xaf, .x=0x7f, .y=0x65, .sp=0x67, .status=0x78};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0x61bd, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x61be, .a=0xaf, .x=0x7f, .y=0x65, .sp=0x66, .status=0x78};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x7f}, {.addr=0x61bd, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x61bd, .value=0x4d, .type=IO_READ},
        {.addr=0x61be, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x7f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0300) {
    const struct CPU_State initial_cpu = {.pc=0x6851, .a=0xf3, .x=0x84, .y=0x70, .sp=0x90, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0190, .value=0x00}, {.addr=0x6851, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6852, .a=0xf3, .x=0x84, .y=0x70, .sp=0x8f, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0190, .value=0x84}, {.addr=0x6851, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6851, .value=0x4d, .type=IO_READ},
        {.addr=0x6852, .value=DUMMY, .type=IO_READ},
        {.addr=0x0190, .value=0x84, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0301) {
    const struct CPU_State initial_cpu = {.pc=0x73a6, .a=0x39, .x=0x68, .y=0x66, .sp=0x9a, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x019a, .value=0x00}, {.addr=0x73a6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x73a7, .a=0x39, .x=0x68, .y=0x66, .sp=0x99, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x019a, .value=0x68}, {.addr=0x73a6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x73a6, .value=0x4d, .type=IO_READ},
        {.addr=0x73a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x019a, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0302) {
    const struct CPU_State initial_cpu = {.pc=0x45b0, .a=0xf9, .x=0x9f, .y=0x90, .sp=0x1d, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x00}, {.addr=0x45b0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x45b1, .a=0xf9, .x=0x9f, .y=0x90, .sp=0x1c, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x9f}, {.addr=0x45b0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x45b0, .value=0x4d, .type=IO_READ},
        {.addr=0x45b1, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x9f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0303) {
    const struct CPU_State initial_cpu = {.pc=0x6ad4, .a=0x3e, .x=0x3f, .y=0xef, .sp=0xfd, .status=0x63};
    const struct RamEntry initial_ram[] = {{.addr=0x01fd, .value=0x00}, {.addr=0x6ad4, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6ad5, .a=0x3e, .x=0x3f, .y=0xef, .sp=0xfc, .status=0x63};
    const struct RamEntry final_ram[] = {{.addr=0x01fd, .value=0x3f}, {.addr=0x6ad4, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6ad4, .value=0x4d, .type=IO_READ},
        {.addr=0x6ad5, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fd, .value=0x3f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0304) {
    const struct CPU_State initial_cpu = {.pc=0x95fb, .a=0x2a, .x=0x5c, .y=0x72, .sp=0x77, .status=0xda};
    const struct RamEntry initial_ram[] = {{.addr=0x0177, .value=0x00}, {.addr=0x95fb, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x95fc, .a=0x2a, .x=0x5c, .y=0x72, .sp=0x76, .status=0xda};
    const struct RamEntry final_ram[] = {{.addr=0x0177, .value=0x5c}, {.addr=0x95fb, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x95fb, .value=0x4d, .type=IO_READ},
        {.addr=0x95fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0177, .value=0x5c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0305) {
    const struct CPU_State initial_cpu = {.pc=0xaeef, .a=0x91, .x=0x09, .y=0x2e, .sp=0x81, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x00}, {.addr=0xaeef, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xaef0, .a=0x91, .x=0x09, .y=0x2e, .sp=0x80, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x09}, {.addr=0xaeef, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xaeef, .value=0x4d, .type=IO_READ},
        {.addr=0xaef0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0x09, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0306) {
    const struct CPU_State initial_cpu = {.pc=0x862e, .a=0xee, .x=0x57, .y=0x2a, .sp=0x98, .status=0x82};
    const struct RamEntry initial_ram[] = {{.addr=0x0198, .value=0x00}, {.addr=0x862e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x862f, .a=0xee, .x=0x57, .y=0x2a, .sp=0x97, .status=0x82};
    const struct RamEntry final_ram[] = {{.addr=0x0198, .value=0x57}, {.addr=0x862e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x862e, .value=0x4d, .type=IO_READ},
        {.addr=0x862f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0198, .value=0x57, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0307) {
    const struct CPU_State initial_cpu = {.pc=0xc023, .a=0x6d, .x=0x1e, .y=0xf2, .sp=0x61, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x00}, {.addr=0xc023, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc024, .a=0x6d, .x=0x1e, .y=0xf2, .sp=0x60, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x1e}, {.addr=0xc023, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc023, .value=0x4d, .type=IO_READ},
        {.addr=0xc024, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0308) {
    const struct CPU_State initial_cpu = {.pc=0x8ed9, .a=0x94, .x=0xf0, .y=0x06, .sp=0x5f, .status=0xe1};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0x8ed9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8eda, .a=0x94, .x=0xf0, .y=0x06, .sp=0x5e, .status=0xe1};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0xf0}, {.addr=0x8ed9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8ed9, .value=0x4d, .type=IO_READ},
        {.addr=0x8eda, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0308", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0309) {
    const struct CPU_State initial_cpu = {.pc=0x1475, .a=0xdb, .x=0xf9, .y=0x7e, .sp=0x13, .status=0xa6};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0x1475, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1476, .a=0xdb, .x=0xf9, .y=0x7e, .sp=0x12, .status=0xa6};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0xf9}, {.addr=0x1475, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1475, .value=0x4d, .type=IO_READ},
        {.addr=0x1476, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0xf9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_030A) {
    const struct CPU_State initial_cpu = {.pc=0xf2b6, .a=0x5c, .x=0xb8, .y=0x5b, .sp=0x13, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0113, .value=0x00}, {.addr=0xf2b6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf2b7, .a=0x5c, .x=0xb8, .y=0x5b, .sp=0x12, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0113, .value=0xb8}, {.addr=0xf2b6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf2b6, .value=0x4d, .type=IO_READ},
        {.addr=0xf2b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0113, .value=0xb8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_030B) {
    const struct CPU_State initial_cpu = {.pc=0x308b, .a=0xdb, .x=0xa7, .y=0x44, .sp=0xfe, .status=0x11};
    const struct RamEntry initial_ram[] = {{.addr=0x01fe, .value=0x00}, {.addr=0x308b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x308c, .a=0xdb, .x=0xa7, .y=0x44, .sp=0xfd, .status=0x11};
    const struct RamEntry final_ram[] = {{.addr=0x01fe, .value=0xa7}, {.addr=0x308b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x308b, .value=0x4d, .type=IO_READ},
        {.addr=0x308c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fe, .value=0xa7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_030C) {
    const struct CPU_State initial_cpu = {.pc=0x895c, .a=0x6d, .x=0xfa, .y=0x16, .sp=0xdc, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x00}, {.addr=0x895c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x895d, .a=0x6d, .x=0xfa, .y=0x16, .sp=0xdb, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0xfa}, {.addr=0x895c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x895c, .value=0x4d, .type=IO_READ},
        {.addr=0x895d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0xfa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_030D) {
    const struct CPU_State initial_cpu = {.pc=0x447a, .a=0x3a, .x=0xaf, .y=0xc8, .sp=0x40, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x00}, {.addr=0x447a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x447b, .a=0x3a, .x=0xaf, .y=0xc8, .sp=0x3f, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xaf}, {.addr=0x447a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x447a, .value=0x4d, .type=IO_READ},
        {.addr=0x447b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0xaf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_030E) {
    const struct CPU_State initial_cpu = {.pc=0x0dbb, .a=0x47, .x=0x75, .y=0x92, .sp=0xec, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x00}, {.addr=0x0dbb, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0dbc, .a=0x47, .x=0x75, .y=0x92, .sp=0xeb, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0x75}, {.addr=0x0dbb, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0dbb, .value=0x4d, .type=IO_READ},
        {.addr=0x0dbc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0x75, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_030F) {
    const struct CPU_State initial_cpu = {.pc=0x0393, .a=0x1d, .x=0x04, .y=0x4e, .sp=0x21, .status=0xca};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x00}, {.addr=0x0393, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0394, .a=0x1d, .x=0x04, .y=0x4e, .sp=0x20, .status=0xca};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0x04}, {.addr=0x0393, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0393, .value=0x4d, .type=IO_READ},
        {.addr=0x0394, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0310) {
    const struct CPU_State initial_cpu = {.pc=0x5186, .a=0x88, .x=0x6d, .y=0xe2, .sp=0x2c, .status=0x05};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x00}, {.addr=0x5186, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5187, .a=0x88, .x=0x6d, .y=0xe2, .sp=0x2b, .status=0x05};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0x6d}, {.addr=0x5186, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5186, .value=0x4d, .type=IO_READ},
        {.addr=0x5187, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0x6d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0311) {
    const struct CPU_State initial_cpu = {.pc=0x5de6, .a=0x83, .x=0xe4, .y=0x54, .sp=0x10, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0x5de6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5de7, .a=0x83, .x=0xe4, .y=0x54, .sp=0x0f, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xe4}, {.addr=0x5de6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5de6, .value=0x4d, .type=IO_READ},
        {.addr=0x5de7, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0xe4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0312) {
    const struct CPU_State initial_cpu = {.pc=0xf1f5, .a=0x28, .x=0x0a, .y=0xe3, .sp=0xc1, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x01c1, .value=0x00}, {.addr=0xf1f5, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf1f6, .a=0x28, .x=0x0a, .y=0xe3, .sp=0xc0, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x01c1, .value=0x0a}, {.addr=0xf1f5, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf1f5, .value=0x4d, .type=IO_READ},
        {.addr=0xf1f6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c1, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0313) {
    const struct CPU_State initial_cpu = {.pc=0x2905, .a=0x6b, .x=0x91, .y=0x86, .sp=0x23, .status=0x75};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x00}, {.addr=0x2905, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2906, .a=0x6b, .x=0x91, .y=0x86, .sp=0x22, .status=0x75};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x91}, {.addr=0x2905, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2905, .value=0x4d, .type=IO_READ},
        {.addr=0x2906, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x91, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0314) {
    const struct CPU_State initial_cpu = {.pc=0xed8b, .a=0x72, .x=0x40, .y=0x81, .sp=0x58, .status=0x08};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x00}, {.addr=0xed8b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xed8c, .a=0x72, .x=0x40, .y=0x81, .sp=0x57, .status=0x08};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x40}, {.addr=0xed8b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xed8b, .value=0x4d, .type=IO_READ},
        {.addr=0xed8c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x40, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0315) {
    const struct CPU_State initial_cpu = {.pc=0x70eb, .a=0x37, .x=0x82, .y=0x6d, .sp=0xef, .status=0x7a};
    const struct RamEntry initial_ram[] = {{.addr=0x01ef, .value=0x00}, {.addr=0x70eb, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x70ec, .a=0x37, .x=0x82, .y=0x6d, .sp=0xee, .status=0x7a};
    const struct RamEntry final_ram[] = {{.addr=0x01ef, .value=0x82}, {.addr=0x70eb, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x70eb, .value=0x4d, .type=IO_READ},
        {.addr=0x70ec, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ef, .value=0x82, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0316) {
    const struct CPU_State initial_cpu = {.pc=0xaef4, .a=0x78, .x=0x2f, .y=0xac, .sp=0x61, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x00}, {.addr=0xaef4, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xaef5, .a=0x78, .x=0x2f, .y=0xac, .sp=0x60, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x2f}, {.addr=0xaef4, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xaef4, .value=0x4d, .type=IO_READ},
        {.addr=0xaef5, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x2f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0317) {
    const struct CPU_State initial_cpu = {.pc=0x6fc0, .a=0xba, .x=0xc6, .y=0x7c, .sp=0x42, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0142, .value=0x00}, {.addr=0x6fc0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6fc1, .a=0xba, .x=0xc6, .y=0x7c, .sp=0x41, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x0142, .value=0xc6}, {.addr=0x6fc0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6fc0, .value=0x4d, .type=IO_READ},
        {.addr=0x6fc1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0142, .value=0xc6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0318) {
    const struct CPU_State initial_cpu = {.pc=0xf13a, .a=0x98, .x=0xb7, .y=0xc0, .sp=0x24, .status=0x1d};
    const struct RamEntry initial_ram[] = {{.addr=0x0124, .value=0x00}, {.addr=0xf13a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf13b, .a=0x98, .x=0xb7, .y=0xc0, .sp=0x23, .status=0x1d};
    const struct RamEntry final_ram[] = {{.addr=0x0124, .value=0xb7}, {.addr=0xf13a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf13a, .value=0x4d, .type=IO_READ},
        {.addr=0xf13b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0124, .value=0xb7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0319) {
    const struct CPU_State initial_cpu = {.pc=0xc428, .a=0x52, .x=0xe3, .y=0x0f, .sp=0x8a, .status=0x71};
    const struct RamEntry initial_ram[] = {{.addr=0x018a, .value=0x00}, {.addr=0xc428, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc429, .a=0x52, .x=0xe3, .y=0x0f, .sp=0x89, .status=0x71};
    const struct RamEntry final_ram[] = {{.addr=0x018a, .value=0xe3}, {.addr=0xc428, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc428, .value=0x4d, .type=IO_READ},
        {.addr=0xc429, .value=DUMMY, .type=IO_READ},
        {.addr=0x018a, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_031A) {
    const struct CPU_State initial_cpu = {.pc=0x875a, .a=0xe3, .x=0x0a, .y=0xa3, .sp=0x6e, .status=0x04};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x00}, {.addr=0x875a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x875b, .a=0xe3, .x=0x0a, .y=0xa3, .sp=0x6d, .status=0x04};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x0a}, {.addr=0x875a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x875a, .value=0x4d, .type=IO_READ},
        {.addr=0x875b, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_031B) {
    const struct CPU_State initial_cpu = {.pc=0x4b56, .a=0xcc, .x=0x9c, .y=0xb1, .sp=0x4f, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x014f, .value=0x00}, {.addr=0x4b56, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4b57, .a=0xcc, .x=0x9c, .y=0xb1, .sp=0x4e, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x014f, .value=0x9c}, {.addr=0x4b56, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4b56, .value=0x4d, .type=IO_READ},
        {.addr=0x4b57, .value=DUMMY, .type=IO_READ},
        {.addr=0x014f, .value=0x9c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_031C) {
    const struct CPU_State initial_cpu = {.pc=0xcf0a, .a=0xc3, .x=0xdf, .y=0x1b, .sp=0xe1, .status=0x6c};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x00}, {.addr=0xcf0a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcf0b, .a=0xc3, .x=0xdf, .y=0x1b, .sp=0xe0, .status=0x6c};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0xdf}, {.addr=0xcf0a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcf0a, .value=0x4d, .type=IO_READ},
        {.addr=0xcf0b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0xdf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_031D) {
    const struct CPU_State initial_cpu = {.pc=0xbbea, .a=0xec, .x=0x16, .y=0x74, .sp=0x07, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0xbbea, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbbeb, .a=0xec, .x=0x16, .y=0x74, .sp=0x06, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x16}, {.addr=0xbbea, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbbea, .value=0x4d, .type=IO_READ},
        {.addr=0xbbeb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x16, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_031E) {
    const struct CPU_State initial_cpu = {.pc=0xfa95, .a=0xe4, .x=0xdd, .y=0xd4, .sp=0xb0, .status=0xe6};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0xfa95, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xfa96, .a=0xe4, .x=0xdd, .y=0xd4, .sp=0xaf, .status=0xe6};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xdd}, {.addr=0xfa95, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xfa95, .value=0x4d, .type=IO_READ},
        {.addr=0xfa96, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0xdd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_031F) {
    const struct CPU_State initial_cpu = {.pc=0x2c43, .a=0xb6, .x=0x29, .y=0x26, .sp=0xa7, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x01a7, .value=0x00}, {.addr=0x2c43, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2c44, .a=0xb6, .x=0x29, .y=0x26, .sp=0xa6, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x01a7, .value=0x29}, {.addr=0x2c43, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2c43, .value=0x4d, .type=IO_READ},
        {.addr=0x2c44, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a7, .value=0x29, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0320) {
    const struct CPU_State initial_cpu = {.pc=0x2deb, .a=0x2f, .x=0xd3, .y=0x04, .sp=0xcc, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x01cc, .value=0x00}, {.addr=0x2deb, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2dec, .a=0x2f, .x=0xd3, .y=0x04, .sp=0xcb, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x01cc, .value=0xd3}, {.addr=0x2deb, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2deb, .value=0x4d, .type=IO_READ},
        {.addr=0x2dec, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cc, .value=0xd3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0321) {
    const struct CPU_State initial_cpu = {.pc=0x007b, .a=0x5b, .x=0x8c, .y=0x9f, .sp=0x41, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x007b, .value=0x4d}, {.addr=0x0141, .value=0x00}};
    const struct CPU_State final_cpu = {.pc=0x007c, .a=0x5b, .x=0x8c, .y=0x9f, .sp=0x40, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x007b, .value=0x4d}, {.addr=0x0141, .value=0x8c}};
    const struct BusEvent events[] = {
        {.addr=0x007b, .value=0x4d, .type=IO_READ},
        {.addr=0x007c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0x8c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0322) {
    const struct CPU_State initial_cpu = {.pc=0xa0ce, .a=0x4c, .x=0x20, .y=0x3d, .sp=0xd6, .status=0x4a};
    const struct RamEntry initial_ram[] = {{.addr=0x01d6, .value=0x00}, {.addr=0xa0ce, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa0cf, .a=0x4c, .x=0x20, .y=0x3d, .sp=0xd5, .status=0x4a};
    const struct RamEntry final_ram[] = {{.addr=0x01d6, .value=0x20}, {.addr=0xa0ce, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa0ce, .value=0x4d, .type=IO_READ},
        {.addr=0xa0cf, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d6, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0323) {
    const struct CPU_State initial_cpu = {.pc=0xb73e, .a=0x65, .x=0x4a, .y=0x29, .sp=0x63, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x00}, {.addr=0xb73e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb73f, .a=0x65, .x=0x4a, .y=0x29, .sp=0x62, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0x4a}, {.addr=0xb73e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb73e, .value=0x4d, .type=IO_READ},
        {.addr=0xb73f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0x4a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0324) {
    const struct CPU_State initial_cpu = {.pc=0x4df5, .a=0x74, .x=0xed, .y=0x59, .sp=0xb2, .status=0xbd};
    const struct RamEntry initial_ram[] = {{.addr=0x01b2, .value=0x00}, {.addr=0x4df5, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4df6, .a=0x74, .x=0xed, .y=0x59, .sp=0xb1, .status=0xbd};
    const struct RamEntry final_ram[] = {{.addr=0x01b2, .value=0xed}, {.addr=0x4df5, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4df5, .value=0x4d, .type=IO_READ},
        {.addr=0x4df6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b2, .value=0xed, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0325) {
    const struct CPU_State initial_cpu = {.pc=0x716c, .a=0xca, .x=0xee, .y=0x9a, .sp=0xa5, .status=0xf6};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0x716c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x716d, .a=0xca, .x=0xee, .y=0x9a, .sp=0xa4, .status=0xf6};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xee}, {.addr=0x716c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x716c, .value=0x4d, .type=IO_READ},
        {.addr=0x716d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0xee, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0326) {
    const struct CPU_State initial_cpu = {.pc=0xa07a, .a=0xdf, .x=0x91, .y=0xc4, .sp=0x05, .status=0x34};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x00}, {.addr=0xa07a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa07b, .a=0xdf, .x=0x91, .y=0xc4, .sp=0x04, .status=0x34};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x91}, {.addr=0xa07a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa07a, .value=0x4d, .type=IO_READ},
        {.addr=0xa07b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x91, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0327) {
    const struct CPU_State initial_cpu = {.pc=0x83e3, .a=0xfa, .x=0x08, .y=0x7c, .sp=0x1d, .status=0x4d};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x00}, {.addr=0x83e3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x83e4, .a=0xfa, .x=0x08, .y=0x7c, .sp=0x1c, .status=0x4d};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x08}, {.addr=0x83e3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x83e3, .value=0x4d, .type=IO_READ},
        {.addr=0x83e4, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x08, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0328) {
    const struct CPU_State initial_cpu = {.pc=0x17f7, .a=0xfe, .x=0x90, .y=0x26, .sp=0x50, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0150, .value=0x00}, {.addr=0x17f7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x17f8, .a=0xfe, .x=0x90, .y=0x26, .sp=0x4f, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0150, .value=0x90}, {.addr=0x17f7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x17f7, .value=0x4d, .type=IO_READ},
        {.addr=0x17f8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0150, .value=0x90, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0329) {
    const struct CPU_State initial_cpu = {.pc=0x1523, .a=0x32, .x=0xf0, .y=0x60, .sp=0x10, .status=0x1f};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0x1523, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1524, .a=0x32, .x=0xf0, .y=0x60, .sp=0x0f, .status=0x1f};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xf0}, {.addr=0x1523, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1523, .value=0x4d, .type=IO_READ},
        {.addr=0x1524, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0329", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_032A) {
    const struct CPU_State initial_cpu = {.pc=0x8595, .a=0x85, .x=0x31, .y=0x2a, .sp=0xb3, .status=0x8c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b3, .value=0x00}, {.addr=0x8595, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8596, .a=0x85, .x=0x31, .y=0x2a, .sp=0xb2, .status=0x8c};
    const struct RamEntry final_ram[] = {{.addr=0x01b3, .value=0x31}, {.addr=0x8595, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8595, .value=0x4d, .type=IO_READ},
        {.addr=0x8596, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b3, .value=0x31, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_032B) {
    const struct CPU_State initial_cpu = {.pc=0x54fd, .a=0xf8, .x=0xd0, .y=0x68, .sp=0x0a, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0x54fd, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x54fe, .a=0xf8, .x=0xd0, .y=0x68, .sp=0x09, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xd0}, {.addr=0x54fd, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x54fd, .value=0x4d, .type=IO_READ},
        {.addr=0x54fe, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xd0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_032C) {
    const struct CPU_State initial_cpu = {.pc=0x3d65, .a=0x18, .x=0xcf, .y=0x16, .sp=0xa4, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x01a4, .value=0x00}, {.addr=0x3d65, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3d66, .a=0x18, .x=0xcf, .y=0x16, .sp=0xa3, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x01a4, .value=0xcf}, {.addr=0x3d65, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3d65, .value=0x4d, .type=IO_READ},
        {.addr=0x3d66, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a4, .value=0xcf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_032D) {
    const struct CPU_State initial_cpu = {.pc=0x1139, .a=0xbf, .x=0xf2, .y=0x1f, .sp=0xbd, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0x1139, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x113a, .a=0xbf, .x=0xf2, .y=0x1f, .sp=0xbc, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0xf2}, {.addr=0x1139, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1139, .value=0x4d, .type=IO_READ},
        {.addr=0x113a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0xf2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_032E) {
    const struct CPU_State initial_cpu = {.pc=0x0ca2, .a=0x32, .x=0xf0, .y=0x14, .sp=0x8f, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0x0ca2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0ca3, .a=0x32, .x=0xf0, .y=0x14, .sp=0x8e, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0xf0}, {.addr=0x0ca2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0ca2, .value=0x4d, .type=IO_READ},
        {.addr=0x0ca3, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_032F) {
    const struct CPU_State initial_cpu = {.pc=0x5084, .a=0x0c, .x=0x7f, .y=0xcf, .sp=0x45, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x00}, {.addr=0x5084, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5085, .a=0x0c, .x=0x7f, .y=0xcf, .sp=0x44, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x7f}, {.addr=0x5084, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5084, .value=0x4d, .type=IO_READ},
        {.addr=0x5085, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0x7f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0330) {
    const struct CPU_State initial_cpu = {.pc=0xfe76, .a=0x17, .x=0x1a, .y=0x2e, .sp=0x66, .status=0x09};
    const struct RamEntry initial_ram[] = {{.addr=0x0166, .value=0x00}, {.addr=0xfe76, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xfe77, .a=0x17, .x=0x1a, .y=0x2e, .sp=0x65, .status=0x09};
    const struct RamEntry final_ram[] = {{.addr=0x0166, .value=0x1a}, {.addr=0xfe76, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xfe76, .value=0x4d, .type=IO_READ},
        {.addr=0xfe77, .value=DUMMY, .type=IO_READ},
        {.addr=0x0166, .value=0x1a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0331) {
    const struct CPU_State initial_cpu = {.pc=0x66f3, .a=0x75, .x=0x70, .y=0x7c, .sp=0x5b, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x00}, {.addr=0x66f3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x66f4, .a=0x75, .x=0x70, .y=0x7c, .sp=0x5a, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x70}, {.addr=0x66f3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x66f3, .value=0x4d, .type=IO_READ},
        {.addr=0x66f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0x70, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0332) {
    const struct CPU_State initial_cpu = {.pc=0x6e8d, .a=0x32, .x=0xfd, .y=0x8c, .sp=0xc3, .status=0x52};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x00}, {.addr=0x6e8d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6e8e, .a=0x32, .x=0xfd, .y=0x8c, .sp=0xc2, .status=0x52};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0xfd}, {.addr=0x6e8d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6e8d, .value=0x4d, .type=IO_READ},
        {.addr=0x6e8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0xfd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0333) {
    const struct CPU_State initial_cpu = {.pc=0xa672, .a=0x09, .x=0x14, .y=0xd3, .sp=0xf0, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x01f0, .value=0x00}, {.addr=0xa672, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa673, .a=0x09, .x=0x14, .y=0xd3, .sp=0xef, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x01f0, .value=0x14}, {.addr=0xa672, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa672, .value=0x4d, .type=IO_READ},
        {.addr=0xa673, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f0, .value=0x14, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0334) {
    const struct CPU_State initial_cpu = {.pc=0x650d, .a=0xff, .x=0x26, .y=0x68, .sp=0xa5, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0x650d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x650e, .a=0xff, .x=0x26, .y=0x68, .sp=0xa4, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0x26}, {.addr=0x650d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x650d, .value=0x4d, .type=IO_READ},
        {.addr=0x650e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0335) {
    const struct CPU_State initial_cpu = {.pc=0x7ec0, .a=0xf8, .x=0x9f, .y=0xfa, .sp=0x4a, .status=0x87};
    const struct RamEntry initial_ram[] = {{.addr=0x014a, .value=0x00}, {.addr=0x7ec0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7ec1, .a=0xf8, .x=0x9f, .y=0xfa, .sp=0x49, .status=0x87};
    const struct RamEntry final_ram[] = {{.addr=0x014a, .value=0x9f}, {.addr=0x7ec0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7ec0, .value=0x4d, .type=IO_READ},
        {.addr=0x7ec1, .value=DUMMY, .type=IO_READ},
        {.addr=0x014a, .value=0x9f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0336) {
    const struct CPU_State initial_cpu = {.pc=0x42a3, .a=0xe6, .x=0x21, .y=0xc1, .sp=0xeb, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0x42a3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x42a4, .a=0xe6, .x=0x21, .y=0xc1, .sp=0xea, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x21}, {.addr=0x42a3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x42a3, .value=0x4d, .type=IO_READ},
        {.addr=0x42a4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x21, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0337) {
    const struct CPU_State initial_cpu = {.pc=0x2620, .a=0x9a, .x=0xc1, .y=0x07, .sp=0x65, .status=0xa0};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x00}, {.addr=0x2620, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2621, .a=0x9a, .x=0xc1, .y=0x07, .sp=0x64, .status=0xa0};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0xc1}, {.addr=0x2620, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2620, .value=0x4d, .type=IO_READ},
        {.addr=0x2621, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0338) {
    const struct CPU_State initial_cpu = {.pc=0x9301, .a=0x03, .x=0x3e, .y=0xf8, .sp=0x3e, .status=0x43};
    const struct RamEntry initial_ram[] = {{.addr=0x013e, .value=0x00}, {.addr=0x9301, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9302, .a=0x03, .x=0x3e, .y=0xf8, .sp=0x3d, .status=0x43};
    const struct RamEntry final_ram[] = {{.addr=0x013e, .value=0x3e}, {.addr=0x9301, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9301, .value=0x4d, .type=IO_READ},
        {.addr=0x9302, .value=DUMMY, .type=IO_READ},
        {.addr=0x013e, .value=0x3e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0339) {
    const struct CPU_State initial_cpu = {.pc=0x3a5e, .a=0xb5, .x=0x73, .y=0x0a, .sp=0x18, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x00}, {.addr=0x3a5e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3a5f, .a=0xb5, .x=0x73, .y=0x0a, .sp=0x17, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0x73}, {.addr=0x3a5e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3a5e, .value=0x4d, .type=IO_READ},
        {.addr=0x3a5f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0x73, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_033A) {
    const struct CPU_State initial_cpu = {.pc=0xf4f2, .a=0x55, .x=0x33, .y=0x53, .sp=0x6c, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x00}, {.addr=0xf4f2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf4f3, .a=0x55, .x=0x33, .y=0x53, .sp=0x6b, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x33}, {.addr=0xf4f2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf4f2, .value=0x4d, .type=IO_READ},
        {.addr=0xf4f3, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x33, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_033B) {
    const struct CPU_State initial_cpu = {.pc=0x86ed, .a=0xd9, .x=0x05, .y=0x69, .sp=0x37, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x0137, .value=0x00}, {.addr=0x86ed, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x86ee, .a=0xd9, .x=0x05, .y=0x69, .sp=0x36, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x0137, .value=0x05}, {.addr=0x86ed, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x86ed, .value=0x4d, .type=IO_READ},
        {.addr=0x86ee, .value=DUMMY, .type=IO_READ},
        {.addr=0x0137, .value=0x05, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_033C) {
    const struct CPU_State initial_cpu = {.pc=0xe251, .a=0xc4, .x=0x28, .y=0x96, .sp=0x6d, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x016d, .value=0x00}, {.addr=0xe251, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe252, .a=0xc4, .x=0x28, .y=0x96, .sp=0x6c, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x016d, .value=0x28}, {.addr=0xe251, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe251, .value=0x4d, .type=IO_READ},
        {.addr=0xe252, .value=DUMMY, .type=IO_READ},
        {.addr=0x016d, .value=0x28, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_033D) {
    const struct CPU_State initial_cpu = {.pc=0x9d71, .a=0x73, .x=0x01, .y=0x56, .sp=0xb1, .status=0x2c};
    const struct RamEntry initial_ram[] = {{.addr=0x01b1, .value=0x00}, {.addr=0x9d71, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9d72, .a=0x73, .x=0x01, .y=0x56, .sp=0xb0, .status=0x2c};
    const struct RamEntry final_ram[] = {{.addr=0x01b1, .value=0x01}, {.addr=0x9d71, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9d71, .value=0x4d, .type=IO_READ},
        {.addr=0x9d72, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b1, .value=0x01, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_033E) {
    const struct CPU_State initial_cpu = {.pc=0x4b98, .a=0x61, .x=0xd4, .y=0x41, .sp=0xad, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x01ad, .value=0x00}, {.addr=0x4b98, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4b99, .a=0x61, .x=0xd4, .y=0x41, .sp=0xac, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x01ad, .value=0xd4}, {.addr=0x4b98, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4b98, .value=0x4d, .type=IO_READ},
        {.addr=0x4b99, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ad, .value=0xd4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_033F) {
    const struct CPU_State initial_cpu = {.pc=0xb12f, .a=0x01, .x=0xa4, .y=0xf3, .sp=0x10, .status=0x9e};
    const struct RamEntry initial_ram[] = {{.addr=0x0110, .value=0x00}, {.addr=0xb12f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb130, .a=0x01, .x=0xa4, .y=0xf3, .sp=0x0f, .status=0x9e};
    const struct RamEntry final_ram[] = {{.addr=0x0110, .value=0xa4}, {.addr=0xb12f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb12f, .value=0x4d, .type=IO_READ},
        {.addr=0xb130, .value=DUMMY, .type=IO_READ},
        {.addr=0x0110, .value=0xa4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0340) {
    const struct CPU_State initial_cpu = {.pc=0x259d, .a=0xac, .x=0x0b, .y=0x31, .sp=0x64, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x00}, {.addr=0x259d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x259e, .a=0xac, .x=0x0b, .y=0x31, .sp=0x63, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x0b}, {.addr=0x259d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x259d, .value=0x4d, .type=IO_READ},
        {.addr=0x259e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x0b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0341) {
    const struct CPU_State initial_cpu = {.pc=0xf070, .a=0xad, .x=0xd7, .y=0x10, .sp=0x8b, .status=0xa1};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x00}, {.addr=0xf070, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf071, .a=0xad, .x=0xd7, .y=0x10, .sp=0x8a, .status=0xa1};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0xd7}, {.addr=0xf070, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf070, .value=0x4d, .type=IO_READ},
        {.addr=0xf071, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0xd7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0342) {
    const struct CPU_State initial_cpu = {.pc=0x0cef, .a=0xb8, .x=0x26, .y=0x9b, .sp=0x7e, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x017e, .value=0x00}, {.addr=0x0cef, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0cf0, .a=0xb8, .x=0x26, .y=0x9b, .sp=0x7d, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x017e, .value=0x26}, {.addr=0x0cef, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0cef, .value=0x4d, .type=IO_READ},
        {.addr=0x0cf0, .value=DUMMY, .type=IO_READ},
        {.addr=0x017e, .value=0x26, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0343) {
    const struct CPU_State initial_cpu = {.pc=0x9063, .a=0x1d, .x=0xc1, .y=0x06, .sp=0xd3, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01d3, .value=0x00}, {.addr=0x9063, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9064, .a=0x1d, .x=0xc1, .y=0x06, .sp=0xd2, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01d3, .value=0xc1}, {.addr=0x9063, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9063, .value=0x4d, .type=IO_READ},
        {.addr=0x9064, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d3, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0344) {
    const struct CPU_State initial_cpu = {.pc=0x8ff6, .a=0x4d, .x=0x84, .y=0xac, .sp=0xc5, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01c5, .value=0x00}, {.addr=0x8ff6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8ff7, .a=0x4d, .x=0x84, .y=0xac, .sp=0xc4, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x01c5, .value=0x84}, {.addr=0x8ff6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8ff6, .value=0x4d, .type=IO_READ},
        {.addr=0x8ff7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c5, .value=0x84, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0345) {
    const struct CPU_State initial_cpu = {.pc=0x95a5, .a=0x78, .x=0xe3, .y=0xce, .sp=0x5a, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x00}, {.addr=0x95a5, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x95a6, .a=0x78, .x=0xe3, .y=0xce, .sp=0x59, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xe3}, {.addr=0x95a5, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x95a5, .value=0x4d, .type=IO_READ},
        {.addr=0x95a6, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0xe3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0346) {
    const struct CPU_State initial_cpu = {.pc=0x6372, .a=0x9b, .x=0xc8, .y=0x94, .sp=0x6f, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x016f, .value=0x00}, {.addr=0x6372, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6373, .a=0x9b, .x=0xc8, .y=0x94, .sp=0x6e, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x016f, .value=0xc8}, {.addr=0x6372, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6372, .value=0x4d, .type=IO_READ},
        {.addr=0x6373, .value=DUMMY, .type=IO_READ},
        {.addr=0x016f, .value=0xc8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0347) {
    const struct CPU_State initial_cpu = {.pc=0x38f7, .a=0x12, .x=0x16, .y=0x06, .sp=0xa2, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x00}, {.addr=0x38f7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x38f8, .a=0x12, .x=0x16, .y=0x06, .sp=0xa1, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x16}, {.addr=0x38f7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x38f7, .value=0x4d, .type=IO_READ},
        {.addr=0x38f8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x16, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0348) {
    const struct CPU_State initial_cpu = {.pc=0x092e, .a=0x58, .x=0xf5, .y=0xb1, .sp=0x8c, .status=0x83};
    const struct RamEntry initial_ram[] = {{.addr=0x018c, .value=0x00}, {.addr=0x092e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x092f, .a=0x58, .x=0xf5, .y=0xb1, .sp=0x8b, .status=0x83};
    const struct RamEntry final_ram[] = {{.addr=0x018c, .value=0xf5}, {.addr=0x092e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x092e, .value=0x4d, .type=IO_READ},
        {.addr=0x092f, .value=DUMMY, .type=IO_READ},
        {.addr=0x018c, .value=0xf5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0349) {
    const struct CPU_State initial_cpu = {.pc=0x8b23, .a=0x0a, .x=0x6a, .y=0xb7, .sp=0x7c, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x00}, {.addr=0x8b23, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8b24, .a=0x0a, .x=0x6a, .y=0xb7, .sp=0x7b, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x6a}, {.addr=0x8b23, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8b23, .value=0x4d, .type=IO_READ},
        {.addr=0x8b24, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x6a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_034A) {
    const struct CPU_State initial_cpu = {.pc=0x513c, .a=0x93, .x=0x75, .y=0x02, .sp=0x7b, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x00}, {.addr=0x513c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x513d, .a=0x93, .x=0x75, .y=0x02, .sp=0x7a, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x75}, {.addr=0x513c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x513c, .value=0x4d, .type=IO_READ},
        {.addr=0x513d, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x75, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_034B) {
    const struct CPU_State initial_cpu = {.pc=0x2257, .a=0x34, .x=0xb3, .y=0xc9, .sp=0x8b, .status=0x2b};
    const struct RamEntry initial_ram[] = {{.addr=0x018b, .value=0x00}, {.addr=0x2257, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2258, .a=0x34, .x=0xb3, .y=0xc9, .sp=0x8a, .status=0x2b};
    const struct RamEntry final_ram[] = {{.addr=0x018b, .value=0xb3}, {.addr=0x2257, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2257, .value=0x4d, .type=IO_READ},
        {.addr=0x2258, .value=DUMMY, .type=IO_READ},
        {.addr=0x018b, .value=0xb3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_034C) {
    const struct CPU_State initial_cpu = {.pc=0x71b2, .a=0xc3, .x=0xd2, .y=0x66, .sp=0x02, .status=0x47};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x00}, {.addr=0x71b2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x71b3, .a=0xc3, .x=0xd2, .y=0x66, .sp=0x01, .status=0x47};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0xd2}, {.addr=0x71b2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x71b2, .value=0x4d, .type=IO_READ},
        {.addr=0x71b3, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0xd2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_034D) {
    const struct CPU_State initial_cpu = {.pc=0x67be, .a=0xde, .x=0xde, .y=0xec, .sp=0x25, .status=0x6e};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x00}, {.addr=0x67be, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x67bf, .a=0xde, .x=0xde, .y=0xec, .sp=0x24, .status=0x6e};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0xde}, {.addr=0x67be, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x67be, .value=0x4d, .type=IO_READ},
        {.addr=0x67bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0xde, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_034E) {
    const struct CPU_State initial_cpu = {.pc=0x6525, .a=0x45, .x=0x71, .y=0xab, .sp=0x49, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0149, .value=0x00}, {.addr=0x6525, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6526, .a=0x45, .x=0x71, .y=0xab, .sp=0x48, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0149, .value=0x71}, {.addr=0x6525, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6525, .value=0x4d, .type=IO_READ},
        {.addr=0x6526, .value=DUMMY, .type=IO_READ},
        {.addr=0x0149, .value=0x71, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 034E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_034F) {
    const struct CPU_State initial_cpu = {.pc=0x0b65, .a=0xf0, .x=0x49, .y=0x5e, .sp=0x16, .status=0x57};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0x0b65, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0b66, .a=0xf0, .x=0x49, .y=0x5e, .sp=0x15, .status=0x57};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x49}, {.addr=0x0b65, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0b65, .value=0x4d, .type=IO_READ},
        {.addr=0x0b66, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0x49, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0350) {
    const struct CPU_State initial_cpu = {.pc=0xbbc7, .a=0xa6, .x=0x0a, .y=0x87, .sp=0x5b, .status=0x24};
    const struct RamEntry initial_ram[] = {{.addr=0x015b, .value=0x00}, {.addr=0xbbc7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbbc8, .a=0xa6, .x=0x0a, .y=0x87, .sp=0x5a, .status=0x24};
    const struct RamEntry final_ram[] = {{.addr=0x015b, .value=0x0a}, {.addr=0xbbc7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbbc7, .value=0x4d, .type=IO_READ},
        {.addr=0xbbc8, .value=DUMMY, .type=IO_READ},
        {.addr=0x015b, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0351) {
    const struct CPU_State initial_cpu = {.pc=0x46c1, .a=0x30, .x=0x76, .y=0x0a, .sp=0x45, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x00}, {.addr=0x46c1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x46c2, .a=0x30, .x=0x76, .y=0x0a, .sp=0x44, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x76}, {.addr=0x46c1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x46c1, .value=0x4d, .type=IO_READ},
        {.addr=0x46c2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0x76, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0352) {
    const struct CPU_State initial_cpu = {.pc=0x4ee3, .a=0xe3, .x=0x15, .y=0x29, .sp=0xc3, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x00}, {.addr=0x4ee3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4ee4, .a=0xe3, .x=0x15, .y=0x29, .sp=0xc2, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x15}, {.addr=0x4ee3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4ee3, .value=0x4d, .type=IO_READ},
        {.addr=0x4ee4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0x15, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0353) {
    const struct CPU_State initial_cpu = {.pc=0x0783, .a=0x7a, .x=0x25, .y=0x53, .sp=0x05, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x0105, .value=0x00}, {.addr=0x0783, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0784, .a=0x7a, .x=0x25, .y=0x53, .sp=0x04, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x0105, .value=0x25}, {.addr=0x0783, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0783, .value=0x4d, .type=IO_READ},
        {.addr=0x0784, .value=DUMMY, .type=IO_READ},
        {.addr=0x0105, .value=0x25, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0354) {
    const struct CPU_State initial_cpu = {.pc=0xea1f, .a=0x6b, .x=0xff, .y=0x76, .sp=0xec, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01ec, .value=0x00}, {.addr=0xea1f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xea20, .a=0x6b, .x=0xff, .y=0x76, .sp=0xeb, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01ec, .value=0xff}, {.addr=0xea1f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xea1f, .value=0x4d, .type=IO_READ},
        {.addr=0xea20, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ec, .value=0xff, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0355) {
    const struct CPU_State initial_cpu = {.pc=0x5012, .a=0xe0, .x=0x10, .y=0x97, .sp=0xe5, .status=0x70};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x00}, {.addr=0x5012, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5013, .a=0xe0, .x=0x10, .y=0x97, .sp=0xe4, .status=0x70};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x10}, {.addr=0x5012, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5012, .value=0x4d, .type=IO_READ},
        {.addr=0x5013, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x10, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0356) {
    const struct CPU_State initial_cpu = {.pc=0xf56b, .a=0xb4, .x=0x32, .y=0x23, .sp=0x6e, .status=0xa2};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x00}, {.addr=0xf56b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf56c, .a=0xb4, .x=0x32, .y=0x23, .sp=0x6d, .status=0xa2};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x32}, {.addr=0xf56b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf56b, .value=0x4d, .type=IO_READ},
        {.addr=0xf56c, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x32, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0357) {
    const struct CPU_State initial_cpu = {.pc=0x6b0a, .a=0xe5, .x=0xf6, .y=0xb8, .sp=0x12, .status=0x0d};
    const struct RamEntry initial_ram[] = {{.addr=0x0112, .value=0x00}, {.addr=0x6b0a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6b0b, .a=0xe5, .x=0xf6, .y=0xb8, .sp=0x11, .status=0x0d};
    const struct RamEntry final_ram[] = {{.addr=0x0112, .value=0xf6}, {.addr=0x6b0a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6b0a, .value=0x4d, .type=IO_READ},
        {.addr=0x6b0b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0112, .value=0xf6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0358) {
    const struct CPU_State initial_cpu = {.pc=0x5c8b, .a=0x88, .x=0x77, .y=0x16, .sp=0x41, .status=0xe4};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x00}, {.addr=0x5c8b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5c8c, .a=0x88, .x=0x77, .y=0x16, .sp=0x40, .status=0xe4};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x77}, {.addr=0x5c8b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5c8b, .value=0x4d, .type=IO_READ},
        {.addr=0x5c8c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0x77, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0359) {
    const struct CPU_State initial_cpu = {.pc=0x6823, .a=0x61, .x=0x4b, .y=0x53, .sp=0xaa, .status=0x7f};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x00}, {.addr=0x6823, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6824, .a=0x61, .x=0x4b, .y=0x53, .sp=0xa9, .status=0x7f};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0x4b}, {.addr=0x6823, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6823, .value=0x4d, .type=IO_READ},
        {.addr=0x6824, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0x4b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_035A) {
    const struct CPU_State initial_cpu = {.pc=0x9606, .a=0xba, .x=0x98, .y=0x75, .sp=0x40, .status=0x58};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x00}, {.addr=0x9606, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9607, .a=0xba, .x=0x98, .y=0x75, .sp=0x3f, .status=0x58};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0x98}, {.addr=0x9606, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9606, .value=0x4d, .type=IO_READ},
        {.addr=0x9607, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0x98, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_035B) {
    const struct CPU_State initial_cpu = {.pc=0x168e, .a=0xe9, .x=0xb7, .y=0x71, .sp=0x2e, .status=0x37};
    const struct RamEntry initial_ram[] = {{.addr=0x012e, .value=0x00}, {.addr=0x168e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x168f, .a=0xe9, .x=0xb7, .y=0x71, .sp=0x2d, .status=0x37};
    const struct RamEntry final_ram[] = {{.addr=0x012e, .value=0xb7}, {.addr=0x168e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x168e, .value=0x4d, .type=IO_READ},
        {.addr=0x168f, .value=DUMMY, .type=IO_READ},
        {.addr=0x012e, .value=0xb7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_035C) {
    const struct CPU_State initial_cpu = {.pc=0xb6dd, .a=0xcc, .x=0x67, .y=0x1d, .sp=0x1d, .status=0xc0};
    const struct RamEntry initial_ram[] = {{.addr=0x011d, .value=0x00}, {.addr=0xb6dd, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb6de, .a=0xcc, .x=0x67, .y=0x1d, .sp=0x1c, .status=0xc0};
    const struct RamEntry final_ram[] = {{.addr=0x011d, .value=0x67}, {.addr=0xb6dd, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb6dd, .value=0x4d, .type=IO_READ},
        {.addr=0xb6de, .value=DUMMY, .type=IO_READ},
        {.addr=0x011d, .value=0x67, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_035D) {
    const struct CPU_State initial_cpu = {.pc=0xf508, .a=0xd3, .x=0x25, .y=0x37, .sp=0x25, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x00}, {.addr=0xf508, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf509, .a=0xd3, .x=0x25, .y=0x37, .sp=0x24, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x25}, {.addr=0xf508, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf508, .value=0x4d, .type=IO_READ},
        {.addr=0xf509, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0x25, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_035E) {
    const struct CPU_State initial_cpu = {.pc=0xccc3, .a=0xe7, .x=0x01, .y=0xea, .sp=0xbc, .status=0xf2};
    const struct RamEntry initial_ram[] = {{.addr=0x01bc, .value=0x00}, {.addr=0xccc3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xccc4, .a=0xe7, .x=0x01, .y=0xea, .sp=0xbb, .status=0xf2};
    const struct RamEntry final_ram[] = {{.addr=0x01bc, .value=0x01}, {.addr=0xccc3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xccc3, .value=0x4d, .type=IO_READ},
        {.addr=0xccc4, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bc, .value=0x01, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_035F) {
    const struct CPU_State initial_cpu = {.pc=0xead0, .a=0x5b, .x=0x9d, .y=0x3d, .sp=0x9d, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x019d, .value=0x00}, {.addr=0xead0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xead1, .a=0x5b, .x=0x9d, .y=0x3d, .sp=0x9c, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x019d, .value=0x9d}, {.addr=0xead0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xead0, .value=0x4d, .type=IO_READ},
        {.addr=0xead1, .value=DUMMY, .type=IO_READ},
        {.addr=0x019d, .value=0x9d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0360) {
    const struct CPU_State initial_cpu = {.pc=0xfc0c, .a=0xe9, .x=0x10, .y=0x22, .sp=0xda, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x00}, {.addr=0xfc0c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xfc0d, .a=0xe9, .x=0x10, .y=0x22, .sp=0xd9, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x10}, {.addr=0xfc0c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xfc0c, .value=0x4d, .type=IO_READ},
        {.addr=0xfc0d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0x10, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0361) {
    const struct CPU_State initial_cpu = {.pc=0xa3a7, .a=0xf0, .x=0xd6, .y=0xe1, .sp=0xd9, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01d9, .value=0x00}, {.addr=0xa3a7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa3a8, .a=0xf0, .x=0xd6, .y=0xe1, .sp=0xd8, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01d9, .value=0xd6}, {.addr=0xa3a7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa3a7, .value=0x4d, .type=IO_READ},
        {.addr=0xa3a8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d9, .value=0xd6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0362) {
    const struct CPU_State initial_cpu = {.pc=0x307b, .a=0x57, .x=0xf2, .y=0x46, .sp=0xbd, .status=0x07};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0x307b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x307c, .a=0x57, .x=0xf2, .y=0x46, .sp=0xbc, .status=0x07};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0xf2}, {.addr=0x307b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x307b, .value=0x4d, .type=IO_READ},
        {.addr=0x307c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0xf2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0363) {
    const struct CPU_State initial_cpu = {.pc=0x0ac2, .a=0x33, .x=0xbf, .y=0x42, .sp=0x3c, .status=0x86};
    const struct RamEntry initial_ram[] = {{.addr=0x013c, .value=0x00}, {.addr=0x0ac2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0ac3, .a=0x33, .x=0xbf, .y=0x42, .sp=0x3b, .status=0x86};
    const struct RamEntry final_ram[] = {{.addr=0x013c, .value=0xbf}, {.addr=0x0ac2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0ac2, .value=0x4d, .type=IO_READ},
        {.addr=0x0ac3, .value=DUMMY, .type=IO_READ},
        {.addr=0x013c, .value=0xbf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0364) {
    const struct CPU_State initial_cpu = {.pc=0x0f3d, .a=0xa7, .x=0xfd, .y=0x3b, .sp=0xcd, .status=0x42};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x00}, {.addr=0x0f3d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0f3e, .a=0xa7, .x=0xfd, .y=0x3b, .sp=0xcc, .status=0x42};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0xfd}, {.addr=0x0f3d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0f3d, .value=0x4d, .type=IO_READ},
        {.addr=0x0f3e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0xfd, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0365) {
    const struct CPU_State initial_cpu = {.pc=0xf4fb, .a=0x75, .x=0x1e, .y=0x5f, .sp=0xd2, .status=0x97};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x00}, {.addr=0xf4fb, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf4fc, .a=0x75, .x=0x1e, .y=0x5f, .sp=0xd1, .status=0x97};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x1e}, {.addr=0xf4fb, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf4fb, .value=0x4d, .type=IO_READ},
        {.addr=0xf4fc, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x1e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0366) {
    const struct CPU_State initial_cpu = {.pc=0x56dd, .a=0x9a, .x=0x40, .y=0xfa, .sp=0x59, .status=0xfb};
    const struct RamEntry initial_ram[] = {{.addr=0x0159, .value=0x00}, {.addr=0x56dd, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x56de, .a=0x9a, .x=0x40, .y=0xfa, .sp=0x58, .status=0xfb};
    const struct RamEntry final_ram[] = {{.addr=0x0159, .value=0x40}, {.addr=0x56dd, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x56dd, .value=0x4d, .type=IO_READ},
        {.addr=0x56de, .value=DUMMY, .type=IO_READ},
        {.addr=0x0159, .value=0x40, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0367) {
    const struct CPU_State initial_cpu = {.pc=0x0483, .a=0xe5, .x=0x22, .y=0x1f, .sp=0x5c, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x015c, .value=0x00}, {.addr=0x0483, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0484, .a=0xe5, .x=0x22, .y=0x1f, .sp=0x5b, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x015c, .value=0x22}, {.addr=0x0483, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0483, .value=0x4d, .type=IO_READ},
        {.addr=0x0484, .value=DUMMY, .type=IO_READ},
        {.addr=0x015c, .value=0x22, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0368) {
    const struct CPU_State initial_cpu = {.pc=0x273d, .a=0xc4, .x=0x36, .y=0x4e, .sp=0x38, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0138, .value=0x00}, {.addr=0x273d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x273e, .a=0xc4, .x=0x36, .y=0x4e, .sp=0x37, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x0138, .value=0x36}, {.addr=0x273d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x273d, .value=0x4d, .type=IO_READ},
        {.addr=0x273e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0138, .value=0x36, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0369) {
    const struct CPU_State initial_cpu = {.pc=0xd5f1, .a=0x50, .x=0x87, .y=0x86, .sp=0x2a, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x00}, {.addr=0xd5f1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd5f2, .a=0x50, .x=0x87, .y=0x86, .sp=0x29, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x87}, {.addr=0xd5f1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd5f1, .value=0x4d, .type=IO_READ},
        {.addr=0xd5f2, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0x87, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_036A) {
    const struct CPU_State initial_cpu = {.pc=0xc026, .a=0x9f, .x=0xaa, .y=0x0d, .sp=0x56, .status=0x03};
    const struct RamEntry initial_ram[] = {{.addr=0x0156, .value=0x00}, {.addr=0xc026, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc027, .a=0x9f, .x=0xaa, .y=0x0d, .sp=0x55, .status=0x03};
    const struct RamEntry final_ram[] = {{.addr=0x0156, .value=0xaa}, {.addr=0xc026, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc026, .value=0x4d, .type=IO_READ},
        {.addr=0xc027, .value=DUMMY, .type=IO_READ},
        {.addr=0x0156, .value=0xaa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_036B) {
    const struct CPU_State initial_cpu = {.pc=0xca02, .a=0xfd, .x=0x6a, .y=0x97, .sp=0x3f, .status=0x30};
    const struct RamEntry initial_ram[] = {{.addr=0x013f, .value=0x00}, {.addr=0xca02, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xca03, .a=0xfd, .x=0x6a, .y=0x97, .sp=0x3e, .status=0x30};
    const struct RamEntry final_ram[] = {{.addr=0x013f, .value=0x6a}, {.addr=0xca02, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xca02, .value=0x4d, .type=IO_READ},
        {.addr=0xca03, .value=DUMMY, .type=IO_READ},
        {.addr=0x013f, .value=0x6a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_036C) {
    const struct CPU_State initial_cpu = {.pc=0xcb34, .a=0x47, .x=0x02, .y=0xd6, .sp=0x02, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x0102, .value=0x00}, {.addr=0xcb34, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcb35, .a=0x47, .x=0x02, .y=0xd6, .sp=0x01, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x0102, .value=0x02}, {.addr=0xcb34, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcb34, .value=0x4d, .type=IO_READ},
        {.addr=0xcb35, .value=DUMMY, .type=IO_READ},
        {.addr=0x0102, .value=0x02, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_036D) {
    const struct CPU_State initial_cpu = {.pc=0x4256, .a=0x64, .x=0x22, .y=0x93, .sp=0x7c, .status=0xfc};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x00}, {.addr=0x4256, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4257, .a=0x64, .x=0x22, .y=0x93, .sp=0x7b, .status=0xfc};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0x22}, {.addr=0x4256, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4256, .value=0x4d, .type=IO_READ},
        {.addr=0x4257, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0x22, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_036E) {
    const struct CPU_State initial_cpu = {.pc=0xdae8, .a=0xad, .x=0xec, .y=0xab, .sp=0x0a, .status=0x20};
    const struct RamEntry initial_ram[] = {{.addr=0x010a, .value=0x00}, {.addr=0xdae8, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xdae9, .a=0xad, .x=0xec, .y=0xab, .sp=0x09, .status=0x20};
    const struct RamEntry final_ram[] = {{.addr=0x010a, .value=0xec}, {.addr=0xdae8, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xdae8, .value=0x4d, .type=IO_READ},
        {.addr=0xdae9, .value=DUMMY, .type=IO_READ},
        {.addr=0x010a, .value=0xec, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_036F) {
    const struct CPU_State initial_cpu = {.pc=0x04f9, .a=0x04, .x=0xcb, .y=0x9b, .sp=0x40, .status=0xae};
    const struct RamEntry initial_ram[] = {{.addr=0x0140, .value=0x00}, {.addr=0x04f9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x04fa, .a=0x04, .x=0xcb, .y=0x9b, .sp=0x3f, .status=0xae};
    const struct RamEntry final_ram[] = {{.addr=0x0140, .value=0xcb}, {.addr=0x04f9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x04f9, .value=0x4d, .type=IO_READ},
        {.addr=0x04fa, .value=DUMMY, .type=IO_READ},
        {.addr=0x0140, .value=0xcb, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0370) {
    const struct CPU_State initial_cpu = {.pc=0x1e75, .a=0xe0, .x=0x62, .y=0x8a, .sp=0x74, .status=0x50};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x00}, {.addr=0x1e75, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1e76, .a=0xe0, .x=0x62, .y=0x8a, .sp=0x73, .status=0x50};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x62}, {.addr=0x1e75, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1e75, .value=0x4d, .type=IO_READ},
        {.addr=0x1e76, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x62, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0371) {
    const struct CPU_State initial_cpu = {.pc=0x5d0d, .a=0x2e, .x=0xd7, .y=0xf6, .sp=0xee, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0x5d0d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5d0e, .a=0x2e, .x=0xd7, .y=0xf6, .sp=0xed, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xd7}, {.addr=0x5d0d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5d0d, .value=0x4d, .type=IO_READ},
        {.addr=0x5d0e, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0xd7, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0372) {
    const struct CPU_State initial_cpu = {.pc=0xfb16, .a=0x8c, .x=0x66, .y=0xeb, .sp=0x67, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0167, .value=0x00}, {.addr=0xfb16, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xfb17, .a=0x8c, .x=0x66, .y=0xeb, .sp=0x66, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0167, .value=0x66}, {.addr=0xfb16, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xfb16, .value=0x4d, .type=IO_READ},
        {.addr=0xfb17, .value=DUMMY, .type=IO_READ},
        {.addr=0x0167, .value=0x66, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0373) {
    const struct CPU_State initial_cpu = {.pc=0x2763, .a=0xec, .x=0x4c, .y=0x89, .sp=0x39, .status=0x64};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x00}, {.addr=0x2763, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2764, .a=0xec, .x=0x4c, .y=0x89, .sp=0x38, .status=0x64};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0x4c}, {.addr=0x2763, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2763, .value=0x4d, .type=IO_READ},
        {.addr=0x2764, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0x4c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0374) {
    const struct CPU_State initial_cpu = {.pc=0x870c, .a=0xbb, .x=0xc4, .y=0xa1, .sp=0x41, .status=0x88};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x00}, {.addr=0x870c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x870d, .a=0xbb, .x=0xc4, .y=0xa1, .sp=0x40, .status=0x88};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0xc4}, {.addr=0x870c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x870c, .value=0x4d, .type=IO_READ},
        {.addr=0x870d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0xc4, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0375) {
    const struct CPU_State initial_cpu = {.pc=0x40b1, .a=0xcb, .x=0x60, .y=0xfc, .sp=0x89, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x0189, .value=0x00}, {.addr=0x40b1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x40b2, .a=0xcb, .x=0x60, .y=0xfc, .sp=0x88, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x0189, .value=0x60}, {.addr=0x40b1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x40b1, .value=0x4d, .type=IO_READ},
        {.addr=0x40b2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0189, .value=0x60, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0376) {
    const struct CPU_State initial_cpu = {.pc=0x1bbc, .a=0x9b, .x=0x65, .y=0x06, .sp=0xb0, .status=0x61};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0x1bbc, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1bbd, .a=0x9b, .x=0x65, .y=0x06, .sp=0xaf, .status=0x61};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0x65}, {.addr=0x1bbc, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1bbc, .value=0x4d, .type=IO_READ},
        {.addr=0x1bbd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0x65, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0377) {
    const struct CPU_State initial_cpu = {.pc=0x7985, .a=0xe2, .x=0x3f, .y=0x63, .sp=0x3a, .status=0x79};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x00}, {.addr=0x7985, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7986, .a=0xe2, .x=0x3f, .y=0x63, .sp=0x39, .status=0x79};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0x3f}, {.addr=0x7985, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7985, .value=0x4d, .type=IO_READ},
        {.addr=0x7986, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0x3f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0378) {
    const struct CPU_State initial_cpu = {.pc=0x2228, .a=0xf2, .x=0x1a, .y=0x6d, .sp=0xd5, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x01d5, .value=0x00}, {.addr=0x2228, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2229, .a=0xf2, .x=0x1a, .y=0x6d, .sp=0xd4, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x01d5, .value=0x1a}, {.addr=0x2228, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2228, .value=0x4d, .type=IO_READ},
        {.addr=0x2229, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d5, .value=0x1a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0379) {
    const struct CPU_State initial_cpu = {.pc=0xfe6d, .a=0x43, .x=0xd3, .y=0x40, .sp=0x46, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0xfe6d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xfe6e, .a=0x43, .x=0xd3, .y=0x40, .sp=0x45, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0xd3}, {.addr=0xfe6d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xfe6d, .value=0x4d, .type=IO_READ},
        {.addr=0xfe6e, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0xd3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_037A) {
    const struct CPU_State initial_cpu = {.pc=0xd11a, .a=0x90, .x=0x0c, .y=0xd5, .sp=0xd0, .status=0x22};
    const struct RamEntry initial_ram[] = {{.addr=0x01d0, .value=0x00}, {.addr=0xd11a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd11b, .a=0x90, .x=0x0c, .y=0xd5, .sp=0xcf, .status=0x22};
    const struct RamEntry final_ram[] = {{.addr=0x01d0, .value=0x0c}, {.addr=0xd11a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd11a, .value=0x4d, .type=IO_READ},
        {.addr=0xd11b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d0, .value=0x0c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_037B) {
    const struct CPU_State initial_cpu = {.pc=0xf4da, .a=0x34, .x=0xf8, .y=0xb0, .sp=0x78, .status=0x40};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0xf4da, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf4db, .a=0x34, .x=0xf8, .y=0xb0, .sp=0x77, .status=0x40};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0xf8}, {.addr=0xf4da, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf4da, .value=0x4d, .type=IO_READ},
        {.addr=0xf4db, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0xf8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_037C) {
    const struct CPU_State initial_cpu = {.pc=0xd8b3, .a=0x62, .x=0xfa, .y=0xc9, .sp=0x5a, .status=0xeb};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x00}, {.addr=0xd8b3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd8b4, .a=0x62, .x=0xfa, .y=0xc9, .sp=0x59, .status=0xeb};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xfa}, {.addr=0xd8b3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd8b3, .value=0x4d, .type=IO_READ},
        {.addr=0xd8b4, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0xfa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_037D) {
    const struct CPU_State initial_cpu = {.pc=0x310c, .a=0x31, .x=0x1d, .y=0xbf, .sp=0xe3, .status=0xb9};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0x310c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x310d, .a=0x31, .x=0x1d, .y=0xbf, .sp=0xe2, .status=0xb9};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x1d}, {.addr=0x310c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x310c, .value=0x4d, .type=IO_READ},
        {.addr=0x310d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0x1d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_037E) {
    const struct CPU_State initial_cpu = {.pc=0x7401, .a=0x96, .x=0x6d, .y=0x7a, .sp=0x8f, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0x7401, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7402, .a=0x96, .x=0x6d, .y=0x7a, .sp=0x8e, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0x6d}, {.addr=0x7401, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7401, .value=0x4d, .type=IO_READ},
        {.addr=0x7402, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0x6d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_037F) {
    const struct CPU_State initial_cpu = {.pc=0x0a2b, .a=0x2e, .x=0x11, .y=0xb6, .sp=0xeb, .status=0x3c};
    const struct RamEntry initial_ram[] = {{.addr=0x01eb, .value=0x00}, {.addr=0x0a2b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0a2c, .a=0x2e, .x=0x11, .y=0xb6, .sp=0xea, .status=0x3c};
    const struct RamEntry final_ram[] = {{.addr=0x01eb, .value=0x11}, {.addr=0x0a2b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0a2b, .value=0x4d, .type=IO_READ},
        {.addr=0x0a2c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01eb, .value=0x11, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0380) {
    const struct CPU_State initial_cpu = {.pc=0xb434, .a=0xa9, .x=0xd5, .y=0x17, .sp=0x70, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x00}, {.addr=0xb434, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb435, .a=0xa9, .x=0xd5, .y=0x17, .sp=0x6f, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0xd5}, {.addr=0xb434, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb434, .value=0x4d, .type=IO_READ},
        {.addr=0xb435, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0xd5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0381) {
    const struct CPU_State initial_cpu = {.pc=0x6ad5, .a=0xc6, .x=0x89, .y=0x5d, .sp=0xe3, .status=0x5d};
    const struct RamEntry initial_ram[] = {{.addr=0x01e3, .value=0x00}, {.addr=0x6ad5, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6ad6, .a=0xc6, .x=0x89, .y=0x5d, .sp=0xe2, .status=0x5d};
    const struct RamEntry final_ram[] = {{.addr=0x01e3, .value=0x89}, {.addr=0x6ad5, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6ad5, .value=0x4d, .type=IO_READ},
        {.addr=0x6ad6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e3, .value=0x89, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0382) {
    const struct CPU_State initial_cpu = {.pc=0xf79e, .a=0xce, .x=0x2e, .y=0x1e, .sp=0xd2, .status=0xc4};
    const struct RamEntry initial_ram[] = {{.addr=0x01d2, .value=0x00}, {.addr=0xf79e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf79f, .a=0xce, .x=0x2e, .y=0x1e, .sp=0xd1, .status=0xc4};
    const struct RamEntry final_ram[] = {{.addr=0x01d2, .value=0x2e}, {.addr=0xf79e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf79e, .value=0x4d, .type=IO_READ},
        {.addr=0xf79f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d2, .value=0x2e, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0382", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0383) {
    const struct CPU_State initial_cpu = {.pc=0xa564, .a=0x48, .x=0xd8, .y=0xfc, .sp=0xb0, .status=0x35};
    const struct RamEntry initial_ram[] = {{.addr=0x01b0, .value=0x00}, {.addr=0xa564, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa565, .a=0x48, .x=0xd8, .y=0xfc, .sp=0xaf, .status=0x35};
    const struct RamEntry final_ram[] = {{.addr=0x01b0, .value=0xd8}, {.addr=0xa564, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa564, .value=0x4d, .type=IO_READ},
        {.addr=0xa565, .value=DUMMY, .type=IO_READ},
        {.addr=0x01b0, .value=0xd8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0384) {
    const struct CPU_State initial_cpu = {.pc=0xb6ec, .a=0x72, .x=0x84, .y=0x5f, .sp=0x62, .status=0x6f};
    const struct RamEntry initial_ram[] = {{.addr=0x0162, .value=0x00}, {.addr=0xb6ec, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb6ed, .a=0x72, .x=0x84, .y=0x5f, .sp=0x61, .status=0x6f};
    const struct RamEntry final_ram[] = {{.addr=0x0162, .value=0x84}, {.addr=0xb6ec, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb6ec, .value=0x4d, .type=IO_READ},
        {.addr=0xb6ed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0162, .value=0x84, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0385) {
    const struct CPU_State initial_cpu = {.pc=0xb147, .a=0x77, .x=0x9d, .y=0x7f, .sp=0xc2, .status=0xff};
    const struct RamEntry initial_ram[] = {{.addr=0x01c2, .value=0x00}, {.addr=0xb147, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb148, .a=0x77, .x=0x9d, .y=0x7f, .sp=0xc1, .status=0xff};
    const struct RamEntry final_ram[] = {{.addr=0x01c2, .value=0x9d}, {.addr=0xb147, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb147, .value=0x4d, .type=IO_READ},
        {.addr=0xb148, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c2, .value=0x9d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0386) {
    const struct CPU_State initial_cpu = {.pc=0x0bf2, .a=0xba, .x=0x1f, .y=0xd2, .sp=0xe0, .status=0xac};
    const struct RamEntry initial_ram[] = {{.addr=0x01e0, .value=0x00}, {.addr=0x0bf2, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0bf3, .a=0xba, .x=0x1f, .y=0xd2, .sp=0xdf, .status=0xac};
    const struct RamEntry final_ram[] = {{.addr=0x01e0, .value=0x1f}, {.addr=0x0bf2, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0bf2, .value=0x4d, .type=IO_READ},
        {.addr=0x0bf3, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e0, .value=0x1f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0387) {
    const struct CPU_State initial_cpu = {.pc=0xebaa, .a=0x31, .x=0xf5, .y=0x03, .sp=0xc9, .status=0x8d};
    const struct RamEntry initial_ram[] = {{.addr=0x01c9, .value=0x00}, {.addr=0xebaa, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xebab, .a=0x31, .x=0xf5, .y=0x03, .sp=0xc8, .status=0x8d};
    const struct RamEntry final_ram[] = {{.addr=0x01c9, .value=0xf5}, {.addr=0xebaa, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xebaa, .value=0x4d, .type=IO_READ},
        {.addr=0xebab, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c9, .value=0xf5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0388) {
    const struct CPU_State initial_cpu = {.pc=0x9dbb, .a=0x4f, .x=0x54, .y=0x42, .sp=0x2b, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x012b, .value=0x00}, {.addr=0x9dbb, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9dbc, .a=0x4f, .x=0x54, .y=0x42, .sp=0x2a, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x012b, .value=0x54}, {.addr=0x9dbb, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9dbb, .value=0x4d, .type=IO_READ},
        {.addr=0x9dbc, .value=DUMMY, .type=IO_READ},
        {.addr=0x012b, .value=0x54, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0389) {
    const struct CPU_State initial_cpu = {.pc=0x9e94, .a=0x71, .x=0x84, .y=0xd9, .sp=0x6c, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x00}, {.addr=0x9e94, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9e95, .a=0x71, .x=0x84, .y=0xd9, .sp=0x6b, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x84}, {.addr=0x9e94, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9e94, .value=0x4d, .type=IO_READ},
        {.addr=0x9e95, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x84, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_038A) {
    const struct CPU_State initial_cpu = {.pc=0xfe98, .a=0x45, .x=0x8c, .y=0x33, .sp=0x70, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x0170, .value=0x00}, {.addr=0xfe98, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xfe99, .a=0x45, .x=0x8c, .y=0x33, .sp=0x6f, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x0170, .value=0x8c}, {.addr=0xfe98, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xfe98, .value=0x4d, .type=IO_READ},
        {.addr=0xfe99, .value=DUMMY, .type=IO_READ},
        {.addr=0x0170, .value=0x8c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_038B) {
    const struct CPU_State initial_cpu = {.pc=0x5b29, .a=0xda, .x=0xbc, .y=0x1f, .sp=0x3a, .status=0x7e};
    const struct RamEntry initial_ram[] = {{.addr=0x013a, .value=0x00}, {.addr=0x5b29, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5b2a, .a=0xda, .x=0xbc, .y=0x1f, .sp=0x39, .status=0x7e};
    const struct RamEntry final_ram[] = {{.addr=0x013a, .value=0xbc}, {.addr=0x5b29, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5b29, .value=0x4d, .type=IO_READ},
        {.addr=0x5b2a, .value=DUMMY, .type=IO_READ},
        {.addr=0x013a, .value=0xbc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_038C) {
    const struct CPU_State initial_cpu = {.pc=0x1563, .a=0xe8, .x=0xe6, .y=0x94, .sp=0x18, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0118, .value=0x00}, {.addr=0x1563, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1564, .a=0xe8, .x=0xe6, .y=0x94, .sp=0x17, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0118, .value=0xe6}, {.addr=0x1563, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1563, .value=0x4d, .type=IO_READ},
        {.addr=0x1564, .value=DUMMY, .type=IO_READ},
        {.addr=0x0118, .value=0xe6, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_038D) {
    const struct CPU_State initial_cpu = {.pc=0x96cc, .a=0xc9, .x=0x2c, .y=0xb0, .sp=0xe1, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x01e1, .value=0x00}, {.addr=0x96cc, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x96cd, .a=0xc9, .x=0x2c, .y=0xb0, .sp=0xe0, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x01e1, .value=0x2c}, {.addr=0x96cc, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x96cc, .value=0x4d, .type=IO_READ},
        {.addr=0x96cd, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e1, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_038E) {
    const struct CPU_State initial_cpu = {.pc=0xd255, .a=0x33, .x=0x48, .y=0x4a, .sp=0x2a, .status=0x0a};
    const struct RamEntry initial_ram[] = {{.addr=0x012a, .value=0x00}, {.addr=0xd255, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd256, .a=0x33, .x=0x48, .y=0x4a, .sp=0x29, .status=0x0a};
    const struct RamEntry final_ram[] = {{.addr=0x012a, .value=0x48}, {.addr=0xd255, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd255, .value=0x4d, .type=IO_READ},
        {.addr=0xd256, .value=DUMMY, .type=IO_READ},
        {.addr=0x012a, .value=0x48, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_038F) {
    const struct CPU_State initial_cpu = {.pc=0xa953, .a=0x96, .x=0xee, .y=0xa8, .sp=0x1c, .status=0x1a};
    const struct RamEntry initial_ram[] = {{.addr=0x011c, .value=0x00}, {.addr=0xa953, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa954, .a=0x96, .x=0xee, .y=0xa8, .sp=0x1b, .status=0x1a};
    const struct RamEntry final_ram[] = {{.addr=0x011c, .value=0xee}, {.addr=0xa953, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa953, .value=0x4d, .type=IO_READ},
        {.addr=0xa954, .value=DUMMY, .type=IO_READ},
        {.addr=0x011c, .value=0xee, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0390) {
    const struct CPU_State initial_cpu = {.pc=0xf5db, .a=0x85, .x=0x4b, .y=0x69, .sp=0x08, .status=0x46};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x00}, {.addr=0xf5db, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf5dc, .a=0x85, .x=0x4b, .y=0x69, .sp=0x07, .status=0x46};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x4b}, {.addr=0xf5db, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf5db, .value=0x4d, .type=IO_READ},
        {.addr=0xf5dc, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0x4b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0391) {
    const struct CPU_State initial_cpu = {.pc=0xa18c, .a=0x5f, .x=0xdc, .y=0x6e, .sp=0x5f, .status=0xee};
    const struct RamEntry initial_ram[] = {{.addr=0x015f, .value=0x00}, {.addr=0xa18c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa18d, .a=0x5f, .x=0xdc, .y=0x6e, .sp=0x5e, .status=0xee};
    const struct RamEntry final_ram[] = {{.addr=0x015f, .value=0xdc}, {.addr=0xa18c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa18c, .value=0x4d, .type=IO_READ},
        {.addr=0xa18d, .value=DUMMY, .type=IO_READ},
        {.addr=0x015f, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0392) {
    const struct CPU_State initial_cpu = {.pc=0xaae6, .a=0xe5, .x=0x6d, .y=0x7d, .sp=0xf3, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x00}, {.addr=0xaae6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xaae7, .a=0xe5, .x=0x6d, .y=0x7d, .sp=0xf2, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x6d}, {.addr=0xaae6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xaae6, .value=0x4d, .type=IO_READ},
        {.addr=0xaae7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0x6d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0393) {
    const struct CPU_State initial_cpu = {.pc=0x7c61, .a=0xe6, .x=0xbe, .y=0x54, .sp=0x19, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x00}, {.addr=0x7c61, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7c62, .a=0xe6, .x=0xbe, .y=0x54, .sp=0x18, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0xbe}, {.addr=0x7c61, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7c61, .value=0x4d, .type=IO_READ},
        {.addr=0x7c62, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0xbe, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0394) {
    const struct CPU_State initial_cpu = {.pc=0x89d0, .a=0x89, .x=0x7c, .y=0x9b, .sp=0xfb, .status=0x89};
    const struct RamEntry initial_ram[] = {{.addr=0x01fb, .value=0x00}, {.addr=0x89d0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x89d1, .a=0x89, .x=0x7c, .y=0x9b, .sp=0xfa, .status=0x89};
    const struct RamEntry final_ram[] = {{.addr=0x01fb, .value=0x7c}, {.addr=0x89d0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x89d0, .value=0x4d, .type=IO_READ},
        {.addr=0x89d1, .value=DUMMY, .type=IO_READ},
        {.addr=0x01fb, .value=0x7c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0395) {
    const struct CPU_State initial_cpu = {.pc=0x85d9, .a=0xbf, .x=0x20, .y=0x55, .sp=0x46, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0146, .value=0x00}, {.addr=0x85d9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x85da, .a=0xbf, .x=0x20, .y=0x55, .sp=0x45, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0146, .value=0x20}, {.addr=0x85d9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x85d9, .value=0x4d, .type=IO_READ},
        {.addr=0x85da, .value=DUMMY, .type=IO_READ},
        {.addr=0x0146, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0396) {
    const struct CPU_State initial_cpu = {.pc=0x460b, .a=0x00, .x=0x72, .y=0x6b, .sp=0x87, .status=0x10};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x00}, {.addr=0x460b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x460c, .a=0x00, .x=0x72, .y=0x6b, .sp=0x86, .status=0x10};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x72}, {.addr=0x460b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x460b, .value=0x4d, .type=IO_READ},
        {.addr=0x460c, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x72, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0397) {
    const struct CPU_State initial_cpu = {.pc=0xe537, .a=0x89, .x=0x37, .y=0x01, .sp=0xdf, .status=0xf5};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0xe537, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe538, .a=0x89, .x=0x37, .y=0x01, .sp=0xde, .status=0xf5};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x37}, {.addr=0xe537, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe537, .value=0x4d, .type=IO_READ},
        {.addr=0xe538, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x37, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0398) {
    const struct CPU_State initial_cpu = {.pc=0xf4a9, .a=0x63, .x=0x66, .y=0x97, .sp=0xce, .status=0x8e};
    const struct RamEntry initial_ram[] = {{.addr=0x01ce, .value=0x00}, {.addr=0xf4a9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf4aa, .a=0x63, .x=0x66, .y=0x97, .sp=0xcd, .status=0x8e};
    const struct RamEntry final_ram[] = {{.addr=0x01ce, .value=0x66}, {.addr=0xf4a9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf4a9, .value=0x4d, .type=IO_READ},
        {.addr=0xf4aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ce, .value=0x66, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_0399) {
    const struct CPU_State initial_cpu = {.pc=0xb777, .a=0xa1, .x=0x92, .y=0x42, .sp=0x78, .status=0x76};
    const struct RamEntry initial_ram[] = {{.addr=0x0178, .value=0x00}, {.addr=0xb777, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb778, .a=0xa1, .x=0x92, .y=0x42, .sp=0x77, .status=0x76};
    const struct RamEntry final_ram[] = {{.addr=0x0178, .value=0x92}, {.addr=0xb777, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb777, .value=0x4d, .type=IO_READ},
        {.addr=0xb778, .value=DUMMY, .type=IO_READ},
        {.addr=0x0178, .value=0x92, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_039A) {
    const struct CPU_State initial_cpu = {.pc=0x3420, .a=0x65, .x=0x78, .y=0x48, .sp=0x48, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x0148, .value=0x00}, {.addr=0x3420, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3421, .a=0x65, .x=0x78, .y=0x48, .sp=0x47, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x0148, .value=0x78}, {.addr=0x3420, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3420, .value=0x4d, .type=IO_READ},
        {.addr=0x3421, .value=DUMMY, .type=IO_READ},
        {.addr=0x0148, .value=0x78, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_039B) {
    const struct CPU_State initial_cpu = {.pc=0x4bc8, .a=0x8c, .x=0xb8, .y=0xc4, .sp=0x21, .status=0xab};
    const struct RamEntry initial_ram[] = {{.addr=0x0121, .value=0x00}, {.addr=0x4bc8, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4bc9, .a=0x8c, .x=0xb8, .y=0xc4, .sp=0x20, .status=0xab};
    const struct RamEntry final_ram[] = {{.addr=0x0121, .value=0xb8}, {.addr=0x4bc8, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4bc8, .value=0x4d, .type=IO_READ},
        {.addr=0x4bc9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0121, .value=0xb8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_039C) {
    const struct CPU_State initial_cpu = {.pc=0x7912, .a=0x04, .x=0xec, .y=0x6c, .sp=0x8f, .status=0xcc};
    const struct RamEntry initial_ram[] = {{.addr=0x018f, .value=0x00}, {.addr=0x7912, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7913, .a=0x04, .x=0xec, .y=0x6c, .sp=0x8e, .status=0xcc};
    const struct RamEntry final_ram[] = {{.addr=0x018f, .value=0xec}, {.addr=0x7912, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7912, .value=0x4d, .type=IO_READ},
        {.addr=0x7913, .value=DUMMY, .type=IO_READ},
        {.addr=0x018f, .value=0xec, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_039D) {
    const struct CPU_State initial_cpu = {.pc=0xb39f, .a=0xfc, .x=0x29, .y=0xfb, .sp=0x7d, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x017d, .value=0x00}, {.addr=0xb39f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb3a0, .a=0xfc, .x=0x29, .y=0xfb, .sp=0x7c, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x017d, .value=0x29}, {.addr=0xb39f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb39f, .value=0x4d, .type=IO_READ},
        {.addr=0xb3a0, .value=DUMMY, .type=IO_READ},
        {.addr=0x017d, .value=0x29, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_039E) {
    const struct CPU_State initial_cpu = {.pc=0x5296, .a=0x8e, .x=0x27, .y=0x3a, .sp=0x3b, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x013b, .value=0x00}, {.addr=0x5296, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5297, .a=0x8e, .x=0x27, .y=0x3a, .sp=0x3a, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x013b, .value=0x27}, {.addr=0x5296, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5296, .value=0x4d, .type=IO_READ},
        {.addr=0x5297, .value=DUMMY, .type=IO_READ},
        {.addr=0x013b, .value=0x27, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_039F) {
    const struct CPU_State initial_cpu = {.pc=0x801b, .a=0xfa, .x=0x48, .y=0x1f, .sp=0x1f, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x011f, .value=0x00}, {.addr=0x801b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x801c, .a=0xfa, .x=0x48, .y=0x1f, .sp=0x1e, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x011f, .value=0x48}, {.addr=0x801b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x801b, .value=0x4d, .type=IO_READ},
        {.addr=0x801c, .value=DUMMY, .type=IO_READ},
        {.addr=0x011f, .value=0x48, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x4684, .a=0xd3, .x=0x65, .y=0xde, .sp=0xdf, .status=0x9f};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0x4684, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4685, .a=0xd3, .x=0x65, .y=0xde, .sp=0xde, .status=0x9f};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x65}, {.addr=0x4684, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4684, .value=0x4d, .type=IO_READ},
        {.addr=0x4685, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x65, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x170a, .a=0xb6, .x=0x68, .y=0xb2, .sp=0xdc, .status=0x2d};
    const struct RamEntry initial_ram[] = {{.addr=0x01dc, .value=0x00}, {.addr=0x170a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x170b, .a=0xb6, .x=0x68, .y=0xb2, .sp=0xdb, .status=0x2d};
    const struct RamEntry final_ram[] = {{.addr=0x01dc, .value=0x68}, {.addr=0x170a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x170a, .value=0x4d, .type=IO_READ},
        {.addr=0x170b, .value=DUMMY, .type=IO_READ},
        {.addr=0x01dc, .value=0x68, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03A2) {
    const struct CPU_State initial_cpu = {.pc=0x7c44, .a=0xea, .x=0xf8, .y=0xae, .sp=0x07, .status=0x62};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0x7c44, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7c45, .a=0xea, .x=0xf8, .y=0xae, .sp=0x06, .status=0x62};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0xf8}, {.addr=0x7c44, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7c44, .value=0x4d, .type=IO_READ},
        {.addr=0x7c45, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0xf8, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03A3) {
    const struct CPU_State initial_cpu = {.pc=0xca9f, .a=0xee, .x=0xd3, .y=0x27, .sp=0xca, .status=0x16};
    const struct RamEntry initial_ram[] = {{.addr=0x01ca, .value=0x00}, {.addr=0xca9f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcaa0, .a=0xee, .x=0xd3, .y=0x27, .sp=0xc9, .status=0x16};
    const struct RamEntry final_ram[] = {{.addr=0x01ca, .value=0xd3}, {.addr=0xca9f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xca9f, .value=0x4d, .type=IO_READ},
        {.addr=0xcaa0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ca, .value=0xd3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03A4) {
    const struct CPU_State initial_cpu = {.pc=0xcb66, .a=0xec, .x=0x2b, .y=0x58, .sp=0xc4, .status=0xe9};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0xcb66, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xcb67, .a=0xec, .x=0x2b, .y=0x58, .sp=0xc3, .status=0xe9};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x2b}, {.addr=0xcb66, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xcb66, .value=0x4d, .type=IO_READ},
        {.addr=0xcb67, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x2b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03A5) {
    const struct CPU_State initial_cpu = {.pc=0x4ab6, .a=0x5e, .x=0xf2, .y=0xe2, .sp=0xbb, .status=0x3b};
    const struct RamEntry initial_ram[] = {{.addr=0x01bb, .value=0x00}, {.addr=0x4ab6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4ab7, .a=0x5e, .x=0xf2, .y=0xe2, .sp=0xba, .status=0x3b};
    const struct RamEntry final_ram[] = {{.addr=0x01bb, .value=0xf2}, {.addr=0x4ab6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4ab6, .value=0x4d, .type=IO_READ},
        {.addr=0x4ab7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bb, .value=0xf2, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x3ae4, .a=0xb9, .x=0xc1, .y=0xac, .sp=0x5a, .status=0x9d};
    const struct RamEntry initial_ram[] = {{.addr=0x015a, .value=0x00}, {.addr=0x3ae4, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3ae5, .a=0xb9, .x=0xc1, .y=0xac, .sp=0x59, .status=0x9d};
    const struct RamEntry final_ram[] = {{.addr=0x015a, .value=0xc1}, {.addr=0x3ae4, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3ae4, .value=0x4d, .type=IO_READ},
        {.addr=0x3ae5, .value=DUMMY, .type=IO_READ},
        {.addr=0x015a, .value=0xc1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03A7) {
    const struct CPU_State initial_cpu = {.pc=0xbe2c, .a=0x09, .x=0x58, .y=0x8f, .sp=0xcd, .status=0x3f};
    const struct RamEntry initial_ram[] = {{.addr=0x01cd, .value=0x00}, {.addr=0xbe2c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbe2d, .a=0x09, .x=0x58, .y=0x8f, .sp=0xcc, .status=0x3f};
    const struct RamEntry final_ram[] = {{.addr=0x01cd, .value=0x58}, {.addr=0xbe2c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbe2c, .value=0x4d, .type=IO_READ},
        {.addr=0xbe2d, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cd, .value=0x58, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03A8) {
    const struct CPU_State initial_cpu = {.pc=0xe310, .a=0x24, .x=0x12, .y=0xbc, .sp=0x61, .status=0x31};
    const struct RamEntry initial_ram[] = {{.addr=0x0161, .value=0x00}, {.addr=0xe310, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe311, .a=0x24, .x=0x12, .y=0xbc, .sp=0x60, .status=0x31};
    const struct RamEntry final_ram[] = {{.addr=0x0161, .value=0x12}, {.addr=0xe310, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe310, .value=0x4d, .type=IO_READ},
        {.addr=0xe311, .value=DUMMY, .type=IO_READ},
        {.addr=0x0161, .value=0x12, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03A9) {
    const struct CPU_State initial_cpu = {.pc=0x3daf, .a=0xdc, .x=0x8d, .y=0x2f, .sp=0x35, .status=0xbb};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0x3daf, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3db0, .a=0xdc, .x=0x8d, .y=0x2f, .sp=0x34, .status=0xbb};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x8d}, {.addr=0x3daf, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3daf, .value=0x4d, .type=IO_READ},
        {.addr=0x3db0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0x8d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03AA) {
    const struct CPU_State initial_cpu = {.pc=0xa462, .a=0x45, .x=0x72, .y=0x12, .sp=0x60, .status=0x8b};
    const struct RamEntry initial_ram[] = {{.addr=0x0160, .value=0x00}, {.addr=0xa462, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xa463, .a=0x45, .x=0x72, .y=0x12, .sp=0x5f, .status=0x8b};
    const struct RamEntry final_ram[] = {{.addr=0x0160, .value=0x72}, {.addr=0xa462, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xa462, .value=0x4d, .type=IO_READ},
        {.addr=0xa463, .value=DUMMY, .type=IO_READ},
        {.addr=0x0160, .value=0x72, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x710c, .a=0x40, .x=0xbc, .y=0x37, .sp=0x22, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0x710c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x710d, .a=0x40, .x=0xbc, .y=0x37, .sp=0x21, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0xbc}, {.addr=0x710c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x710c, .value=0x4d, .type=IO_READ},
        {.addr=0x710d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0xbc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03AC) {
    const struct CPU_State initial_cpu = {.pc=0x787a, .a=0xa3, .x=0x20, .y=0x38, .sp=0x45, .status=0xa7};
    const struct RamEntry initial_ram[] = {{.addr=0x0145, .value=0x00}, {.addr=0x787a, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x787b, .a=0xa3, .x=0x20, .y=0x38, .sp=0x44, .status=0xa7};
    const struct RamEntry final_ram[] = {{.addr=0x0145, .value=0x20}, {.addr=0x787a, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x787a, .value=0x4d, .type=IO_READ},
        {.addr=0x787b, .value=DUMMY, .type=IO_READ},
        {.addr=0x0145, .value=0x20, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x141f, .a=0x68, .x=0x21, .y=0x2c, .sp=0x74, .status=0xde};
    const struct RamEntry initial_ram[] = {{.addr=0x0174, .value=0x00}, {.addr=0x141f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1420, .a=0x68, .x=0x21, .y=0x2c, .sp=0x73, .status=0xde};
    const struct RamEntry final_ram[] = {{.addr=0x0174, .value=0x21}, {.addr=0x141f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x141f, .value=0x4d, .type=IO_READ},
        {.addr=0x1420, .value=DUMMY, .type=IO_READ},
        {.addr=0x0174, .value=0x21, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xe7f8, .a=0x8f, .x=0x56, .y=0xbe, .sp=0x25, .status=0x92};
    const struct RamEntry initial_ram[] = {{.addr=0x0125, .value=0x00}, {.addr=0xe7f8, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xe7f9, .a=0x8f, .x=0x56, .y=0xbe, .sp=0x24, .status=0x92};
    const struct RamEntry final_ram[] = {{.addr=0x0125, .value=0x56}, {.addr=0xe7f8, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xe7f8, .value=0x4d, .type=IO_READ},
        {.addr=0xe7f9, .value=DUMMY, .type=IO_READ},
        {.addr=0x0125, .value=0x56, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03AF) {
    const struct CPU_State initial_cpu = {.pc=0x6eb0, .a=0x9e, .x=0xbf, .y=0x7a, .sp=0x58, .status=0xcb};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x00}, {.addr=0x6eb0, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6eb1, .a=0x9e, .x=0xbf, .y=0x7a, .sp=0x57, .status=0xcb};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0xbf}, {.addr=0x6eb0, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6eb0, .value=0x4d, .type=IO_READ},
        {.addr=0x6eb1, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0xbf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x6008, .a=0xdd, .x=0x63, .y=0xc8, .sp=0x6e, .status=0x60};
    const struct RamEntry initial_ram[] = {{.addr=0x016e, .value=0x00}, {.addr=0x6008, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6009, .a=0xdd, .x=0x63, .y=0xc8, .sp=0x6d, .status=0x60};
    const struct RamEntry final_ram[] = {{.addr=0x016e, .value=0x63}, {.addr=0x6008, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6008, .value=0x4d, .type=IO_READ},
        {.addr=0x6009, .value=DUMMY, .type=IO_READ},
        {.addr=0x016e, .value=0x63, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x9c9b, .a=0x42, .x=0x00, .y=0x27, .sp=0xde, .status=0xd3};
    const struct RamEntry initial_ram[] = {{.addr=0x01de, .value=0x00}, {.addr=0x9c9b, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9c9c, .a=0x42, .x=0x00, .y=0x27, .sp=0xdd, .status=0xd3};
    const struct RamEntry final_ram[] = {{.addr=0x01de, .value=0x00}, {.addr=0x9c9b, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9c9b, .value=0x4d, .type=IO_READ},
        {.addr=0x9c9c, .value=DUMMY, .type=IO_READ},
        {.addr=0x01de, .value=0x00, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03B2) {
    const struct CPU_State initial_cpu = {.pc=0x14d5, .a=0x55, .x=0xd1, .y=0x8e, .sp=0x63, .status=0x26};
    const struct RamEntry initial_ram[] = {{.addr=0x0163, .value=0x00}, {.addr=0x14d5, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x14d6, .a=0x55, .x=0xd1, .y=0x8e, .sp=0x62, .status=0x26};
    const struct RamEntry final_ram[] = {{.addr=0x0163, .value=0xd1}, {.addr=0x14d5, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x14d5, .value=0x4d, .type=IO_READ},
        {.addr=0x14d6, .value=DUMMY, .type=IO_READ},
        {.addr=0x0163, .value=0xd1, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x3dd5, .a=0x3a, .x=0x84, .y=0xf5, .sp=0xc3, .status=0xdc};
    const struct RamEntry initial_ram[] = {{.addr=0x01c3, .value=0x00}, {.addr=0x3dd5, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x3dd6, .a=0x3a, .x=0x84, .y=0xf5, .sp=0xc2, .status=0xdc};
    const struct RamEntry final_ram[] = {{.addr=0x01c3, .value=0x84}, {.addr=0x3dd5, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x3dd5, .value=0x4d, .type=IO_READ},
        {.addr=0x3dd6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c3, .value=0x84, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03B4) {
    const struct CPU_State initial_cpu = {.pc=0xd087, .a=0x8c, .x=0xd3, .y=0x08, .sp=0xa5, .status=0xa5};
    const struct RamEntry initial_ram[] = {{.addr=0x01a5, .value=0x00}, {.addr=0xd087, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd088, .a=0x8c, .x=0xd3, .y=0x08, .sp=0xa4, .status=0xa5};
    const struct RamEntry final_ram[] = {{.addr=0x01a5, .value=0xd3}, {.addr=0xd087, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd087, .value=0x4d, .type=IO_READ},
        {.addr=0xd088, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a5, .value=0xd3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03B5) {
    const struct CPU_State initial_cpu = {.pc=0xd03e, .a=0x28, .x=0x7f, .y=0x80, .sp=0x19, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x0119, .value=0x00}, {.addr=0xd03e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd03f, .a=0x28, .x=0x7f, .y=0x80, .sp=0x18, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x0119, .value=0x7f}, {.addr=0xd03e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd03e, .value=0x4d, .type=IO_READ},
        {.addr=0xd03f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0119, .value=0x7f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03B6) {
    const struct CPU_State initial_cpu = {.pc=0x8bd5, .a=0x43, .x=0xb9, .y=0xa8, .sp=0xaa, .status=0x25};
    const struct RamEntry initial_ram[] = {{.addr=0x01aa, .value=0x00}, {.addr=0x8bd5, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8bd6, .a=0x43, .x=0xb9, .y=0xa8, .sp=0xa9, .status=0x25};
    const struct RamEntry final_ram[] = {{.addr=0x01aa, .value=0xb9}, {.addr=0x8bd5, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8bd5, .value=0x4d, .type=IO_READ},
        {.addr=0x8bd6, .value=DUMMY, .type=IO_READ},
        {.addr=0x01aa, .value=0xb9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03B7) {
    const struct CPU_State initial_cpu = {.pc=0xd5c3, .a=0x89, .x=0x01, .y=0xdd, .sp=0x55, .status=0xf4};
    const struct RamEntry initial_ram[] = {{.addr=0x0155, .value=0x00}, {.addr=0xd5c3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd5c4, .a=0x89, .x=0x01, .y=0xdd, .sp=0x54, .status=0xf4};
    const struct RamEntry final_ram[] = {{.addr=0x0155, .value=0x01}, {.addr=0xd5c3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd5c3, .value=0x4d, .type=IO_READ},
        {.addr=0xd5c4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0155, .value=0x01, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x4d47, .a=0x72, .x=0x50, .y=0x30, .sp=0xbd, .status=0xf3};
    const struct RamEntry initial_ram[] = {{.addr=0x01bd, .value=0x00}, {.addr=0x4d47, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x4d48, .a=0x72, .x=0x50, .y=0x30, .sp=0xbc, .status=0xf3};
    const struct RamEntry final_ram[] = {{.addr=0x01bd, .value=0x50}, {.addr=0x4d47, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x4d47, .value=0x4d, .type=IO_READ},
        {.addr=0x4d48, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bd, .value=0x50, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x505e, .a=0x36, .x=0x3f, .y=0x28, .sp=0x22, .status=0xb1};
    const struct RamEntry initial_ram[] = {{.addr=0x0122, .value=0x00}, {.addr=0x505e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x505f, .a=0x36, .x=0x3f, .y=0x28, .sp=0x21, .status=0xb1};
    const struct RamEntry final_ram[] = {{.addr=0x0122, .value=0x3f}, {.addr=0x505e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x505e, .value=0x4d, .type=IO_READ},
        {.addr=0x505f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0122, .value=0x3f, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03BA) {
    const struct CPU_State initial_cpu = {.pc=0x9541, .a=0xa4, .x=0xda, .y=0x76, .sp=0x4c, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x014c, .value=0x00}, {.addr=0x9541, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9542, .a=0xa4, .x=0xda, .y=0x76, .sp=0x4b, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x014c, .value=0xda}, {.addr=0x9541, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9541, .value=0x4d, .type=IO_READ},
        {.addr=0x9542, .value=DUMMY, .type=IO_READ},
        {.addr=0x014c, .value=0xda, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x5169, .a=0x2e, .x=0x32, .y=0x8b, .sp=0x64, .status=0x73};
    const struct RamEntry initial_ram[] = {{.addr=0x0164, .value=0x00}, {.addr=0x5169, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x516a, .a=0x2e, .x=0x32, .y=0x8b, .sp=0x63, .status=0x73};
    const struct RamEntry final_ram[] = {{.addr=0x0164, .value=0x32}, {.addr=0x5169, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5169, .value=0x4d, .type=IO_READ},
        {.addr=0x516a, .value=DUMMY, .type=IO_READ},
        {.addr=0x0164, .value=0x32, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x397c, .a=0xf5, .x=0xca, .y=0xe8, .sp=0x32, .status=0x48};
    const struct RamEntry initial_ram[] = {{.addr=0x0132, .value=0x00}, {.addr=0x397c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x397d, .a=0xf5, .x=0xca, .y=0xe8, .sp=0x31, .status=0x48};
    const struct RamEntry final_ram[] = {{.addr=0x0132, .value=0xca}, {.addr=0x397c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x397c, .value=0x4d, .type=IO_READ},
        {.addr=0x397d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0132, .value=0xca, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x1f2e, .a=0x30, .x=0x4d, .y=0xcc, .sp=0x08, .status=0xfe};
    const struct RamEntry initial_ram[] = {{.addr=0x0108, .value=0x00}, {.addr=0x1f2e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1f2f, .a=0x30, .x=0x4d, .y=0xcc, .sp=0x07, .status=0xfe};
    const struct RamEntry final_ram[] = {{.addr=0x0108, .value=0x4d}, {.addr=0x1f2e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1f2e, .value=0x4d, .type=IO_READ},
        {.addr=0x1f2f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0108, .value=0x4d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xbf63, .a=0x93, .x=0x5a, .y=0x3c, .sp=0x23, .status=0x2f};
    const struct RamEntry initial_ram[] = {{.addr=0x0123, .value=0x00}, {.addr=0xbf63, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xbf64, .a=0x93, .x=0x5a, .y=0x3c, .sp=0x22, .status=0x2f};
    const struct RamEntry final_ram[] = {{.addr=0x0123, .value=0x5a}, {.addr=0xbf63, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xbf63, .value=0x4d, .type=IO_READ},
        {.addr=0xbf64, .value=DUMMY, .type=IO_READ},
        {.addr=0x0123, .value=0x5a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xc6a9, .a=0x05, .x=0xb5, .y=0xf7, .sp=0xd1, .status=0xd0};
    const struct RamEntry initial_ram[] = {{.addr=0x01d1, .value=0x00}, {.addr=0xc6a9, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc6aa, .a=0x05, .x=0xb5, .y=0xf7, .sp=0xd0, .status=0xd0};
    const struct RamEntry final_ram[] = {{.addr=0x01d1, .value=0xb5}, {.addr=0xc6a9, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc6a9, .value=0x4d, .type=IO_READ},
        {.addr=0xc6aa, .value=DUMMY, .type=IO_READ},
        {.addr=0x01d1, .value=0xb5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03C0) {
    const struct CPU_State initial_cpu = {.pc=0xd199, .a=0xe0, .x=0xb5, .y=0x46, .sp=0xab, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x01ab, .value=0x00}, {.addr=0xd199, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd19a, .a=0xe0, .x=0xb5, .y=0x46, .sp=0xaa, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x01ab, .value=0xb5}, {.addr=0xd199, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd199, .value=0x4d, .type=IO_READ},
        {.addr=0xd19a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ab, .value=0xb5, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03C1) {
    const struct CPU_State initial_cpu = {.pc=0x9215, .a=0x9e, .x=0x31, .y=0xe4, .sp=0x76, .status=0xaf};
    const struct RamEntry initial_ram[] = {{.addr=0x0176, .value=0x00}, {.addr=0x9215, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9216, .a=0x9e, .x=0x31, .y=0xe4, .sp=0x75, .status=0xaf};
    const struct RamEntry final_ram[] = {{.addr=0x0176, .value=0x31}, {.addr=0x9215, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9215, .value=0x4d, .type=IO_READ},
        {.addr=0x9216, .value=DUMMY, .type=IO_READ},
        {.addr=0x0176, .value=0x31, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x643f, .a=0x6f, .x=0x95, .y=0x66, .sp=0xe5, .status=0xd6};
    const struct RamEntry initial_ram[] = {{.addr=0x01e5, .value=0x00}, {.addr=0x643f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6440, .a=0x6f, .x=0x95, .y=0x66, .sp=0xe4, .status=0xd6};
    const struct RamEntry final_ram[] = {{.addr=0x01e5, .value=0x95}, {.addr=0x643f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x643f, .value=0x4d, .type=IO_READ},
        {.addr=0x6440, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e5, .value=0x95, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03C3) {
    const struct CPU_State initial_cpu = {.pc=0x8d99, .a=0xf6, .x=0x90, .y=0x75, .sp=0xc4, .status=0xbc};
    const struct RamEntry initial_ram[] = {{.addr=0x01c4, .value=0x00}, {.addr=0x8d99, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8d9a, .a=0xf6, .x=0x90, .y=0x75, .sp=0xc3, .status=0xbc};
    const struct RamEntry final_ram[] = {{.addr=0x01c4, .value=0x90}, {.addr=0x8d99, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8d99, .value=0x4d, .type=IO_READ},
        {.addr=0x8d9a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c4, .value=0x90, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03C4) {
    const struct CPU_State initial_cpu = {.pc=0x723c, .a=0x4d, .x=0x77, .y=0x0f, .sp=0x93, .status=0xf8};
    const struct RamEntry initial_ram[] = {{.addr=0x0193, .value=0x00}, {.addr=0x723c, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x723d, .a=0x4d, .x=0x77, .y=0x0f, .sp=0x92, .status=0xf8};
    const struct RamEntry final_ram[] = {{.addr=0x0193, .value=0x77}, {.addr=0x723c, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x723c, .value=0x4d, .type=IO_READ},
        {.addr=0x723d, .value=DUMMY, .type=IO_READ},
        {.addr=0x0193, .value=0x77, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03C5) {
    const struct CPU_State initial_cpu = {.pc=0xb942, .a=0x17, .x=0x71, .y=0x95, .sp=0xae, .status=0xc5};
    const struct RamEntry initial_ram[] = {{.addr=0x01ae, .value=0x00}, {.addr=0xb942, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xb943, .a=0x17, .x=0x71, .y=0x95, .sp=0xad, .status=0xc5};
    const struct RamEntry final_ram[] = {{.addr=0x01ae, .value=0x71}, {.addr=0xb942, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xb942, .value=0x4d, .type=IO_READ},
        {.addr=0xb943, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ae, .value=0x71, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03C6) {
    const struct CPU_State initial_cpu = {.pc=0xae1f, .a=0x62, .x=0xf0, .y=0xf1, .sp=0x94, .status=0x4b};
    const struct RamEntry initial_ram[] = {{.addr=0x0194, .value=0x00}, {.addr=0xae1f, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xae20, .a=0x62, .x=0xf0, .y=0xf1, .sp=0x93, .status=0x4b};
    const struct RamEntry final_ram[] = {{.addr=0x0194, .value=0xf0}, {.addr=0xae1f, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xae1f, .value=0x4d, .type=IO_READ},
        {.addr=0xae20, .value=DUMMY, .type=IO_READ},
        {.addr=0x0194, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03C7) {
    const struct CPU_State initial_cpu = {.pc=0xd6e7, .a=0xfa, .x=0xbf, .y=0x6b, .sp=0xf8, .status=0x6d};
    const struct RamEntry initial_ram[] = {{.addr=0x01f8, .value=0x00}, {.addr=0xd6e7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd6e8, .a=0xfa, .x=0xbf, .y=0x6b, .sp=0xf7, .status=0x6d};
    const struct RamEntry final_ram[] = {{.addr=0x01f8, .value=0xbf}, {.addr=0xd6e7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd6e7, .value=0x4d, .type=IO_READ},
        {.addr=0xd6e8, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f8, .value=0xbf, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xc0ee, .a=0xef, .x=0x6d, .y=0xfa, .sp=0x20, .status=0xfd};
    const struct RamEntry initial_ram[] = {{.addr=0x0120, .value=0x00}, {.addr=0xc0ee, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc0ef, .a=0xef, .x=0x6d, .y=0xfa, .sp=0x1f, .status=0xfd};
    const struct RamEntry final_ram[] = {{.addr=0x0120, .value=0x6d}, {.addr=0xc0ee, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc0ee, .value=0x4d, .type=IO_READ},
        {.addr=0xc0ef, .value=DUMMY, .type=IO_READ},
        {.addr=0x0120, .value=0x6d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x0ed7, .a=0xee, .x=0xf0, .y=0xca, .sp=0x65, .status=0xd8};
    const struct RamEntry initial_ram[] = {{.addr=0x0165, .value=0x00}, {.addr=0x0ed7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x0ed8, .a=0xee, .x=0xf0, .y=0xca, .sp=0x64, .status=0xd8};
    const struct RamEntry final_ram[] = {{.addr=0x0165, .value=0xf0}, {.addr=0x0ed7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x0ed7, .value=0x4d, .type=IO_READ},
        {.addr=0x0ed8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0165, .value=0xf0, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x7a73, .a=0x6b, .x=0x4c, .y=0x07, .sp=0x07, .status=0xdf};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0x7a73, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x7a74, .a=0x6b, .x=0x4c, .y=0x07, .sp=0x06, .status=0xdf};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x4c}, {.addr=0x7a73, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x7a73, .value=0x4d, .type=IO_READ},
        {.addr=0x7a74, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x4c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03CB) {
    const struct CPU_State initial_cpu = {.pc=0x855e, .a=0xdc, .x=0x0a, .y=0xa2, .sp=0x81, .status=0x18};
    const struct RamEntry initial_ram[] = {{.addr=0x0181, .value=0x00}, {.addr=0x855e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x855f, .a=0xdc, .x=0x0a, .y=0xa2, .sp=0x80, .status=0x18};
    const struct RamEntry final_ram[] = {{.addr=0x0181, .value=0x0a}, {.addr=0x855e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x855e, .value=0x4d, .type=IO_READ},
        {.addr=0x855f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0181, .value=0x0a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x96f3, .a=0xd1, .x=0x99, .y=0x7d, .sp=0x44, .status=0xb4};
    const struct RamEntry initial_ram[] = {{.addr=0x0144, .value=0x00}, {.addr=0x96f3, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x96f4, .a=0xd1, .x=0x99, .y=0x7d, .sp=0x43, .status=0xb4};
    const struct RamEntry final_ram[] = {{.addr=0x0144, .value=0x99}, {.addr=0x96f3, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x96f3, .value=0x4d, .type=IO_READ},
        {.addr=0x96f4, .value=DUMMY, .type=IO_READ},
        {.addr=0x0144, .value=0x99, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03CD) {
    const struct CPU_State initial_cpu = {.pc=0xaaec, .a=0xbd, .x=0x85, .y=0x6b, .sp=0x07, .status=0xcf};
    const struct RamEntry initial_ram[] = {{.addr=0x0107, .value=0x00}, {.addr=0xaaec, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xaaed, .a=0xbd, .x=0x85, .y=0x6b, .sp=0x06, .status=0xcf};
    const struct RamEntry final_ram[] = {{.addr=0x0107, .value=0x85}, {.addr=0xaaec, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xaaec, .value=0x4d, .type=IO_READ},
        {.addr=0xaaed, .value=DUMMY, .type=IO_READ},
        {.addr=0x0107, .value=0x85, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x367e, .a=0xc8, .x=0x1b, .y=0x29, .sp=0x87, .status=0xb5};
    const struct RamEntry initial_ram[] = {{.addr=0x0187, .value=0x00}, {.addr=0x367e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x367f, .a=0xc8, .x=0x1b, .y=0x29, .sp=0x86, .status=0xb5};
    const struct RamEntry final_ram[] = {{.addr=0x0187, .value=0x1b}, {.addr=0x367e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x367e, .value=0x4d, .type=IO_READ},
        {.addr=0x367f, .value=DUMMY, .type=IO_READ},
        {.addr=0x0187, .value=0x1b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x1542, .a=0xdf, .x=0x5a, .y=0xbc, .sp=0xa2, .status=0x19};
    const struct RamEntry initial_ram[] = {{.addr=0x01a2, .value=0x00}, {.addr=0x1542, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1543, .a=0xdf, .x=0x5a, .y=0xbc, .sp=0xa1, .status=0x19};
    const struct RamEntry final_ram[] = {{.addr=0x01a2, .value=0x5a}, {.addr=0x1542, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1542, .value=0x4d, .type=IO_READ},
        {.addr=0x1543, .value=DUMMY, .type=IO_READ},
        {.addr=0x01a2, .value=0x5a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x5747, .a=0x20, .x=0x08, .y=0xc7, .sp=0xdf, .status=0x8a};
    const struct RamEntry initial_ram[] = {{.addr=0x01df, .value=0x00}, {.addr=0x5747, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5748, .a=0x20, .x=0x08, .y=0xc7, .sp=0xde, .status=0x8a};
    const struct RamEntry final_ram[] = {{.addr=0x01df, .value=0x08}, {.addr=0x5747, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5747, .value=0x4d, .type=IO_READ},
        {.addr=0x5748, .value=DUMMY, .type=IO_READ},
        {.addr=0x01df, .value=0x08, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03D1) {
    const struct CPU_State initial_cpu = {.pc=0x26b6, .a=0xd1, .x=0xdc, .y=0xda, .sp=0x7c, .status=0x45};
    const struct RamEntry initial_ram[] = {{.addr=0x017c, .value=0x00}, {.addr=0x26b6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x26b7, .a=0xd1, .x=0xdc, .y=0xda, .sp=0x7b, .status=0x45};
    const struct RamEntry final_ram[] = {{.addr=0x017c, .value=0xdc}, {.addr=0x26b6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x26b6, .value=0x4d, .type=IO_READ},
        {.addr=0x26b7, .value=DUMMY, .type=IO_READ},
        {.addr=0x017c, .value=0xdc, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x425e, .a=0xf4, .x=0x3b, .y=0x4e, .sp=0xbf, .status=0xc1};
    const struct RamEntry initial_ram[] = {{.addr=0x01bf, .value=0x00}, {.addr=0x425e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x425f, .a=0xf4, .x=0x3b, .y=0x4e, .sp=0xbe, .status=0xc1};
    const struct RamEntry final_ram[] = {{.addr=0x01bf, .value=0x3b}, {.addr=0x425e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x425e, .value=0x4d, .type=IO_READ},
        {.addr=0x425f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01bf, .value=0x3b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xccaf, .a=0x8c, .x=0x04, .y=0x7c, .sp=0xda, .status=0x44};
    const struct RamEntry initial_ram[] = {{.addr=0x01da, .value=0x00}, {.addr=0xccaf, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xccb0, .a=0x8c, .x=0x04, .y=0x7c, .sp=0xd9, .status=0x44};
    const struct RamEntry final_ram[] = {{.addr=0x01da, .value=0x04}, {.addr=0xccaf, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xccaf, .value=0x4d, .type=IO_READ},
        {.addr=0xccb0, .value=DUMMY, .type=IO_READ},
        {.addr=0x01da, .value=0x04, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xd6a6, .a=0x9f, .x=0xda, .y=0xb3, .sp=0xee, .status=0x27};
    const struct RamEntry initial_ram[] = {{.addr=0x01ee, .value=0x00}, {.addr=0xd6a6, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd6a7, .a=0x9f, .x=0xda, .y=0xb3, .sp=0xed, .status=0x27};
    const struct RamEntry final_ram[] = {{.addr=0x01ee, .value=0xda}, {.addr=0xd6a6, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd6a6, .value=0x4d, .type=IO_READ},
        {.addr=0xd6a7, .value=DUMMY, .type=IO_READ},
        {.addr=0x01ee, .value=0xda, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03D5) {
    const struct CPU_State initial_cpu = {.pc=0xd747, .a=0x63, .x=0x80, .y=0x42, .sp=0xc8, .status=0xb2};
    const struct RamEntry initial_ram[] = {{.addr=0x01c8, .value=0x00}, {.addr=0xd747, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd748, .a=0x63, .x=0x80, .y=0x42, .sp=0xc7, .status=0xb2};
    const struct RamEntry final_ram[] = {{.addr=0x01c8, .value=0x80}, {.addr=0xd747, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd747, .value=0x4d, .type=IO_READ},
        {.addr=0xd748, .value=DUMMY, .type=IO_READ},
        {.addr=0x01c8, .value=0x80, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x2f8d, .a=0xa8, .x=0x83, .y=0xbc, .sp=0x7b, .status=0xea};
    const struct RamEntry initial_ram[] = {{.addr=0x017b, .value=0x00}, {.addr=0x2f8d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2f8e, .a=0xa8, .x=0x83, .y=0xbc, .sp=0x7a, .status=0xea};
    const struct RamEntry final_ram[] = {{.addr=0x017b, .value=0x83}, {.addr=0x2f8d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2f8d, .value=0x4d, .type=IO_READ},
        {.addr=0x2f8e, .value=DUMMY, .type=IO_READ},
        {.addr=0x017b, .value=0x83, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xae9d, .a=0xe5, .x=0xea, .y=0xdf, .sp=0x2c, .status=0xd4};
    const struct RamEntry initial_ram[] = {{.addr=0x012c, .value=0x00}, {.addr=0xae9d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xae9e, .a=0xe5, .x=0xea, .y=0xdf, .sp=0x2b, .status=0xd4};
    const struct RamEntry final_ram[] = {{.addr=0x012c, .value=0xea}, {.addr=0xae9d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xae9d, .value=0x4d, .type=IO_READ},
        {.addr=0xae9e, .value=DUMMY, .type=IO_READ},
        {.addr=0x012c, .value=0xea, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xd4fa, .a=0x02, .x=0x3d, .y=0x9a, .sp=0x31, .status=0x1e};
    const struct RamEntry initial_ram[] = {{.addr=0x0131, .value=0x00}, {.addr=0xd4fa, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xd4fb, .a=0x02, .x=0x3d, .y=0x9a, .sp=0x30, .status=0x1e};
    const struct RamEntry final_ram[] = {{.addr=0x0131, .value=0x3d}, {.addr=0xd4fa, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xd4fa, .value=0x4d, .type=IO_READ},
        {.addr=0xd4fb, .value=DUMMY, .type=IO_READ},
        {.addr=0x0131, .value=0x3d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03D9) {
    const struct CPU_State initial_cpu = {.pc=0xf2ae, .a=0xf9, .x=0x09, .y=0xb8, .sp=0x35, .status=0x39};
    const struct RamEntry initial_ram[] = {{.addr=0x0135, .value=0x00}, {.addr=0xf2ae, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf2af, .a=0xf9, .x=0x09, .y=0xb8, .sp=0x34, .status=0x39};
    const struct RamEntry final_ram[] = {{.addr=0x0135, .value=0x09}, {.addr=0xf2ae, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf2ae, .value=0x4d, .type=IO_READ},
        {.addr=0xf2af, .value=DUMMY, .type=IO_READ},
        {.addr=0x0135, .value=0x09, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03DA) {
    const struct CPU_State initial_cpu = {.pc=0x71ef, .a=0xeb, .x=0xaa, .y=0xdf, .sp=0x36, .status=0x5e};
    const struct RamEntry initial_ram[] = {{.addr=0x0136, .value=0x00}, {.addr=0x71ef, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x71f0, .a=0xeb, .x=0xaa, .y=0xdf, .sp=0x35, .status=0x5e};
    const struct RamEntry final_ram[] = {{.addr=0x0136, .value=0xaa}, {.addr=0x71ef, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x71ef, .value=0x4d, .type=IO_READ},
        {.addr=0x71f0, .value=DUMMY, .type=IO_READ},
        {.addr=0x0136, .value=0xaa, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x1be7, .a=0xff, .x=0xa3, .y=0x9d, .sp=0x39, .status=0xba};
    const struct RamEntry initial_ram[] = {{.addr=0x0139, .value=0x00}, {.addr=0x1be7, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x1be8, .a=0xff, .x=0xa3, .y=0x9d, .sp=0x38, .status=0xba};
    const struct RamEntry final_ram[] = {{.addr=0x0139, .value=0xa3}, {.addr=0x1be7, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x1be7, .value=0x4d, .type=IO_READ},
        {.addr=0x1be8, .value=DUMMY, .type=IO_READ},
        {.addr=0x0139, .value=0xa3, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x5626, .a=0xc9, .x=0x2c, .y=0xc2, .sp=0x41, .status=0x5f};
    const struct RamEntry initial_ram[] = {{.addr=0x0141, .value=0x00}, {.addr=0x5626, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x5627, .a=0xc9, .x=0x2c, .y=0xc2, .sp=0x40, .status=0x5f};
    const struct RamEntry final_ram[] = {{.addr=0x0141, .value=0x2c}, {.addr=0x5626, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x5626, .value=0x4d, .type=IO_READ},
        {.addr=0x5627, .value=DUMMY, .type=IO_READ},
        {.addr=0x0141, .value=0x2c, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x977d, .a=0xf1, .x=0xd9, .y=0x48, .sp=0x6a, .status=0xd2};
    const struct RamEntry initial_ram[] = {{.addr=0x016a, .value=0x00}, {.addr=0x977d, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x977e, .a=0xf1, .x=0xd9, .y=0x48, .sp=0x69, .status=0xd2};
    const struct RamEntry final_ram[] = {{.addr=0x016a, .value=0xd9}, {.addr=0x977d, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x977d, .value=0x4d, .type=IO_READ},
        {.addr=0x977e, .value=DUMMY, .type=IO_READ},
        {.addr=0x016a, .value=0xd9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03DE) {
    const struct CPU_State initial_cpu = {.pc=0x51a4, .a=0x24, .x=0x47, .y=0xd4, .sp=0x1a, .status=0x4f};
    const struct RamEntry initial_ram[] = {{.addr=0x011a, .value=0x00}, {.addr=0x51a4, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x51a5, .a=0x24, .x=0x47, .y=0xd4, .sp=0x19, .status=0x4f};
    const struct RamEntry final_ram[] = {{.addr=0x011a, .value=0x47}, {.addr=0x51a4, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x51a4, .value=0x4d, .type=IO_READ},
        {.addr=0x51a5, .value=DUMMY, .type=IO_READ},
        {.addr=0x011a, .value=0x47, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x2146, .a=0x05, .x=0x7a, .y=0x57, .sp=0x16, .status=0xc6};
    const struct RamEntry initial_ram[] = {{.addr=0x0116, .value=0x00}, {.addr=0x2146, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x2147, .a=0x05, .x=0x7a, .y=0x57, .sp=0x15, .status=0xc6};
    const struct RamEntry final_ram[] = {{.addr=0x0116, .value=0x7a}, {.addr=0x2146, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x2146, .value=0x4d, .type=IO_READ},
        {.addr=0x2147, .value=DUMMY, .type=IO_READ},
        {.addr=0x0116, .value=0x7a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03E0) {
    const struct CPU_State initial_cpu = {.pc=0xdf63, .a=0xb7, .x=0x1a, .y=0xf0, .sp=0xcf, .status=0x15};
    const struct RamEntry initial_ram[] = {{.addr=0x01cf, .value=0x00}, {.addr=0xdf63, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xdf64, .a=0xb7, .x=0x1a, .y=0xf0, .sp=0xce, .status=0x15};
    const struct RamEntry final_ram[] = {{.addr=0x01cf, .value=0x1a}, {.addr=0xdf63, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xdf63, .value=0x4d, .type=IO_READ},
        {.addr=0xdf64, .value=DUMMY, .type=IO_READ},
        {.addr=0x01cf, .value=0x1a, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03E1) {
    const struct CPU_State initial_cpu = {.pc=0x872e, .a=0xdd, .x=0x6d, .y=0xf8, .sp=0xe7, .status=0x00};
    const struct RamEntry initial_ram[] = {{.addr=0x01e7, .value=0x00}, {.addr=0x872e, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x872f, .a=0xdd, .x=0x6d, .y=0xf8, .sp=0xe6, .status=0x00};
    const struct RamEntry final_ram[] = {{.addr=0x01e7, .value=0x6d}, {.addr=0x872e, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x872e, .value=0x4d, .type=IO_READ},
        {.addr=0x872f, .value=DUMMY, .type=IO_READ},
        {.addr=0x01e7, .value=0x6d, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03E2) {
    const struct CPU_State initial_cpu = {.pc=0xfa09, .a=0x8c, .x=0x40, .y=0x95, .sp=0xf3, .status=0xd5};
    const struct RamEntry initial_ram[] = {{.addr=0x01f3, .value=0x00}, {.addr=0xfa09, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xfa0a, .a=0x8c, .x=0x40, .y=0x95, .sp=0xf2, .status=0xd5};
    const struct RamEntry final_ram[] = {{.addr=0x01f3, .value=0x40}, {.addr=0xfa09, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xfa09, .value=0x4d, .type=IO_READ},
        {.addr=0xfa0a, .value=DUMMY, .type=IO_READ},
        {.addr=0x01f3, .value=0x40, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x6117, .a=0x59, .x=0xe9, .y=0x28, .sp=0x91, .status=0x32};
    const struct RamEntry initial_ram[] = {{.addr=0x0191, .value=0x00}, {.addr=0x6117, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x6118, .a=0x59, .x=0xe9, .y=0x28, .sp=0x90, .status=0x32};
    const struct RamEntry final_ram[] = {{.addr=0x0191, .value=0xe9}, {.addr=0x6117, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x6117, .value=0x4d, .type=IO_READ},
        {.addr=0x6118, .value=DUMMY, .type=IO_READ},
        {.addr=0x0191, .value=0xe9, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03E4) {
    const struct CPU_State initial_cpu = {.pc=0xc5be, .a=0x00, .x=0x9b, .y=0x47, .sp=0x58, .status=0x3d};
    const struct RamEntry initial_ram[] = {{.addr=0x0158, .value=0x00}, {.addr=0xc5be, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xc5bf, .a=0x00, .x=0x9b, .y=0x47, .sp=0x57, .status=0x3d};
    const struct RamEntry final_ram[] = {{.addr=0x0158, .value=0x9b}, {.addr=0xc5be, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xc5be, .value=0x4d, .type=IO_READ},
        {.addr=0xc5bf, .value=DUMMY, .type=IO_READ},
        {.addr=0x0158, .value=0x9b, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03E5) {
    const struct CPU_State initial_cpu = {.pc=0x8c13, .a=0x28, .x=0x47, .y=0x07, .sp=0x3d, .status=0xf1};
    const struct RamEntry initial_ram[] = {{.addr=0x013d, .value=0x00}, {.addr=0x8c13, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x8c14, .a=0x28, .x=0x47, .y=0x07, .sp=0x3c, .status=0xf1};
    const struct RamEntry final_ram[] = {{.addr=0x013d, .value=0x47}, {.addr=0x8c13, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x8c13, .value=0x4d, .type=IO_READ},
        {.addr=0x8c14, .value=DUMMY, .type=IO_READ},
        {.addr=0x013d, .value=0x47, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03E6) {
    const struct CPU_State initial_cpu = {.pc=0xf5e1, .a=0x62, .x=0xec, .y=0x38, .sp=0x01, .status=0xcd};
    const struct RamEntry initial_ram[] = {{.addr=0x0101, .value=0x00}, {.addr=0xf5e1, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0xf5e2, .a=0x62, .x=0xec, .y=0x38, .sp=0x00, .status=0xcd};
    const struct RamEntry final_ram[] = {{.addr=0x0101, .value=0xec}, {.addr=0xf5e1, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0xf5e1, .value=0x4d, .type=IO_READ},
        {.addr=0xf5e2, .value=DUMMY, .type=IO_READ},
        {.addr=0x0101, .value=0xec, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_4D, _4D_03E7) {
    const struct CPU_State initial_cpu = {.pc=0x9a23, .a=0xfc, .x=0x24, .y=0x19, .sp=0x6c, .status=0xc9};
    const struct RamEntry initial_ram[] = {{.addr=0x016c, .value=0x00}, {.addr=0x9a23, .value=0x4d}};
    const struct CPU_State final_cpu = {.pc=0x9a24, .a=0xfc, .x=0x24, .y=0x19, .sp=0x6b, .status=0xc9};
    const struct RamEntry final_ram[] = {{.addr=0x016c, .value=0x24}, {.addr=0x9a23, .value=0x4d}};
    const struct BusEvent events[] = {
        {.addr=0x9a23, .value=0x4d, .type=IO_READ},
        {.addr=0x9a24, .value=DUMMY, .type=IO_READ},
        {.addr=0x016c, .value=0x24, .type=IO_WRITE},
        {.addr=DUMMY, .value=DUMMY, .type=IO_WAIT},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("4D 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
