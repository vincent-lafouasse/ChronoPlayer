#include "../utest.h/utest.h"

#include "test_helper.h"

UTEST(SingleStepTests_64, _64_0000) {
    const struct CPU_State initial_cpu = {.pc=0x3ac3, .a=0x67, .x=0x31, .y=0x49, .sp=0x21, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0038, .value=0x64}, {.addr=0x3ac3, .value=0x64}, {.addr=0x3ac4, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x3ac5, .a=0x67, .x=0x31, .y=0x49, .sp=0x21, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0038, .value=0x64}, {.addr=0x3ac3, .value=0x64}, {.addr=0x3ac4, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ac3, .value=0x64, .type=IO_READ},
        {.addr=0x3ac4, .value=0x38, .type=IO_READ},
        {.addr=0x0038, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0000", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0001) {
    const struct CPU_State initial_cpu = {.pc=0xb57d, .a=0xa2, .x=0xf1, .y=0x7e, .sp=0xe1, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e9, .value=0xd8}, {.addr=0xb57d, .value=0x64}, {.addr=0xb57e, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0xb57f, .a=0xa2, .x=0xf1, .y=0x7e, .sp=0xe1, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e9, .value=0xd8}, {.addr=0xb57d, .value=0x64}, {.addr=0xb57e, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0xb57d, .value=0x64, .type=IO_READ},
        {.addr=0xb57e, .value=0xe9, .type=IO_READ},
        {.addr=0x01e9, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0001", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0002) {
    const struct CPU_State initial_cpu = {.pc=0x0c00, .a=0xc5, .x=0xee, .y=0xa2, .sp=0x8b, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006b, .value=0xc4}, {.addr=0x0c00, .value=0x64}, {.addr=0x0c01, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x0c02, .a=0xc5, .x=0xee, .y=0xa2, .sp=0x8b, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x006b, .value=0xc4}, {.addr=0x0c00, .value=0x64}, {.addr=0x0c01, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x0c00, .value=0x64, .type=IO_READ},
        {.addr=0x0c01, .value=0x6b, .type=IO_READ},
        {.addr=0x006b, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0002", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0003) {
    const struct CPU_State initial_cpu = {.pc=0xab4b, .a=0x2f, .x=0x23, .y=0xe3, .sp=0xdc, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0x83}, {.addr=0xab4b, .value=0x64}, {.addr=0xab4c, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xab4d, .a=0x2f, .x=0x23, .y=0xe3, .sp=0xdc, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0x83}, {.addr=0xab4b, .value=0x64}, {.addr=0xab4c, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xab4b, .value=0x64, .type=IO_READ},
        {.addr=0xab4c, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0003", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0004) {
    const struct CPU_State initial_cpu = {.pc=0x2ba1, .a=0x96, .x=0xfd, .y=0x93, .sp=0xa9, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0137, .value=0xbe}, {.addr=0x2ba1, .value=0x64}, {.addr=0x2ba2, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x2ba3, .a=0x96, .x=0xfd, .y=0x93, .sp=0xa9, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0137, .value=0xbe}, {.addr=0x2ba1, .value=0x64}, {.addr=0x2ba2, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x2ba1, .value=0x64, .type=IO_READ},
        {.addr=0x2ba2, .value=0x37, .type=IO_READ},
        {.addr=0x0137, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0004", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0005) {
    const struct CPU_State initial_cpu = {.pc=0x447d, .a=0xf2, .x=0xae, .y=0x8f, .sp=0x57, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016f, .value=0x5f}, {.addr=0x447d, .value=0x64}, {.addr=0x447e, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x447f, .a=0xf2, .x=0xae, .y=0x8f, .sp=0x57, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x016f, .value=0x5f}, {.addr=0x447d, .value=0x64}, {.addr=0x447e, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x447d, .value=0x64, .type=IO_READ},
        {.addr=0x447e, .value=0x6f, .type=IO_READ},
        {.addr=0x016f, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0005", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0006) {
    const struct CPU_State initial_cpu = {.pc=0x68fb, .a=0x9c, .x=0x3b, .y=0xab, .sp=0xd3, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009c, .value=0x70}, {.addr=0x68fb, .value=0x64}, {.addr=0x68fc, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x68fd, .a=0x9c, .x=0x3b, .y=0xab, .sp=0xd3, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x009c, .value=0x70}, {.addr=0x68fb, .value=0x64}, {.addr=0x68fc, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x68fb, .value=0x64, .type=IO_READ},
        {.addr=0x68fc, .value=0x9c, .type=IO_READ},
        {.addr=0x009c, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0006", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0007) {
    const struct CPU_State initial_cpu = {.pc=0xecb7, .a=0x5f, .x=0xaa, .y=0x34, .sp=0xfc, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0xb9}, {.addr=0xecb7, .value=0x64}, {.addr=0xecb8, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0xecb9, .a=0x5f, .x=0xaa, .y=0x34, .sp=0xfc, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0xb9}, {.addr=0xecb7, .value=0x64}, {.addr=0xecb8, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0xecb7, .value=0x64, .type=IO_READ},
        {.addr=0xecb8, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0007", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0008) {
    const struct CPU_State initial_cpu = {.pc=0xef68, .a=0x46, .x=0xa8, .y=0xb3, .sp=0x18, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0xb7}, {.addr=0xef68, .value=0x64}, {.addr=0xef69, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0xef6a, .a=0x46, .x=0xa8, .y=0xb3, .sp=0x18, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0xb7}, {.addr=0xef68, .value=0x64}, {.addr=0xef69, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0xef68, .value=0x64, .type=IO_READ},
        {.addr=0xef69, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0008", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0009) {
    const struct CPU_State initial_cpu = {.pc=0xb2e3, .a=0x69, .x=0x21, .y=0x5c, .sp=0xe3, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0xfd}, {.addr=0xb2e3, .value=0x64}, {.addr=0xb2e4, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0xb2e5, .a=0x69, .x=0x21, .y=0x5c, .sp=0xe3, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0xfd}, {.addr=0xb2e3, .value=0x64}, {.addr=0xb2e4, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0xb2e3, .value=0x64, .type=IO_READ},
        {.addr=0xb2e4, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0009", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_000A) {
    const struct CPU_State initial_cpu = {.pc=0x8b22, .a=0xa8, .x=0xc4, .y=0xa0, .sp=0xe4, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0116, .value=0xb9}, {.addr=0x8b22, .value=0x64}, {.addr=0x8b23, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x8b24, .a=0xa8, .x=0xc4, .y=0xa0, .sp=0xe4, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0116, .value=0xb9}, {.addr=0x8b22, .value=0x64}, {.addr=0x8b23, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b22, .value=0x64, .type=IO_READ},
        {.addr=0x8b23, .value=0x16, .type=IO_READ},
        {.addr=0x0116, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 000A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_000B) {
    const struct CPU_State initial_cpu = {.pc=0x7137, .a=0x92, .x=0xab, .y=0x55, .sp=0xd6, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0x72}, {.addr=0x7137, .value=0x64}, {.addr=0x7138, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x7139, .a=0x92, .x=0xab, .y=0x55, .sp=0xd6, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0x72}, {.addr=0x7137, .value=0x64}, {.addr=0x7138, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x7137, .value=0x64, .type=IO_READ},
        {.addr=0x7138, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 000B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_000C) {
    const struct CPU_State initial_cpu = {.pc=0xb981, .a=0xb7, .x=0x74, .y=0x9d, .sp=0x97, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a2, .value=0xa8}, {.addr=0xb981, .value=0x64}, {.addr=0xb982, .value=0xa2},
    };
    const struct CPU_State final_cpu = {.pc=0xb983, .a=0xb7, .x=0x74, .y=0x9d, .sp=0x97, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a2, .value=0xa8}, {.addr=0xb981, .value=0x64}, {.addr=0xb982, .value=0xa2},
    };
    const struct BusEvent events[] = {
        {.addr=0xb981, .value=0x64, .type=IO_READ},
        {.addr=0xb982, .value=0xa2, .type=IO_READ},
        {.addr=0x01a2, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 000C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_000D) {
    const struct CPU_State initial_cpu = {.pc=0x0702, .a=0x7c, .x=0x1c, .y=0xf0, .sp=0x0f, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015c, .value=0xb4}, {.addr=0x0702, .value=0x64}, {.addr=0x0703, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x0704, .a=0x7c, .x=0x1c, .y=0xf0, .sp=0x0f, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x015c, .value=0xb4}, {.addr=0x0702, .value=0x64}, {.addr=0x0703, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x0702, .value=0x64, .type=IO_READ},
        {.addr=0x0703, .value=0x5c, .type=IO_READ},
        {.addr=0x015c, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 000D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_000E) {
    const struct CPU_State initial_cpu = {.pc=0x535f, .a=0x02, .x=0x9a, .y=0xb4, .sp=0x72, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0x7c}, {.addr=0x535f, .value=0x64}, {.addr=0x5360, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x5361, .a=0x02, .x=0x9a, .y=0xb4, .sp=0x72, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0x7c}, {.addr=0x535f, .value=0x64}, {.addr=0x5360, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x535f, .value=0x64, .type=IO_READ},
        {.addr=0x5360, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 000E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_000F) {
    const struct CPU_State initial_cpu = {.pc=0x7fa8, .a=0x01, .x=0x63, .y=0x13, .sp=0x65, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009c, .value=0x8c}, {.addr=0x7fa8, .value=0x64}, {.addr=0x7fa9, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x7faa, .a=0x01, .x=0x63, .y=0x13, .sp=0x65, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x009c, .value=0x8c}, {.addr=0x7fa8, .value=0x64}, {.addr=0x7fa9, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x7fa8, .value=0x64, .type=IO_READ},
        {.addr=0x7fa9, .value=0x9c, .type=IO_READ},
        {.addr=0x009c, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 000F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0010) {
    const struct CPU_State initial_cpu = {.pc=0x938a, .a=0x0b, .x=0x4a, .y=0xf8, .sp=0xc2, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0x2f}, {.addr=0x938a, .value=0x64}, {.addr=0x938b, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x938c, .a=0x0b, .x=0x4a, .y=0xf8, .sp=0xc2, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0x2f}, {.addr=0x938a, .value=0x64}, {.addr=0x938b, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x938a, .value=0x64, .type=IO_READ},
        {.addr=0x938b, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0010", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0011) {
    const struct CPU_State initial_cpu = {.pc=0xc5ab, .a=0x37, .x=0x2e, .y=0x28, .sp=0x57, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0xac}, {.addr=0xc5ab, .value=0x64}, {.addr=0xc5ac, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0xc5ad, .a=0x37, .x=0x2e, .y=0x28, .sp=0x57, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0xac}, {.addr=0xc5ab, .value=0x64}, {.addr=0xc5ac, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0xc5ab, .value=0x64, .type=IO_READ},
        {.addr=0xc5ac, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0011", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0012) {
    const struct CPU_State initial_cpu = {.pc=0xdd1d, .a=0xb7, .x=0x30, .y=0xe5, .sp=0xcc, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0x98}, {.addr=0xdd1d, .value=0x64}, {.addr=0xdd1e, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0xdd1f, .a=0xb7, .x=0x30, .y=0xe5, .sp=0xcc, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0x98}, {.addr=0xdd1d, .value=0x64}, {.addr=0xdd1e, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd1d, .value=0x64, .type=IO_READ},
        {.addr=0xdd1e, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0012", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0013) {
    const struct CPU_State initial_cpu = {.pc=0xe35f, .a=0x4f, .x=0x06, .y=0x2e, .sp=0x2c, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0x3c}, {.addr=0xe35f, .value=0x64}, {.addr=0xe360, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0xe361, .a=0x4f, .x=0x06, .y=0x2e, .sp=0x2c, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0x3c}, {.addr=0xe35f, .value=0x64}, {.addr=0xe360, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0xe35f, .value=0x64, .type=IO_READ},
        {.addr=0xe360, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0013", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0014) {
    const struct CPU_State initial_cpu = {.pc=0x9df9, .a=0x32, .x=0x82, .y=0x78, .sp=0x59, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0xad}, {.addr=0x9df9, .value=0x64}, {.addr=0x9dfa, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x9dfb, .a=0x32, .x=0x82, .y=0x78, .sp=0x59, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0xad}, {.addr=0x9df9, .value=0x64}, {.addr=0x9dfa, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x9df9, .value=0x64, .type=IO_READ},
        {.addr=0x9dfa, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0014", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0015) {
    const struct CPU_State initial_cpu = {.pc=0x17d4, .a=0xf9, .x=0xee, .y=0x16, .sp=0xdd, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0x67}, {.addr=0x17d4, .value=0x64}, {.addr=0x17d5, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0x17d6, .a=0xf9, .x=0xee, .y=0x16, .sp=0xdd, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0x67}, {.addr=0x17d4, .value=0x64}, {.addr=0x17d5, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0x17d4, .value=0x64, .type=IO_READ},
        {.addr=0x17d5, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0015", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0016) {
    const struct CPU_State initial_cpu = {.pc=0x8700, .a=0x2c, .x=0x8d, .y=0xea, .sp=0x70, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001b, .value=0x24}, {.addr=0x8700, .value=0x64}, {.addr=0x8701, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x8702, .a=0x2c, .x=0x8d, .y=0xea, .sp=0x70, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x001b, .value=0x24}, {.addr=0x8700, .value=0x64}, {.addr=0x8701, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x8700, .value=0x64, .type=IO_READ},
        {.addr=0x8701, .value=0x1b, .type=IO_READ},
        {.addr=0x001b, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0016", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0017) {
    const struct CPU_State initial_cpu = {.pc=0xedc9, .a=0xdb, .x=0x2d, .y=0x7f, .sp=0xc5, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0xca}, {.addr=0xedc9, .value=0x64}, {.addr=0xedca, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0xedcb, .a=0xdb, .x=0x2d, .y=0x7f, .sp=0xc5, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0xca}, {.addr=0xedc9, .value=0x64}, {.addr=0xedca, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0xedc9, .value=0x64, .type=IO_READ},
        {.addr=0xedca, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0017", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0018) {
    const struct CPU_State initial_cpu = {.pc=0x6c1f, .a=0xf7, .x=0xe7, .y=0x5f, .sp=0xb7, .status=0x9c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0x55}, {.addr=0x6c1f, .value=0x64}, {.addr=0x6c20, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x6c21, .a=0xf7, .x=0xe7, .y=0x5f, .sp=0xb7, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0x55}, {.addr=0x6c1f, .value=0x64}, {.addr=0x6c20, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c1f, .value=0x64, .type=IO_READ},
        {.addr=0x6c20, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0018", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0019) {
    const struct CPU_State initial_cpu = {.pc=0xf888, .a=0x77, .x=0x16, .y=0x77, .sp=0x9e, .status=0x6a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0xbf}, {.addr=0xf888, .value=0x64}, {.addr=0xf889, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0xf88a, .a=0x77, .x=0x16, .y=0x77, .sp=0x9e, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0xbf}, {.addr=0xf888, .value=0x64}, {.addr=0xf889, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0xf888, .value=0x64, .type=IO_READ},
        {.addr=0xf889, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0019", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_001A) {
    const struct CPU_State initial_cpu = {.pc=0x85de, .a=0xa3, .x=0x94, .y=0xf4, .sp=0x7f, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0x90}, {.addr=0x85de, .value=0x64}, {.addr=0x85df, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0x85e0, .a=0xa3, .x=0x94, .y=0xf4, .sp=0x7f, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0x90}, {.addr=0x85de, .value=0x64}, {.addr=0x85df, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0x85de, .value=0x64, .type=IO_READ},
        {.addr=0x85df, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 001A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_001B) {
    const struct CPU_State initial_cpu = {.pc=0xe59a, .a=0xf1, .x=0x28, .y=0xd2, .sp=0x03, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cc, .value=0xb2}, {.addr=0xe59a, .value=0x64}, {.addr=0xe59b, .value=0xcc},
    };
    const struct CPU_State final_cpu = {.pc=0xe59c, .a=0xf1, .x=0x28, .y=0xd2, .sp=0x03, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cc, .value=0xb2}, {.addr=0xe59a, .value=0x64}, {.addr=0xe59b, .value=0xcc},
    };
    const struct BusEvent events[] = {
        {.addr=0xe59a, .value=0x64, .type=IO_READ},
        {.addr=0xe59b, .value=0xcc, .type=IO_READ},
        {.addr=0x01cc, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 001B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_001C) {
    const struct CPU_State initial_cpu = {.pc=0x1adf, .a=0xfe, .x=0x0c, .y=0x88, .sp=0x0e, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0x35}, {.addr=0x1adf, .value=0x64}, {.addr=0x1ae0, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x1ae1, .a=0xfe, .x=0x0c, .y=0x88, .sp=0x0e, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0x35}, {.addr=0x1adf, .value=0x64}, {.addr=0x1ae0, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1adf, .value=0x64, .type=IO_READ},
        {.addr=0x1ae0, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 001C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_001D) {
    const struct CPU_State initial_cpu = {.pc=0xfc71, .a=0x6b, .x=0xf4, .y=0x72, .sp=0xf8, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0xc9}, {.addr=0xfc71, .value=0x64}, {.addr=0xfc72, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0xfc73, .a=0x6b, .x=0xf4, .y=0x72, .sp=0xf8, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0xc9}, {.addr=0xfc71, .value=0x64}, {.addr=0xfc72, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc71, .value=0x64, .type=IO_READ},
        {.addr=0xfc72, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 001D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_001E) {
    const struct CPU_State initial_cpu = {.pc=0xa44c, .a=0x70, .x=0x45, .y=0xff, .sp=0x79, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0xa0}, {.addr=0xa44c, .value=0x64}, {.addr=0xa44d, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0xa44e, .a=0x70, .x=0x45, .y=0xff, .sp=0x79, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0xa0}, {.addr=0xa44c, .value=0x64}, {.addr=0xa44d, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0xa44c, .value=0x64, .type=IO_READ},
        {.addr=0xa44d, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 001E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_001F) {
    const struct CPU_State initial_cpu = {.pc=0x8428, .a=0xb4, .x=0x36, .y=0x19, .sp=0x25, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b5, .value=0x30}, {.addr=0x8428, .value=0x64}, {.addr=0x8429, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x842a, .a=0xb4, .x=0x36, .y=0x19, .sp=0x25, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b5, .value=0x30}, {.addr=0x8428, .value=0x64}, {.addr=0x8429, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x8428, .value=0x64, .type=IO_READ},
        {.addr=0x8429, .value=0xb5, .type=IO_READ},
        {.addr=0x00b5, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 001F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0020) {
    const struct CPU_State initial_cpu = {.pc=0xe36f, .a=0x6c, .x=0x11, .y=0x7c, .sp=0x03, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a7, .value=0xd9}, {.addr=0xe36f, .value=0x64}, {.addr=0xe370, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0xe371, .a=0x6c, .x=0x11, .y=0x7c, .sp=0x03, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a7, .value=0xd9}, {.addr=0xe36f, .value=0x64}, {.addr=0xe370, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0xe36f, .value=0x64, .type=IO_READ},
        {.addr=0xe370, .value=0xa7, .type=IO_READ},
        {.addr=0x01a7, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0020", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0021) {
    const struct CPU_State initial_cpu = {.pc=0xeb5a, .a=0xa8, .x=0xea, .y=0xb2, .sp=0xbd, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0xdb}, {.addr=0xeb5a, .value=0x64}, {.addr=0xeb5b, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0xeb5c, .a=0xa8, .x=0xea, .y=0xb2, .sp=0xbd, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0xdb}, {.addr=0xeb5a, .value=0x64}, {.addr=0xeb5b, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb5a, .value=0x64, .type=IO_READ},
        {.addr=0xeb5b, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0021", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0022) {
    const struct CPU_State initial_cpu = {.pc=0x9a68, .a=0xd1, .x=0xe7, .y=0x7f, .sp=0x21, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0x57}, {.addr=0x9a68, .value=0x64}, {.addr=0x9a69, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0x9a6a, .a=0xd1, .x=0xe7, .y=0x7f, .sp=0x21, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0x57}, {.addr=0x9a68, .value=0x64}, {.addr=0x9a69, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0x9a68, .value=0x64, .type=IO_READ},
        {.addr=0x9a69, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0022", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0023) {
    const struct CPU_State initial_cpu = {.pc=0x9aae, .a=0x38, .x=0x22, .y=0x75, .sp=0xdb, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0x05}, {.addr=0x9aae, .value=0x64}, {.addr=0x9aaf, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x9ab0, .a=0x38, .x=0x22, .y=0x75, .sp=0xdb, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0x05}, {.addr=0x9aae, .value=0x64}, {.addr=0x9aaf, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x9aae, .value=0x64, .type=IO_READ},
        {.addr=0x9aaf, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0023", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0024) {
    const struct CPU_State initial_cpu = {.pc=0x331d, .a=0xe8, .x=0x95, .y=0x89, .sp=0x1b, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0029, .value=0xee}, {.addr=0x331d, .value=0x64}, {.addr=0x331e, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x331f, .a=0xe8, .x=0x95, .y=0x89, .sp=0x1b, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0029, .value=0xee}, {.addr=0x331d, .value=0x64}, {.addr=0x331e, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x331d, .value=0x64, .type=IO_READ},
        {.addr=0x331e, .value=0x29, .type=IO_READ},
        {.addr=0x0029, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0024", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0025) {
    const struct CPU_State initial_cpu = {.pc=0x6250, .a=0x90, .x=0x63, .y=0xdf, .sp=0x2f, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0x78}, {.addr=0x6250, .value=0x64}, {.addr=0x6251, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x6252, .a=0x90, .x=0x63, .y=0xdf, .sp=0x2f, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0x78}, {.addr=0x6250, .value=0x64}, {.addr=0x6251, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6250, .value=0x64, .type=IO_READ},
        {.addr=0x6251, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0025", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0026) {
    const struct CPU_State initial_cpu = {.pc=0x6bf3, .a=0xf4, .x=0x7b, .y=0xc8, .sp=0xd7, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0xdd}, {.addr=0x6bf3, .value=0x64}, {.addr=0x6bf4, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0x6bf5, .a=0xf4, .x=0x7b, .y=0xc8, .sp=0xd7, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0xdd}, {.addr=0x6bf3, .value=0x64}, {.addr=0x6bf4, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0x6bf3, .value=0x64, .type=IO_READ},
        {.addr=0x6bf4, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0026", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0027) {
    const struct CPU_State initial_cpu = {.pc=0xf38b, .a=0xb1, .x=0x83, .y=0xba, .sp=0x79, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ba, .value=0x77}, {.addr=0xf38b, .value=0x64}, {.addr=0xf38c, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0xf38d, .a=0xb1, .x=0x83, .y=0xba, .sp=0x79, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ba, .value=0x77}, {.addr=0xf38b, .value=0x64}, {.addr=0xf38c, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0xf38b, .value=0x64, .type=IO_READ},
        {.addr=0xf38c, .value=0xba, .type=IO_READ},
        {.addr=0x01ba, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0027", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0028) {
    const struct CPU_State initial_cpu = {.pc=0x3e5f, .a=0xf4, .x=0x35, .y=0x18, .sp=0xc2, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0x48}, {.addr=0x3e5f, .value=0x64}, {.addr=0x3e60, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x3e61, .a=0xf4, .x=0x35, .y=0x18, .sp=0xc2, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0x48}, {.addr=0x3e5f, .value=0x64}, {.addr=0x3e60, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e5f, .value=0x64, .type=IO_READ},
        {.addr=0x3e60, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0028", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0029) {
    const struct CPU_State initial_cpu = {.pc=0xff29, .a=0xa0, .x=0xa4, .y=0x14, .sp=0x38, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0xfa}, {.addr=0xff29, .value=0x64}, {.addr=0xff2a, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0xff2b, .a=0xa0, .x=0xa4, .y=0x14, .sp=0x38, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0xfa}, {.addr=0xff29, .value=0x64}, {.addr=0xff2a, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0xff29, .value=0x64, .type=IO_READ},
        {.addr=0xff2a, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0029", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_002A) {
    const struct CPU_State initial_cpu = {.pc=0xcd78, .a=0x6a, .x=0x3d, .y=0x25, .sp=0x7b, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ed, .value=0x67}, {.addr=0xcd78, .value=0x64}, {.addr=0xcd79, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0xcd7a, .a=0x6a, .x=0x3d, .y=0x25, .sp=0x7b, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ed, .value=0x67}, {.addr=0xcd78, .value=0x64}, {.addr=0xcd79, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd78, .value=0x64, .type=IO_READ},
        {.addr=0xcd79, .value=0xed, .type=IO_READ},
        {.addr=0x00ed, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 002A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_002B) {
    const struct CPU_State initial_cpu = {.pc=0xfaa3, .a=0x33, .x=0x66, .y=0x71, .sp=0x89, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f1, .value=0x42}, {.addr=0xfaa3, .value=0x64}, {.addr=0xfaa4, .value=0xf1},
    };
    const struct CPU_State final_cpu = {.pc=0xfaa5, .a=0x33, .x=0x66, .y=0x71, .sp=0x89, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f1, .value=0x42}, {.addr=0xfaa3, .value=0x64}, {.addr=0xfaa4, .value=0xf1},
    };
    const struct BusEvent events[] = {
        {.addr=0xfaa3, .value=0x64, .type=IO_READ},
        {.addr=0xfaa4, .value=0xf1, .type=IO_READ},
        {.addr=0x01f1, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 002B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_002C) {
    const struct CPU_State initial_cpu = {.pc=0x403c, .a=0x0a, .x=0xc6, .y=0x2c, .sp=0xdd, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0033, .value=0xb2}, {.addr=0x403c, .value=0x64}, {.addr=0x403d, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0x403e, .a=0x0a, .x=0xc6, .y=0x2c, .sp=0xdd, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x0033, .value=0xb2}, {.addr=0x403c, .value=0x64}, {.addr=0x403d, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0x403c, .value=0x64, .type=IO_READ},
        {.addr=0x403d, .value=0x33, .type=IO_READ},
        {.addr=0x0033, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 002C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_002E) {
    const struct CPU_State initial_cpu = {.pc=0x9741, .a=0x0c, .x=0xa6, .y=0xe9, .sp=0x6c, .status=0x19};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0xcb}, {.addr=0x9741, .value=0x64}, {.addr=0x9742, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x9743, .a=0x0c, .x=0xa6, .y=0xe9, .sp=0x6c, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0xcb}, {.addr=0x9741, .value=0x64}, {.addr=0x9742, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x9741, .value=0x64, .type=IO_READ},
        {.addr=0x9742, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 002E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_002F) {
    const struct CPU_State initial_cpu = {.pc=0xa43e, .a=0x3b, .x=0x64, .y=0x75, .sp=0xe3, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0x54}, {.addr=0xa43e, .value=0x64}, {.addr=0xa43f, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0xa440, .a=0x3b, .x=0x64, .y=0x75, .sp=0xe3, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0x54}, {.addr=0xa43e, .value=0x64}, {.addr=0xa43f, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa43e, .value=0x64, .type=IO_READ},
        {.addr=0xa43f, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 002F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0030) {
    const struct CPU_State initial_cpu = {.pc=0xdfd2, .a=0x50, .x=0x3e, .y=0xbd, .sp=0xe5, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0047, .value=0x7a}, {.addr=0xdfd2, .value=0x64}, {.addr=0xdfd3, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0xdfd4, .a=0x50, .x=0x3e, .y=0xbd, .sp=0xe5, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0047, .value=0x7a}, {.addr=0xdfd2, .value=0x64}, {.addr=0xdfd3, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0xdfd2, .value=0x64, .type=IO_READ},
        {.addr=0xdfd3, .value=0x47, .type=IO_READ},
        {.addr=0x0047, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0030", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0031) {
    const struct CPU_State initial_cpu = {.pc=0xc515, .a=0xe7, .x=0x8e, .y=0x40, .sp=0x65, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c3, .value=0x15}, {.addr=0xc515, .value=0x64}, {.addr=0xc516, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0xc517, .a=0xe7, .x=0x8e, .y=0x40, .sp=0x65, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c3, .value=0x15}, {.addr=0xc515, .value=0x64}, {.addr=0xc516, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0xc515, .value=0x64, .type=IO_READ},
        {.addr=0xc516, .value=0xc3, .type=IO_READ},
        {.addr=0x00c3, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0031", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0032) {
    const struct CPU_State initial_cpu = {.pc=0xfea1, .a=0xf7, .x=0xed, .y=0xac, .sp=0xfd, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0x29}, {.addr=0xfea1, .value=0x64}, {.addr=0xfea2, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0xfea3, .a=0xf7, .x=0xed, .y=0xac, .sp=0xfd, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0x29}, {.addr=0xfea1, .value=0x64}, {.addr=0xfea2, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0xfea1, .value=0x64, .type=IO_READ},
        {.addr=0xfea2, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0032", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0033) {
    const struct CPU_State initial_cpu = {.pc=0xed9d, .a=0x9a, .x=0x1e, .y=0xea, .sp=0x8b, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0117, .value=0xe1}, {.addr=0xed9d, .value=0x64}, {.addr=0xed9e, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0xed9f, .a=0x9a, .x=0x1e, .y=0xea, .sp=0x8b, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0117, .value=0xe1}, {.addr=0xed9d, .value=0x64}, {.addr=0xed9e, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0xed9d, .value=0x64, .type=IO_READ},
        {.addr=0xed9e, .value=0x17, .type=IO_READ},
        {.addr=0x0117, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0033", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0034) {
    const struct CPU_State initial_cpu = {.pc=0x1a93, .a=0x83, .x=0x01, .y=0xae, .sp=0x2c, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0107, .value=0xf8}, {.addr=0x1a93, .value=0x64}, {.addr=0x1a94, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x1a95, .a=0x83, .x=0x01, .y=0xae, .sp=0x2c, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0107, .value=0xf8}, {.addr=0x1a93, .value=0x64}, {.addr=0x1a94, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a93, .value=0x64, .type=IO_READ},
        {.addr=0x1a94, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0034", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0035) {
    const struct CPU_State initial_cpu = {.pc=0x2008, .a=0xcd, .x=0x1c, .y=0x63, .sp=0xdd, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0xa2}, {.addr=0x2008, .value=0x64}, {.addr=0x2009, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x200a, .a=0xcd, .x=0x1c, .y=0x63, .sp=0xdd, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0xa2}, {.addr=0x2008, .value=0x64}, {.addr=0x2009, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x2008, .value=0x64, .type=IO_READ},
        {.addr=0x2009, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0035", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0036) {
    const struct CPU_State initial_cpu = {.pc=0x00aa, .a=0x8b, .x=0xb3, .y=0x6b, .sp=0xe4, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0x64}, {.addr=0x00ab, .value=0xd9}, {.addr=0x00d9, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0x00ac, .a=0x8b, .x=0xb3, .y=0x6b, .sp=0xe4, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0x64}, {.addr=0x00ab, .value=0xd9}, {.addr=0x00d9, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0x00aa, .value=0x64, .type=IO_READ},
        {.addr=0x00ab, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0036", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0037) {
    const struct CPU_State initial_cpu = {.pc=0x9a61, .a=0x07, .x=0xb5, .y=0xea, .sp=0xbb, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0120, .value=0xd4}, {.addr=0x9a61, .value=0x64}, {.addr=0x9a62, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x9a63, .a=0x07, .x=0xb5, .y=0xea, .sp=0xbb, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0120, .value=0xd4}, {.addr=0x9a61, .value=0x64}, {.addr=0x9a62, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x9a61, .value=0x64, .type=IO_READ},
        {.addr=0x9a62, .value=0x20, .type=IO_READ},
        {.addr=0x0120, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0037", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0038) {
    const struct CPU_State initial_cpu = {.pc=0x3b31, .a=0x7e, .x=0x7f, .y=0xff, .sp=0xf4, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0x9c}, {.addr=0x3b31, .value=0x64}, {.addr=0x3b32, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x3b33, .a=0x7e, .x=0x7f, .y=0xff, .sp=0xf4, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0x9c}, {.addr=0x3b31, .value=0x64}, {.addr=0x3b32, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b31, .value=0x64, .type=IO_READ},
        {.addr=0x3b32, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0038", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0039) {
    const struct CPU_State initial_cpu = {.pc=0x10c8, .a=0xb2, .x=0xc9, .y=0xdb, .sp=0x10, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018d, .value=0x7a}, {.addr=0x10c8, .value=0x64}, {.addr=0x10c9, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x10ca, .a=0xb2, .x=0xc9, .y=0xdb, .sp=0x10, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x018d, .value=0x7a}, {.addr=0x10c8, .value=0x64}, {.addr=0x10c9, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x10c8, .value=0x64, .type=IO_READ},
        {.addr=0x10c9, .value=0x8d, .type=IO_READ},
        {.addr=0x018d, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0039", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_003A) {
    const struct CPU_State initial_cpu = {.pc=0x676e, .a=0x2a, .x=0x56, .y=0x14, .sp=0x60, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0xb8}, {.addr=0x676e, .value=0x64}, {.addr=0x676f, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x6770, .a=0x2a, .x=0x56, .y=0x14, .sp=0x60, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0xb8}, {.addr=0x676e, .value=0x64}, {.addr=0x676f, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x676e, .value=0x64, .type=IO_READ},
        {.addr=0x676f, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 003A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_003B) {
    const struct CPU_State initial_cpu = {.pc=0xfed1, .a=0x84, .x=0xe1, .y=0x67, .sp=0x14, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0xd9}, {.addr=0xfed1, .value=0x64}, {.addr=0xfed2, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0xfed3, .a=0x84, .x=0xe1, .y=0x67, .sp=0x14, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0xd9}, {.addr=0xfed1, .value=0x64}, {.addr=0xfed2, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0xfed1, .value=0x64, .type=IO_READ},
        {.addr=0xfed2, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 003B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_003C) {
    const struct CPU_State initial_cpu = {.pc=0x00bb, .a=0x2c, .x=0xa4, .y=0x96, .sp=0x08, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009c, .value=0xd0}, {.addr=0x00bb, .value=0x64}, {.addr=0x00bc, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x00bd, .a=0x2c, .x=0xa4, .y=0x96, .sp=0x08, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x009c, .value=0xd0}, {.addr=0x00bb, .value=0x64}, {.addr=0x00bc, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x00bb, .value=0x64, .type=IO_READ},
        {.addr=0x00bc, .value=0x9c, .type=IO_READ},
        {.addr=0x009c, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 003C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_003D) {
    const struct CPU_State initial_cpu = {.pc=0xe7b6, .a=0x80, .x=0xad, .y=0x90, .sp=0xd6, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c3, .value=0x7c}, {.addr=0xe7b6, .value=0x64}, {.addr=0xe7b7, .value=0xc3},
    };
    const struct CPU_State final_cpu = {.pc=0xe7b8, .a=0x80, .x=0xad, .y=0x90, .sp=0xd6, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c3, .value=0x7c}, {.addr=0xe7b6, .value=0x64}, {.addr=0xe7b7, .value=0xc3},
    };
    const struct BusEvent events[] = {
        {.addr=0xe7b6, .value=0x64, .type=IO_READ},
        {.addr=0xe7b7, .value=0xc3, .type=IO_READ},
        {.addr=0x01c3, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 003D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_003E) {
    const struct CPU_State initial_cpu = {.pc=0xde2d, .a=0xa1, .x=0x8f, .y=0x36, .sp=0x8a, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0x7b}, {.addr=0xde2d, .value=0x64}, {.addr=0xde2e, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0xde2f, .a=0xa1, .x=0x8f, .y=0x36, .sp=0x8a, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0x7b}, {.addr=0xde2d, .value=0x64}, {.addr=0xde2e, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0xde2d, .value=0x64, .type=IO_READ},
        {.addr=0xde2e, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 003E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_003F) {
    const struct CPU_State initial_cpu = {.pc=0xca60, .a=0x0d, .x=0xde, .y=0xa2, .sp=0xa9, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010f, .value=0x62}, {.addr=0xca60, .value=0x64}, {.addr=0xca61, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0xca62, .a=0x0d, .x=0xde, .y=0xa2, .sp=0xa9, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x010f, .value=0x62}, {.addr=0xca60, .value=0x64}, {.addr=0xca61, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0xca60, .value=0x64, .type=IO_READ},
        {.addr=0xca61, .value=0x0f, .type=IO_READ},
        {.addr=0x010f, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 003F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0040) {
    const struct CPU_State initial_cpu = {.pc=0xbf90, .a=0xfe, .x=0xaa, .y=0x9c, .sp=0xf8, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01af, .value=0xdc}, {.addr=0xbf90, .value=0x64}, {.addr=0xbf91, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0xbf92, .a=0xfe, .x=0xaa, .y=0x9c, .sp=0xf8, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01af, .value=0xdc}, {.addr=0xbf90, .value=0x64}, {.addr=0xbf91, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0xbf90, .value=0x64, .type=IO_READ},
        {.addr=0xbf91, .value=0xaf, .type=IO_READ},
        {.addr=0x01af, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0040", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0041) {
    const struct CPU_State initial_cpu = {.pc=0xc16c, .a=0xab, .x=0xdc, .y=0x83, .sp=0x40, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0xec}, {.addr=0xc16c, .value=0x64}, {.addr=0xc16d, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0xc16e, .a=0xab, .x=0xdc, .y=0x83, .sp=0x40, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0xec}, {.addr=0xc16c, .value=0x64}, {.addr=0xc16d, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0xc16c, .value=0x64, .type=IO_READ},
        {.addr=0xc16d, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0041", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0042) {
    const struct CPU_State initial_cpu = {.pc=0xea9f, .a=0x40, .x=0x64, .y=0x84, .sp=0x73, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0xe9}, {.addr=0xea9f, .value=0x64}, {.addr=0xeaa0, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0xeaa1, .a=0x40, .x=0x64, .y=0x84, .sp=0x73, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0xe9}, {.addr=0xea9f, .value=0x64}, {.addr=0xeaa0, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0xea9f, .value=0x64, .type=IO_READ},
        {.addr=0xeaa0, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0042", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0043) {
    const struct CPU_State initial_cpu = {.pc=0x8b30, .a=0xee, .x=0x47, .y=0xf7, .sp=0xb1, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0x68}, {.addr=0x8b30, .value=0x64}, {.addr=0x8b31, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x8b32, .a=0xee, .x=0x47, .y=0xf7, .sp=0xb1, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0x68}, {.addr=0x8b30, .value=0x64}, {.addr=0x8b31, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b30, .value=0x64, .type=IO_READ},
        {.addr=0x8b31, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0043", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0044) {
    const struct CPU_State initial_cpu = {.pc=0x68eb, .a=0x10, .x=0x59, .y=0x1e, .sp=0x6c, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0xaf}, {.addr=0x68eb, .value=0x64}, {.addr=0x68ec, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x68ed, .a=0x10, .x=0x59, .y=0x1e, .sp=0x6c, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0xaf}, {.addr=0x68eb, .value=0x64}, {.addr=0x68ec, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x68eb, .value=0x64, .type=IO_READ},
        {.addr=0x68ec, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0044", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0045) {
    const struct CPU_State initial_cpu = {.pc=0x2008, .a=0x29, .x=0xd2, .y=0xfe, .sp=0x70, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0xce}, {.addr=0x2008, .value=0x64}, {.addr=0x2009, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x200a, .a=0x29, .x=0xd2, .y=0xfe, .sp=0x70, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0xce}, {.addr=0x2008, .value=0x64}, {.addr=0x2009, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x2008, .value=0x64, .type=IO_READ},
        {.addr=0x2009, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0045", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0046) {
    const struct CPU_State initial_cpu = {.pc=0x4a78, .a=0x4a, .x=0xce, .y=0xcd, .sp=0xf8, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0x5c}, {.addr=0x4a78, .value=0x64}, {.addr=0x4a79, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x4a7a, .a=0x4a, .x=0xce, .y=0xcd, .sp=0xf8, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0x5c}, {.addr=0x4a78, .value=0x64}, {.addr=0x4a79, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a78, .value=0x64, .type=IO_READ},
        {.addr=0x4a79, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0046", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0047) {
    const struct CPU_State initial_cpu = {.pc=0xf611, .a=0xb6, .x=0xaa, .y=0xc8, .sp=0x16, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0x83}, {.addr=0xf611, .value=0x64}, {.addr=0xf612, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0xf613, .a=0xb6, .x=0xaa, .y=0xc8, .sp=0x16, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0x83}, {.addr=0xf611, .value=0x64}, {.addr=0xf612, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0xf611, .value=0x64, .type=IO_READ},
        {.addr=0xf612, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0047", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0048) {
    const struct CPU_State initial_cpu = {.pc=0x83b7, .a=0x14, .x=0x3e, .y=0xd8, .sp=0xed, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0xf2}, {.addr=0x83b7, .value=0x64}, {.addr=0x83b8, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x83b9, .a=0x14, .x=0x3e, .y=0xd8, .sp=0xed, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0xf2}, {.addr=0x83b7, .value=0x64}, {.addr=0x83b8, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x83b7, .value=0x64, .type=IO_READ},
        {.addr=0x83b8, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0048", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0049) {
    const struct CPU_State initial_cpu = {.pc=0x43d0, .a=0xf4, .x=0x12, .y=0xbe, .sp=0x48, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0x53}, {.addr=0x43d0, .value=0x64}, {.addr=0x43d1, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x43d2, .a=0xf4, .x=0x12, .y=0xbe, .sp=0x48, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0x53}, {.addr=0x43d0, .value=0x64}, {.addr=0x43d1, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x43d0, .value=0x64, .type=IO_READ},
        {.addr=0x43d1, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0049", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_004A) {
    const struct CPU_State initial_cpu = {.pc=0xb2ae, .a=0x15, .x=0x84, .y=0xe7, .sp=0x7c, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0xca}, {.addr=0xb2ae, .value=0x64}, {.addr=0xb2af, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0xb2b0, .a=0x15, .x=0x84, .y=0xe7, .sp=0x7c, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0xca}, {.addr=0xb2ae, .value=0x64}, {.addr=0xb2af, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb2ae, .value=0x64, .type=IO_READ},
        {.addr=0xb2af, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 004A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_004B) {
    const struct CPU_State initial_cpu = {.pc=0x6ae3, .a=0x1f, .x=0x1f, .y=0x14, .sp=0xb9, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0172, .value=0x24}, {.addr=0x6ae3, .value=0x64}, {.addr=0x6ae4, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0x6ae5, .a=0x1f, .x=0x1f, .y=0x14, .sp=0xb9, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0172, .value=0x24}, {.addr=0x6ae3, .value=0x64}, {.addr=0x6ae4, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ae3, .value=0x64, .type=IO_READ},
        {.addr=0x6ae4, .value=0x72, .type=IO_READ},
        {.addr=0x0172, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 004B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_004C) {
    const struct CPU_State initial_cpu = {.pc=0x3ce2, .a=0x28, .x=0xa4, .y=0x3a, .sp=0xa4, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0016, .value=0x66}, {.addr=0x3ce2, .value=0x64}, {.addr=0x3ce3, .value=0x16},
    };
    const struct CPU_State final_cpu = {.pc=0x3ce4, .a=0x28, .x=0xa4, .y=0x3a, .sp=0xa4, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0016, .value=0x66}, {.addr=0x3ce2, .value=0x64}, {.addr=0x3ce3, .value=0x16},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ce2, .value=0x64, .type=IO_READ},
        {.addr=0x3ce3, .value=0x16, .type=IO_READ},
        {.addr=0x0016, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 004C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_004D) {
    const struct CPU_State initial_cpu = {.pc=0xe3ff, .a=0x4f, .x=0xe8, .y=0x21, .sp=0x4e, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e7, .value=0x7d}, {.addr=0xe3ff, .value=0x64}, {.addr=0xe400, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0xe401, .a=0x4f, .x=0xe8, .y=0x21, .sp=0x4e, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e7, .value=0x7d}, {.addr=0xe3ff, .value=0x64}, {.addr=0xe400, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0xe3ff, .value=0x64, .type=IO_READ},
        {.addr=0xe400, .value=0xe7, .type=IO_READ},
        {.addr=0x00e7, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 004D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_004E) {
    const struct CPU_State initial_cpu = {.pc=0x89dd, .a=0x02, .x=0x3a, .y=0xe0, .sp=0x65, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0x2d}, {.addr=0x89dd, .value=0x64}, {.addr=0x89de, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x89df, .a=0x02, .x=0x3a, .y=0xe0, .sp=0x65, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0x2d}, {.addr=0x89dd, .value=0x64}, {.addr=0x89de, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x89dd, .value=0x64, .type=IO_READ},
        {.addr=0x89de, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0x2d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 004E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_004F) {
    const struct CPU_State initial_cpu = {.pc=0x9ecb, .a=0x65, .x=0x4b, .y=0xf3, .sp=0x93, .status=0xf2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0xb2}, {.addr=0x9ecb, .value=0x64}, {.addr=0x9ecc, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x9ecd, .a=0x65, .x=0x4b, .y=0xf3, .sp=0x93, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0xb2}, {.addr=0x9ecb, .value=0x64}, {.addr=0x9ecc, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x9ecb, .value=0x64, .type=IO_READ},
        {.addr=0x9ecc, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 004F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0050) {
    const struct CPU_State initial_cpu = {.pc=0x838b, .a=0x59, .x=0xd3, .y=0x2c, .sp=0x76, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0112, .value=0x07}, {.addr=0x838b, .value=0x64}, {.addr=0x838c, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0x838d, .a=0x59, .x=0xd3, .y=0x2c, .sp=0x76, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0112, .value=0x07}, {.addr=0x838b, .value=0x64}, {.addr=0x838c, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0x838b, .value=0x64, .type=IO_READ},
        {.addr=0x838c, .value=0x12, .type=IO_READ},
        {.addr=0x0112, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0050", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0051) {
    const struct CPU_State initial_cpu = {.pc=0x7311, .a=0x4d, .x=0x13, .y=0xea, .sp=0x0b, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0xb1}, {.addr=0x7311, .value=0x64}, {.addr=0x7312, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x7313, .a=0x4d, .x=0x13, .y=0xea, .sp=0x0b, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0xb1}, {.addr=0x7311, .value=0x64}, {.addr=0x7312, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x7311, .value=0x64, .type=IO_READ},
        {.addr=0x7312, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0051", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0052) {
    const struct CPU_State initial_cpu = {.pc=0xc382, .a=0x35, .x=0xb0, .y=0x4d, .sp=0x8c, .status=0xbe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0xb4}, {.addr=0xc382, .value=0x64}, {.addr=0xc383, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0xc384, .a=0x35, .x=0xb0, .y=0x4d, .sp=0x8c, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0xb4}, {.addr=0xc382, .value=0x64}, {.addr=0xc383, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0xc382, .value=0x64, .type=IO_READ},
        {.addr=0xc383, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0052", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0053) {
    const struct CPU_State initial_cpu = {.pc=0x8cc6, .a=0x63, .x=0x7a, .y=0xce, .sp=0x46, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e9, .value=0x8f}, {.addr=0x8cc6, .value=0x64}, {.addr=0x8cc7, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x8cc8, .a=0x63, .x=0x7a, .y=0xce, .sp=0x46, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e9, .value=0x8f}, {.addr=0x8cc6, .value=0x64}, {.addr=0x8cc7, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x8cc6, .value=0x64, .type=IO_READ},
        {.addr=0x8cc7, .value=0xe9, .type=IO_READ},
        {.addr=0x00e9, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0053", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0054) {
    const struct CPU_State initial_cpu = {.pc=0x5c11, .a=0x84, .x=0x8f, .y=0xc9, .sp=0xb5, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0xcc}, {.addr=0x5c11, .value=0x64}, {.addr=0x5c12, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x5c13, .a=0x84, .x=0x8f, .y=0xc9, .sp=0xb5, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0xcc}, {.addr=0x5c11, .value=0x64}, {.addr=0x5c12, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c11, .value=0x64, .type=IO_READ},
        {.addr=0x5c12, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0054", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0055) {
    const struct CPU_State initial_cpu = {.pc=0xcbae, .a=0xfa, .x=0x24, .y=0x3e, .sp=0x2a, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0003, .value=0x0f}, {.addr=0xcbae, .value=0x64}, {.addr=0xcbaf, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0xcbb0, .a=0xfa, .x=0x24, .y=0x3e, .sp=0x2a, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0003, .value=0x0f}, {.addr=0xcbae, .value=0x64}, {.addr=0xcbaf, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0xcbae, .value=0x64, .type=IO_READ},
        {.addr=0xcbaf, .value=0x03, .type=IO_READ},
        {.addr=0x0003, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0055", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0056) {
    const struct CPU_State initial_cpu = {.pc=0x0063, .a=0x77, .x=0x0d, .y=0xef, .sp=0x30, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0x64}, {.addr=0x0064, .value=0x5e}, {.addr=0x015e, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x0065, .a=0x77, .x=0x0d, .y=0xef, .sp=0x30, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0x64}, {.addr=0x0064, .value=0x5e}, {.addr=0x015e, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x0063, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0056", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0057) {
    const struct CPU_State initial_cpu = {.pc=0x8b99, .a=0x51, .x=0x29, .y=0x7e, .sp=0xc9, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0xc4}, {.addr=0x8b99, .value=0x64}, {.addr=0x8b9a, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x8b9b, .a=0x51, .x=0x29, .y=0x7e, .sp=0xc9, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0xc4}, {.addr=0x8b99, .value=0x64}, {.addr=0x8b9a, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b99, .value=0x64, .type=IO_READ},
        {.addr=0x8b9a, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0057", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0058) {
    const struct CPU_State initial_cpu = {.pc=0xbee9, .a=0xb9, .x=0x9a, .y=0x4b, .sp=0x69, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0xae}, {.addr=0xbee9, .value=0x64}, {.addr=0xbeea, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0xbeeb, .a=0xb9, .x=0x9a, .y=0x4b, .sp=0x69, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0xae}, {.addr=0xbee9, .value=0x64}, {.addr=0xbeea, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0xbee9, .value=0x64, .type=IO_READ},
        {.addr=0xbeea, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0058", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0059) {
    const struct CPU_State initial_cpu = {.pc=0xda7a, .a=0x17, .x=0x3f, .y=0xa6, .sp=0xb6, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0xf5}, {.addr=0xda7a, .value=0x64}, {.addr=0xda7b, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0xda7c, .a=0x17, .x=0x3f, .y=0xa6, .sp=0xb6, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0xf5}, {.addr=0xda7a, .value=0x64}, {.addr=0xda7b, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0xda7a, .value=0x64, .type=IO_READ},
        {.addr=0xda7b, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0059", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_005A) {
    const struct CPU_State initial_cpu = {.pc=0x2be8, .a=0x22, .x=0x8d, .y=0x2e, .sp=0xd6, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008b, .value=0xbe}, {.addr=0x2be8, .value=0x64}, {.addr=0x2be9, .value=0x8b},
    };
    const struct CPU_State final_cpu = {.pc=0x2bea, .a=0x22, .x=0x8d, .y=0x2e, .sp=0xd6, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x008b, .value=0xbe}, {.addr=0x2be8, .value=0x64}, {.addr=0x2be9, .value=0x8b},
    };
    const struct BusEvent events[] = {
        {.addr=0x2be8, .value=0x64, .type=IO_READ},
        {.addr=0x2be9, .value=0x8b, .type=IO_READ},
        {.addr=0x008b, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 005A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_005B) {
    const struct CPU_State initial_cpu = {.pc=0xcd61, .a=0x6a, .x=0x0d, .y=0xcd, .sp=0x58, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0001, .value=0x89}, {.addr=0xcd61, .value=0x64}, {.addr=0xcd62, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0xcd63, .a=0x6a, .x=0x0d, .y=0xcd, .sp=0x58, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0001, .value=0x89}, {.addr=0xcd61, .value=0x64}, {.addr=0xcd62, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd61, .value=0x64, .type=IO_READ},
        {.addr=0xcd62, .value=0x01, .type=IO_READ},
        {.addr=0x0001, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 005B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_005C) {
    const struct CPU_State initial_cpu = {.pc=0x9120, .a=0xe9, .x=0x92, .y=0x36, .sp=0xb2, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019c, .value=0x21}, {.addr=0x9120, .value=0x64}, {.addr=0x9121, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0x9122, .a=0xe9, .x=0x92, .y=0x36, .sp=0xb2, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x019c, .value=0x21}, {.addr=0x9120, .value=0x64}, {.addr=0x9121, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0x9120, .value=0x64, .type=IO_READ},
        {.addr=0x9121, .value=0x9c, .type=IO_READ},
        {.addr=0x019c, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 005C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_005D) {
    const struct CPU_State initial_cpu = {.pc=0x6a0d, .a=0x77, .x=0xdb, .y=0x94, .sp=0x31, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0188, .value=0xc8}, {.addr=0x6a0d, .value=0x64}, {.addr=0x6a0e, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x6a0f, .a=0x77, .x=0xdb, .y=0x94, .sp=0x31, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0188, .value=0xc8}, {.addr=0x6a0d, .value=0x64}, {.addr=0x6a0e, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a0d, .value=0x64, .type=IO_READ},
        {.addr=0x6a0e, .value=0x88, .type=IO_READ},
        {.addr=0x0188, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 005D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_005E) {
    const struct CPU_State initial_cpu = {.pc=0x09a5, .a=0x34, .x=0x2c, .y=0x1d, .sp=0x92, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0x03}, {.addr=0x09a5, .value=0x64}, {.addr=0x09a6, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x09a7, .a=0x34, .x=0x2c, .y=0x1d, .sp=0x92, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0x03}, {.addr=0x09a5, .value=0x64}, {.addr=0x09a6, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x09a5, .value=0x64, .type=IO_READ},
        {.addr=0x09a6, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 005E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_005F) {
    const struct CPU_State initial_cpu = {.pc=0x619b, .a=0x3b, .x=0xa7, .y=0x91, .sp=0x7d, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c4, .value=0xf2}, {.addr=0x619b, .value=0x64}, {.addr=0x619c, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x619d, .a=0x3b, .x=0xa7, .y=0x91, .sp=0x7d, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c4, .value=0xf2}, {.addr=0x619b, .value=0x64}, {.addr=0x619c, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x619b, .value=0x64, .type=IO_READ},
        {.addr=0x619c, .value=0xc4, .type=IO_READ},
        {.addr=0x01c4, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 005F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0060) {
    const struct CPU_State initial_cpu = {.pc=0xd1be, .a=0x21, .x=0x9d, .y=0x2e, .sp=0x8a, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0x62}, {.addr=0xd1be, .value=0x64}, {.addr=0xd1bf, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0xd1c0, .a=0x21, .x=0x9d, .y=0x2e, .sp=0x8a, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0x62}, {.addr=0xd1be, .value=0x64}, {.addr=0xd1bf, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0xd1be, .value=0x64, .type=IO_READ},
        {.addr=0xd1bf, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0060", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0061) {
    const struct CPU_State initial_cpu = {.pc=0x9ba8, .a=0x38, .x=0x1d, .y=0xa2, .sp=0x96, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0x64}, {.addr=0x9ba8, .value=0x64}, {.addr=0x9ba9, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x9baa, .a=0x38, .x=0x1d, .y=0xa2, .sp=0x96, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0x64}, {.addr=0x9ba8, .value=0x64}, {.addr=0x9ba9, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x9ba8, .value=0x64, .type=IO_READ},
        {.addr=0x9ba9, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0061", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0062) {
    const struct CPU_State initial_cpu = {.pc=0x38dd, .a=0x75, .x=0x31, .y=0xbf, .sp=0x1f, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0x77}, {.addr=0x38dd, .value=0x64}, {.addr=0x38de, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0x38df, .a=0x75, .x=0x31, .y=0xbf, .sp=0x1f, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0x77}, {.addr=0x38dd, .value=0x64}, {.addr=0x38de, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0x38dd, .value=0x64, .type=IO_READ},
        {.addr=0x38de, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0062", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0063) {
    const struct CPU_State initial_cpu = {.pc=0x01f1, .a=0x4f, .x=0x56, .y=0x8d, .sp=0xb8, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0xd9}, {.addr=0x01f1, .value=0x64}, {.addr=0x01f2, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x01f3, .a=0x4f, .x=0x56, .y=0x8d, .sp=0xb8, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0xd9}, {.addr=0x01f1, .value=0x64}, {.addr=0x01f2, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x01f1, .value=0x64, .type=IO_READ},
        {.addr=0x01f2, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0063", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0064) {
    const struct CPU_State initial_cpu = {.pc=0x931b, .a=0x8d, .x=0x02, .y=0xa0, .sp=0x08, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0xe0}, {.addr=0x931b, .value=0x64}, {.addr=0x931c, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x931d, .a=0x8d, .x=0x02, .y=0xa0, .sp=0x08, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0xe0}, {.addr=0x931b, .value=0x64}, {.addr=0x931c, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x931b, .value=0x64, .type=IO_READ},
        {.addr=0x931c, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0064", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0065) {
    const struct CPU_State initial_cpu = {.pc=0x1632, .a=0xb3, .x=0x42, .y=0xf5, .sp=0x29, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d8, .value=0x78}, {.addr=0x1632, .value=0x64}, {.addr=0x1633, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0x1634, .a=0xb3, .x=0x42, .y=0xf5, .sp=0x29, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d8, .value=0x78}, {.addr=0x1632, .value=0x64}, {.addr=0x1633, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0x1632, .value=0x64, .type=IO_READ},
        {.addr=0x1633, .value=0xd8, .type=IO_READ},
        {.addr=0x00d8, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0065", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0066) {
    const struct CPU_State initial_cpu = {.pc=0x8f13, .a=0x9f, .x=0x6b, .y=0x55, .sp=0x1a, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0x90}, {.addr=0x8f13, .value=0x64}, {.addr=0x8f14, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x8f15, .a=0x9f, .x=0x6b, .y=0x55, .sp=0x1a, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0x90}, {.addr=0x8f13, .value=0x64}, {.addr=0x8f14, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f13, .value=0x64, .type=IO_READ},
        {.addr=0x8f14, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0066", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0067) {
    const struct CPU_State initial_cpu = {.pc=0x7fa6, .a=0x0a, .x=0x7a, .y=0x44, .sp=0xbd, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0x58}, {.addr=0x7fa6, .value=0x64}, {.addr=0x7fa7, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x7fa8, .a=0x0a, .x=0x7a, .y=0x44, .sp=0xbd, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0x58}, {.addr=0x7fa6, .value=0x64}, {.addr=0x7fa7, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x7fa6, .value=0x64, .type=IO_READ},
        {.addr=0x7fa7, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0067", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0068) {
    const struct CPU_State initial_cpu = {.pc=0xc6f1, .a=0x4c, .x=0x00, .y=0xa7, .sp=0xc9, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0191, .value=0xf1}, {.addr=0xc6f1, .value=0x64}, {.addr=0xc6f2, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0xc6f3, .a=0x4c, .x=0x00, .y=0xa7, .sp=0xc9, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0191, .value=0xf1}, {.addr=0xc6f1, .value=0x64}, {.addr=0xc6f2, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0xc6f1, .value=0x64, .type=IO_READ},
        {.addr=0xc6f2, .value=0x91, .type=IO_READ},
        {.addr=0x0191, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0068", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0069) {
    const struct CPU_State initial_cpu = {.pc=0xaa80, .a=0x86, .x=0x71, .y=0x8f, .sp=0x6e, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0xd5}, {.addr=0xaa80, .value=0x64}, {.addr=0xaa81, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0xaa82, .a=0x86, .x=0x71, .y=0x8f, .sp=0x6e, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0xd5}, {.addr=0xaa80, .value=0x64}, {.addr=0xaa81, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa80, .value=0x64, .type=IO_READ},
        {.addr=0xaa81, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0069", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_006A) {
    const struct CPU_State initial_cpu = {.pc=0x2dc2, .a=0xb6, .x=0xe3, .y=0x63, .sp=0x21, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018d, .value=0x2a}, {.addr=0x2dc2, .value=0x64}, {.addr=0x2dc3, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x2dc4, .a=0xb6, .x=0xe3, .y=0x63, .sp=0x21, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x018d, .value=0x2a}, {.addr=0x2dc2, .value=0x64}, {.addr=0x2dc3, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x2dc2, .value=0x64, .type=IO_READ},
        {.addr=0x2dc3, .value=0x8d, .type=IO_READ},
        {.addr=0x018d, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 006A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_006B) {
    const struct CPU_State initial_cpu = {.pc=0x18a3, .a=0x30, .x=0xe2, .y=0x59, .sp=0xd0, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013a, .value=0x1a}, {.addr=0x18a3, .value=0x64}, {.addr=0x18a4, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x18a5, .a=0x30, .x=0xe2, .y=0x59, .sp=0xd0, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x013a, .value=0x1a}, {.addr=0x18a3, .value=0x64}, {.addr=0x18a4, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x18a3, .value=0x64, .type=IO_READ},
        {.addr=0x18a4, .value=0x3a, .type=IO_READ},
        {.addr=0x013a, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 006B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_006C) {
    const struct CPU_State initial_cpu = {.pc=0x584a, .a=0xb1, .x=0x70, .y=0x11, .sp=0x12, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0xb9}, {.addr=0x584a, .value=0x64}, {.addr=0x584b, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x584c, .a=0xb1, .x=0x70, .y=0x11, .sp=0x12, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0xb9}, {.addr=0x584a, .value=0x64}, {.addr=0x584b, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x584a, .value=0x64, .type=IO_READ},
        {.addr=0x584b, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 006C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_006E) {
    const struct CPU_State initial_cpu = {.pc=0xc871, .a=0x8f, .x=0x61, .y=0x2d, .sp=0x0e, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0xef}, {.addr=0xc871, .value=0x64}, {.addr=0xc872, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0xc873, .a=0x8f, .x=0x61, .y=0x2d, .sp=0x0e, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0xef}, {.addr=0xc871, .value=0x64}, {.addr=0xc872, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0xc871, .value=0x64, .type=IO_READ},
        {.addr=0xc872, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 006E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_006F) {
    const struct CPU_State initial_cpu = {.pc=0x3bc1, .a=0x39, .x=0x5b, .y=0xd0, .sp=0xd4, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012f, .value=0x0c}, {.addr=0x3bc1, .value=0x64}, {.addr=0x3bc2, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x3bc3, .a=0x39, .x=0x5b, .y=0xd0, .sp=0xd4, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x012f, .value=0x0c}, {.addr=0x3bc1, .value=0x64}, {.addr=0x3bc2, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x3bc1, .value=0x64, .type=IO_READ},
        {.addr=0x3bc2, .value=0x2f, .type=IO_READ},
        {.addr=0x012f, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 006F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0070) {
    const struct CPU_State initial_cpu = {.pc=0xf686, .a=0x51, .x=0x87, .y=0xf9, .sp=0x56, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0x4b}, {.addr=0xf686, .value=0x64}, {.addr=0xf687, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0xf688, .a=0x51, .x=0x87, .y=0xf9, .sp=0x56, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0x4b}, {.addr=0xf686, .value=0x64}, {.addr=0xf687, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0xf686, .value=0x64, .type=IO_READ},
        {.addr=0xf687, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0070", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0071) {
    const struct CPU_State initial_cpu = {.pc=0x824b, .a=0xf0, .x=0x0c, .y=0x89, .sp=0x71, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0x4f}, {.addr=0x824b, .value=0x64}, {.addr=0x824c, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0x824d, .a=0xf0, .x=0x0c, .y=0x89, .sp=0x71, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0x4f}, {.addr=0x824b, .value=0x64}, {.addr=0x824c, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0x824b, .value=0x64, .type=IO_READ},
        {.addr=0x824c, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0071", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0072) {
    const struct CPU_State initial_cpu = {.pc=0x9448, .a=0x01, .x=0x7f, .y=0x25, .sp=0x37, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0x93}, {.addr=0x9448, .value=0x64}, {.addr=0x9449, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x944a, .a=0x01, .x=0x7f, .y=0x25, .sp=0x37, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0x93}, {.addr=0x9448, .value=0x64}, {.addr=0x9449, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x9448, .value=0x64, .type=IO_READ},
        {.addr=0x9449, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0072", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0073) {
    const struct CPU_State initial_cpu = {.pc=0x5bf8, .a=0x61, .x=0x8d, .y=0xad, .sp=0xa3, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0xe7}, {.addr=0x5bf8, .value=0x64}, {.addr=0x5bf9, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x5bfa, .a=0x61, .x=0x8d, .y=0xad, .sp=0xa3, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0xe7}, {.addr=0x5bf8, .value=0x64}, {.addr=0x5bf9, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x5bf8, .value=0x64, .type=IO_READ},
        {.addr=0x5bf9, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0073", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0074) {
    const struct CPU_State initial_cpu = {.pc=0x2b29, .a=0x1e, .x=0xd2, .y=0x15, .sp=0x44, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010d, .value=0xff}, {.addr=0x2b29, .value=0x64}, {.addr=0x2b2a, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x2b2b, .a=0x1e, .x=0xd2, .y=0x15, .sp=0x44, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x010d, .value=0xff}, {.addr=0x2b29, .value=0x64}, {.addr=0x2b2a, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b29, .value=0x64, .type=IO_READ},
        {.addr=0x2b2a, .value=0x0d, .type=IO_READ},
        {.addr=0x010d, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0074", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0075) {
    const struct CPU_State initial_cpu = {.pc=0xb6d2, .a=0x3c, .x=0x0b, .y=0xc6, .sp=0xd5, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0x25}, {.addr=0xb6d2, .value=0x64}, {.addr=0xb6d3, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0xb6d4, .a=0x3c, .x=0x0b, .y=0xc6, .sp=0xd5, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0x25}, {.addr=0xb6d2, .value=0x64}, {.addr=0xb6d3, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb6d2, .value=0x64, .type=IO_READ},
        {.addr=0xb6d3, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0075", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0076) {
    const struct CPU_State initial_cpu = {.pc=0xdf96, .a=0xc9, .x=0xd5, .y=0xc9, .sp=0xa3, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0xfe}, {.addr=0xdf96, .value=0x64}, {.addr=0xdf97, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0xdf98, .a=0xc9, .x=0xd5, .y=0xc9, .sp=0xa3, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0xfe}, {.addr=0xdf96, .value=0x64}, {.addr=0xdf97, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf96, .value=0x64, .type=IO_READ},
        {.addr=0xdf97, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0076", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0077) {
    const struct CPU_State initial_cpu = {.pc=0x8c02, .a=0x20, .x=0x65, .y=0x24, .sp=0x66, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0x64}, {.addr=0x8c02, .value=0x64}, {.addr=0x8c03, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x8c04, .a=0x20, .x=0x65, .y=0x24, .sp=0x66, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0x64}, {.addr=0x8c02, .value=0x64}, {.addr=0x8c03, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c02, .value=0x64, .type=IO_READ},
        {.addr=0x8c03, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0077", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0078) {
    const struct CPU_State initial_cpu = {.pc=0x1dac, .a=0x12, .x=0xd5, .y=0x2c, .sp=0x34, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0x7a}, {.addr=0x1dac, .value=0x64}, {.addr=0x1dad, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x1dae, .a=0x12, .x=0xd5, .y=0x2c, .sp=0x34, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0x7a}, {.addr=0x1dac, .value=0x64}, {.addr=0x1dad, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x1dac, .value=0x64, .type=IO_READ},
        {.addr=0x1dad, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0078", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0079) {
    const struct CPU_State initial_cpu = {.pc=0x9325, .a=0x94, .x=0x41, .y=0xaf, .sp=0x65, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0167, .value=0x03}, {.addr=0x9325, .value=0x64}, {.addr=0x9326, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x9327, .a=0x94, .x=0x41, .y=0xaf, .sp=0x65, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0167, .value=0x03}, {.addr=0x9325, .value=0x64}, {.addr=0x9326, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x9325, .value=0x64, .type=IO_READ},
        {.addr=0x9326, .value=0x67, .type=IO_READ},
        {.addr=0x0167, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0079", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_007A) {
    const struct CPU_State initial_cpu = {.pc=0x22a9, .a=0x83, .x=0xea, .y=0xc8, .sp=0x69, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0xbf}, {.addr=0x22a9, .value=0x64}, {.addr=0x22aa, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x22ab, .a=0x83, .x=0xea, .y=0xc8, .sp=0x69, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0xbf}, {.addr=0x22a9, .value=0x64}, {.addr=0x22aa, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x22a9, .value=0x64, .type=IO_READ},
        {.addr=0x22aa, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0xbf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 007A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_007B) {
    const struct CPU_State initial_cpu = {.pc=0xa53d, .a=0x25, .x=0x3f, .y=0x38, .sp=0x25, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0x5c}, {.addr=0xa53d, .value=0x64}, {.addr=0xa53e, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0xa53f, .a=0x25, .x=0x3f, .y=0x38, .sp=0x25, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0x5c}, {.addr=0xa53d, .value=0x64}, {.addr=0xa53e, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0xa53d, .value=0x64, .type=IO_READ},
        {.addr=0xa53e, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 007B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_007C) {
    const struct CPU_State initial_cpu = {.pc=0xa601, .a=0xa6, .x=0xaf, .y=0x1f, .sp=0x3a, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0072, .value=0x28}, {.addr=0xa601, .value=0x64}, {.addr=0xa602, .value=0x72},
    };
    const struct CPU_State final_cpu = {.pc=0xa603, .a=0xa6, .x=0xaf, .y=0x1f, .sp=0x3a, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0072, .value=0x28}, {.addr=0xa601, .value=0x64}, {.addr=0xa602, .value=0x72},
    };
    const struct BusEvent events[] = {
        {.addr=0xa601, .value=0x64, .type=IO_READ},
        {.addr=0xa602, .value=0x72, .type=IO_READ},
        {.addr=0x0072, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 007C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_007D) {
    const struct CPU_State initial_cpu = {.pc=0x7bcf, .a=0x89, .x=0x49, .y=0x25, .sp=0x58, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0xc2}, {.addr=0x7bcf, .value=0x64}, {.addr=0x7bd0, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x7bd1, .a=0x89, .x=0x49, .y=0x25, .sp=0x58, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0xc2}, {.addr=0x7bcf, .value=0x64}, {.addr=0x7bd0, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x7bcf, .value=0x64, .type=IO_READ},
        {.addr=0x7bd0, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 007D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_007E) {
    const struct CPU_State initial_cpu = {.pc=0x7a17, .a=0x30, .x=0x37, .y=0xa5, .sp=0x53, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0180, .value=0x4e}, {.addr=0x7a17, .value=0x64}, {.addr=0x7a18, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0x7a19, .a=0x30, .x=0x37, .y=0xa5, .sp=0x53, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0180, .value=0x4e}, {.addr=0x7a17, .value=0x64}, {.addr=0x7a18, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a17, .value=0x64, .type=IO_READ},
        {.addr=0x7a18, .value=0x80, .type=IO_READ},
        {.addr=0x0180, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 007E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_007F) {
    const struct CPU_State initial_cpu = {.pc=0xae86, .a=0x87, .x=0x8f, .y=0xa7, .sp=0xe2, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0x45}, {.addr=0xae86, .value=0x64}, {.addr=0xae87, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0xae88, .a=0x87, .x=0x8f, .y=0xa7, .sp=0xe2, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0x45}, {.addr=0xae86, .value=0x64}, {.addr=0xae87, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0xae86, .value=0x64, .type=IO_READ},
        {.addr=0xae87, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 007F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0080) {
    const struct CPU_State initial_cpu = {.pc=0xc730, .a=0x65, .x=0x77, .y=0xc9, .sp=0x17, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0x23}, {.addr=0xc730, .value=0x64}, {.addr=0xc731, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0xc732, .a=0x65, .x=0x77, .y=0xc9, .sp=0x17, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0x23}, {.addr=0xc730, .value=0x64}, {.addr=0xc731, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0xc730, .value=0x64, .type=IO_READ},
        {.addr=0xc731, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0080", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0081) {
    const struct CPU_State initial_cpu = {.pc=0x2e98, .a=0x4e, .x=0xe1, .y=0x15, .sp=0x82, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f4, .value=0xcb}, {.addr=0x2e98, .value=0x64}, {.addr=0x2e99, .value=0xf4},
    };
    const struct CPU_State final_cpu = {.pc=0x2e9a, .a=0x4e, .x=0xe1, .y=0x15, .sp=0x82, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f4, .value=0xcb}, {.addr=0x2e98, .value=0x64}, {.addr=0x2e99, .value=0xf4},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e98, .value=0x64, .type=IO_READ},
        {.addr=0x2e99, .value=0xf4, .type=IO_READ},
        {.addr=0x01f4, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0081", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0082) {
    const struct CPU_State initial_cpu = {.pc=0xf14f, .a=0x09, .x=0xbb, .y=0x65, .sp=0xcc, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0xde}, {.addr=0xf14f, .value=0x64}, {.addr=0xf150, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0xf151, .a=0x09, .x=0xbb, .y=0x65, .sp=0xcc, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0xde}, {.addr=0xf14f, .value=0x64}, {.addr=0xf150, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0xf14f, .value=0x64, .type=IO_READ},
        {.addr=0xf150, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0082", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0083) {
    const struct CPU_State initial_cpu = {.pc=0x7a40, .a=0xd1, .x=0x00, .y=0x1d, .sp=0x00, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0188, .value=0xf9}, {.addr=0x7a40, .value=0x64}, {.addr=0x7a41, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x7a42, .a=0xd1, .x=0x00, .y=0x1d, .sp=0x00, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0188, .value=0xf9}, {.addr=0x7a40, .value=0x64}, {.addr=0x7a41, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a40, .value=0x64, .type=IO_READ},
        {.addr=0x7a41, .value=0x88, .type=IO_READ},
        {.addr=0x0188, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0083", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0084) {
    const struct CPU_State initial_cpu = {.pc=0x2c13, .a=0xaf, .x=0xb8, .y=0xdd, .sp=0x49, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0x4e}, {.addr=0x2c13, .value=0x64}, {.addr=0x2c14, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x2c15, .a=0xaf, .x=0xb8, .y=0xdd, .sp=0x49, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0x4e}, {.addr=0x2c13, .value=0x64}, {.addr=0x2c14, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c13, .value=0x64, .type=IO_READ},
        {.addr=0x2c14, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0084", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0085) {
    const struct CPU_State initial_cpu = {.pc=0x7d9b, .a=0x74, .x=0x41, .y=0x11, .sp=0x7e, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0x8c}, {.addr=0x7d9b, .value=0x64}, {.addr=0x7d9c, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x7d9d, .a=0x74, .x=0x41, .y=0x11, .sp=0x7e, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0x8c}, {.addr=0x7d9b, .value=0x64}, {.addr=0x7d9c, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d9b, .value=0x64, .type=IO_READ},
        {.addr=0x7d9c, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0085", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0086) {
    const struct CPU_State initial_cpu = {.pc=0x9b2a, .a=0x41, .x=0xb9, .y=0xdc, .sp=0x08, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0xe5}, {.addr=0x9b2a, .value=0x64}, {.addr=0x9b2b, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x9b2c, .a=0x41, .x=0xb9, .y=0xdc, .sp=0x08, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0xe5}, {.addr=0x9b2a, .value=0x64}, {.addr=0x9b2b, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b2a, .value=0x64, .type=IO_READ},
        {.addr=0x9b2b, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0086", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0087) {
    const struct CPU_State initial_cpu = {.pc=0x0f22, .a=0x74, .x=0x07, .y=0x3d, .sp=0xa1, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c4, .value=0x37}, {.addr=0x0f22, .value=0x64}, {.addr=0x0f23, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0x0f24, .a=0x74, .x=0x07, .y=0x3d, .sp=0xa1, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c4, .value=0x37}, {.addr=0x0f22, .value=0x64}, {.addr=0x0f23, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f22, .value=0x64, .type=IO_READ},
        {.addr=0x0f23, .value=0xc4, .type=IO_READ},
        {.addr=0x00c4, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0087", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0088) {
    const struct CPU_State initial_cpu = {.pc=0x7a42, .a=0x1a, .x=0x53, .y=0xfc, .sp=0xb1, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0xca}, {.addr=0x7a42, .value=0x64}, {.addr=0x7a43, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x7a44, .a=0x1a, .x=0x53, .y=0xfc, .sp=0xb1, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0xca}, {.addr=0x7a42, .value=0x64}, {.addr=0x7a43, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a42, .value=0x64, .type=IO_READ},
        {.addr=0x7a43, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0088", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0089) {
    const struct CPU_State initial_cpu = {.pc=0x3b47, .a=0x27, .x=0x76, .y=0x17, .sp=0x89, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0x62}, {.addr=0x3b47, .value=0x64}, {.addr=0x3b48, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x3b49, .a=0x27, .x=0x76, .y=0x17, .sp=0x89, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0x62}, {.addr=0x3b47, .value=0x64}, {.addr=0x3b48, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x3b47, .value=0x64, .type=IO_READ},
        {.addr=0x3b48, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0089", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_008A) {
    const struct CPU_State initial_cpu = {.pc=0xaa74, .a=0x4c, .x=0xc5, .y=0x19, .sp=0xb7, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0x04}, {.addr=0xaa74, .value=0x64}, {.addr=0xaa75, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xaa76, .a=0x4c, .x=0xc5, .y=0x19, .sp=0xb7, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0x04}, {.addr=0xaa74, .value=0x64}, {.addr=0xaa75, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa74, .value=0x64, .type=IO_READ},
        {.addr=0xaa75, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 008A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_008B) {
    const struct CPU_State initial_cpu = {.pc=0x8da5, .a=0x9f, .x=0x2c, .y=0x12, .sp=0xd4, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010d, .value=0x01}, {.addr=0x8da5, .value=0x64}, {.addr=0x8da6, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x8da7, .a=0x9f, .x=0x2c, .y=0x12, .sp=0xd4, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x010d, .value=0x01}, {.addr=0x8da5, .value=0x64}, {.addr=0x8da6, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8da5, .value=0x64, .type=IO_READ},
        {.addr=0x8da6, .value=0x0d, .type=IO_READ},
        {.addr=0x010d, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 008B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_008C) {
    const struct CPU_State initial_cpu = {.pc=0x6113, .a=0x25, .x=0xb6, .y=0xd8, .sp=0xaa, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e9, .value=0xc2}, {.addr=0x6113, .value=0x64}, {.addr=0x6114, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x6115, .a=0x25, .x=0xb6, .y=0xd8, .sp=0xaa, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e9, .value=0xc2}, {.addr=0x6113, .value=0x64}, {.addr=0x6114, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x6113, .value=0x64, .type=IO_READ},
        {.addr=0x6114, .value=0xe9, .type=IO_READ},
        {.addr=0x01e9, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 008C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_008D) {
    const struct CPU_State initial_cpu = {.pc=0x01bc, .a=0xda, .x=0x95, .y=0xb6, .sp=0x83, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0xda}, {.addr=0x01bc, .value=0x64}, {.addr=0x01bd, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x01be, .a=0xda, .x=0x95, .y=0xb6, .sp=0x83, .status=0x43};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0xda}, {.addr=0x01bc, .value=0x64}, {.addr=0x01bd, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x01bc, .value=0x64, .type=IO_READ},
        {.addr=0x01bd, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 008D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_008E) {
    const struct CPU_State initial_cpu = {.pc=0x111c, .a=0xa6, .x=0xb0, .y=0xb3, .sp=0x8c, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0x9c}, {.addr=0x111c, .value=0x64}, {.addr=0x111d, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x111e, .a=0xa6, .x=0xb0, .y=0xb3, .sp=0x8c, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0x9c}, {.addr=0x111c, .value=0x64}, {.addr=0x111d, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x111c, .value=0x64, .type=IO_READ},
        {.addr=0x111d, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 008E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_008F) {
    const struct CPU_State initial_cpu = {.pc=0x1184, .a=0x55, .x=0xf5, .y=0xf3, .sp=0xcb, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0x07}, {.addr=0x1184, .value=0x64}, {.addr=0x1185, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x1186, .a=0x55, .x=0xf5, .y=0xf3, .sp=0xcb, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0x07}, {.addr=0x1184, .value=0x64}, {.addr=0x1185, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x1184, .value=0x64, .type=IO_READ},
        {.addr=0x1185, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 008F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0090) {
    const struct CPU_State initial_cpu = {.pc=0xadbb, .a=0x3c, .x=0x75, .y=0x0d, .sp=0xe0, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0xbe}, {.addr=0xadbb, .value=0x64}, {.addr=0xadbc, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0xadbd, .a=0x3c, .x=0x75, .y=0x0d, .sp=0xe0, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0xbe}, {.addr=0xadbb, .value=0x64}, {.addr=0xadbc, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0xadbb, .value=0x64, .type=IO_READ},
        {.addr=0xadbc, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0090", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0091) {
    const struct CPU_State initial_cpu = {.pc=0xfcc7, .a=0xbe, .x=0x7e, .y=0xc7, .sp=0x1e, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003b, .value=0x99}, {.addr=0xfcc7, .value=0x64}, {.addr=0xfcc8, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0xfcc9, .a=0xbe, .x=0x7e, .y=0xc7, .sp=0x1e, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x003b, .value=0x99}, {.addr=0xfcc7, .value=0x64}, {.addr=0xfcc8, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0xfcc7, .value=0x64, .type=IO_READ},
        {.addr=0xfcc8, .value=0x3b, .type=IO_READ},
        {.addr=0x003b, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0091", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0092) {
    const struct CPU_State initial_cpu = {.pc=0xfe19, .a=0xc2, .x=0xb3, .y=0x74, .sp=0xc8, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0x8e}, {.addr=0xfe19, .value=0x64}, {.addr=0xfe1a, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xfe1b, .a=0xc2, .x=0xb3, .y=0x74, .sp=0xc8, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0x8e}, {.addr=0xfe19, .value=0x64}, {.addr=0xfe1a, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe19, .value=0x64, .type=IO_READ},
        {.addr=0xfe1a, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0092", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0093) {
    const struct CPU_State initial_cpu = {.pc=0x2b2c, .a=0x6c, .x=0x24, .y=0xc7, .sp=0x86, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0xc4}, {.addr=0x2b2c, .value=0x64}, {.addr=0x2b2d, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x2b2e, .a=0x6c, .x=0x24, .y=0xc7, .sp=0x86, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0xc4}, {.addr=0x2b2c, .value=0x64}, {.addr=0x2b2d, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x2b2c, .value=0x64, .type=IO_READ},
        {.addr=0x2b2d, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0093", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0094) {
    const struct CPU_State initial_cpu = {.pc=0x4873, .a=0x76, .x=0xa6, .y=0xe3, .sp=0x18, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00da, .value=0x16}, {.addr=0x4873, .value=0x64}, {.addr=0x4874, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x4875, .a=0x76, .x=0xa6, .y=0xe3, .sp=0x18, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00da, .value=0x16}, {.addr=0x4873, .value=0x64}, {.addr=0x4874, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x4873, .value=0x64, .type=IO_READ},
        {.addr=0x4874, .value=0xda, .type=IO_READ},
        {.addr=0x00da, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0094", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0095) {
    const struct CPU_State initial_cpu = {.pc=0x7dfe, .a=0xdf, .x=0xf8, .y=0xec, .sp=0x72, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0xee}, {.addr=0x7dfe, .value=0x64}, {.addr=0x7dff, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x7e00, .a=0xdf, .x=0xf8, .y=0xec, .sp=0x72, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0xee}, {.addr=0x7dfe, .value=0x64}, {.addr=0x7dff, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x7dfe, .value=0x64, .type=IO_READ},
        {.addr=0x7dff, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0095", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0096) {
    const struct CPU_State initial_cpu = {.pc=0x7d80, .a=0xf5, .x=0xd9, .y=0xba, .sp=0xca, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0x15}, {.addr=0x7d80, .value=0x64}, {.addr=0x7d81, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x7d82, .a=0xf5, .x=0xd9, .y=0xba, .sp=0xca, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0x15}, {.addr=0x7d80, .value=0x64}, {.addr=0x7d81, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d80, .value=0x64, .type=IO_READ},
        {.addr=0x7d81, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0096", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0097) {
    const struct CPU_State initial_cpu = {.pc=0xb09c, .a=0xbb, .x=0x8c, .y=0xb2, .sp=0xf6, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0033, .value=0xc5}, {.addr=0xb09c, .value=0x64}, {.addr=0xb09d, .value=0x33},
    };
    const struct CPU_State final_cpu = {.pc=0xb09e, .a=0xbb, .x=0x8c, .y=0xb2, .sp=0xf6, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0033, .value=0xc5}, {.addr=0xb09c, .value=0x64}, {.addr=0xb09d, .value=0x33},
    };
    const struct BusEvent events[] = {
        {.addr=0xb09c, .value=0x64, .type=IO_READ},
        {.addr=0xb09d, .value=0x33, .type=IO_READ},
        {.addr=0x0033, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0097", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0098) {
    const struct CPU_State initial_cpu = {.pc=0xeef0, .a=0x0b, .x=0xe9, .y=0x1d, .sp=0xde, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0x3d}, {.addr=0xeef0, .value=0x64}, {.addr=0xeef1, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0xeef2, .a=0x0b, .x=0xe9, .y=0x1d, .sp=0xde, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0x3d}, {.addr=0xeef0, .value=0x64}, {.addr=0xeef1, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0xeef0, .value=0x64, .type=IO_READ},
        {.addr=0xeef1, .value=0xa4, .type=IO_READ},
        {.addr=0x00a4, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0098", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0099) {
    const struct CPU_State initial_cpu = {.pc=0x6e78, .a=0x8b, .x=0x48, .y=0x80, .sp=0x07, .status=0x5e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004a, .value=0xe9}, {.addr=0x6e78, .value=0x64}, {.addr=0x6e79, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x6e7a, .a=0x8b, .x=0x48, .y=0x80, .sp=0x07, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x004a, .value=0xe9}, {.addr=0x6e78, .value=0x64}, {.addr=0x6e79, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e78, .value=0x64, .type=IO_READ},
        {.addr=0x6e79, .value=0x4a, .type=IO_READ},
        {.addr=0x004a, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0099", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_009A) {
    const struct CPU_State initial_cpu = {.pc=0x564d, .a=0x8d, .x=0x55, .y=0xe3, .sp=0x84, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0xcb}, {.addr=0x564d, .value=0x64}, {.addr=0x564e, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x564f, .a=0x8d, .x=0x55, .y=0xe3, .sp=0x84, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0xcb}, {.addr=0x564d, .value=0x64}, {.addr=0x564e, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x564d, .value=0x64, .type=IO_READ},
        {.addr=0x564e, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 009A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_009B) {
    const struct CPU_State initial_cpu = {.pc=0x69d9, .a=0x54, .x=0x3c, .y=0x0f, .sp=0x6f, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0x16}, {.addr=0x69d9, .value=0x64}, {.addr=0x69da, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0x69db, .a=0x54, .x=0x3c, .y=0x0f, .sp=0x6f, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0x16}, {.addr=0x69d9, .value=0x64}, {.addr=0x69da, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0x69d9, .value=0x64, .type=IO_READ},
        {.addr=0x69da, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 009B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_009C) {
    const struct CPU_State initial_cpu = {.pc=0x3c0e, .a=0x8b, .x=0x9d, .y=0x4a, .sp=0xd4, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0xf4}, {.addr=0x3c0e, .value=0x64}, {.addr=0x3c0f, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x3c10, .a=0x8b, .x=0x9d, .y=0x4a, .sp=0xd4, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0xf4}, {.addr=0x3c0e, .value=0x64}, {.addr=0x3c0f, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c0e, .value=0x64, .type=IO_READ},
        {.addr=0x3c0f, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 009C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_009D) {
    const struct CPU_State initial_cpu = {.pc=0xb67a, .a=0x80, .x=0x6d, .y=0x28, .sp=0x92, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0xd9}, {.addr=0xb67a, .value=0x64}, {.addr=0xb67b, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0xb67c, .a=0x80, .x=0x6d, .y=0x28, .sp=0x92, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0xd9}, {.addr=0xb67a, .value=0x64}, {.addr=0xb67b, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0xb67a, .value=0x64, .type=IO_READ},
        {.addr=0xb67b, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 009D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_009E) {
    const struct CPU_State initial_cpu = {.pc=0x37bd, .a=0x81, .x=0x51, .y=0x8c, .sp=0x51, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a6, .value=0x2a}, {.addr=0x37bd, .value=0x64}, {.addr=0x37be, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x37bf, .a=0x81, .x=0x51, .y=0x8c, .sp=0x51, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a6, .value=0x2a}, {.addr=0x37bd, .value=0x64}, {.addr=0x37be, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x37bd, .value=0x64, .type=IO_READ},
        {.addr=0x37be, .value=0xa6, .type=IO_READ},
        {.addr=0x01a6, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 009E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_009F) {
    const struct CPU_State initial_cpu = {.pc=0xd1f6, .a=0xfa, .x=0xc5, .y=0xbf, .sp=0x8d, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0x69}, {.addr=0xd1f6, .value=0x64}, {.addr=0xd1f7, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xd1f8, .a=0xfa, .x=0xc5, .y=0xbf, .sp=0x8d, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0x69}, {.addr=0xd1f6, .value=0x64}, {.addr=0xd1f7, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xd1f6, .value=0x64, .type=IO_READ},
        {.addr=0xd1f7, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 009F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00A0) {
    const struct CPU_State initial_cpu = {.pc=0x8fad, .a=0x83, .x=0x11, .y=0x23, .sp=0xce, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f6, .value=0xd1}, {.addr=0x8fad, .value=0x64}, {.addr=0x8fae, .value=0xf6},
    };
    const struct CPU_State final_cpu = {.pc=0x8faf, .a=0x83, .x=0x11, .y=0x23, .sp=0xce, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f6, .value=0xd1}, {.addr=0x8fad, .value=0x64}, {.addr=0x8fae, .value=0xf6},
    };
    const struct BusEvent events[] = {
        {.addr=0x8fad, .value=0x64, .type=IO_READ},
        {.addr=0x8fae, .value=0xf6, .type=IO_READ},
        {.addr=0x01f6, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00A1) {
    const struct CPU_State initial_cpu = {.pc=0x6ee2, .a=0x6b, .x=0x23, .y=0x8d, .sp=0x15, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cd, .value=0x0f}, {.addr=0x6ee2, .value=0x64}, {.addr=0x6ee3, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x6ee4, .a=0x6b, .x=0x23, .y=0x8d, .sp=0x15, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cd, .value=0x0f}, {.addr=0x6ee2, .value=0x64}, {.addr=0x6ee3, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ee2, .value=0x64, .type=IO_READ},
        {.addr=0x6ee3, .value=0xcd, .type=IO_READ},
        {.addr=0x00cd, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00A2) {
    const struct CPU_State initial_cpu = {.pc=0x788e, .a=0xde, .x=0x18, .y=0x5d, .sp=0xa4, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016a, .value=0xcc}, {.addr=0x788e, .value=0x64}, {.addr=0x788f, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0x7890, .a=0xde, .x=0x18, .y=0x5d, .sp=0xa4, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x016a, .value=0xcc}, {.addr=0x788e, .value=0x64}, {.addr=0x788f, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0x788e, .value=0x64, .type=IO_READ},
        {.addr=0x788f, .value=0x6a, .type=IO_READ},
        {.addr=0x016a, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00A3) {
    const struct CPU_State initial_cpu = {.pc=0x73ba, .a=0x23, .x=0x5f, .y=0xbf, .sp=0x2c, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0xe3}, {.addr=0x73ba, .value=0x64}, {.addr=0x73bb, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x73bc, .a=0x23, .x=0x5f, .y=0xbf, .sp=0x2c, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0xe3}, {.addr=0x73ba, .value=0x64}, {.addr=0x73bb, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x73ba, .value=0x64, .type=IO_READ},
        {.addr=0x73bb, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00A4) {
    const struct CPU_State initial_cpu = {.pc=0xe5c6, .a=0xc1, .x=0x1a, .y=0x86, .sp=0x28, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0136, .value=0xe4}, {.addr=0xe5c6, .value=0x64}, {.addr=0xe5c7, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0xe5c8, .a=0xc1, .x=0x1a, .y=0x86, .sp=0x28, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0136, .value=0xe4}, {.addr=0xe5c6, .value=0x64}, {.addr=0xe5c7, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0xe5c6, .value=0x64, .type=IO_READ},
        {.addr=0xe5c7, .value=0x36, .type=IO_READ},
        {.addr=0x0136, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00A5) {
    const struct CPU_State initial_cpu = {.pc=0x156a, .a=0x4f, .x=0xbd, .y=0x0a, .sp=0x20, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0x5d}, {.addr=0x156a, .value=0x64}, {.addr=0x156b, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x156c, .a=0x4f, .x=0xbd, .y=0x0a, .sp=0x20, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0x5d}, {.addr=0x156a, .value=0x64}, {.addr=0x156b, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x156a, .value=0x64, .type=IO_READ},
        {.addr=0x156b, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00A6) {
    const struct CPU_State initial_cpu = {.pc=0x39e4, .a=0xe8, .x=0xe6, .y=0x06, .sp=0x38, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a0, .value=0x0b}, {.addr=0x39e4, .value=0x64}, {.addr=0x39e5, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x39e6, .a=0xe8, .x=0xe6, .y=0x06, .sp=0x38, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a0, .value=0x0b}, {.addr=0x39e4, .value=0x64}, {.addr=0x39e5, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x39e4, .value=0x64, .type=IO_READ},
        {.addr=0x39e5, .value=0xa0, .type=IO_READ},
        {.addr=0x01a0, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00A7) {
    const struct CPU_State initial_cpu = {.pc=0xf635, .a=0xde, .x=0x4c, .y=0x71, .sp=0x0f, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0014, .value=0x7f}, {.addr=0xf635, .value=0x64}, {.addr=0xf636, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0xf637, .a=0xde, .x=0x4c, .y=0x71, .sp=0x0f, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0014, .value=0x7f}, {.addr=0xf635, .value=0x64}, {.addr=0xf636, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0xf635, .value=0x64, .type=IO_READ},
        {.addr=0xf636, .value=0x14, .type=IO_READ},
        {.addr=0x0014, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00A8) {
    const struct CPU_State initial_cpu = {.pc=0x2862, .a=0x09, .x=0x02, .y=0x7d, .sp=0x72, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0x42}, {.addr=0x2862, .value=0x64}, {.addr=0x2863, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x2864, .a=0x09, .x=0x02, .y=0x7d, .sp=0x72, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0x42}, {.addr=0x2862, .value=0x64}, {.addr=0x2863, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x2862, .value=0x64, .type=IO_READ},
        {.addr=0x2863, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00A9) {
    const struct CPU_State initial_cpu = {.pc=0x0b2f, .a=0x00, .x=0x95, .y=0x83, .sp=0x30, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0076, .value=0x3f}, {.addr=0x0b2f, .value=0x64}, {.addr=0x0b30, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x0b31, .a=0x00, .x=0x95, .y=0x83, .sp=0x30, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0076, .value=0x3f}, {.addr=0x0b2f, .value=0x64}, {.addr=0x0b30, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b2f, .value=0x64, .type=IO_READ},
        {.addr=0x0b30, .value=0x76, .type=IO_READ},
        {.addr=0x0076, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00AA) {
    const struct CPU_State initial_cpu = {.pc=0x95f2, .a=0x20, .x=0xb1, .y=0xd3, .sp=0x4f, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0xae}, {.addr=0x95f2, .value=0x64}, {.addr=0x95f3, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x95f4, .a=0x20, .x=0xb1, .y=0xd3, .sp=0x4f, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0xae}, {.addr=0x95f2, .value=0x64}, {.addr=0x95f3, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x95f2, .value=0x64, .type=IO_READ},
        {.addr=0x95f3, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00AB) {
    const struct CPU_State initial_cpu = {.pc=0x2796, .a=0x8f, .x=0x02, .y=0x25, .sp=0xbf, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018d, .value=0xd2}, {.addr=0x2796, .value=0x64}, {.addr=0x2797, .value=0x8d},
    };
    const struct CPU_State final_cpu = {.pc=0x2798, .a=0x8f, .x=0x02, .y=0x25, .sp=0xbf, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x018d, .value=0xd2}, {.addr=0x2796, .value=0x64}, {.addr=0x2797, .value=0x8d},
    };
    const struct BusEvent events[] = {
        {.addr=0x2796, .value=0x64, .type=IO_READ},
        {.addr=0x2797, .value=0x8d, .type=IO_READ},
        {.addr=0x018d, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00AC) {
    const struct CPU_State initial_cpu = {.pc=0x4546, .a=0xbd, .x=0xf1, .y=0xd8, .sp=0xb6, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f8, .value=0xd1}, {.addr=0x4546, .value=0x64}, {.addr=0x4547, .value=0xf8},
    };
    const struct CPU_State final_cpu = {.pc=0x4548, .a=0xbd, .x=0xf1, .y=0xd8, .sp=0xb6, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f8, .value=0xd1}, {.addr=0x4546, .value=0x64}, {.addr=0x4547, .value=0xf8},
    };
    const struct BusEvent events[] = {
        {.addr=0x4546, .value=0x64, .type=IO_READ},
        {.addr=0x4547, .value=0xf8, .type=IO_READ},
        {.addr=0x01f8, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00AD) {
    const struct CPU_State initial_cpu = {.pc=0x5f86, .a=0x2b, .x=0xfb, .y=0xb9, .sp=0x26, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0xa7}, {.addr=0x5f86, .value=0x64}, {.addr=0x5f87, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x5f88, .a=0x2b, .x=0xfb, .y=0xb9, .sp=0x26, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0xa7}, {.addr=0x5f86, .value=0x64}, {.addr=0x5f87, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f86, .value=0x64, .type=IO_READ},
        {.addr=0x5f87, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00AE) {
    const struct CPU_State initial_cpu = {.pc=0xefa3, .a=0xa6, .x=0x17, .y=0xf6, .sp=0x18, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0xcf}, {.addr=0xefa3, .value=0x64}, {.addr=0xefa4, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0xefa5, .a=0xa6, .x=0x17, .y=0xf6, .sp=0x18, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0xcf}, {.addr=0xefa3, .value=0x64}, {.addr=0xefa4, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0xefa3, .value=0x64, .type=IO_READ},
        {.addr=0xefa4, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00AF) {
    const struct CPU_State initial_cpu = {.pc=0x0f79, .a=0x90, .x=0x8a, .y=0xf7, .sp=0x8a, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d1, .value=0x6b}, {.addr=0x0f79, .value=0x64}, {.addr=0x0f7a, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x0f7b, .a=0x90, .x=0x8a, .y=0xf7, .sp=0x8a, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d1, .value=0x6b}, {.addr=0x0f79, .value=0x64}, {.addr=0x0f7a, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f79, .value=0x64, .type=IO_READ},
        {.addr=0x0f7a, .value=0xd1, .type=IO_READ},
        {.addr=0x00d1, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00B0) {
    const struct CPU_State initial_cpu = {.pc=0x3216, .a=0x08, .x=0x70, .y=0x9d, .sp=0x93, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0x4c}, {.addr=0x3216, .value=0x64}, {.addr=0x3217, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x3218, .a=0x08, .x=0x70, .y=0x9d, .sp=0x93, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0x4c}, {.addr=0x3216, .value=0x64}, {.addr=0x3217, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x3216, .value=0x64, .type=IO_READ},
        {.addr=0x3217, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00B1) {
    const struct CPU_State initial_cpu = {.pc=0x7092, .a=0x71, .x=0xc8, .y=0x33, .sp=0x37, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0147, .value=0x06}, {.addr=0x7092, .value=0x64}, {.addr=0x7093, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x7094, .a=0x71, .x=0xc8, .y=0x33, .sp=0x37, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0147, .value=0x06}, {.addr=0x7092, .value=0x64}, {.addr=0x7093, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x7092, .value=0x64, .type=IO_READ},
        {.addr=0x7093, .value=0x47, .type=IO_READ},
        {.addr=0x0147, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00B2) {
    const struct CPU_State initial_cpu = {.pc=0xa41f, .a=0x74, .x=0xc2, .y=0x25, .sp=0xe2, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0077, .value=0xab}, {.addr=0xa41f, .value=0x64}, {.addr=0xa420, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0xa421, .a=0x74, .x=0xc2, .y=0x25, .sp=0xe2, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0077, .value=0xab}, {.addr=0xa41f, .value=0x64}, {.addr=0xa420, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0xa41f, .value=0x64, .type=IO_READ},
        {.addr=0xa420, .value=0x77, .type=IO_READ},
        {.addr=0x0077, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00B3) {
    const struct CPU_State initial_cpu = {.pc=0xbac3, .a=0xd4, .x=0x89, .y=0xfc, .sp=0x06, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0x7a}, {.addr=0xbac3, .value=0x64}, {.addr=0xbac4, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0xbac5, .a=0xd4, .x=0x89, .y=0xfc, .sp=0x06, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0x7a}, {.addr=0xbac3, .value=0x64}, {.addr=0xbac4, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0xbac3, .value=0x64, .type=IO_READ},
        {.addr=0xbac4, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00B4) {
    const struct CPU_State initial_cpu = {.pc=0xdf14, .a=0x69, .x=0x1e, .y=0x71, .sp=0x2f, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0199, .value=0x01}, {.addr=0xdf14, .value=0x64}, {.addr=0xdf15, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0xdf16, .a=0x69, .x=0x1e, .y=0x71, .sp=0x2f, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0199, .value=0x01}, {.addr=0xdf14, .value=0x64}, {.addr=0xdf15, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf14, .value=0x64, .type=IO_READ},
        {.addr=0xdf15, .value=0x99, .type=IO_READ},
        {.addr=0x0199, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00B5) {
    const struct CPU_State initial_cpu = {.pc=0x9e15, .a=0x89, .x=0x8f, .y=0x23, .sp=0xc9, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0078, .value=0x6a}, {.addr=0x9e15, .value=0x64}, {.addr=0x9e16, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x9e17, .a=0x89, .x=0x8f, .y=0x23, .sp=0xc9, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0078, .value=0x6a}, {.addr=0x9e15, .value=0x64}, {.addr=0x9e16, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e15, .value=0x64, .type=IO_READ},
        {.addr=0x9e16, .value=0x78, .type=IO_READ},
        {.addr=0x0078, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00B6) {
    const struct CPU_State initial_cpu = {.pc=0xa9cc, .a=0xed, .x=0x62, .y=0x26, .sp=0x76, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0x1c}, {.addr=0xa9cc, .value=0x64}, {.addr=0xa9cd, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xa9ce, .a=0xed, .x=0x62, .y=0x26, .sp=0x76, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0x1c}, {.addr=0xa9cc, .value=0x64}, {.addr=0xa9cd, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9cc, .value=0x64, .type=IO_READ},
        {.addr=0xa9cd, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00B7) {
    const struct CPU_State initial_cpu = {.pc=0xb5d0, .a=0x0a, .x=0x24, .y=0x25, .sp=0x5f, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b1, .value=0x7d}, {.addr=0xb5d0, .value=0x64}, {.addr=0xb5d1, .value=0xb1},
    };
    const struct CPU_State final_cpu = {.pc=0xb5d2, .a=0x0a, .x=0x24, .y=0x25, .sp=0x5f, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b1, .value=0x7d}, {.addr=0xb5d0, .value=0x64}, {.addr=0xb5d1, .value=0xb1},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5d0, .value=0x64, .type=IO_READ},
        {.addr=0xb5d1, .value=0xb1, .type=IO_READ},
        {.addr=0x00b1, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00B8) {
    const struct CPU_State initial_cpu = {.pc=0xca08, .a=0xbf, .x=0x7f, .y=0x6b, .sp=0x3c, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0x05}, {.addr=0xca08, .value=0x64}, {.addr=0xca09, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xca0a, .a=0xbf, .x=0x7f, .y=0x6b, .sp=0x3c, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0x05}, {.addr=0xca08, .value=0x64}, {.addr=0xca09, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xca08, .value=0x64, .type=IO_READ},
        {.addr=0xca09, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00B9) {
    const struct CPU_State initial_cpu = {.pc=0x27ed, .a=0x28, .x=0x96, .y=0x81, .sp=0x67, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a8, .value=0x24}, {.addr=0x27ed, .value=0x64}, {.addr=0x27ee, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x27ef, .a=0x28, .x=0x96, .y=0x81, .sp=0x67, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a8, .value=0x24}, {.addr=0x27ed, .value=0x64}, {.addr=0x27ee, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x27ed, .value=0x64, .type=IO_READ},
        {.addr=0x27ee, .value=0xa8, .type=IO_READ},
        {.addr=0x01a8, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00BA) {
    const struct CPU_State initial_cpu = {.pc=0xd5fd, .a=0x13, .x=0x04, .y=0xdd, .sp=0x80, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0x73}, {.addr=0xd5fd, .value=0x64}, {.addr=0xd5fe, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0xd5ff, .a=0x13, .x=0x04, .y=0xdd, .sp=0x80, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0x73}, {.addr=0xd5fd, .value=0x64}, {.addr=0xd5fe, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0xd5fd, .value=0x64, .type=IO_READ},
        {.addr=0xd5fe, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00BB) {
    const struct CPU_State initial_cpu = {.pc=0xea57, .a=0xd2, .x=0xa8, .y=0x0c, .sp=0x1b, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0092, .value=0x3a}, {.addr=0xea57, .value=0x64}, {.addr=0xea58, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xea59, .a=0xd2, .x=0xa8, .y=0x0c, .sp=0x1b, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0092, .value=0x3a}, {.addr=0xea57, .value=0x64}, {.addr=0xea58, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xea57, .value=0x64, .type=IO_READ},
        {.addr=0xea58, .value=0x92, .type=IO_READ},
        {.addr=0x0092, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00BD) {
    const struct CPU_State initial_cpu = {.pc=0xcb9f, .a=0xc5, .x=0x2f, .y=0x1d, .sp=0x7f, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0175, .value=0x5c}, {.addr=0xcb9f, .value=0x64}, {.addr=0xcba0, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0xcba1, .a=0xc5, .x=0x2f, .y=0x1d, .sp=0x7f, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0175, .value=0x5c}, {.addr=0xcb9f, .value=0x64}, {.addr=0xcba0, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb9f, .value=0x64, .type=IO_READ},
        {.addr=0xcba0, .value=0x75, .type=IO_READ},
        {.addr=0x0175, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00BE) {
    const struct CPU_State initial_cpu = {.pc=0x4e99, .a=0x8e, .x=0xa6, .y=0x6e, .sp=0x1f, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001b, .value=0x7a}, {.addr=0x4e99, .value=0x64}, {.addr=0x4e9a, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x4e9b, .a=0x8e, .x=0xa6, .y=0x6e, .sp=0x1f, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x001b, .value=0x7a}, {.addr=0x4e99, .value=0x64}, {.addr=0x4e9a, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e99, .value=0x64, .type=IO_READ},
        {.addr=0x4e9a, .value=0x1b, .type=IO_READ},
        {.addr=0x001b, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00BF) {
    const struct CPU_State initial_cpu = {.pc=0x7619, .a=0xdd, .x=0xd8, .y=0xc0, .sp=0x49, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006f, .value=0x32}, {.addr=0x7619, .value=0x64}, {.addr=0x761a, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x761b, .a=0xdd, .x=0xd8, .y=0xc0, .sp=0x49, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x006f, .value=0x32}, {.addr=0x7619, .value=0x64}, {.addr=0x761a, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x7619, .value=0x64, .type=IO_READ},
        {.addr=0x761a, .value=0x6f, .type=IO_READ},
        {.addr=0x006f, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00C0) {
    const struct CPU_State initial_cpu = {.pc=0xfffe, .a=0xed, .x=0x75, .y=0xf8, .sp=0xd4, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0xe3}, {.addr=0xfffe, .value=0x64}, {.addr=0xffff, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x0000, .a=0xed, .x=0x75, .y=0xf8, .sp=0xd4, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0xe3}, {.addr=0xfffe, .value=0x64}, {.addr=0xffff, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0xfffe, .value=0x64, .type=IO_READ},
        {.addr=0xffff, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00C1) {
    const struct CPU_State initial_cpu = {.pc=0x7b53, .a=0xe1, .x=0x99, .y=0x4a, .sp=0xef, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0xb7}, {.addr=0x7b53, .value=0x64}, {.addr=0x7b54, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x7b55, .a=0xe1, .x=0x99, .y=0x4a, .sp=0xef, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0xb7}, {.addr=0x7b53, .value=0x64}, {.addr=0x7b54, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b53, .value=0x64, .type=IO_READ},
        {.addr=0x7b54, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00C2) {
    const struct CPU_State initial_cpu = {.pc=0x9750, .a=0x5d, .x=0x15, .y=0x44, .sp=0x71, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0xc1}, {.addr=0x9750, .value=0x64}, {.addr=0x9751, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x9752, .a=0x5d, .x=0x15, .y=0x44, .sp=0x71, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0xc1}, {.addr=0x9750, .value=0x64}, {.addr=0x9751, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x9750, .value=0x64, .type=IO_READ},
        {.addr=0x9751, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0xc1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00C3) {
    const struct CPU_State initial_cpu = {.pc=0xaa50, .a=0x5b, .x=0x0c, .y=0x85, .sp=0x5a, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0x2c}, {.addr=0xaa50, .value=0x64}, {.addr=0xaa51, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0xaa52, .a=0x5b, .x=0x0c, .y=0x85, .sp=0x5a, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0x2c}, {.addr=0xaa50, .value=0x64}, {.addr=0xaa51, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa50, .value=0x64, .type=IO_READ},
        {.addr=0xaa51, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00C4) {
    const struct CPU_State initial_cpu = {.pc=0x0caf, .a=0xbc, .x=0xae, .y=0xf8, .sp=0x20, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e7, .value=0x76}, {.addr=0x0caf, .value=0x64}, {.addr=0x0cb0, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x0cb1, .a=0xbc, .x=0xae, .y=0xf8, .sp=0x20, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e7, .value=0x76}, {.addr=0x0caf, .value=0x64}, {.addr=0x0cb0, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x0caf, .value=0x64, .type=IO_READ},
        {.addr=0x0cb0, .value=0xe7, .type=IO_READ},
        {.addr=0x00e7, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00C5) {
    const struct CPU_State initial_cpu = {.pc=0x8e42, .a=0xfc, .x=0x47, .y=0x39, .sp=0x96, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0x18}, {.addr=0x8e42, .value=0x64}, {.addr=0x8e43, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x8e44, .a=0xfc, .x=0x47, .y=0x39, .sp=0x96, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0x18}, {.addr=0x8e42, .value=0x64}, {.addr=0x8e43, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x8e42, .value=0x64, .type=IO_READ},
        {.addr=0x8e43, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00C7) {
    const struct CPU_State initial_cpu = {.pc=0xb119, .a=0xee, .x=0x22, .y=0xb3, .sp=0xc4, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cb, .value=0x29}, {.addr=0xb119, .value=0x64}, {.addr=0xb11a, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0xb11b, .a=0xee, .x=0x22, .y=0xb3, .sp=0xc4, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cb, .value=0x29}, {.addr=0xb119, .value=0x64}, {.addr=0xb11a, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0xb119, .value=0x64, .type=IO_READ},
        {.addr=0xb11a, .value=0xcb, .type=IO_READ},
        {.addr=0x00cb, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00C8) {
    const struct CPU_State initial_cpu = {.pc=0x4578, .a=0x08, .x=0xf3, .y=0x8a, .sp=0xe3, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0066, .value=0x43}, {.addr=0x4578, .value=0x64}, {.addr=0x4579, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x457a, .a=0x08, .x=0xf3, .y=0x8a, .sp=0xe3, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0066, .value=0x43}, {.addr=0x4578, .value=0x64}, {.addr=0x4579, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x4578, .value=0x64, .type=IO_READ},
        {.addr=0x4579, .value=0x66, .type=IO_READ},
        {.addr=0x0066, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00C9) {
    const struct CPU_State initial_cpu = {.pc=0x1608, .a=0xa7, .x=0xaa, .y=0x19, .sp=0xbc, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0x54}, {.addr=0x1608, .value=0x64}, {.addr=0x1609, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x160a, .a=0xa7, .x=0xaa, .y=0x19, .sp=0xbc, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0x54}, {.addr=0x1608, .value=0x64}, {.addr=0x1609, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x1608, .value=0x64, .type=IO_READ},
        {.addr=0x1609, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00CA) {
    const struct CPU_State initial_cpu = {.pc=0x3bdc, .a=0x94, .x=0x36, .y=0x6e, .sp=0xe7, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0xa5}, {.addr=0x3bdc, .value=0x64}, {.addr=0x3bdd, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x3bde, .a=0x94, .x=0x36, .y=0x6e, .sp=0xe7, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0xa5}, {.addr=0x3bdc, .value=0x64}, {.addr=0x3bdd, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x3bdc, .value=0x64, .type=IO_READ},
        {.addr=0x3bdd, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00CB) {
    const struct CPU_State initial_cpu = {.pc=0x7155, .a=0x6f, .x=0x52, .y=0x77, .sp=0xec, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01df, .value=0xb1}, {.addr=0x7155, .value=0x64}, {.addr=0x7156, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x7157, .a=0x6f, .x=0x52, .y=0x77, .sp=0xec, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01df, .value=0xb1}, {.addr=0x7155, .value=0x64}, {.addr=0x7156, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x7155, .value=0x64, .type=IO_READ},
        {.addr=0x7156, .value=0xdf, .type=IO_READ},
        {.addr=0x01df, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00CC) {
    const struct CPU_State initial_cpu = {.pc=0x3ca7, .a=0xe9, .x=0x8e, .y=0xd6, .sp=0xd8, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0x2f}, {.addr=0x3ca7, .value=0x64}, {.addr=0x3ca8, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x3ca9, .a=0xe9, .x=0x8e, .y=0xd6, .sp=0xd8, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0x2f}, {.addr=0x3ca7, .value=0x64}, {.addr=0x3ca8, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ca7, .value=0x64, .type=IO_READ},
        {.addr=0x3ca8, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00CD) {
    const struct CPU_State initial_cpu = {.pc=0x3e54, .a=0x44, .x=0x7c, .y=0x8f, .sp=0x60, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0xf4}, {.addr=0x3e54, .value=0x64}, {.addr=0x3e55, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x3e56, .a=0x44, .x=0x7c, .y=0x8f, .sp=0x60, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0xf4}, {.addr=0x3e54, .value=0x64}, {.addr=0x3e55, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e54, .value=0x64, .type=IO_READ},
        {.addr=0x3e55, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00CE) {
    const struct CPU_State initial_cpu = {.pc=0x823c, .a=0xbe, .x=0xaf, .y=0xdf, .sp=0xff, .status=0xc2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0xcc}, {.addr=0x823c, .value=0x64}, {.addr=0x823d, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x823e, .a=0xbe, .x=0xaf, .y=0xdf, .sp=0xff, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0xcc}, {.addr=0x823c, .value=0x64}, {.addr=0x823d, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x823c, .value=0x64, .type=IO_READ},
        {.addr=0x823d, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00CF) {
    const struct CPU_State initial_cpu = {.pc=0x30d7, .a=0x9b, .x=0xe2, .y=0x49, .sp=0x2e, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0x86}, {.addr=0x30d7, .value=0x64}, {.addr=0x30d8, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x30d9, .a=0x9b, .x=0xe2, .y=0x49, .sp=0x2e, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0x86}, {.addr=0x30d7, .value=0x64}, {.addr=0x30d8, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x30d7, .value=0x64, .type=IO_READ},
        {.addr=0x30d8, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00D0) {
    const struct CPU_State initial_cpu = {.pc=0x0053, .a=0x18, .x=0x8b, .y=0xb7, .sp=0x92, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0053, .value=0x64}, {.addr=0x0054, .value=0xba}, {.addr=0x00ba, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0x0055, .a=0x18, .x=0x8b, .y=0xb7, .sp=0x92, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0053, .value=0x64}, {.addr=0x0054, .value=0xba}, {.addr=0x00ba, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0x0053, .value=0x64, .type=IO_READ},
        {.addr=0x0054, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00D1) {
    const struct CPU_State initial_cpu = {.pc=0x8932, .a=0x8d, .x=0xd1, .y=0x24, .sp=0x80, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0012, .value=0x54}, {.addr=0x8932, .value=0x64}, {.addr=0x8933, .value=0x12},
    };
    const struct CPU_State final_cpu = {.pc=0x8934, .a=0x8d, .x=0xd1, .y=0x24, .sp=0x80, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0012, .value=0x54}, {.addr=0x8932, .value=0x64}, {.addr=0x8933, .value=0x12},
    };
    const struct BusEvent events[] = {
        {.addr=0x8932, .value=0x64, .type=IO_READ},
        {.addr=0x8933, .value=0x12, .type=IO_READ},
        {.addr=0x0012, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00D2) {
    const struct CPU_State initial_cpu = {.pc=0x5b1d, .a=0x9a, .x=0x8f, .y=0x6e, .sp=0x85, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0x0a}, {.addr=0x5b1d, .value=0x64}, {.addr=0x5b1e, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x5b1f, .a=0x9a, .x=0x8f, .y=0x6e, .sp=0x85, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0x0a}, {.addr=0x5b1d, .value=0x64}, {.addr=0x5b1e, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b1d, .value=0x64, .type=IO_READ},
        {.addr=0x5b1e, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00D3) {
    const struct CPU_State initial_cpu = {.pc=0x422a, .a=0xb3, .x=0xce, .y=0xf4, .sp=0x35, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0x62}, {.addr=0x422a, .value=0x64}, {.addr=0x422b, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x422c, .a=0xb3, .x=0xce, .y=0xf4, .sp=0x35, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0x62}, {.addr=0x422a, .value=0x64}, {.addr=0x422b, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x422a, .value=0x64, .type=IO_READ},
        {.addr=0x422b, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00D4) {
    const struct CPU_State initial_cpu = {.pc=0xd3bb, .a=0x02, .x=0xbf, .y=0x7c, .sp=0x6d, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0x4f}, {.addr=0xd3bb, .value=0x64}, {.addr=0xd3bc, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0xd3bd, .a=0x02, .x=0xbf, .y=0x7c, .sp=0x6d, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0x4f}, {.addr=0xd3bb, .value=0x64}, {.addr=0xd3bc, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0xd3bb, .value=0x64, .type=IO_READ},
        {.addr=0xd3bc, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00D5) {
    const struct CPU_State initial_cpu = {.pc=0xa273, .a=0x3f, .x=0xbf, .y=0xb0, .sp=0xba, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0xdb}, {.addr=0xa273, .value=0x64}, {.addr=0xa274, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0xa275, .a=0x3f, .x=0xbf, .y=0xb0, .sp=0xba, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0xdb}, {.addr=0xa273, .value=0x64}, {.addr=0xa274, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0xa273, .value=0x64, .type=IO_READ},
        {.addr=0xa274, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00D6) {
    const struct CPU_State initial_cpu = {.pc=0xbfef, .a=0x4c, .x=0x13, .y=0xa8, .sp=0x8d, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0xa5}, {.addr=0xbfef, .value=0x64}, {.addr=0xbff0, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0xbff1, .a=0x4c, .x=0x13, .y=0xa8, .sp=0x8d, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0xa5}, {.addr=0xbfef, .value=0x64}, {.addr=0xbff0, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0xbfef, .value=0x64, .type=IO_READ},
        {.addr=0xbff0, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00D7) {
    const struct CPU_State initial_cpu = {.pc=0x1dbe, .a=0xf5, .x=0xbd, .y=0xad, .sp=0xb6, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0098, .value=0x26}, {.addr=0x1dbe, .value=0x64}, {.addr=0x1dbf, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x1dc0, .a=0xf5, .x=0xbd, .y=0xad, .sp=0xb6, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0098, .value=0x26}, {.addr=0x1dbe, .value=0x64}, {.addr=0x1dbf, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x1dbe, .value=0x64, .type=IO_READ},
        {.addr=0x1dbf, .value=0x98, .type=IO_READ},
        {.addr=0x0098, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00D8) {
    const struct CPU_State initial_cpu = {.pc=0x58e5, .a=0x20, .x=0xc1, .y=0x49, .sp=0xa7, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0xf1}, {.addr=0x58e5, .value=0x64}, {.addr=0x58e6, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0x58e7, .a=0x20, .x=0xc1, .y=0x49, .sp=0xa7, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0xf1}, {.addr=0x58e5, .value=0x64}, {.addr=0x58e6, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0x58e5, .value=0x64, .type=IO_READ},
        {.addr=0x58e6, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00D9) {
    const struct CPU_State initial_cpu = {.pc=0x1938, .a=0x8d, .x=0x73, .y=0x2c, .sp=0x05, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0xb5}, {.addr=0x1938, .value=0x64}, {.addr=0x1939, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x193a, .a=0x8d, .x=0x73, .y=0x2c, .sp=0x05, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0xb5}, {.addr=0x1938, .value=0x64}, {.addr=0x1939, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x1938, .value=0x64, .type=IO_READ},
        {.addr=0x1939, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00DA) {
    const struct CPU_State initial_cpu = {.pc=0xeb7c, .a=0x62, .x=0xfc, .y=0x47, .sp=0xae, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0186, .value=0xea}, {.addr=0xeb7c, .value=0x64}, {.addr=0xeb7d, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0xeb7e, .a=0x62, .x=0xfc, .y=0x47, .sp=0xae, .status=0x30};
    const struct RamEntry final_ram[] = {
        {.addr=0x0186, .value=0xea}, {.addr=0xeb7c, .value=0x64}, {.addr=0xeb7d, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb7c, .value=0x64, .type=IO_READ},
        {.addr=0xeb7d, .value=0x86, .type=IO_READ},
        {.addr=0x0186, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00DB) {
    const struct CPU_State initial_cpu = {.pc=0x32f3, .a=0xf7, .x=0x50, .y=0xda, .sp=0x3a, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0147, .value=0x7f}, {.addr=0x32f3, .value=0x64}, {.addr=0x32f4, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x32f5, .a=0xf7, .x=0x50, .y=0xda, .sp=0x3a, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0147, .value=0x7f}, {.addr=0x32f3, .value=0x64}, {.addr=0x32f4, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x32f3, .value=0x64, .type=IO_READ},
        {.addr=0x32f4, .value=0x47, .type=IO_READ},
        {.addr=0x0147, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00DC) {
    const struct CPU_State initial_cpu = {.pc=0xd71c, .a=0x83, .x=0x40, .y=0x02, .sp=0x64, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b9, .value=0x11}, {.addr=0xd71c, .value=0x64}, {.addr=0xd71d, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0xd71e, .a=0x83, .x=0x40, .y=0x02, .sp=0x64, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b9, .value=0x11}, {.addr=0xd71c, .value=0x64}, {.addr=0xd71d, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0xd71c, .value=0x64, .type=IO_READ},
        {.addr=0xd71d, .value=0xb9, .type=IO_READ},
        {.addr=0x00b9, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00DD) {
    const struct CPU_State initial_cpu = {.pc=0x4424, .a=0xf0, .x=0xf8, .y=0x35, .sp=0x56, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0166, .value=0xac}, {.addr=0x4424, .value=0x64}, {.addr=0x4425, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0x4426, .a=0xf0, .x=0xf8, .y=0x35, .sp=0x56, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0166, .value=0xac}, {.addr=0x4424, .value=0x64}, {.addr=0x4425, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0x4424, .value=0x64, .type=IO_READ},
        {.addr=0x4425, .value=0x66, .type=IO_READ},
        {.addr=0x0166, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00DE) {
    const struct CPU_State initial_cpu = {.pc=0xd8bf, .a=0xa5, .x=0x37, .y=0xb6, .sp=0x78, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0139, .value=0x54}, {.addr=0xd8bf, .value=0x64}, {.addr=0xd8c0, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0xd8c1, .a=0xa5, .x=0x37, .y=0xb6, .sp=0x78, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0139, .value=0x54}, {.addr=0xd8bf, .value=0x64}, {.addr=0xd8c0, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0xd8bf, .value=0x64, .type=IO_READ},
        {.addr=0xd8c0, .value=0x39, .type=IO_READ},
        {.addr=0x0139, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00DF) {
    const struct CPU_State initial_cpu = {.pc=0xf1b6, .a=0xb9, .x=0xd9, .y=0x4b, .sp=0xa9, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00da, .value=0xb2}, {.addr=0xf1b6, .value=0x64}, {.addr=0xf1b7, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0xf1b8, .a=0xb9, .x=0xd9, .y=0x4b, .sp=0xa9, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00da, .value=0xb2}, {.addr=0xf1b6, .value=0x64}, {.addr=0xf1b7, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0xf1b6, .value=0x64, .type=IO_READ},
        {.addr=0xf1b7, .value=0xda, .type=IO_READ},
        {.addr=0x00da, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00E0) {
    const struct CPU_State initial_cpu = {.pc=0x3778, .a=0x09, .x=0x23, .y=0xb2, .sp=0xf5, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0x01}, {.addr=0x3778, .value=0x64}, {.addr=0x3779, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x377a, .a=0x09, .x=0x23, .y=0xb2, .sp=0xf5, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0x01}, {.addr=0x3778, .value=0x64}, {.addr=0x3779, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x3778, .value=0x64, .type=IO_READ},
        {.addr=0x3779, .value=0x36, .type=IO_READ},
        {.addr=0x0036, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00E1) {
    const struct CPU_State initial_cpu = {.pc=0x5712, .a=0x51, .x=0x36, .y=0xf2, .sp=0x6c, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0xae}, {.addr=0x5712, .value=0x64}, {.addr=0x5713, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x5714, .a=0x51, .x=0x36, .y=0xf2, .sp=0x6c, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0xae}, {.addr=0x5712, .value=0x64}, {.addr=0x5713, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x5712, .value=0x64, .type=IO_READ},
        {.addr=0x5713, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00E2) {
    const struct CPU_State initial_cpu = {.pc=0x2019, .a=0xb9, .x=0x6d, .y=0x96, .sp=0x28, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ac, .value=0x95}, {.addr=0x2019, .value=0x64}, {.addr=0x201a, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x201b, .a=0xb9, .x=0x6d, .y=0x96, .sp=0x28, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ac, .value=0x95}, {.addr=0x2019, .value=0x64}, {.addr=0x201a, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x2019, .value=0x64, .type=IO_READ},
        {.addr=0x201a, .value=0xac, .type=IO_READ},
        {.addr=0x00ac, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00E3) {
    const struct CPU_State initial_cpu = {.pc=0x3e0d, .a=0xdd, .x=0x6d, .y=0xd9, .sp=0x68, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00de, .value=0xb7}, {.addr=0x3e0d, .value=0x64}, {.addr=0x3e0e, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0x3e0f, .a=0xdd, .x=0x6d, .y=0xd9, .sp=0x68, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00de, .value=0xb7}, {.addr=0x3e0d, .value=0x64}, {.addr=0x3e0e, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e0d, .value=0x64, .type=IO_READ},
        {.addr=0x3e0e, .value=0xde, .type=IO_READ},
        {.addr=0x00de, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00E4) {
    const struct CPU_State initial_cpu = {.pc=0x4b90, .a=0x32, .x=0x9f, .y=0xe1, .sp=0xb6, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0x53}, {.addr=0x4b90, .value=0x64}, {.addr=0x4b91, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x4b92, .a=0x32, .x=0x9f, .y=0xe1, .sp=0xb6, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0x53}, {.addr=0x4b90, .value=0x64}, {.addr=0x4b91, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b90, .value=0x64, .type=IO_READ},
        {.addr=0x4b91, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00E5) {
    const struct CPU_State initial_cpu = {.pc=0x348e, .a=0x3b, .x=0x44, .y=0x9c, .sp=0x66, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003f, .value=0x5e}, {.addr=0x348e, .value=0x64}, {.addr=0x348f, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x3490, .a=0x3b, .x=0x44, .y=0x9c, .sp=0x66, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x003f, .value=0x5e}, {.addr=0x348e, .value=0x64}, {.addr=0x348f, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x348e, .value=0x64, .type=IO_READ},
        {.addr=0x348f, .value=0x3f, .type=IO_READ},
        {.addr=0x003f, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00E6) {
    const struct CPU_State initial_cpu = {.pc=0xf661, .a=0xa6, .x=0x4f, .y=0xf4, .sp=0x60, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0x74}, {.addr=0xf661, .value=0x64}, {.addr=0xf662, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0xf663, .a=0xa6, .x=0x4f, .y=0xf4, .sp=0x60, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0x74}, {.addr=0xf661, .value=0x64}, {.addr=0xf662, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0xf661, .value=0x64, .type=IO_READ},
        {.addr=0xf662, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00E7) {
    const struct CPU_State initial_cpu = {.pc=0xb900, .a=0xa2, .x=0x42, .y=0x94, .sp=0x13, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a5, .value=0x9d}, {.addr=0xb900, .value=0x64}, {.addr=0xb901, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0xb902, .a=0xa2, .x=0x42, .y=0x94, .sp=0x13, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a5, .value=0x9d}, {.addr=0xb900, .value=0x64}, {.addr=0xb901, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0xb900, .value=0x64, .type=IO_READ},
        {.addr=0xb901, .value=0xa5, .type=IO_READ},
        {.addr=0x01a5, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00E8) {
    const struct CPU_State initial_cpu = {.pc=0x87dd, .a=0x9c, .x=0xb3, .y=0x9f, .sp=0x71, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0xdf}, {.addr=0x87dd, .value=0x64}, {.addr=0x87de, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x87df, .a=0x9c, .x=0xb3, .y=0x9f, .sp=0x71, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0xdf}, {.addr=0x87dd, .value=0x64}, {.addr=0x87de, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x87dd, .value=0x64, .type=IO_READ},
        {.addr=0x87de, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00E9) {
    const struct CPU_State initial_cpu = {.pc=0xa49f, .a=0xff, .x=0x0a, .y=0x92, .sp=0x1c, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000e, .value=0xaa}, {.addr=0xa49f, .value=0x64}, {.addr=0xa4a0, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xa4a1, .a=0xff, .x=0x0a, .y=0x92, .sp=0x1c, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000e, .value=0xaa}, {.addr=0xa49f, .value=0x64}, {.addr=0xa4a0, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa49f, .value=0x64, .type=IO_READ},
        {.addr=0xa4a0, .value=0x0e, .type=IO_READ},
        {.addr=0x000e, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00EA) {
    const struct CPU_State initial_cpu = {.pc=0x86c7, .a=0x24, .x=0x3a, .y=0x69, .sp=0xc8, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0x5d}, {.addr=0x86c7, .value=0x64}, {.addr=0x86c8, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x86c9, .a=0x24, .x=0x3a, .y=0x69, .sp=0xc8, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0x5d}, {.addr=0x86c7, .value=0x64}, {.addr=0x86c8, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x86c7, .value=0x64, .type=IO_READ},
        {.addr=0x86c8, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00EB) {
    const struct CPU_State initial_cpu = {.pc=0xf27d, .a=0x8f, .x=0x66, .y=0x61, .sp=0x27, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0x45}, {.addr=0xf27d, .value=0x64}, {.addr=0xf27e, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0xf27f, .a=0x8f, .x=0x66, .y=0x61, .sp=0x27, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0x45}, {.addr=0xf27d, .value=0x64}, {.addr=0xf27e, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0xf27d, .value=0x64, .type=IO_READ},
        {.addr=0xf27e, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00EC) {
    const struct CPU_State initial_cpu = {.pc=0xc8db, .a=0x5f, .x=0x67, .y=0x95, .sp=0x5a, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0xf2}, {.addr=0xc8db, .value=0x64}, {.addr=0xc8dc, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0xc8dd, .a=0x5f, .x=0x67, .y=0x95, .sp=0x5a, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0xf2}, {.addr=0xc8db, .value=0x64}, {.addr=0xc8dc, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0xc8db, .value=0x64, .type=IO_READ},
        {.addr=0xc8dc, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0xf2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00ED) {
    const struct CPU_State initial_cpu = {.pc=0xa21f, .a=0xfa, .x=0xb7, .y=0x5b, .sp=0xa8, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0075, .value=0x3c}, {.addr=0xa21f, .value=0x64}, {.addr=0xa220, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0xa221, .a=0xfa, .x=0xb7, .y=0x5b, .sp=0xa8, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x0075, .value=0x3c}, {.addr=0xa21f, .value=0x64}, {.addr=0xa220, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0xa21f, .value=0x64, .type=IO_READ},
        {.addr=0xa220, .value=0x75, .type=IO_READ},
        {.addr=0x0075, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00EF) {
    const struct CPU_State initial_cpu = {.pc=0xccc3, .a=0x63, .x=0x4d, .y=0x3a, .sp=0xd3, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0088, .value=0x4d}, {.addr=0xccc3, .value=0x64}, {.addr=0xccc4, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0xccc5, .a=0x63, .x=0x4d, .y=0x3a, .sp=0xd3, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0088, .value=0x4d}, {.addr=0xccc3, .value=0x64}, {.addr=0xccc4, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0xccc3, .value=0x64, .type=IO_READ},
        {.addr=0xccc4, .value=0x88, .type=IO_READ},
        {.addr=0x0088, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00F0) {
    const struct CPU_State initial_cpu = {.pc=0x03ed, .a=0x66, .x=0x8e, .y=0xd3, .sp=0x55, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019b, .value=0x37}, {.addr=0x03ed, .value=0x64}, {.addr=0x03ee, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x03ef, .a=0x66, .x=0x8e, .y=0xd3, .sp=0x55, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x019b, .value=0x37}, {.addr=0x03ed, .value=0x64}, {.addr=0x03ee, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x03ed, .value=0x64, .type=IO_READ},
        {.addr=0x03ee, .value=0x9b, .type=IO_READ},
        {.addr=0x019b, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00F1) {
    const struct CPU_State initial_cpu = {.pc=0x75b0, .a=0x50, .x=0x8f, .y=0x90, .sp=0x5e, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0x77}, {.addr=0x75b0, .value=0x64}, {.addr=0x75b1, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x75b2, .a=0x50, .x=0x8f, .y=0x90, .sp=0x5e, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0x77}, {.addr=0x75b0, .value=0x64}, {.addr=0x75b1, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x75b0, .value=0x64, .type=IO_READ},
        {.addr=0x75b1, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00F2) {
    const struct CPU_State initial_cpu = {.pc=0xdd49, .a=0x37, .x=0xfb, .y=0x95, .sp=0x71, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0x23}, {.addr=0xdd49, .value=0x64}, {.addr=0xdd4a, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0xdd4b, .a=0x37, .x=0xfb, .y=0x95, .sp=0x71, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0x23}, {.addr=0xdd49, .value=0x64}, {.addr=0xdd4a, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd49, .value=0x64, .type=IO_READ},
        {.addr=0xdd4a, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00F3) {
    const struct CPU_State initial_cpu = {.pc=0xbed0, .a=0x1b, .x=0x92, .y=0xe5, .sp=0x18, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006c, .value=0x03}, {.addr=0xbed0, .value=0x64}, {.addr=0xbed1, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0xbed2, .a=0x1b, .x=0x92, .y=0xe5, .sp=0x18, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x006c, .value=0x03}, {.addr=0xbed0, .value=0x64}, {.addr=0xbed1, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0xbed0, .value=0x64, .type=IO_READ},
        {.addr=0xbed1, .value=0x6c, .type=IO_READ},
        {.addr=0x006c, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00F4) {
    const struct CPU_State initial_cpu = {.pc=0xb78b, .a=0x66, .x=0x2f, .y=0x8d, .sp=0x7c, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0x9c}, {.addr=0xb78b, .value=0x64}, {.addr=0xb78c, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0xb78d, .a=0x66, .x=0x2f, .y=0x8d, .sp=0x7c, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0x9c}, {.addr=0xb78b, .value=0x64}, {.addr=0xb78c, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0xb78b, .value=0x64, .type=IO_READ},
        {.addr=0xb78c, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00F5) {
    const struct CPU_State initial_cpu = {.pc=0x2a96, .a=0x55, .x=0x37, .y=0x28, .sp=0x45, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003a, .value=0x66}, {.addr=0x2a96, .value=0x64}, {.addr=0x2a97, .value=0x3a},
    };
    const struct CPU_State final_cpu = {.pc=0x2a98, .a=0x55, .x=0x37, .y=0x28, .sp=0x45, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x003a, .value=0x66}, {.addr=0x2a96, .value=0x64}, {.addr=0x2a97, .value=0x3a},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a96, .value=0x64, .type=IO_READ},
        {.addr=0x2a97, .value=0x3a, .type=IO_READ},
        {.addr=0x003a, .value=0x66, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00F6) {
    const struct CPU_State initial_cpu = {.pc=0x0f94, .a=0xd8, .x=0xef, .y=0x05, .sp=0xc0, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0xa4}, {.addr=0x0f94, .value=0x64}, {.addr=0x0f95, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x0f96, .a=0xd8, .x=0xef, .y=0x05, .sp=0xc0, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0xa4}, {.addr=0x0f94, .value=0x64}, {.addr=0x0f95, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f94, .value=0x64, .type=IO_READ},
        {.addr=0x0f95, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00F7) {
    const struct CPU_State initial_cpu = {.pc=0xcc68, .a=0x7d, .x=0x46, .y=0x8a, .sp=0x2c, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006b, .value=0x35}, {.addr=0xcc68, .value=0x64}, {.addr=0xcc69, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0xcc6a, .a=0x7d, .x=0x46, .y=0x8a, .sp=0x2c, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x006b, .value=0x35}, {.addr=0xcc68, .value=0x64}, {.addr=0xcc69, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0xcc68, .value=0x64, .type=IO_READ},
        {.addr=0xcc69, .value=0x6b, .type=IO_READ},
        {.addr=0x006b, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00F8) {
    const struct CPU_State initial_cpu = {.pc=0xf293, .a=0xe1, .x=0x52, .y=0xff, .sp=0x27, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0x2e}, {.addr=0xf293, .value=0x64}, {.addr=0xf294, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0xf295, .a=0xe1, .x=0x52, .y=0xff, .sp=0x27, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0x2e}, {.addr=0xf293, .value=0x64}, {.addr=0xf294, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0xf293, .value=0x64, .type=IO_READ},
        {.addr=0xf294, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00F9) {
    const struct CPU_State initial_cpu = {.pc=0x4232, .a=0xbb, .x=0xa3, .y=0x5f, .sp=0x93, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b8, .value=0x36}, {.addr=0x4232, .value=0x64}, {.addr=0x4233, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0x4234, .a=0xbb, .x=0xa3, .y=0x5f, .sp=0x93, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b8, .value=0x36}, {.addr=0x4232, .value=0x64}, {.addr=0x4233, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0x4232, .value=0x64, .type=IO_READ},
        {.addr=0x4233, .value=0xb8, .type=IO_READ},
        {.addr=0x01b8, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00FA) {
    const struct CPU_State initial_cpu = {.pc=0x7f55, .a=0xe5, .x=0xb7, .y=0xc1, .sp=0xc3, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0107, .value=0x5c}, {.addr=0x7f55, .value=0x64}, {.addr=0x7f56, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x7f57, .a=0xe5, .x=0xb7, .y=0xc1, .sp=0xc3, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0107, .value=0x5c}, {.addr=0x7f55, .value=0x64}, {.addr=0x7f56, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f55, .value=0x64, .type=IO_READ},
        {.addr=0x7f56, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00FB) {
    const struct CPU_State initial_cpu = {.pc=0x8c58, .a=0xfb, .x=0x99, .y=0x88, .sp=0x52, .status=0x92};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0xc4}, {.addr=0x8c58, .value=0x64}, {.addr=0x8c59, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0x8c5a, .a=0xfb, .x=0x99, .y=0x88, .sp=0x52, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0xc4}, {.addr=0x8c58, .value=0x64}, {.addr=0x8c59, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c58, .value=0x64, .type=IO_READ},
        {.addr=0x8c59, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00FC) {
    const struct CPU_State initial_cpu = {.pc=0x64f5, .a=0xb1, .x=0x5a, .y=0x58, .sp=0x36, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0025, .value=0xc8}, {.addr=0x64f5, .value=0x64}, {.addr=0x64f6, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0x64f7, .a=0xb1, .x=0x5a, .y=0x58, .sp=0x36, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0025, .value=0xc8}, {.addr=0x64f5, .value=0x64}, {.addr=0x64f6, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0x64f5, .value=0x64, .type=IO_READ},
        {.addr=0x64f6, .value=0x25, .type=IO_READ},
        {.addr=0x0025, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00FD) {
    const struct CPU_State initial_cpu = {.pc=0xa9f0, .a=0xa3, .x=0x9c, .y=0x61, .sp=0x00, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b2, .value=0x23}, {.addr=0xa9f0, .value=0x64}, {.addr=0xa9f1, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0xa9f2, .a=0xa3, .x=0x9c, .y=0x61, .sp=0x00, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b2, .value=0x23}, {.addr=0xa9f0, .value=0x64}, {.addr=0xa9f1, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9f0, .value=0x64, .type=IO_READ},
        {.addr=0xa9f1, .value=0xb2, .type=IO_READ},
        {.addr=0x00b2, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00FE) {
    const struct CPU_State initial_cpu = {.pc=0x6223, .a=0xe6, .x=0x94, .y=0xfd, .sp=0x1d, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c6, .value=0x9a}, {.addr=0x6223, .value=0x64}, {.addr=0x6224, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x6225, .a=0xe6, .x=0x94, .y=0xfd, .sp=0x1d, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c6, .value=0x9a}, {.addr=0x6223, .value=0x64}, {.addr=0x6224, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x6223, .value=0x64, .type=IO_READ},
        {.addr=0x6224, .value=0xc6, .type=IO_READ},
        {.addr=0x00c6, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_00FF) {
    const struct CPU_State initial_cpu = {.pc=0x3a5c, .a=0x8e, .x=0xc3, .y=0x92, .sp=0xe8, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e6, .value=0x2e}, {.addr=0x3a5c, .value=0x64}, {.addr=0x3a5d, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0x3a5e, .a=0x8e, .x=0xc3, .y=0x92, .sp=0xe8, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e6, .value=0x2e}, {.addr=0x3a5c, .value=0x64}, {.addr=0x3a5d, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a5c, .value=0x64, .type=IO_READ},
        {.addr=0x3a5d, .value=0xe6, .type=IO_READ},
        {.addr=0x01e6, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 00FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0100) {
    const struct CPU_State initial_cpu = {.pc=0x3ec9, .a=0x59, .x=0xef, .y=0x91, .sp=0x41, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0030, .value=0x3d}, {.addr=0x3ec9, .value=0x64}, {.addr=0x3eca, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x3ecb, .a=0x59, .x=0xef, .y=0x91, .sp=0x41, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0030, .value=0x3d}, {.addr=0x3ec9, .value=0x64}, {.addr=0x3eca, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ec9, .value=0x64, .type=IO_READ},
        {.addr=0x3eca, .value=0x30, .type=IO_READ},
        {.addr=0x0030, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0100", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0101) {
    const struct CPU_State initial_cpu = {.pc=0xba2e, .a=0x96, .x=0x02, .y=0xc7, .sp=0x4b, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0x6e}, {.addr=0xba2e, .value=0x64}, {.addr=0xba2f, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0xba30, .a=0x96, .x=0x02, .y=0xc7, .sp=0x4b, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0x6e}, {.addr=0xba2e, .value=0x64}, {.addr=0xba2f, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0xba2e, .value=0x64, .type=IO_READ},
        {.addr=0xba2f, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0101", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0102) {
    const struct CPU_State initial_cpu = {.pc=0xb6dd, .a=0xc0, .x=0xdf, .y=0xaa, .sp=0x3f, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0x70}, {.addr=0xb6dd, .value=0x64}, {.addr=0xb6de, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xb6df, .a=0xc0, .x=0xdf, .y=0xaa, .sp=0x3f, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0x70}, {.addr=0xb6dd, .value=0x64}, {.addr=0xb6de, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xb6dd, .value=0x64, .type=IO_READ},
        {.addr=0xb6de, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0102", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0103) {
    const struct CPU_State initial_cpu = {.pc=0x21ed, .a=0xae, .x=0xe8, .y=0x9a, .sp=0xe5, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0xb2}, {.addr=0x21ed, .value=0x64}, {.addr=0x21ee, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x21ef, .a=0xae, .x=0xe8, .y=0x9a, .sp=0xe5, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0xb2}, {.addr=0x21ed, .value=0x64}, {.addr=0x21ee, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x21ed, .value=0x64, .type=IO_READ},
        {.addr=0x21ee, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0103", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0104) {
    const struct CPU_State initial_cpu = {.pc=0x35ee, .a=0x51, .x=0xa7, .y=0x8f, .sp=0x52, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f1, .value=0x0d}, {.addr=0x35ee, .value=0x64}, {.addr=0x35ef, .value=0xf1},
    };
    const struct CPU_State final_cpu = {.pc=0x35f0, .a=0x51, .x=0xa7, .y=0x8f, .sp=0x52, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f1, .value=0x0d}, {.addr=0x35ee, .value=0x64}, {.addr=0x35ef, .value=0xf1},
    };
    const struct BusEvent events[] = {
        {.addr=0x35ee, .value=0x64, .type=IO_READ},
        {.addr=0x35ef, .value=0xf1, .type=IO_READ},
        {.addr=0x01f1, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0104", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0105) {
    const struct CPU_State initial_cpu = {.pc=0x22a0, .a=0x6c, .x=0x3f, .y=0x28, .sp=0xbc, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0x3f}, {.addr=0x22a0, .value=0x64}, {.addr=0x22a1, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x22a2, .a=0x6c, .x=0x3f, .y=0x28, .sp=0xbc, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0x3f}, {.addr=0x22a0, .value=0x64}, {.addr=0x22a1, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x22a0, .value=0x64, .type=IO_READ},
        {.addr=0x22a1, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0105", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0106) {
    const struct CPU_State initial_cpu = {.pc=0xec7b, .a=0xec, .x=0x92, .y=0x32, .sp=0x7d, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0x7c}, {.addr=0xec7b, .value=0x64}, {.addr=0xec7c, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0xec7d, .a=0xec, .x=0x92, .y=0x32, .sp=0x7d, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0x7c}, {.addr=0xec7b, .value=0x64}, {.addr=0xec7c, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0xec7b, .value=0x64, .type=IO_READ},
        {.addr=0xec7c, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0106", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0107) {
    const struct CPU_State initial_cpu = {.pc=0x3871, .a=0xd5, .x=0xea, .y=0xf0, .sp=0xc6, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0151, .value=0x0a}, {.addr=0x3871, .value=0x64}, {.addr=0x3872, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0x3873, .a=0xd5, .x=0xea, .y=0xf0, .sp=0xc6, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x0151, .value=0x0a}, {.addr=0x3871, .value=0x64}, {.addr=0x3872, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0x3871, .value=0x64, .type=IO_READ},
        {.addr=0x3872, .value=0x51, .type=IO_READ},
        {.addr=0x0151, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0107", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0108) {
    const struct CPU_State initial_cpu = {.pc=0xbfc3, .a=0x6d, .x=0xcc, .y=0x44, .sp=0x6a, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0064, .value=0x85}, {.addr=0xbfc3, .value=0x64}, {.addr=0xbfc4, .value=0x64},
    };
    const struct CPU_State final_cpu = {.pc=0xbfc5, .a=0x6d, .x=0xcc, .y=0x44, .sp=0x6a, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0064, .value=0x85}, {.addr=0xbfc3, .value=0x64}, {.addr=0xbfc4, .value=0x64},
    };
    const struct BusEvent events[] = {
        {.addr=0xbfc3, .value=0x64, .type=IO_READ},
        {.addr=0xbfc4, .value=0x64, .type=IO_READ},
        {.addr=0x0064, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0108", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0109) {
    const struct CPU_State initial_cpu = {.pc=0x9233, .a=0xb4, .x=0x11, .y=0x0e, .sp=0x76, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0xcd}, {.addr=0x9233, .value=0x64}, {.addr=0x9234, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0x9235, .a=0xb4, .x=0x11, .y=0x0e, .sp=0x76, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0xcd}, {.addr=0x9233, .value=0x64}, {.addr=0x9234, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0x9233, .value=0x64, .type=IO_READ},
        {.addr=0x9234, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0109", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_010A) {
    const struct CPU_State initial_cpu = {.pc=0xb7d1, .a=0xfb, .x=0x38, .y=0xc9, .sp=0x76, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0041, .value=0x0a}, {.addr=0xb7d1, .value=0x64}, {.addr=0xb7d2, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xb7d3, .a=0xfb, .x=0x38, .y=0xc9, .sp=0x76, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0041, .value=0x0a}, {.addr=0xb7d1, .value=0x64}, {.addr=0xb7d2, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xb7d1, .value=0x64, .type=IO_READ},
        {.addr=0xb7d2, .value=0x41, .type=IO_READ},
        {.addr=0x0041, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 010A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_010B) {
    const struct CPU_State initial_cpu = {.pc=0x31db, .a=0x1d, .x=0xe7, .y=0x91, .sp=0xbe, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0x11}, {.addr=0x31db, .value=0x64}, {.addr=0x31dc, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x31dd, .a=0x1d, .x=0xe7, .y=0x91, .sp=0xbe, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0x11}, {.addr=0x31db, .value=0x64}, {.addr=0x31dc, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x31db, .value=0x64, .type=IO_READ},
        {.addr=0x31dc, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 010B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_010C) {
    const struct CPU_State initial_cpu = {.pc=0x8017, .a=0xab, .x=0x64, .y=0xa9, .sp=0x3f, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0x0a}, {.addr=0x8017, .value=0x64}, {.addr=0x8018, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x8019, .a=0xab, .x=0x64, .y=0xa9, .sp=0x3f, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0x0a}, {.addr=0x8017, .value=0x64}, {.addr=0x8018, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x8017, .value=0x64, .type=IO_READ},
        {.addr=0x8018, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 010C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_010D) {
    const struct CPU_State initial_cpu = {.pc=0xcdcd, .a=0x8b, .x=0x1c, .y=0x64, .sp=0x0c, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0x2c}, {.addr=0xcdcd, .value=0x64}, {.addr=0xcdce, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0xcdcf, .a=0x8b, .x=0x1c, .y=0x64, .sp=0x0c, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0x2c}, {.addr=0xcdcd, .value=0x64}, {.addr=0xcdce, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0xcdcd, .value=0x64, .type=IO_READ},
        {.addr=0xcdce, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 010D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_010E) {
    const struct CPU_State initial_cpu = {.pc=0xde68, .a=0xd7, .x=0x30, .y=0x4f, .sp=0x04, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0x03}, {.addr=0xde68, .value=0x64}, {.addr=0xde69, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0xde6a, .a=0xd7, .x=0x30, .y=0x4f, .sp=0x04, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0x03}, {.addr=0xde68, .value=0x64}, {.addr=0xde69, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0xde68, .value=0x64, .type=IO_READ},
        {.addr=0xde69, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 010E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_010F) {
    const struct CPU_State initial_cpu = {.pc=0x45fb, .a=0x94, .x=0x38, .y=0xf5, .sp=0x3f, .status=0xaf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018c, .value=0x30}, {.addr=0x45fb, .value=0x64}, {.addr=0x45fc, .value=0x8c},
    };
    const struct CPU_State final_cpu = {.pc=0x45fd, .a=0x94, .x=0x38, .y=0xf5, .sp=0x3f, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x018c, .value=0x30}, {.addr=0x45fb, .value=0x64}, {.addr=0x45fc, .value=0x8c},
    };
    const struct BusEvent events[] = {
        {.addr=0x45fb, .value=0x64, .type=IO_READ},
        {.addr=0x45fc, .value=0x8c, .type=IO_READ},
        {.addr=0x018c, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 010F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0110) {
    const struct CPU_State initial_cpu = {.pc=0x2d6f, .a=0x24, .x=0x7b, .y=0x41, .sp=0xc2, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010d, .value=0x9f}, {.addr=0x2d6f, .value=0x64}, {.addr=0x2d70, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x2d71, .a=0x24, .x=0x7b, .y=0x41, .sp=0xc2, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x010d, .value=0x9f}, {.addr=0x2d6f, .value=0x64}, {.addr=0x2d70, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x2d6f, .value=0x64, .type=IO_READ},
        {.addr=0x2d70, .value=0x0d, .type=IO_READ},
        {.addr=0x010d, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0110", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0111) {
    const struct CPU_State initial_cpu = {.pc=0x8c57, .a=0x85, .x=0x6d, .y=0x58, .sp=0x46, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0114, .value=0x7f}, {.addr=0x8c57, .value=0x64}, {.addr=0x8c58, .value=0x14},
    };
    const struct CPU_State final_cpu = {.pc=0x8c59, .a=0x85, .x=0x6d, .y=0x58, .sp=0x46, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0114, .value=0x7f}, {.addr=0x8c57, .value=0x64}, {.addr=0x8c58, .value=0x14},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c57, .value=0x64, .type=IO_READ},
        {.addr=0x8c58, .value=0x14, .type=IO_READ},
        {.addr=0x0114, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0111", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0112) {
    const struct CPU_State initial_cpu = {.pc=0xf354, .a=0x37, .x=0x3a, .y=0xc4, .sp=0x57, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0x74}, {.addr=0xf354, .value=0x64}, {.addr=0xf355, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0xf356, .a=0x37, .x=0x3a, .y=0xc4, .sp=0x57, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0x74}, {.addr=0xf354, .value=0x64}, {.addr=0xf355, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0xf354, .value=0x64, .type=IO_READ},
        {.addr=0xf355, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0112", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0113) {
    const struct CPU_State initial_cpu = {.pc=0xd59f, .a=0x79, .x=0x94, .y=0xe8, .sp=0x59, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0x0b}, {.addr=0xd59f, .value=0x64}, {.addr=0xd5a0, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xd5a1, .a=0x79, .x=0x94, .y=0xe8, .sp=0x59, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0x0b}, {.addr=0xd59f, .value=0x64}, {.addr=0xd5a0, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xd59f, .value=0x64, .type=IO_READ},
        {.addr=0xd5a0, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0113", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0114) {
    const struct CPU_State initial_cpu = {.pc=0x9fcf, .a=0xaf, .x=0xb3, .y=0xdb, .sp=0xbb, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00af, .value=0x10}, {.addr=0x9fcf, .value=0x64}, {.addr=0x9fd0, .value=0xaf},
    };
    const struct CPU_State final_cpu = {.pc=0x9fd1, .a=0xaf, .x=0xb3, .y=0xdb, .sp=0xbb, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00af, .value=0x10}, {.addr=0x9fcf, .value=0x64}, {.addr=0x9fd0, .value=0xaf},
    };
    const struct BusEvent events[] = {
        {.addr=0x9fcf, .value=0x64, .type=IO_READ},
        {.addr=0x9fd0, .value=0xaf, .type=IO_READ},
        {.addr=0x00af, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0114", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0115) {
    const struct CPU_State initial_cpu = {.pc=0x59a7, .a=0xc6, .x=0x2d, .y=0x32, .sp=0x1a, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e5, .value=0x30}, {.addr=0x59a7, .value=0x64}, {.addr=0x59a8, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x59a9, .a=0xc6, .x=0x2d, .y=0x32, .sp=0x1a, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e5, .value=0x30}, {.addr=0x59a7, .value=0x64}, {.addr=0x59a8, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x59a7, .value=0x64, .type=IO_READ},
        {.addr=0x59a8, .value=0xe5, .type=IO_READ},
        {.addr=0x00e5, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0115", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0116) {
    const struct CPU_State initial_cpu = {.pc=0x415d, .a=0x27, .x=0x6f, .y=0x11, .sp=0x49, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0089, .value=0x50}, {.addr=0x415d, .value=0x64}, {.addr=0x415e, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x415f, .a=0x27, .x=0x6f, .y=0x11, .sp=0x49, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0089, .value=0x50}, {.addr=0x415d, .value=0x64}, {.addr=0x415e, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x415d, .value=0x64, .type=IO_READ},
        {.addr=0x415e, .value=0x89, .type=IO_READ},
        {.addr=0x0089, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0116", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0117) {
    const struct CPU_State initial_cpu = {.pc=0x83b1, .a=0x92, .x=0x3b, .y=0xbd, .sp=0xaa, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x41}, {.addr=0x83b1, .value=0x64}, {.addr=0x83b2, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0x83b3, .a=0x92, .x=0x3b, .y=0xbd, .sp=0xaa, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x41}, {.addr=0x83b1, .value=0x64}, {.addr=0x83b2, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0x83b1, .value=0x64, .type=IO_READ},
        {.addr=0x83b2, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0117", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0118) {
    const struct CPU_State initial_cpu = {.pc=0x81da, .a=0x6d, .x=0xb5, .y=0xd9, .sp=0x73, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0xd0}, {.addr=0x81da, .value=0x64}, {.addr=0x81db, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x81dc, .a=0x6d, .x=0xb5, .y=0xd9, .sp=0x73, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0xd0}, {.addr=0x81da, .value=0x64}, {.addr=0x81db, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x81da, .value=0x64, .type=IO_READ},
        {.addr=0x81db, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0118", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0119) {
    const struct CPU_State initial_cpu = {.pc=0xb516, .a=0xad, .x=0x5b, .y=0xa0, .sp=0x79, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003b, .value=0xae}, {.addr=0xb516, .value=0x64}, {.addr=0xb517, .value=0x3b},
    };
    const struct CPU_State final_cpu = {.pc=0xb518, .a=0xad, .x=0x5b, .y=0xa0, .sp=0x79, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x003b, .value=0xae}, {.addr=0xb516, .value=0x64}, {.addr=0xb517, .value=0x3b},
    };
    const struct BusEvent events[] = {
        {.addr=0xb516, .value=0x64, .type=IO_READ},
        {.addr=0xb517, .value=0x3b, .type=IO_READ},
        {.addr=0x003b, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0119", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_011A) {
    const struct CPU_State initial_cpu = {.pc=0xefba, .a=0x6c, .x=0x03, .y=0x13, .sp=0xce, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0xd7}, {.addr=0xefba, .value=0x64}, {.addr=0xefbb, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0xefbc, .a=0x6c, .x=0x03, .y=0x13, .sp=0xce, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0xd7}, {.addr=0xefba, .value=0x64}, {.addr=0xefbb, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0xefba, .value=0x64, .type=IO_READ},
        {.addr=0xefbb, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 011A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_011B) {
    const struct CPU_State initial_cpu = {.pc=0x033c, .a=0x4a, .x=0x35, .y=0x92, .sp=0x31, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0196, .value=0xdf}, {.addr=0x033c, .value=0x64}, {.addr=0x033d, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x033e, .a=0x4a, .x=0x35, .y=0x92, .sp=0x31, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0196, .value=0xdf}, {.addr=0x033c, .value=0x64}, {.addr=0x033d, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x033c, .value=0x64, .type=IO_READ},
        {.addr=0x033d, .value=0x96, .type=IO_READ},
        {.addr=0x0196, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 011B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_011C) {
    const struct CPU_State initial_cpu = {.pc=0x8b23, .a=0x31, .x=0xd7, .y=0xbf, .sp=0x54, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00eb, .value=0x21}, {.addr=0x8b23, .value=0x64}, {.addr=0x8b24, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x8b25, .a=0x31, .x=0xd7, .y=0xbf, .sp=0x54, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00eb, .value=0x21}, {.addr=0x8b23, .value=0x64}, {.addr=0x8b24, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b23, .value=0x64, .type=IO_READ},
        {.addr=0x8b24, .value=0xeb, .type=IO_READ},
        {.addr=0x00eb, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 011C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_011D) {
    const struct CPU_State initial_cpu = {.pc=0xd9a2, .a=0x7e, .x=0x40, .y=0x18, .sp=0x3d, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0x05}, {.addr=0xd9a2, .value=0x64}, {.addr=0xd9a3, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0xd9a4, .a=0x7e, .x=0x40, .y=0x18, .sp=0x3d, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0x05}, {.addr=0xd9a2, .value=0x64}, {.addr=0xd9a3, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0xd9a2, .value=0x64, .type=IO_READ},
        {.addr=0xd9a3, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 011D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_011E) {
    const struct CPU_State initial_cpu = {.pc=0xeb2a, .a=0x85, .x=0xb4, .y=0xeb, .sp=0x91, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0xb2}, {.addr=0xeb2a, .value=0x64}, {.addr=0xeb2b, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xeb2c, .a=0x85, .x=0xb4, .y=0xeb, .sp=0x91, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0xb2}, {.addr=0xeb2a, .value=0x64}, {.addr=0xeb2b, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xeb2a, .value=0x64, .type=IO_READ},
        {.addr=0xeb2b, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 011E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_011F) {
    const struct CPU_State initial_cpu = {.pc=0x64a3, .a=0x78, .x=0x45, .y=0x03, .sp=0x8a, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0x9e}, {.addr=0x64a3, .value=0x64}, {.addr=0x64a4, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0x64a5, .a=0x78, .x=0x45, .y=0x03, .sp=0x8a, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0x9e}, {.addr=0x64a3, .value=0x64}, {.addr=0x64a4, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0x64a3, .value=0x64, .type=IO_READ},
        {.addr=0x64a4, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 011F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0120) {
    const struct CPU_State initial_cpu = {.pc=0x4890, .a=0xb2, .x=0x62, .y=0x0a, .sp=0x68, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0077, .value=0x82}, {.addr=0x4890, .value=0x64}, {.addr=0x4891, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x4892, .a=0xb2, .x=0x62, .y=0x0a, .sp=0x68, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0077, .value=0x82}, {.addr=0x4890, .value=0x64}, {.addr=0x4891, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x4890, .value=0x64, .type=IO_READ},
        {.addr=0x4891, .value=0x77, .type=IO_READ},
        {.addr=0x0077, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0120", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0121) {
    const struct CPU_State initial_cpu = {.pc=0x68ee, .a=0x6d, .x=0xdf, .y=0x92, .sp=0xa9, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0x9f}, {.addr=0x68ee, .value=0x64}, {.addr=0x68ef, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x68f0, .a=0x6d, .x=0xdf, .y=0x92, .sp=0xa9, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0x9f}, {.addr=0x68ee, .value=0x64}, {.addr=0x68ef, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x68ee, .value=0x64, .type=IO_READ},
        {.addr=0x68ef, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0121", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0122) {
    const struct CPU_State initial_cpu = {.pc=0x92aa, .a=0x42, .x=0xdf, .y=0x01, .sp=0xa3, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0x4f}, {.addr=0x92aa, .value=0x64}, {.addr=0x92ab, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x92ac, .a=0x42, .x=0xdf, .y=0x01, .sp=0xa3, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0x4f}, {.addr=0x92aa, .value=0x64}, {.addr=0x92ab, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x92aa, .value=0x64, .type=IO_READ},
        {.addr=0x92ab, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0122", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0123) {
    const struct CPU_State initial_cpu = {.pc=0x302d, .a=0xd0, .x=0x1c, .y=0x40, .sp=0xa0, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b9, .value=0xcf}, {.addr=0x302d, .value=0x64}, {.addr=0x302e, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x302f, .a=0xd0, .x=0x1c, .y=0x40, .sp=0xa0, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b9, .value=0xcf}, {.addr=0x302d, .value=0x64}, {.addr=0x302e, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x302d, .value=0x64, .type=IO_READ},
        {.addr=0x302e, .value=0xb9, .type=IO_READ},
        {.addr=0x00b9, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0123", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0124) {
    const struct CPU_State initial_cpu = {.pc=0xebfa, .a=0xba, .x=0xb7, .y=0x3e, .sp=0xa4, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0089, .value=0x52}, {.addr=0xebfa, .value=0x64}, {.addr=0xebfb, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0xebfc, .a=0xba, .x=0xb7, .y=0x3e, .sp=0xa4, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0089, .value=0x52}, {.addr=0xebfa, .value=0x64}, {.addr=0xebfb, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0xebfa, .value=0x64, .type=IO_READ},
        {.addr=0xebfb, .value=0x89, .type=IO_READ},
        {.addr=0x0089, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0124", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0125) {
    const struct CPU_State initial_cpu = {.pc=0x504a, .a=0x72, .x=0xbc, .y=0xce, .sp=0x4d, .status=0x05};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0074, .value=0x53}, {.addr=0x504a, .value=0x64}, {.addr=0x504b, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x504c, .a=0x72, .x=0xbc, .y=0xce, .sp=0x4d, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0074, .value=0x53}, {.addr=0x504a, .value=0x64}, {.addr=0x504b, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x504a, .value=0x64, .type=IO_READ},
        {.addr=0x504b, .value=0x74, .type=IO_READ},
        {.addr=0x0074, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0125", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0126) {
    const struct CPU_State initial_cpu = {.pc=0x9ea9, .a=0x23, .x=0xc6, .y=0x11, .sp=0x84, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0020, .value=0xae}, {.addr=0x9ea9, .value=0x64}, {.addr=0x9eaa, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x9eab, .a=0x23, .x=0xc6, .y=0x11, .sp=0x84, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0020, .value=0xae}, {.addr=0x9ea9, .value=0x64}, {.addr=0x9eaa, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x9ea9, .value=0x64, .type=IO_READ},
        {.addr=0x9eaa, .value=0x20, .type=IO_READ},
        {.addr=0x0020, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0126", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0127) {
    const struct CPU_State initial_cpu = {.pc=0x3a81, .a=0x0e, .x=0xfe, .y=0x1c, .sp=0xc6, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d4, .value=0xbd}, {.addr=0x3a81, .value=0x64}, {.addr=0x3a82, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0x3a83, .a=0x0e, .x=0xfe, .y=0x1c, .sp=0xc6, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d4, .value=0xbd}, {.addr=0x3a81, .value=0x64}, {.addr=0x3a82, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a81, .value=0x64, .type=IO_READ},
        {.addr=0x3a82, .value=0xd4, .type=IO_READ},
        {.addr=0x00d4, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0127", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0128) {
    const struct CPU_State initial_cpu = {.pc=0xb2cc, .a=0x3e, .x=0xf9, .y=0x20, .sp=0x84, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013f, .value=0xdd}, {.addr=0xb2cc, .value=0x64}, {.addr=0xb2cd, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0xb2ce, .a=0x3e, .x=0xf9, .y=0x20, .sp=0x84, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x013f, .value=0xdd}, {.addr=0xb2cc, .value=0x64}, {.addr=0xb2cd, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0xb2cc, .value=0x64, .type=IO_READ},
        {.addr=0xb2cd, .value=0x3f, .type=IO_READ},
        {.addr=0x013f, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0128", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0129) {
    const struct CPU_State initial_cpu = {.pc=0x621b, .a=0xa1, .x=0xc7, .y=0x9a, .sp=0x49, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0xc0}, {.addr=0x621b, .value=0x64}, {.addr=0x621c, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x621d, .a=0xa1, .x=0xc7, .y=0x9a, .sp=0x49, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0xc0}, {.addr=0x621b, .value=0x64}, {.addr=0x621c, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x621b, .value=0x64, .type=IO_READ},
        {.addr=0x621c, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0129", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_012A) {
    const struct CPU_State initial_cpu = {.pc=0x01e8, .a=0x96, .x=0x05, .y=0xa7, .sp=0x9c, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0xb9}, {.addr=0x01e8, .value=0x64}, {.addr=0x01e9, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x01ea, .a=0x96, .x=0x05, .y=0xa7, .sp=0x9c, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0xb9}, {.addr=0x01e8, .value=0x64}, {.addr=0x01e9, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x01e8, .value=0x64, .type=IO_READ},
        {.addr=0x01e9, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 012A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_012B) {
    const struct CPU_State initial_cpu = {.pc=0x007b, .a=0x63, .x=0x53, .y=0x7a, .sp=0xef, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0xe1}, {.addr=0x007b, .value=0x64}, {.addr=0x007c, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x007d, .a=0x63, .x=0x53, .y=0x7a, .sp=0xef, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0xe1}, {.addr=0x007b, .value=0x64}, {.addr=0x007c, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x007b, .value=0x64, .type=IO_READ},
        {.addr=0x007c, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 012B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_012C) {
    const struct CPU_State initial_cpu = {.pc=0x83ab, .a=0x65, .x=0xf8, .y=0x6f, .sp=0x44, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009b, .value=0xe9}, {.addr=0x83ab, .value=0x64}, {.addr=0x83ac, .value=0x9b},
    };
    const struct CPU_State final_cpu = {.pc=0x83ad, .a=0x65, .x=0xf8, .y=0x6f, .sp=0x44, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x009b, .value=0xe9}, {.addr=0x83ab, .value=0x64}, {.addr=0x83ac, .value=0x9b},
    };
    const struct BusEvent events[] = {
        {.addr=0x83ab, .value=0x64, .type=IO_READ},
        {.addr=0x83ac, .value=0x9b, .type=IO_READ},
        {.addr=0x009b, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 012C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_012D) {
    const struct CPU_State initial_cpu = {.pc=0x87b4, .a=0x5d, .x=0xa9, .y=0x3d, .sp=0x3a, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0013, .value=0x54}, {.addr=0x87b4, .value=0x64}, {.addr=0x87b5, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0x87b6, .a=0x5d, .x=0xa9, .y=0x3d, .sp=0x3a, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0013, .value=0x54}, {.addr=0x87b4, .value=0x64}, {.addr=0x87b5, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0x87b4, .value=0x64, .type=IO_READ},
        {.addr=0x87b5, .value=0x13, .type=IO_READ},
        {.addr=0x0013, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 012D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_012E) {
    const struct CPU_State initial_cpu = {.pc=0xa765, .a=0x55, .x=0x4e, .y=0x5e, .sp=0x13, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0103, .value=0xb5}, {.addr=0xa765, .value=0x64}, {.addr=0xa766, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0xa767, .a=0x55, .x=0x4e, .y=0x5e, .sp=0x13, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0103, .value=0xb5}, {.addr=0xa765, .value=0x64}, {.addr=0xa766, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0xa765, .value=0x64, .type=IO_READ},
        {.addr=0xa766, .value=0x03, .type=IO_READ},
        {.addr=0x0103, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 012E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_012F) {
    const struct CPU_State initial_cpu = {.pc=0xe44d, .a=0x55, .x=0xb4, .y=0x43, .sp=0x31, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0104, .value=0x90}, {.addr=0xe44d, .value=0x64}, {.addr=0xe44e, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0xe44f, .a=0x55, .x=0xb4, .y=0x43, .sp=0x31, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0104, .value=0x90}, {.addr=0xe44d, .value=0x64}, {.addr=0xe44e, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0xe44d, .value=0x64, .type=IO_READ},
        {.addr=0xe44e, .value=0x04, .type=IO_READ},
        {.addr=0x0104, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 012F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0130) {
    const struct CPU_State initial_cpu = {.pc=0xd3ed, .a=0x2f, .x=0x2c, .y=0xb9, .sp=0xb6, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c8, .value=0x90}, {.addr=0xd3ed, .value=0x64}, {.addr=0xd3ee, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0xd3ef, .a=0x2f, .x=0x2c, .y=0xb9, .sp=0xb6, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c8, .value=0x90}, {.addr=0xd3ed, .value=0x64}, {.addr=0xd3ee, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0xd3ed, .value=0x64, .type=IO_READ},
        {.addr=0xd3ee, .value=0xc8, .type=IO_READ},
        {.addr=0x01c8, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0130", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0131) {
    const struct CPU_State initial_cpu = {.pc=0xe0e4, .a=0xa9, .x=0x06, .y=0x24, .sp=0xe1, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0x45}, {.addr=0xe0e4, .value=0x64}, {.addr=0xe0e5, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0xe0e6, .a=0xa9, .x=0x06, .y=0x24, .sp=0xe1, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0x45}, {.addr=0xe0e4, .value=0x64}, {.addr=0xe0e5, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0xe0e4, .value=0x64, .type=IO_READ},
        {.addr=0xe0e5, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0131", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0132) {
    const struct CPU_State initial_cpu = {.pc=0x5ebb, .a=0xce, .x=0xc4, .y=0xc2, .sp=0xbd, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013c, .value=0x71}, {.addr=0x5ebb, .value=0x64}, {.addr=0x5ebc, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x5ebd, .a=0xce, .x=0xc4, .y=0xc2, .sp=0xbd, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x013c, .value=0x71}, {.addr=0x5ebb, .value=0x64}, {.addr=0x5ebc, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ebb, .value=0x64, .type=IO_READ},
        {.addr=0x5ebc, .value=0x3c, .type=IO_READ},
        {.addr=0x013c, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0132", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0133) {
    const struct CPU_State initial_cpu = {.pc=0x68f9, .a=0xcf, .x=0xaa, .y=0xbe, .sp=0x71, .status=0xc8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0x75}, {.addr=0x68f9, .value=0x64}, {.addr=0x68fa, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x68fb, .a=0xcf, .x=0xaa, .y=0xbe, .sp=0x71, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0x75}, {.addr=0x68f9, .value=0x64}, {.addr=0x68fa, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x68f9, .value=0x64, .type=IO_READ},
        {.addr=0x68fa, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0133", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0134) {
    const struct CPU_State initial_cpu = {.pc=0x558b, .a=0xa4, .x=0x7a, .y=0x81, .sp=0x78, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0x11}, {.addr=0x558b, .value=0x64}, {.addr=0x558c, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x558d, .a=0xa4, .x=0x7a, .y=0x81, .sp=0x78, .status=0xb1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0x11}, {.addr=0x558b, .value=0x64}, {.addr=0x558c, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x558b, .value=0x64, .type=IO_READ},
        {.addr=0x558c, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0134", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0136) {
    const struct CPU_State initial_cpu = {.pc=0x3adc, .a=0x1d, .x=0x7b, .y=0x3b, .sp=0xb1, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a9, .value=0x15}, {.addr=0x3adc, .value=0x64}, {.addr=0x3add, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x3ade, .a=0x1d, .x=0x7b, .y=0x3b, .sp=0xb1, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a9, .value=0x15}, {.addr=0x3adc, .value=0x64}, {.addr=0x3add, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x3adc, .value=0x64, .type=IO_READ},
        {.addr=0x3add, .value=0xa9, .type=IO_READ},
        {.addr=0x01a9, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0136", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0137) {
    const struct CPU_State initial_cpu = {.pc=0x75a1, .a=0x62, .x=0x18, .y=0x5b, .sp=0x63, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0xe9}, {.addr=0x75a1, .value=0x64}, {.addr=0x75a2, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x75a3, .a=0x62, .x=0x18, .y=0x5b, .sp=0x63, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0xe9}, {.addr=0x75a1, .value=0x64}, {.addr=0x75a2, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x75a1, .value=0x64, .type=IO_READ},
        {.addr=0x75a2, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0137", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0138) {
    const struct CPU_State initial_cpu = {.pc=0x54dd, .a=0x76, .x=0x2b, .y=0xcc, .sp=0xee, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010f, .value=0xb7}, {.addr=0x54dd, .value=0x64}, {.addr=0x54de, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x54df, .a=0x76, .x=0x2b, .y=0xcc, .sp=0xee, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x010f, .value=0xb7}, {.addr=0x54dd, .value=0x64}, {.addr=0x54de, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x54dd, .value=0x64, .type=IO_READ},
        {.addr=0x54de, .value=0x0f, .type=IO_READ},
        {.addr=0x010f, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0138", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0139) {
    const struct CPU_State initial_cpu = {.pc=0xcbaf, .a=0x00, .x=0x2a, .y=0xd0, .sp=0xcb, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0x83}, {.addr=0xcbaf, .value=0x64}, {.addr=0xcbb0, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0xcbb1, .a=0x00, .x=0x2a, .y=0xd0, .sp=0xcb, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0x83}, {.addr=0xcbaf, .value=0x64}, {.addr=0xcbb0, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0xcbaf, .value=0x64, .type=IO_READ},
        {.addr=0xcbb0, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0139", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_013A) {
    const struct CPU_State initial_cpu = {.pc=0xacb2, .a=0x07, .x=0x88, .y=0x31, .sp=0xca, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0xc5}, {.addr=0xacb2, .value=0x64}, {.addr=0xacb3, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0xacb4, .a=0x07, .x=0x88, .y=0x31, .sp=0xca, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0xc5}, {.addr=0xacb2, .value=0x64}, {.addr=0xacb3, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0xacb2, .value=0x64, .type=IO_READ},
        {.addr=0xacb3, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 013A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_013B) {
    const struct CPU_State initial_cpu = {.pc=0xdb6e, .a=0x51, .x=0x5e, .y=0x64, .sp=0x70, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0xbe}, {.addr=0xdb6e, .value=0x64}, {.addr=0xdb6f, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0xdb70, .a=0x51, .x=0x5e, .y=0x64, .sp=0x70, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0xbe}, {.addr=0xdb6e, .value=0x64}, {.addr=0xdb6f, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb6e, .value=0x64, .type=IO_READ},
        {.addr=0xdb6f, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 013B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_013C) {
    const struct CPU_State initial_cpu = {.pc=0x0e6f, .a=0x56, .x=0x60, .y=0x0a, .sp=0xe7, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0011, .value=0xb6}, {.addr=0x0e6f, .value=0x64}, {.addr=0x0e70, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0x0e71, .a=0x56, .x=0x60, .y=0x0a, .sp=0xe7, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0011, .value=0xb6}, {.addr=0x0e6f, .value=0x64}, {.addr=0x0e70, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0x0e6f, .value=0x64, .type=IO_READ},
        {.addr=0x0e70, .value=0x11, .type=IO_READ},
        {.addr=0x0011, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 013C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_013D) {
    const struct CPU_State initial_cpu = {.pc=0xf9ac, .a=0x7a, .x=0x76, .y=0x00, .sp=0x35, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0091, .value=0x48}, {.addr=0xf9ac, .value=0x64}, {.addr=0xf9ad, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0xf9ae, .a=0x7a, .x=0x76, .y=0x00, .sp=0x35, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0091, .value=0x48}, {.addr=0xf9ac, .value=0x64}, {.addr=0xf9ad, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0xf9ac, .value=0x64, .type=IO_READ},
        {.addr=0xf9ad, .value=0x91, .type=IO_READ},
        {.addr=0x0091, .value=0x48, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 013D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_013E) {
    const struct CPU_State initial_cpu = {.pc=0xc709, .a=0x4f, .x=0x62, .y=0xc4, .sp=0xa8, .status=0x78};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0x00}, {.addr=0xc709, .value=0x64}, {.addr=0xc70a, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0xc70b, .a=0x4f, .x=0x62, .y=0xc4, .sp=0xa8, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0x00}, {.addr=0xc709, .value=0x64}, {.addr=0xc70a, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc709, .value=0x64, .type=IO_READ},
        {.addr=0xc70a, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 013E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_013F) {
    const struct CPU_State initial_cpu = {.pc=0x6617, .a=0xe4, .x=0x59, .y=0x03, .sp=0x5a, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0039, .value=0x19}, {.addr=0x6617, .value=0x64}, {.addr=0x6618, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0x6619, .a=0xe4, .x=0x59, .y=0x03, .sp=0x5a, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0039, .value=0x19}, {.addr=0x6617, .value=0x64}, {.addr=0x6618, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0x6617, .value=0x64, .type=IO_READ},
        {.addr=0x6618, .value=0x39, .type=IO_READ},
        {.addr=0x0039, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 013F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0140) {
    const struct CPU_State initial_cpu = {.pc=0x0b32, .a=0x98, .x=0xab, .y=0x05, .sp=0x74, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0xa5}, {.addr=0x0b32, .value=0x64}, {.addr=0x0b33, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x0b34, .a=0x98, .x=0xab, .y=0x05, .sp=0x74, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0xa5}, {.addr=0x0b32, .value=0x64}, {.addr=0x0b33, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b32, .value=0x64, .type=IO_READ},
        {.addr=0x0b33, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0140", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0141) {
    const struct CPU_State initial_cpu = {.pc=0xc672, .a=0xdf, .x=0xf2, .y=0x2b, .sp=0xba, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002b, .value=0xdc}, {.addr=0xc672, .value=0x64}, {.addr=0xc673, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0xc674, .a=0xdf, .x=0xf2, .y=0x2b, .sp=0xba, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x002b, .value=0xdc}, {.addr=0xc672, .value=0x64}, {.addr=0xc673, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc672, .value=0x64, .type=IO_READ},
        {.addr=0xc673, .value=0x2b, .type=IO_READ},
        {.addr=0x002b, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0141", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0142) {
    const struct CPU_State initial_cpu = {.pc=0xdf39, .a=0x9c, .x=0x04, .y=0x87, .sp=0x88, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0x43}, {.addr=0xdf39, .value=0x64}, {.addr=0xdf3a, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0xdf3b, .a=0x9c, .x=0x04, .y=0x87, .sp=0x88, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0x43}, {.addr=0xdf39, .value=0x64}, {.addr=0xdf3a, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf39, .value=0x64, .type=IO_READ},
        {.addr=0xdf3a, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0142", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0143) {
    const struct CPU_State initial_cpu = {.pc=0x4441, .a=0x95, .x=0x92, .y=0xc2, .sp=0xba, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0xe4}, {.addr=0x4441, .value=0x64}, {.addr=0x4442, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x4443, .a=0x95, .x=0x92, .y=0xc2, .sp=0xba, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0xe4}, {.addr=0x4441, .value=0x64}, {.addr=0x4442, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x4441, .value=0x64, .type=IO_READ},
        {.addr=0x4442, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0143", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0147) {
    const struct CPU_State initial_cpu = {.pc=0x5eb3, .a=0xc8, .x=0xa5, .y=0x15, .sp=0x29, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0x00}, {.addr=0x5eb3, .value=0x64}, {.addr=0x5eb4, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x5eb5, .a=0xc8, .x=0xa5, .y=0x15, .sp=0x29, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0x00}, {.addr=0x5eb3, .value=0x64}, {.addr=0x5eb4, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x5eb3, .value=0x64, .type=IO_READ},
        {.addr=0x5eb4, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0147", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0148) {
    const struct CPU_State initial_cpu = {.pc=0xf61f, .a=0xa5, .x=0x6d, .y=0x91, .sp=0x3c, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0xda}, {.addr=0xf61f, .value=0x64}, {.addr=0xf620, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0xf621, .a=0xa5, .x=0x6d, .y=0x91, .sp=0x3c, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0xda}, {.addr=0xf61f, .value=0x64}, {.addr=0xf620, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0xf61f, .value=0x64, .type=IO_READ},
        {.addr=0xf620, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0148", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0149) {
    const struct CPU_State initial_cpu = {.pc=0x4f62, .a=0x81, .x=0xb9, .y=0x82, .sp=0x30, .status=0xd0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d8, .value=0x70}, {.addr=0x4f62, .value=0x64}, {.addr=0x4f63, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0x4f64, .a=0x81, .x=0xb9, .y=0x82, .sp=0x30, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d8, .value=0x70}, {.addr=0x4f62, .value=0x64}, {.addr=0x4f63, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f62, .value=0x64, .type=IO_READ},
        {.addr=0x4f63, .value=0xd8, .type=IO_READ},
        {.addr=0x00d8, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0149", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_014A) {
    const struct CPU_State initial_cpu = {.pc=0x6510, .a=0x08, .x=0x37, .y=0xcb, .sp=0x20, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0x0f}, {.addr=0x6510, .value=0x64}, {.addr=0x6511, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x6512, .a=0x08, .x=0x37, .y=0xcb, .sp=0x20, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0x0f}, {.addr=0x6510, .value=0x64}, {.addr=0x6511, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x6510, .value=0x64, .type=IO_READ},
        {.addr=0x6511, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 014A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_014B) {
    const struct CPU_State initial_cpu = {.pc=0xad03, .a=0x66, .x=0xeb, .y=0x5f, .sp=0x1b, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0028, .value=0x64}, {.addr=0xad03, .value=0x64}, {.addr=0xad04, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0xad05, .a=0x66, .x=0xeb, .y=0x5f, .sp=0x1b, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0028, .value=0x64}, {.addr=0xad03, .value=0x64}, {.addr=0xad04, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0xad03, .value=0x64, .type=IO_READ},
        {.addr=0xad04, .value=0x28, .type=IO_READ},
        {.addr=0x0028, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 014B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_014C) {
    const struct CPU_State initial_cpu = {.pc=0x2583, .a=0x15, .x=0x04, .y=0x91, .sp=0x73, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b5, .value=0x9c}, {.addr=0x2583, .value=0x64}, {.addr=0x2584, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x2585, .a=0x15, .x=0x04, .y=0x91, .sp=0x73, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b5, .value=0x9c}, {.addr=0x2583, .value=0x64}, {.addr=0x2584, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x2583, .value=0x64, .type=IO_READ},
        {.addr=0x2584, .value=0xb5, .type=IO_READ},
        {.addr=0x00b5, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 014C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_014D) {
    const struct CPU_State initial_cpu = {.pc=0x8ef2, .a=0x8d, .x=0xe1, .y=0x25, .sp=0x03, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0x4c}, {.addr=0x8ef2, .value=0x64}, {.addr=0x8ef3, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x8ef4, .a=0x8d, .x=0xe1, .y=0x25, .sp=0x03, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0x4c}, {.addr=0x8ef2, .value=0x64}, {.addr=0x8ef3, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ef2, .value=0x64, .type=IO_READ},
        {.addr=0x8ef3, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 014D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_014E) {
    const struct CPU_State initial_cpu = {.pc=0xdc62, .a=0xa1, .x=0x92, .y=0x89, .sp=0x98, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0xba}, {.addr=0xdc62, .value=0x64}, {.addr=0xdc63, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0xdc64, .a=0xa1, .x=0x92, .y=0x89, .sp=0x98, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0xba}, {.addr=0xdc62, .value=0x64}, {.addr=0xdc63, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0xdc62, .value=0x64, .type=IO_READ},
        {.addr=0xdc63, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 014E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_014F) {
    const struct CPU_State initial_cpu = {.pc=0x9e0e, .a=0x0c, .x=0x39, .y=0x81, .sp=0xed, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0129, .value=0x47}, {.addr=0x9e0e, .value=0x64}, {.addr=0x9e0f, .value=0x29},
    };
    const struct CPU_State final_cpu = {.pc=0x9e10, .a=0x0c, .x=0x39, .y=0x81, .sp=0xed, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0129, .value=0x47}, {.addr=0x9e0e, .value=0x64}, {.addr=0x9e0f, .value=0x29},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e0e, .value=0x64, .type=IO_READ},
        {.addr=0x9e0f, .value=0x29, .type=IO_READ},
        {.addr=0x0129, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 014F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0150) {
    const struct CPU_State initial_cpu = {.pc=0x5c93, .a=0x8a, .x=0xe9, .y=0x70, .sp=0x7d, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0x8e}, {.addr=0x5c93, .value=0x64}, {.addr=0x5c94, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x5c95, .a=0x8a, .x=0xe9, .y=0x70, .sp=0x7d, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0x8e}, {.addr=0x5c93, .value=0x64}, {.addr=0x5c94, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x5c93, .value=0x64, .type=IO_READ},
        {.addr=0x5c94, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0150", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0151) {
    const struct CPU_State initial_cpu = {.pc=0x8b75, .a=0x5c, .x=0x43, .y=0x90, .sp=0xed, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0x4d}, {.addr=0x8b75, .value=0x64}, {.addr=0x8b76, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x8b77, .a=0x5c, .x=0x43, .y=0x90, .sp=0xed, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0x4d}, {.addr=0x8b75, .value=0x64}, {.addr=0x8b76, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x8b75, .value=0x64, .type=IO_READ},
        {.addr=0x8b76, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0151", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0152) {
    const struct CPU_State initial_cpu = {.pc=0xe6d7, .a=0x5c, .x=0xca, .y=0xec, .sp=0x28, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0165, .value=0x84}, {.addr=0xe6d7, .value=0x64}, {.addr=0xe6d8, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0xe6d9, .a=0x5c, .x=0xca, .y=0xec, .sp=0x28, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0165, .value=0x84}, {.addr=0xe6d7, .value=0x64}, {.addr=0xe6d8, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0xe6d7, .value=0x64, .type=IO_READ},
        {.addr=0xe6d8, .value=0x65, .type=IO_READ},
        {.addr=0x0165, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0152", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0153) {
    const struct CPU_State initial_cpu = {.pc=0xc497, .a=0xea, .x=0xb2, .y=0x39, .sp=0xcb, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019c, .value=0x71}, {.addr=0xc497, .value=0x64}, {.addr=0xc498, .value=0x9c},
    };
    const struct CPU_State final_cpu = {.pc=0xc499, .a=0xea, .x=0xb2, .y=0x39, .sp=0xcb, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x019c, .value=0x71}, {.addr=0xc497, .value=0x64}, {.addr=0xc498, .value=0x9c},
    };
    const struct BusEvent events[] = {
        {.addr=0xc497, .value=0x64, .type=IO_READ},
        {.addr=0xc498, .value=0x9c, .type=IO_READ},
        {.addr=0x019c, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0153", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0154) {
    const struct CPU_State initial_cpu = {.pc=0x38ea, .a=0x55, .x=0x4c, .y=0xe5, .sp=0x4f, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002c, .value=0xf3}, {.addr=0x38ea, .value=0x64}, {.addr=0x38eb, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x38ec, .a=0x55, .x=0x4c, .y=0xe5, .sp=0x4f, .status=0x08};
    const struct RamEntry final_ram[] = {
        {.addr=0x002c, .value=0xf3}, {.addr=0x38ea, .value=0x64}, {.addr=0x38eb, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x38ea, .value=0x64, .type=IO_READ},
        {.addr=0x38eb, .value=0x2c, .type=IO_READ},
        {.addr=0x002c, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0154", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0155) {
    const struct CPU_State initial_cpu = {.pc=0x4ee2, .a=0x04, .x=0xfa, .y=0xda, .sp=0x05, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019d, .value=0x67}, {.addr=0x4ee2, .value=0x64}, {.addr=0x4ee3, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x4ee4, .a=0x04, .x=0xfa, .y=0xda, .sp=0x05, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x019d, .value=0x67}, {.addr=0x4ee2, .value=0x64}, {.addr=0x4ee3, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ee2, .value=0x64, .type=IO_READ},
        {.addr=0x4ee3, .value=0x9d, .type=IO_READ},
        {.addr=0x019d, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0155", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0156) {
    const struct CPU_State initial_cpu = {.pc=0x13b6, .a=0x53, .x=0xdb, .y=0xec, .sp=0x6b, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0xae}, {.addr=0x13b6, .value=0x64}, {.addr=0x13b7, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x13b8, .a=0x53, .x=0xdb, .y=0xec, .sp=0x6b, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0xae}, {.addr=0x13b6, .value=0x64}, {.addr=0x13b7, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x13b6, .value=0x64, .type=IO_READ},
        {.addr=0x13b7, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0156", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0157) {
    const struct CPU_State initial_cpu = {.pc=0x2433, .a=0x7f, .x=0x7e, .y=0xff, .sp=0xe4, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ad, .value=0xed}, {.addr=0x2433, .value=0x64}, {.addr=0x2434, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x2435, .a=0x7f, .x=0x7e, .y=0xff, .sp=0xe4, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ad, .value=0xed}, {.addr=0x2433, .value=0x64}, {.addr=0x2434, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x2433, .value=0x64, .type=IO_READ},
        {.addr=0x2434, .value=0xad, .type=IO_READ},
        {.addr=0x00ad, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0157", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0158) {
    const struct CPU_State initial_cpu = {.pc=0x8c8f, .a=0x5f, .x=0x84, .y=0x02, .sp=0x05, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0x73}, {.addr=0x8c8f, .value=0x64}, {.addr=0x8c90, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x8c91, .a=0x5f, .x=0x84, .y=0x02, .sp=0x05, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0x73}, {.addr=0x8c8f, .value=0x64}, {.addr=0x8c90, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c8f, .value=0x64, .type=IO_READ},
        {.addr=0x8c90, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0158", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0159) {
    const struct CPU_State initial_cpu = {.pc=0x3071, .a=0xdf, .x=0x24, .y=0x49, .sp=0x06, .status=0xd8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0x9a}, {.addr=0x3071, .value=0x64}, {.addr=0x3072, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x3073, .a=0xdf, .x=0x24, .y=0x49, .sp=0x06, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0x9a}, {.addr=0x3071, .value=0x64}, {.addr=0x3072, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x3071, .value=0x64, .type=IO_READ},
        {.addr=0x3072, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0159", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_015A) {
    const struct CPU_State initial_cpu = {.pc=0x9eac, .a=0x88, .x=0x99, .y=0x75, .sp=0x4b, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0x0f}, {.addr=0x9eac, .value=0x64}, {.addr=0x9ead, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x9eae, .a=0x88, .x=0x99, .y=0x75, .sp=0x4b, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0x0f}, {.addr=0x9eac, .value=0x64}, {.addr=0x9ead, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x9eac, .value=0x64, .type=IO_READ},
        {.addr=0x9ead, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 015A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_015B) {
    const struct CPU_State initial_cpu = {.pc=0x747d, .a=0xea, .x=0x59, .y=0x08, .sp=0x84, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d7, .value=0x73}, {.addr=0x747d, .value=0x64}, {.addr=0x747e, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x747f, .a=0xea, .x=0x59, .y=0x08, .sp=0x84, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d7, .value=0x73}, {.addr=0x747d, .value=0x64}, {.addr=0x747e, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x747d, .value=0x64, .type=IO_READ},
        {.addr=0x747e, .value=0xd7, .type=IO_READ},
        {.addr=0x01d7, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 015B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_015C) {
    const struct CPU_State initial_cpu = {.pc=0x1601, .a=0xdc, .x=0x5b, .y=0xba, .sp=0x68, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0xd2}, {.addr=0x1601, .value=0x64}, {.addr=0x1602, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x1603, .a=0xdc, .x=0x5b, .y=0xba, .sp=0x68, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0xd2}, {.addr=0x1601, .value=0x64}, {.addr=0x1602, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x1601, .value=0x64, .type=IO_READ},
        {.addr=0x1602, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 015C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_015D) {
    const struct CPU_State initial_cpu = {.pc=0x6159, .a=0xeb, .x=0x0a, .y=0x3f, .sp=0x20, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0041, .value=0xf5}, {.addr=0x6159, .value=0x64}, {.addr=0x615a, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x615b, .a=0xeb, .x=0x0a, .y=0x3f, .sp=0x20, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0041, .value=0xf5}, {.addr=0x6159, .value=0x64}, {.addr=0x615a, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x6159, .value=0x64, .type=IO_READ},
        {.addr=0x615a, .value=0x41, .type=IO_READ},
        {.addr=0x0041, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 015D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_015E) {
    const struct CPU_State initial_cpu = {.pc=0x93be, .a=0xca, .x=0xbd, .y=0x97, .sp=0x14, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ac, .value=0x23}, {.addr=0x93be, .value=0x64}, {.addr=0x93bf, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x93c0, .a=0xca, .x=0xbd, .y=0x97, .sp=0x14, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ac, .value=0x23}, {.addr=0x93be, .value=0x64}, {.addr=0x93bf, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x93be, .value=0x64, .type=IO_READ},
        {.addr=0x93bf, .value=0xac, .type=IO_READ},
        {.addr=0x01ac, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 015E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_015F) {
    const struct CPU_State initial_cpu = {.pc=0xf217, .a=0xdf, .x=0xb3, .y=0xe3, .sp=0x20, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0106, .value=0xf1}, {.addr=0xf217, .value=0x64}, {.addr=0xf218, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0xf219, .a=0xdf, .x=0xb3, .y=0xe3, .sp=0x20, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0106, .value=0xf1}, {.addr=0xf217, .value=0x64}, {.addr=0xf218, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0xf217, .value=0x64, .type=IO_READ},
        {.addr=0xf218, .value=0x06, .type=IO_READ},
        {.addr=0x0106, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 015F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0160) {
    const struct CPU_State initial_cpu = {.pc=0x75f4, .a=0x16, .x=0xed, .y=0x61, .sp=0xf0, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ed, .value=0x4c}, {.addr=0x75f4, .value=0x64}, {.addr=0x75f5, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0x75f6, .a=0x16, .x=0xed, .y=0x61, .sp=0xf0, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ed, .value=0x4c}, {.addr=0x75f4, .value=0x64}, {.addr=0x75f5, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0x75f4, .value=0x64, .type=IO_READ},
        {.addr=0x75f5, .value=0xed, .type=IO_READ},
        {.addr=0x01ed, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0160", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0161) {
    const struct CPU_State initial_cpu = {.pc=0x58d4, .a=0x68, .x=0xd8, .y=0x7a, .sp=0x71, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0x5f}, {.addr=0x58d4, .value=0x64}, {.addr=0x58d5, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x58d6, .a=0x68, .x=0xd8, .y=0x7a, .sp=0x71, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0x5f}, {.addr=0x58d4, .value=0x64}, {.addr=0x58d5, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x58d4, .value=0x64, .type=IO_READ},
        {.addr=0x58d5, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0161", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0162) {
    const struct CPU_State initial_cpu = {.pc=0x4e14, .a=0xb2, .x=0x23, .y=0xc9, .sp=0xe8, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0x26}, {.addr=0x4e14, .value=0x64}, {.addr=0x4e15, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x4e16, .a=0xb2, .x=0x23, .y=0xc9, .sp=0xe8, .status=0x85};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0x26}, {.addr=0x4e14, .value=0x64}, {.addr=0x4e15, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4e14, .value=0x64, .type=IO_READ},
        {.addr=0x4e15, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0162", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0163) {
    const struct CPU_State initial_cpu = {.pc=0x687b, .a=0x50, .x=0x20, .y=0x18, .sp=0x6b, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00da, .value=0xb3}, {.addr=0x687b, .value=0x64}, {.addr=0x687c, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x687d, .a=0x50, .x=0x20, .y=0x18, .sp=0x6b, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00da, .value=0xb3}, {.addr=0x687b, .value=0x64}, {.addr=0x687c, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x687b, .value=0x64, .type=IO_READ},
        {.addr=0x687c, .value=0xda, .type=IO_READ},
        {.addr=0x00da, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0163", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0164) {
    const struct CPU_State initial_cpu = {.pc=0x0132, .a=0x0a, .x=0x86, .y=0x90, .sp=0x95, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003e, .value=0xf0}, {.addr=0x0132, .value=0x64}, {.addr=0x0133, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0x0134, .a=0x0a, .x=0x86, .y=0x90, .sp=0x95, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x003e, .value=0xf0}, {.addr=0x0132, .value=0x64}, {.addr=0x0133, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0x0132, .value=0x64, .type=IO_READ},
        {.addr=0x0133, .value=0x3e, .type=IO_READ},
        {.addr=0x003e, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0164", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0165) {
    const struct CPU_State initial_cpu = {.pc=0x3e26, .a=0x39, .x=0x1f, .y=0x22, .sp=0x41, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0040, .value=0xab}, {.addr=0x3e26, .value=0x64}, {.addr=0x3e27, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x3e28, .a=0x39, .x=0x1f, .y=0x22, .sp=0x41, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0040, .value=0xab}, {.addr=0x3e26, .value=0x64}, {.addr=0x3e27, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e26, .value=0x64, .type=IO_READ},
        {.addr=0x3e27, .value=0x40, .type=IO_READ},
        {.addr=0x0040, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0165", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0166) {
    const struct CPU_State initial_cpu = {.pc=0xe88e, .a=0xae, .x=0xf4, .y=0xec, .sp=0xf3, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016c, .value=0x9f}, {.addr=0xe88e, .value=0x64}, {.addr=0xe88f, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0xe890, .a=0xae, .x=0xf4, .y=0xec, .sp=0xf3, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x016c, .value=0x9f}, {.addr=0xe88e, .value=0x64}, {.addr=0xe88f, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0xe88e, .value=0x64, .type=IO_READ},
        {.addr=0xe88f, .value=0x6c, .type=IO_READ},
        {.addr=0x016c, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0166", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0167) {
    const struct CPU_State initial_cpu = {.pc=0x5fe9, .a=0x0d, .x=0xda, .y=0xba, .sp=0xd6, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0x60}, {.addr=0x5fe9, .value=0x64}, {.addr=0x5fea, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x5feb, .a=0x0d, .x=0xda, .y=0xba, .sp=0xd6, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0x60}, {.addr=0x5fe9, .value=0x64}, {.addr=0x5fea, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x5fe9, .value=0x64, .type=IO_READ},
        {.addr=0x5fea, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0167", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0168) {
    const struct CPU_State initial_cpu = {.pc=0x155a, .a=0x05, .x=0x0c, .y=0xb9, .sp=0xd0, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0xf0}, {.addr=0x155a, .value=0x64}, {.addr=0x155b, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x155c, .a=0x05, .x=0x0c, .y=0xb9, .sp=0xd0, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0xf0}, {.addr=0x155a, .value=0x64}, {.addr=0x155b, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x155a, .value=0x64, .type=IO_READ},
        {.addr=0x155b, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0168", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0169) {
    const struct CPU_State initial_cpu = {.pc=0x098c, .a=0x7c, .x=0x88, .y=0xe9, .sp=0x83, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0032, .value=0x9d}, {.addr=0x098c, .value=0x64}, {.addr=0x098d, .value=0x32},
    };
    const struct CPU_State final_cpu = {.pc=0x098e, .a=0x7c, .x=0x88, .y=0xe9, .sp=0x83, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0032, .value=0x9d}, {.addr=0x098c, .value=0x64}, {.addr=0x098d, .value=0x32},
    };
    const struct BusEvent events[] = {
        {.addr=0x098c, .value=0x64, .type=IO_READ},
        {.addr=0x098d, .value=0x32, .type=IO_READ},
        {.addr=0x0032, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0169", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_016A) {
    const struct CPU_State initial_cpu = {.pc=0x25e4, .a=0xad, .x=0x4b, .y=0xce, .sp=0xd3, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0060, .value=0x85}, {.addr=0x25e4, .value=0x64}, {.addr=0x25e5, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x25e6, .a=0xad, .x=0x4b, .y=0xce, .sp=0xd3, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0060, .value=0x85}, {.addr=0x25e4, .value=0x64}, {.addr=0x25e5, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x25e4, .value=0x64, .type=IO_READ},
        {.addr=0x25e5, .value=0x60, .type=IO_READ},
        {.addr=0x0060, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 016A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_016B) {
    const struct CPU_State initial_cpu = {.pc=0xb485, .a=0x0c, .x=0x5d, .y=0x1d, .sp=0x26, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0x11}, {.addr=0xb485, .value=0x64}, {.addr=0xb486, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0xb487, .a=0x0c, .x=0x5d, .y=0x1d, .sp=0x26, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0x11}, {.addr=0xb485, .value=0x64}, {.addr=0xb486, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb485, .value=0x64, .type=IO_READ},
        {.addr=0xb486, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 016B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_016C) {
    const struct CPU_State initial_cpu = {.pc=0x2dae, .a=0xc8, .x=0xbf, .y=0x1e, .sp=0xaa, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012d, .value=0xd0}, {.addr=0x2dae, .value=0x64}, {.addr=0x2daf, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x2db0, .a=0xc8, .x=0xbf, .y=0x1e, .sp=0xaa, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x012d, .value=0xd0}, {.addr=0x2dae, .value=0x64}, {.addr=0x2daf, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x2dae, .value=0x64, .type=IO_READ},
        {.addr=0x2daf, .value=0x2d, .type=IO_READ},
        {.addr=0x012d, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 016C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_016D) {
    const struct CPU_State initial_cpu = {.pc=0xca4b, .a=0xad, .x=0xa8, .y=0x9c, .sp=0x2f, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0x4d}, {.addr=0xca4b, .value=0x64}, {.addr=0xca4c, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xca4d, .a=0xad, .x=0xa8, .y=0x9c, .sp=0x2f, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0x4d}, {.addr=0xca4b, .value=0x64}, {.addr=0xca4c, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xca4b, .value=0x64, .type=IO_READ},
        {.addr=0xca4c, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 016D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_016E) {
    const struct CPU_State initial_cpu = {.pc=0x4b63, .a=0x1c, .x=0x7d, .y=0xd0, .sp=0x62, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0x00}, {.addr=0x4b63, .value=0x64}, {.addr=0x4b64, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x4b65, .a=0x1c, .x=0x7d, .y=0xd0, .sp=0x62, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0x00}, {.addr=0x4b63, .value=0x64}, {.addr=0x4b64, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b63, .value=0x64, .type=IO_READ},
        {.addr=0x4b64, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 016E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_016F) {
    const struct CPU_State initial_cpu = {.pc=0xc330, .a=0xea, .x=0xfe, .y=0x65, .sp=0x31, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0xa9}, {.addr=0xc330, .value=0x64}, {.addr=0xc331, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xc332, .a=0xea, .x=0xfe, .y=0x65, .sp=0x31, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0xa9}, {.addr=0xc330, .value=0x64}, {.addr=0xc331, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xc330, .value=0x64, .type=IO_READ},
        {.addr=0xc331, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 016F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0170) {
    const struct CPU_State initial_cpu = {.pc=0x55e9, .a=0x28, .x=0x77, .y=0xec, .sp=0x95, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d2, .value=0x25}, {.addr=0x55e9, .value=0x64}, {.addr=0x55ea, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x55eb, .a=0x28, .x=0x77, .y=0xec, .sp=0x95, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d2, .value=0x25}, {.addr=0x55e9, .value=0x64}, {.addr=0x55ea, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x55e9, .value=0x64, .type=IO_READ},
        {.addr=0x55ea, .value=0xd2, .type=IO_READ},
        {.addr=0x01d2, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0170", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0171) {
    const struct CPU_State initial_cpu = {.pc=0x49ff, .a=0x55, .x=0x77, .y=0xe3, .sp=0xa8, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0x2c}, {.addr=0x49ff, .value=0x64}, {.addr=0x4a00, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0x4a01, .a=0x55, .x=0x77, .y=0xe3, .sp=0xa8, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0x2c}, {.addr=0x49ff, .value=0x64}, {.addr=0x4a00, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0x49ff, .value=0x64, .type=IO_READ},
        {.addr=0x4a00, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0x2c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0171", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0172) {
    const struct CPU_State initial_cpu = {.pc=0xd5b4, .a=0x77, .x=0x04, .y=0xf0, .sp=0xb1, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0x15}, {.addr=0xd5b4, .value=0x64}, {.addr=0xd5b5, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0xd5b6, .a=0x77, .x=0x04, .y=0xf0, .sp=0xb1, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0x15}, {.addr=0xd5b4, .value=0x64}, {.addr=0xd5b5, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0xd5b4, .value=0x64, .type=IO_READ},
        {.addr=0xd5b5, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0172", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0173) {
    const struct CPU_State initial_cpu = {.pc=0xf5ef, .a=0x33, .x=0xca, .y=0xd6, .sp=0x7b, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0x8a}, {.addr=0xf5ef, .value=0x64}, {.addr=0xf5f0, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0xf5f1, .a=0x33, .x=0xca, .y=0xd6, .sp=0x7b, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0x8a}, {.addr=0xf5ef, .value=0x64}, {.addr=0xf5f0, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0xf5ef, .value=0x64, .type=IO_READ},
        {.addr=0xf5f0, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0173", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0174) {
    const struct CPU_State initial_cpu = {.pc=0xa0f0, .a=0xe2, .x=0x3b, .y=0x68, .sp=0xd3, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0001, .value=0x5e}, {.addr=0xa0f0, .value=0x64}, {.addr=0xa0f1, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0xa0f2, .a=0xe2, .x=0x3b, .y=0x68, .sp=0xd3, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0001, .value=0x5e}, {.addr=0xa0f0, .value=0x64}, {.addr=0xa0f1, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0xa0f0, .value=0x64, .type=IO_READ},
        {.addr=0xa0f1, .value=0x01, .type=IO_READ},
        {.addr=0x0001, .value=0x5e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0174", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0175) {
    const struct CPU_State initial_cpu = {.pc=0xd98b, .a=0x29, .x=0xcd, .y=0xdc, .sp=0xb5, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d0, .value=0xa1}, {.addr=0xd98b, .value=0x64}, {.addr=0xd98c, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0xd98d, .a=0x29, .x=0xcd, .y=0xdc, .sp=0xb5, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d0, .value=0xa1}, {.addr=0xd98b, .value=0x64}, {.addr=0xd98c, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0xd98b, .value=0x64, .type=IO_READ},
        {.addr=0xd98c, .value=0xd0, .type=IO_READ},
        {.addr=0x00d0, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0175", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0176) {
    const struct CPU_State initial_cpu = {.pc=0xc728, .a=0xb1, .x=0xa0, .y=0x56, .sp=0x50, .status=0x09};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0x49}, {.addr=0xc728, .value=0x64}, {.addr=0xc729, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0xc72a, .a=0xb1, .x=0xa0, .y=0x56, .sp=0x50, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0x49}, {.addr=0xc728, .value=0x64}, {.addr=0xc729, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0xc728, .value=0x64, .type=IO_READ},
        {.addr=0xc729, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0176", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0177) {
    const struct CPU_State initial_cpu = {.pc=0xa817, .a=0x94, .x=0xc7, .y=0xa7, .sp=0xad, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c9, .value=0xdc}, {.addr=0xa817, .value=0x64}, {.addr=0xa818, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0xa819, .a=0x94, .x=0xc7, .y=0xa7, .sp=0xad, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c9, .value=0xdc}, {.addr=0xa817, .value=0x64}, {.addr=0xa818, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0xa817, .value=0x64, .type=IO_READ},
        {.addr=0xa818, .value=0xc9, .type=IO_READ},
        {.addr=0x00c9, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0177", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0178) {
    const struct CPU_State initial_cpu = {.pc=0xdf38, .a=0x41, .x=0xb3, .y=0x61, .sp=0xbe, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0xf3}, {.addr=0xdf38, .value=0x64}, {.addr=0xdf39, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0xdf3a, .a=0x41, .x=0xb3, .y=0x61, .sp=0xbe, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0xf3}, {.addr=0xdf38, .value=0x64}, {.addr=0xdf39, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0xdf38, .value=0x64, .type=IO_READ},
        {.addr=0xdf39, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0xf3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0178", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0179) {
    const struct CPU_State initial_cpu = {.pc=0xb512, .a=0xe3, .x=0x32, .y=0x5a, .sp=0x91, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ec, .value=0x86}, {.addr=0xb512, .value=0x64}, {.addr=0xb513, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0xb514, .a=0xe3, .x=0x32, .y=0x5a, .sp=0x91, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ec, .value=0x86}, {.addr=0xb512, .value=0x64}, {.addr=0xb513, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0xb512, .value=0x64, .type=IO_READ},
        {.addr=0xb513, .value=0xec, .type=IO_READ},
        {.addr=0x01ec, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0179", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_017A) {
    const struct CPU_State initial_cpu = {.pc=0x7601, .a=0x91, .x=0x40, .y=0xef, .sp=0x6f, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0xce}, {.addr=0x7601, .value=0x64}, {.addr=0x7602, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x7603, .a=0x91, .x=0x40, .y=0xef, .sp=0x6f, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0xce}, {.addr=0x7601, .value=0x64}, {.addr=0x7602, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x7601, .value=0x64, .type=IO_READ},
        {.addr=0x7602, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 017A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_017B) {
    const struct CPU_State initial_cpu = {.pc=0x04f7, .a=0x4c, .x=0x09, .y=0x9a, .sp=0x8e, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0037, .value=0xcd}, {.addr=0x04f7, .value=0x64}, {.addr=0x04f8, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x04f9, .a=0x4c, .x=0x09, .y=0x9a, .sp=0x8e, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x0037, .value=0xcd}, {.addr=0x04f7, .value=0x64}, {.addr=0x04f8, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x04f7, .value=0x64, .type=IO_READ},
        {.addr=0x04f8, .value=0x37, .type=IO_READ},
        {.addr=0x0037, .value=0xcd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 017B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_017C) {
    const struct CPU_State initial_cpu = {.pc=0xb84d, .a=0xfa, .x=0x1e, .y=0xbd, .sp=0xbb, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0x3a}, {.addr=0xb84d, .value=0x64}, {.addr=0xb84e, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0xb84f, .a=0xfa, .x=0x1e, .y=0xbd, .sp=0xbb, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0x3a}, {.addr=0xb84d, .value=0x64}, {.addr=0xb84e, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0xb84d, .value=0x64, .type=IO_READ},
        {.addr=0xb84e, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 017C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_017D) {
    const struct CPU_State initial_cpu = {.pc=0x5923, .a=0xa9, .x=0xef, .y=0xf3, .sp=0xc2, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0xcf}, {.addr=0x5923, .value=0x64}, {.addr=0x5924, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0x5925, .a=0xa9, .x=0xef, .y=0xf3, .sp=0xc2, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0xcf}, {.addr=0x5923, .value=0x64}, {.addr=0x5924, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0x5923, .value=0x64, .type=IO_READ},
        {.addr=0x5924, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 017D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_017E) {
    const struct CPU_State initial_cpu = {.pc=0xed52, .a=0x78, .x=0x2d, .y=0x86, .sp=0x46, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0xd2}, {.addr=0xed52, .value=0x64}, {.addr=0xed53, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0xed54, .a=0x78, .x=0x2d, .y=0x86, .sp=0x46, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0xd2}, {.addr=0xed52, .value=0x64}, {.addr=0xed53, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0xed52, .value=0x64, .type=IO_READ},
        {.addr=0xed53, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 017E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_017F) {
    const struct CPU_State initial_cpu = {.pc=0x4c63, .a=0xf0, .x=0x23, .y=0xd1, .sp=0x10, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0087, .value=0x71}, {.addr=0x4c63, .value=0x64}, {.addr=0x4c64, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x4c65, .a=0xf0, .x=0x23, .y=0xd1, .sp=0x10, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0087, .value=0x71}, {.addr=0x4c63, .value=0x64}, {.addr=0x4c64, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c63, .value=0x64, .type=IO_READ},
        {.addr=0x4c64, .value=0x87, .type=IO_READ},
        {.addr=0x0087, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 017F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0180) {
    const struct CPU_State initial_cpu = {.pc=0xa36e, .a=0xcd, .x=0x2b, .y=0x88, .sp=0x43, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ed, .value=0x54}, {.addr=0xa36e, .value=0x64}, {.addr=0xa36f, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0xa370, .a=0xcd, .x=0x2b, .y=0x88, .sp=0x43, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ed, .value=0x54}, {.addr=0xa36e, .value=0x64}, {.addr=0xa36f, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0xa36e, .value=0x64, .type=IO_READ},
        {.addr=0xa36f, .value=0xed, .type=IO_READ},
        {.addr=0x01ed, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0180", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0181) {
    const struct CPU_State initial_cpu = {.pc=0x1a77, .a=0x09, .x=0xd2, .y=0x37, .sp=0x40, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0xed}, {.addr=0x1a77, .value=0x64}, {.addr=0x1a78, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x1a79, .a=0x09, .x=0xd2, .y=0x37, .sp=0x40, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0xed}, {.addr=0x1a77, .value=0x64}, {.addr=0x1a78, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x1a77, .value=0x64, .type=IO_READ},
        {.addr=0x1a78, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0181", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0182) {
    const struct CPU_State initial_cpu = {.pc=0x6ddd, .a=0x8d, .x=0x69, .y=0xb8, .sp=0x52, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0x0f}, {.addr=0x6ddd, .value=0x64}, {.addr=0x6dde, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x6ddf, .a=0x8d, .x=0x69, .y=0xb8, .sp=0x52, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0x0f}, {.addr=0x6ddd, .value=0x64}, {.addr=0x6dde, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ddd, .value=0x64, .type=IO_READ},
        {.addr=0x6dde, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0182", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0183) {
    const struct CPU_State initial_cpu = {.pc=0x6469, .a=0xe6, .x=0x0f, .y=0xf8, .sp=0xa2, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0146, .value=0xb2}, {.addr=0x6469, .value=0x64}, {.addr=0x646a, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0x646b, .a=0xe6, .x=0x0f, .y=0xf8, .sp=0xa2, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0146, .value=0xb2}, {.addr=0x6469, .value=0x64}, {.addr=0x646a, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0x6469, .value=0x64, .type=IO_READ},
        {.addr=0x646a, .value=0x46, .type=IO_READ},
        {.addr=0x0146, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0183", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0184) {
    const struct CPU_State initial_cpu = {.pc=0x7316, .a=0xa1, .x=0x62, .y=0xfe, .sp=0x61, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d7, .value=0x74}, {.addr=0x7316, .value=0x64}, {.addr=0x7317, .value=0xd7},
    };
    const struct CPU_State final_cpu = {.pc=0x7318, .a=0xa1, .x=0x62, .y=0xfe, .sp=0x61, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d7, .value=0x74}, {.addr=0x7316, .value=0x64}, {.addr=0x7317, .value=0xd7},
    };
    const struct BusEvent events[] = {
        {.addr=0x7316, .value=0x64, .type=IO_READ},
        {.addr=0x7317, .value=0xd7, .type=IO_READ},
        {.addr=0x01d7, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0184", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0185) {
    const struct CPU_State initial_cpu = {.pc=0x892f, .a=0x66, .x=0x49, .y=0x40, .sp=0xc3, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0xc5}, {.addr=0x892f, .value=0x64}, {.addr=0x8930, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0x8931, .a=0x66, .x=0x49, .y=0x40, .sp=0xc3, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0xc5}, {.addr=0x892f, .value=0x64}, {.addr=0x8930, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0x892f, .value=0x64, .type=IO_READ},
        {.addr=0x8930, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0185", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0186) {
    const struct CPU_State initial_cpu = {.pc=0x463c, .a=0x74, .x=0x25, .y=0x3f, .sp=0x05, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0x34}, {.addr=0x463c, .value=0x64}, {.addr=0x463d, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x463e, .a=0x74, .x=0x25, .y=0x3f, .sp=0x05, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0x34}, {.addr=0x463c, .value=0x64}, {.addr=0x463d, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x463c, .value=0x64, .type=IO_READ},
        {.addr=0x463d, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0186", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0187) {
    const struct CPU_State initial_cpu = {.pc=0xaf45, .a=0xe5, .x=0xdb, .y=0xb4, .sp=0x8e, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0051, .value=0x18}, {.addr=0xaf45, .value=0x64}, {.addr=0xaf46, .value=0x51},
    };
    const struct CPU_State final_cpu = {.pc=0xaf47, .a=0xe5, .x=0xdb, .y=0xb4, .sp=0x8e, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x0051, .value=0x18}, {.addr=0xaf45, .value=0x64}, {.addr=0xaf46, .value=0x51},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf45, .value=0x64, .type=IO_READ},
        {.addr=0xaf46, .value=0x51, .type=IO_READ},
        {.addr=0x0051, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0187", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0188) {
    const struct CPU_State initial_cpu = {.pc=0x2367, .a=0x40, .x=0x7d, .y=0x6c, .sp=0xb1, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0x92}, {.addr=0x2367, .value=0x64}, {.addr=0x2368, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x2369, .a=0x40, .x=0x7d, .y=0x6c, .sp=0xb1, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0x92}, {.addr=0x2367, .value=0x64}, {.addr=0x2368, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x2367, .value=0x64, .type=IO_READ},
        {.addr=0x2368, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0188", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0189) {
    const struct CPU_State initial_cpu = {.pc=0x6421, .a=0xba, .x=0x0d, .y=0x71, .sp=0x79, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0x71}, {.addr=0x6421, .value=0x64}, {.addr=0x6422, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x6423, .a=0xba, .x=0x0d, .y=0x71, .sp=0x79, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0x71}, {.addr=0x6421, .value=0x64}, {.addr=0x6422, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x6421, .value=0x64, .type=IO_READ},
        {.addr=0x6422, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0189", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_018A) {
    const struct CPU_State initial_cpu = {.pc=0xe834, .a=0xd3, .x=0x0f, .y=0x4e, .sp=0xb7, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0080, .value=0x21}, {.addr=0xe834, .value=0x64}, {.addr=0xe835, .value=0x80},
    };
    const struct CPU_State final_cpu = {.pc=0xe836, .a=0xd3, .x=0x0f, .y=0x4e, .sp=0xb7, .status=0xdd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0080, .value=0x21}, {.addr=0xe834, .value=0x64}, {.addr=0xe835, .value=0x80},
    };
    const struct BusEvent events[] = {
        {.addr=0xe834, .value=0x64, .type=IO_READ},
        {.addr=0xe835, .value=0x80, .type=IO_READ},
        {.addr=0x0080, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 018A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_018B) {
    const struct CPU_State initial_cpu = {.pc=0x984e, .a=0xbe, .x=0x88, .y=0x12, .sp=0xeb, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0xf7}, {.addr=0x984e, .value=0x64}, {.addr=0x984f, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x9850, .a=0xbe, .x=0x88, .y=0x12, .sp=0xeb, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0xf7}, {.addr=0x984e, .value=0x64}, {.addr=0x984f, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x984e, .value=0x64, .type=IO_READ},
        {.addr=0x984f, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 018B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_018C) {
    const struct CPU_State initial_cpu = {.pc=0xc28f, .a=0x01, .x=0xb4, .y=0xfd, .sp=0xf4, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0x68}, {.addr=0xc28f, .value=0x64}, {.addr=0xc290, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xc291, .a=0x01, .x=0xb4, .y=0xfd, .sp=0xf4, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0x68}, {.addr=0xc28f, .value=0x64}, {.addr=0xc290, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xc28f, .value=0x64, .type=IO_READ},
        {.addr=0xc290, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 018C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_018D) {
    const struct CPU_State initial_cpu = {.pc=0x7f5f, .a=0x6d, .x=0xe6, .y=0x20, .sp=0xbd, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0xf1}, {.addr=0x7f5f, .value=0x64}, {.addr=0x7f60, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x7f61, .a=0x6d, .x=0xe6, .y=0x20, .sp=0xbd, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0xf1}, {.addr=0x7f5f, .value=0x64}, {.addr=0x7f60, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x7f5f, .value=0x64, .type=IO_READ},
        {.addr=0x7f60, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0xf1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 018D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_018E) {
    const struct CPU_State initial_cpu = {.pc=0x0566, .a=0x3f, .x=0xc6, .y=0xec, .sp=0x98, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0x8e}, {.addr=0x0566, .value=0x64}, {.addr=0x0567, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x0568, .a=0x3f, .x=0xc6, .y=0xec, .sp=0x98, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0x8e}, {.addr=0x0566, .value=0x64}, {.addr=0x0567, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x0566, .value=0x64, .type=IO_READ},
        {.addr=0x0567, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 018E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_018F) {
    const struct CPU_State initial_cpu = {.pc=0x5911, .a=0x5e, .x=0x18, .y=0x0a, .sp=0xa1, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cd, .value=0xce}, {.addr=0x5911, .value=0x64}, {.addr=0x5912, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x5913, .a=0x5e, .x=0x18, .y=0x0a, .sp=0xa1, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cd, .value=0xce}, {.addr=0x5911, .value=0x64}, {.addr=0x5912, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x5911, .value=0x64, .type=IO_READ},
        {.addr=0x5912, .value=0xcd, .type=IO_READ},
        {.addr=0x00cd, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 018F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0190) {
    const struct CPU_State initial_cpu = {.pc=0x5d7a, .a=0x0e, .x=0xb6, .y=0x02, .sp=0x11, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e6, .value=0x62}, {.addr=0x5d7a, .value=0x64}, {.addr=0x5d7b, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0x5d7c, .a=0x0e, .x=0xb6, .y=0x02, .sp=0x11, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e6, .value=0x62}, {.addr=0x5d7a, .value=0x64}, {.addr=0x5d7b, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d7a, .value=0x64, .type=IO_READ},
        {.addr=0x5d7b, .value=0xe6, .type=IO_READ},
        {.addr=0x01e6, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0190", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0191) {
    const struct CPU_State initial_cpu = {.pc=0x90a6, .a=0xcc, .x=0x31, .y=0x55, .sp=0x1c, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0xde}, {.addr=0x90a6, .value=0x64}, {.addr=0x90a7, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x90a8, .a=0xcc, .x=0x31, .y=0x55, .sp=0x1c, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0xde}, {.addr=0x90a6, .value=0x64}, {.addr=0x90a7, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x90a6, .value=0x64, .type=IO_READ},
        {.addr=0x90a7, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0191", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0192) {
    const struct CPU_State initial_cpu = {.pc=0x938c, .a=0x12, .x=0xd3, .y=0xc0, .sp=0xe8, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0x3c}, {.addr=0x938c, .value=0x64}, {.addr=0x938d, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x938e, .a=0x12, .x=0xd3, .y=0xc0, .sp=0xe8, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0x3c}, {.addr=0x938c, .value=0x64}, {.addr=0x938d, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x938c, .value=0x64, .type=IO_READ},
        {.addr=0x938d, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0192", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0193) {
    const struct CPU_State initial_cpu = {.pc=0x8bdd, .a=0x83, .x=0x42, .y=0xe4, .sp=0x2d, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0xa0}, {.addr=0x8bdd, .value=0x64}, {.addr=0x8bde, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x8bdf, .a=0x83, .x=0x42, .y=0xe4, .sp=0x2d, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0xa0}, {.addr=0x8bdd, .value=0x64}, {.addr=0x8bde, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x8bdd, .value=0x64, .type=IO_READ},
        {.addr=0x8bde, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0193", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0194) {
    const struct CPU_State initial_cpu = {.pc=0x5614, .a=0xa2, .x=0x4d, .y=0x7e, .sp=0x9b, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0xf9}, {.addr=0x5614, .value=0x64}, {.addr=0x5615, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x5616, .a=0xa2, .x=0x4d, .y=0x7e, .sp=0x9b, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0xf9}, {.addr=0x5614, .value=0x64}, {.addr=0x5615, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x5614, .value=0x64, .type=IO_READ},
        {.addr=0x5615, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0194", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0195) {
    const struct CPU_State initial_cpu = {.pc=0x8f25, .a=0xc0, .x=0x76, .y=0x76, .sp=0xc6, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0160, .value=0xd7}, {.addr=0x8f25, .value=0x64}, {.addr=0x8f26, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x8f27, .a=0xc0, .x=0x76, .y=0x76, .sp=0xc6, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0160, .value=0xd7}, {.addr=0x8f25, .value=0x64}, {.addr=0x8f26, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f25, .value=0x64, .type=IO_READ},
        {.addr=0x8f26, .value=0x60, .type=IO_READ},
        {.addr=0x0160, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0195", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0196) {
    const struct CPU_State initial_cpu = {.pc=0xdbd3, .a=0x74, .x=0xc2, .y=0xf1, .sp=0x43, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0x56}, {.addr=0xdbd3, .value=0x64}, {.addr=0xdbd4, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0xdbd5, .a=0x74, .x=0xc2, .y=0xf1, .sp=0x43, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0x56}, {.addr=0xdbd3, .value=0x64}, {.addr=0xdbd4, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbd3, .value=0x64, .type=IO_READ},
        {.addr=0xdbd4, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0196", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0197) {
    const struct CPU_State initial_cpu = {.pc=0xbb68, .a=0xf0, .x=0xe0, .y=0x0b, .sp=0x8a, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0x6a}, {.addr=0xbb68, .value=0x64}, {.addr=0xbb69, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0xbb6a, .a=0xf0, .x=0xe0, .y=0x0b, .sp=0x8a, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0x6a}, {.addr=0xbb68, .value=0x64}, {.addr=0xbb69, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0xbb68, .value=0x64, .type=IO_READ},
        {.addr=0xbb69, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0197", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0198) {
    const struct CPU_State initial_cpu = {.pc=0xbcd0, .a=0x6c, .x=0xf6, .y=0x04, .sp=0x72, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0092, .value=0x35}, {.addr=0xbcd0, .value=0x64}, {.addr=0xbcd1, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0xbcd2, .a=0x6c, .x=0xf6, .y=0x04, .sp=0x72, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0092, .value=0x35}, {.addr=0xbcd0, .value=0x64}, {.addr=0xbcd1, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0xbcd0, .value=0x64, .type=IO_READ},
        {.addr=0xbcd1, .value=0x92, .type=IO_READ},
        {.addr=0x0092, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0198", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0199) {
    const struct CPU_State initial_cpu = {.pc=0x83ce, .a=0x03, .x=0x00, .y=0x4d, .sp=0x95, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0xa0}, {.addr=0x83ce, .value=0x64}, {.addr=0x83cf, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x83d0, .a=0x03, .x=0x00, .y=0x4d, .sp=0x95, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0xa0}, {.addr=0x83ce, .value=0x64}, {.addr=0x83cf, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x83ce, .value=0x64, .type=IO_READ},
        {.addr=0x83cf, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0xa0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0199", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_019A) {
    const struct CPU_State initial_cpu = {.pc=0xb75d, .a=0x40, .x=0x86, .y=0x4a, .sp=0xd8, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0x14}, {.addr=0xb75d, .value=0x64}, {.addr=0xb75e, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0xb75f, .a=0x40, .x=0x86, .y=0x4a, .sp=0xd8, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0x14}, {.addr=0xb75d, .value=0x64}, {.addr=0xb75e, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0xb75d, .value=0x64, .type=IO_READ},
        {.addr=0xb75e, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 019A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_019B) {
    const struct CPU_State initial_cpu = {.pc=0xe2b8, .a=0x5f, .x=0xff, .y=0x2b, .sp=0x06, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0xe3}, {.addr=0xe2b8, .value=0x64}, {.addr=0xe2b9, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0xe2ba, .a=0x5f, .x=0xff, .y=0x2b, .sp=0x06, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0xe3}, {.addr=0xe2b8, .value=0x64}, {.addr=0xe2b9, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0xe2b8, .value=0x64, .type=IO_READ},
        {.addr=0xe2b9, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 019B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_019C) {
    const struct CPU_State initial_cpu = {.pc=0x41e6, .a=0x3d, .x=0x70, .y=0x97, .sp=0xa3, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0061, .value=0xab}, {.addr=0x41e6, .value=0x64}, {.addr=0x41e7, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x41e8, .a=0x3d, .x=0x70, .y=0x97, .sp=0xa3, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0061, .value=0xab}, {.addr=0x41e6, .value=0x64}, {.addr=0x41e7, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x41e6, .value=0x64, .type=IO_READ},
        {.addr=0x41e7, .value=0x61, .type=IO_READ},
        {.addr=0x0061, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 019C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_019D) {
    const struct CPU_State initial_cpu = {.pc=0x8801, .a=0xe4, .x=0x6d, .y=0x64, .sp=0x99, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0197, .value=0xac}, {.addr=0x8801, .value=0x64}, {.addr=0x8802, .value=0x97},
    };
    const struct CPU_State final_cpu = {.pc=0x8803, .a=0xe4, .x=0x6d, .y=0x64, .sp=0x99, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0197, .value=0xac}, {.addr=0x8801, .value=0x64}, {.addr=0x8802, .value=0x97},
    };
    const struct BusEvent events[] = {
        {.addr=0x8801, .value=0x64, .type=IO_READ},
        {.addr=0x8802, .value=0x97, .type=IO_READ},
        {.addr=0x0197, .value=0xac, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 019D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_019E) {
    const struct CPU_State initial_cpu = {.pc=0x7fd1, .a=0xb3, .x=0x93, .y=0x48, .sp=0x4d, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ac, .value=0x36}, {.addr=0x7fd1, .value=0x64}, {.addr=0x7fd2, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x7fd3, .a=0xb3, .x=0x93, .y=0x48, .sp=0x4d, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ac, .value=0x36}, {.addr=0x7fd1, .value=0x64}, {.addr=0x7fd2, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x7fd1, .value=0x64, .type=IO_READ},
        {.addr=0x7fd2, .value=0xac, .type=IO_READ},
        {.addr=0x00ac, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 019E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_019F) {
    const struct CPU_State initial_cpu = {.pc=0xa800, .a=0x3d, .x=0x6b, .y=0xc8, .sp=0x6b, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0xa9}, {.addr=0xa800, .value=0x64}, {.addr=0xa801, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0xa802, .a=0x3d, .x=0x6b, .y=0xc8, .sp=0x6b, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0xa9}, {.addr=0xa800, .value=0x64}, {.addr=0xa801, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0xa800, .value=0x64, .type=IO_READ},
        {.addr=0xa801, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 019F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01A0) {
    const struct CPU_State initial_cpu = {.pc=0x80a2, .a=0x74, .x=0x51, .y=0xf2, .sp=0x3d, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0xfc}, {.addr=0x80a2, .value=0x64}, {.addr=0x80a3, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0x80a4, .a=0x74, .x=0x51, .y=0xf2, .sp=0x3d, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0xfc}, {.addr=0x80a2, .value=0x64}, {.addr=0x80a3, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0x80a2, .value=0x64, .type=IO_READ},
        {.addr=0x80a3, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01A1) {
    const struct CPU_State initial_cpu = {.pc=0xfd0b, .a=0x58, .x=0x37, .y=0x93, .sp=0xe4, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0xb1}, {.addr=0xfd0b, .value=0x64}, {.addr=0xfd0c, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0xfd0d, .a=0x58, .x=0x37, .y=0x93, .sp=0xe4, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0xb1}, {.addr=0xfd0b, .value=0x64}, {.addr=0xfd0c, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0xfd0b, .value=0x64, .type=IO_READ},
        {.addr=0xfd0c, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01A2) {
    const struct CPU_State initial_cpu = {.pc=0x4f27, .a=0x3c, .x=0x75, .y=0xda, .sp=0xe1, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0x73}, {.addr=0x4f27, .value=0x64}, {.addr=0x4f28, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0x4f29, .a=0x3c, .x=0x75, .y=0xda, .sp=0xe1, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0x73}, {.addr=0x4f27, .value=0x64}, {.addr=0x4f28, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f27, .value=0x64, .type=IO_READ},
        {.addr=0x4f28, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0x73, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01A3) {
    const struct CPU_State initial_cpu = {.pc=0x409e, .a=0xf8, .x=0x61, .y=0x11, .sp=0x4e, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0x92}, {.addr=0x409e, .value=0x64}, {.addr=0x409f, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x40a0, .a=0xf8, .x=0x61, .y=0x11, .sp=0x4e, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0x92}, {.addr=0x409e, .value=0x64}, {.addr=0x409f, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x409e, .value=0x64, .type=IO_READ},
        {.addr=0x409f, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01A4) {
    const struct CPU_State initial_cpu = {.pc=0x799e, .a=0x14, .x=0xc4, .y=0xcc, .sp=0xcb, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0xcf}, {.addr=0x799e, .value=0x64}, {.addr=0x799f, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x79a0, .a=0x14, .x=0xc4, .y=0xcc, .sp=0xcb, .status=0x60};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0xcf}, {.addr=0x799e, .value=0x64}, {.addr=0x799f, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x799e, .value=0x64, .type=IO_READ},
        {.addr=0x799f, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01A5) {
    const struct CPU_State initial_cpu = {.pc=0x7e2f, .a=0x9e, .x=0xd3, .y=0xe7, .sp=0x9b, .status=0x03};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0038, .value=0xa7}, {.addr=0x7e2f, .value=0x64}, {.addr=0x7e30, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x7e31, .a=0x9e, .x=0xd3, .y=0xe7, .sp=0x9b, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x0038, .value=0xa7}, {.addr=0x7e2f, .value=0x64}, {.addr=0x7e30, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x7e2f, .value=0x64, .type=IO_READ},
        {.addr=0x7e30, .value=0x38, .type=IO_READ},
        {.addr=0x0038, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01A6) {
    const struct CPU_State initial_cpu = {.pc=0x0ce3, .a=0xaa, .x=0xb9, .y=0x0f, .sp=0x31, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014d, .value=0x6d}, {.addr=0x0ce3, .value=0x64}, {.addr=0x0ce4, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x0ce5, .a=0xaa, .x=0xb9, .y=0x0f, .sp=0x31, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x014d, .value=0x6d}, {.addr=0x0ce3, .value=0x64}, {.addr=0x0ce4, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ce3, .value=0x64, .type=IO_READ},
        {.addr=0x0ce4, .value=0x4d, .type=IO_READ},
        {.addr=0x014d, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01A7) {
    const struct CPU_State initial_cpu = {.pc=0xe237, .a=0x7a, .x=0x57, .y=0xae, .sp=0x74, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0xdd}, {.addr=0xe237, .value=0x64}, {.addr=0xe238, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0xe239, .a=0x7a, .x=0x57, .y=0xae, .sp=0x74, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0xdd}, {.addr=0xe237, .value=0x64}, {.addr=0xe238, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0xe237, .value=0x64, .type=IO_READ},
        {.addr=0xe238, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01A8) {
    const struct CPU_State initial_cpu = {.pc=0x6a80, .a=0x54, .x=0xbe, .y=0xa6, .sp=0x6c, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x78}, {.addr=0x6a80, .value=0x64}, {.addr=0x6a81, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x6a82, .a=0x54, .x=0xbe, .y=0xa6, .sp=0x6c, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x78}, {.addr=0x6a80, .value=0x64}, {.addr=0x6a81, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a80, .value=0x64, .type=IO_READ},
        {.addr=0x6a81, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01A9) {
    const struct CPU_State initial_cpu = {.pc=0x2525, .a=0x79, .x=0x1c, .y=0x41, .sp=0x2c, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0x4a}, {.addr=0x2525, .value=0x64}, {.addr=0x2526, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x2527, .a=0x79, .x=0x1c, .y=0x41, .sp=0x2c, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0x4a}, {.addr=0x2525, .value=0x64}, {.addr=0x2526, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x2525, .value=0x64, .type=IO_READ},
        {.addr=0x2526, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01AA) {
    const struct CPU_State initial_cpu = {.pc=0x05ab, .a=0xc0, .x=0xb9, .y=0x66, .sp=0x86, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e1, .value=0xda}, {.addr=0x05ab, .value=0x64}, {.addr=0x05ac, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x05ad, .a=0xc0, .x=0xb9, .y=0x66, .sp=0x86, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e1, .value=0xda}, {.addr=0x05ab, .value=0x64}, {.addr=0x05ac, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x05ab, .value=0x64, .type=IO_READ},
        {.addr=0x05ac, .value=0xe1, .type=IO_READ},
        {.addr=0x00e1, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01AB) {
    const struct CPU_State initial_cpu = {.pc=0x29a6, .a=0x0d, .x=0xd1, .y=0x7b, .sp=0xe0, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0x36}, {.addr=0x29a6, .value=0x64}, {.addr=0x29a7, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x29a8, .a=0x0d, .x=0xd1, .y=0x7b, .sp=0xe0, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0x36}, {.addr=0x29a6, .value=0x64}, {.addr=0x29a7, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x29a6, .value=0x64, .type=IO_READ},
        {.addr=0x29a7, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01AC) {
    const struct CPU_State initial_cpu = {.pc=0xd556, .a=0x7d, .x=0x21, .y=0x97, .sp=0x72, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0x6d}, {.addr=0xd556, .value=0x64}, {.addr=0xd557, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0xd558, .a=0x7d, .x=0x21, .y=0x97, .sp=0x72, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0x6d}, {.addr=0xd556, .value=0x64}, {.addr=0xd557, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0xd556, .value=0x64, .type=IO_READ},
        {.addr=0xd557, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0x6d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01AD) {
    const struct CPU_State initial_cpu = {.pc=0x0832, .a=0xf7, .x=0xca, .y=0x9d, .sp=0x0b, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0x65}, {.addr=0x0832, .value=0x64}, {.addr=0x0833, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x0834, .a=0xf7, .x=0xca, .y=0x9d, .sp=0x0b, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0x65}, {.addr=0x0832, .value=0x64}, {.addr=0x0833, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x0832, .value=0x64, .type=IO_READ},
        {.addr=0x0833, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01AE) {
    const struct CPU_State initial_cpu = {.pc=0xc665, .a=0x27, .x=0xa0, .y=0x44, .sp=0xb8, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0xa1}, {.addr=0xc665, .value=0x64}, {.addr=0xc666, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xc667, .a=0x27, .x=0xa0, .y=0x44, .sp=0xb8, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0xa1}, {.addr=0xc665, .value=0x64}, {.addr=0xc666, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xc665, .value=0x64, .type=IO_READ},
        {.addr=0xc666, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01AF) {
    const struct CPU_State initial_cpu = {.pc=0x2bf9, .a=0xba, .x=0x8f, .y=0x59, .sp=0xa1, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0086, .value=0xde}, {.addr=0x2bf9, .value=0x64}, {.addr=0x2bfa, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x2bfb, .a=0xba, .x=0x8f, .y=0x59, .sp=0xa1, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0086, .value=0xde}, {.addr=0x2bf9, .value=0x64}, {.addr=0x2bfa, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x2bf9, .value=0x64, .type=IO_READ},
        {.addr=0x2bfa, .value=0x86, .type=IO_READ},
        {.addr=0x0086, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01B0) {
    const struct CPU_State initial_cpu = {.pc=0xe42b, .a=0x8d, .x=0x33, .y=0xa9, .sp=0x51, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0x79}, {.addr=0xe42b, .value=0x64}, {.addr=0xe42c, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0xe42d, .a=0x8d, .x=0x33, .y=0xa9, .sp=0x51, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0x79}, {.addr=0xe42b, .value=0x64}, {.addr=0xe42c, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0xe42b, .value=0x64, .type=IO_READ},
        {.addr=0xe42c, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0x79, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01B2) {
    const struct CPU_State initial_cpu = {.pc=0x0563, .a=0x1d, .x=0x07, .y=0x57, .sp=0xbd, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dc, .value=0xd0}, {.addr=0x0563, .value=0x64}, {.addr=0x0564, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0x0565, .a=0x1d, .x=0x07, .y=0x57, .sp=0xbd, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dc, .value=0xd0}, {.addr=0x0563, .value=0x64}, {.addr=0x0564, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0x0563, .value=0x64, .type=IO_READ},
        {.addr=0x0564, .value=0xdc, .type=IO_READ},
        {.addr=0x01dc, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01B3) {
    const struct CPU_State initial_cpu = {.pc=0xc099, .a=0x52, .x=0x0d, .y=0xab, .sp=0x9e, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0011, .value=0x33}, {.addr=0xc099, .value=0x64}, {.addr=0xc09a, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0xc09b, .a=0x52, .x=0x0d, .y=0xab, .sp=0x9e, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0011, .value=0x33}, {.addr=0xc099, .value=0x64}, {.addr=0xc09a, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0xc099, .value=0x64, .type=IO_READ},
        {.addr=0xc09a, .value=0x11, .type=IO_READ},
        {.addr=0x0011, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01B4) {
    const struct CPU_State initial_cpu = {.pc=0x02ce, .a=0x8e, .x=0xb6, .y=0x55, .sp=0x79, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0xce}, {.addr=0x02ce, .value=0x64}, {.addr=0x02cf, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x02d0, .a=0x8e, .x=0xb6, .y=0x55, .sp=0x79, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0xce}, {.addr=0x02ce, .value=0x64}, {.addr=0x02cf, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x02ce, .value=0x64, .type=IO_READ},
        {.addr=0x02cf, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01B5) {
    const struct CPU_State initial_cpu = {.pc=0x6674, .a=0xb1, .x=0x60, .y=0x04, .sp=0x02, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0x37}, {.addr=0x6674, .value=0x64}, {.addr=0x6675, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0x6676, .a=0xb1, .x=0x60, .y=0x04, .sp=0x02, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0x37}, {.addr=0x6674, .value=0x64}, {.addr=0x6675, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0x6674, .value=0x64, .type=IO_READ},
        {.addr=0x6675, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01B6) {
    const struct CPU_State initial_cpu = {.pc=0x5d7e, .a=0x79, .x=0xb0, .y=0xcd, .sp=0xe1, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0xbc}, {.addr=0x5d7e, .value=0x64}, {.addr=0x5d7f, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x5d80, .a=0x79, .x=0xb0, .y=0xcd, .sp=0xe1, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0xbc}, {.addr=0x5d7e, .value=0x64}, {.addr=0x5d7f, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d7e, .value=0x64, .type=IO_READ},
        {.addr=0x5d7f, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01B7) {
    const struct CPU_State initial_cpu = {.pc=0x852c, .a=0xc1, .x=0xac, .y=0xf1, .sp=0xaa, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e3, .value=0x53}, {.addr=0x852c, .value=0x64}, {.addr=0x852d, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0x852e, .a=0xc1, .x=0xac, .y=0xf1, .sp=0xaa, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e3, .value=0x53}, {.addr=0x852c, .value=0x64}, {.addr=0x852d, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0x852c, .value=0x64, .type=IO_READ},
        {.addr=0x852d, .value=0xe3, .type=IO_READ},
        {.addr=0x01e3, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01B8) {
    const struct CPU_State initial_cpu = {.pc=0xd613, .a=0xab, .x=0xc7, .y=0x1e, .sp=0xff, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0011, .value=0x9b}, {.addr=0xd613, .value=0x64}, {.addr=0xd614, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0xd615, .a=0xab, .x=0xc7, .y=0x1e, .sp=0xff, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x0011, .value=0x9b}, {.addr=0xd613, .value=0x64}, {.addr=0xd614, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0xd613, .value=0x64, .type=IO_READ},
        {.addr=0xd614, .value=0x11, .type=IO_READ},
        {.addr=0x0011, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01B9) {
    const struct CPU_State initial_cpu = {.pc=0x21d6, .a=0x92, .x=0x8e, .y=0x88, .sp=0x57, .status=0x6f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0x33}, {.addr=0x21d6, .value=0x64}, {.addr=0x21d7, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x21d8, .a=0x92, .x=0x8e, .y=0x88, .sp=0x57, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0x33}, {.addr=0x21d6, .value=0x64}, {.addr=0x21d7, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x21d6, .value=0x64, .type=IO_READ},
        {.addr=0x21d7, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01BA) {
    const struct CPU_State initial_cpu = {.pc=0x04dd, .a=0x65, .x=0xe9, .y=0xa9, .sp=0xa9, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0xd2}, {.addr=0x04dd, .value=0x64}, {.addr=0x04de, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x04df, .a=0x65, .x=0xe9, .y=0xa9, .sp=0xa9, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0xd2}, {.addr=0x04dd, .value=0x64}, {.addr=0x04de, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x04dd, .value=0x64, .type=IO_READ},
        {.addr=0x04de, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01BB) {
    const struct CPU_State initial_cpu = {.pc=0xa8ae, .a=0x29, .x=0xf8, .y=0xb0, .sp=0xd6, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0041, .value=0x1e}, {.addr=0xa8ae, .value=0x64}, {.addr=0xa8af, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0xa8b0, .a=0x29, .x=0xf8, .y=0xb0, .sp=0xd6, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0041, .value=0x1e}, {.addr=0xa8ae, .value=0x64}, {.addr=0xa8af, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0xa8ae, .value=0x64, .type=IO_READ},
        {.addr=0xa8af, .value=0x41, .type=IO_READ},
        {.addr=0x0041, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01BC) {
    const struct CPU_State initial_cpu = {.pc=0xa310, .a=0xe6, .x=0xa4, .y=0xe3, .sp=0xc7, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001e, .value=0x2e}, {.addr=0xa310, .value=0x64}, {.addr=0xa311, .value=0x1e},
    };
    const struct CPU_State final_cpu = {.pc=0xa312, .a=0xe6, .x=0xa4, .y=0xe3, .sp=0xc7, .status=0x99};
    const struct RamEntry final_ram[] = {
        {.addr=0x001e, .value=0x2e}, {.addr=0xa310, .value=0x64}, {.addr=0xa311, .value=0x1e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa310, .value=0x64, .type=IO_READ},
        {.addr=0xa311, .value=0x1e, .type=IO_READ},
        {.addr=0x001e, .value=0x2e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01BD) {
    const struct CPU_State initial_cpu = {.pc=0x26a5, .a=0x41, .x=0xe6, .y=0x63, .sp=0x14, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x01}, {.addr=0x26a5, .value=0x64}, {.addr=0x26a6, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x26a7, .a=0x41, .x=0xe6, .y=0x63, .sp=0x14, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x01}, {.addr=0x26a5, .value=0x64}, {.addr=0x26a6, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x26a5, .value=0x64, .type=IO_READ},
        {.addr=0x26a6, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01BE) {
    const struct CPU_State initial_cpu = {.pc=0xa779, .a=0xd6, .x=0xf7, .y=0xc9, .sp=0x4e, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b8, .value=0x26}, {.addr=0xa779, .value=0x64}, {.addr=0xa77a, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0xa77b, .a=0xd6, .x=0xf7, .y=0xc9, .sp=0x4e, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b8, .value=0x26}, {.addr=0xa779, .value=0x64}, {.addr=0xa77a, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0xa779, .value=0x64, .type=IO_READ},
        {.addr=0xa77a, .value=0xb8, .type=IO_READ},
        {.addr=0x01b8, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01BF) {
    const struct CPU_State initial_cpu = {.pc=0x6f6b, .a=0x6e, .x=0xcb, .y=0x9a, .sp=0xad, .status=0x90};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d6, .value=0x4d}, {.addr=0x6f6b, .value=0x64}, {.addr=0x6f6c, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0x6f6d, .a=0x6e, .x=0xcb, .y=0x9a, .sp=0xad, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d6, .value=0x4d}, {.addr=0x6f6b, .value=0x64}, {.addr=0x6f6c, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f6b, .value=0x64, .type=IO_READ},
        {.addr=0x6f6c, .value=0xd6, .type=IO_READ},
        {.addr=0x00d6, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01C0) {
    const struct CPU_State initial_cpu = {.pc=0x57b3, .a=0x31, .x=0x05, .y=0xcf, .sp=0xcc, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bc, .value=0xf4}, {.addr=0x57b3, .value=0x64}, {.addr=0x57b4, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x57b5, .a=0x31, .x=0x05, .y=0xcf, .sp=0xcc, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bc, .value=0xf4}, {.addr=0x57b3, .value=0x64}, {.addr=0x57b4, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x57b3, .value=0x64, .type=IO_READ},
        {.addr=0x57b4, .value=0xbc, .type=IO_READ},
        {.addr=0x01bc, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01C1) {
    const struct CPU_State initial_cpu = {.pc=0x13b7, .a=0x3b, .x=0xbf, .y=0x7b, .sp=0xaa, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0174, .value=0xb9}, {.addr=0x13b7, .value=0x64}, {.addr=0x13b8, .value=0x74},
    };
    const struct CPU_State final_cpu = {.pc=0x13b9, .a=0x3b, .x=0xbf, .y=0x7b, .sp=0xaa, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0174, .value=0xb9}, {.addr=0x13b7, .value=0x64}, {.addr=0x13b8, .value=0x74},
    };
    const struct BusEvent events[] = {
        {.addr=0x13b7, .value=0x64, .type=IO_READ},
        {.addr=0x13b8, .value=0x74, .type=IO_READ},
        {.addr=0x0174, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01C2) {
    const struct CPU_State initial_cpu = {.pc=0x4dfb, .a=0x02, .x=0xd3, .y=0x61, .sp=0xe0, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004e, .value=0xd4}, {.addr=0x4dfb, .value=0x64}, {.addr=0x4dfc, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0x4dfd, .a=0x02, .x=0xd3, .y=0x61, .sp=0xe0, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x004e, .value=0xd4}, {.addr=0x4dfb, .value=0x64}, {.addr=0x4dfc, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4dfb, .value=0x64, .type=IO_READ},
        {.addr=0x4dfc, .value=0x4e, .type=IO_READ},
        {.addr=0x004e, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01C3) {
    const struct CPU_State initial_cpu = {.pc=0xf718, .a=0xbb, .x=0x14, .y=0x0a, .sp=0xe1, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0xb3}, {.addr=0xf718, .value=0x64}, {.addr=0xf719, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0xf71a, .a=0xbb, .x=0x14, .y=0x0a, .sp=0xe1, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0xb3}, {.addr=0xf718, .value=0x64}, {.addr=0xf719, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0xf718, .value=0x64, .type=IO_READ},
        {.addr=0xf719, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01C4) {
    const struct CPU_State initial_cpu = {.pc=0xe42b, .a=0x53, .x=0x28, .y=0xcd, .sp=0x8f, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0084, .value=0xe0}, {.addr=0xe42b, .value=0x64}, {.addr=0xe42c, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0xe42d, .a=0x53, .x=0x28, .y=0xcd, .sp=0x8f, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0084, .value=0xe0}, {.addr=0xe42b, .value=0x64}, {.addr=0xe42c, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0xe42b, .value=0x64, .type=IO_READ},
        {.addr=0xe42c, .value=0x84, .type=IO_READ},
        {.addr=0x0084, .value=0xe0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01C5) {
    const struct CPU_State initial_cpu = {.pc=0x5316, .a=0xfc, .x=0x47, .y=0x40, .sp=0x59, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0092, .value=0x82}, {.addr=0x5316, .value=0x64}, {.addr=0x5317, .value=0x92},
    };
    const struct CPU_State final_cpu = {.pc=0x5318, .a=0xfc, .x=0x47, .y=0x40, .sp=0x59, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0092, .value=0x82}, {.addr=0x5316, .value=0x64}, {.addr=0x5317, .value=0x92},
    };
    const struct BusEvent events[] = {
        {.addr=0x5316, .value=0x64, .type=IO_READ},
        {.addr=0x5317, .value=0x92, .type=IO_READ},
        {.addr=0x0092, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01C7) {
    const struct CPU_State initial_cpu = {.pc=0x522e, .a=0x49, .x=0x9d, .y=0xf8, .sp=0x65, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0xe5}, {.addr=0x522e, .value=0x64}, {.addr=0x522f, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x5230, .a=0x49, .x=0x9d, .y=0xf8, .sp=0x65, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0xe5}, {.addr=0x522e, .value=0x64}, {.addr=0x522f, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x522e, .value=0x64, .type=IO_READ},
        {.addr=0x522f, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01C8) {
    const struct CPU_State initial_cpu = {.pc=0xa843, .a=0x3f, .x=0x34, .y=0x6b, .sp=0xa0, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00db, .value=0x2a}, {.addr=0xa843, .value=0x64}, {.addr=0xa844, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0xa845, .a=0x3f, .x=0x34, .y=0x6b, .sp=0xa0, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00db, .value=0x2a}, {.addr=0xa843, .value=0x64}, {.addr=0xa844, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0xa843, .value=0x64, .type=IO_READ},
        {.addr=0xa844, .value=0xdb, .type=IO_READ},
        {.addr=0x00db, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01CA) {
    const struct CPU_State initial_cpu = {.pc=0x6982, .a=0x37, .x=0x5f, .y=0xc8, .sp=0x65, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0160, .value=0x56}, {.addr=0x6982, .value=0x64}, {.addr=0x6983, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x6984, .a=0x37, .x=0x5f, .y=0xc8, .sp=0x65, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0160, .value=0x56}, {.addr=0x6982, .value=0x64}, {.addr=0x6983, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x6982, .value=0x64, .type=IO_READ},
        {.addr=0x6983, .value=0x60, .type=IO_READ},
        {.addr=0x0160, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01CC) {
    const struct CPU_State initial_cpu = {.pc=0xd05a, .a=0x7e, .x=0xef, .y=0x1f, .sp=0x36, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d4, .value=0xad}, {.addr=0xd05a, .value=0x64}, {.addr=0xd05b, .value=0xd4},
    };
    const struct CPU_State final_cpu = {.pc=0xd05c, .a=0x7e, .x=0xef, .y=0x1f, .sp=0x36, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d4, .value=0xad}, {.addr=0xd05a, .value=0x64}, {.addr=0xd05b, .value=0xd4},
    };
    const struct BusEvent events[] = {
        {.addr=0xd05a, .value=0x64, .type=IO_READ},
        {.addr=0xd05b, .value=0xd4, .type=IO_READ},
        {.addr=0x01d4, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01CD) {
    const struct CPU_State initial_cpu = {.pc=0x4706, .a=0x91, .x=0x65, .y=0x8a, .sp=0x30, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0x93}, {.addr=0x4706, .value=0x64}, {.addr=0x4707, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x4708, .a=0x91, .x=0x65, .y=0x8a, .sp=0x30, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0x93}, {.addr=0x4706, .value=0x64}, {.addr=0x4707, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x4706, .value=0x64, .type=IO_READ},
        {.addr=0x4707, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01CE) {
    const struct CPU_State initial_cpu = {.pc=0xcd1f, .a=0x0c, .x=0xab, .y=0xf5, .sp=0x44, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0xcf}, {.addr=0xcd1f, .value=0x64}, {.addr=0xcd20, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0xcd21, .a=0x0c, .x=0xab, .y=0xf5, .sp=0x44, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0xcf}, {.addr=0xcd1f, .value=0x64}, {.addr=0xcd20, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0xcd1f, .value=0x64, .type=IO_READ},
        {.addr=0xcd20, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01CF) {
    const struct CPU_State initial_cpu = {.pc=0x0db4, .a=0x63, .x=0x6a, .y=0x4e, .sp=0x9a, .status=0x48};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d8, .value=0xed}, {.addr=0x0db4, .value=0x64}, {.addr=0x0db5, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0x0db6, .a=0x63, .x=0x6a, .y=0x4e, .sp=0x9a, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d8, .value=0xed}, {.addr=0x0db4, .value=0x64}, {.addr=0x0db5, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0x0db4, .value=0x64, .type=IO_READ},
        {.addr=0x0db5, .value=0xd8, .type=IO_READ},
        {.addr=0x00d8, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01D0) {
    const struct CPU_State initial_cpu = {.pc=0xef05, .a=0xff, .x=0x2a, .y=0x57, .sp=0x44, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002e, .value=0x9d}, {.addr=0xef05, .value=0x64}, {.addr=0xef06, .value=0x2e},
    };
    const struct CPU_State final_cpu = {.pc=0xef07, .a=0xff, .x=0x2a, .y=0x57, .sp=0x44, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x002e, .value=0x9d}, {.addr=0xef05, .value=0x64}, {.addr=0xef06, .value=0x2e},
    };
    const struct BusEvent events[] = {
        {.addr=0xef05, .value=0x64, .type=IO_READ},
        {.addr=0xef06, .value=0x2e, .type=IO_READ},
        {.addr=0x002e, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01D1) {
    const struct CPU_State initial_cpu = {.pc=0x3424, .a=0xb7, .x=0x90, .y=0x71, .sp=0x8a, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ca, .value=0x86}, {.addr=0x3424, .value=0x64}, {.addr=0x3425, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x3426, .a=0xb7, .x=0x90, .y=0x71, .sp=0x8a, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ca, .value=0x86}, {.addr=0x3424, .value=0x64}, {.addr=0x3425, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x3424, .value=0x64, .type=IO_READ},
        {.addr=0x3425, .value=0xca, .type=IO_READ},
        {.addr=0x00ca, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01D2) {
    const struct CPU_State initial_cpu = {.pc=0x70c9, .a=0x24, .x=0x8e, .y=0x06, .sp=0xbb, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0x88}, {.addr=0x70c9, .value=0x64}, {.addr=0x70ca, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x70cb, .a=0x24, .x=0x8e, .y=0x06, .sp=0xbb, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0x88}, {.addr=0x70c9, .value=0x64}, {.addr=0x70ca, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x70c9, .value=0x64, .type=IO_READ},
        {.addr=0x70ca, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01D3) {
    const struct CPU_State initial_cpu = {.pc=0x57bc, .a=0xdf, .x=0x50, .y=0x87, .sp=0x7e, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0xfc}, {.addr=0x57bc, .value=0x64}, {.addr=0x57bd, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x57be, .a=0xdf, .x=0x50, .y=0x87, .sp=0x7e, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0xfc}, {.addr=0x57bc, .value=0x64}, {.addr=0x57bd, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x57bc, .value=0x64, .type=IO_READ},
        {.addr=0x57bd, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01D4) {
    const struct CPU_State initial_cpu = {.pc=0x72e6, .a=0xb5, .x=0x65, .y=0x84, .sp=0x97, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0xab}, {.addr=0x72e6, .value=0x64}, {.addr=0x72e7, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0x72e8, .a=0xb5, .x=0x65, .y=0x84, .sp=0x97, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0xab}, {.addr=0x72e6, .value=0x64}, {.addr=0x72e7, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0x72e6, .value=0x64, .type=IO_READ},
        {.addr=0x72e7, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01D5) {
    const struct CPU_State initial_cpu = {.pc=0x1b90, .a=0x65, .x=0xef, .y=0x42, .sp=0x3e, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0x8e}, {.addr=0x1b90, .value=0x64}, {.addr=0x1b91, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0x1b92, .a=0x65, .x=0xef, .y=0x42, .sp=0x3e, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0x8e}, {.addr=0x1b90, .value=0x64}, {.addr=0x1b91, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0x1b90, .value=0x64, .type=IO_READ},
        {.addr=0x1b91, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01D6) {
    const struct CPU_State initial_cpu = {.pc=0x184a, .a=0x75, .x=0xbd, .y=0x98, .sp=0xef, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0xbc}, {.addr=0x184a, .value=0x64}, {.addr=0x184b, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x184c, .a=0x75, .x=0xbd, .y=0x98, .sp=0xef, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0xbc}, {.addr=0x184a, .value=0x64}, {.addr=0x184b, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x184a, .value=0x64, .type=IO_READ},
        {.addr=0x184b, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0xbc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01D7) {
    const struct CPU_State initial_cpu = {.pc=0x6801, .a=0x1c, .x=0x8a, .y=0x67, .sp=0xcc, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0147, .value=0xc7}, {.addr=0x6801, .value=0x64}, {.addr=0x6802, .value=0x47},
    };
    const struct CPU_State final_cpu = {.pc=0x6803, .a=0x1c, .x=0x8a, .y=0x67, .sp=0xcc, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x0147, .value=0xc7}, {.addr=0x6801, .value=0x64}, {.addr=0x6802, .value=0x47},
    };
    const struct BusEvent events[] = {
        {.addr=0x6801, .value=0x64, .type=IO_READ},
        {.addr=0x6802, .value=0x47, .type=IO_READ},
        {.addr=0x0147, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01D8) {
    const struct CPU_State initial_cpu = {.pc=0xd334, .a=0xaa, .x=0x7e, .y=0x64, .sp=0x18, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0x4e}, {.addr=0xd334, .value=0x64}, {.addr=0xd335, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0xd336, .a=0xaa, .x=0x7e, .y=0x64, .sp=0x18, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0x4e}, {.addr=0xd334, .value=0x64}, {.addr=0xd335, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0xd334, .value=0x64, .type=IO_READ},
        {.addr=0xd335, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01D9) {
    const struct CPU_State initial_cpu = {.pc=0xbd83, .a=0x1a, .x=0x06, .y=0xf0, .sp=0x74, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d8, .value=0xe3}, {.addr=0xbd83, .value=0x64}, {.addr=0xbd84, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0xbd85, .a=0x1a, .x=0x06, .y=0xf0, .sp=0x74, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d8, .value=0xe3}, {.addr=0xbd83, .value=0x64}, {.addr=0xbd84, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd83, .value=0x64, .type=IO_READ},
        {.addr=0xbd84, .value=0xd8, .type=IO_READ},
        {.addr=0x01d8, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01DA) {
    const struct CPU_State initial_cpu = {.pc=0xb23a, .a=0x87, .x=0x52, .y=0x5c, .sp=0xfa, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c7, .value=0xe9}, {.addr=0xb23a, .value=0x64}, {.addr=0xb23b, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0xb23c, .a=0x87, .x=0x52, .y=0x5c, .sp=0xfa, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c7, .value=0xe9}, {.addr=0xb23a, .value=0x64}, {.addr=0xb23b, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0xb23a, .value=0x64, .type=IO_READ},
        {.addr=0xb23b, .value=0xc7, .type=IO_READ},
        {.addr=0x01c7, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01DB) {
    const struct CPU_State initial_cpu = {.pc=0x1984, .a=0xa0, .x=0x1b, .y=0x6d, .sp=0x52, .status=0x65};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0103, .value=0xba}, {.addr=0x1984, .value=0x64}, {.addr=0x1985, .value=0x03},
    };
    const struct CPU_State final_cpu = {.pc=0x1986, .a=0xa0, .x=0x1b, .y=0x6d, .sp=0x52, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0103, .value=0xba}, {.addr=0x1984, .value=0x64}, {.addr=0x1985, .value=0x03},
    };
    const struct BusEvent events[] = {
        {.addr=0x1984, .value=0x64, .type=IO_READ},
        {.addr=0x1985, .value=0x03, .type=IO_READ},
        {.addr=0x0103, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01DC) {
    const struct CPU_State initial_cpu = {.pc=0x84a8, .a=0xad, .x=0x4f, .y=0xc8, .sp=0x56, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0xcb}, {.addr=0x84a8, .value=0x64}, {.addr=0x84a9, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x84aa, .a=0xad, .x=0x4f, .y=0xc8, .sp=0x56, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0xcb}, {.addr=0x84a8, .value=0x64}, {.addr=0x84a9, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x84a8, .value=0x64, .type=IO_READ},
        {.addr=0x84a9, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01DD) {
    const struct CPU_State initial_cpu = {.pc=0x1c69, .a=0x36, .x=0x68, .y=0x39, .sp=0xc3, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0x8c}, {.addr=0x1c69, .value=0x64}, {.addr=0x1c6a, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0x1c6b, .a=0x36, .x=0x68, .y=0x39, .sp=0xc3, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0x8c}, {.addr=0x1c69, .value=0x64}, {.addr=0x1c6a, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c69, .value=0x64, .type=IO_READ},
        {.addr=0x1c6a, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0x8c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01DE) {
    const struct CPU_State initial_cpu = {.pc=0xff99, .a=0xa5, .x=0xf1, .y=0x30, .sp=0x60, .status=0xe0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f7, .value=0x18}, {.addr=0xff99, .value=0x64}, {.addr=0xff9a, .value=0xf7},
    };
    const struct CPU_State final_cpu = {.pc=0xff9b, .a=0xa5, .x=0xf1, .y=0x30, .sp=0x60, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f7, .value=0x18}, {.addr=0xff99, .value=0x64}, {.addr=0xff9a, .value=0xf7},
    };
    const struct BusEvent events[] = {
        {.addr=0xff99, .value=0x64, .type=IO_READ},
        {.addr=0xff9a, .value=0xf7, .type=IO_READ},
        {.addr=0x01f7, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01DF) {
    const struct CPU_State initial_cpu = {.pc=0x055e, .a=0x09, .x=0xc0, .y=0x31, .sp=0x99, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0xb8}, {.addr=0x055e, .value=0x64}, {.addr=0x055f, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x0560, .a=0x09, .x=0xc0, .y=0x31, .sp=0x99, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0xb8}, {.addr=0x055e, .value=0x64}, {.addr=0x055f, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x055e, .value=0x64, .type=IO_READ},
        {.addr=0x055f, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01E0) {
    const struct CPU_State initial_cpu = {.pc=0xa765, .a=0xec, .x=0x67, .y=0xff, .sp=0x0b, .status=0x15};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0x97}, {.addr=0xa765, .value=0x64}, {.addr=0xa766, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0xa767, .a=0xec, .x=0x67, .y=0xff, .sp=0x0b, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0x97}, {.addr=0xa765, .value=0x64}, {.addr=0xa766, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0xa765, .value=0x64, .type=IO_READ},
        {.addr=0xa766, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01E1) {
    const struct CPU_State initial_cpu = {.pc=0xb4e5, .a=0x71, .x=0xd0, .y=0x5c, .sp=0xd8, .status=0x0b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0x55}, {.addr=0xb4e5, .value=0x64}, {.addr=0xb4e6, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0xb4e7, .a=0x71, .x=0xd0, .y=0x5c, .sp=0xd8, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0x55}, {.addr=0xb4e5, .value=0x64}, {.addr=0xb4e6, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0xb4e5, .value=0x64, .type=IO_READ},
        {.addr=0xb4e6, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01E2) {
    const struct CPU_State initial_cpu = {.pc=0xbac5, .a=0x8e, .x=0x3c, .y=0x11, .sp=0xab, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0086, .value=0x3d}, {.addr=0xbac5, .value=0x64}, {.addr=0xbac6, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0xbac7, .a=0x8e, .x=0x3c, .y=0x11, .sp=0xab, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0086, .value=0x3d}, {.addr=0xbac5, .value=0x64}, {.addr=0xbac6, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0xbac5, .value=0x64, .type=IO_READ},
        {.addr=0xbac6, .value=0x86, .type=IO_READ},
        {.addr=0x0086, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01E3) {
    const struct CPU_State initial_cpu = {.pc=0xebb6, .a=0x5b, .x=0x84, .y=0xac, .sp=0xd2, .status=0xe3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0x0a}, {.addr=0xebb6, .value=0x64}, {.addr=0xebb7, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0xebb8, .a=0x5b, .x=0x84, .y=0xac, .sp=0xd2, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0x0a}, {.addr=0xebb6, .value=0x64}, {.addr=0xebb7, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0xebb6, .value=0x64, .type=IO_READ},
        {.addr=0xebb7, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01E4) {
    const struct CPU_State initial_cpu = {.pc=0x5b5c, .a=0x7b, .x=0xa0, .y=0x18, .sp=0x16, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e9, .value=0x09}, {.addr=0x5b5c, .value=0x64}, {.addr=0x5b5d, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x5b5e, .a=0x7b, .x=0xa0, .y=0x18, .sp=0x16, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e9, .value=0x09}, {.addr=0x5b5c, .value=0x64}, {.addr=0x5b5d, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x5b5c, .value=0x64, .type=IO_READ},
        {.addr=0x5b5d, .value=0xe9, .type=IO_READ},
        {.addr=0x00e9, .value=0x09, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01E5) {
    const struct CPU_State initial_cpu = {.pc=0xabdb, .a=0xdc, .x=0x9c, .y=0x2a, .sp=0xbf, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0094, .value=0x62}, {.addr=0xabdb, .value=0x64}, {.addr=0xabdc, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0xabdd, .a=0xdc, .x=0x9c, .y=0x2a, .sp=0xbf, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0094, .value=0x62}, {.addr=0xabdb, .value=0x64}, {.addr=0xabdc, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0xabdb, .value=0x64, .type=IO_READ},
        {.addr=0xabdc, .value=0x94, .type=IO_READ},
        {.addr=0x0094, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01E6) {
    const struct CPU_State initial_cpu = {.pc=0x30bc, .a=0x2a, .x=0xae, .y=0xc7, .sp=0xc1, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ad, .value=0x51}, {.addr=0x30bc, .value=0x64}, {.addr=0x30bd, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x30be, .a=0x2a, .x=0xae, .y=0xc7, .sp=0xc1, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ad, .value=0x51}, {.addr=0x30bc, .value=0x64}, {.addr=0x30bd, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x30bc, .value=0x64, .type=IO_READ},
        {.addr=0x30bd, .value=0xad, .type=IO_READ},
        {.addr=0x00ad, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01E7) {
    const struct CPU_State initial_cpu = {.pc=0x3c62, .a=0x01, .x=0x30, .y=0x54, .sp=0x7b, .status=0x7d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0168, .value=0x7a}, {.addr=0x3c62, .value=0x64}, {.addr=0x3c63, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0x3c64, .a=0x01, .x=0x30, .y=0x54, .sp=0x7b, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0168, .value=0x7a}, {.addr=0x3c62, .value=0x64}, {.addr=0x3c63, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c62, .value=0x64, .type=IO_READ},
        {.addr=0x3c63, .value=0x68, .type=IO_READ},
        {.addr=0x0168, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01E8) {
    const struct CPU_State initial_cpu = {.pc=0x88f8, .a=0x2f, .x=0x88, .y=0xfe, .sp=0xd0, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010b, .value=0xde}, {.addr=0x88f8, .value=0x64}, {.addr=0x88f9, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x88fa, .a=0x2f, .x=0x88, .y=0xfe, .sp=0xd0, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x010b, .value=0xde}, {.addr=0x88f8, .value=0x64}, {.addr=0x88f9, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x88f8, .value=0x64, .type=IO_READ},
        {.addr=0x88f9, .value=0x0b, .type=IO_READ},
        {.addr=0x010b, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01E9) {
    const struct CPU_State initial_cpu = {.pc=0xc37a, .a=0xc7, .x=0x56, .y=0xbd, .sp=0x9a, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bb, .value=0x5d}, {.addr=0xc37a, .value=0x64}, {.addr=0xc37b, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0xc37c, .a=0xc7, .x=0x56, .y=0xbd, .sp=0x9a, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bb, .value=0x5d}, {.addr=0xc37a, .value=0x64}, {.addr=0xc37b, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0xc37a, .value=0x64, .type=IO_READ},
        {.addr=0xc37b, .value=0xbb, .type=IO_READ},
        {.addr=0x00bb, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01EA) {
    const struct CPU_State initial_cpu = {.pc=0x91a7, .a=0x8c, .x=0x4a, .y=0x52, .sp=0x2b, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0044, .value=0x53}, {.addr=0x91a7, .value=0x64}, {.addr=0x91a8, .value=0x44},
    };
    const struct CPU_State final_cpu = {.pc=0x91a9, .a=0x8c, .x=0x4a, .y=0x52, .sp=0x2b, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0044, .value=0x53}, {.addr=0x91a7, .value=0x64}, {.addr=0x91a8, .value=0x44},
    };
    const struct BusEvent events[] = {
        {.addr=0x91a7, .value=0x64, .type=IO_READ},
        {.addr=0x91a8, .value=0x44, .type=IO_READ},
        {.addr=0x0044, .value=0x53, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01EB) {
    const struct CPU_State initial_cpu = {.pc=0xd18d, .a=0xee, .x=0xe2, .y=0xaf, .sp=0x0a, .status=0xc6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0x40}, {.addr=0xd18d, .value=0x64}, {.addr=0xd18e, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xd18f, .a=0xee, .x=0xe2, .y=0xaf, .sp=0x0a, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0x40}, {.addr=0xd18d, .value=0x64}, {.addr=0xd18e, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xd18d, .value=0x64, .type=IO_READ},
        {.addr=0xd18e, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01EC) {
    const struct CPU_State initial_cpu = {.pc=0xa9e9, .a=0xa0, .x=0x26, .y=0x99, .sp=0x19, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0x5b}, {.addr=0xa9e9, .value=0x64}, {.addr=0xa9ea, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0xa9eb, .a=0xa0, .x=0x26, .y=0x99, .sp=0x19, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0x5b}, {.addr=0xa9e9, .value=0x64}, {.addr=0xa9ea, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9e9, .value=0x64, .type=IO_READ},
        {.addr=0xa9ea, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0x5b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01ED) {
    const struct CPU_State initial_cpu = {.pc=0x600f, .a=0x51, .x=0x65, .y=0x6e, .sp=0xdb, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0xf4}, {.addr=0x600f, .value=0x64}, {.addr=0x6010, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0x6011, .a=0x51, .x=0x65, .y=0x6e, .sp=0xdb, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0xf4}, {.addr=0x600f, .value=0x64}, {.addr=0x6010, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0x600f, .value=0x64, .type=IO_READ},
        {.addr=0x6010, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01EE) {
    const struct CPU_State initial_cpu = {.pc=0xd34d, .a=0x21, .x=0x59, .y=0x95, .sp=0x07, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0x1e}, {.addr=0xd34d, .value=0x64}, {.addr=0xd34e, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xd34f, .a=0x21, .x=0x59, .y=0x95, .sp=0x07, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0x1e}, {.addr=0xd34d, .value=0x64}, {.addr=0xd34e, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xd34d, .value=0x64, .type=IO_READ},
        {.addr=0xd34e, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01EF) {
    const struct CPU_State initial_cpu = {.pc=0x6060, .a=0xd2, .x=0xd9, .y=0xc5, .sp=0xe1, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0x38}, {.addr=0x6060, .value=0x64}, {.addr=0x6061, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x6062, .a=0xd2, .x=0xd9, .y=0xc5, .sp=0xe1, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0x38}, {.addr=0x6060, .value=0x64}, {.addr=0x6061, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x6060, .value=0x64, .type=IO_READ},
        {.addr=0x6061, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01F0) {
    const struct CPU_State initial_cpu = {.pc=0xa768, .a=0xd3, .x=0xf7, .y=0x03, .sp=0xea, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0108, .value=0xc5}, {.addr=0xa768, .value=0x64}, {.addr=0xa769, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xa76a, .a=0xd3, .x=0xf7, .y=0x03, .sp=0xea, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0108, .value=0xc5}, {.addr=0xa768, .value=0x64}, {.addr=0xa769, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xa768, .value=0x64, .type=IO_READ},
        {.addr=0xa769, .value=0x08, .type=IO_READ},
        {.addr=0x0108, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01F1) {
    const struct CPU_State initial_cpu = {.pc=0xb757, .a=0x75, .x=0x7f, .y=0x5b, .sp=0xf5, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cf, .value=0xd6}, {.addr=0xb757, .value=0x64}, {.addr=0xb758, .value=0xcf},
    };
    const struct CPU_State final_cpu = {.pc=0xb759, .a=0x75, .x=0x7f, .y=0x5b, .sp=0xf5, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cf, .value=0xd6}, {.addr=0xb757, .value=0x64}, {.addr=0xb758, .value=0xcf},
    };
    const struct BusEvent events[] = {
        {.addr=0xb757, .value=0x64, .type=IO_READ},
        {.addr=0xb758, .value=0xcf, .type=IO_READ},
        {.addr=0x00cf, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01F2) {
    const struct CPU_State initial_cpu = {.pc=0xfe1c, .a=0x11, .x=0xec, .y=0x9e, .sp=0x66, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e3, .value=0x37}, {.addr=0xfe1c, .value=0x64}, {.addr=0xfe1d, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0xfe1e, .a=0x11, .x=0xec, .y=0x9e, .sp=0x66, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e3, .value=0x37}, {.addr=0xfe1c, .value=0x64}, {.addr=0xfe1d, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe1c, .value=0x64, .type=IO_READ},
        {.addr=0xfe1d, .value=0xe3, .type=IO_READ},
        {.addr=0x00e3, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01F3) {
    const struct CPU_State initial_cpu = {.pc=0x5d81, .a=0x17, .x=0x2d, .y=0x40, .sp=0x7f, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a9, .value=0xbd}, {.addr=0x5d81, .value=0x64}, {.addr=0x5d82, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x5d83, .a=0x17, .x=0x2d, .y=0x40, .sp=0x7f, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a9, .value=0xbd}, {.addr=0x5d81, .value=0x64}, {.addr=0x5d82, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x5d81, .value=0x64, .type=IO_READ},
        {.addr=0x5d82, .value=0xa9, .type=IO_READ},
        {.addr=0x01a9, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01F4) {
    const struct CPU_State initial_cpu = {.pc=0x7292, .a=0xf0, .x=0x98, .y=0x16, .sp=0xc1, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01aa, .value=0x85}, {.addr=0x7292, .value=0x64}, {.addr=0x7293, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x7294, .a=0xf0, .x=0x98, .y=0x16, .sp=0xc1, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01aa, .value=0x85}, {.addr=0x7292, .value=0x64}, {.addr=0x7293, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x7292, .value=0x64, .type=IO_READ},
        {.addr=0x7293, .value=0xaa, .type=IO_READ},
        {.addr=0x01aa, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01F5) {
    const struct CPU_State initial_cpu = {.pc=0xfc23, .a=0xbc, .x=0xb9, .y=0xaf, .sp=0x2f, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0084, .value=0x60}, {.addr=0xfc23, .value=0x64}, {.addr=0xfc24, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0xfc25, .a=0xbc, .x=0xb9, .y=0xaf, .sp=0x2f, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0084, .value=0x60}, {.addr=0xfc23, .value=0x64}, {.addr=0xfc24, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc23, .value=0x64, .type=IO_READ},
        {.addr=0xfc24, .value=0x84, .type=IO_READ},
        {.addr=0x0084, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01F6) {
    const struct CPU_State initial_cpu = {.pc=0x8de3, .a=0xec, .x=0x78, .y=0x8d, .sp=0xce, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010c, .value=0xff}, {.addr=0x8de3, .value=0x64}, {.addr=0x8de4, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x8de5, .a=0xec, .x=0x78, .y=0x8d, .sp=0xce, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x010c, .value=0xff}, {.addr=0x8de3, .value=0x64}, {.addr=0x8de4, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x8de3, .value=0x64, .type=IO_READ},
        {.addr=0x8de4, .value=0x0c, .type=IO_READ},
        {.addr=0x010c, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01F7) {
    const struct CPU_State initial_cpu = {.pc=0x5695, .a=0x91, .x=0x38, .y=0x2d, .sp=0xdc, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0x64}, {.addr=0x5695, .value=0x64}, {.addr=0x5696, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x5697, .a=0x91, .x=0x38, .y=0x2d, .sp=0xdc, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0x64}, {.addr=0x5695, .value=0x64}, {.addr=0x5696, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x5695, .value=0x64, .type=IO_READ},
        {.addr=0x5696, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0x64, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01F8) {
    const struct CPU_State initial_cpu = {.pc=0x9da9, .a=0x2e, .x=0xde, .y=0x9a, .sp=0x54, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0104, .value=0x4f}, {.addr=0x9da9, .value=0x64}, {.addr=0x9daa, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x9dab, .a=0x2e, .x=0xde, .y=0x9a, .sp=0x54, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0104, .value=0x4f}, {.addr=0x9da9, .value=0x64}, {.addr=0x9daa, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x9da9, .value=0x64, .type=IO_READ},
        {.addr=0x9daa, .value=0x04, .type=IO_READ},
        {.addr=0x0104, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01F9) {
    const struct CPU_State initial_cpu = {.pc=0x6335, .a=0x18, .x=0x32, .y=0xcc, .sp=0x68, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0x7d}, {.addr=0x6335, .value=0x64}, {.addr=0x6336, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x6337, .a=0x18, .x=0x32, .y=0xcc, .sp=0x68, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0x7d}, {.addr=0x6335, .value=0x64}, {.addr=0x6336, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x6335, .value=0x64, .type=IO_READ},
        {.addr=0x6336, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0x7d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01FA) {
    const struct CPU_State initial_cpu = {.pc=0xa9f0, .a=0x46, .x=0x88, .y=0xbc, .sp=0xba, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01de, .value=0xc3}, {.addr=0xa9f0, .value=0x64}, {.addr=0xa9f1, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0xa9f2, .a=0x46, .x=0x88, .y=0xbc, .sp=0xba, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01de, .value=0xc3}, {.addr=0xa9f0, .value=0x64}, {.addr=0xa9f1, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9f0, .value=0x64, .type=IO_READ},
        {.addr=0xa9f1, .value=0xde, .type=IO_READ},
        {.addr=0x01de, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01FB) {
    const struct CPU_State initial_cpu = {.pc=0x08c5, .a=0x11, .x=0xc3, .y=0xeb, .sp=0xdd, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0167, .value=0x6f}, {.addr=0x08c5, .value=0x64}, {.addr=0x08c6, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x08c7, .a=0x11, .x=0xc3, .y=0xeb, .sp=0xdd, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0167, .value=0x6f}, {.addr=0x08c5, .value=0x64}, {.addr=0x08c6, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x08c5, .value=0x64, .type=IO_READ},
        {.addr=0x08c6, .value=0x67, .type=IO_READ},
        {.addr=0x0167, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01FC) {
    const struct CPU_State initial_cpu = {.pc=0x0129, .a=0x61, .x=0xd9, .y=0x2a, .sp=0xd9, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0x02}, {.addr=0x0129, .value=0x64}, {.addr=0x012a, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x012b, .a=0x61, .x=0xd9, .y=0x2a, .sp=0xd9, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0x02}, {.addr=0x0129, .value=0x64}, {.addr=0x012a, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x0129, .value=0x64, .type=IO_READ},
        {.addr=0x012a, .value=0xab, .type=IO_READ},
        {.addr=0x00ab, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01FD) {
    const struct CPU_State initial_cpu = {.pc=0xb01d, .a=0xa1, .x=0xd4, .y=0x46, .sp=0x24, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e0, .value=0xd6}, {.addr=0xb01d, .value=0x64}, {.addr=0xb01e, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0xb01f, .a=0xa1, .x=0xd4, .y=0x46, .sp=0x24, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e0, .value=0xd6}, {.addr=0xb01d, .value=0x64}, {.addr=0xb01e, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0xb01d, .value=0x64, .type=IO_READ},
        {.addr=0xb01e, .value=0xe0, .type=IO_READ},
        {.addr=0x00e0, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01FE) {
    const struct CPU_State initial_cpu = {.pc=0xdfb0, .a=0xd0, .x=0x3e, .y=0x81, .sp=0xb4, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c2, .value=0x10}, {.addr=0xdfb0, .value=0x64}, {.addr=0xdfb1, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xdfb2, .a=0xd0, .x=0x3e, .y=0x81, .sp=0xb4, .status=0xa5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c2, .value=0x10}, {.addr=0xdfb0, .value=0x64}, {.addr=0xdfb1, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xdfb0, .value=0x64, .type=IO_READ},
        {.addr=0xdfb1, .value=0xc2, .type=IO_READ},
        {.addr=0x01c2, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_01FF) {
    const struct CPU_State initial_cpu = {.pc=0x9861, .a=0x39, .x=0xaf, .y=0x26, .sp=0x37, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cd, .value=0x9a}, {.addr=0x9861, .value=0x64}, {.addr=0x9862, .value=0xcd},
    };
    const struct CPU_State final_cpu = {.pc=0x9863, .a=0x39, .x=0xaf, .y=0x26, .sp=0x37, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cd, .value=0x9a}, {.addr=0x9861, .value=0x64}, {.addr=0x9862, .value=0xcd},
    };
    const struct BusEvent events[] = {
        {.addr=0x9861, .value=0x64, .type=IO_READ},
        {.addr=0x9862, .value=0xcd, .type=IO_READ},
        {.addr=0x01cd, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 01FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0200) {
    const struct CPU_State initial_cpu = {.pc=0xf9ca, .a=0xa0, .x=0xfb, .y=0xce, .sp=0x5e, .status=0x29};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e6, .value=0xd6}, {.addr=0xf9ca, .value=0x64}, {.addr=0xf9cb, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xf9cc, .a=0xa0, .x=0xfb, .y=0xce, .sp=0x5e, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e6, .value=0xd6}, {.addr=0xf9ca, .value=0x64}, {.addr=0xf9cb, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xf9ca, .value=0x64, .type=IO_READ},
        {.addr=0xf9cb, .value=0xe6, .type=IO_READ},
        {.addr=0x01e6, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0200", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0201) {
    const struct CPU_State initial_cpu = {.pc=0x37f8, .a=0xa4, .x=0x53, .y=0x41, .sp=0x28, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0x8a}, {.addr=0x37f8, .value=0x64}, {.addr=0x37f9, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x37fa, .a=0xa4, .x=0x53, .y=0x41, .sp=0x28, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0x8a}, {.addr=0x37f8, .value=0x64}, {.addr=0x37f9, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x37f8, .value=0x64, .type=IO_READ},
        {.addr=0x37f9, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0x8a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0201", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0202) {
    const struct CPU_State initial_cpu = {.pc=0xce71, .a=0x5b, .x=0x18, .y=0xd8, .sp=0xce, .status=0xcb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005f, .value=0x62}, {.addr=0xce71, .value=0x64}, {.addr=0xce72, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0xce73, .a=0x5b, .x=0x18, .y=0xd8, .sp=0xce, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x005f, .value=0x62}, {.addr=0xce71, .value=0x64}, {.addr=0xce72, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0xce71, .value=0x64, .type=IO_READ},
        {.addr=0xce72, .value=0x5f, .type=IO_READ},
        {.addr=0x005f, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0202", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0203) {
    const struct CPU_State initial_cpu = {.pc=0x97f3, .a=0x5b, .x=0x59, .y=0xf5, .sp=0xe3, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0xf7}, {.addr=0x97f3, .value=0x64}, {.addr=0x97f4, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x97f5, .a=0x5b, .x=0x59, .y=0xf5, .sp=0xe3, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0xf7}, {.addr=0x97f3, .value=0x64}, {.addr=0x97f4, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x97f3, .value=0x64, .type=IO_READ},
        {.addr=0x97f4, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0203", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0204) {
    const struct CPU_State initial_cpu = {.pc=0xb0dc, .a=0x2d, .x=0xcf, .y=0xb5, .sp=0xba, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0xef}, {.addr=0xb0dc, .value=0x64}, {.addr=0xb0dd, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0xb0de, .a=0x2d, .x=0xcf, .y=0xb5, .sp=0xba, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0xef}, {.addr=0xb0dc, .value=0x64}, {.addr=0xb0dd, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0xb0dc, .value=0x64, .type=IO_READ},
        {.addr=0xb0dd, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0204", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0205) {
    const struct CPU_State initial_cpu = {.pc=0x8113, .a=0xa8, .x=0x16, .y=0xd7, .sp=0x75, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cb, .value=0x89}, {.addr=0x8113, .value=0x64}, {.addr=0x8114, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x8115, .a=0xa8, .x=0x16, .y=0xd7, .sp=0x75, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cb, .value=0x89}, {.addr=0x8113, .value=0x64}, {.addr=0x8114, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x8113, .value=0x64, .type=IO_READ},
        {.addr=0x8114, .value=0xcb, .type=IO_READ},
        {.addr=0x00cb, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0205", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0206) {
    const struct CPU_State initial_cpu = {.pc=0xf4a8, .a=0xed, .x=0x24, .y=0xe1, .sp=0xd4, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0086, .value=0x3e}, {.addr=0xf4a8, .value=0x64}, {.addr=0xf4a9, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0xf4aa, .a=0xed, .x=0x24, .y=0xe1, .sp=0xd4, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0086, .value=0x3e}, {.addr=0xf4a8, .value=0x64}, {.addr=0xf4a9, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0xf4a8, .value=0x64, .type=IO_READ},
        {.addr=0xf4a9, .value=0x86, .type=IO_READ},
        {.addr=0x0086, .value=0x3e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0206", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0207) {
    const struct CPU_State initial_cpu = {.pc=0x4c18, .a=0xb7, .x=0x36, .y=0x4e, .sp=0xbf, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0x0d}, {.addr=0x4c18, .value=0x64}, {.addr=0x4c19, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0x4c1a, .a=0xb7, .x=0x36, .y=0x4e, .sp=0xbf, .status=0x89};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0x0d}, {.addr=0x4c18, .value=0x64}, {.addr=0x4c19, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0x4c18, .value=0x64, .type=IO_READ},
        {.addr=0x4c19, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0207", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0208) {
    const struct CPU_State initial_cpu = {.pc=0x0751, .a=0xdd, .x=0xb4, .y=0xcf, .sp=0x46, .status=0x1c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ba, .value=0x41}, {.addr=0x0751, .value=0x64}, {.addr=0x0752, .value=0xba},
    };
    const struct CPU_State final_cpu = {.pc=0x0753, .a=0xdd, .x=0xb4, .y=0xcf, .sp=0x46, .status=0x9d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ba, .value=0x41}, {.addr=0x0751, .value=0x64}, {.addr=0x0752, .value=0xba},
    };
    const struct BusEvent events[] = {
        {.addr=0x0751, .value=0x64, .type=IO_READ},
        {.addr=0x0752, .value=0xba, .type=IO_READ},
        {.addr=0x00ba, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0208", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0209) {
    const struct CPU_State initial_cpu = {.pc=0xf66b, .a=0x0a, .x=0x25, .y=0x7e, .sp=0x53, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0195, .value=0xfc}, {.addr=0xf66b, .value=0x64}, {.addr=0xf66c, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0xf66d, .a=0x0a, .x=0x25, .y=0x7e, .sp=0x53, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0195, .value=0xfc}, {.addr=0xf66b, .value=0x64}, {.addr=0xf66c, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0xf66b, .value=0x64, .type=IO_READ},
        {.addr=0xf66c, .value=0x95, .type=IO_READ},
        {.addr=0x0195, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0209", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_020A) {
    const struct CPU_State initial_cpu = {.pc=0x95d4, .a=0x40, .x=0x85, .y=0xc9, .sp=0x7b, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0x94}, {.addr=0x95d4, .value=0x64}, {.addr=0x95d5, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x95d6, .a=0x40, .x=0x85, .y=0xc9, .sp=0x7b, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0x94}, {.addr=0x95d4, .value=0x64}, {.addr=0x95d5, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x95d4, .value=0x64, .type=IO_READ},
        {.addr=0x95d5, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 020A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_020B) {
    const struct CPU_State initial_cpu = {.pc=0xc762, .a=0x5b, .x=0x16, .y=0x77, .sp=0x02, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0x98}, {.addr=0xc762, .value=0x64}, {.addr=0xc763, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0xc764, .a=0x5b, .x=0x16, .y=0x77, .sp=0x02, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0x98}, {.addr=0xc762, .value=0x64}, {.addr=0xc763, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0xc762, .value=0x64, .type=IO_READ},
        {.addr=0xc763, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 020B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_020C) {
    const struct CPU_State initial_cpu = {.pc=0xb30f, .a=0xa5, .x=0xe0, .y=0xa8, .sp=0xf8, .status=0x88};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0x44}, {.addr=0xb30f, .value=0x64}, {.addr=0xb310, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xb311, .a=0xa5, .x=0xe0, .y=0xa8, .sp=0xf8, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0x44}, {.addr=0xb30f, .value=0x64}, {.addr=0xb310, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xb30f, .value=0x64, .type=IO_READ},
        {.addr=0xb310, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0x44, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 020C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_020D) {
    const struct CPU_State initial_cpu = {.pc=0x0ce7, .a=0x86, .x=0xa0, .y=0xaf, .sp=0x6c, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0x8e}, {.addr=0x0ce7, .value=0x64}, {.addr=0x0ce8, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x0ce9, .a=0x86, .x=0xa0, .y=0xaf, .sp=0x6c, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0x8e}, {.addr=0x0ce7, .value=0x64}, {.addr=0x0ce8, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ce7, .value=0x64, .type=IO_READ},
        {.addr=0x0ce8, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 020D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_020E) {
    const struct CPU_State initial_cpu = {.pc=0x8dc7, .a=0xf8, .x=0xf4, .y=0xc9, .sp=0x74, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a1, .value=0xd2}, {.addr=0x8dc7, .value=0x64}, {.addr=0x8dc8, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x8dc9, .a=0xf8, .x=0xf4, .y=0xc9, .sp=0x74, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a1, .value=0xd2}, {.addr=0x8dc7, .value=0x64}, {.addr=0x8dc8, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x8dc7, .value=0x64, .type=IO_READ},
        {.addr=0x8dc8, .value=0xa1, .type=IO_READ},
        {.addr=0x01a1, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 020E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_020F) {
    const struct CPU_State initial_cpu = {.pc=0xb987, .a=0xa8, .x=0x7e, .y=0x27, .sp=0x28, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0xbe}, {.addr=0xb987, .value=0x64}, {.addr=0xb988, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0xb989, .a=0xa8, .x=0x7e, .y=0x27, .sp=0x28, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0xbe}, {.addr=0xb987, .value=0x64}, {.addr=0xb988, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0xb987, .value=0x64, .type=IO_READ},
        {.addr=0xb988, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 020F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0210) {
    const struct CPU_State initial_cpu = {.pc=0xfc6e, .a=0xe6, .x=0x38, .y=0xd2, .sp=0xeb, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0115, .value=0xc0}, {.addr=0xfc6e, .value=0x64}, {.addr=0xfc6f, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0xfc70, .a=0xe6, .x=0x38, .y=0xd2, .sp=0xeb, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x0115, .value=0xc0}, {.addr=0xfc6e, .value=0x64}, {.addr=0xfc6f, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc6e, .value=0x64, .type=IO_READ},
        {.addr=0xfc6f, .value=0x15, .type=IO_READ},
        {.addr=0x0115, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0210", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0211) {
    const struct CPU_State initial_cpu = {.pc=0x2684, .a=0x89, .x=0x3e, .y=0x5d, .sp=0xde, .status=0xa4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d0, .value=0x7e}, {.addr=0x2684, .value=0x64}, {.addr=0x2685, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x2686, .a=0x89, .x=0x3e, .y=0x5d, .sp=0xde, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d0, .value=0x7e}, {.addr=0x2684, .value=0x64}, {.addr=0x2685, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x2684, .value=0x64, .type=IO_READ},
        {.addr=0x2685, .value=0xd0, .type=IO_READ},
        {.addr=0x01d0, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0211", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0212) {
    const struct CPU_State initial_cpu = {.pc=0xc41d, .a=0xfe, .x=0x05, .y=0xfd, .sp=0xc6, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00db, .value=0xda}, {.addr=0xc41d, .value=0x64}, {.addr=0xc41e, .value=0xdb},
    };
    const struct CPU_State final_cpu = {.pc=0xc41f, .a=0xfe, .x=0x05, .y=0xfd, .sp=0xc6, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00db, .value=0xda}, {.addr=0xc41d, .value=0x64}, {.addr=0xc41e, .value=0xdb},
    };
    const struct BusEvent events[] = {
        {.addr=0xc41d, .value=0x64, .type=IO_READ},
        {.addr=0xc41e, .value=0xdb, .type=IO_READ},
        {.addr=0x00db, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0212", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0213) {
    const struct CPU_State initial_cpu = {.pc=0x79aa, .a=0x41, .x=0xfb, .y=0x01, .sp=0xe1, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0170, .value=0xff}, {.addr=0x79aa, .value=0x64}, {.addr=0x79ab, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0x79ac, .a=0x41, .x=0xfb, .y=0x01, .sp=0xe1, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0170, .value=0xff}, {.addr=0x79aa, .value=0x64}, {.addr=0x79ab, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0x79aa, .value=0x64, .type=IO_READ},
        {.addr=0x79ab, .value=0x70, .type=IO_READ},
        {.addr=0x0170, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0213", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0214) {
    const struct CPU_State initial_cpu = {.pc=0xaf20, .a=0x6c, .x=0x23, .y=0x6a, .sp=0x46, .status=0x54};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0093, .value=0x21}, {.addr=0xaf20, .value=0x64}, {.addr=0xaf21, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0xaf22, .a=0x6c, .x=0x23, .y=0x6a, .sp=0x46, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0093, .value=0x21}, {.addr=0xaf20, .value=0x64}, {.addr=0xaf21, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf20, .value=0x64, .type=IO_READ},
        {.addr=0xaf21, .value=0x93, .type=IO_READ},
        {.addr=0x0093, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0214", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0215) {
    const struct CPU_State initial_cpu = {.pc=0x4612, .a=0x7d, .x=0xaf, .y=0x15, .sp=0x39, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x013e, .value=0x82}, {.addr=0x4612, .value=0x64}, {.addr=0x4613, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0x4614, .a=0x7d, .x=0xaf, .y=0x15, .sp=0x39, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x013e, .value=0x82}, {.addr=0x4612, .value=0x64}, {.addr=0x4613, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4612, .value=0x64, .type=IO_READ},
        {.addr=0x4613, .value=0x3e, .type=IO_READ},
        {.addr=0x013e, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0215", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0216) {
    const struct CPU_State initial_cpu = {.pc=0x0f12, .a=0x42, .x=0xfc, .y=0xb1, .sp=0x80, .status=0x8a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0xae}, {.addr=0x0f12, .value=0x64}, {.addr=0x0f13, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0x0f14, .a=0x42, .x=0xfc, .y=0xb1, .sp=0x80, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0xae}, {.addr=0x0f12, .value=0x64}, {.addr=0x0f13, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f12, .value=0x64, .type=IO_READ},
        {.addr=0x0f13, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0xae, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0216", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0217) {
    const struct CPU_State initial_cpu = {.pc=0xd5bc, .a=0x0d, .x=0xa1, .y=0x70, .sp=0xaf, .status=0x2f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x82}, {.addr=0xd5bc, .value=0x64}, {.addr=0xd5bd, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0xd5be, .a=0x0d, .x=0xa1, .y=0x70, .sp=0xaf, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x82}, {.addr=0xd5bc, .value=0x64}, {.addr=0xd5bd, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0xd5bc, .value=0x64, .type=IO_READ},
        {.addr=0xd5bd, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0217", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0218) {
    const struct CPU_State initial_cpu = {.pc=0x3f1f, .a=0x26, .x=0x9d, .y=0x95, .sp=0xf0, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d2, .value=0x83}, {.addr=0x3f1f, .value=0x64}, {.addr=0x3f20, .value=0xd2},
    };
    const struct CPU_State final_cpu = {.pc=0x3f21, .a=0x26, .x=0x9d, .y=0x95, .sp=0xf0, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d2, .value=0x83}, {.addr=0x3f1f, .value=0x64}, {.addr=0x3f20, .value=0xd2},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f1f, .value=0x64, .type=IO_READ},
        {.addr=0x3f20, .value=0xd2, .type=IO_READ},
        {.addr=0x00d2, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0218", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0219) {
    const struct CPU_State initial_cpu = {.pc=0x5f11, .a=0x71, .x=0x50, .y=0x77, .sp=0x30, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0xfd}, {.addr=0x5f11, .value=0x64}, {.addr=0x5f12, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x5f13, .a=0x71, .x=0x50, .y=0x77, .sp=0x30, .status=0x70};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0xfd}, {.addr=0x5f11, .value=0x64}, {.addr=0x5f12, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f11, .value=0x64, .type=IO_READ},
        {.addr=0x5f12, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0219", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_021A) {
    const struct CPU_State initial_cpu = {.pc=0x325e, .a=0x9c, .x=0xac, .y=0xbd, .sp=0xf9, .status=0xa8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0107, .value=0x9e}, {.addr=0x325e, .value=0x64}, {.addr=0x325f, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x3260, .a=0x9c, .x=0xac, .y=0xbd, .sp=0xf9, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0107, .value=0x9e}, {.addr=0x325e, .value=0x64}, {.addr=0x325f, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x325e, .value=0x64, .type=IO_READ},
        {.addr=0x325f, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 021A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_021B) {
    const struct CPU_State initial_cpu = {.pc=0x0884, .a=0x5c, .x=0xfe, .y=0xd3, .sp=0xa9, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0095, .value=0x23}, {.addr=0x0884, .value=0x64}, {.addr=0x0885, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x0886, .a=0x5c, .x=0xfe, .y=0xd3, .sp=0xa9, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0095, .value=0x23}, {.addr=0x0884, .value=0x64}, {.addr=0x0885, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x0884, .value=0x64, .type=IO_READ},
        {.addr=0x0885, .value=0x95, .type=IO_READ},
        {.addr=0x0095, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 021B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_021C) {
    const struct CPU_State initial_cpu = {.pc=0x252b, .a=0x62, .x=0xb7, .y=0x10, .sp=0x44, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0101, .value=0xc2}, {.addr=0x252b, .value=0x64}, {.addr=0x252c, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0x252d, .a=0x62, .x=0xb7, .y=0x10, .sp=0x44, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0101, .value=0xc2}, {.addr=0x252b, .value=0x64}, {.addr=0x252c, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0x252b, .value=0x64, .type=IO_READ},
        {.addr=0x252c, .value=0x01, .type=IO_READ},
        {.addr=0x0101, .value=0xc2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 021C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_021D) {
    const struct CPU_State initial_cpu = {.pc=0x9147, .a=0x22, .x=0xba, .y=0x91, .sp=0xaf, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ae, .value=0x98}, {.addr=0x9147, .value=0x64}, {.addr=0x9148, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0x9149, .a=0x22, .x=0xba, .y=0x91, .sp=0xaf, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ae, .value=0x98}, {.addr=0x9147, .value=0x64}, {.addr=0x9148, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0x9147, .value=0x64, .type=IO_READ},
        {.addr=0x9148, .value=0xae, .type=IO_READ},
        {.addr=0x01ae, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 021D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_021E) {
    const struct CPU_State initial_cpu = {.pc=0xf9eb, .a=0xa4, .x=0x04, .y=0x3f, .sp=0xb9, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0xce}, {.addr=0xf9eb, .value=0x64}, {.addr=0xf9ec, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0xf9ed, .a=0xa4, .x=0x04, .y=0x3f, .sp=0xb9, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0xce}, {.addr=0xf9eb, .value=0x64}, {.addr=0xf9ec, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0xf9eb, .value=0x64, .type=IO_READ},
        {.addr=0xf9ec, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 021E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_021F) {
    const struct CPU_State initial_cpu = {.pc=0x9931, .a=0xca, .x=0x11, .y=0x86, .sp=0x9a, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0x6f}, {.addr=0x9931, .value=0x64}, {.addr=0x9932, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x9933, .a=0xca, .x=0x11, .y=0x86, .sp=0x9a, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0x6f}, {.addr=0x9931, .value=0x64}, {.addr=0x9932, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x9931, .value=0x64, .type=IO_READ},
        {.addr=0x9932, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 021F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0220) {
    const struct CPU_State initial_cpu = {.pc=0xf95c, .a=0x85, .x=0x3f, .y=0xbc, .sp=0x3a, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0104, .value=0xdc}, {.addr=0xf95c, .value=0x64}, {.addr=0xf95d, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0xf95e, .a=0x85, .x=0x3f, .y=0xbc, .sp=0x3a, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0104, .value=0xdc}, {.addr=0xf95c, .value=0x64}, {.addr=0xf95d, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0xf95c, .value=0x64, .type=IO_READ},
        {.addr=0xf95d, .value=0x04, .type=IO_READ},
        {.addr=0x0104, .value=0xdc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0220", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0221) {
    const struct CPU_State initial_cpu = {.pc=0x0b46, .a=0x30, .x=0xaa, .y=0x66, .sp=0xb2, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0123, .value=0x17}, {.addr=0x0b46, .value=0x64}, {.addr=0x0b47, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x0b48, .a=0x30, .x=0xaa, .y=0x66, .sp=0xb2, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0123, .value=0x17}, {.addr=0x0b46, .value=0x64}, {.addr=0x0b47, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b46, .value=0x64, .type=IO_READ},
        {.addr=0x0b47, .value=0x23, .type=IO_READ},
        {.addr=0x0123, .value=0x17, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0221", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0222) {
    const struct CPU_State initial_cpu = {.pc=0xdaca, .a=0x8e, .x=0xcd, .y=0x10, .sp=0xc9, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005e, .value=0x29}, {.addr=0xdaca, .value=0x64}, {.addr=0xdacb, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0xdacc, .a=0x8e, .x=0xcd, .y=0x10, .sp=0xc9, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x005e, .value=0x29}, {.addr=0xdaca, .value=0x64}, {.addr=0xdacb, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0xdaca, .value=0x64, .type=IO_READ},
        {.addr=0xdacb, .value=0x5e, .type=IO_READ},
        {.addr=0x005e, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0222", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0223) {
    const struct CPU_State initial_cpu = {.pc=0xd6b6, .a=0xd4, .x=0x61, .y=0xa9, .sp=0x61, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0xa7}, {.addr=0xd6b6, .value=0x64}, {.addr=0xd6b7, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0xd6b8, .a=0xd4, .x=0x61, .y=0xa9, .sp=0x61, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0xa7}, {.addr=0xd6b6, .value=0x64}, {.addr=0xd6b7, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0xd6b6, .value=0x64, .type=IO_READ},
        {.addr=0xd6b7, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0xa7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0223", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0224) {
    const struct CPU_State initial_cpu = {.pc=0xe44c, .a=0xb8, .x=0xeb, .y=0x56, .sp=0x00, .status=0xd9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004f, .value=0xe4}, {.addr=0xe44c, .value=0x64}, {.addr=0xe44d, .value=0x4f},
    };
    const struct CPU_State final_cpu = {.pc=0xe44e, .a=0xb8, .x=0xeb, .y=0x56, .sp=0x00, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x004f, .value=0xe4}, {.addr=0xe44c, .value=0x64}, {.addr=0xe44d, .value=0x4f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe44c, .value=0x64, .type=IO_READ},
        {.addr=0xe44d, .value=0x4f, .type=IO_READ},
        {.addr=0x004f, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0224", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0225) {
    const struct CPU_State initial_cpu = {.pc=0x879e, .a=0x90, .x=0xfd, .y=0x5e, .sp=0x87, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ee, .value=0xed}, {.addr=0x879e, .value=0x64}, {.addr=0x879f, .value=0xee},
    };
    const struct CPU_State final_cpu = {.pc=0x87a0, .a=0x90, .x=0xfd, .y=0x5e, .sp=0x87, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ee, .value=0xed}, {.addr=0x879e, .value=0x64}, {.addr=0x879f, .value=0xee},
    };
    const struct BusEvent events[] = {
        {.addr=0x879e, .value=0x64, .type=IO_READ},
        {.addr=0x879f, .value=0xee, .type=IO_READ},
        {.addr=0x00ee, .value=0xed, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0225", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0226) {
    const struct CPU_State initial_cpu = {.pc=0x76a2, .a=0x80, .x=0x27, .y=0xb9, .sp=0x4b, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0007, .value=0xe5}, {.addr=0x76a2, .value=0x64}, {.addr=0x76a3, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x76a4, .a=0x80, .x=0x27, .y=0xb9, .sp=0x4b, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0007, .value=0xe5}, {.addr=0x76a2, .value=0x64}, {.addr=0x76a3, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x76a2, .value=0x64, .type=IO_READ},
        {.addr=0x76a3, .value=0x07, .type=IO_READ},
        {.addr=0x0007, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0226", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0227) {
    const struct CPU_State initial_cpu = {.pc=0x2bbd, .a=0x0d, .x=0xd7, .y=0x00, .sp=0xe7, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010d, .value=0x07}, {.addr=0x2bbd, .value=0x64}, {.addr=0x2bbe, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x2bbf, .a=0x0d, .x=0xd7, .y=0x00, .sp=0xe7, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x010d, .value=0x07}, {.addr=0x2bbd, .value=0x64}, {.addr=0x2bbe, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x2bbd, .value=0x64, .type=IO_READ},
        {.addr=0x2bbe, .value=0x0d, .type=IO_READ},
        {.addr=0x010d, .value=0x07, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0227", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0228) {
    const struct CPU_State initial_cpu = {.pc=0x629a, .a=0x56, .x=0xa3, .y=0xa6, .sp=0xf7, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0xe7}, {.addr=0x629a, .value=0x64}, {.addr=0x629b, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x629c, .a=0x56, .x=0xa3, .y=0xa6, .sp=0xf7, .status=0x44};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0xe7}, {.addr=0x629a, .value=0x64}, {.addr=0x629b, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x629a, .value=0x64, .type=IO_READ},
        {.addr=0x629b, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0228", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0229) {
    const struct CPU_State initial_cpu = {.pc=0xd121, .a=0x38, .x=0x55, .y=0x79, .sp=0x94, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0x76}, {.addr=0xd121, .value=0x64}, {.addr=0xd122, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0xd123, .a=0x38, .x=0x55, .y=0x79, .sp=0x94, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0x76}, {.addr=0xd121, .value=0x64}, {.addr=0xd122, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0xd121, .value=0x64, .type=IO_READ},
        {.addr=0xd122, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0229", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_022A) {
    const struct CPU_State initial_cpu = {.pc=0x3f60, .a=0xa1, .x=0x91, .y=0x86, .sp=0x50, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0154, .value=0xda}, {.addr=0x3f60, .value=0x64}, {.addr=0x3f61, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0x3f62, .a=0xa1, .x=0x91, .y=0x86, .sp=0x50, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0154, .value=0xda}, {.addr=0x3f60, .value=0x64}, {.addr=0x3f61, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0x3f60, .value=0x64, .type=IO_READ},
        {.addr=0x3f61, .value=0x54, .type=IO_READ},
        {.addr=0x0154, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 022A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_022B) {
    const struct CPU_State initial_cpu = {.pc=0x08ae, .a=0x88, .x=0xeb, .y=0x97, .sp=0x66, .status=0x4a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009e, .value=0xff}, {.addr=0x08ae, .value=0x64}, {.addr=0x08af, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x08b0, .a=0x88, .x=0xeb, .y=0x97, .sp=0x66, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x009e, .value=0xff}, {.addr=0x08ae, .value=0x64}, {.addr=0x08af, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x08ae, .value=0x64, .type=IO_READ},
        {.addr=0x08af, .value=0x9e, .type=IO_READ},
        {.addr=0x009e, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 022B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_022C) {
    const struct CPU_State initial_cpu = {.pc=0x1bce, .a=0xf1, .x=0x75, .y=0x12, .sp=0x42, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0158, .value=0x9b}, {.addr=0x1bce, .value=0x64}, {.addr=0x1bcf, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x1bd0, .a=0xf1, .x=0x75, .y=0x12, .sp=0x42, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0158, .value=0x9b}, {.addr=0x1bce, .value=0x64}, {.addr=0x1bcf, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x1bce, .value=0x64, .type=IO_READ},
        {.addr=0x1bcf, .value=0x58, .type=IO_READ},
        {.addr=0x0158, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 022C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_022D) {
    const struct CPU_State initial_cpu = {.pc=0x996e, .a=0x74, .x=0xa3, .y=0x9c, .sp=0x88, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01eb, .value=0x99}, {.addr=0x996e, .value=0x64}, {.addr=0x996f, .value=0xeb},
    };
    const struct CPU_State final_cpu = {.pc=0x9970, .a=0x74, .x=0xa3, .y=0x9c, .sp=0x88, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01eb, .value=0x99}, {.addr=0x996e, .value=0x64}, {.addr=0x996f, .value=0xeb},
    };
    const struct BusEvent events[] = {
        {.addr=0x996e, .value=0x64, .type=IO_READ},
        {.addr=0x996f, .value=0xeb, .type=IO_READ},
        {.addr=0x01eb, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 022D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_022E) {
    const struct CPU_State initial_cpu = {.pc=0xed53, .a=0x2b, .x=0xe9, .y=0xdc, .sp=0xd3, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a7, .value=0x41}, {.addr=0xed53, .value=0x64}, {.addr=0xed54, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0xed55, .a=0x2b, .x=0xe9, .y=0xdc, .sp=0xd3, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a7, .value=0x41}, {.addr=0xed53, .value=0x64}, {.addr=0xed54, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0xed53, .value=0x64, .type=IO_READ},
        {.addr=0xed54, .value=0xa7, .type=IO_READ},
        {.addr=0x00a7, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 022E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_022F) {
    const struct CPU_State initial_cpu = {.pc=0xdd40, .a=0x67, .x=0xe4, .y=0x7c, .sp=0x64, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0xe2}, {.addr=0xdd40, .value=0x64}, {.addr=0xdd41, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0xdd42, .a=0x67, .x=0xe4, .y=0x7c, .sp=0x64, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0xe2}, {.addr=0xdd40, .value=0x64}, {.addr=0xdd41, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd40, .value=0x64, .type=IO_READ},
        {.addr=0xdd41, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0xe2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 022F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0230) {
    const struct CPU_State initial_cpu = {.pc=0x9611, .a=0x05, .x=0x5d, .y=0x8e, .sp=0xde, .status=0xe4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010d, .value=0x14}, {.addr=0x9611, .value=0x64}, {.addr=0x9612, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x9613, .a=0x05, .x=0x5d, .y=0x8e, .sp=0xde, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x010d, .value=0x14}, {.addr=0x9611, .value=0x64}, {.addr=0x9612, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x9611, .value=0x64, .type=IO_READ},
        {.addr=0x9612, .value=0x0d, .type=IO_READ},
        {.addr=0x010d, .value=0x14, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0230", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0231) {
    const struct CPU_State initial_cpu = {.pc=0x91b1, .a=0x2c, .x=0xdb, .y=0xba, .sp=0x3a, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0x89}, {.addr=0x91b1, .value=0x64}, {.addr=0x91b2, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x91b3, .a=0x2c, .x=0xdb, .y=0xba, .sp=0x3a, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0x89}, {.addr=0x91b1, .value=0x64}, {.addr=0x91b2, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x91b1, .value=0x64, .type=IO_READ},
        {.addr=0x91b2, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0231", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0232) {
    const struct CPU_State initial_cpu = {.pc=0xbd57, .a=0xc5, .x=0xe0, .y=0x34, .sp=0x92, .status=0x00};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c4, .value=0x36}, {.addr=0xbd57, .value=0x64}, {.addr=0xbd58, .value=0xc4},
    };
    const struct CPU_State final_cpu = {.pc=0xbd59, .a=0xc5, .x=0xe0, .y=0x34, .sp=0x92, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c4, .value=0x36}, {.addr=0xbd57, .value=0x64}, {.addr=0xbd58, .value=0xc4},
    };
    const struct BusEvent events[] = {
        {.addr=0xbd57, .value=0x64, .type=IO_READ},
        {.addr=0xbd58, .value=0xc4, .type=IO_READ},
        {.addr=0x00c4, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0232", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0233) {
    const struct CPU_State initial_cpu = {.pc=0x1f31, .a=0x77, .x=0x59, .y=0xa9, .sp=0x6e, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0182, .value=0x5a}, {.addr=0x1f31, .value=0x64}, {.addr=0x1f32, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0x1f33, .a=0x77, .x=0x59, .y=0xa9, .sp=0x6e, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0182, .value=0x5a}, {.addr=0x1f31, .value=0x64}, {.addr=0x1f32, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f31, .value=0x64, .type=IO_READ},
        {.addr=0x1f32, .value=0x82, .type=IO_READ},
        {.addr=0x0182, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0233", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0234) {
    const struct CPU_State initial_cpu = {.pc=0x1ae7, .a=0x04, .x=0x28, .y=0xaf, .sp=0x9c, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011b, .value=0x7a}, {.addr=0x1ae7, .value=0x64}, {.addr=0x1ae8, .value=0x1b},
    };
    const struct CPU_State final_cpu = {.pc=0x1ae9, .a=0x04, .x=0x28, .y=0xaf, .sp=0x9c, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x011b, .value=0x7a}, {.addr=0x1ae7, .value=0x64}, {.addr=0x1ae8, .value=0x1b},
    };
    const struct BusEvent events[] = {
        {.addr=0x1ae7, .value=0x64, .type=IO_READ},
        {.addr=0x1ae8, .value=0x1b, .type=IO_READ},
        {.addr=0x011b, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0234", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0235) {
    const struct CPU_State initial_cpu = {.pc=0x32d2, .a=0xaf, .x=0x5d, .y=0xd9, .sp=0x85, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0x49}, {.addr=0x32d2, .value=0x64}, {.addr=0x32d3, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x32d4, .a=0xaf, .x=0x5d, .y=0xd9, .sp=0x85, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0x49}, {.addr=0x32d2, .value=0x64}, {.addr=0x32d3, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x32d2, .value=0x64, .type=IO_READ},
        {.addr=0x32d3, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0235", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0236) {
    const struct CPU_State initial_cpu = {.pc=0xea72, .a=0xec, .x=0x39, .y=0x6c, .sp=0x53, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0x03}, {.addr=0xea72, .value=0x64}, {.addr=0xea73, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0xea74, .a=0xec, .x=0x39, .y=0x6c, .sp=0x53, .status=0xed};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0x03}, {.addr=0xea72, .value=0x64}, {.addr=0xea73, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0xea72, .value=0x64, .type=IO_READ},
        {.addr=0xea73, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0236", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0237) {
    const struct CPU_State initial_cpu = {.pc=0x396d, .a=0x01, .x=0x50, .y=0x39, .sp=0x2c, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012c, .value=0x41}, {.addr=0x396d, .value=0x64}, {.addr=0x396e, .value=0x2c},
    };
    const struct CPU_State final_cpu = {.pc=0x396f, .a=0x01, .x=0x50, .y=0x39, .sp=0x2c, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x012c, .value=0x41}, {.addr=0x396d, .value=0x64}, {.addr=0x396e, .value=0x2c},
    };
    const struct BusEvent events[] = {
        {.addr=0x396d, .value=0x64, .type=IO_READ},
        {.addr=0x396e, .value=0x2c, .type=IO_READ},
        {.addr=0x012c, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0237", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0238) {
    const struct CPU_State initial_cpu = {.pc=0x2c69, .a=0x02, .x=0xb3, .y=0xd2, .sp=0x6b, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0x83}, {.addr=0x2c69, .value=0x64}, {.addr=0x2c6a, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x2c6b, .a=0x02, .x=0xb3, .y=0xd2, .sp=0x6b, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0x83}, {.addr=0x2c69, .value=0x64}, {.addr=0x2c6a, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x2c69, .value=0x64, .type=IO_READ},
        {.addr=0x2c6a, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0238", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0239) {
    const struct CPU_State initial_cpu = {.pc=0x5446, .a=0x32, .x=0x77, .y=0x75, .sp=0x4e, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014d, .value=0xab}, {.addr=0x5446, .value=0x64}, {.addr=0x5447, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x5448, .a=0x32, .x=0x77, .y=0x75, .sp=0x4e, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x014d, .value=0xab}, {.addr=0x5446, .value=0x64}, {.addr=0x5447, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x5446, .value=0x64, .type=IO_READ},
        {.addr=0x5447, .value=0x4d, .type=IO_READ},
        {.addr=0x014d, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0239", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_023A) {
    const struct CPU_State initial_cpu = {.pc=0x19eb, .a=0x19, .x=0x69, .y=0xcb, .sp=0xe3, .status=0xf9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a7, .value=0x2a}, {.addr=0x19eb, .value=0x64}, {.addr=0x19ec, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x19ed, .a=0x19, .x=0x69, .y=0xcb, .sp=0xe3, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a7, .value=0x2a}, {.addr=0x19eb, .value=0x64}, {.addr=0x19ec, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x19eb, .value=0x64, .type=IO_READ},
        {.addr=0x19ec, .value=0xa7, .type=IO_READ},
        {.addr=0x01a7, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 023A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_023B) {
    const struct CPU_State initial_cpu = {.pc=0xa343, .a=0x75, .x=0x34, .y=0xfc, .sp=0xc8, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0102, .value=0x32}, {.addr=0xa343, .value=0x64}, {.addr=0xa344, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0xa345, .a=0x75, .x=0x34, .y=0xfc, .sp=0xc8, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0102, .value=0x32}, {.addr=0xa343, .value=0x64}, {.addr=0xa344, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0xa343, .value=0x64, .type=IO_READ},
        {.addr=0xa344, .value=0x02, .type=IO_READ},
        {.addr=0x0102, .value=0x32, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 023B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_023C) {
    const struct CPU_State initial_cpu = {.pc=0x6495, .a=0xf6, .x=0xc7, .y=0xd4, .sp=0x90, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e8, .value=0x15}, {.addr=0x6495, .value=0x64}, {.addr=0x6496, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x6497, .a=0xf6, .x=0xc7, .y=0xd4, .sp=0x90, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e8, .value=0x15}, {.addr=0x6495, .value=0x64}, {.addr=0x6496, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x6495, .value=0x64, .type=IO_READ},
        {.addr=0x6496, .value=0xe8, .type=IO_READ},
        {.addr=0x00e8, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 023C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_023D) {
    const struct CPU_State initial_cpu = {.pc=0x1fd3, .a=0xc6, .x=0x3b, .y=0x7b, .sp=0xd0, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ef, .value=0xe3}, {.addr=0x1fd3, .value=0x64}, {.addr=0x1fd4, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x1fd5, .a=0xc6, .x=0x3b, .y=0x7b, .sp=0xd0, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ef, .value=0xe3}, {.addr=0x1fd3, .value=0x64}, {.addr=0x1fd4, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x1fd3, .value=0x64, .type=IO_READ},
        {.addr=0x1fd4, .value=0xef, .type=IO_READ},
        {.addr=0x01ef, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 023D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_023E) {
    const struct CPU_State initial_cpu = {.pc=0xe1c8, .a=0xc3, .x=0xe8, .y=0x05, .sp=0x73, .status=0xd4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0048, .value=0x68}, {.addr=0xe1c8, .value=0x64}, {.addr=0xe1c9, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0xe1ca, .a=0xc3, .x=0xe8, .y=0x05, .sp=0x73, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x0048, .value=0x68}, {.addr=0xe1c8, .value=0x64}, {.addr=0xe1c9, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0xe1c8, .value=0x64, .type=IO_READ},
        {.addr=0xe1c9, .value=0x48, .type=IO_READ},
        {.addr=0x0048, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 023E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_023F) {
    const struct CPU_State initial_cpu = {.pc=0x972e, .a=0xeb, .x=0xc0, .y=0x45, .sp=0x54, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0062, .value=0x5d}, {.addr=0x972e, .value=0x64}, {.addr=0x972f, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x9730, .a=0xeb, .x=0xc0, .y=0x45, .sp=0x54, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x0062, .value=0x5d}, {.addr=0x972e, .value=0x64}, {.addr=0x972f, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x972e, .value=0x64, .type=IO_READ},
        {.addr=0x972f, .value=0x62, .type=IO_READ},
        {.addr=0x0062, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 023F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0240) {
    const struct CPU_State initial_cpu = {.pc=0x7a7f, .a=0x1f, .x=0x18, .y=0x54, .sp=0xd5, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0x47}, {.addr=0x7a7f, .value=0x64}, {.addr=0x7a80, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x7a81, .a=0x1f, .x=0x18, .y=0x54, .sp=0xd5, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0x47}, {.addr=0x7a7f, .value=0x64}, {.addr=0x7a80, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a7f, .value=0x64, .type=IO_READ},
        {.addr=0x7a80, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0240", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0241) {
    const struct CPU_State initial_cpu = {.pc=0x5726, .a=0xc3, .x=0xd5, .y=0xc7, .sp=0xc7, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d3, .value=0x82}, {.addr=0x5726, .value=0x64}, {.addr=0x5727, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x5728, .a=0xc3, .x=0xd5, .y=0xc7, .sp=0xc7, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d3, .value=0x82}, {.addr=0x5726, .value=0x64}, {.addr=0x5727, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x5726, .value=0x64, .type=IO_READ},
        {.addr=0x5727, .value=0xd3, .type=IO_READ},
        {.addr=0x00d3, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0241", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0242) {
    const struct CPU_State initial_cpu = {.pc=0xf470, .a=0x52, .x=0xf8, .y=0x38, .sp=0xcd, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003e, .value=0x1e}, {.addr=0xf470, .value=0x64}, {.addr=0xf471, .value=0x3e},
    };
    const struct CPU_State final_cpu = {.pc=0xf472, .a=0x52, .x=0xf8, .y=0x38, .sp=0xcd, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x003e, .value=0x1e}, {.addr=0xf470, .value=0x64}, {.addr=0xf471, .value=0x3e},
    };
    const struct BusEvent events[] = {
        {.addr=0xf470, .value=0x64, .type=IO_READ},
        {.addr=0xf471, .value=0x3e, .type=IO_READ},
        {.addr=0x003e, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0242", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0243) {
    const struct CPU_State initial_cpu = {.pc=0x6c9c, .a=0xb9, .x=0xe6, .y=0x61, .sp=0xed, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0xf8}, {.addr=0x6c9c, .value=0x64}, {.addr=0x6c9d, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x6c9e, .a=0xb9, .x=0xe6, .y=0x61, .sp=0xed, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0xf8}, {.addr=0x6c9c, .value=0x64}, {.addr=0x6c9d, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x6c9c, .value=0x64, .type=IO_READ},
        {.addr=0x6c9d, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0xf8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0243", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0244) {
    const struct CPU_State initial_cpu = {.pc=0xc4fe, .a=0xed, .x=0x68, .y=0x9b, .sp=0xbd, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0x0c}, {.addr=0xc4fe, .value=0x64}, {.addr=0xc4ff, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0xc500, .a=0xed, .x=0x68, .y=0x9b, .sp=0xbd, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0x0c}, {.addr=0xc4fe, .value=0x64}, {.addr=0xc4ff, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0xc4fe, .value=0x64, .type=IO_READ},
        {.addr=0xc4ff, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0x0c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0244", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0245) {
    const struct CPU_State initial_cpu = {.pc=0x3ec6, .a=0x83, .x=0x7d, .y=0xf1, .sp=0x09, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019a, .value=0x43}, {.addr=0x3ec6, .value=0x64}, {.addr=0x3ec7, .value=0x9a},
    };
    const struct CPU_State final_cpu = {.pc=0x3ec8, .a=0x83, .x=0x7d, .y=0xf1, .sp=0x09, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x019a, .value=0x43}, {.addr=0x3ec6, .value=0x64}, {.addr=0x3ec7, .value=0x9a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ec6, .value=0x64, .type=IO_READ},
        {.addr=0x3ec7, .value=0x9a, .type=IO_READ},
        {.addr=0x019a, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0245", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0246) {
    const struct CPU_State initial_cpu = {.pc=0x50a6, .a=0xc4, .x=0x4d, .y=0xac, .sp=0x2f, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008e, .value=0xa4}, {.addr=0x50a6, .value=0x64}, {.addr=0x50a7, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0x50a8, .a=0xc4, .x=0x4d, .y=0xac, .sp=0x2f, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x008e, .value=0xa4}, {.addr=0x50a6, .value=0x64}, {.addr=0x50a7, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0x50a6, .value=0x64, .type=IO_READ},
        {.addr=0x50a7, .value=0x8e, .type=IO_READ},
        {.addr=0x008e, .value=0xa4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0246", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0247) {
    const struct CPU_State initial_cpu = {.pc=0x8ec7, .a=0x99, .x=0x09, .y=0xb9, .sp=0xc7, .status=0x87};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d1, .value=0x9a}, {.addr=0x8ec7, .value=0x64}, {.addr=0x8ec8, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0x8ec9, .a=0x99, .x=0x09, .y=0xb9, .sp=0xc7, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d1, .value=0x9a}, {.addr=0x8ec7, .value=0x64}, {.addr=0x8ec8, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ec7, .value=0x64, .type=IO_READ},
        {.addr=0x8ec8, .value=0xd1, .type=IO_READ},
        {.addr=0x00d1, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0247", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0248) {
    const struct CPU_State initial_cpu = {.pc=0x329d, .a=0x58, .x=0x36, .y=0xd4, .sp=0x62, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f0, .value=0x45}, {.addr=0x329d, .value=0x64}, {.addr=0x329e, .value=0xf0},
    };
    const struct CPU_State final_cpu = {.pc=0x329f, .a=0x58, .x=0x36, .y=0xd4, .sp=0x62, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f0, .value=0x45}, {.addr=0x329d, .value=0x64}, {.addr=0x329e, .value=0xf0},
    };
    const struct BusEvent events[] = {
        {.addr=0x329d, .value=0x64, .type=IO_READ},
        {.addr=0x329e, .value=0xf0, .type=IO_READ},
        {.addr=0x01f0, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0248", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0249) {
    const struct CPU_State initial_cpu = {.pc=0x2406, .a=0x1c, .x=0x2a, .y=0xf6, .sp=0xea, .status=0x1b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0xa6}, {.addr=0x2406, .value=0x64}, {.addr=0x2407, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x2408, .a=0x1c, .x=0x2a, .y=0xf6, .sp=0xea, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0xa6}, {.addr=0x2406, .value=0x64}, {.addr=0x2407, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x2406, .value=0x64, .type=IO_READ},
        {.addr=0x2407, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0249", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_024A) {
    const struct CPU_State initial_cpu = {.pc=0x3c37, .a=0x0c, .x=0xd4, .y=0xa1, .sp=0x25, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0x1e}, {.addr=0x3c37, .value=0x64}, {.addr=0x3c38, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x3c39, .a=0x0c, .x=0xd4, .y=0xa1, .sp=0x25, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0x1e}, {.addr=0x3c37, .value=0x64}, {.addr=0x3c38, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x3c37, .value=0x64, .type=IO_READ},
        {.addr=0x3c38, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 024A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_024B) {
    const struct CPU_State initial_cpu = {.pc=0x8613, .a=0x8a, .x=0xc1, .y=0x35, .sp=0x23, .status=0xdd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0xb5}, {.addr=0x8613, .value=0x64}, {.addr=0x8614, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x8615, .a=0x8a, .x=0xc1, .y=0x35, .sp=0x23, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0xb5}, {.addr=0x8613, .value=0x64}, {.addr=0x8614, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x8613, .value=0x64, .type=IO_READ},
        {.addr=0x8614, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 024B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_024C) {
    const struct CPU_State initial_cpu = {.pc=0x5f43, .a=0x22, .x=0xea, .y=0x8a, .sp=0x0a, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0083, .value=0xb5}, {.addr=0x5f43, .value=0x64}, {.addr=0x5f44, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0x5f45, .a=0x22, .x=0xea, .y=0x8a, .sp=0x0a, .status=0x04};
    const struct RamEntry final_ram[] = {
        {.addr=0x0083, .value=0xb5}, {.addr=0x5f43, .value=0x64}, {.addr=0x5f44, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0x5f43, .value=0x64, .type=IO_READ},
        {.addr=0x5f44, .value=0x83, .type=IO_READ},
        {.addr=0x0083, .value=0xb5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 024C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_024D) {
    const struct CPU_State initial_cpu = {.pc=0xc49a, .a=0x08, .x=0xf3, .y=0xef, .sp=0x11, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005e, .value=0x1c}, {.addr=0xc49a, .value=0x64}, {.addr=0xc49b, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0xc49c, .a=0x08, .x=0xf3, .y=0xef, .sp=0x11, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x005e, .value=0x1c}, {.addr=0xc49a, .value=0x64}, {.addr=0xc49b, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0xc49a, .value=0x64, .type=IO_READ},
        {.addr=0xc49b, .value=0x5e, .type=IO_READ},
        {.addr=0x005e, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 024D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_024E) {
    const struct CPU_State initial_cpu = {.pc=0xd931, .a=0x97, .x=0x86, .y=0x8a, .sp=0x2d, .status=0x32};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a9, .value=0xa9}, {.addr=0xd931, .value=0x64}, {.addr=0xd932, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0xd933, .a=0x97, .x=0x86, .y=0x8a, .sp=0x2d, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a9, .value=0xa9}, {.addr=0xd931, .value=0x64}, {.addr=0xd932, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0xd931, .value=0x64, .type=IO_READ},
        {.addr=0xd932, .value=0xa9, .type=IO_READ},
        {.addr=0x01a9, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 024E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_024F) {
    const struct CPU_State initial_cpu = {.pc=0xaa09, .a=0x68, .x=0x82, .y=0x08, .sp=0xa2, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0022, .value=0x00}, {.addr=0xaa09, .value=0x64}, {.addr=0xaa0a, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0xaa0b, .a=0x68, .x=0x82, .y=0x08, .sp=0xa2, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0022, .value=0x00}, {.addr=0xaa09, .value=0x64}, {.addr=0xaa0a, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0xaa09, .value=0x64, .type=IO_READ},
        {.addr=0xaa0a, .value=0x22, .type=IO_READ},
        {.addr=0x0022, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 024F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0250) {
    const struct CPU_State initial_cpu = {.pc=0xda40, .a=0xd4, .x=0x05, .y=0xbf, .sp=0x0b, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0xee}, {.addr=0xda40, .value=0x64}, {.addr=0xda41, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0xda42, .a=0xd4, .x=0x05, .y=0xbf, .sp=0x0b, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0xee}, {.addr=0xda40, .value=0x64}, {.addr=0xda41, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0xda40, .value=0x64, .type=IO_READ},
        {.addr=0xda41, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0250", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0251) {
    const struct CPU_State initial_cpu = {.pc=0x2abd, .a=0x1e, .x=0xfc, .y=0x9a, .sp=0xca, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0122, .value=0x51}, {.addr=0x2abd, .value=0x64}, {.addr=0x2abe, .value=0x22},
    };
    const struct CPU_State final_cpu = {.pc=0x2abf, .a=0x1e, .x=0xfc, .y=0x9a, .sp=0xca, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0122, .value=0x51}, {.addr=0x2abd, .value=0x64}, {.addr=0x2abe, .value=0x22},
    };
    const struct BusEvent events[] = {
        {.addr=0x2abd, .value=0x64, .type=IO_READ},
        {.addr=0x2abe, .value=0x22, .type=IO_READ},
        {.addr=0x0122, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0251", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0252) {
    const struct CPU_State initial_cpu = {.pc=0xb7ed, .a=0x41, .x=0xb4, .y=0x73, .sp=0x04, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0x56}, {.addr=0xb7ed, .value=0x64}, {.addr=0xb7ee, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0xb7ef, .a=0x41, .x=0xb4, .y=0x73, .sp=0x04, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0x56}, {.addr=0xb7ed, .value=0x64}, {.addr=0xb7ee, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0xb7ed, .value=0x64, .type=IO_READ},
        {.addr=0xb7ee, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0252", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0253) {
    const struct CPU_State initial_cpu = {.pc=0x55ed, .a=0x36, .x=0x79, .y=0x3b, .sp=0xf1, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0x98}, {.addr=0x55ed, .value=0x64}, {.addr=0x55ee, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x55ef, .a=0x36, .x=0x79, .y=0x3b, .sp=0xf1, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0x98}, {.addr=0x55ed, .value=0x64}, {.addr=0x55ee, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x55ed, .value=0x64, .type=IO_READ},
        {.addr=0x55ee, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0x98, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0253", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0254) {
    const struct CPU_State initial_cpu = {.pc=0xfb4d, .a=0xae, .x=0x04, .y=0x6a, .sp=0x3a, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0x2b}, {.addr=0xfb4d, .value=0x64}, {.addr=0xfb4e, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0xfb4f, .a=0xae, .x=0x04, .y=0x6a, .sp=0x3a, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0x2b}, {.addr=0xfb4d, .value=0x64}, {.addr=0xfb4e, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0xfb4d, .value=0x64, .type=IO_READ},
        {.addr=0xfb4e, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0254", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0255) {
    const struct CPU_State initial_cpu = {.pc=0x60a7, .a=0xe2, .x=0x6d, .y=0x32, .sp=0x14, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000b, .value=0xb8}, {.addr=0x60a7, .value=0x64}, {.addr=0x60a8, .value=0x0b},
    };
    const struct CPU_State final_cpu = {.pc=0x60a9, .a=0xe2, .x=0x6d, .y=0x32, .sp=0x14, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000b, .value=0xb8}, {.addr=0x60a7, .value=0x64}, {.addr=0x60a8, .value=0x0b},
    };
    const struct BusEvent events[] = {
        {.addr=0x60a7, .value=0x64, .type=IO_READ},
        {.addr=0x60a8, .value=0x0b, .type=IO_READ},
        {.addr=0x000b, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0255", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0256) {
    const struct CPU_State initial_cpu = {.pc=0x8e72, .a=0x62, .x=0x7c, .y=0x62, .sp=0x59, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c5, .value=0x67}, {.addr=0x8e72, .value=0x64}, {.addr=0x8e73, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x8e74, .a=0x62, .x=0x7c, .y=0x62, .sp=0x59, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c5, .value=0x67}, {.addr=0x8e72, .value=0x64}, {.addr=0x8e73, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x8e72, .value=0x64, .type=IO_READ},
        {.addr=0x8e73, .value=0xc5, .type=IO_READ},
        {.addr=0x00c5, .value=0x67, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0256", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0257) {
    const struct CPU_State initial_cpu = {.pc=0x5210, .a=0xb9, .x=0x65, .y=0x0f, .sp=0x82, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c5, .value=0x47}, {.addr=0x5210, .value=0x64}, {.addr=0x5211, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x5212, .a=0xb9, .x=0x65, .y=0x0f, .sp=0x82, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c5, .value=0x47}, {.addr=0x5210, .value=0x64}, {.addr=0x5211, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x5210, .value=0x64, .type=IO_READ},
        {.addr=0x5211, .value=0xc5, .type=IO_READ},
        {.addr=0x00c5, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0257", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0258) {
    const struct CPU_State initial_cpu = {.pc=0x2685, .a=0x70, .x=0x7f, .y=0x92, .sp=0xc0, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015a, .value=0xb3}, {.addr=0x2685, .value=0x64}, {.addr=0x2686, .value=0x5a},
    };
    const struct CPU_State final_cpu = {.pc=0x2687, .a=0x70, .x=0x7f, .y=0x92, .sp=0xc0, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x015a, .value=0xb3}, {.addr=0x2685, .value=0x64}, {.addr=0x2686, .value=0x5a},
    };
    const struct BusEvent events[] = {
        {.addr=0x2685, .value=0x64, .type=IO_READ},
        {.addr=0x2686, .value=0x5a, .type=IO_READ},
        {.addr=0x015a, .value=0xb3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0258", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0259) {
    const struct CPU_State initial_cpu = {.pc=0xb69f, .a=0x20, .x=0x73, .y=0xb1, .sp=0x13, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0xad}, {.addr=0xb69f, .value=0x64}, {.addr=0xb6a0, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0xb6a1, .a=0x20, .x=0x73, .y=0xb1, .sp=0x13, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0xad}, {.addr=0xb69f, .value=0x64}, {.addr=0xb6a0, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0xb69f, .value=0x64, .type=IO_READ},
        {.addr=0xb6a0, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0259", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_025A) {
    const struct CPU_State initial_cpu = {.pc=0x5337, .a=0x14, .x=0xcb, .y=0xd5, .sp=0x92, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0110, .value=0xd9}, {.addr=0x5337, .value=0x64}, {.addr=0x5338, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0x5339, .a=0x14, .x=0xcb, .y=0xd5, .sp=0x92, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x0110, .value=0xd9}, {.addr=0x5337, .value=0x64}, {.addr=0x5338, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0x5337, .value=0x64, .type=IO_READ},
        {.addr=0x5338, .value=0x10, .type=IO_READ},
        {.addr=0x0110, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 025A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_025B) {
    const struct CPU_State initial_cpu = {.pc=0xe8a7, .a=0x1d, .x=0xa3, .y=0xe6, .sp=0xd0, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007f, .value=0x57}, {.addr=0xe8a7, .value=0x64}, {.addr=0xe8a8, .value=0x7f},
    };
    const struct CPU_State final_cpu = {.pc=0xe8a9, .a=0x1d, .x=0xa3, .y=0xe6, .sp=0xd0, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x007f, .value=0x57}, {.addr=0xe8a7, .value=0x64}, {.addr=0xe8a8, .value=0x7f},
    };
    const struct BusEvent events[] = {
        {.addr=0xe8a7, .value=0x64, .type=IO_READ},
        {.addr=0xe8a8, .value=0x7f, .type=IO_READ},
        {.addr=0x007f, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 025B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_025C) {
    const struct CPU_State initial_cpu = {.pc=0x42ac, .a=0x05, .x=0xd3, .y=0x6a, .sp=0xf9, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0x9e}, {.addr=0x42ac, .value=0x64}, {.addr=0x42ad, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x42ae, .a=0x05, .x=0xd3, .y=0x6a, .sp=0xf9, .status=0x6c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0x9e}, {.addr=0x42ac, .value=0x64}, {.addr=0x42ad, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x42ac, .value=0x64, .type=IO_READ},
        {.addr=0x42ad, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 025C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_025D) {
    const struct CPU_State initial_cpu = {.pc=0xff3f, .a=0x34, .x=0x7a, .y=0x66, .sp=0x79, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f0, .value=0x4b}, {.addr=0xff3f, .value=0x64}, {.addr=0xff40, .value=0xf0},
    };
    const struct CPU_State final_cpu = {.pc=0xff41, .a=0x34, .x=0x7a, .y=0x66, .sp=0x79, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f0, .value=0x4b}, {.addr=0xff3f, .value=0x64}, {.addr=0xff40, .value=0xf0},
    };
    const struct BusEvent events[] = {
        {.addr=0xff3f, .value=0x64, .type=IO_READ},
        {.addr=0xff40, .value=0xf0, .type=IO_READ},
        {.addr=0x01f0, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 025D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_025E) {
    const struct CPU_State initial_cpu = {.pc=0x8f49, .a=0x1e, .x=0xeb, .y=0x1c, .sp=0xca, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0xe1}, {.addr=0x8f49, .value=0x64}, {.addr=0x8f4a, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x8f4b, .a=0x1e, .x=0xeb, .y=0x1c, .sp=0xca, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0xe1}, {.addr=0x8f49, .value=0x64}, {.addr=0x8f4a, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f49, .value=0x64, .type=IO_READ},
        {.addr=0x8f4a, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0xe1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 025E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_025F) {
    const struct CPU_State initial_cpu = {.pc=0x6fcf, .a=0x4d, .x=0x6a, .y=0xac, .sp=0x0e, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0120, .value=0x47}, {.addr=0x6fcf, .value=0x64}, {.addr=0x6fd0, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x6fd1, .a=0x4d, .x=0x6a, .y=0xac, .sp=0x0e, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0120, .value=0x47}, {.addr=0x6fcf, .value=0x64}, {.addr=0x6fd0, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x6fcf, .value=0x64, .type=IO_READ},
        {.addr=0x6fd0, .value=0x20, .type=IO_READ},
        {.addr=0x0120, .value=0x47, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 025F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0260) {
    const struct CPU_State initial_cpu = {.pc=0x4421, .a=0x7d, .x=0xe6, .y=0x5f, .sp=0xbb, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ca, .value=0xc4}, {.addr=0x4421, .value=0x64}, {.addr=0x4422, .value=0xca},
    };
    const struct CPU_State final_cpu = {.pc=0x4423, .a=0x7d, .x=0xe6, .y=0x5f, .sp=0xbb, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ca, .value=0xc4}, {.addr=0x4421, .value=0x64}, {.addr=0x4422, .value=0xca},
    };
    const struct BusEvent events[] = {
        {.addr=0x4421, .value=0x64, .type=IO_READ},
        {.addr=0x4422, .value=0xca, .type=IO_READ},
        {.addr=0x01ca, .value=0xc4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0260", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0261) {
    const struct CPU_State initial_cpu = {.pc=0x0b6d, .a=0x95, .x=0x63, .y=0x44, .sp=0x5a, .status=0xa1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e8, .value=0x0b}, {.addr=0x0b6d, .value=0x64}, {.addr=0x0b6e, .value=0xe8},
    };
    const struct CPU_State final_cpu = {.pc=0x0b6f, .a=0x95, .x=0x63, .y=0x44, .sp=0x5a, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e8, .value=0x0b}, {.addr=0x0b6d, .value=0x64}, {.addr=0x0b6e, .value=0xe8},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b6d, .value=0x64, .type=IO_READ},
        {.addr=0x0b6e, .value=0xe8, .type=IO_READ},
        {.addr=0x01e8, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0261", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0262) {
    const struct CPU_State initial_cpu = {.pc=0x280a, .a=0xc8, .x=0xb7, .y=0x73, .sp=0x53, .status=0x43};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0096, .value=0x28}, {.addr=0x280a, .value=0x64}, {.addr=0x280b, .value=0x96},
    };
    const struct CPU_State final_cpu = {.pc=0x280c, .a=0xc8, .x=0xb7, .y=0x73, .sp=0x53, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0096, .value=0x28}, {.addr=0x280a, .value=0x64}, {.addr=0x280b, .value=0x96},
    };
    const struct BusEvent events[] = {
        {.addr=0x280a, .value=0x64, .type=IO_READ},
        {.addr=0x280b, .value=0x96, .type=IO_READ},
        {.addr=0x0096, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0262", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0263) {
    const struct CPU_State initial_cpu = {.pc=0xa947, .a=0xea, .x=0x9e, .y=0xfa, .sp=0x62, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0002, .value=0x75}, {.addr=0xa947, .value=0x64}, {.addr=0xa948, .value=0x02},
    };
    const struct CPU_State final_cpu = {.pc=0xa949, .a=0xea, .x=0x9e, .y=0xfa, .sp=0x62, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0002, .value=0x75}, {.addr=0xa947, .value=0x64}, {.addr=0xa948, .value=0x02},
    };
    const struct BusEvent events[] = {
        {.addr=0xa947, .value=0x64, .type=IO_READ},
        {.addr=0xa948, .value=0x02, .type=IO_READ},
        {.addr=0x0002, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0263", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0264) {
    const struct CPU_State initial_cpu = {.pc=0x89b0, .a=0x23, .x=0x7e, .y=0xa5, .sp=0x62, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016f, .value=0xd0}, {.addr=0x89b0, .value=0x64}, {.addr=0x89b1, .value=0x6f},
    };
    const struct CPU_State final_cpu = {.pc=0x89b2, .a=0x23, .x=0x7e, .y=0xa5, .sp=0x62, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x016f, .value=0xd0}, {.addr=0x89b0, .value=0x64}, {.addr=0x89b1, .value=0x6f},
    };
    const struct BusEvent events[] = {
        {.addr=0x89b0, .value=0x64, .type=IO_READ},
        {.addr=0x89b1, .value=0x6f, .type=IO_READ},
        {.addr=0x016f, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0264", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0265) {
    const struct CPU_State initial_cpu = {.pc=0xd3c9, .a=0x96, .x=0x86, .y=0x75, .sp=0x97, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005f, .value=0x7f}, {.addr=0xd3c9, .value=0x64}, {.addr=0xd3ca, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0xd3cb, .a=0x96, .x=0x86, .y=0x75, .sp=0x97, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x005f, .value=0x7f}, {.addr=0xd3c9, .value=0x64}, {.addr=0xd3ca, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0xd3c9, .value=0x64, .type=IO_READ},
        {.addr=0xd3ca, .value=0x5f, .type=IO_READ},
        {.addr=0x005f, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0265", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0266) {
    const struct CPU_State initial_cpu = {.pc=0x337e, .a=0x51, .x=0xf0, .y=0xdf, .sp=0x25, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b5, .value=0x6a}, {.addr=0x337e, .value=0x64}, {.addr=0x337f, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x3380, .a=0x51, .x=0xf0, .y=0xdf, .sp=0x25, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b5, .value=0x6a}, {.addr=0x337e, .value=0x64}, {.addr=0x337f, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x337e, .value=0x64, .type=IO_READ},
        {.addr=0x337f, .value=0xb5, .type=IO_READ},
        {.addr=0x01b5, .value=0x6a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0266", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0267) {
    const struct CPU_State initial_cpu = {.pc=0xa7f1, .a=0x2d, .x=0xc8, .y=0x2a, .sp=0x06, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bd, .value=0x1c}, {.addr=0xa7f1, .value=0x64}, {.addr=0xa7f2, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0xa7f3, .a=0x2d, .x=0xc8, .y=0x2a, .sp=0x06, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bd, .value=0x1c}, {.addr=0xa7f1, .value=0x64}, {.addr=0xa7f2, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0xa7f1, .value=0x64, .type=IO_READ},
        {.addr=0xa7f2, .value=0xbd, .type=IO_READ},
        {.addr=0x00bd, .value=0x1c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0267", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0268) {
    const struct CPU_State initial_cpu = {.pc=0xabec, .a=0x7a, .x=0xe5, .y=0xbe, .sp=0x12, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006d, .value=0xb4}, {.addr=0xabec, .value=0x64}, {.addr=0xabed, .value=0x6d},
    };
    const struct CPU_State final_cpu = {.pc=0xabee, .a=0x7a, .x=0xe5, .y=0xbe, .sp=0x12, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x006d, .value=0xb4}, {.addr=0xabec, .value=0x64}, {.addr=0xabed, .value=0x6d},
    };
    const struct BusEvent events[] = {
        {.addr=0xabec, .value=0x64, .type=IO_READ},
        {.addr=0xabed, .value=0x6d, .type=IO_READ},
        {.addr=0x006d, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0268", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0269) {
    const struct CPU_State initial_cpu = {.pc=0x8c80, .a=0xaf, .x=0x39, .y=0x6b, .sp=0xad, .status=0x11};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0056, .value=0x33}, {.addr=0x8c80, .value=0x64}, {.addr=0x8c81, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x8c82, .a=0xaf, .x=0x39, .y=0x6b, .sp=0xad, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0056, .value=0x33}, {.addr=0x8c80, .value=0x64}, {.addr=0x8c81, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x8c80, .value=0x64, .type=IO_READ},
        {.addr=0x8c81, .value=0x56, .type=IO_READ},
        {.addr=0x0056, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0269", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_026A) {
    const struct CPU_State initial_cpu = {.pc=0xdcd4, .a=0xd8, .x=0x6f, .y=0xd3, .sp=0x29, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0x92}, {.addr=0xdcd4, .value=0x64}, {.addr=0xdcd5, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0xdcd6, .a=0xd8, .x=0x6f, .y=0xd3, .sp=0x29, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0x92}, {.addr=0xdcd4, .value=0x64}, {.addr=0xdcd5, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0xdcd4, .value=0x64, .type=IO_READ},
        {.addr=0xdcd5, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 026A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_026B) {
    const struct CPU_State initial_cpu = {.pc=0x54f3, .a=0x43, .x=0xcf, .y=0xef, .sp=0xa4, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0x36}, {.addr=0x54f3, .value=0x64}, {.addr=0x54f4, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0x54f5, .a=0x43, .x=0xcf, .y=0xef, .sp=0xa4, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0x36}, {.addr=0x54f3, .value=0x64}, {.addr=0x54f4, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0x54f3, .value=0x64, .type=IO_READ},
        {.addr=0x54f4, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 026B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_026C) {
    const struct CPU_State initial_cpu = {.pc=0xd702, .a=0xdb, .x=0x11, .y=0x1f, .sp=0xb1, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0xa6}, {.addr=0xd702, .value=0x64}, {.addr=0xd703, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0xd704, .a=0xdb, .x=0x11, .y=0x1f, .sp=0xb1, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0xa6}, {.addr=0xd702, .value=0x64}, {.addr=0xd703, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0xd702, .value=0x64, .type=IO_READ},
        {.addr=0xd703, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 026C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_026D) {
    const struct CPU_State initial_cpu = {.pc=0x1699, .a=0x4d, .x=0x9c, .y=0xec, .sp=0x76, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0xea}, {.addr=0x1699, .value=0x64}, {.addr=0x169a, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0x169b, .a=0x4d, .x=0x9c, .y=0xec, .sp=0x76, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0xea}, {.addr=0x1699, .value=0x64}, {.addr=0x169a, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0x1699, .value=0x64, .type=IO_READ},
        {.addr=0x169a, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 026D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_026E) {
    const struct CPU_State initial_cpu = {.pc=0x2f0a, .a=0xfa, .x=0x60, .y=0x9d, .sp=0x93, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0xc6}, {.addr=0x2f0a, .value=0x64}, {.addr=0x2f0b, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x2f0c, .a=0xfa, .x=0x60, .y=0x9d, .sp=0x93, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0xc6}, {.addr=0x2f0a, .value=0x64}, {.addr=0x2f0b, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f0a, .value=0x64, .type=IO_READ},
        {.addr=0x2f0b, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 026E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_026F) {
    const struct CPU_State initial_cpu = {.pc=0xba78, .a=0xde, .x=0xc2, .y=0xb3, .sp=0xed, .status=0xe8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0x2f}, {.addr=0xba78, .value=0x64}, {.addr=0xba79, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0xba7a, .a=0xde, .x=0xc2, .y=0xb3, .sp=0xed, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0x2f}, {.addr=0xba78, .value=0x64}, {.addr=0xba79, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0xba78, .value=0x64, .type=IO_READ},
        {.addr=0xba79, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 026F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0270) {
    const struct CPU_State initial_cpu = {.pc=0x899c, .a=0x85, .x=0x1f, .y=0x30, .sp=0xd5, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x1b}, {.addr=0x899c, .value=0x64}, {.addr=0x899d, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x899e, .a=0x85, .x=0x1f, .y=0x30, .sp=0xd5, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x1b}, {.addr=0x899c, .value=0x64}, {.addr=0x899d, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x899c, .value=0x64, .type=IO_READ},
        {.addr=0x899d, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0270", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0271) {
    const struct CPU_State initial_cpu = {.pc=0x56fa, .a=0x4f, .x=0xf5, .y=0x18, .sp=0x66, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x56}, {.addr=0x56fa, .value=0x64}, {.addr=0x56fb, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x56fc, .a=0x4f, .x=0xf5, .y=0x18, .sp=0x66, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x56}, {.addr=0x56fa, .value=0x64}, {.addr=0x56fb, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x56fa, .value=0x64, .type=IO_READ},
        {.addr=0x56fb, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0271", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0272) {
    const struct CPU_State initial_cpu = {.pc=0xbc7b, .a=0xda, .x=0x6c, .y=0xe3, .sp=0x81, .status=0xad};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a3, .value=0x9c}, {.addr=0xbc7b, .value=0x64}, {.addr=0xbc7c, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0xbc7d, .a=0xda, .x=0x6c, .y=0xe3, .sp=0x81, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a3, .value=0x9c}, {.addr=0xbc7b, .value=0x64}, {.addr=0xbc7c, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc7b, .value=0x64, .type=IO_READ},
        {.addr=0xbc7c, .value=0xa3, .type=IO_READ},
        {.addr=0x01a3, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0272", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0273) {
    const struct CPU_State initial_cpu = {.pc=0x3e7f, .a=0x0c, .x=0x5d, .y=0xb7, .sp=0xa7, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01da, .value=0x5c}, {.addr=0x3e7f, .value=0x64}, {.addr=0x3e80, .value=0xda},
    };
    const struct CPU_State final_cpu = {.pc=0x3e81, .a=0x0c, .x=0x5d, .y=0xb7, .sp=0xa7, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01da, .value=0x5c}, {.addr=0x3e7f, .value=0x64}, {.addr=0x3e80, .value=0xda},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e7f, .value=0x64, .type=IO_READ},
        {.addr=0x3e80, .value=0xda, .type=IO_READ},
        {.addr=0x01da, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0273", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0274) {
    const struct CPU_State initial_cpu = {.pc=0x7504, .a=0x5a, .x=0xa3, .y=0x86, .sp=0xb3, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0x04}, {.addr=0x7504, .value=0x64}, {.addr=0x7505, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x7506, .a=0x5a, .x=0xa3, .y=0x86, .sp=0xb3, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0x04}, {.addr=0x7504, .value=0x64}, {.addr=0x7505, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x7504, .value=0x64, .type=IO_READ},
        {.addr=0x7505, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0274", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0275) {
    const struct CPU_State initial_cpu = {.pc=0xce4a, .a=0x34, .x=0x1e, .y=0x53, .sp=0x9e, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008e, .value=0x26}, {.addr=0xce4a, .value=0x64}, {.addr=0xce4b, .value=0x8e},
    };
    const struct CPU_State final_cpu = {.pc=0xce4c, .a=0x34, .x=0x1e, .y=0x53, .sp=0x9e, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x008e, .value=0x26}, {.addr=0xce4a, .value=0x64}, {.addr=0xce4b, .value=0x8e},
    };
    const struct BusEvent events[] = {
        {.addr=0xce4a, .value=0x64, .type=IO_READ},
        {.addr=0xce4b, .value=0x8e, .type=IO_READ},
        {.addr=0x008e, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0275", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0276) {
    const struct CPU_State initial_cpu = {.pc=0xa8cf, .a=0xc2, .x=0xaa, .y=0x5e, .sp=0xc3, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0x8e}, {.addr=0xa8cf, .value=0x64}, {.addr=0xa8d0, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0xa8d1, .a=0xc2, .x=0xaa, .y=0x5e, .sp=0xc3, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0x8e}, {.addr=0xa8cf, .value=0x64}, {.addr=0xa8d0, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0xa8cf, .value=0x64, .type=IO_READ},
        {.addr=0xa8d0, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0x8e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0276", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0277) {
    const struct CPU_State initial_cpu = {.pc=0x6e22, .a=0x1b, .x=0x65, .y=0xcb, .sp=0xd2, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0128, .value=0xe9}, {.addr=0x6e22, .value=0x64}, {.addr=0x6e23, .value=0x28},
    };
    const struct CPU_State final_cpu = {.pc=0x6e24, .a=0x1b, .x=0x65, .y=0xcb, .sp=0xd2, .status=0x3c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0128, .value=0xe9}, {.addr=0x6e22, .value=0x64}, {.addr=0x6e23, .value=0x28},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e22, .value=0x64, .type=IO_READ},
        {.addr=0x6e23, .value=0x28, .type=IO_READ},
        {.addr=0x0128, .value=0xe9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0277", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0278) {
    const struct CPU_State initial_cpu = {.pc=0x3845, .a=0x21, .x=0x5f, .y=0xc4, .sp=0x11, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014c, .value=0xe8}, {.addr=0x3845, .value=0x64}, {.addr=0x3846, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0x3847, .a=0x21, .x=0x5f, .y=0xc4, .sp=0x11, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x014c, .value=0xe8}, {.addr=0x3845, .value=0x64}, {.addr=0x3846, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0x3845, .value=0x64, .type=IO_READ},
        {.addr=0x3846, .value=0x4c, .type=IO_READ},
        {.addr=0x014c, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0278", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0279) {
    const struct CPU_State initial_cpu = {.pc=0x232c, .a=0x82, .x=0x8c, .y=0xdc, .sp=0x3f, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0160, .value=0x92}, {.addr=0x232c, .value=0x64}, {.addr=0x232d, .value=0x60},
    };
    const struct CPU_State final_cpu = {.pc=0x232e, .a=0x82, .x=0x8c, .y=0xdc, .sp=0x3f, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0160, .value=0x92}, {.addr=0x232c, .value=0x64}, {.addr=0x232d, .value=0x60},
    };
    const struct BusEvent events[] = {
        {.addr=0x232c, .value=0x64, .type=IO_READ},
        {.addr=0x232d, .value=0x60, .type=IO_READ},
        {.addr=0x0160, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0279", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_027A) {
    const struct CPU_State initial_cpu = {.pc=0x6621, .a=0x3b, .x=0x95, .y=0xbb, .sp=0x76, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0017, .value=0xc3}, {.addr=0x6621, .value=0x64}, {.addr=0x6622, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0x6623, .a=0x3b, .x=0x95, .y=0xbb, .sp=0x76, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x0017, .value=0xc3}, {.addr=0x6621, .value=0x64}, {.addr=0x6622, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0x6621, .value=0x64, .type=IO_READ},
        {.addr=0x6622, .value=0x17, .type=IO_READ},
        {.addr=0x0017, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 027A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_027B) {
    const struct CPU_State initial_cpu = {.pc=0xe2c3, .a=0x7d, .x=0xc9, .y=0x3b, .sp=0x2f, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0037, .value=0x60}, {.addr=0xe2c3, .value=0x64}, {.addr=0xe2c4, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0xe2c5, .a=0x7d, .x=0xc9, .y=0x3b, .sp=0x2f, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0037, .value=0x60}, {.addr=0xe2c3, .value=0x64}, {.addr=0xe2c4, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0xe2c3, .value=0x64, .type=IO_READ},
        {.addr=0xe2c4, .value=0x37, .type=IO_READ},
        {.addr=0x0037, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 027B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_027C) {
    const struct CPU_State initial_cpu = {.pc=0x8095, .a=0x7a, .x=0x3a, .y=0x02, .sp=0xc5, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0x02}, {.addr=0x8095, .value=0x64}, {.addr=0x8096, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x8097, .a=0x7a, .x=0x3a, .y=0x02, .sp=0xc5, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0x02}, {.addr=0x8095, .value=0x64}, {.addr=0x8096, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x8095, .value=0x64, .type=IO_READ},
        {.addr=0x8096, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0x02, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 027C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_027D) {
    const struct CPU_State initial_cpu = {.pc=0xbc44, .a=0xcf, .x=0xd7, .y=0x7c, .sp=0x6e, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dc, .value=0x4e}, {.addr=0xbc44, .value=0x64}, {.addr=0xbc45, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0xbc46, .a=0xcf, .x=0xd7, .y=0x7c, .sp=0x6e, .status=0xe1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dc, .value=0x4e}, {.addr=0xbc44, .value=0x64}, {.addr=0xbc45, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0xbc44, .value=0x64, .type=IO_READ},
        {.addr=0xbc45, .value=0xdc, .type=IO_READ},
        {.addr=0x01dc, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 027D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_027E) {
    const struct CPU_State initial_cpu = {.pc=0xda5f, .a=0xec, .x=0x33, .y=0xf7, .sp=0xa9, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0194, .value=0xb8}, {.addr=0xda5f, .value=0x64}, {.addr=0xda60, .value=0x94},
    };
    const struct CPU_State final_cpu = {.pc=0xda61, .a=0xec, .x=0x33, .y=0xf7, .sp=0xa9, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0194, .value=0xb8}, {.addr=0xda5f, .value=0x64}, {.addr=0xda60, .value=0x94},
    };
    const struct BusEvent events[] = {
        {.addr=0xda5f, .value=0x64, .type=IO_READ},
        {.addr=0xda60, .value=0x94, .type=IO_READ},
        {.addr=0x0194, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 027E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_027F) {
    const struct CPU_State initial_cpu = {.pc=0xc8b8, .a=0x07, .x=0x52, .y=0x8b, .sp=0xd9, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ed, .value=0x4c}, {.addr=0xc8b8, .value=0x64}, {.addr=0xc8b9, .value=0xed},
    };
    const struct CPU_State final_cpu = {.pc=0xc8ba, .a=0x07, .x=0x52, .y=0x8b, .sp=0xd9, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ed, .value=0x4c}, {.addr=0xc8b8, .value=0x64}, {.addr=0xc8b9, .value=0xed},
    };
    const struct BusEvent events[] = {
        {.addr=0xc8b8, .value=0x64, .type=IO_READ},
        {.addr=0xc8b9, .value=0xed, .type=IO_READ},
        {.addr=0x00ed, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 027F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0280) {
    const struct CPU_State initial_cpu = {.pc=0x05e9, .a=0x18, .x=0x87, .y=0xfe, .sp=0x39, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0099, .value=0x39}, {.addr=0x05e9, .value=0x64}, {.addr=0x05ea, .value=0x99},
    };
    const struct CPU_State final_cpu = {.pc=0x05eb, .a=0x18, .x=0x87, .y=0xfe, .sp=0x39, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0099, .value=0x39}, {.addr=0x05e9, .value=0x64}, {.addr=0x05ea, .value=0x99},
    };
    const struct BusEvent events[] = {
        {.addr=0x05e9, .value=0x64, .type=IO_READ},
        {.addr=0x05ea, .value=0x99, .type=IO_READ},
        {.addr=0x0099, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0280", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0281) {
    const struct CPU_State initial_cpu = {.pc=0x326e, .a=0x87, .x=0xe0, .y=0x87, .sp=0x69, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f0, .value=0xd3}, {.addr=0x326e, .value=0x64}, {.addr=0x326f, .value=0xf0},
    };
    const struct CPU_State final_cpu = {.pc=0x3270, .a=0x87, .x=0xe0, .y=0x87, .sp=0x69, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f0, .value=0xd3}, {.addr=0x326e, .value=0x64}, {.addr=0x326f, .value=0xf0},
    };
    const struct BusEvent events[] = {
        {.addr=0x326e, .value=0x64, .type=IO_READ},
        {.addr=0x326f, .value=0xf0, .type=IO_READ},
        {.addr=0x01f0, .value=0xd3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0281", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0283) {
    const struct CPU_State initial_cpu = {.pc=0x6034, .a=0xd1, .x=0xaa, .y=0x5c, .sp=0xaf, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010f, .value=0x65}, {.addr=0x6034, .value=0x64}, {.addr=0x6035, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x6036, .a=0xd1, .x=0xaa, .y=0x5c, .sp=0xaf, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x010f, .value=0x65}, {.addr=0x6034, .value=0x64}, {.addr=0x6035, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x6034, .value=0x64, .type=IO_READ},
        {.addr=0x6035, .value=0x0f, .type=IO_READ},
        {.addr=0x010f, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0283", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0284) {
    const struct CPU_State initial_cpu = {.pc=0x4961, .a=0x55, .x=0xba, .y=0xc7, .sp=0xf7, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0x34}, {.addr=0x4961, .value=0x64}, {.addr=0x4962, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x4963, .a=0x55, .x=0xba, .y=0xc7, .sp=0xf7, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0x34}, {.addr=0x4961, .value=0x64}, {.addr=0x4962, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x4961, .value=0x64, .type=IO_READ},
        {.addr=0x4962, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0284", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0285) {
    const struct CPU_State initial_cpu = {.pc=0xce44, .a=0x04, .x=0xe4, .y=0x8b, .sp=0xa1, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014d, .value=0x4c}, {.addr=0xce44, .value=0x64}, {.addr=0xce45, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0xce46, .a=0x04, .x=0xe4, .y=0x8b, .sp=0xa1, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x014d, .value=0x4c}, {.addr=0xce44, .value=0x64}, {.addr=0xce45, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0xce44, .value=0x64, .type=IO_READ},
        {.addr=0xce45, .value=0x4d, .type=IO_READ},
        {.addr=0x014d, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0285", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0286) {
    const struct CPU_State initial_cpu = {.pc=0xe449, .a=0xbc, .x=0x4d, .y=0x50, .sp=0x88, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0056, .value=0xa9}, {.addr=0xe449, .value=0x64}, {.addr=0xe44a, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0xe44b, .a=0xbc, .x=0x4d, .y=0x50, .sp=0x88, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0056, .value=0xa9}, {.addr=0xe449, .value=0x64}, {.addr=0xe44a, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0xe449, .value=0x64, .type=IO_READ},
        {.addr=0xe44a, .value=0x56, .type=IO_READ},
        {.addr=0x0056, .value=0xa9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0286", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0287) {
    const struct CPU_State initial_cpu = {.pc=0x8f58, .a=0x30, .x=0x9f, .y=0x8e, .sp=0x37, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f9, .value=0x9a}, {.addr=0x8f58, .value=0x64}, {.addr=0x8f59, .value=0xf9},
    };
    const struct CPU_State final_cpu = {.pc=0x8f5a, .a=0x30, .x=0x9f, .y=0x8e, .sp=0x37, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f9, .value=0x9a}, {.addr=0x8f58, .value=0x64}, {.addr=0x8f59, .value=0xf9},
    };
    const struct BusEvent events[] = {
        {.addr=0x8f58, .value=0x64, .type=IO_READ},
        {.addr=0x8f59, .value=0xf9, .type=IO_READ},
        {.addr=0x01f9, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0287", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0288) {
    const struct CPU_State initial_cpu = {.pc=0xcaf7, .a=0x2d, .x=0xb0, .y=0x84, .sp=0x74, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014e, .value=0xab}, {.addr=0xcaf7, .value=0x64}, {.addr=0xcaf8, .value=0x4e},
    };
    const struct CPU_State final_cpu = {.pc=0xcaf9, .a=0x2d, .x=0xb0, .y=0x84, .sp=0x74, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x014e, .value=0xab}, {.addr=0xcaf7, .value=0x64}, {.addr=0xcaf8, .value=0x4e},
    };
    const struct BusEvent events[] = {
        {.addr=0xcaf7, .value=0x64, .type=IO_READ},
        {.addr=0xcaf8, .value=0x4e, .type=IO_READ},
        {.addr=0x014e, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0288", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0289) {
    const struct CPU_State initial_cpu = {.pc=0xabf4, .a=0x01, .x=0xbd, .y=0xad, .sp=0x63, .status=0x4f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009e, .value=0x8d}, {.addr=0xabf4, .value=0x64}, {.addr=0xabf5, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0xabf6, .a=0x01, .x=0xbd, .y=0xad, .sp=0x63, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x009e, .value=0x8d}, {.addr=0xabf4, .value=0x64}, {.addr=0xabf5, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0xabf4, .value=0x64, .type=IO_READ},
        {.addr=0xabf5, .value=0x9e, .type=IO_READ},
        {.addr=0x009e, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0289", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_028A) {
    const struct CPU_State initial_cpu = {.pc=0x32d5, .a=0x45, .x=0xe3, .y=0xfd, .sp=0x02, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a4, .value=0x0f}, {.addr=0x32d5, .value=0x64}, {.addr=0x32d6, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0x32d7, .a=0x45, .x=0xe3, .y=0xfd, .sp=0x02, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a4, .value=0x0f}, {.addr=0x32d5, .value=0x64}, {.addr=0x32d6, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0x32d5, .value=0x64, .type=IO_READ},
        {.addr=0x32d6, .value=0xa4, .type=IO_READ},
        {.addr=0x00a4, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 028A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_028B) {
    const struct CPU_State initial_cpu = {.pc=0xecee, .a=0x4b, .x=0x37, .y=0xe7, .sp=0xd7, .status=0x9e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0xad}, {.addr=0xecee, .value=0x64}, {.addr=0xecef, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0xecf0, .a=0x4b, .x=0x37, .y=0xe7, .sp=0xd7, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0xad}, {.addr=0xecee, .value=0x64}, {.addr=0xecef, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0xecee, .value=0x64, .type=IO_READ},
        {.addr=0xecef, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 028B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_028C) {
    const struct CPU_State initial_cpu = {.pc=0xf279, .a=0x94, .x=0x90, .y=0xbd, .sp=0xe0, .status=0x0f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0054, .value=0xbe}, {.addr=0xf279, .value=0x64}, {.addr=0xf27a, .value=0x54},
    };
    const struct CPU_State final_cpu = {.pc=0xf27b, .a=0x94, .x=0x90, .y=0xbd, .sp=0xe0, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0054, .value=0xbe}, {.addr=0xf279, .value=0x64}, {.addr=0xf27a, .value=0x54},
    };
    const struct BusEvent events[] = {
        {.addr=0xf279, .value=0x64, .type=IO_READ},
        {.addr=0xf27a, .value=0x54, .type=IO_READ},
        {.addr=0x0054, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 028C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_028D) {
    const struct CPU_State initial_cpu = {.pc=0xb922, .a=0x5b, .x=0x68, .y=0x6f, .sp=0xdd, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0089, .value=0x4e}, {.addr=0xb922, .value=0x64}, {.addr=0xb923, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0xb924, .a=0x5b, .x=0x68, .y=0x6f, .sp=0xdd, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0089, .value=0x4e}, {.addr=0xb922, .value=0x64}, {.addr=0xb923, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0xb922, .value=0x64, .type=IO_READ},
        {.addr=0xb923, .value=0x89, .type=IO_READ},
        {.addr=0x0089, .value=0x4e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 028D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_028E) {
    const struct CPU_State initial_cpu = {.pc=0xd066, .a=0xa1, .x=0x19, .y=0xe5, .sp=0x20, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0x7c}, {.addr=0xd066, .value=0x64}, {.addr=0xd067, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0xd068, .a=0xa1, .x=0x19, .y=0xe5, .sp=0x20, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0x7c}, {.addr=0xd066, .value=0x64}, {.addr=0xd067, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0xd066, .value=0x64, .type=IO_READ},
        {.addr=0xd067, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 028E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_028F) {
    const struct CPU_State initial_cpu = {.pc=0x3288, .a=0xf6, .x=0x93, .y=0xee, .sp=0x4e, .status=0x3b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ac, .value=0x54}, {.addr=0x3288, .value=0x64}, {.addr=0x3289, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x328a, .a=0xf6, .x=0x93, .y=0xee, .sp=0x4e, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ac, .value=0x54}, {.addr=0x3288, .value=0x64}, {.addr=0x3289, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x3288, .value=0x64, .type=IO_READ},
        {.addr=0x3289, .value=0xac, .type=IO_READ},
        {.addr=0x01ac, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 028F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0290) {
    const struct CPU_State initial_cpu = {.pc=0x01de, .a=0xc1, .x=0xa2, .y=0x63, .sp=0x6a, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0173, .value=0xa1}, {.addr=0x01de, .value=0x64}, {.addr=0x01df, .value=0x73},
    };
    const struct CPU_State final_cpu = {.pc=0x01e0, .a=0xc1, .x=0xa2, .y=0x63, .sp=0x6a, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0173, .value=0xa1}, {.addr=0x01de, .value=0x64}, {.addr=0x01df, .value=0x73},
    };
    const struct BusEvent events[] = {
        {.addr=0x01de, .value=0x64, .type=IO_READ},
        {.addr=0x01df, .value=0x73, .type=IO_READ},
        {.addr=0x0173, .value=0xa1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0290", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0291) {
    const struct CPU_State initial_cpu = {.pc=0xacce, .a=0x80, .x=0xde, .y=0x31, .sp=0xe6, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c7, .value=0x38}, {.addr=0xacce, .value=0x64}, {.addr=0xaccf, .value=0xc7},
    };
    const struct CPU_State final_cpu = {.pc=0xacd0, .a=0x80, .x=0xde, .y=0x31, .sp=0xe6, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c7, .value=0x38}, {.addr=0xacce, .value=0x64}, {.addr=0xaccf, .value=0xc7},
    };
    const struct BusEvent events[] = {
        {.addr=0xacce, .value=0x64, .type=IO_READ},
        {.addr=0xaccf, .value=0xc7, .type=IO_READ},
        {.addr=0x00c7, .value=0x38, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0291", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0292) {
    const struct CPU_State initial_cpu = {.pc=0xfe32, .a=0xa1, .x=0x8b, .y=0x34, .sp=0x82, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0119, .value=0x93}, {.addr=0xfe32, .value=0x64}, {.addr=0xfe33, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0xfe34, .a=0xa1, .x=0x8b, .y=0x34, .sp=0x82, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0119, .value=0x93}, {.addr=0xfe32, .value=0x64}, {.addr=0xfe33, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0xfe32, .value=0x64, .type=IO_READ},
        {.addr=0xfe33, .value=0x19, .type=IO_READ},
        {.addr=0x0119, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0292", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0293) {
    const struct CPU_State initial_cpu = {.pc=0x4d40, .a=0xd4, .x=0xec, .y=0x24, .sp=0x42, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0181, .value=0x70}, {.addr=0x4d40, .value=0x64}, {.addr=0x4d41, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x4d42, .a=0xd4, .x=0xec, .y=0x24, .sp=0x42, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0181, .value=0x70}, {.addr=0x4d40, .value=0x64}, {.addr=0x4d41, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d40, .value=0x64, .type=IO_READ},
        {.addr=0x4d41, .value=0x81, .type=IO_READ},
        {.addr=0x0181, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0293", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0294) {
    const struct CPU_State initial_cpu = {.pc=0x399d, .a=0x6a, .x=0x93, .y=0xa4, .sp=0x64, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e2, .value=0x33}, {.addr=0x399d, .value=0x64}, {.addr=0x399e, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0x399f, .a=0x6a, .x=0x93, .y=0xa4, .sp=0x64, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e2, .value=0x33}, {.addr=0x399d, .value=0x64}, {.addr=0x399e, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0x399d, .value=0x64, .type=IO_READ},
        {.addr=0x399e, .value=0xe2, .type=IO_READ},
        {.addr=0x00e2, .value=0x33, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0294", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0295) {
    const struct CPU_State initial_cpu = {.pc=0x5bbe, .a=0xac, .x=0xfb, .y=0xc4, .sp=0x59, .status=0x68};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0138, .value=0x5d}, {.addr=0x5bbe, .value=0x64}, {.addr=0x5bbf, .value=0x38},
    };
    const struct CPU_State final_cpu = {.pc=0x5bc0, .a=0xac, .x=0xfb, .y=0xc4, .sp=0x59, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x0138, .value=0x5d}, {.addr=0x5bbe, .value=0x64}, {.addr=0x5bbf, .value=0x38},
    };
    const struct BusEvent events[] = {
        {.addr=0x5bbe, .value=0x64, .type=IO_READ},
        {.addr=0x5bbf, .value=0x38, .type=IO_READ},
        {.addr=0x0138, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0295", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0296) {
    const struct CPU_State initial_cpu = {.pc=0xe08b, .a=0x48, .x=0x6f, .y=0x57, .sp=0xa2, .status=0xf1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0x12}, {.addr=0xe08b, .value=0x64}, {.addr=0xe08c, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0xe08d, .a=0x48, .x=0x6f, .y=0x57, .sp=0xa2, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0x12}, {.addr=0xe08b, .value=0x64}, {.addr=0xe08c, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0xe08b, .value=0x64, .type=IO_READ},
        {.addr=0xe08c, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0x12, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0296", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0297) {
    const struct CPU_State initial_cpu = {.pc=0x21c5, .a=0x8f, .x=0x96, .y=0x1e, .sp=0x22, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0189, .value=0x43}, {.addr=0x21c5, .value=0x64}, {.addr=0x21c6, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x21c7, .a=0x8f, .x=0x96, .y=0x1e, .sp=0x22, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0189, .value=0x43}, {.addr=0x21c5, .value=0x64}, {.addr=0x21c6, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x21c5, .value=0x64, .type=IO_READ},
        {.addr=0x21c6, .value=0x89, .type=IO_READ},
        {.addr=0x0189, .value=0x43, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0297", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0298) {
    const struct CPU_State initial_cpu = {.pc=0x836d, .a=0xd1, .x=0x6a, .y=0x88, .sp=0xbb, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0124, .value=0x5a}, {.addr=0x836d, .value=0x64}, {.addr=0x836e, .value=0x24},
    };
    const struct CPU_State final_cpu = {.pc=0x836f, .a=0xd1, .x=0x6a, .y=0x88, .sp=0xbb, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0124, .value=0x5a}, {.addr=0x836d, .value=0x64}, {.addr=0x836e, .value=0x24},
    };
    const struct BusEvent events[] = {
        {.addr=0x836d, .value=0x64, .type=IO_READ},
        {.addr=0x836e, .value=0x24, .type=IO_READ},
        {.addr=0x0124, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0298", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0299) {
    const struct CPU_State initial_cpu = {.pc=0x6f0d, .a=0xdc, .x=0x92, .y=0x99, .sp=0xc4, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0171, .value=0x4f}, {.addr=0x6f0d, .value=0x64}, {.addr=0x6f0e, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x6f0f, .a=0xdc, .x=0x92, .y=0x99, .sp=0xc4, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0171, .value=0x4f}, {.addr=0x6f0d, .value=0x64}, {.addr=0x6f0e, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f0d, .value=0x64, .type=IO_READ},
        {.addr=0x6f0e, .value=0x71, .type=IO_READ},
        {.addr=0x0171, .value=0x4f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0299", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_029A) {
    const struct CPU_State initial_cpu = {.pc=0x1e09, .a=0x67, .x=0x81, .y=0x7a, .sp=0xb5, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0x56}, {.addr=0x1e09, .value=0x64}, {.addr=0x1e0a, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x1e0b, .a=0x67, .x=0x81, .y=0x7a, .sp=0xb5, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0x56}, {.addr=0x1e09, .value=0x64}, {.addr=0x1e0a, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e09, .value=0x64, .type=IO_READ},
        {.addr=0x1e0a, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 029A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_029B) {
    const struct CPU_State initial_cpu = {.pc=0x6781, .a=0x30, .x=0x81, .y=0x80, .sp=0x4f, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0x9e}, {.addr=0x6781, .value=0x64}, {.addr=0x6782, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x6783, .a=0x30, .x=0x81, .y=0x80, .sp=0x4f, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0x9e}, {.addr=0x6781, .value=0x64}, {.addr=0x6782, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x6781, .value=0x64, .type=IO_READ},
        {.addr=0x6782, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 029B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_029C) {
    const struct CPU_State initial_cpu = {.pc=0x039a, .a=0x6f, .x=0x92, .y=0x3a, .sp=0xce, .status=0x52};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0xd8}, {.addr=0x039a, .value=0x64}, {.addr=0x039b, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x039c, .a=0x6f, .x=0x92, .y=0x3a, .sp=0xce, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0xd8}, {.addr=0x039a, .value=0x64}, {.addr=0x039b, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x039a, .value=0x64, .type=IO_READ},
        {.addr=0x039b, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 029C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_029D) {
    const struct CPU_State initial_cpu = {.pc=0x3a29, .a=0x44, .x=0x39, .y=0xd6, .sp=0x65, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0131, .value=0x62}, {.addr=0x3a29, .value=0x64}, {.addr=0x3a2a, .value=0x31},
    };
    const struct CPU_State final_cpu = {.pc=0x3a2b, .a=0x44, .x=0x39, .y=0xd6, .sp=0x65, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0131, .value=0x62}, {.addr=0x3a29, .value=0x64}, {.addr=0x3a2a, .value=0x31},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a29, .value=0x64, .type=IO_READ},
        {.addr=0x3a2a, .value=0x31, .type=IO_READ},
        {.addr=0x0131, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 029D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_029E) {
    const struct CPU_State initial_cpu = {.pc=0x9fde, .a=0x88, .x=0xce, .y=0x81, .sp=0xbe, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e4, .value=0x39}, {.addr=0x9fde, .value=0x64}, {.addr=0x9fdf, .value=0xe4},
    };
    const struct CPU_State final_cpu = {.pc=0x9fe0, .a=0x88, .x=0xce, .y=0x81, .sp=0xbe, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e4, .value=0x39}, {.addr=0x9fde, .value=0x64}, {.addr=0x9fdf, .value=0xe4},
    };
    const struct BusEvent events[] = {
        {.addr=0x9fde, .value=0x64, .type=IO_READ},
        {.addr=0x9fdf, .value=0xe4, .type=IO_READ},
        {.addr=0x01e4, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 029E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_029F) {
    const struct CPU_State initial_cpu = {.pc=0xa54a, .a=0xce, .x=0x26, .y=0xdb, .sp=0xe9, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0x7c}, {.addr=0xa54a, .value=0x64}, {.addr=0xa54b, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0xa54c, .a=0xce, .x=0x26, .y=0xdb, .sp=0xe9, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0x7c}, {.addr=0xa54a, .value=0x64}, {.addr=0xa54b, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0xa54a, .value=0x64, .type=IO_READ},
        {.addr=0xa54b, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 029F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02A0) {
    const struct CPU_State initial_cpu = {.pc=0xeabe, .a=0xb9, .x=0xa5, .y=0x1d, .sp=0x7e, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a4, .value=0x65}, {.addr=0xeabe, .value=0x64}, {.addr=0xeabf, .value=0xa4},
    };
    const struct CPU_State final_cpu = {.pc=0xeac0, .a=0xb9, .x=0xa5, .y=0x1d, .sp=0x7e, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a4, .value=0x65}, {.addr=0xeabe, .value=0x64}, {.addr=0xeabf, .value=0xa4},
    };
    const struct BusEvent events[] = {
        {.addr=0xeabe, .value=0x64, .type=IO_READ},
        {.addr=0xeabf, .value=0xa4, .type=IO_READ},
        {.addr=0x01a4, .value=0x65, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02A1) {
    const struct CPU_State initial_cpu = {.pc=0x646d, .a=0x11, .x=0xdd, .y=0x5f, .sp=0x48, .status=0x16};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0x96}, {.addr=0x646d, .value=0x64}, {.addr=0x646e, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x646f, .a=0x11, .x=0xdd, .y=0x5f, .sp=0x48, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0x96}, {.addr=0x646d, .value=0x64}, {.addr=0x646e, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x646d, .value=0x64, .type=IO_READ},
        {.addr=0x646e, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0x96, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02A2) {
    const struct CPU_State initial_cpu = {.pc=0xa166, .a=0x63, .x=0x8a, .y=0x19, .sp=0x6d, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0x25}, {.addr=0xa166, .value=0x64}, {.addr=0xa167, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0xa168, .a=0x63, .x=0x8a, .y=0x19, .sp=0x6d, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0x25}, {.addr=0xa166, .value=0x64}, {.addr=0xa167, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0xa166, .value=0x64, .type=IO_READ},
        {.addr=0xa167, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02A3) {
    const struct CPU_State initial_cpu = {.pc=0x920a, .a=0x5d, .x=0x03, .y=0x96, .sp=0xae, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e5, .value=0x21}, {.addr=0x920a, .value=0x64}, {.addr=0x920b, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x920c, .a=0x5d, .x=0x03, .y=0x96, .sp=0xae, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e5, .value=0x21}, {.addr=0x920a, .value=0x64}, {.addr=0x920b, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x920a, .value=0x64, .type=IO_READ},
        {.addr=0x920b, .value=0xe5, .type=IO_READ},
        {.addr=0x00e5, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02A4) {
    const struct CPU_State initial_cpu = {.pc=0x732c, .a=0xb2, .x=0x9d, .y=0x76, .sp=0xb0, .status=0x95};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0xb8}, {.addr=0x732c, .value=0x64}, {.addr=0x732d, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x732e, .a=0xb2, .x=0x9d, .y=0x76, .sp=0xb0, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0xb8}, {.addr=0x732c, .value=0x64}, {.addr=0x732d, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x732c, .value=0x64, .type=IO_READ},
        {.addr=0x732d, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0xb8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02A5) {
    const struct CPU_State initial_cpu = {.pc=0x10b2, .a=0x52, .x=0x54, .y=0x38, .sp=0x77, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0xbb}, {.addr=0x10b2, .value=0x64}, {.addr=0x10b3, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x10b4, .a=0x52, .x=0x54, .y=0x38, .sp=0x77, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0xbb}, {.addr=0x10b2, .value=0x64}, {.addr=0x10b3, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x10b2, .value=0x64, .type=IO_READ},
        {.addr=0x10b3, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02A6) {
    const struct CPU_State initial_cpu = {.pc=0x0fca, .a=0xec, .x=0xe7, .y=0x8e, .sp=0x9c, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0105, .value=0x9e}, {.addr=0x0fca, .value=0x64}, {.addr=0x0fcb, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x0fcc, .a=0xec, .x=0xe7, .y=0x8e, .sp=0x9c, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0105, .value=0x9e}, {.addr=0x0fca, .value=0x64}, {.addr=0x0fcb, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x0fca, .value=0x64, .type=IO_READ},
        {.addr=0x0fcb, .value=0x05, .type=IO_READ},
        {.addr=0x0105, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02A7) {
    const struct CPU_State initial_cpu = {.pc=0x7b21, .a=0xcf, .x=0xac, .y=0x4a, .sp=0xcc, .status=0x71};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01cb, .value=0x3d}, {.addr=0x7b21, .value=0x64}, {.addr=0x7b22, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x7b23, .a=0xcf, .x=0xac, .y=0x4a, .sp=0xcc, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01cb, .value=0x3d}, {.addr=0x7b21, .value=0x64}, {.addr=0x7b22, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b21, .value=0x64, .type=IO_READ},
        {.addr=0x7b22, .value=0xcb, .type=IO_READ},
        {.addr=0x01cb, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02A8) {
    const struct CPU_State initial_cpu = {.pc=0x53ed, .a=0x7e, .x=0x22, .y=0x44, .sp=0xf7, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00aa, .value=0x6b}, {.addr=0x53ed, .value=0x64}, {.addr=0x53ee, .value=0xaa},
    };
    const struct CPU_State final_cpu = {.pc=0x53ef, .a=0x7e, .x=0x22, .y=0x44, .sp=0xf7, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00aa, .value=0x6b}, {.addr=0x53ed, .value=0x64}, {.addr=0x53ee, .value=0xaa},
    };
    const struct BusEvent events[] = {
        {.addr=0x53ed, .value=0x64, .type=IO_READ},
        {.addr=0x53ee, .value=0xaa, .type=IO_READ},
        {.addr=0x00aa, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02A9) {
    const struct CPU_State initial_cpu = {.pc=0x1bd1, .a=0x46, .x=0xed, .y=0x6d, .sp=0xca, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0079, .value=0xaa}, {.addr=0x1bd1, .value=0x64}, {.addr=0x1bd2, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x1bd3, .a=0x46, .x=0xed, .y=0x6d, .sp=0xca, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0079, .value=0xaa}, {.addr=0x1bd1, .value=0x64}, {.addr=0x1bd2, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x1bd1, .value=0x64, .type=IO_READ},
        {.addr=0x1bd2, .value=0x79, .type=IO_READ},
        {.addr=0x0079, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02AA) {
    const struct CPU_State initial_cpu = {.pc=0x0339, .a=0x74, .x=0x94, .y=0x81, .sp=0xea, .status=0x51};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d9, .value=0xd2}, {.addr=0x0339, .value=0x64}, {.addr=0x033a, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x033b, .a=0x74, .x=0x94, .y=0x81, .sp=0xea, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d9, .value=0xd2}, {.addr=0x0339, .value=0x64}, {.addr=0x033a, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x0339, .value=0x64, .type=IO_READ},
        {.addr=0x033a, .value=0xd9, .type=IO_READ},
        {.addr=0x00d9, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02AB) {
    const struct CPU_State initial_cpu = {.pc=0xc59e, .a=0xe2, .x=0xdd, .y=0x0b, .sp=0x9d, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0xd1}, {.addr=0xc59e, .value=0x64}, {.addr=0xc59f, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0xc5a0, .a=0xe2, .x=0xdd, .y=0x0b, .sp=0x9d, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0xd1}, {.addr=0xc59e, .value=0x64}, {.addr=0xc59f, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0xc59e, .value=0x64, .type=IO_READ},
        {.addr=0xc59f, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02AC) {
    const struct CPU_State initial_cpu = {.pc=0x4fdf, .a=0x72, .x=0x13, .y=0xa7, .sp=0x2a, .status=0x2d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x39}, {.addr=0x4fdf, .value=0x64}, {.addr=0x4fe0, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x4fe1, .a=0x72, .x=0x13, .y=0xa7, .sp=0x2a, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x39}, {.addr=0x4fdf, .value=0x64}, {.addr=0x4fe0, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4fdf, .value=0x64, .type=IO_READ},
        {.addr=0x4fe0, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02AD) {
    const struct CPU_State initial_cpu = {.pc=0x7d6b, .a=0x12, .x=0x53, .y=0x3b, .sp=0x9e, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0x56}, {.addr=0x7d6b, .value=0x64}, {.addr=0x7d6c, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x7d6d, .a=0x12, .x=0x53, .y=0x3b, .sp=0x9e, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0x56}, {.addr=0x7d6b, .value=0x64}, {.addr=0x7d6c, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d6b, .value=0x64, .type=IO_READ},
        {.addr=0x7d6c, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02AE) {
    const struct CPU_State initial_cpu = {.pc=0xc2f3, .a=0xa2, .x=0x01, .y=0x63, .sp=0x32, .status=0x57};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b8, .value=0x61}, {.addr=0xc2f3, .value=0x64}, {.addr=0xc2f4, .value=0xb8},
    };
    const struct CPU_State final_cpu = {.pc=0xc2f5, .a=0xa2, .x=0x01, .y=0x63, .sp=0x32, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b8, .value=0x61}, {.addr=0xc2f3, .value=0x64}, {.addr=0xc2f4, .value=0xb8},
    };
    const struct BusEvent events[] = {
        {.addr=0xc2f3, .value=0x64, .type=IO_READ},
        {.addr=0xc2f4, .value=0xb8, .type=IO_READ},
        {.addr=0x00b8, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02AF) {
    const struct CPU_State initial_cpu = {.pc=0x499d, .a=0xcf, .x=0x7b, .y=0x41, .sp=0x3d, .status=0x8e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ac, .value=0x04}, {.addr=0x499d, .value=0x64}, {.addr=0x499e, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x499f, .a=0xcf, .x=0x7b, .y=0x41, .sp=0x3d, .status=0x8d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ac, .value=0x04}, {.addr=0x499d, .value=0x64}, {.addr=0x499e, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x499d, .value=0x64, .type=IO_READ},
        {.addr=0x499e, .value=0xac, .type=IO_READ},
        {.addr=0x00ac, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02B0) {
    const struct CPU_State initial_cpu = {.pc=0xfff1, .a=0xfd, .x=0x6c, .y=0xcc, .sp=0xbc, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0x5a}, {.addr=0xfff1, .value=0x64}, {.addr=0xfff2, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0xfff3, .a=0xfd, .x=0x6c, .y=0xcc, .sp=0xbc, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0x5a}, {.addr=0xfff1, .value=0x64}, {.addr=0xfff2, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0xfff1, .value=0x64, .type=IO_READ},
        {.addr=0xfff2, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02B1) {
    const struct CPU_State initial_cpu = {.pc=0x4ac2, .a=0x89, .x=0xcb, .y=0xb6, .sp=0xc4, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a3, .value=0x58}, {.addr=0x4ac2, .value=0x64}, {.addr=0x4ac3, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x4ac4, .a=0x89, .x=0xcb, .y=0xb6, .sp=0xc4, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a3, .value=0x58}, {.addr=0x4ac2, .value=0x64}, {.addr=0x4ac3, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ac2, .value=0x64, .type=IO_READ},
        {.addr=0x4ac3, .value=0xa3, .type=IO_READ},
        {.addr=0x00a3, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02B2) {
    const struct CPU_State initial_cpu = {.pc=0xba2c, .a=0xc6, .x=0xd0, .y=0x62, .sp=0xb6, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0077, .value=0x93}, {.addr=0xba2c, .value=0x64}, {.addr=0xba2d, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0xba2e, .a=0xc6, .x=0xd0, .y=0x62, .sp=0xb6, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0077, .value=0x93}, {.addr=0xba2c, .value=0x64}, {.addr=0xba2d, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0xba2c, .value=0x64, .type=IO_READ},
        {.addr=0xba2d, .value=0x77, .type=IO_READ},
        {.addr=0x0077, .value=0x93, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02B3) {
    const struct CPU_State initial_cpu = {.pc=0xfaf6, .a=0x71, .x=0xc2, .y=0x7c, .sp=0xa9, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x2b}, {.addr=0xfaf6, .value=0x64}, {.addr=0xfaf7, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0xfaf8, .a=0x71, .x=0xc2, .y=0x7c, .sp=0xa9, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x2b}, {.addr=0xfaf6, .value=0x64}, {.addr=0xfaf7, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0xfaf6, .value=0x64, .type=IO_READ},
        {.addr=0xfaf7, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x2b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02B4) {
    const struct CPU_State initial_cpu = {.pc=0x94c4, .a=0x7c, .x=0x44, .y=0x25, .sp=0x6b, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0x2a}, {.addr=0x94c4, .value=0x64}, {.addr=0x94c5, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x94c6, .a=0x7c, .x=0x44, .y=0x25, .sp=0x6b, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0x2a}, {.addr=0x94c4, .value=0x64}, {.addr=0x94c5, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x94c4, .value=0x64, .type=IO_READ},
        {.addr=0x94c5, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02B5) {
    const struct CPU_State initial_cpu = {.pc=0x6230, .a=0xe1, .x=0x37, .y=0x38, .sp=0x77, .status=0x39};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d8, .value=0x99}, {.addr=0x6230, .value=0x64}, {.addr=0x6231, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0x6232, .a=0xe1, .x=0x37, .y=0x38, .sp=0x77, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d8, .value=0x99}, {.addr=0x6230, .value=0x64}, {.addr=0x6231, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0x6230, .value=0x64, .type=IO_READ},
        {.addr=0x6231, .value=0xd8, .type=IO_READ},
        {.addr=0x01d8, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02B6) {
    const struct CPU_State initial_cpu = {.pc=0x71fa, .a=0x2f, .x=0xe4, .y=0x9a, .sp=0x3a, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007d, .value=0x7f}, {.addr=0x71fa, .value=0x64}, {.addr=0x71fb, .value=0x7d},
    };
    const struct CPU_State final_cpu = {.pc=0x71fc, .a=0x2f, .x=0xe4, .y=0x9a, .sp=0x3a, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x007d, .value=0x7f}, {.addr=0x71fa, .value=0x64}, {.addr=0x71fb, .value=0x7d},
    };
    const struct BusEvent events[] = {
        {.addr=0x71fa, .value=0x64, .type=IO_READ},
        {.addr=0x71fb, .value=0x7d, .type=IO_READ},
        {.addr=0x007d, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02B7) {
    const struct CPU_State initial_cpu = {.pc=0xdb30, .a=0x67, .x=0x4d, .y=0x7e, .sp=0x2b, .status=0x81};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a6, .value=0x8f}, {.addr=0xdb30, .value=0x64}, {.addr=0xdb31, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0xdb32, .a=0x67, .x=0x4d, .y=0x7e, .sp=0x2b, .status=0x80};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a6, .value=0x8f}, {.addr=0xdb30, .value=0x64}, {.addr=0xdb31, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0xdb30, .value=0x64, .type=IO_READ},
        {.addr=0xdb31, .value=0xa6, .type=IO_READ},
        {.addr=0x00a6, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02B8) {
    const struct CPU_State initial_cpu = {.pc=0x07c4, .a=0xa3, .x=0x44, .y=0xe6, .sp=0x30, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e7, .value=0x86}, {.addr=0x07c4, .value=0x64}, {.addr=0x07c5, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0x07c6, .a=0xa3, .x=0x44, .y=0xe6, .sp=0x30, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e7, .value=0x86}, {.addr=0x07c4, .value=0x64}, {.addr=0x07c5, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0x07c4, .value=0x64, .type=IO_READ},
        {.addr=0x07c5, .value=0xe7, .type=IO_READ},
        {.addr=0x01e7, .value=0x86, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02B9) {
    const struct CPU_State initial_cpu = {.pc=0x44a2, .a=0xec, .x=0x30, .y=0x48, .sp=0xa8, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0xdd}, {.addr=0x44a2, .value=0x64}, {.addr=0x44a3, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x44a4, .a=0xec, .x=0x30, .y=0x48, .sp=0xa8, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0xdd}, {.addr=0x44a2, .value=0x64}, {.addr=0x44a3, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x44a2, .value=0x64, .type=IO_READ},
        {.addr=0x44a3, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0xdd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02BA) {
    const struct CPU_State initial_cpu = {.pc=0x45cb, .a=0xd1, .x=0x8f, .y=0x6c, .sp=0x5d, .status=0xcc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0052, .value=0x6f}, {.addr=0x45cb, .value=0x64}, {.addr=0x45cc, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0x45cd, .a=0xd1, .x=0x8f, .y=0x6c, .sp=0x5d, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0052, .value=0x6f}, {.addr=0x45cb, .value=0x64}, {.addr=0x45cc, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0x45cb, .value=0x64, .type=IO_READ},
        {.addr=0x45cc, .value=0x52, .type=IO_READ},
        {.addr=0x0052, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02BB) {
    const struct CPU_State initial_cpu = {.pc=0x1c84, .a=0xd0, .x=0xa5, .y=0x6e, .sp=0x6d, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0191, .value=0xc3}, {.addr=0x1c84, .value=0x64}, {.addr=0x1c85, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x1c86, .a=0xd0, .x=0xa5, .y=0x6e, .sp=0x6d, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0191, .value=0xc3}, {.addr=0x1c84, .value=0x64}, {.addr=0x1c85, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x1c84, .value=0x64, .type=IO_READ},
        {.addr=0x1c85, .value=0x91, .type=IO_READ},
        {.addr=0x0191, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02BC) {
    const struct CPU_State initial_cpu = {.pc=0xcb64, .a=0xa0, .x=0xd2, .y=0x87, .sp=0x65, .status=0xb0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0xda}, {.addr=0xcb64, .value=0x64}, {.addr=0xcb65, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0xcb66, .a=0xa0, .x=0xd2, .y=0x87, .sp=0x65, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0xda}, {.addr=0xcb64, .value=0x64}, {.addr=0xcb65, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0xcb64, .value=0x64, .type=IO_READ},
        {.addr=0xcb65, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0xda, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02BD) {
    const struct CPU_State initial_cpu = {.pc=0x7d14, .a=0x55, .x=0x18, .y=0xc7, .sp=0x8a, .status=0x01};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0025, .value=0x36}, {.addr=0x7d14, .value=0x64}, {.addr=0x7d15, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0x7d16, .a=0x55, .x=0x18, .y=0xc7, .sp=0x8a, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0025, .value=0x36}, {.addr=0x7d14, .value=0x64}, {.addr=0x7d15, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0x7d14, .value=0x64, .type=IO_READ},
        {.addr=0x7d15, .value=0x25, .type=IO_READ},
        {.addr=0x0025, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02BE) {
    const struct CPU_State initial_cpu = {.pc=0x495d, .a=0xec, .x=0x89, .y=0x99, .sp=0x91, .status=0xd2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0081, .value=0x56}, {.addr=0x495d, .value=0x64}, {.addr=0x495e, .value=0x81},
    };
    const struct CPU_State final_cpu = {.pc=0x495f, .a=0xec, .x=0x89, .y=0x99, .sp=0x91, .status=0xd1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0081, .value=0x56}, {.addr=0x495d, .value=0x64}, {.addr=0x495e, .value=0x81},
    };
    const struct BusEvent events[] = {
        {.addr=0x495d, .value=0x64, .type=IO_READ},
        {.addr=0x495e, .value=0x81, .type=IO_READ},
        {.addr=0x0081, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02BF) {
    const struct CPU_State initial_cpu = {.pc=0x92a7, .a=0xc9, .x=0x69, .y=0xf0, .sp=0xf8, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0x0f}, {.addr=0x92a7, .value=0x64}, {.addr=0x92a8, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x92a9, .a=0xc9, .x=0x69, .y=0xf0, .sp=0xf8, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0x0f}, {.addr=0x92a7, .value=0x64}, {.addr=0x92a8, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x92a7, .value=0x64, .type=IO_READ},
        {.addr=0x92a8, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02C0) {
    const struct CPU_State initial_cpu = {.pc=0xbee1, .a=0x2a, .x=0x11, .y=0x4f, .sp=0xd8, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01df, .value=0x28}, {.addr=0xbee1, .value=0x64}, {.addr=0xbee2, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0xbee3, .a=0x2a, .x=0x11, .y=0x4f, .sp=0xd8, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01df, .value=0x28}, {.addr=0xbee1, .value=0x64}, {.addr=0xbee2, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0xbee1, .value=0x64, .type=IO_READ},
        {.addr=0xbee2, .value=0xdf, .type=IO_READ},
        {.addr=0x01df, .value=0x28, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02C1) {
    const struct CPU_State initial_cpu = {.pc=0xf26d, .a=0x4e, .x=0x24, .y=0xb2, .sp=0xd4, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0x41}, {.addr=0xf26d, .value=0x64}, {.addr=0xf26e, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0xf26f, .a=0x4e, .x=0x24, .y=0xb2, .sp=0xd4, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0x41}, {.addr=0xf26d, .value=0x64}, {.addr=0xf26e, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0xf26d, .value=0x64, .type=IO_READ},
        {.addr=0xf26e, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02C2) {
    const struct CPU_State initial_cpu = {.pc=0xd348, .a=0xb0, .x=0xb9, .y=0xa6, .sp=0x75, .status=0xa2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0168, .value=0xb1}, {.addr=0xd348, .value=0x64}, {.addr=0xd349, .value=0x68},
    };
    const struct CPU_State final_cpu = {.pc=0xd34a, .a=0xb0, .x=0xb9, .y=0xa6, .sp=0x75, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0168, .value=0xb1}, {.addr=0xd348, .value=0x64}, {.addr=0xd349, .value=0x68},
    };
    const struct BusEvent events[] = {
        {.addr=0xd348, .value=0x64, .type=IO_READ},
        {.addr=0xd349, .value=0x68, .type=IO_READ},
        {.addr=0x0168, .value=0xb1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02C3) {
    const struct CPU_State initial_cpu = {.pc=0x17c0, .a=0xbd, .x=0x28, .y=0x7e, .sp=0xd3, .status=0x28};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0xd5}, {.addr=0x17c0, .value=0x64}, {.addr=0x17c1, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x17c2, .a=0xbd, .x=0x28, .y=0x7e, .sp=0xd3, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0xd5}, {.addr=0x17c0, .value=0x64}, {.addr=0x17c1, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x17c0, .value=0x64, .type=IO_READ},
        {.addr=0x17c1, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02C4) {
    const struct CPU_State initial_cpu = {.pc=0xaf98, .a=0x5f, .x=0x5c, .y=0xf2, .sp=0xc7, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0153, .value=0x23}, {.addr=0xaf98, .value=0x64}, {.addr=0xaf99, .value=0x53},
    };
    const struct CPU_State final_cpu = {.pc=0xaf9a, .a=0x5f, .x=0x5c, .y=0xf2, .sp=0xc7, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x0153, .value=0x23}, {.addr=0xaf98, .value=0x64}, {.addr=0xaf99, .value=0x53},
    };
    const struct BusEvent events[] = {
        {.addr=0xaf98, .value=0x64, .type=IO_READ},
        {.addr=0xaf99, .value=0x53, .type=IO_READ},
        {.addr=0x0153, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02C5) {
    const struct CPU_State initial_cpu = {.pc=0x748c, .a=0xd1, .x=0xd6, .y=0x8e, .sp=0xff, .status=0x61};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0165, .value=0x7f}, {.addr=0x748c, .value=0x64}, {.addr=0x748d, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x748e, .a=0xd1, .x=0xd6, .y=0x8e, .sp=0xff, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0165, .value=0x7f}, {.addr=0x748c, .value=0x64}, {.addr=0x748d, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x748c, .value=0x64, .type=IO_READ},
        {.addr=0x748d, .value=0x65, .type=IO_READ},
        {.addr=0x0165, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02C6) {
    const struct CPU_State initial_cpu = {.pc=0x7ef0, .a=0x51, .x=0x15, .y=0x90, .sp=0xc3, .status=0x7e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0x19}, {.addr=0x7ef0, .value=0x64}, {.addr=0x7ef1, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x7ef2, .a=0x51, .x=0x15, .y=0x90, .sp=0xc3, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0x19}, {.addr=0x7ef0, .value=0x64}, {.addr=0x7ef1, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ef0, .value=0x64, .type=IO_READ},
        {.addr=0x7ef1, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02C8) {
    const struct CPU_State initial_cpu = {.pc=0xf127, .a=0x66, .x=0xb1, .y=0x43, .sp=0x8a, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0x06}, {.addr=0xf127, .value=0x64}, {.addr=0xf128, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0xf129, .a=0x66, .x=0xb1, .y=0x43, .sp=0x8a, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0x06}, {.addr=0xf127, .value=0x64}, {.addr=0xf128, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0xf127, .value=0x64, .type=IO_READ},
        {.addr=0xf128, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02C9) {
    const struct CPU_State initial_cpu = {.pc=0xc2b7, .a=0x0a, .x=0x7c, .y=0x85, .sp=0x73, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010e, .value=0x10}, {.addr=0xc2b7, .value=0x64}, {.addr=0xc2b8, .value=0x0e},
    };
    const struct CPU_State final_cpu = {.pc=0xc2b9, .a=0x0a, .x=0x7c, .y=0x85, .sp=0x73, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x010e, .value=0x10}, {.addr=0xc2b7, .value=0x64}, {.addr=0xc2b8, .value=0x0e},
    };
    const struct BusEvent events[] = {
        {.addr=0xc2b7, .value=0x64, .type=IO_READ},
        {.addr=0xc2b8, .value=0x0e, .type=IO_READ},
        {.addr=0x010e, .value=0x10, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02CA) {
    const struct CPU_State initial_cpu = {.pc=0x272f, .a=0x6a, .x=0x56, .y=0x81, .sp=0x3d, .status=0xf4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0xd8}, {.addr=0x272f, .value=0x64}, {.addr=0x2730, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x2731, .a=0x6a, .x=0x56, .y=0x81, .sp=0x3d, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0xd8}, {.addr=0x272f, .value=0x64}, {.addr=0x2730, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x272f, .value=0x64, .type=IO_READ},
        {.addr=0x2730, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02CB) {
    const struct CPU_State initial_cpu = {.pc=0x0bc6, .a=0xaa, .x=0x5d, .y=0x67, .sp=0xf1, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0057, .value=0x00}, {.addr=0x0bc6, .value=0x64}, {.addr=0x0bc7, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x0bc8, .a=0xaa, .x=0x5d, .y=0x67, .sp=0xf1, .status=0xc5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0057, .value=0x00}, {.addr=0x0bc6, .value=0x64}, {.addr=0x0bc7, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x0bc6, .value=0x64, .type=IO_READ},
        {.addr=0x0bc7, .value=0x57, .type=IO_READ},
        {.addr=0x0057, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02CC) {
    const struct CPU_State initial_cpu = {.pc=0xef76, .a=0x99, .x=0xa7, .y=0x7c, .sp=0x1e, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0xb9}, {.addr=0xef76, .value=0x64}, {.addr=0xef77, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0xef78, .a=0x99, .x=0xa7, .y=0x7c, .sp=0x1e, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0xb9}, {.addr=0xef76, .value=0x64}, {.addr=0xef77, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0xef76, .value=0x64, .type=IO_READ},
        {.addr=0xef77, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02CD) {
    const struct CPU_State initial_cpu = {.pc=0x4bc3, .a=0x87, .x=0x42, .y=0xd7, .sp=0x47, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0x9b}, {.addr=0x4bc3, .value=0x64}, {.addr=0x4bc4, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x4bc5, .a=0x87, .x=0x42, .y=0xd7, .sp=0x47, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0x9b}, {.addr=0x4bc3, .value=0x64}, {.addr=0x4bc4, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x4bc3, .value=0x64, .type=IO_READ},
        {.addr=0x4bc4, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0x9b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02CE) {
    const struct CPU_State initial_cpu = {.pc=0x1999, .a=0x68, .x=0xd6, .y=0xae, .sp=0xce, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0037, .value=0x26}, {.addr=0x1999, .value=0x64}, {.addr=0x199a, .value=0x37},
    };
    const struct CPU_State final_cpu = {.pc=0x199b, .a=0x68, .x=0xd6, .y=0xae, .sp=0xce, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0037, .value=0x26}, {.addr=0x1999, .value=0x64}, {.addr=0x199a, .value=0x37},
    };
    const struct BusEvent events[] = {
        {.addr=0x1999, .value=0x64, .type=IO_READ},
        {.addr=0x199a, .value=0x37, .type=IO_READ},
        {.addr=0x0037, .value=0x26, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02CF) {
    const struct CPU_State initial_cpu = {.pc=0x88e8, .a=0x69, .x=0xfa, .y=0xe7, .sp=0x4a, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ce, .value=0x97}, {.addr=0x88e8, .value=0x64}, {.addr=0x88e9, .value=0xce},
    };
    const struct CPU_State final_cpu = {.pc=0x88ea, .a=0x69, .x=0xfa, .y=0xe7, .sp=0x4a, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ce, .value=0x97}, {.addr=0x88e8, .value=0x64}, {.addr=0x88e9, .value=0xce},
    };
    const struct BusEvent events[] = {
        {.addr=0x88e8, .value=0x64, .type=IO_READ},
        {.addr=0x88e9, .value=0xce, .type=IO_READ},
        {.addr=0x00ce, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02D0) {
    const struct CPU_State initial_cpu = {.pc=0xe339, .a=0x48, .x=0xd7, .y=0xcf, .sp=0xc6, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0004, .value=0x85}, {.addr=0xe339, .value=0x64}, {.addr=0xe33a, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0xe33b, .a=0x48, .x=0xd7, .y=0xcf, .sp=0xc6, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0004, .value=0x85}, {.addr=0xe339, .value=0x64}, {.addr=0xe33a, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0xe339, .value=0x64, .type=IO_READ},
        {.addr=0xe33a, .value=0x04, .type=IO_READ},
        {.addr=0x0004, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02D1) {
    const struct CPU_State initial_cpu = {.pc=0x3a11, .a=0x8a, .x=0xae, .y=0x5a, .sp=0xac, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0120, .value=0x49}, {.addr=0x3a11, .value=0x64}, {.addr=0x3a12, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0x3a13, .a=0x8a, .x=0xae, .y=0x5a, .sp=0xac, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0120, .value=0x49}, {.addr=0x3a11, .value=0x64}, {.addr=0x3a12, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a11, .value=0x64, .type=IO_READ},
        {.addr=0x3a12, .value=0x20, .type=IO_READ},
        {.addr=0x0120, .value=0x49, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02D2) {
    const struct CPU_State initial_cpu = {.pc=0xe31a, .a=0x9a, .x=0xb3, .y=0xc0, .sp=0xc7, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0152, .value=0xdb}, {.addr=0xe31a, .value=0x64}, {.addr=0xe31b, .value=0x52},
    };
    const struct CPU_State final_cpu = {.pc=0xe31c, .a=0x9a, .x=0xb3, .y=0xc0, .sp=0xc7, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0152, .value=0xdb}, {.addr=0xe31a, .value=0x64}, {.addr=0xe31b, .value=0x52},
    };
    const struct BusEvent events[] = {
        {.addr=0xe31a, .value=0x64, .type=IO_READ},
        {.addr=0xe31b, .value=0x52, .type=IO_READ},
        {.addr=0x0152, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02D3) {
    const struct CPU_State initial_cpu = {.pc=0xeec4, .a=0xb7, .x=0x1d, .y=0xf3, .sp=0x66, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0077, .value=0x74}, {.addr=0xeec4, .value=0x64}, {.addr=0xeec5, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0xeec6, .a=0xb7, .x=0x1d, .y=0xf3, .sp=0x66, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0077, .value=0x74}, {.addr=0xeec4, .value=0x64}, {.addr=0xeec5, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0xeec4, .value=0x64, .type=IO_READ},
        {.addr=0xeec5, .value=0x77, .type=IO_READ},
        {.addr=0x0077, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02D4) {
    const struct CPU_State initial_cpu = {.pc=0x64d4, .a=0x38, .x=0xea, .y=0x9f, .sp=0xd8, .status=0x14};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0040, .value=0x30}, {.addr=0x64d4, .value=0x64}, {.addr=0x64d5, .value=0x40},
    };
    const struct CPU_State final_cpu = {.pc=0x64d6, .a=0x38, .x=0xea, .y=0x9f, .sp=0xd8, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0040, .value=0x30}, {.addr=0x64d4, .value=0x64}, {.addr=0x64d5, .value=0x40},
    };
    const struct BusEvent events[] = {
        {.addr=0x64d4, .value=0x64, .type=IO_READ},
        {.addr=0x64d5, .value=0x40, .type=IO_READ},
        {.addr=0x0040, .value=0x30, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02D5) {
    const struct CPU_State initial_cpu = {.pc=0x2bf6, .a=0x91, .x=0x95, .y=0xe4, .sp=0x98, .status=0x26};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b7, .value=0xbb}, {.addr=0x2bf6, .value=0x64}, {.addr=0x2bf7, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0x2bf8, .a=0x91, .x=0x95, .y=0xe4, .sp=0x98, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b7, .value=0xbb}, {.addr=0x2bf6, .value=0x64}, {.addr=0x2bf7, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0x2bf6, .value=0x64, .type=IO_READ},
        {.addr=0x2bf7, .value=0xb7, .type=IO_READ},
        {.addr=0x01b7, .value=0xbb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02D6) {
    const struct CPU_State initial_cpu = {.pc=0x6ef5, .a=0x31, .x=0xe7, .y=0x04, .sp=0x7b, .status=0x24};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0155, .value=0x05}, {.addr=0x6ef5, .value=0x64}, {.addr=0x6ef6, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x6ef7, .a=0x31, .x=0xe7, .y=0x04, .sp=0x7b, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x0155, .value=0x05}, {.addr=0x6ef5, .value=0x64}, {.addr=0x6ef6, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x6ef5, .value=0x64, .type=IO_READ},
        {.addr=0x6ef6, .value=0x55, .type=IO_READ},
        {.addr=0x0155, .value=0x05, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02D7) {
    const struct CPU_State initial_cpu = {.pc=0x51d2, .a=0x41, .x=0x16, .y=0x60, .sp=0x98, .status=0x7a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014a, .value=0xe3}, {.addr=0x51d2, .value=0x64}, {.addr=0x51d3, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x51d4, .a=0x41, .x=0x16, .y=0x60, .sp=0x98, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x014a, .value=0xe3}, {.addr=0x51d2, .value=0x64}, {.addr=0x51d3, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x51d2, .value=0x64, .type=IO_READ},
        {.addr=0x51d3, .value=0x4a, .type=IO_READ},
        {.addr=0x014a, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02D8) {
    const struct CPU_State initial_cpu = {.pc=0x9f50, .a=0xda, .x=0xbd, .y=0x0e, .sp=0x27, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005b, .value=0xcf}, {.addr=0x9f50, .value=0x64}, {.addr=0x9f51, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0x9f52, .a=0xda, .x=0xbd, .y=0x0e, .sp=0x27, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x005b, .value=0xcf}, {.addr=0x9f50, .value=0x64}, {.addr=0x9f51, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0x9f50, .value=0x64, .type=IO_READ},
        {.addr=0x9f51, .value=0x5b, .type=IO_READ},
        {.addr=0x005b, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02D9) {
    const struct CPU_State initial_cpu = {.pc=0x2983, .a=0xb2, .x=0x8a, .y=0xb0, .sp=0x5c, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0077, .value=0xf5}, {.addr=0x2983, .value=0x64}, {.addr=0x2984, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x2985, .a=0xb2, .x=0x8a, .y=0xb0, .sp=0x5c, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0077, .value=0xf5}, {.addr=0x2983, .value=0x64}, {.addr=0x2984, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x2983, .value=0x64, .type=IO_READ},
        {.addr=0x2984, .value=0x77, .type=IO_READ},
        {.addr=0x0077, .value=0xf5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02DA) {
    const struct CPU_State initial_cpu = {.pc=0xb3d6, .a=0xbf, .x=0xdd, .y=0xcb, .sp=0x00, .status=0xf6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b0, .value=0xd1}, {.addr=0xb3d6, .value=0x64}, {.addr=0xb3d7, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0xb3d8, .a=0xbf, .x=0xdd, .y=0xcb, .sp=0x00, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b0, .value=0xd1}, {.addr=0xb3d6, .value=0x64}, {.addr=0xb3d7, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0xb3d6, .value=0x64, .type=IO_READ},
        {.addr=0xb3d7, .value=0xb0, .type=IO_READ},
        {.addr=0x01b0, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02DB) {
    const struct CPU_State initial_cpu = {.pc=0xbfde, .a=0xb4, .x=0xbb, .y=0x3f, .sp=0x0e, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a5, .value=0x35}, {.addr=0xbfde, .value=0x64}, {.addr=0xbfdf, .value=0xa5},
    };
    const struct CPU_State final_cpu = {.pc=0xbfe0, .a=0xb4, .x=0xbb, .y=0x3f, .sp=0x0e, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a5, .value=0x35}, {.addr=0xbfde, .value=0x64}, {.addr=0xbfdf, .value=0xa5},
    };
    const struct BusEvent events[] = {
        {.addr=0xbfde, .value=0x64, .type=IO_READ},
        {.addr=0xbfdf, .value=0xa5, .type=IO_READ},
        {.addr=0x00a5, .value=0x35, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02DC) {
    const struct CPU_State initial_cpu = {.pc=0xa93b, .a=0x32, .x=0x38, .y=0x8b, .sp=0xdd, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0xef}, {.addr=0xa93b, .value=0x64}, {.addr=0xa93c, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0xa93d, .a=0x32, .x=0x38, .y=0x8b, .sp=0xdd, .status=0x58};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0xef}, {.addr=0xa93b, .value=0x64}, {.addr=0xa93c, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0xa93b, .value=0x64, .type=IO_READ},
        {.addr=0xa93c, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0xef, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02DD) {
    const struct CPU_State initial_cpu = {.pc=0xe687, .a=0xd0, .x=0xfe, .y=0xe8, .sp=0x10, .status=0xba};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0xc5}, {.addr=0xe687, .value=0x64}, {.addr=0xe688, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xe689, .a=0xd0, .x=0xfe, .y=0xe8, .sp=0x10, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0xc5}, {.addr=0xe687, .value=0x64}, {.addr=0xe688, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xe687, .value=0x64, .type=IO_READ},
        {.addr=0xe688, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02DF) {
    const struct CPU_State initial_cpu = {.pc=0xc3d9, .a=0xba, .x=0xff, .y=0xa4, .sp=0x42, .status=0x38};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012b, .value=0x06}, {.addr=0xc3d9, .value=0x64}, {.addr=0xc3da, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0xc3db, .a=0xba, .x=0xff, .y=0xa4, .sp=0x42, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x012b, .value=0x06}, {.addr=0xc3d9, .value=0x64}, {.addr=0xc3da, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0xc3d9, .value=0x64, .type=IO_READ},
        {.addr=0xc3da, .value=0x2b, .type=IO_READ},
        {.addr=0x012b, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02E0) {
    const struct CPU_State initial_cpu = {.pc=0x46d4, .a=0x26, .x=0x71, .y=0xb8, .sp=0x78, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e2, .value=0xe8}, {.addr=0x46d4, .value=0x64}, {.addr=0x46d5, .value=0xe2},
    };
    const struct CPU_State final_cpu = {.pc=0x46d6, .a=0x26, .x=0x71, .y=0xb8, .sp=0x78, .status=0x14};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e2, .value=0xe8}, {.addr=0x46d4, .value=0x64}, {.addr=0x46d5, .value=0xe2},
    };
    const struct BusEvent events[] = {
        {.addr=0x46d4, .value=0x64, .type=IO_READ},
        {.addr=0x46d5, .value=0xe2, .type=IO_READ},
        {.addr=0x00e2, .value=0xe8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02E1) {
    const struct CPU_State initial_cpu = {.pc=0x1e0a, .a=0xfc, .x=0x2a, .y=0x00, .sp=0xaf, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a1, .value=0xde}, {.addr=0x1e0a, .value=0x64}, {.addr=0x1e0b, .value=0xa1},
    };
    const struct CPU_State final_cpu = {.pc=0x1e0c, .a=0xfc, .x=0x2a, .y=0x00, .sp=0xaf, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a1, .value=0xde}, {.addr=0x1e0a, .value=0x64}, {.addr=0x1e0b, .value=0xa1},
    };
    const struct BusEvent events[] = {
        {.addr=0x1e0a, .value=0x64, .type=IO_READ},
        {.addr=0x1e0b, .value=0xa1, .type=IO_READ},
        {.addr=0x00a1, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02E2) {
    const struct CPU_State initial_cpu = {.pc=0xefce, .a=0xd4, .x=0xa6, .y=0x82, .sp=0x3d, .status=0x3d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01de, .value=0xd6}, {.addr=0xefce, .value=0x64}, {.addr=0xefcf, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0xefd0, .a=0xd4, .x=0xa6, .y=0x82, .sp=0x3d, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01de, .value=0xd6}, {.addr=0xefce, .value=0x64}, {.addr=0xefcf, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0xefce, .value=0x64, .type=IO_READ},
        {.addr=0xefcf, .value=0xde, .type=IO_READ},
        {.addr=0x01de, .value=0xd6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02E3) {
    const struct CPU_State initial_cpu = {.pc=0x8256, .a=0x6c, .x=0x88, .y=0xd8, .sp=0xcf, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0191, .value=0x0f}, {.addr=0x8256, .value=0x64}, {.addr=0x8257, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0x8258, .a=0x6c, .x=0x88, .y=0xd8, .sp=0xcf, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0191, .value=0x0f}, {.addr=0x8256, .value=0x64}, {.addr=0x8257, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0x8256, .value=0x64, .type=IO_READ},
        {.addr=0x8257, .value=0x91, .type=IO_READ},
        {.addr=0x0191, .value=0x0f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02E4) {
    const struct CPU_State initial_cpu = {.pc=0x09f2, .a=0x80, .x=0x0c, .y=0xd1, .sp=0x2e, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bb, .value=0x52}, {.addr=0x09f2, .value=0x64}, {.addr=0x09f3, .value=0xbb},
    };
    const struct CPU_State final_cpu = {.pc=0x09f4, .a=0x80, .x=0x0c, .y=0xd1, .sp=0x2e, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bb, .value=0x52}, {.addr=0x09f2, .value=0x64}, {.addr=0x09f3, .value=0xbb},
    };
    const struct BusEvent events[] = {
        {.addr=0x09f2, .value=0x64, .type=IO_READ},
        {.addr=0x09f3, .value=0xbb, .type=IO_READ},
        {.addr=0x01bb, .value=0x52, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02E5) {
    const struct CPU_State initial_cpu = {.pc=0x5e05, .a=0xdf, .x=0x86, .y=0x58, .sp=0x7a, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e0, .value=0x2a}, {.addr=0x5e05, .value=0x64}, {.addr=0x5e06, .value=0xe0},
    };
    const struct CPU_State final_cpu = {.pc=0x5e07, .a=0xdf, .x=0x86, .y=0x58, .sp=0x7a, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e0, .value=0x2a}, {.addr=0x5e05, .value=0x64}, {.addr=0x5e06, .value=0xe0},
    };
    const struct BusEvent events[] = {
        {.addr=0x5e05, .value=0x64, .type=IO_READ},
        {.addr=0x5e06, .value=0xe0, .type=IO_READ},
        {.addr=0x01e0, .value=0x2a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02E6) {
    const struct CPU_State initial_cpu = {.pc=0x63d4, .a=0xac, .x=0x84, .y=0xf0, .sp=0xe9, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01de, .value=0x55}, {.addr=0x63d4, .value=0x64}, {.addr=0x63d5, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0x63d6, .a=0xac, .x=0x84, .y=0xf0, .sp=0xe9, .status=0x29};
    const struct RamEntry final_ram[] = {
        {.addr=0x01de, .value=0x55}, {.addr=0x63d4, .value=0x64}, {.addr=0x63d5, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0x63d4, .value=0x64, .type=IO_READ},
        {.addr=0x63d5, .value=0xde, .type=IO_READ},
        {.addr=0x01de, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02E7) {
    const struct CPU_State initial_cpu = {.pc=0x22f6, .a=0x6b, .x=0xea, .y=0x56, .sp=0x95, .status=0xa0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0x31}, {.addr=0x22f6, .value=0x64}, {.addr=0x22f7, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x22f8, .a=0x6b, .x=0xea, .y=0x56, .sp=0x95, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0x31}, {.addr=0x22f6, .value=0x64}, {.addr=0x22f7, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x22f6, .value=0x64, .type=IO_READ},
        {.addr=0x22f7, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02E8) {
    const struct CPU_State initial_cpu = {.pc=0x3367, .a=0x0d, .x=0x97, .y=0xbf, .sp=0x27, .status=0xd1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a6, .value=0xfd}, {.addr=0x3367, .value=0x64}, {.addr=0x3368, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0x3369, .a=0x0d, .x=0x97, .y=0xbf, .sp=0x27, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a6, .value=0xfd}, {.addr=0x3367, .value=0x64}, {.addr=0x3368, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0x3367, .value=0x64, .type=IO_READ},
        {.addr=0x3368, .value=0xa6, .type=IO_READ},
        {.addr=0x00a6, .value=0xfd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02E8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02E9) {
    const struct CPU_State initial_cpu = {.pc=0x3a03, .a=0x8e, .x=0x6a, .y=0x6f, .sp=0xb3, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0xa5}, {.addr=0x3a03, .value=0x64}, {.addr=0x3a04, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x3a05, .a=0x8e, .x=0x6a, .y=0x6f, .sp=0xb3, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0xa5}, {.addr=0x3a03, .value=0x64}, {.addr=0x3a04, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a03, .value=0x64, .type=IO_READ},
        {.addr=0x3a04, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0xa5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02E9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02EA) {
    const struct CPU_State initial_cpu = {.pc=0x5dab, .a=0x75, .x=0x8c, .y=0x9e, .sp=0x3f, .status=0x17};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0x00}, {.addr=0x5dab, .value=0x64}, {.addr=0x5dac, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x5dad, .a=0x75, .x=0x8c, .y=0x9e, .sp=0x3f, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0x00}, {.addr=0x5dab, .value=0x64}, {.addr=0x5dac, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x5dab, .value=0x64, .type=IO_READ},
        {.addr=0x5dac, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02EA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02EB) {
    const struct CPU_State initial_cpu = {.pc=0x7c4a, .a=0xd9, .x=0xb1, .y=0x45, .sp=0xec, .status=0x64};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0126, .value=0x63}, {.addr=0x7c4a, .value=0x64}, {.addr=0x7c4b, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x7c4c, .a=0xd9, .x=0xb1, .y=0x45, .sp=0xec, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0126, .value=0x63}, {.addr=0x7c4a, .value=0x64}, {.addr=0x7c4b, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x7c4a, .value=0x64, .type=IO_READ},
        {.addr=0x7c4b, .value=0x26, .type=IO_READ},
        {.addr=0x0126, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02EB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02EC) {
    const struct CPU_State initial_cpu = {.pc=0xfa68, .a=0x84, .x=0xfc, .y=0x06, .sp=0x3d, .status=0x44};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0x45}, {.addr=0xfa68, .value=0x64}, {.addr=0xfa69, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xfa6a, .a=0x84, .x=0xfc, .y=0x06, .sp=0x3d, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0x45}, {.addr=0xfa68, .value=0x64}, {.addr=0xfa69, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xfa68, .value=0x64, .type=IO_READ},
        {.addr=0xfa69, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02EC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02ED) {
    const struct CPU_State initial_cpu = {.pc=0x04a1, .a=0x01, .x=0xcb, .y=0x85, .sp=0xba, .status=0xfe};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0x68}, {.addr=0x04a1, .value=0x64}, {.addr=0x04a2, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x04a3, .a=0x01, .x=0xcb, .y=0x85, .sp=0xba, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0x68}, {.addr=0x04a1, .value=0x64}, {.addr=0x04a2, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x04a1, .value=0x64, .type=IO_READ},
        {.addr=0x04a2, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02ED", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02EE) {
    const struct CPU_State initial_cpu = {.pc=0xa98f, .a=0xe4, .x=0x17, .y=0x64, .sp=0xf7, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0x6b}, {.addr=0xa98f, .value=0x64}, {.addr=0xa990, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0xa991, .a=0xe4, .x=0x17, .y=0x64, .sp=0xf7, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0x6b}, {.addr=0xa98f, .value=0x64}, {.addr=0xa990, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0xa98f, .value=0x64, .type=IO_READ},
        {.addr=0xa990, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02EE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02EF) {
    const struct CPU_State initial_cpu = {.pc=0x656e, .a=0x15, .x=0x8d, .y=0x62, .sp=0x25, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005c, .value=0x63}, {.addr=0x656e, .value=0x64}, {.addr=0x656f, .value=0x5c},
    };
    const struct CPU_State final_cpu = {.pc=0x6570, .a=0x15, .x=0x8d, .y=0x62, .sp=0x25, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x005c, .value=0x63}, {.addr=0x656e, .value=0x64}, {.addr=0x656f, .value=0x5c},
    };
    const struct BusEvent events[] = {
        {.addr=0x656e, .value=0x64, .type=IO_READ},
        {.addr=0x656f, .value=0x5c, .type=IO_READ},
        {.addr=0x005c, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02EF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02F0) {
    const struct CPU_State initial_cpu = {.pc=0x60e8, .a=0x22, .x=0xfb, .y=0xcf, .sp=0x69, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0086, .value=0xd7}, {.addr=0x60e8, .value=0x64}, {.addr=0x60e9, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x60ea, .a=0x22, .x=0xfb, .y=0xcf, .sp=0x69, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x0086, .value=0xd7}, {.addr=0x60e8, .value=0x64}, {.addr=0x60e9, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x60e8, .value=0x64, .type=IO_READ},
        {.addr=0x60e9, .value=0x86, .type=IO_READ},
        {.addr=0x0086, .value=0xd7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02F0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02F1) {
    const struct CPU_State initial_cpu = {.pc=0x4771, .a=0x80, .x=0x9a, .y=0x10, .sp=0xc3, .status=0xdb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0075, .value=0xc8}, {.addr=0x4771, .value=0x64}, {.addr=0x4772, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x4773, .a=0x80, .x=0x9a, .y=0x10, .sp=0xc3, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0075, .value=0xc8}, {.addr=0x4771, .value=0x64}, {.addr=0x4772, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x4771, .value=0x64, .type=IO_READ},
        {.addr=0x4772, .value=0x75, .type=IO_READ},
        {.addr=0x0075, .value=0xc8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02F1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02F2) {
    const struct CPU_State initial_cpu = {.pc=0x799d, .a=0x28, .x=0x0a, .y=0xa4, .sp=0xfb, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0x1a}, {.addr=0x799d, .value=0x64}, {.addr=0x799e, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x799f, .a=0x28, .x=0x0a, .y=0xa4, .sp=0xfb, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0x1a}, {.addr=0x799d, .value=0x64}, {.addr=0x799e, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x799d, .value=0x64, .type=IO_READ},
        {.addr=0x799e, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02F2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02F3) {
    const struct CPU_State initial_cpu = {.pc=0xf4bc, .a=0x7a, .x=0xb5, .y=0x1f, .sp=0x6c, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0x8f}, {.addr=0xf4bc, .value=0x64}, {.addr=0xf4bd, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0xf4be, .a=0x7a, .x=0xb5, .y=0x1f, .sp=0x6c, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0x8f}, {.addr=0xf4bc, .value=0x64}, {.addr=0xf4bd, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0xf4bc, .value=0x64, .type=IO_READ},
        {.addr=0xf4bd, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02F3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02F4) {
    const struct CPU_State initial_cpu = {.pc=0x1646, .a=0xa8, .x=0xf2, .y=0x6e, .sp=0xfe, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014d, .value=0x4b}, {.addr=0x1646, .value=0x64}, {.addr=0x1647, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x1648, .a=0xa8, .x=0xf2, .y=0x6e, .sp=0xfe, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x014d, .value=0x4b}, {.addr=0x1646, .value=0x64}, {.addr=0x1647, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x1646, .value=0x64, .type=IO_READ},
        {.addr=0x1647, .value=0x4d, .type=IO_READ},
        {.addr=0x014d, .value=0x4b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02F4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02F5) {
    const struct CPU_State initial_cpu = {.pc=0xe854, .a=0x95, .x=0xc9, .y=0xd2, .sp=0xe4, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0166, .value=0xa6}, {.addr=0xe854, .value=0x64}, {.addr=0xe855, .value=0x66},
    };
    const struct CPU_State final_cpu = {.pc=0xe856, .a=0x95, .x=0xc9, .y=0xd2, .sp=0xe4, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0166, .value=0xa6}, {.addr=0xe854, .value=0x64}, {.addr=0xe855, .value=0x66},
    };
    const struct BusEvent events[] = {
        {.addr=0xe854, .value=0x64, .type=IO_READ},
        {.addr=0xe855, .value=0x66, .type=IO_READ},
        {.addr=0x0166, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02F5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02F6) {
    const struct CPU_State initial_cpu = {.pc=0x7a3b, .a=0xc9, .x=0xfd, .y=0xee, .sp=0xfd, .status=0x4d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0041, .value=0xd2}, {.addr=0x7a3b, .value=0x64}, {.addr=0x7a3c, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x7a3d, .a=0xc9, .x=0xfd, .y=0xee, .sp=0xfd, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0041, .value=0xd2}, {.addr=0x7a3b, .value=0x64}, {.addr=0x7a3c, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x7a3b, .value=0x64, .type=IO_READ},
        {.addr=0x7a3c, .value=0x41, .type=IO_READ},
        {.addr=0x0041, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02F6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02F7) {
    const struct CPU_State initial_cpu = {.pc=0x84a0, .a=0xab, .x=0xc4, .y=0xf4, .sp=0xb0, .status=0x1f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007b, .value=0x7a}, {.addr=0x84a0, .value=0x64}, {.addr=0x84a1, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x84a2, .a=0xab, .x=0xc4, .y=0xf4, .sp=0xb0, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x007b, .value=0x7a}, {.addr=0x84a0, .value=0x64}, {.addr=0x84a1, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x84a0, .value=0x64, .type=IO_READ},
        {.addr=0x84a1, .value=0x7b, .type=IO_READ},
        {.addr=0x007b, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02F7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02F8) {
    const struct CPU_State initial_cpu = {.pc=0x81c0, .a=0x9b, .x=0x79, .y=0xc4, .sp=0xac, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0157, .value=0x31}, {.addr=0x81c0, .value=0x64}, {.addr=0x81c1, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0x81c2, .a=0x9b, .x=0x79, .y=0xc4, .sp=0xac, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0157, .value=0x31}, {.addr=0x81c0, .value=0x64}, {.addr=0x81c1, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0x81c0, .value=0x64, .type=IO_READ},
        {.addr=0x81c1, .value=0x57, .type=IO_READ},
        {.addr=0x0157, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02F8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02F9) {
    const struct CPU_State initial_cpu = {.pc=0x8da6, .a=0x01, .x=0x38, .y=0x1c, .sp=0x3b, .status=0x55};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bc, .value=0x46}, {.addr=0x8da6, .value=0x64}, {.addr=0x8da7, .value=0xbc},
    };
    const struct CPU_State final_cpu = {.pc=0x8da8, .a=0x01, .x=0x38, .y=0x1c, .sp=0x3b, .status=0xd4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bc, .value=0x46}, {.addr=0x8da6, .value=0x64}, {.addr=0x8da7, .value=0xbc},
    };
    const struct BusEvent events[] = {
        {.addr=0x8da6, .value=0x64, .type=IO_READ},
        {.addr=0x8da7, .value=0xbc, .type=IO_READ},
        {.addr=0x00bc, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02F9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02FA) {
    const struct CPU_State initial_cpu = {.pc=0xd14a, .a=0x72, .x=0x90, .y=0x38, .sp=0x7a, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ac, .value=0x36}, {.addr=0xd14a, .value=0x64}, {.addr=0xd14b, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0xd14c, .a=0x72, .x=0x90, .y=0x38, .sp=0x7a, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ac, .value=0x36}, {.addr=0xd14a, .value=0x64}, {.addr=0xd14b, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0xd14a, .value=0x64, .type=IO_READ},
        {.addr=0xd14b, .value=0xac, .type=IO_READ},
        {.addr=0x00ac, .value=0x36, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02FA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02FB) {
    const struct CPU_State initial_cpu = {.pc=0xec8c, .a=0xf1, .x=0x93, .y=0x70, .sp=0x72, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0039, .value=0x6e}, {.addr=0xec8c, .value=0x64}, {.addr=0xec8d, .value=0x39},
    };
    const struct CPU_State final_cpu = {.pc=0xec8e, .a=0xf1, .x=0x93, .y=0x70, .sp=0x72, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0039, .value=0x6e}, {.addr=0xec8c, .value=0x64}, {.addr=0xec8d, .value=0x39},
    };
    const struct BusEvent events[] = {
        {.addr=0xec8c, .value=0x64, .type=IO_READ},
        {.addr=0xec8d, .value=0x39, .type=IO_READ},
        {.addr=0x0039, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02FB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02FC) {
    const struct CPU_State initial_cpu = {.pc=0x8d87, .a=0x25, .x=0xde, .y=0xdf, .sp=0xf2, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012f, .value=0x3d}, {.addr=0x8d87, .value=0x64}, {.addr=0x8d88, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x8d89, .a=0x25, .x=0xde, .y=0xdf, .sp=0xf2, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x012f, .value=0x3d}, {.addr=0x8d87, .value=0x64}, {.addr=0x8d88, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d87, .value=0x64, .type=IO_READ},
        {.addr=0x8d88, .value=0x2f, .type=IO_READ},
        {.addr=0x012f, .value=0x3d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02FC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02FD) {
    const struct CPU_State initial_cpu = {.pc=0x36e0, .a=0x25, .x=0x03, .y=0xc1, .sp=0x97, .status=0xd7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005e, .value=0xb7}, {.addr=0x36e0, .value=0x64}, {.addr=0x36e1, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x36e2, .a=0x25, .x=0x03, .y=0xc1, .sp=0x97, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x005e, .value=0xb7}, {.addr=0x36e0, .value=0x64}, {.addr=0x36e1, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x36e0, .value=0x64, .type=IO_READ},
        {.addr=0x36e1, .value=0x5e, .type=IO_READ},
        {.addr=0x005e, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02FD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02FE) {
    const struct CPU_State initial_cpu = {.pc=0x840a, .a=0x91, .x=0x50, .y=0x1e, .sp=0x41, .status=0xa3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0xff}, {.addr=0x840a, .value=0x64}, {.addr=0x840b, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0x840c, .a=0x91, .x=0x50, .y=0x1e, .sp=0x41, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0xff}, {.addr=0x840a, .value=0x64}, {.addr=0x840b, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0x840a, .value=0x64, .type=IO_READ},
        {.addr=0x840b, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02FE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_02FF) {
    const struct CPU_State initial_cpu = {.pc=0x8a19, .a=0x49, .x=0x54, .y=0x8f, .sp=0xdd, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0xd2}, {.addr=0x8a19, .value=0x64}, {.addr=0x8a1a, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0x8a1b, .a=0x49, .x=0x54, .y=0x8f, .sp=0xdd, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0xd2}, {.addr=0x8a19, .value=0x64}, {.addr=0x8a1a, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0x8a19, .value=0x64, .type=IO_READ},
        {.addr=0x8a1a, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0xd2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 02FF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0300) {
    const struct CPU_State initial_cpu = {.pc=0x0499, .a=0x14, .x=0x58, .y=0x12, .sp=0x0d, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00cb, .value=0x95}, {.addr=0x0499, .value=0x64}, {.addr=0x049a, .value=0xcb},
    };
    const struct CPU_State final_cpu = {.pc=0x049b, .a=0x14, .x=0x58, .y=0x12, .sp=0x0d, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00cb, .value=0x95}, {.addr=0x0499, .value=0x64}, {.addr=0x049a, .value=0xcb},
    };
    const struct BusEvent events[] = {
        {.addr=0x0499, .value=0x64, .type=IO_READ},
        {.addr=0x049a, .value=0xcb, .type=IO_READ},
        {.addr=0x00cb, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0300", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0301) {
    const struct CPU_State initial_cpu = {.pc=0x2ee4, .a=0x45, .x=0xb2, .y=0xea, .sp=0x05, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0141, .value=0xe7}, {.addr=0x2ee4, .value=0x64}, {.addr=0x2ee5, .value=0x41},
    };
    const struct CPU_State final_cpu = {.pc=0x2ee6, .a=0x45, .x=0xb2, .y=0xea, .sp=0x05, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0141, .value=0xe7}, {.addr=0x2ee4, .value=0x64}, {.addr=0x2ee5, .value=0x41},
    };
    const struct BusEvent events[] = {
        {.addr=0x2ee4, .value=0x64, .type=IO_READ},
        {.addr=0x2ee5, .value=0x41, .type=IO_READ},
        {.addr=0x0141, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0301", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0302) {
    const struct CPU_State initial_cpu = {.pc=0x9e05, .a=0x42, .x=0x1a, .y=0x6d, .sp=0x62, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x010d, .value=0x92}, {.addr=0x9e05, .value=0x64}, {.addr=0x9e06, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x9e07, .a=0x42, .x=0x1a, .y=0x6d, .sp=0x62, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x010d, .value=0x92}, {.addr=0x9e05, .value=0x64}, {.addr=0x9e06, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e05, .value=0x64, .type=IO_READ},
        {.addr=0x9e06, .value=0x0d, .type=IO_READ},
        {.addr=0x010d, .value=0x92, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0302", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0303) {
    const struct CPU_State initial_cpu = {.pc=0x2474, .a=0x25, .x=0x22, .y=0xfc, .sp=0x72, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0x80}, {.addr=0x2474, .value=0x64}, {.addr=0x2475, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x2476, .a=0x25, .x=0x22, .y=0xfc, .sp=0x72, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0x80}, {.addr=0x2474, .value=0x64}, {.addr=0x2475, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x2474, .value=0x64, .type=IO_READ},
        {.addr=0x2475, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0303", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0304) {
    const struct CPU_State initial_cpu = {.pc=0x7ade, .a=0x2d, .x=0x5f, .y=0x6c, .sp=0xc3, .status=0x34};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ea, .value=0xc0}, {.addr=0x7ade, .value=0x64}, {.addr=0x7adf, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0x7ae0, .a=0x2d, .x=0x5f, .y=0x6c, .sp=0xc3, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ea, .value=0xc0}, {.addr=0x7ade, .value=0x64}, {.addr=0x7adf, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0x7ade, .value=0x64, .type=IO_READ},
        {.addr=0x7adf, .value=0xea, .type=IO_READ},
        {.addr=0x01ea, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0304", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0305) {
    const struct CPU_State initial_cpu = {.pc=0x3612, .a=0xe5, .x=0x31, .y=0x5b, .sp=0xe8, .status=0x5c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0xcf}, {.addr=0x3612, .value=0x64}, {.addr=0x3613, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x3614, .a=0xe5, .x=0x31, .y=0x5b, .sp=0xe8, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0xcf}, {.addr=0x3612, .value=0x64}, {.addr=0x3613, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x3612, .value=0x64, .type=IO_READ},
        {.addr=0x3613, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0xcf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0305", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0306) {
    const struct CPU_State initial_cpu = {.pc=0x5cef, .a=0x82, .x=0x20, .y=0x55, .sp=0xde, .status=0x69};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e1, .value=0x03}, {.addr=0x5cef, .value=0x64}, {.addr=0x5cf0, .value=0xe1},
    };
    const struct CPU_State final_cpu = {.pc=0x5cf1, .a=0x82, .x=0x20, .y=0x55, .sp=0xde, .status=0x69};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e1, .value=0x03}, {.addr=0x5cef, .value=0x64}, {.addr=0x5cf0, .value=0xe1},
    };
    const struct BusEvent events[] = {
        {.addr=0x5cef, .value=0x64, .type=IO_READ},
        {.addr=0x5cf0, .value=0xe1, .type=IO_READ},
        {.addr=0x01e1, .value=0x03, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0306", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0307) {
    const struct CPU_State initial_cpu = {.pc=0x9908, .a=0xcb, .x=0x01, .y=0x6e, .sp=0xd2, .status=0x5a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0095, .value=0x25}, {.addr=0x9908, .value=0x64}, {.addr=0x9909, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x990a, .a=0xcb, .x=0x01, .y=0x6e, .sp=0xd2, .status=0xd9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0095, .value=0x25}, {.addr=0x9908, .value=0x64}, {.addr=0x9909, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x9908, .value=0x64, .type=IO_READ},
        {.addr=0x9909, .value=0x95, .type=IO_READ},
        {.addr=0x0095, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0307", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0309) {
    const struct CPU_State initial_cpu = {.pc=0xbbbe, .a=0x45, .x=0x0e, .y=0x20, .sp=0x61, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b5, .value=0x99}, {.addr=0xbbbe, .value=0x64}, {.addr=0xbbbf, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0xbbc0, .a=0x45, .x=0x0e, .y=0x20, .sp=0x61, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b5, .value=0x99}, {.addr=0xbbbe, .value=0x64}, {.addr=0xbbbf, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0xbbbe, .value=0x64, .type=IO_READ},
        {.addr=0xbbbf, .value=0xb5, .type=IO_READ},
        {.addr=0x00b5, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0309", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_030A) {
    const struct CPU_State initial_cpu = {.pc=0xf75c, .a=0xa6, .x=0xef, .y=0xa4, .sp=0x76, .status=0xb3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0148, .value=0xaa}, {.addr=0xf75c, .value=0x64}, {.addr=0xf75d, .value=0x48},
    };
    const struct CPU_State final_cpu = {.pc=0xf75e, .a=0xa6, .x=0xef, .y=0xa4, .sp=0x76, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0148, .value=0xaa}, {.addr=0xf75c, .value=0x64}, {.addr=0xf75d, .value=0x48},
    };
    const struct BusEvent events[] = {
        {.addr=0xf75c, .value=0x64, .type=IO_READ},
        {.addr=0xf75d, .value=0x48, .type=IO_READ},
        {.addr=0x0148, .value=0xaa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 030A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_030B) {
    const struct CPU_State initial_cpu = {.pc=0x9b39, .a=0xe4, .x=0x03, .y=0x3e, .sp=0x13, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0x3a}, {.addr=0x9b39, .value=0x64}, {.addr=0x9b3a, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x9b3b, .a=0xe4, .x=0x03, .y=0x3e, .sp=0x13, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0x3a}, {.addr=0x9b39, .value=0x64}, {.addr=0x9b3a, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x9b39, .value=0x64, .type=IO_READ},
        {.addr=0x9b3a, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 030B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_030C) {
    const struct CPU_State initial_cpu = {.pc=0x1bde, .a=0xb3, .x=0x53, .y=0xa6, .sp=0x9c, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0184, .value=0x39}, {.addr=0x1bde, .value=0x64}, {.addr=0x1bdf, .value=0x84},
    };
    const struct CPU_State final_cpu = {.pc=0x1be0, .a=0xb3, .x=0x53, .y=0xa6, .sp=0x9c, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0184, .value=0x39}, {.addr=0x1bde, .value=0x64}, {.addr=0x1bdf, .value=0x84},
    };
    const struct BusEvent events[] = {
        {.addr=0x1bde, .value=0x64, .type=IO_READ},
        {.addr=0x1bdf, .value=0x84, .type=IO_READ},
        {.addr=0x0184, .value=0x39, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 030C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_030D) {
    const struct CPU_State initial_cpu = {.pc=0xb388, .a=0xff, .x=0x6d, .y=0x18, .sp=0x2b, .status=0xc4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0008, .value=0xf9}, {.addr=0xb388, .value=0x64}, {.addr=0xb389, .value=0x08},
    };
    const struct CPU_State final_cpu = {.pc=0xb38a, .a=0xff, .x=0x6d, .y=0x18, .sp=0x2b, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0008, .value=0xf9}, {.addr=0xb388, .value=0x64}, {.addr=0xb389, .value=0x08},
    };
    const struct BusEvent events[] = {
        {.addr=0xb388, .value=0x64, .type=IO_READ},
        {.addr=0xb389, .value=0x08, .type=IO_READ},
        {.addr=0x0008, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 030D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_030E) {
    const struct CPU_State initial_cpu = {.pc=0xd305, .a=0x83, .x=0xe4, .y=0x63, .sp=0xc8, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005d, .value=0xdb}, {.addr=0xd305, .value=0x64}, {.addr=0xd306, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xd307, .a=0x83, .x=0xe4, .y=0x63, .sp=0xc8, .status=0xc8};
    const struct RamEntry final_ram[] = {
        {.addr=0x005d, .value=0xdb}, {.addr=0xd305, .value=0x64}, {.addr=0xd306, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xd305, .value=0x64, .type=IO_READ},
        {.addr=0xd306, .value=0x5d, .type=IO_READ},
        {.addr=0x005d, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 030E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_030F) {
    const struct CPU_State initial_cpu = {.pc=0xb35f, .a=0xca, .x=0xe9, .y=0xec, .sp=0xf1, .status=0x67};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015b, .value=0xf0}, {.addr=0xb35f, .value=0x64}, {.addr=0xb360, .value=0x5b},
    };
    const struct CPU_State final_cpu = {.pc=0xb361, .a=0xca, .x=0xe9, .y=0xec, .sp=0xf1, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x015b, .value=0xf0}, {.addr=0xb35f, .value=0x64}, {.addr=0xb360, .value=0x5b},
    };
    const struct BusEvent events[] = {
        {.addr=0xb35f, .value=0x64, .type=IO_READ},
        {.addr=0xb360, .value=0x5b, .type=IO_READ},
        {.addr=0x015b, .value=0xf0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 030F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0310) {
    const struct CPU_State initial_cpu = {.pc=0xde92, .a=0xd7, .x=0x53, .y=0xb8, .sp=0x52, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0111, .value=0x00}, {.addr=0xde92, .value=0x64}, {.addr=0xde93, .value=0x11},
    };
    const struct CPU_State final_cpu = {.pc=0xde94, .a=0xd7, .x=0x53, .y=0xb8, .sp=0x52, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0111, .value=0x00}, {.addr=0xde92, .value=0x64}, {.addr=0xde93, .value=0x11},
    };
    const struct BusEvent events[] = {
        {.addr=0xde92, .value=0x64, .type=IO_READ},
        {.addr=0xde93, .value=0x11, .type=IO_READ},
        {.addr=0x0111, .value=0x00, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0310", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0311) {
    const struct CPU_State initial_cpu = {.pc=0x594b, .a=0xaf, .x=0x4c, .y=0x2e, .sp=0xbb, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014b, .value=0x01}, {.addr=0x594b, .value=0x64}, {.addr=0x594c, .value=0x4b},
    };
    const struct CPU_State final_cpu = {.pc=0x594d, .a=0xaf, .x=0x4c, .y=0x2e, .sp=0xbb, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x014b, .value=0x01}, {.addr=0x594b, .value=0x64}, {.addr=0x594c, .value=0x4b},
    };
    const struct BusEvent events[] = {
        {.addr=0x594b, .value=0x64, .type=IO_READ},
        {.addr=0x594c, .value=0x4b, .type=IO_READ},
        {.addr=0x014b, .value=0x01, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0311", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0312) {
    const struct CPU_State initial_cpu = {.pc=0xc085, .a=0x6a, .x=0x4d, .y=0x1e, .sp=0x2f, .status=0x2c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d0, .value=0x4c}, {.addr=0xc085, .value=0x64}, {.addr=0xc086, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0xc087, .a=0x6a, .x=0x4d, .y=0x1e, .sp=0x2f, .status=0x2d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d0, .value=0x4c}, {.addr=0xc085, .value=0x64}, {.addr=0xc086, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0xc085, .value=0x64, .type=IO_READ},
        {.addr=0xc086, .value=0xd0, .type=IO_READ},
        {.addr=0x01d0, .value=0x4c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0312", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0313) {
    const struct CPU_State initial_cpu = {.pc=0xea56, .a=0x4a, .x=0xe4, .y=0x17, .sp=0xa0, .status=0x5f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e7, .value=0xc3}, {.addr=0xea56, .value=0x64}, {.addr=0xea57, .value=0xe7},
    };
    const struct CPU_State final_cpu = {.pc=0xea58, .a=0x4a, .x=0xe4, .y=0x17, .sp=0xa0, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e7, .value=0xc3}, {.addr=0xea56, .value=0x64}, {.addr=0xea57, .value=0xe7},
    };
    const struct BusEvent events[] = {
        {.addr=0xea56, .value=0x64, .type=IO_READ},
        {.addr=0xea57, .value=0xe7, .type=IO_READ},
        {.addr=0x00e7, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0313", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0314) {
    const struct CPU_State initial_cpu = {.pc=0x3744, .a=0x25, .x=0x35, .y=0x59, .sp=0x17, .status=0xf7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0193, .value=0x9c}, {.addr=0x3744, .value=0x64}, {.addr=0x3745, .value=0x93},
    };
    const struct CPU_State final_cpu = {.pc=0x3746, .a=0x25, .x=0x35, .y=0x59, .sp=0x17, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0193, .value=0x9c}, {.addr=0x3744, .value=0x64}, {.addr=0x3745, .value=0x93},
    };
    const struct BusEvent events[] = {
        {.addr=0x3744, .value=0x64, .type=IO_READ},
        {.addr=0x3745, .value=0x93, .type=IO_READ},
        {.addr=0x0193, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0314", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0315) {
    const struct CPU_State initial_cpu = {.pc=0x5841, .a=0xf0, .x=0xb5, .y=0x4c, .sp=0x9d, .status=0x9d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0089, .value=0x88}, {.addr=0x5841, .value=0x64}, {.addr=0x5842, .value=0x89},
    };
    const struct CPU_State final_cpu = {.pc=0x5843, .a=0xf0, .x=0xb5, .y=0x4c, .sp=0x9d, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0089, .value=0x88}, {.addr=0x5841, .value=0x64}, {.addr=0x5842, .value=0x89},
    };
    const struct BusEvent events[] = {
        {.addr=0x5841, .value=0x64, .type=IO_READ},
        {.addr=0x5842, .value=0x89, .type=IO_READ},
        {.addr=0x0089, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0315", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0316) {
    const struct CPU_State initial_cpu = {.pc=0x1751, .a=0xcf, .x=0xd3, .y=0x88, .sp=0x75, .status=0x58};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0090, .value=0x7c}, {.addr=0x1751, .value=0x64}, {.addr=0x1752, .value=0x90},
    };
    const struct CPU_State final_cpu = {.pc=0x1753, .a=0xcf, .x=0xd3, .y=0x88, .sp=0x75, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x0090, .value=0x7c}, {.addr=0x1751, .value=0x64}, {.addr=0x1752, .value=0x90},
    };
    const struct BusEvent events[] = {
        {.addr=0x1751, .value=0x64, .type=IO_READ},
        {.addr=0x1752, .value=0x90, .type=IO_READ},
        {.addr=0x0090, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0316", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0317) {
    const struct CPU_State initial_cpu = {.pc=0x9580, .a=0x14, .x=0x3d, .y=0xbf, .sp=0xb3, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0004, .value=0xd1}, {.addr=0x9580, .value=0x64}, {.addr=0x9581, .value=0x04},
    };
    const struct CPU_State final_cpu = {.pc=0x9582, .a=0x14, .x=0x3d, .y=0xbf, .sp=0xb3, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0004, .value=0xd1}, {.addr=0x9580, .value=0x64}, {.addr=0x9581, .value=0x04},
    };
    const struct BusEvent events[] = {
        {.addr=0x9580, .value=0x64, .type=IO_READ},
        {.addr=0x9581, .value=0x04, .type=IO_READ},
        {.addr=0x0004, .value=0xd1, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0317", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0318) {
    const struct CPU_State initial_cpu = {.pc=0x49b4, .a=0xcc, .x=0xeb, .y=0x87, .sp=0x84, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d5, .value=0x74}, {.addr=0x49b4, .value=0x64}, {.addr=0x49b5, .value=0xd5},
    };
    const struct CPU_State final_cpu = {.pc=0x49b6, .a=0xcc, .x=0xeb, .y=0x87, .sp=0x84, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d5, .value=0x74}, {.addr=0x49b4, .value=0x64}, {.addr=0x49b5, .value=0xd5},
    };
    const struct BusEvent events[] = {
        {.addr=0x49b4, .value=0x64, .type=IO_READ},
        {.addr=0x49b5, .value=0xd5, .type=IO_READ},
        {.addr=0x01d5, .value=0x74, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0318", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0319) {
    const struct CPU_State initial_cpu = {.pc=0xa520, .a=0xca, .x=0x29, .y=0x10, .sp=0xd8, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0xb0}, {.addr=0xa520, .value=0x64}, {.addr=0xa521, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0xa522, .a=0xca, .x=0x29, .y=0x10, .sp=0xd8, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0xb0}, {.addr=0xa520, .value=0x64}, {.addr=0xa521, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0xa520, .value=0x64, .type=IO_READ},
        {.addr=0xa521, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0xb0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0319", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_031A) {
    const struct CPU_State initial_cpu = {.pc=0x2a26, .a=0xa0, .x=0x90, .y=0x5a, .sp=0x1d, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0023, .value=0xd0}, {.addr=0x2a26, .value=0x64}, {.addr=0x2a27, .value=0x23},
    };
    const struct CPU_State final_cpu = {.pc=0x2a28, .a=0xa0, .x=0x90, .y=0x5a, .sp=0x1d, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0023, .value=0xd0}, {.addr=0x2a26, .value=0x64}, {.addr=0x2a27, .value=0x23},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a26, .value=0x64, .type=IO_READ},
        {.addr=0x2a27, .value=0x23, .type=IO_READ},
        {.addr=0x0023, .value=0xd0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 031A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_031B) {
    const struct CPU_State initial_cpu = {.pc=0x7fca, .a=0xea, .x=0x53, .y=0x65, .sp=0x27, .status=0x5b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002a, .value=0xc3}, {.addr=0x7fca, .value=0x64}, {.addr=0x7fcb, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x7fcc, .a=0xea, .x=0x53, .y=0x65, .sp=0x27, .status=0x59};
    const struct RamEntry final_ram[] = {
        {.addr=0x002a, .value=0xc3}, {.addr=0x7fca, .value=0x64}, {.addr=0x7fcb, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x7fca, .value=0x64, .type=IO_READ},
        {.addr=0x7fcb, .value=0x2a, .type=IO_READ},
        {.addr=0x002a, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 031B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_031C) {
    const struct CPU_State initial_cpu = {.pc=0x19d4, .a=0x69, .x=0xd4, .y=0x95, .sp=0xe2, .status=0xfc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d0, .value=0xad}, {.addr=0x19d4, .value=0x64}, {.addr=0x19d5, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x19d6, .a=0x69, .x=0xd4, .y=0x95, .sp=0xe2, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d0, .value=0xad}, {.addr=0x19d4, .value=0x64}, {.addr=0x19d5, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x19d4, .value=0x64, .type=IO_READ},
        {.addr=0x19d5, .value=0xd0, .type=IO_READ},
        {.addr=0x01d0, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 031C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_031D) {
    const struct CPU_State initial_cpu = {.pc=0xd70b, .a=0xef, .x=0xe9, .y=0xe2, .sp=0xbc, .status=0x21};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019e, .value=0xb7}, {.addr=0xd70b, .value=0x64}, {.addr=0xd70c, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0xd70d, .a=0xef, .x=0xe9, .y=0xe2, .sp=0xbc, .status=0x21};
    const struct RamEntry final_ram[] = {
        {.addr=0x019e, .value=0xb7}, {.addr=0xd70b, .value=0x64}, {.addr=0xd70c, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0xd70b, .value=0x64, .type=IO_READ},
        {.addr=0xd70c, .value=0x9e, .type=IO_READ},
        {.addr=0x019e, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 031D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_031E) {
    const struct CPU_State initial_cpu = {.pc=0x72a8, .a=0x17, .x=0xc3, .y=0xa1, .sp=0xe6, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0121, .value=0xaf}, {.addr=0x72a8, .value=0x64}, {.addr=0x72a9, .value=0x21},
    };
    const struct CPU_State final_cpu = {.pc=0x72aa, .a=0x17, .x=0xc3, .y=0xa1, .sp=0xe6, .status=0x20};
    const struct RamEntry final_ram[] = {
        {.addr=0x0121, .value=0xaf}, {.addr=0x72a8, .value=0x64}, {.addr=0x72a9, .value=0x21},
    };
    const struct BusEvent events[] = {
        {.addr=0x72a8, .value=0x64, .type=IO_READ},
        {.addr=0x72a9, .value=0x21, .type=IO_READ},
        {.addr=0x0121, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 031E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_031F) {
    const struct CPU_State initial_cpu = {.pc=0x669a, .a=0xbd, .x=0x6b, .y=0x1c, .sp=0x2d, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0198, .value=0x87}, {.addr=0x669a, .value=0x64}, {.addr=0x669b, .value=0x98},
    };
    const struct CPU_State final_cpu = {.pc=0x669c, .a=0xbd, .x=0x6b, .y=0x1c, .sp=0x2d, .status=0x39};
    const struct RamEntry final_ram[] = {
        {.addr=0x0198, .value=0x87}, {.addr=0x669a, .value=0x64}, {.addr=0x669b, .value=0x98},
    };
    const struct BusEvent events[] = {
        {.addr=0x669a, .value=0x64, .type=IO_READ},
        {.addr=0x669b, .value=0x98, .type=IO_READ},
        {.addr=0x0198, .value=0x87, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 031F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0320) {
    const struct CPU_State initial_cpu = {.pc=0xcbf9, .a=0x5b, .x=0xf7, .y=0x89, .sp=0x96, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015d, .value=0x57}, {.addr=0xcbf9, .value=0x64}, {.addr=0xcbfa, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xcbfb, .a=0x5b, .x=0xf7, .y=0x89, .sp=0x96, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x015d, .value=0x57}, {.addr=0xcbf9, .value=0x64}, {.addr=0xcbfa, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xcbf9, .value=0x64, .type=IO_READ},
        {.addr=0xcbfa, .value=0x5d, .type=IO_READ},
        {.addr=0x015d, .value=0x57, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0320", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0321) {
    const struct CPU_State initial_cpu = {.pc=0x7b95, .a=0xb5, .x=0x22, .y=0x03, .sp=0x11, .status=0x30};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c5, .value=0x8d}, {.addr=0x7b95, .value=0x64}, {.addr=0x7b96, .value=0xc5},
    };
    const struct CPU_State final_cpu = {.pc=0x7b97, .a=0xb5, .x=0x22, .y=0x03, .sp=0x11, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c5, .value=0x8d}, {.addr=0x7b95, .value=0x64}, {.addr=0x7b96, .value=0xc5},
    };
    const struct BusEvent events[] = {
        {.addr=0x7b95, .value=0x64, .type=IO_READ},
        {.addr=0x7b96, .value=0xc5, .type=IO_READ},
        {.addr=0x01c5, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0321", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0322) {
    const struct CPU_State initial_cpu = {.pc=0x3a5d, .a=0x62, .x=0xff, .y=0xbe, .sp=0x7e, .status=0x7f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0xa2}, {.addr=0x3a5d, .value=0x64}, {.addr=0x3a5e, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0x3a5f, .a=0x62, .x=0xff, .y=0xbe, .sp=0x7e, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0xa2}, {.addr=0x3a5d, .value=0x64}, {.addr=0x3a5e, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a5d, .value=0x64, .type=IO_READ},
        {.addr=0x3a5e, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0xa2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0322", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0323) {
    const struct CPU_State initial_cpu = {.pc=0xa9a3, .a=0x49, .x=0xa3, .y=0x87, .sp=0x6e, .status=0x8f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0027, .value=0x7a}, {.addr=0xa9a3, .value=0x64}, {.addr=0xa9a4, .value=0x27},
    };
    const struct CPU_State final_cpu = {.pc=0xa9a5, .a=0x49, .x=0xa3, .y=0x87, .sp=0x6e, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0027, .value=0x7a}, {.addr=0xa9a3, .value=0x64}, {.addr=0xa9a4, .value=0x27},
    };
    const struct BusEvent events[] = {
        {.addr=0xa9a3, .value=0x64, .type=IO_READ},
        {.addr=0xa9a4, .value=0x27, .type=IO_READ},
        {.addr=0x0027, .value=0x7a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0323", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0324) {
    const struct CPU_State initial_cpu = {.pc=0x5282, .a=0x31, .x=0x67, .y=0x34, .sp=0x84, .status=0x1e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0x6e}, {.addr=0x5282, .value=0x64}, {.addr=0x5283, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x5284, .a=0x31, .x=0x67, .y=0x34, .sp=0x84, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0x6e}, {.addr=0x5282, .value=0x64}, {.addr=0x5283, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x5282, .value=0x64, .type=IO_READ},
        {.addr=0x5283, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0324", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0325) {
    const struct CPU_State initial_cpu = {.pc=0x91e5, .a=0xe6, .x=0x9b, .y=0x4e, .sp=0x6f, .status=0x3f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01f5, .value=0xd4}, {.addr=0x91e5, .value=0x64}, {.addr=0x91e6, .value=0xf5},
    };
    const struct CPU_State final_cpu = {.pc=0x91e7, .a=0xe6, .x=0x9b, .y=0x4e, .sp=0x6f, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01f5, .value=0xd4}, {.addr=0x91e5, .value=0x64}, {.addr=0x91e6, .value=0xf5},
    };
    const struct BusEvent events[] = {
        {.addr=0x91e5, .value=0x64, .type=IO_READ},
        {.addr=0x91e6, .value=0xf5, .type=IO_READ},
        {.addr=0x01f5, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0325", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0326) {
    const struct CPU_State initial_cpu = {.pc=0x3349, .a=0xac, .x=0x4a, .y=0xa3, .sp=0x4a, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ef, .value=0x41}, {.addr=0x3349, .value=0x64}, {.addr=0x334a, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x334b, .a=0xac, .x=0x4a, .y=0xa3, .sp=0x4a, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ef, .value=0x41}, {.addr=0x3349, .value=0x64}, {.addr=0x334a, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x3349, .value=0x64, .type=IO_READ},
        {.addr=0x334a, .value=0xef, .type=IO_READ},
        {.addr=0x00ef, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0326", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0327) {
    const struct CPU_State initial_cpu = {.pc=0x1448, .a=0x31, .x=0xc3, .y=0x6e, .sp=0x93, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012d, .value=0x71}, {.addr=0x1448, .value=0x64}, {.addr=0x1449, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x144a, .a=0x31, .x=0xc3, .y=0x6e, .sp=0x93, .status=0xe4};
    const struct RamEntry final_ram[] = {
        {.addr=0x012d, .value=0x71}, {.addr=0x1448, .value=0x64}, {.addr=0x1449, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x1448, .value=0x64, .type=IO_READ},
        {.addr=0x1449, .value=0x2d, .type=IO_READ},
        {.addr=0x012d, .value=0x71, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0327", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0328) {
    const struct CPU_State initial_cpu = {.pc=0x27c9, .a=0x57, .x=0x5b, .y=0x60, .sp=0xee, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012a, .value=0xb2}, {.addr=0x27c9, .value=0x64}, {.addr=0x27ca, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x27cb, .a=0x57, .x=0x5b, .y=0x60, .sp=0xee, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x012a, .value=0xb2}, {.addr=0x27c9, .value=0x64}, {.addr=0x27ca, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x27c9, .value=0x64, .type=IO_READ},
        {.addr=0x27ca, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0xb2, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0328", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_032A) {
    const struct CPU_State initial_cpu = {.pc=0xb4d4, .a=0x7d, .x=0x99, .y=0x1c, .sp=0x8c, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b3, .value=0x90}, {.addr=0xb4d4, .value=0x64}, {.addr=0xb4d5, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0xb4d6, .a=0x7d, .x=0x99, .y=0x1c, .sp=0x8c, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b3, .value=0x90}, {.addr=0xb4d4, .value=0x64}, {.addr=0xb4d5, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0xb4d4, .value=0x64, .type=IO_READ},
        {.addr=0xb4d5, .value=0xb3, .type=IO_READ},
        {.addr=0x00b3, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 032A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_032B) {
    const struct CPU_State initial_cpu = {.pc=0x0f1f, .a=0xd8, .x=0xf6, .y=0xc0, .sp=0x02, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e5, .value=0x5c}, {.addr=0x0f1f, .value=0x64}, {.addr=0x0f20, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x0f21, .a=0xd8, .x=0xf6, .y=0xc0, .sp=0x02, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e5, .value=0x5c}, {.addr=0x0f1f, .value=0x64}, {.addr=0x0f20, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x0f1f, .value=0x64, .type=IO_READ},
        {.addr=0x0f20, .value=0xe5, .type=IO_READ},
        {.addr=0x00e5, .value=0x5c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 032B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_032C) {
    const struct CPU_State initial_cpu = {.pc=0xb5de, .a=0x75, .x=0x59, .y=0x95, .sp=0xe3, .status=0x66};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011c, .value=0x58}, {.addr=0xb5de, .value=0x64}, {.addr=0xb5df, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0xb5e0, .a=0x75, .x=0x59, .y=0x95, .sp=0xe3, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x011c, .value=0x58}, {.addr=0xb5de, .value=0x64}, {.addr=0xb5df, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0xb5de, .value=0x64, .type=IO_READ},
        {.addr=0xb5df, .value=0x1c, .type=IO_READ},
        {.addr=0x011c, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 032C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_032D) {
    const struct CPU_State initial_cpu = {.pc=0x4ae0, .a=0x58, .x=0x56, .y=0xc2, .sp=0x5f, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001d, .value=0x50}, {.addr=0x4ae0, .value=0x64}, {.addr=0x4ae1, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0x4ae2, .a=0x58, .x=0x56, .y=0xc2, .sp=0x5f, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x001d, .value=0x50}, {.addr=0x4ae0, .value=0x64}, {.addr=0x4ae1, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0x4ae0, .value=0x64, .type=IO_READ},
        {.addr=0x4ae1, .value=0x1d, .type=IO_READ},
        {.addr=0x001d, .value=0x50, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 032D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_032E) {
    const struct CPU_State initial_cpu = {.pc=0x0b36, .a=0x2c, .x=0xb5, .y=0xdb, .sp=0x99, .status=0x76};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0xce}, {.addr=0x0b36, .value=0x64}, {.addr=0x0b37, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0x0b38, .a=0x2c, .x=0xb5, .y=0xdb, .sp=0x99, .status=0x74};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0xce}, {.addr=0x0b36, .value=0x64}, {.addr=0x0b37, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0x0b36, .value=0x64, .type=IO_READ},
        {.addr=0x0b37, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0xce, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 032E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_032F) {
    const struct CPU_State initial_cpu = {.pc=0x33c8, .a=0xbf, .x=0x29, .y=0x16, .sp=0x72, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0x1e}, {.addr=0x33c8, .value=0x64}, {.addr=0x33c9, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0x33ca, .a=0xbf, .x=0x29, .y=0x16, .sp=0x72, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0x1e}, {.addr=0x33c8, .value=0x64}, {.addr=0x33c9, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0x33c8, .value=0x64, .type=IO_READ},
        {.addr=0x33c9, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 032F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0330) {
    const struct CPU_State initial_cpu = {.pc=0xf4cd, .a=0x2c, .x=0xad, .y=0xe5, .sp=0xc8, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c1, .value=0xe4}, {.addr=0xf4cd, .value=0x64}, {.addr=0xf4ce, .value=0xc1},
    };
    const struct CPU_State final_cpu = {.pc=0xf4cf, .a=0x2c, .x=0xad, .y=0xe5, .sp=0xc8, .status=0x1c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c1, .value=0xe4}, {.addr=0xf4cd, .value=0x64}, {.addr=0xf4ce, .value=0xc1},
    };
    const struct BusEvent events[] = {
        {.addr=0xf4cd, .value=0x64, .type=IO_READ},
        {.addr=0xf4ce, .value=0xc1, .type=IO_READ},
        {.addr=0x00c1, .value=0xe4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0330", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0331) {
    const struct CPU_State initial_cpu = {.pc=0xa3a3, .a=0x2f, .x=0x71, .y=0xfb, .sp=0xc2, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x59}, {.addr=0xa3a3, .value=0x64}, {.addr=0xa3a4, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0xa3a5, .a=0x2f, .x=0x71, .y=0xfb, .sp=0xc2, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x59}, {.addr=0xa3a3, .value=0x64}, {.addr=0xa3a4, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0xa3a3, .value=0x64, .type=IO_READ},
        {.addr=0xa3a4, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0331", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0332) {
    const struct CPU_State initial_cpu = {.pc=0x0fe1, .a=0xed, .x=0x2a, .y=0x04, .sp=0x4f, .status=0x23};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d0, .value=0x40}, {.addr=0x0fe1, .value=0x64}, {.addr=0x0fe2, .value=0xd0},
    };
    const struct CPU_State final_cpu = {.pc=0x0fe3, .a=0xed, .x=0x2a, .y=0x04, .sp=0x4f, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d0, .value=0x40}, {.addr=0x0fe1, .value=0x64}, {.addr=0x0fe2, .value=0xd0},
    };
    const struct BusEvent events[] = {
        {.addr=0x0fe1, .value=0x64, .type=IO_READ},
        {.addr=0x0fe2, .value=0xd0, .type=IO_READ},
        {.addr=0x01d0, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0332", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0333) {
    const struct CPU_State initial_cpu = {.pc=0xdbe5, .a=0x52, .x=0x54, .y=0xd7, .sp=0xd8, .status=0x25};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0x22}, {.addr=0xdbe5, .value=0x64}, {.addr=0xdbe6, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0xdbe7, .a=0x52, .x=0x54, .y=0xd7, .sp=0xd8, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0x22}, {.addr=0xdbe5, .value=0x64}, {.addr=0xdbe6, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0xdbe5, .value=0x64, .type=IO_READ},
        {.addr=0xdbe6, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0333", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0334) {
    const struct CPU_State initial_cpu = {.pc=0x2ee9, .a=0x57, .x=0x23, .y=0xf8, .sp=0xae, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c0, .value=0x88}, {.addr=0x2ee9, .value=0x64}, {.addr=0x2eea, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x2eeb, .a=0x57, .x=0x23, .y=0xf8, .sp=0xae, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c0, .value=0x88}, {.addr=0x2ee9, .value=0x64}, {.addr=0x2eea, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x2ee9, .value=0x64, .type=IO_READ},
        {.addr=0x2eea, .value=0xc0, .type=IO_READ},
        {.addr=0x01c0, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0334", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0335) {
    const struct CPU_State initial_cpu = {.pc=0xaaca, .a=0x2a, .x=0x61, .y=0xf9, .sp=0x1a, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0070, .value=0xcc}, {.addr=0xaaca, .value=0x64}, {.addr=0xaacb, .value=0x70},
    };
    const struct CPU_State final_cpu = {.pc=0xaacc, .a=0x2a, .x=0x61, .y=0xf9, .sp=0x1a, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0070, .value=0xcc}, {.addr=0xaaca, .value=0x64}, {.addr=0xaacb, .value=0x70},
    };
    const struct BusEvent events[] = {
        {.addr=0xaaca, .value=0x64, .type=IO_READ},
        {.addr=0xaacb, .value=0x70, .type=IO_READ},
        {.addr=0x0070, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0335", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0336) {
    const struct CPU_State initial_cpu = {.pc=0xc3f9, .a=0x87, .x=0x69, .y=0x02, .sp=0xc0, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00df, .value=0x99}, {.addr=0xc3f9, .value=0x64}, {.addr=0xc3fa, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0xc3fb, .a=0x87, .x=0x69, .y=0x02, .sp=0xc0, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00df, .value=0x99}, {.addr=0xc3f9, .value=0x64}, {.addr=0xc3fa, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0xc3f9, .value=0x64, .type=IO_READ},
        {.addr=0xc3fa, .value=0xdf, .type=IO_READ},
        {.addr=0x00df, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0336", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0337) {
    const struct CPU_State initial_cpu = {.pc=0xa24d, .a=0xca, .x=0x95, .y=0x31, .sp=0x5c, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0120, .value=0x1d}, {.addr=0xa24d, .value=0x64}, {.addr=0xa24e, .value=0x20},
    };
    const struct CPU_State final_cpu = {.pc=0xa24f, .a=0xca, .x=0x95, .y=0x31, .sp=0x5c, .status=0xb9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0120, .value=0x1d}, {.addr=0xa24d, .value=0x64}, {.addr=0xa24e, .value=0x20},
    };
    const struct BusEvent events[] = {
        {.addr=0xa24d, .value=0x64, .type=IO_READ},
        {.addr=0xa24e, .value=0x20, .type=IO_READ},
        {.addr=0x0120, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0337", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0338) {
    const struct CPU_State initial_cpu = {.pc=0x3344, .a=0xab, .x=0x03, .y=0x45, .sp=0xa0, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0158, .value=0x8f}, {.addr=0x3344, .value=0x64}, {.addr=0x3345, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0x3346, .a=0xab, .x=0x03, .y=0x45, .sp=0xa0, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x0158, .value=0x8f}, {.addr=0x3344, .value=0x64}, {.addr=0x3345, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0x3344, .value=0x64, .type=IO_READ},
        {.addr=0x3345, .value=0x58, .type=IO_READ},
        {.addr=0x0158, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0338", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0339) {
    const struct CPU_State initial_cpu = {.pc=0xf85d, .a=0x50, .x=0x7c, .y=0xa1, .sp=0x1c, .status=0xf0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0x18}, {.addr=0xf85d, .value=0x64}, {.addr=0xf85e, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0xf85f, .a=0x50, .x=0x7c, .y=0xa1, .sp=0x1c, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0x18}, {.addr=0xf85d, .value=0x64}, {.addr=0xf85e, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0xf85d, .value=0x64, .type=IO_READ},
        {.addr=0xf85e, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0339", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_033A) {
    const struct CPU_State initial_cpu = {.pc=0xe44b, .a=0xab, .x=0x90, .y=0xa3, .sp=0x1a, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0145, .value=0x24}, {.addr=0xe44b, .value=0x64}, {.addr=0xe44c, .value=0x45},
    };
    const struct CPU_State final_cpu = {.pc=0xe44d, .a=0xab, .x=0x90, .y=0xa3, .sp=0x1a, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0145, .value=0x24}, {.addr=0xe44b, .value=0x64}, {.addr=0xe44c, .value=0x45},
    };
    const struct BusEvent events[] = {
        {.addr=0xe44b, .value=0x64, .type=IO_READ},
        {.addr=0xe44c, .value=0x45, .type=IO_READ},
        {.addr=0x0145, .value=0x24, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 033A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_033B) {
    const struct CPU_State initial_cpu = {.pc=0x6325, .a=0xe8, .x=0x54, .y=0xcc, .sp=0x09, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0143, .value=0x5f}, {.addr=0x6325, .value=0x64}, {.addr=0x6326, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0x6327, .a=0xe8, .x=0x54, .y=0xcc, .sp=0x09, .status=0xb5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0143, .value=0x5f}, {.addr=0x6325, .value=0x64}, {.addr=0x6326, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0x6325, .value=0x64, .type=IO_READ},
        {.addr=0x6326, .value=0x43, .type=IO_READ},
        {.addr=0x0143, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 033B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_033C) {
    const struct CPU_State initial_cpu = {.pc=0xbe40, .a=0xee, .x=0x70, .y=0x84, .sp=0x05, .status=0x2b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016a, .value=0x6e}, {.addr=0xbe40, .value=0x64}, {.addr=0xbe41, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0xbe42, .a=0xee, .x=0x70, .y=0x84, .sp=0x05, .status=0xa9};
    const struct RamEntry final_ram[] = {
        {.addr=0x016a, .value=0x6e}, {.addr=0xbe40, .value=0x64}, {.addr=0xbe41, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe40, .value=0x64, .type=IO_READ},
        {.addr=0xbe41, .value=0x6a, .type=IO_READ},
        {.addr=0x016a, .value=0x6e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 033C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_033D) {
    const struct CPU_State initial_cpu = {.pc=0x1034, .a=0x8a, .x=0xe2, .y=0x72, .sp=0xae, .status=0x35};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dd, .value=0x40}, {.addr=0x1034, .value=0x64}, {.addr=0x1035, .value=0xdd},
    };
    const struct CPU_State final_cpu = {.pc=0x1036, .a=0x8a, .x=0xe2, .y=0x72, .sp=0xae, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dd, .value=0x40}, {.addr=0x1034, .value=0x64}, {.addr=0x1035, .value=0xdd},
    };
    const struct BusEvent events[] = {
        {.addr=0x1034, .value=0x64, .type=IO_READ},
        {.addr=0x1035, .value=0xdd, .type=IO_READ},
        {.addr=0x01dd, .value=0x40, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 033D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_033E) {
    const struct CPU_State initial_cpu = {.pc=0xc760, .a=0xa2, .x=0x85, .y=0x3f, .sp=0x76, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0109, .value=0x97}, {.addr=0xc760, .value=0x64}, {.addr=0xc761, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0xc762, .a=0xa2, .x=0x85, .y=0x3f, .sp=0x76, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0109, .value=0x97}, {.addr=0xc760, .value=0x64}, {.addr=0xc761, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0xc760, .value=0x64, .type=IO_READ},
        {.addr=0xc761, .value=0x09, .type=IO_READ},
        {.addr=0x0109, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 033E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_033F) {
    const struct CPU_State initial_cpu = {.pc=0x79fe, .a=0xd6, .x=0x4a, .y=0x24, .sp=0xca, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ff, .value=0x58}, {.addr=0x79fe, .value=0x64}, {.addr=0x79ff, .value=0xff},
    };
    const struct CPU_State final_cpu = {.pc=0x7a00, .a=0xd6, .x=0x4a, .y=0x24, .sp=0xca, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ff, .value=0x58}, {.addr=0x79fe, .value=0x64}, {.addr=0x79ff, .value=0xff},
    };
    const struct BusEvent events[] = {
        {.addr=0x79fe, .value=0x64, .type=IO_READ},
        {.addr=0x79ff, .value=0xff, .type=IO_READ},
        {.addr=0x01ff, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 033F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0340) {
    const struct CPU_State initial_cpu = {.pc=0x43ea, .a=0xca, .x=0x1d, .y=0x3f, .sp=0xe9, .status=0x22};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01c9, .value=0xfe}, {.addr=0x43ea, .value=0x64}, {.addr=0x43eb, .value=0xc9},
    };
    const struct CPU_State final_cpu = {.pc=0x43ec, .a=0xca, .x=0x1d, .y=0x3f, .sp=0xe9, .status=0xa0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01c9, .value=0xfe}, {.addr=0x43ea, .value=0x64}, {.addr=0x43eb, .value=0xc9},
    };
    const struct BusEvent events[] = {
        {.addr=0x43ea, .value=0x64, .type=IO_READ},
        {.addr=0x43eb, .value=0xc9, .type=IO_READ},
        {.addr=0x01c9, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0340", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0341) {
    const struct CPU_State initial_cpu = {.pc=0x7963, .a=0x97, .x=0x3f, .y=0x71, .sp=0x98, .status=0x06};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0067, .value=0x75}, {.addr=0x7963, .value=0x64}, {.addr=0x7964, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x7965, .a=0x97, .x=0x3f, .y=0x71, .sp=0x98, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0067, .value=0x75}, {.addr=0x7963, .value=0x64}, {.addr=0x7964, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x7963, .value=0x64, .type=IO_READ},
        {.addr=0x7964, .value=0x67, .type=IO_READ},
        {.addr=0x0067, .value=0x75, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0341", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0342) {
    const struct CPU_State initial_cpu = {.pc=0x826c, .a=0xc0, .x=0xbb, .y=0x55, .sp=0xd5, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0009, .value=0x82}, {.addr=0x826c, .value=0x64}, {.addr=0x826d, .value=0x09},
    };
    const struct CPU_State final_cpu = {.pc=0x826e, .a=0xc0, .x=0xbb, .y=0x55, .sp=0xd5, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x0009, .value=0x82}, {.addr=0x826c, .value=0x64}, {.addr=0x826d, .value=0x09},
    };
    const struct BusEvent events[] = {
        {.addr=0x826c, .value=0x64, .type=IO_READ},
        {.addr=0x826d, .value=0x09, .type=IO_READ},
        {.addr=0x0009, .value=0x82, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0342", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0343) {
    const struct CPU_State initial_cpu = {.pc=0xc39d, .a=0x5c, .x=0x60, .y=0x78, .sp=0x8b, .status=0x80};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0050, .value=0x1d}, {.addr=0xc39d, .value=0x64}, {.addr=0xc39e, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0xc39f, .a=0x5c, .x=0x60, .y=0x78, .sp=0x8b, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0050, .value=0x1d}, {.addr=0xc39d, .value=0x64}, {.addr=0xc39e, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0xc39d, .value=0x64, .type=IO_READ},
        {.addr=0xc39e, .value=0x50, .type=IO_READ},
        {.addr=0x0050, .value=0x1d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0343", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0344) {
    const struct CPU_State initial_cpu = {.pc=0x1aca, .a=0x6f, .x=0x02, .y=0xe5, .sp=0x4c, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0xfc}, {.addr=0x1aca, .value=0x64}, {.addr=0x1acb, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x1acc, .a=0x6f, .x=0x02, .y=0xe5, .sp=0x4c, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0xfc}, {.addr=0x1aca, .value=0x64}, {.addr=0x1acb, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x1aca, .value=0x64, .type=IO_READ},
        {.addr=0x1acb, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0344", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0345) {
    const struct CPU_State initial_cpu = {.pc=0x5564, .a=0x62, .x=0xd5, .y=0x28, .sp=0x04, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015f, .value=0xe3}, {.addr=0x5564, .value=0x64}, {.addr=0x5565, .value=0x5f},
    };
    const struct CPU_State final_cpu = {.pc=0x5566, .a=0x62, .x=0xd5, .y=0x28, .sp=0x04, .status=0x7c};
    const struct RamEntry final_ram[] = {
        {.addr=0x015f, .value=0xe3}, {.addr=0x5564, .value=0x64}, {.addr=0x5565, .value=0x5f},
    };
    const struct BusEvent events[] = {
        {.addr=0x5564, .value=0x64, .type=IO_READ},
        {.addr=0x5565, .value=0x5f, .type=IO_READ},
        {.addr=0x015f, .value=0xe3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0345", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0346) {
    const struct CPU_State initial_cpu = {.pc=0x9c83, .a=0x6b, .x=0x30, .y=0x01, .sp=0xed, .status=0xda};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008f, .value=0x94}, {.addr=0x9c83, .value=0x64}, {.addr=0x9c84, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x9c85, .a=0x6b, .x=0x30, .y=0x01, .sp=0xed, .status=0xd8};
    const struct RamEntry final_ram[] = {
        {.addr=0x008f, .value=0x94}, {.addr=0x9c83, .value=0x64}, {.addr=0x9c84, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x9c83, .value=0x64, .type=IO_READ},
        {.addr=0x9c84, .value=0x8f, .type=IO_READ},
        {.addr=0x008f, .value=0x94, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0346", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0347) {
    const struct CPU_State initial_cpu = {.pc=0x9255, .a=0xd3, .x=0xcf, .y=0xbe, .sp=0xe0, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0071, .value=0xad}, {.addr=0x9255, .value=0x64}, {.addr=0x9256, .value=0x71},
    };
    const struct CPU_State final_cpu = {.pc=0x9257, .a=0xd3, .x=0xcf, .y=0xbe, .sp=0xe0, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0071, .value=0xad}, {.addr=0x9255, .value=0x64}, {.addr=0x9256, .value=0x71},
    };
    const struct BusEvent events[] = {
        {.addr=0x9255, .value=0x64, .type=IO_READ},
        {.addr=0x9256, .value=0x71, .type=IO_READ},
        {.addr=0x0071, .value=0xad, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0347", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0348) {
    const struct CPU_State initial_cpu = {.pc=0x454d, .a=0xba, .x=0x85, .y=0x22, .sp=0x8e, .status=0x3c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0188, .value=0x95}, {.addr=0x454d, .value=0x64}, {.addr=0x454e, .value=0x88},
    };
    const struct CPU_State final_cpu = {.pc=0x454f, .a=0xba, .x=0x85, .y=0x22, .sp=0x8e, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0188, .value=0x95}, {.addr=0x454d, .value=0x64}, {.addr=0x454e, .value=0x88},
    };
    const struct BusEvent events[] = {
        {.addr=0x454d, .value=0x64, .type=IO_READ},
        {.addr=0x454e, .value=0x88, .type=IO_READ},
        {.addr=0x0188, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0348", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0349) {
    const struct CPU_State initial_cpu = {.pc=0x43e7, .a=0x46, .x=0x50, .y=0x38, .sp=0x39, .status=0xe5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0107, .value=0xe7}, {.addr=0x43e7, .value=0x64}, {.addr=0x43e8, .value=0x07},
    };
    const struct CPU_State final_cpu = {.pc=0x43e9, .a=0x46, .x=0x50, .y=0x38, .sp=0x39, .status=0x64};
    const struct RamEntry final_ram[] = {
        {.addr=0x0107, .value=0xe7}, {.addr=0x43e7, .value=0x64}, {.addr=0x43e8, .value=0x07},
    };
    const struct BusEvent events[] = {
        {.addr=0x43e7, .value=0x64, .type=IO_READ},
        {.addr=0x43e8, .value=0x07, .type=IO_READ},
        {.addr=0x0107, .value=0xe7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0349", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_034A) {
    const struct CPU_State initial_cpu = {.pc=0xc9e8, .a=0x8e, .x=0xef, .y=0x08, .sp=0xdd, .status=0x85};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00bf, .value=0x85}, {.addr=0xc9e8, .value=0x64}, {.addr=0xc9e9, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0xc9ea, .a=0x8e, .x=0xef, .y=0x08, .sp=0xdd, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x00bf, .value=0x85}, {.addr=0xc9e8, .value=0x64}, {.addr=0xc9e9, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0xc9e8, .value=0x64, .type=IO_READ},
        {.addr=0xc9e9, .value=0xbf, .type=IO_READ},
        {.addr=0x00bf, .value=0x85, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 034A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_034B) {
    const struct CPU_State initial_cpu = {.pc=0xd8b2, .a=0x34, .x=0x34, .y=0x98, .sp=0x11, .status=0x84};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0x7c}, {.addr=0xd8b2, .value=0x64}, {.addr=0xd8b3, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0xd8b4, .a=0x34, .x=0x34, .y=0x98, .sp=0x11, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0x7c}, {.addr=0xd8b2, .value=0x64}, {.addr=0xd8b3, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0xd8b2, .value=0x64, .type=IO_READ},
        {.addr=0xd8b3, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 034B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_034C) {
    const struct CPU_State initial_cpu = {.pc=0xb79c, .a=0xdc, .x=0x3e, .y=0x44, .sp=0x7f, .status=0xe6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d1, .value=0x23}, {.addr=0xb79c, .value=0x64}, {.addr=0xb79d, .value=0xd1},
    };
    const struct CPU_State final_cpu = {.pc=0xb79e, .a=0xdc, .x=0x3e, .y=0x44, .sp=0x7f, .status=0xe5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d1, .value=0x23}, {.addr=0xb79c, .value=0x64}, {.addr=0xb79d, .value=0xd1},
    };
    const struct BusEvent events[] = {
        {.addr=0xb79c, .value=0x64, .type=IO_READ},
        {.addr=0xb79d, .value=0xd1, .type=IO_READ},
        {.addr=0x01d1, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 034C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_034D) {
    const struct CPU_State initial_cpu = {.pc=0xb1f7, .a=0x9d, .x=0x75, .y=0xb7, .sp=0x57, .status=0xe2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0159, .value=0x42}, {.addr=0xb1f7, .value=0x64}, {.addr=0xb1f8, .value=0x59},
    };
    const struct CPU_State final_cpu = {.pc=0xb1f9, .a=0x9d, .x=0x75, .y=0xb7, .sp=0x57, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0159, .value=0x42}, {.addr=0xb1f7, .value=0x64}, {.addr=0xb1f8, .value=0x59},
    };
    const struct BusEvent events[] = {
        {.addr=0xb1f7, .value=0x64, .type=IO_READ},
        {.addr=0xb1f8, .value=0x59, .type=IO_READ},
        {.addr=0x0159, .value=0x42, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 034D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_034F) {
    const struct CPU_State initial_cpu = {.pc=0x0586, .a=0xfd, .x=0x22, .y=0x15, .sp=0x86, .status=0x86};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0xd5}, {.addr=0x0586, .value=0x64}, {.addr=0x0587, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x0588, .a=0xfd, .x=0x22, .y=0x15, .sp=0x86, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0xd5}, {.addr=0x0586, .value=0x64}, {.addr=0x0587, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x0586, .value=0x64, .type=IO_READ},
        {.addr=0x0587, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 034F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0350) {
    const struct CPU_State initial_cpu = {.pc=0x6aac, .a=0xf9, .x=0x0a, .y=0x90, .sp=0xc7, .status=0x72};
    const struct RamEntry initial_ram[] = {
        {.addr=0x019d, .value=0x95}, {.addr=0x6aac, .value=0x64}, {.addr=0x6aad, .value=0x9d},
    };
    const struct CPU_State final_cpu = {.pc=0x6aae, .a=0xf9, .x=0x0a, .y=0x90, .sp=0xc7, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x019d, .value=0x95}, {.addr=0x6aac, .value=0x64}, {.addr=0x6aad, .value=0x9d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6aac, .value=0x64, .type=IO_READ},
        {.addr=0x6aad, .value=0x9d, .type=IO_READ},
        {.addr=0x019d, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0350", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0351) {
    const struct CPU_State initial_cpu = {.pc=0xa304, .a=0x56, .x=0x26, .y=0xd2, .sp=0xb4, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0006, .value=0x6f}, {.addr=0xa304, .value=0x64}, {.addr=0xa305, .value=0x06},
    };
    const struct CPU_State final_cpu = {.pc=0xa306, .a=0x56, .x=0x26, .y=0xd2, .sp=0xb4, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0006, .value=0x6f}, {.addr=0xa304, .value=0x64}, {.addr=0xa305, .value=0x06},
    };
    const struct BusEvent events[] = {
        {.addr=0xa304, .value=0x64, .type=IO_READ},
        {.addr=0xa305, .value=0x06, .type=IO_READ},
        {.addr=0x0006, .value=0x6f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0351", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0352) {
    const struct CPU_State initial_cpu = {.pc=0x6e00, .a=0x05, .x=0x62, .y=0x54, .sp=0x3f, .status=0xff};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015d, .value=0x16}, {.addr=0x6e00, .value=0x64}, {.addr=0x6e01, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0x6e02, .a=0x05, .x=0x62, .y=0x54, .sp=0x3f, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x015d, .value=0x16}, {.addr=0x6e00, .value=0x64}, {.addr=0x6e01, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0x6e00, .value=0x64, .type=IO_READ},
        {.addr=0x6e01, .value=0x5d, .type=IO_READ},
        {.addr=0x015d, .value=0x16, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0352", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0353) {
    const struct CPU_State initial_cpu = {.pc=0x52c6, .a=0x81, .x=0x38, .y=0x57, .sp=0x33, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002f, .value=0x51}, {.addr=0x52c6, .value=0x64}, {.addr=0x52c7, .value=0x2f},
    };
    const struct CPU_State final_cpu = {.pc=0x52c8, .a=0x81, .x=0x38, .y=0x57, .sp=0x33, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x002f, .value=0x51}, {.addr=0x52c6, .value=0x64}, {.addr=0x52c7, .value=0x2f},
    };
    const struct BusEvent events[] = {
        {.addr=0x52c6, .value=0x64, .type=IO_READ},
        {.addr=0x52c7, .value=0x2f, .type=IO_READ},
        {.addr=0x002f, .value=0x51, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0353", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0354) {
    const struct CPU_State initial_cpu = {.pc=0x803c, .a=0x34, .x=0x08, .y=0x58, .sp=0x17, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003c, .value=0x5f}, {.addr=0x803c, .value=0x64}, {.addr=0x803d, .value=0x3c},
    };
    const struct CPU_State final_cpu = {.pc=0x803e, .a=0x34, .x=0x08, .y=0x58, .sp=0x17, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x003c, .value=0x5f}, {.addr=0x803c, .value=0x64}, {.addr=0x803d, .value=0x3c},
    };
    const struct BusEvent events[] = {
        {.addr=0x803c, .value=0x64, .type=IO_READ},
        {.addr=0x803d, .value=0x3c, .type=IO_READ},
        {.addr=0x003c, .value=0x5f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0354", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0355) {
    const struct CPU_State initial_cpu = {.pc=0xc175, .a=0x4b, .x=0x18, .y=0x6f, .sp=0xdb, .status=0x2a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01dc, .value=0x68}, {.addr=0xc175, .value=0x64}, {.addr=0xc176, .value=0xdc},
    };
    const struct CPU_State final_cpu = {.pc=0xc177, .a=0x4b, .x=0x18, .y=0x6f, .sp=0xdb, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01dc, .value=0x68}, {.addr=0xc175, .value=0x64}, {.addr=0xc176, .value=0xdc},
    };
    const struct BusEvent events[] = {
        {.addr=0xc175, .value=0x64, .type=IO_READ},
        {.addr=0xc176, .value=0xdc, .type=IO_READ},
        {.addr=0x01dc, .value=0x68, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0355", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0356) {
    const struct CPU_State initial_cpu = {.pc=0xe2f4, .a=0xf1, .x=0x13, .y=0xd3, .sp=0x54, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a0, .value=0xf9}, {.addr=0xe2f4, .value=0x64}, {.addr=0xe2f5, .value=0xa0},
    };
    const struct CPU_State final_cpu = {.pc=0xe2f6, .a=0xf1, .x=0x13, .y=0xd3, .sp=0x54, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a0, .value=0xf9}, {.addr=0xe2f4, .value=0x64}, {.addr=0xe2f5, .value=0xa0},
    };
    const struct BusEvent events[] = {
        {.addr=0xe2f4, .value=0x64, .type=IO_READ},
        {.addr=0xe2f5, .value=0xa0, .type=IO_READ},
        {.addr=0x00a0, .value=0xf9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0356", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0357) {
    const struct CPU_State initial_cpu = {.pc=0x79c4, .a=0x14, .x=0xd8, .y=0x17, .sp=0x85, .status=0xa9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0130, .value=0xb7}, {.addr=0x79c4, .value=0x64}, {.addr=0x79c5, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0x79c6, .a=0x14, .x=0xd8, .y=0x17, .sp=0x85, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x0130, .value=0xb7}, {.addr=0x79c4, .value=0x64}, {.addr=0x79c5, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0x79c4, .value=0x64, .type=IO_READ},
        {.addr=0x79c5, .value=0x30, .type=IO_READ},
        {.addr=0x0130, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0357", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0358) {
    const struct CPU_State initial_cpu = {.pc=0xed5d, .a=0xa2, .x=0x85, .y=0x91, .sp=0x6d, .status=0x13};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ea, .value=0x06}, {.addr=0xed5d, .value=0x64}, {.addr=0xed5e, .value=0xea},
    };
    const struct CPU_State final_cpu = {.pc=0xed5f, .a=0xa2, .x=0x85, .y=0x91, .sp=0x6d, .status=0x91};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ea, .value=0x06}, {.addr=0xed5d, .value=0x64}, {.addr=0xed5e, .value=0xea},
    };
    const struct BusEvent events[] = {
        {.addr=0xed5d, .value=0x64, .type=IO_READ},
        {.addr=0xed5e, .value=0xea, .type=IO_READ},
        {.addr=0x00ea, .value=0x06, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0358", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0359) {
    const struct CPU_State initial_cpu = {.pc=0x3e80, .a=0xdb, .x=0xf1, .y=0x61, .sp=0x5a, .status=0x2e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ab, .value=0x3c}, {.addr=0x3e80, .value=0x64}, {.addr=0x3e81, .value=0xab},
    };
    const struct CPU_State final_cpu = {.pc=0x3e82, .a=0xdb, .x=0xf1, .y=0x61, .sp=0x5a, .status=0xad};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ab, .value=0x3c}, {.addr=0x3e80, .value=0x64}, {.addr=0x3e81, .value=0xab},
    };
    const struct BusEvent events[] = {
        {.addr=0x3e80, .value=0x64, .type=IO_READ},
        {.addr=0x3e81, .value=0xab, .type=IO_READ},
        {.addr=0x01ab, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0359", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_035A) {
    const struct CPU_State initial_cpu = {.pc=0x700c, .a=0x48, .x=0x90, .y=0x90, .sp=0x85, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c6, .value=0x5a}, {.addr=0x700c, .value=0x64}, {.addr=0x700d, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x700e, .a=0x48, .x=0x90, .y=0x90, .sp=0x85, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c6, .value=0x5a}, {.addr=0x700c, .value=0x64}, {.addr=0x700d, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x700c, .value=0x64, .type=IO_READ},
        {.addr=0x700d, .value=0xc6, .type=IO_READ},
        {.addr=0x00c6, .value=0x5a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 035A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_035B) {
    const struct CPU_State initial_cpu = {.pc=0x8dc2, .a=0xd4, .x=0xed, .y=0xcb, .sp=0xdd, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x005e, .value=0xcb}, {.addr=0x8dc2, .value=0x64}, {.addr=0x8dc3, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x8dc4, .a=0xd4, .x=0xed, .y=0xcb, .sp=0xdd, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x005e, .value=0xcb}, {.addr=0x8dc2, .value=0x64}, {.addr=0x8dc3, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x8dc2, .value=0x64, .type=IO_READ},
        {.addr=0x8dc3, .value=0x5e, .type=IO_READ},
        {.addr=0x005e, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 035B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_035C) {
    const struct CPU_State initial_cpu = {.pc=0x22ee, .a=0x2e, .x=0x44, .y=0xe6, .sp=0x45, .status=0x93};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0063, .value=0xb6}, {.addr=0x22ee, .value=0x64}, {.addr=0x22ef, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x22f0, .a=0x2e, .x=0x44, .y=0xe6, .sp=0x45, .status=0x10};
    const struct RamEntry final_ram[] = {
        {.addr=0x0063, .value=0xb6}, {.addr=0x22ee, .value=0x64}, {.addr=0x22ef, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x22ee, .value=0x64, .type=IO_READ},
        {.addr=0x22ef, .value=0x63, .type=IO_READ},
        {.addr=0x0063, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 035C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_035D) {
    const struct CPU_State initial_cpu = {.pc=0x8d38, .a=0xea, .x=0x6d, .y=0x28, .sp=0xda, .status=0x1d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004d, .value=0xb9}, {.addr=0x8d38, .value=0x64}, {.addr=0x8d39, .value=0x4d},
    };
    const struct CPU_State final_cpu = {.pc=0x8d3a, .a=0xea, .x=0x6d, .y=0x28, .sp=0xda, .status=0x1d};
    const struct RamEntry final_ram[] = {
        {.addr=0x004d, .value=0xb9}, {.addr=0x8d38, .value=0x64}, {.addr=0x8d39, .value=0x4d},
    };
    const struct BusEvent events[] = {
        {.addr=0x8d38, .value=0x64, .type=IO_READ},
        {.addr=0x8d39, .value=0x4d, .type=IO_READ},
        {.addr=0x004d, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 035D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_035E) {
    const struct CPU_State initial_cpu = {.pc=0xe791, .a=0xe1, .x=0x09, .y=0x6d, .sp=0xfb, .status=0xbc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012b, .value=0xaf}, {.addr=0xe791, .value=0x64}, {.addr=0xe792, .value=0x2b},
    };
    const struct CPU_State final_cpu = {.pc=0xe793, .a=0xe1, .x=0x09, .y=0x6d, .sp=0xfb, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x012b, .value=0xaf}, {.addr=0xe791, .value=0x64}, {.addr=0xe792, .value=0x2b},
    };
    const struct BusEvent events[] = {
        {.addr=0xe791, .value=0x64, .type=IO_READ},
        {.addr=0xe792, .value=0x2b, .type=IO_READ},
        {.addr=0x012b, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 035E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_035F) {
    const struct CPU_State initial_cpu = {.pc=0x6db6, .a=0x9c, .x=0x44, .y=0x7f, .sp=0x74, .status=0x46};
    const struct RamEntry initial_ram[] = {
        {.addr=0x008a, .value=0xc3}, {.addr=0x6db6, .value=0x64}, {.addr=0x6db7, .value=0x8a},
    };
    const struct CPU_State final_cpu = {.pc=0x6db8, .a=0x9c, .x=0x44, .y=0x7f, .sp=0x74, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x008a, .value=0xc3}, {.addr=0x6db6, .value=0x64}, {.addr=0x6db7, .value=0x8a},
    };
    const struct BusEvent events[] = {
        {.addr=0x6db6, .value=0x64, .type=IO_READ},
        {.addr=0x6db7, .value=0x8a, .type=IO_READ},
        {.addr=0x008a, .value=0xc3, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 035F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0360) {
    const struct CPU_State initial_cpu = {.pc=0x20a9, .a=0xa6, .x=0x24, .y=0x4f, .sp=0x3d, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0xbe}, {.addr=0x20a9, .value=0x64}, {.addr=0x20aa, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0x20ab, .a=0xa6, .x=0x24, .y=0x4f, .sp=0x3d, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0xbe}, {.addr=0x20a9, .value=0x64}, {.addr=0x20aa, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0x20a9, .value=0x64, .type=IO_READ},
        {.addr=0x20aa, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0360", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0361) {
    const struct CPU_State initial_cpu = {.pc=0x0bcf, .a=0x7a, .x=0xac, .y=0xae, .sp=0x2a, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0195, .value=0xd8}, {.addr=0x0bcf, .value=0x64}, {.addr=0x0bd0, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0x0bd1, .a=0x7a, .x=0xac, .y=0xae, .sp=0x2a, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0195, .value=0xd8}, {.addr=0x0bcf, .value=0x64}, {.addr=0x0bd0, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0x0bcf, .value=0x64, .type=IO_READ},
        {.addr=0x0bd0, .value=0x95, .type=IO_READ},
        {.addr=0x0195, .value=0xd8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0361", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0362) {
    const struct CPU_State initial_cpu = {.pc=0x85d1, .a=0xf7, .x=0x24, .y=0xad, .sp=0xf2, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0x88}, {.addr=0x85d1, .value=0x64}, {.addr=0x85d2, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x85d3, .a=0xf7, .x=0x24, .y=0xad, .sp=0xf2, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0x88}, {.addr=0x85d1, .value=0x64}, {.addr=0x85d2, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x85d1, .value=0x64, .type=IO_READ},
        {.addr=0x85d2, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0x88, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0362", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0363) {
    const struct CPU_State initial_cpu = {.pc=0x6568, .a=0x29, .x=0x55, .y=0xf9, .sp=0x08, .status=0xae};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a3, .value=0xb6}, {.addr=0x6568, .value=0x64}, {.addr=0x6569, .value=0xa3},
    };
    const struct CPU_State final_cpu = {.pc=0x656a, .a=0x29, .x=0x55, .y=0xf9, .sp=0x08, .status=0x2c};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a3, .value=0xb6}, {.addr=0x6568, .value=0x64}, {.addr=0x6569, .value=0xa3},
    };
    const struct BusEvent events[] = {
        {.addr=0x6568, .value=0x64, .type=IO_READ},
        {.addr=0x6569, .value=0xa3, .type=IO_READ},
        {.addr=0x01a3, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0363", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0364) {
    const struct CPU_State initial_cpu = {.pc=0xa5e5, .a=0x91, .x=0x63, .y=0xd6, .sp=0xba, .status=0xb8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0113, .value=0xb4}, {.addr=0xa5e5, .value=0x64}, {.addr=0xa5e6, .value=0x13},
    };
    const struct CPU_State final_cpu = {.pc=0xa5e7, .a=0x91, .x=0x63, .y=0xd6, .sp=0xba, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0113, .value=0xb4}, {.addr=0xa5e5, .value=0x64}, {.addr=0xa5e6, .value=0x13},
    };
    const struct BusEvent events[] = {
        {.addr=0xa5e5, .value=0x64, .type=IO_READ},
        {.addr=0xa5e6, .value=0x13, .type=IO_READ},
        {.addr=0x0113, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0364", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0365) {
    const struct CPU_State initial_cpu = {.pc=0xb695, .a=0x40, .x=0x92, .y=0xc2, .sp=0xd9, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b4, .value=0x90}, {.addr=0xb695, .value=0x64}, {.addr=0xb696, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xb697, .a=0x40, .x=0x92, .y=0xc2, .sp=0xd9, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b4, .value=0x90}, {.addr=0xb695, .value=0x64}, {.addr=0xb696, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xb695, .value=0x64, .type=IO_READ},
        {.addr=0xb696, .value=0xb4, .type=IO_READ},
        {.addr=0x01b4, .value=0x90, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0365", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0366) {
    const struct CPU_State initial_cpu = {.pc=0x9ff9, .a=0x30, .x=0xbd, .y=0xd0, .sp=0xb8, .status=0xc9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0x25}, {.addr=0x9ff9, .value=0x64}, {.addr=0x9ffa, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0x9ffb, .a=0x30, .x=0xbd, .y=0xd0, .sp=0xb8, .status=0x49};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0x25}, {.addr=0x9ff9, .value=0x64}, {.addr=0x9ffa, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0x9ff9, .value=0x64, .type=IO_READ},
        {.addr=0x9ffa, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0x25, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0366", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0367) {
    const struct CPU_State initial_cpu = {.pc=0x3143, .a=0x2b, .x=0xa1, .y=0xee, .sp=0xb0, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0149, .value=0x7e}, {.addr=0x3143, .value=0x64}, {.addr=0x3144, .value=0x49},
    };
    const struct CPU_State final_cpu = {.pc=0x3145, .a=0x2b, .x=0xa1, .y=0xee, .sp=0xb0, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0149, .value=0x7e}, {.addr=0x3143, .value=0x64}, {.addr=0x3144, .value=0x49},
    };
    const struct BusEvent events[] = {
        {.addr=0x3143, .value=0x64, .type=IO_READ},
        {.addr=0x3144, .value=0x49, .type=IO_READ},
        {.addr=0x0149, .value=0x7e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0367", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0368) {
    const struct CPU_State initial_cpu = {.pc=0x3d38, .a=0x24, .x=0x41, .y=0x0b, .sp=0x6e, .status=0x6b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0x46}, {.addr=0x3d38, .value=0x64}, {.addr=0x3d39, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x3d3a, .a=0x24, .x=0x41, .y=0x0b, .sp=0x6e, .status=0xe8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0x46}, {.addr=0x3d38, .value=0x64}, {.addr=0x3d39, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x3d38, .value=0x64, .type=IO_READ},
        {.addr=0x3d39, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0368", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0369) {
    const struct CPU_State initial_cpu = {.pc=0x8ea2, .a=0xfa, .x=0xb5, .y=0x1a, .sp=0x0f, .status=0x20};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0150, .value=0x60}, {.addr=0x8ea2, .value=0x64}, {.addr=0x8ea3, .value=0x50},
    };
    const struct CPU_State final_cpu = {.pc=0x8ea4, .a=0xfa, .x=0xb5, .y=0x1a, .sp=0x0f, .status=0xa1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0150, .value=0x60}, {.addr=0x8ea2, .value=0x64}, {.addr=0x8ea3, .value=0x50},
    };
    const struct BusEvent events[] = {
        {.addr=0x8ea2, .value=0x64, .type=IO_READ},
        {.addr=0x8ea3, .value=0x50, .type=IO_READ},
        {.addr=0x0150, .value=0x60, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0369", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_036A) {
    const struct CPU_State initial_cpu = {.pc=0x1f5d, .a=0xaa, .x=0xe1, .y=0xcd, .sp=0x89, .status=0xfd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a7, .value=0xfe}, {.addr=0x1f5d, .value=0x64}, {.addr=0x1f5e, .value=0xa7},
    };
    const struct CPU_State final_cpu = {.pc=0x1f5f, .a=0xaa, .x=0xe1, .y=0xcd, .sp=0x89, .status=0xfc};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a7, .value=0xfe}, {.addr=0x1f5d, .value=0x64}, {.addr=0x1f5e, .value=0xa7},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f5d, .value=0x64, .type=IO_READ},
        {.addr=0x1f5e, .value=0xa7, .type=IO_READ},
        {.addr=0x01a7, .value=0xfe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 036A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_036B) {
    const struct CPU_State initial_cpu = {.pc=0xae35, .a=0x5f, .x=0x51, .y=0x00, .sp=0x1c, .status=0x6e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0155, .value=0x22}, {.addr=0xae35, .value=0x64}, {.addr=0xae36, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0xae37, .a=0x5f, .x=0x51, .y=0x00, .sp=0x1c, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0155, .value=0x22}, {.addr=0xae35, .value=0x64}, {.addr=0xae36, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0xae35, .value=0x64, .type=IO_READ},
        {.addr=0xae36, .value=0x55, .type=IO_READ},
        {.addr=0x0155, .value=0x22, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 036B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_036C) {
    const struct CPU_State initial_cpu = {.pc=0x4b75, .a=0xc4, .x=0x04, .y=0xf5, .sp=0x5c, .status=0x3e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016c, .value=0x13}, {.addr=0x4b75, .value=0x64}, {.addr=0x4b76, .value=0x6c},
    };
    const struct CPU_State final_cpu = {.pc=0x4b77, .a=0xc4, .x=0x04, .y=0xf5, .sp=0x5c, .status=0xbd};
    const struct RamEntry final_ram[] = {
        {.addr=0x016c, .value=0x13}, {.addr=0x4b75, .value=0x64}, {.addr=0x4b76, .value=0x6c},
    };
    const struct BusEvent events[] = {
        {.addr=0x4b75, .value=0x64, .type=IO_READ},
        {.addr=0x4b76, .value=0x6c, .type=IO_READ},
        {.addr=0x016c, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 036C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_036D) {
    const struct CPU_State initial_cpu = {.pc=0x73bb, .a=0xbc, .x=0x57, .y=0x90, .sp=0x74, .status=0xd5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000a, .value=0x8f}, {.addr=0x73bb, .value=0x64}, {.addr=0x73bc, .value=0x0a},
    };
    const struct CPU_State final_cpu = {.pc=0x73bd, .a=0xbc, .x=0x57, .y=0x90, .sp=0x74, .status=0x55};
    const struct RamEntry final_ram[] = {
        {.addr=0x000a, .value=0x8f}, {.addr=0x73bb, .value=0x64}, {.addr=0x73bc, .value=0x0a},
    };
    const struct BusEvent events[] = {
        {.addr=0x73bb, .value=0x64, .type=IO_READ},
        {.addr=0x73bc, .value=0x0a, .type=IO_READ},
        {.addr=0x000a, .value=0x8f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 036D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_036E) {
    const struct CPU_State initial_cpu = {.pc=0xf1eb, .a=0xbf, .x=0x14, .y=0x42, .sp=0xdf, .status=0x83};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0x0d}, {.addr=0xf1eb, .value=0x64}, {.addr=0xf1ec, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0xf1ed, .a=0xbf, .x=0x14, .y=0x42, .sp=0xdf, .status=0x81};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0x0d}, {.addr=0xf1eb, .value=0x64}, {.addr=0xf1ec, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0xf1eb, .value=0x64, .type=IO_READ},
        {.addr=0xf1ec, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0x0d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 036E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_036F) {
    const struct CPU_State initial_cpu = {.pc=0xa11e, .a=0xfa, .x=0xb2, .y=0xa1, .sp=0xf5, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0x34}, {.addr=0xa11e, .value=0x64}, {.addr=0xa11f, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0xa120, .a=0xfa, .x=0xb2, .y=0xa1, .sp=0xf5, .status=0xfd};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0x34}, {.addr=0xa11e, .value=0x64}, {.addr=0xa11f, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0xa11e, .value=0x64, .type=IO_READ},
        {.addr=0xa11f, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0x34, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 036F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0370) {
    const struct CPU_State initial_cpu = {.pc=0x71c0, .a=0x65, .x=0x1a, .y=0x7d, .sp=0x65, .status=0xb9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b2, .value=0xec}, {.addr=0x71c0, .value=0x64}, {.addr=0x71c1, .value=0xb2},
    };
    const struct CPU_State final_cpu = {.pc=0x71c2, .a=0x65, .x=0x1a, .y=0x7d, .sp=0x65, .status=0x38};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b2, .value=0xec}, {.addr=0x71c0, .value=0x64}, {.addr=0x71c1, .value=0xb2},
    };
    const struct BusEvent events[] = {
        {.addr=0x71c0, .value=0x64, .type=IO_READ},
        {.addr=0x71c1, .value=0xb2, .type=IO_READ},
        {.addr=0x01b2, .value=0xec, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0370", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0371) {
    const struct CPU_State initial_cpu = {.pc=0x7771, .a=0xd0, .x=0x66, .y=0xf8, .sp=0x40, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0005, .value=0xd9}, {.addr=0x7771, .value=0x64}, {.addr=0x7772, .value=0x05},
    };
    const struct CPU_State final_cpu = {.pc=0x7773, .a=0xd0, .x=0x66, .y=0xf8, .sp=0x40, .status=0x90};
    const struct RamEntry final_ram[] = {
        {.addr=0x0005, .value=0xd9}, {.addr=0x7771, .value=0x64}, {.addr=0x7772, .value=0x05},
    };
    const struct BusEvent events[] = {
        {.addr=0x7771, .value=0x64, .type=IO_READ},
        {.addr=0x7772, .value=0x05, .type=IO_READ},
        {.addr=0x0005, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0371", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0372) {
    const struct CPU_State initial_cpu = {.pc=0x34cf, .a=0x7c, .x=0xab, .y=0x6c, .sp=0x9e, .status=0x10};
    const struct RamEntry initial_ram[] = {
        {.addr=0x002d, .value=0x31}, {.addr=0x34cf, .value=0x64}, {.addr=0x34d0, .value=0x2d},
    };
    const struct CPU_State final_cpu = {.pc=0x34d1, .a=0x7c, .x=0xab, .y=0x6c, .sp=0x9e, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x002d, .value=0x31}, {.addr=0x34cf, .value=0x64}, {.addr=0x34d0, .value=0x2d},
    };
    const struct BusEvent events[] = {
        {.addr=0x34cf, .value=0x64, .type=IO_READ},
        {.addr=0x34d0, .value=0x2d, .type=IO_READ},
        {.addr=0x002d, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0372", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0373) {
    const struct CPU_State initial_cpu = {.pc=0x29f6, .a=0x48, .x=0xba, .y=0xe5, .sp=0x4a, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x016b, .value=0xb6}, {.addr=0x29f6, .value=0x64}, {.addr=0x29f7, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0x29f8, .a=0x48, .x=0xba, .y=0xe5, .sp=0x4a, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x016b, .value=0xb6}, {.addr=0x29f6, .value=0x64}, {.addr=0x29f7, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0x29f6, .value=0x64, .type=IO_READ},
        {.addr=0x29f7, .value=0x6b, .type=IO_READ},
        {.addr=0x016b, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0373", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0374) {
    const struct CPU_State initial_cpu = {.pc=0xb189, .a=0x4b, .x=0x22, .y=0x15, .sp=0x73, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0xd5}, {.addr=0xb189, .value=0x64}, {.addr=0xb18a, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0xb18b, .a=0x4b, .x=0x22, .y=0x15, .sp=0x73, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0xd5}, {.addr=0xb189, .value=0x64}, {.addr=0xb18a, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0xb189, .value=0x64, .type=IO_READ},
        {.addr=0xb18a, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0xd5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0374", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0375) {
    const struct CPU_State initial_cpu = {.pc=0xeda8, .a=0xef, .x=0xd0, .y=0x70, .sp=0x8d, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006a, .value=0x27}, {.addr=0xeda8, .value=0x64}, {.addr=0xeda9, .value=0x6a},
    };
    const struct CPU_State final_cpu = {.pc=0xedaa, .a=0xef, .x=0xd0, .y=0x70, .sp=0x8d, .status=0x95};
    const struct RamEntry final_ram[] = {
        {.addr=0x006a, .value=0x27}, {.addr=0xeda8, .value=0x64}, {.addr=0xeda9, .value=0x6a},
    };
    const struct BusEvent events[] = {
        {.addr=0xeda8, .value=0x64, .type=IO_READ},
        {.addr=0xeda9, .value=0x6a, .type=IO_READ},
        {.addr=0x006a, .value=0x27, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0375", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0376) {
    const struct CPU_State initial_cpu = {.pc=0x93a2, .a=0xb9, .x=0x4c, .y=0x39, .sp=0x37, .status=0x8b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0xf4}, {.addr=0x93a2, .value=0x64}, {.addr=0x93a3, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x93a4, .a=0xb9, .x=0x4c, .y=0x39, .sp=0x37, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0xf4}, {.addr=0x93a2, .value=0x64}, {.addr=0x93a3, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x93a2, .value=0x64, .type=IO_READ},
        {.addr=0x93a3, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0xf4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0376", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0377) {
    const struct CPU_State initial_cpu = {.pc=0xab08, .a=0x06, .x=0x78, .y=0x48, .sp=0xb7, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0082, .value=0xe6}, {.addr=0xab08, .value=0x64}, {.addr=0xab09, .value=0x82},
    };
    const struct CPU_State final_cpu = {.pc=0xab0a, .a=0x06, .x=0x78, .y=0x48, .sp=0xb7, .status=0x4c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0082, .value=0xe6}, {.addr=0xab08, .value=0x64}, {.addr=0xab09, .value=0x82},
    };
    const struct BusEvent events[] = {
        {.addr=0xab08, .value=0x64, .type=IO_READ},
        {.addr=0xab09, .value=0x82, .type=IO_READ},
        {.addr=0x0082, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0377", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0378) {
    const struct CPU_State initial_cpu = {.pc=0x9a64, .a=0x95, .x=0xec, .y=0x56, .sp=0xf0, .status=0x0a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e9, .value=0x41}, {.addr=0x9a64, .value=0x64}, {.addr=0x9a65, .value=0xe9},
    };
    const struct CPU_State final_cpu = {.pc=0x9a66, .a=0x95, .x=0xec, .y=0x56, .sp=0xf0, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e9, .value=0x41}, {.addr=0x9a64, .value=0x64}, {.addr=0x9a65, .value=0xe9},
    };
    const struct BusEvent events[] = {
        {.addr=0x9a64, .value=0x64, .type=IO_READ},
        {.addr=0x9a65, .value=0xe9, .type=IO_READ},
        {.addr=0x00e9, .value=0x41, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0378", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0379) {
    const struct CPU_State initial_cpu = {.pc=0xe7a7, .a=0x67, .x=0xf8, .y=0xd9, .sp=0x81, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0162, .value=0xa6}, {.addr=0xe7a7, .value=0x64}, {.addr=0xe7a8, .value=0x62},
    };
    const struct CPU_State final_cpu = {.pc=0xe7a9, .a=0x67, .x=0xf8, .y=0xd9, .sp=0x81, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x0162, .value=0xa6}, {.addr=0xe7a7, .value=0x64}, {.addr=0xe7a8, .value=0x62},
    };
    const struct BusEvent events[] = {
        {.addr=0xe7a7, .value=0x64, .type=IO_READ},
        {.addr=0xe7a8, .value=0x62, .type=IO_READ},
        {.addr=0x0162, .value=0xa6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0379", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_037A) {
    const struct CPU_State initial_cpu = {.pc=0xb207, .a=0x30, .x=0x67, .y=0x24, .sp=0x7b, .status=0x31};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015d, .value=0x04}, {.addr=0xb207, .value=0x64}, {.addr=0xb208, .value=0x5d},
    };
    const struct CPU_State final_cpu = {.pc=0xb209, .a=0x30, .x=0x67, .y=0x24, .sp=0x7b, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x015d, .value=0x04}, {.addr=0xb207, .value=0x64}, {.addr=0xb208, .value=0x5d},
    };
    const struct BusEvent events[] = {
        {.addr=0xb207, .value=0x64, .type=IO_READ},
        {.addr=0xb208, .value=0x5d, .type=IO_READ},
        {.addr=0x015d, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 037A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_037B) {
    const struct CPU_State initial_cpu = {.pc=0x6a68, .a=0x6d, .x=0x74, .y=0xe2, .sp=0x6c, .status=0x02};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c6, .value=0x11}, {.addr=0x6a68, .value=0x64}, {.addr=0x6a69, .value=0xc6},
    };
    const struct CPU_State final_cpu = {.pc=0x6a6a, .a=0x6d, .x=0x74, .y=0xe2, .sp=0x6c, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c6, .value=0x11}, {.addr=0x6a68, .value=0x64}, {.addr=0x6a69, .value=0xc6},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a68, .value=0x64, .type=IO_READ},
        {.addr=0x6a69, .value=0xc6, .type=IO_READ},
        {.addr=0x00c6, .value=0x11, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 037B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_037C) {
    const struct CPU_State initial_cpu = {.pc=0x39de, .a=0xb4, .x=0x07, .y=0xc6, .sp=0x9b, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0075, .value=0x6b}, {.addr=0x39de, .value=0x64}, {.addr=0x39df, .value=0x75},
    };
    const struct CPU_State final_cpu = {.pc=0x39e0, .a=0xb4, .x=0x07, .y=0xc6, .sp=0x9b, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x0075, .value=0x6b}, {.addr=0x39de, .value=0x64}, {.addr=0x39df, .value=0x75},
    };
    const struct BusEvent events[] = {
        {.addr=0x39de, .value=0x64, .type=IO_READ},
        {.addr=0x39df, .value=0x75, .type=IO_READ},
        {.addr=0x0075, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 037C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_037D) {
    const struct CPU_State initial_cpu = {.pc=0xf8ec, .a=0xcb, .x=0xbc, .y=0x3c, .sp=0x4a, .status=0xd3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b4, .value=0xe6}, {.addr=0xf8ec, .value=0x64}, {.addr=0xf8ed, .value=0xb4},
    };
    const struct CPU_State final_cpu = {.pc=0xf8ee, .a=0xcb, .x=0xbc, .y=0x3c, .sp=0x4a, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b4, .value=0xe6}, {.addr=0xf8ec, .value=0x64}, {.addr=0xf8ed, .value=0xb4},
    };
    const struct BusEvent events[] = {
        {.addr=0xf8ec, .value=0x64, .type=IO_READ},
        {.addr=0xf8ed, .value=0xb4, .type=IO_READ},
        {.addr=0x00b4, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 037D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_037E) {
    const struct CPU_State initial_cpu = {.pc=0x1387, .a=0xea, .x=0xd8, .y=0xae, .sp=0xc5, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d3, .value=0xa8}, {.addr=0x1387, .value=0x64}, {.addr=0x1388, .value=0xd3},
    };
    const struct CPU_State final_cpu = {.pc=0x1389, .a=0xea, .x=0xd8, .y=0xae, .sp=0xc5, .status=0x71};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d3, .value=0xa8}, {.addr=0x1387, .value=0x64}, {.addr=0x1388, .value=0xd3},
    };
    const struct BusEvent events[] = {
        {.addr=0x1387, .value=0x64, .type=IO_READ},
        {.addr=0x1388, .value=0xd3, .type=IO_READ},
        {.addr=0x01d3, .value=0xa8, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 037E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_037F) {
    const struct CPU_State initial_cpu = {.pc=0xfee9, .a=0xf7, .x=0xd6, .y=0x5f, .sp=0xe5, .status=0x73};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fc, .value=0x1a}, {.addr=0xfee9, .value=0x64}, {.addr=0xfeea, .value=0xfc},
    };
    const struct CPU_State final_cpu = {.pc=0xfeeb, .a=0xf7, .x=0xd6, .y=0x5f, .sp=0xe5, .status=0xf1};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fc, .value=0x1a}, {.addr=0xfee9, .value=0x64}, {.addr=0xfeea, .value=0xfc},
    };
    const struct BusEvent events[] = {
        {.addr=0xfee9, .value=0x64, .type=IO_READ},
        {.addr=0xfeea, .value=0xfc, .type=IO_READ},
        {.addr=0x01fc, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 037F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0380) {
    const struct CPU_State initial_cpu = {.pc=0x14bb, .a=0xae, .x=0x36, .y=0xe7, .sp=0x9a, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0019, .value=0xe5}, {.addr=0x14bb, .value=0x64}, {.addr=0x14bc, .value=0x19},
    };
    const struct CPU_State final_cpu = {.pc=0x14bd, .a=0xae, .x=0x36, .y=0xe7, .sp=0x9a, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0019, .value=0xe5}, {.addr=0x14bb, .value=0x64}, {.addr=0x14bc, .value=0x19},
    };
    const struct BusEvent events[] = {
        {.addr=0x14bb, .value=0x64, .type=IO_READ},
        {.addr=0x14bc, .value=0x19, .type=IO_READ},
        {.addr=0x0019, .value=0xe5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0380", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0381) {
    const struct CPU_State initial_cpu = {.pc=0x580d, .a=0xa9, .x=0x5a, .y=0xdd, .sp=0x5f, .status=0xec};
    const struct RamEntry initial_ram[] = {
        {.addr=0x015e, .value=0xea}, {.addr=0x580d, .value=0x64}, {.addr=0x580e, .value=0x5e},
    };
    const struct CPU_State final_cpu = {.pc=0x580f, .a=0xa9, .x=0x5a, .y=0xdd, .sp=0x5f, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x015e, .value=0xea}, {.addr=0x580d, .value=0x64}, {.addr=0x580e, .value=0x5e},
    };
    const struct BusEvent events[] = {
        {.addr=0x580d, .value=0x64, .type=IO_READ},
        {.addr=0x580e, .value=0x5e, .type=IO_READ},
        {.addr=0x015e, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0381", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0383) {
    const struct CPU_State initial_cpu = {.pc=0xb251, .a=0xf6, .x=0x1c, .y=0xfb, .sp=0xf4, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000f, .value=0xdb}, {.addr=0xb251, .value=0x64}, {.addr=0xb252, .value=0x0f},
    };
    const struct CPU_State final_cpu = {.pc=0xb253, .a=0xf6, .x=0x1c, .y=0xfb, .sp=0xf4, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000f, .value=0xdb}, {.addr=0xb251, .value=0x64}, {.addr=0xb252, .value=0x0f},
    };
    const struct BusEvent events[] = {
        {.addr=0xb251, .value=0x64, .type=IO_READ},
        {.addr=0xb252, .value=0x0f, .type=IO_READ},
        {.addr=0x000f, .value=0xdb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0383", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0384) {
    const struct CPU_State initial_cpu = {.pc=0x8867, .a=0x3a, .x=0xb1, .y=0x99, .sp=0x46, .status=0xa6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ac, .value=0xfc}, {.addr=0x8867, .value=0x64}, {.addr=0x8868, .value=0xac},
    };
    const struct CPU_State final_cpu = {.pc=0x8869, .a=0x3a, .x=0xb1, .y=0x99, .sp=0x46, .status=0x24};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ac, .value=0xfc}, {.addr=0x8867, .value=0x64}, {.addr=0x8868, .value=0xac},
    };
    const struct BusEvent events[] = {
        {.addr=0x8867, .value=0x64, .type=IO_READ},
        {.addr=0x8868, .value=0xac, .type=IO_READ},
        {.addr=0x01ac, .value=0xfc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0384", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0385) {
    const struct CPU_State initial_cpu = {.pc=0x982b, .a=0xda, .x=0x9e, .y=0xdf, .sp=0xac, .status=0x89};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0010, .value=0x61}, {.addr=0x982b, .value=0x64}, {.addr=0x982c, .value=0x10},
    };
    const struct CPU_State final_cpu = {.pc=0x982d, .a=0xda, .x=0x9e, .y=0xdf, .sp=0xac, .status=0x09};
    const struct RamEntry final_ram[] = {
        {.addr=0x0010, .value=0x61}, {.addr=0x982b, .value=0x64}, {.addr=0x982c, .value=0x10},
    };
    const struct BusEvent events[] = {
        {.addr=0x982b, .value=0x64, .type=IO_READ},
        {.addr=0x982c, .value=0x10, .type=IO_READ},
        {.addr=0x0010, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0385", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0386) {
    const struct CPU_State initial_cpu = {.pc=0xfdd1, .a=0xc4, .x=0x2a, .y=0x22, .sp=0xf9, .status=0x98};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007e, .value=0xfa}, {.addr=0xfdd1, .value=0x64}, {.addr=0xfdd2, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0xfdd3, .a=0xc4, .x=0x2a, .y=0x22, .sp=0xf9, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x007e, .value=0xfa}, {.addr=0xfdd1, .value=0x64}, {.addr=0xfdd2, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0xfdd1, .value=0x64, .type=IO_READ},
        {.addr=0xfdd2, .value=0x7e, .type=IO_READ},
        {.addr=0x007e, .value=0xfa, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0386", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0387) {
    const struct CPU_State initial_cpu = {.pc=0x770f, .a=0x45, .x=0xee, .y=0x77, .sp=0xcc, .status=0xac};
    const struct RamEntry initial_ram[] = {
        {.addr=0x012a, .value=0xba}, {.addr=0x770f, .value=0x64}, {.addr=0x7710, .value=0x2a},
    };
    const struct CPU_State final_cpu = {.pc=0x7711, .a=0x45, .x=0xee, .y=0x77, .sp=0xcc, .status=0xac};
    const struct RamEntry final_ram[] = {
        {.addr=0x012a, .value=0xba}, {.addr=0x770f, .value=0x64}, {.addr=0x7710, .value=0x2a},
    };
    const struct BusEvent events[] = {
        {.addr=0x770f, .value=0x64, .type=IO_READ},
        {.addr=0x7710, .value=0x2a, .type=IO_READ},
        {.addr=0x012a, .value=0xba, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0387", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0388) {
    const struct CPU_State initial_cpu = {.pc=0x111d, .a=0xba, .x=0xa7, .y=0x17, .sp=0x84, .status=0xdc};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00e6, .value=0x99}, {.addr=0x111d, .value=0x64}, {.addr=0x111e, .value=0xe6},
    };
    const struct CPU_State final_cpu = {.pc=0x111f, .a=0xba, .x=0xa7, .y=0x17, .sp=0x84, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00e6, .value=0x99}, {.addr=0x111d, .value=0x64}, {.addr=0x111e, .value=0xe6},
    };
    const struct BusEvent events[] = {
        {.addr=0x111d, .value=0x64, .type=IO_READ},
        {.addr=0x111e, .value=0xe6, .type=IO_READ},
        {.addr=0x00e6, .value=0x99, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0388", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0389) {
    const struct CPU_State initial_cpu = {.pc=0x5097, .a=0x6d, .x=0x53, .y=0x49, .sp=0xc3, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0156, .value=0x69}, {.addr=0x5097, .value=0x64}, {.addr=0x5098, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x5099, .a=0x6d, .x=0x53, .y=0x49, .sp=0xc3, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0156, .value=0x69}, {.addr=0x5097, .value=0x64}, {.addr=0x5098, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x5097, .value=0x64, .type=IO_READ},
        {.addr=0x5098, .value=0x56, .type=IO_READ},
        {.addr=0x0156, .value=0x69, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0389", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_038A) {
    const struct CPU_State initial_cpu = {.pc=0x9e8b, .a=0xd5, .x=0xe5, .y=0x63, .sp=0xbe, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0x61}, {.addr=0x9e8b, .value=0x64}, {.addr=0x9e8c, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x9e8d, .a=0xd5, .x=0xe5, .y=0x63, .sp=0xbe, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0x61}, {.addr=0x9e8b, .value=0x64}, {.addr=0x9e8c, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e8b, .value=0x64, .type=IO_READ},
        {.addr=0x9e8c, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0x61, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 038A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_038B) {
    const struct CPU_State initial_cpu = {.pc=0x7638, .a=0x0e, .x=0x39, .y=0x80, .sp=0x0d, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0xab}, {.addr=0x7638, .value=0x64}, {.addr=0x7639, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x763a, .a=0x0e, .x=0x39, .y=0x80, .sp=0x0d, .status=0x50};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0xab}, {.addr=0x7638, .value=0x64}, {.addr=0x7639, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x7638, .value=0x64, .type=IO_READ},
        {.addr=0x7639, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0xab, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 038B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_038C) {
    const struct CPU_State initial_cpu = {.pc=0xdd3e, .a=0xbf, .x=0xed, .y=0xda, .sp=0x01, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00d8, .value=0xcb}, {.addr=0xdd3e, .value=0x64}, {.addr=0xdd3f, .value=0xd8},
    };
    const struct CPU_State final_cpu = {.pc=0xdd40, .a=0xbf, .x=0xed, .y=0xda, .sp=0x01, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x00d8, .value=0xcb}, {.addr=0xdd3e, .value=0x64}, {.addr=0xdd3f, .value=0xd8},
    };
    const struct BusEvent events[] = {
        {.addr=0xdd3e, .value=0x64, .type=IO_READ},
        {.addr=0xdd3f, .value=0xd8, .type=IO_READ},
        {.addr=0x00d8, .value=0xcb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 038C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_038D) {
    const struct CPU_State initial_cpu = {.pc=0x7910, .a=0x6a, .x=0x33, .y=0xfc, .sp=0xce, .status=0x77};
    const struct RamEntry initial_ram[] = {
        {.addr=0x014a, .value=0xe6}, {.addr=0x7910, .value=0x64}, {.addr=0x7911, .value=0x4a},
    };
    const struct CPU_State final_cpu = {.pc=0x7912, .a=0x6a, .x=0x33, .y=0xfc, .sp=0xce, .status=0xf4};
    const struct RamEntry final_ram[] = {
        {.addr=0x014a, .value=0xe6}, {.addr=0x7910, .value=0x64}, {.addr=0x7911, .value=0x4a},
    };
    const struct BusEvent events[] = {
        {.addr=0x7910, .value=0x64, .type=IO_READ},
        {.addr=0x7911, .value=0x4a, .type=IO_READ},
        {.addr=0x014a, .value=0xe6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 038D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_038E) {
    const struct CPU_State initial_cpu = {.pc=0xc1d3, .a=0x0e, .x=0xef, .y=0x48, .sp=0xd5, .status=0x49};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0034, .value=0xcc}, {.addr=0xc1d3, .value=0x64}, {.addr=0xc1d4, .value=0x34},
    };
    const struct CPU_State final_cpu = {.pc=0xc1d5, .a=0x0e, .x=0xef, .y=0x48, .sp=0xd5, .status=0x48};
    const struct RamEntry final_ram[] = {
        {.addr=0x0034, .value=0xcc}, {.addr=0xc1d3, .value=0x64}, {.addr=0xc1d4, .value=0x34},
    };
    const struct BusEvent events[] = {
        {.addr=0xc1d3, .value=0x64, .type=IO_READ},
        {.addr=0xc1d4, .value=0x34, .type=IO_READ},
        {.addr=0x0034, .value=0xcc, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 038E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_038F) {
    const struct CPU_State initial_cpu = {.pc=0x7bcd, .a=0x54, .x=0x7f, .y=0x5b, .sp=0x80, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0100, .value=0xff}, {.addr=0x7bcd, .value=0x64}, {.addr=0x7bce, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x7bcf, .a=0x54, .x=0x7f, .y=0x5b, .sp=0x80, .status=0x78};
    const struct RamEntry final_ram[] = {
        {.addr=0x0100, .value=0xff}, {.addr=0x7bcd, .value=0x64}, {.addr=0x7bce, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x7bcd, .value=0x64, .type=IO_READ},
        {.addr=0x7bce, .value=0x00, .type=IO_READ},
        {.addr=0x0100, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 038F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0390) {
    const struct CPU_State initial_cpu = {.pc=0x09d1, .a=0xbc, .x=0xe6, .y=0xc0, .sp=0xea, .status=0xca};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c8, .value=0x1a}, {.addr=0x09d1, .value=0x64}, {.addr=0x09d2, .value=0xc8},
    };
    const struct CPU_State final_cpu = {.pc=0x09d3, .a=0xbc, .x=0xe6, .y=0xc0, .sp=0xea, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c8, .value=0x1a}, {.addr=0x09d1, .value=0x64}, {.addr=0x09d2, .value=0xc8},
    };
    const struct BusEvent events[] = {
        {.addr=0x09d1, .value=0x64, .type=IO_READ},
        {.addr=0x09d2, .value=0xc8, .type=IO_READ},
        {.addr=0x00c8, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0390", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0391) {
    const struct CPU_State initial_cpu = {.pc=0x1924, .a=0x0a, .x=0x5e, .y=0x27, .sp=0xf7, .status=0x07};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0086, .value=0x0e}, {.addr=0x1924, .value=0x64}, {.addr=0x1925, .value=0x86},
    };
    const struct CPU_State final_cpu = {.pc=0x1926, .a=0x0a, .x=0x5e, .y=0x27, .sp=0xf7, .status=0x84};
    const struct RamEntry final_ram[] = {
        {.addr=0x0086, .value=0x0e}, {.addr=0x1924, .value=0x64}, {.addr=0x1925, .value=0x86},
    };
    const struct BusEvent events[] = {
        {.addr=0x1924, .value=0x64, .type=IO_READ},
        {.addr=0x1925, .value=0x86, .type=IO_READ},
        {.addr=0x0086, .value=0x0e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0391", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0392) {
    const struct CPU_State initial_cpu = {.pc=0xe960, .a=0xe4, .x=0x35, .y=0xdd, .sp=0x6b, .status=0x42};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b7, .value=0x8d}, {.addr=0xe960, .value=0x64}, {.addr=0xe961, .value=0xb7},
    };
    const struct CPU_State final_cpu = {.pc=0xe962, .a=0xe4, .x=0x35, .y=0xdd, .sp=0x6b, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b7, .value=0x8d}, {.addr=0xe960, .value=0x64}, {.addr=0xe961, .value=0xb7},
    };
    const struct BusEvent events[] = {
        {.addr=0xe960, .value=0x64, .type=IO_READ},
        {.addr=0xe961, .value=0xb7, .type=IO_READ},
        {.addr=0x00b7, .value=0x8d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0392", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0393) {
    const struct CPU_State initial_cpu = {.pc=0x305e, .a=0xb6, .x=0x0d, .y=0xfd, .sp=0x28, .status=0xa7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0142, .value=0xc6}, {.addr=0x305e, .value=0x64}, {.addr=0x305f, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0x3060, .a=0xb6, .x=0x0d, .y=0xfd, .sp=0x28, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0142, .value=0xc6}, {.addr=0x305e, .value=0x64}, {.addr=0x305f, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0x305e, .value=0x64, .type=IO_READ},
        {.addr=0x305f, .value=0x42, .type=IO_READ},
        {.addr=0x0142, .value=0xc6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0393", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0394) {
    const struct CPU_State initial_cpu = {.pc=0xc8d2, .a=0x16, .x=0x97, .y=0xcb, .sp=0xda, .status=0xab};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01de, .value=0x80}, {.addr=0xc8d2, .value=0x64}, {.addr=0xc8d3, .value=0xde},
    };
    const struct CPU_State final_cpu = {.pc=0xc8d4, .a=0x16, .x=0x97, .y=0xcb, .sp=0xda, .status=0xa8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01de, .value=0x80}, {.addr=0xc8d2, .value=0x64}, {.addr=0xc8d3, .value=0xde},
    };
    const struct BusEvent events[] = {
        {.addr=0xc8d2, .value=0x64, .type=IO_READ},
        {.addr=0xc8d3, .value=0xde, .type=IO_READ},
        {.addr=0x01de, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0394", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0395) {
    const struct CPU_State initial_cpu = {.pc=0x931b, .a=0x02, .x=0xa8, .y=0xf5, .sp=0x8e, .status=0xd6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x003d, .value=0xc9}, {.addr=0x931b, .value=0x64}, {.addr=0x931c, .value=0x3d},
    };
    const struct CPU_State final_cpu = {.pc=0x931d, .a=0x02, .x=0xa8, .y=0xf5, .sp=0x8e, .status=0x54};
    const struct RamEntry final_ram[] = {
        {.addr=0x003d, .value=0xc9}, {.addr=0x931b, .value=0x64}, {.addr=0x931c, .value=0x3d},
    };
    const struct BusEvent events[] = {
        {.addr=0x931b, .value=0x64, .type=IO_READ},
        {.addr=0x931c, .value=0x3d, .type=IO_READ},
        {.addr=0x003d, .value=0xc9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0395", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0396) {
    const struct CPU_State initial_cpu = {.pc=0xf278, .a=0x76, .x=0x35, .y=0x8f, .sp=0x95, .status=0xef};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0195, .value=0xd4}, {.addr=0xf278, .value=0x64}, {.addr=0xf279, .value=0x95},
    };
    const struct CPU_State final_cpu = {.pc=0xf27a, .a=0x76, .x=0x35, .y=0x8f, .sp=0x95, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0195, .value=0xd4}, {.addr=0xf278, .value=0x64}, {.addr=0xf279, .value=0x95},
    };
    const struct BusEvent events[] = {
        {.addr=0xf278, .value=0x64, .type=IO_READ},
        {.addr=0xf279, .value=0x95, .type=IO_READ},
        {.addr=0x0195, .value=0xd4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0396", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0397) {
    const struct CPU_State initial_cpu = {.pc=0x4f55, .a=0x65, .x=0x0a, .y=0x4e, .sp=0x73, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009e, .value=0x21}, {.addr=0x4f55, .value=0x64}, {.addr=0x4f56, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x4f57, .a=0x65, .x=0x0a, .y=0x4e, .sp=0x73, .status=0x51};
    const struct RamEntry final_ram[] = {
        {.addr=0x009e, .value=0x21}, {.addr=0x4f55, .value=0x64}, {.addr=0x4f56, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x4f55, .value=0x64, .type=IO_READ},
        {.addr=0x4f56, .value=0x9e, .type=IO_READ},
        {.addr=0x009e, .value=0x21, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0397", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0398) {
    const struct CPU_State initial_cpu = {.pc=0xb78c, .a=0x0a, .x=0x5c, .y=0xcd, .sp=0x02, .status=0x7b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011d, .value=0x76}, {.addr=0xb78c, .value=0x64}, {.addr=0xb78d, .value=0x1d},
    };
    const struct CPU_State final_cpu = {.pc=0xb78e, .a=0x0a, .x=0x5c, .y=0xcd, .sp=0x02, .status=0xf8};
    const struct RamEntry final_ram[] = {
        {.addr=0x011d, .value=0x76}, {.addr=0xb78c, .value=0x64}, {.addr=0xb78d, .value=0x1d},
    };
    const struct BusEvent events[] = {
        {.addr=0xb78c, .value=0x64, .type=IO_READ},
        {.addr=0xb78d, .value=0x1d, .type=IO_READ},
        {.addr=0x011d, .value=0x76, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0398", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_0399) {
    const struct CPU_State initial_cpu = {.pc=0xfc0b, .a=0xce, .x=0x42, .y=0x2a, .sp=0x54, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x004c, .value=0x72}, {.addr=0xfc0b, .value=0x64}, {.addr=0xfc0c, .value=0x4c},
    };
    const struct CPU_State final_cpu = {.pc=0xfc0d, .a=0xce, .x=0x42, .y=0x2a, .sp=0x54, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x004c, .value=0x72}, {.addr=0xfc0b, .value=0x64}, {.addr=0xfc0c, .value=0x4c},
    };
    const struct BusEvent events[] = {
        {.addr=0xfc0b, .value=0x64, .type=IO_READ},
        {.addr=0xfc0c, .value=0x4c, .type=IO_READ},
        {.addr=0x004c, .value=0x72, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 0399", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_039A) {
    const struct CPU_State initial_cpu = {.pc=0x8cde, .a=0x66, .x=0x72, .y=0xbc, .sp=0x7e, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0163, .value=0x1a}, {.addr=0x8cde, .value=0x64}, {.addr=0x8cdf, .value=0x63},
    };
    const struct CPU_State final_cpu = {.pc=0x8ce0, .a=0x66, .x=0x72, .y=0xbc, .sp=0x7e, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0163, .value=0x1a}, {.addr=0x8cde, .value=0x64}, {.addr=0x8cdf, .value=0x63},
    };
    const struct BusEvent events[] = {
        {.addr=0x8cde, .value=0x64, .type=IO_READ},
        {.addr=0x8cdf, .value=0x63, .type=IO_READ},
        {.addr=0x0163, .value=0x1a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 039A", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_039B) {
    const struct CPU_State initial_cpu = {.pc=0x3867, .a=0xe8, .x=0x80, .y=0x2f, .sp=0x29, .status=0x56};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0067, .value=0x2f}, {.addr=0x3867, .value=0x64}, {.addr=0x3868, .value=0x67},
    };
    const struct CPU_State final_cpu = {.pc=0x3869, .a=0xe8, .x=0x80, .y=0x2f, .sp=0x29, .status=0xd5};
    const struct RamEntry final_ram[] = {
        {.addr=0x0067, .value=0x2f}, {.addr=0x3867, .value=0x64}, {.addr=0x3868, .value=0x67},
    };
    const struct BusEvent events[] = {
        {.addr=0x3867, .value=0x64, .type=IO_READ},
        {.addr=0x3868, .value=0x67, .type=IO_READ},
        {.addr=0x0067, .value=0x2f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 039B", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_039C) {
    const struct CPU_State initial_cpu = {.pc=0xb26d, .a=0xb0, .x=0x9c, .y=0x0b, .sp=0x90, .status=0xb7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a6, .value=0x9d}, {.addr=0xb26d, .value=0x64}, {.addr=0xb26e, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0xb26f, .a=0xb0, .x=0x9c, .y=0x0b, .sp=0x90, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a6, .value=0x9d}, {.addr=0xb26d, .value=0x64}, {.addr=0xb26e, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0xb26d, .value=0x64, .type=IO_READ},
        {.addr=0xb26e, .value=0xa6, .type=IO_READ},
        {.addr=0x01a6, .value=0x9d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 039C", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_039D) {
    const struct CPU_State initial_cpu = {.pc=0xd247, .a=0x4f, .x=0x32, .y=0xb9, .sp=0x29, .status=0xcf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0x3c}, {.addr=0xd247, .value=0x64}, {.addr=0xd248, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0xd249, .a=0x4f, .x=0x32, .y=0xb9, .sp=0x29, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0x3c}, {.addr=0xd247, .value=0x64}, {.addr=0xd248, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0xd247, .value=0x64, .type=IO_READ},
        {.addr=0xd248, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0x3c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 039D", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_039E) {
    const struct CPU_State initial_cpu = {.pc=0xe209, .a=0x3f, .x=0x5f, .y=0x23, .sp=0xe7, .status=0xaa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01a6, .value=0xff}, {.addr=0xe209, .value=0x64}, {.addr=0xe20a, .value=0xa6},
    };
    const struct CPU_State final_cpu = {.pc=0xe20b, .a=0x3f, .x=0x5f, .y=0x23, .sp=0xe7, .status=0x28};
    const struct RamEntry final_ram[] = {
        {.addr=0x01a6, .value=0xff}, {.addr=0xe209, .value=0x64}, {.addr=0xe20a, .value=0xa6},
    };
    const struct BusEvent events[] = {
        {.addr=0xe209, .value=0x64, .type=IO_READ},
        {.addr=0xe20a, .value=0xa6, .type=IO_READ},
        {.addr=0x01a6, .value=0xff, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 039E", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_039F) {
    const struct CPU_State initial_cpu = {.pc=0x2323, .a=0xf4, .x=0x61, .y=0xf4, .sp=0x6e, .status=0x04};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0035, .value=0xca}, {.addr=0x2323, .value=0x64}, {.addr=0x2324, .value=0x35},
    };
    const struct CPU_State final_cpu = {.pc=0x2325, .a=0xf4, .x=0x61, .y=0xf4, .sp=0x6e, .status=0x05};
    const struct RamEntry final_ram[] = {
        {.addr=0x0035, .value=0xca}, {.addr=0x2323, .value=0x64}, {.addr=0x2324, .value=0x35},
    };
    const struct BusEvent events[] = {
        {.addr=0x2323, .value=0x64, .type=IO_READ},
        {.addr=0x2324, .value=0x35, .type=IO_READ},
        {.addr=0x0035, .value=0xca, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 039F", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03A0) {
    const struct CPU_State initial_cpu = {.pc=0x86f3, .a=0xbc, .x=0x8b, .y=0x01, .sp=0xf4, .status=0xcd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0055, .value=0x20}, {.addr=0x86f3, .value=0x64}, {.addr=0x86f4, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x86f5, .a=0xbc, .x=0x8b, .y=0x01, .sp=0xf4, .status=0xcd};
    const struct RamEntry final_ram[] = {
        {.addr=0x0055, .value=0x20}, {.addr=0x86f3, .value=0x64}, {.addr=0x86f4, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x86f3, .value=0x64, .type=IO_READ},
        {.addr=0x86f4, .value=0x55, .type=IO_READ},
        {.addr=0x0055, .value=0x20, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03A0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03A1) {
    const struct CPU_State initial_cpu = {.pc=0x2ea2, .a=0x83, .x=0xe2, .y=0x29, .sp=0xae, .status=0x96};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a8, .value=0x23}, {.addr=0x2ea2, .value=0x64}, {.addr=0x2ea3, .value=0xa8},
    };
    const struct CPU_State final_cpu = {.pc=0x2ea4, .a=0x83, .x=0xe2, .y=0x29, .sp=0xae, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a8, .value=0x23}, {.addr=0x2ea2, .value=0x64}, {.addr=0x2ea3, .value=0xa8},
    };
    const struct BusEvent events[] = {
        {.addr=0x2ea2, .value=0x64, .type=IO_READ},
        {.addr=0x2ea3, .value=0xa8, .type=IO_READ},
        {.addr=0x00a8, .value=0x23, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03A1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03A2) {
    const struct CPU_State initial_cpu = {.pc=0xf961, .a=0x03, .x=0xd3, .y=0x9a, .sp=0x0d, .status=0x5d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ae, .value=0xc7}, {.addr=0xf961, .value=0x64}, {.addr=0xf962, .value=0xae},
    };
    const struct CPU_State final_cpu = {.pc=0xf963, .a=0x03, .x=0xd3, .y=0x9a, .sp=0x0d, .status=0x5c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ae, .value=0xc7}, {.addr=0xf961, .value=0x64}, {.addr=0xf962, .value=0xae},
    };
    const struct BusEvent events[] = {
        {.addr=0xf961, .value=0x64, .type=IO_READ},
        {.addr=0xf962, .value=0xae, .type=IO_READ},
        {.addr=0x00ae, .value=0xc7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03A2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03A3) {
    const struct CPU_State initial_cpu = {.pc=0x0635, .a=0x4e, .x=0x34, .y=0x34, .sp=0x76, .status=0xc7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c0, .value=0x3a}, {.addr=0x0635, .value=0x64}, {.addr=0x0636, .value=0xc0},
    };
    const struct CPU_State final_cpu = {.pc=0x0637, .a=0x4e, .x=0x34, .y=0x34, .sp=0x76, .status=0x45};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c0, .value=0x3a}, {.addr=0x0635, .value=0x64}, {.addr=0x0636, .value=0xc0},
    };
    const struct BusEvent events[] = {
        {.addr=0x0635, .value=0x64, .type=IO_READ},
        {.addr=0x0636, .value=0xc0, .type=IO_READ},
        {.addr=0x00c0, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03A3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03A4) {
    const struct CPU_State initial_cpu = {.pc=0x971a, .a=0xaf, .x=0x40, .y=0x46, .sp=0x96, .status=0x97};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0076, .value=0x9f}, {.addr=0x971a, .value=0x64}, {.addr=0x971b, .value=0x76},
    };
    const struct CPU_State final_cpu = {.pc=0x971c, .a=0xaf, .x=0x40, .y=0x46, .sp=0x96, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x0076, .value=0x9f}, {.addr=0x971a, .value=0x64}, {.addr=0x971b, .value=0x76},
    };
    const struct BusEvent events[] = {
        {.addr=0x971a, .value=0x64, .type=IO_READ},
        {.addr=0x971b, .value=0x76, .type=IO_READ},
        {.addr=0x0076, .value=0x9f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03A4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03A5) {
    const struct CPU_State initial_cpu = {.pc=0xf573, .a=0xb2, .x=0x07, .y=0xb9, .sp=0x10, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0x80}, {.addr=0xf573, .value=0x64}, {.addr=0xf574, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0xf575, .a=0xb2, .x=0x07, .y=0xb9, .sp=0x10, .status=0x15};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0x80}, {.addr=0xf573, .value=0x64}, {.addr=0xf574, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf573, .value=0x64, .type=IO_READ},
        {.addr=0xf574, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03A5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03A6) {
    const struct CPU_State initial_cpu = {.pc=0x3ec0, .a=0x92, .x=0xe7, .y=0x88, .sp=0x4e, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d9, .value=0x19}, {.addr=0x3ec0, .value=0x64}, {.addr=0x3ec1, .value=0xd9},
    };
    const struct CPU_State final_cpu = {.pc=0x3ec2, .a=0x92, .x=0xe7, .y=0x88, .sp=0x4e, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d9, .value=0x19}, {.addr=0x3ec0, .value=0x64}, {.addr=0x3ec1, .value=0xd9},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ec0, .value=0x64, .type=IO_READ},
        {.addr=0x3ec1, .value=0xd9, .type=IO_READ},
        {.addr=0x01d9, .value=0x19, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03A6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03A7) {
    const struct CPU_State initial_cpu = {.pc=0x7883, .a=0x79, .x=0x7b, .y=0xeb, .sp=0x60, .status=0x9a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000d, .value=0x1b}, {.addr=0x7883, .value=0x64}, {.addr=0x7884, .value=0x0d},
    };
    const struct CPU_State final_cpu = {.pc=0x7885, .a=0x79, .x=0x7b, .y=0xeb, .sp=0x60, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x000d, .value=0x1b}, {.addr=0x7883, .value=0x64}, {.addr=0x7884, .value=0x0d},
    };
    const struct BusEvent events[] = {
        {.addr=0x7883, .value=0x64, .type=IO_READ},
        {.addr=0x7884, .value=0x0d, .type=IO_READ},
        {.addr=0x000d, .value=0x1b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03A7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03A8) {
    const struct CPU_State initial_cpu = {.pc=0x0191, .a=0x2b, .x=0xff, .y=0xf0, .sp=0x79, .status=0xf8};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0155, .value=0x15}, {.addr=0x0191, .value=0x64}, {.addr=0x0192, .value=0x55},
    };
    const struct CPU_State final_cpu = {.pc=0x0193, .a=0x2b, .x=0xff, .y=0xf0, .sp=0x79, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x0155, .value=0x15}, {.addr=0x0191, .value=0x64}, {.addr=0x0192, .value=0x55},
    };
    const struct BusEvent events[] = {
        {.addr=0x0191, .value=0x64, .type=IO_READ},
        {.addr=0x0192, .value=0x55, .type=IO_READ},
        {.addr=0x0155, .value=0x15, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03A8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03A9) {
    const struct CPU_State initial_cpu = {.pc=0xd2bd, .a=0x49, .x=0x6b, .y=0xde, .sp=0x33, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0018, .value=0x56}, {.addr=0xd2bd, .value=0x64}, {.addr=0xd2be, .value=0x18},
    };
    const struct CPU_State final_cpu = {.pc=0xd2bf, .a=0x49, .x=0x6b, .y=0xde, .sp=0x33, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0018, .value=0x56}, {.addr=0xd2bd, .value=0x64}, {.addr=0xd2be, .value=0x18},
    };
    const struct BusEvent events[] = {
        {.addr=0xd2bd, .value=0x64, .type=IO_READ},
        {.addr=0xd2be, .value=0x18, .type=IO_READ},
        {.addr=0x0018, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03A9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03AA) {
    const struct CPU_State initial_cpu = {.pc=0x5440, .a=0x49, .x=0xdf, .y=0x1c, .sp=0x3d, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ec, .value=0x18}, {.addr=0x5440, .value=0x64}, {.addr=0x5441, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x5442, .a=0x49, .x=0xdf, .y=0x1c, .sp=0x3d, .status=0x25};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ec, .value=0x18}, {.addr=0x5440, .value=0x64}, {.addr=0x5441, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x5440, .value=0x64, .type=IO_READ},
        {.addr=0x5441, .value=0xec, .type=IO_READ},
        {.addr=0x01ec, .value=0x18, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03AA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03AB) {
    const struct CPU_State initial_cpu = {.pc=0x0a5e, .a=0x89, .x=0x4b, .y=0xbc, .sp=0xb4, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b9, .value=0x54}, {.addr=0x0a5e, .value=0x64}, {.addr=0x0a5f, .value=0xb9},
    };
    const struct CPU_State final_cpu = {.pc=0x0a60, .a=0x89, .x=0x4b, .y=0xbc, .sp=0xb4, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b9, .value=0x54}, {.addr=0x0a5e, .value=0x64}, {.addr=0x0a5f, .value=0xb9},
    };
    const struct BusEvent events[] = {
        {.addr=0x0a5e, .value=0x64, .type=IO_READ},
        {.addr=0x0a5f, .value=0xb9, .type=IO_READ},
        {.addr=0x01b9, .value=0x54, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03AB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03AC) {
    const struct CPU_State initial_cpu = {.pc=0xe488, .a=0xff, .x=0x18, .y=0xe2, .sp=0xe5, .status=0xc0};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0x55}, {.addr=0xe488, .value=0x64}, {.addr=0xe489, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0xe48a, .a=0xff, .x=0x18, .y=0xe2, .sp=0xe5, .status=0xc1};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0x55}, {.addr=0xe488, .value=0x64}, {.addr=0xe489, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0xe488, .value=0x64, .type=IO_READ},
        {.addr=0xe489, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0x55, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03AC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03AD) {
    const struct CPU_State initial_cpu = {.pc=0x61c0, .a=0xfa, .x=0x83, .y=0x35, .sp=0x3b, .status=0x4c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x009e, .value=0x83}, {.addr=0x61c0, .value=0x64}, {.addr=0x61c1, .value=0x9e},
    };
    const struct CPU_State final_cpu = {.pc=0x61c2, .a=0xfa, .x=0x83, .y=0x35, .sp=0x3b, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x009e, .value=0x83}, {.addr=0x61c0, .value=0x64}, {.addr=0x61c1, .value=0x9e},
    };
    const struct BusEvent events[] = {
        {.addr=0x61c0, .value=0x64, .type=IO_READ},
        {.addr=0x61c1, .value=0x9e, .type=IO_READ},
        {.addr=0x009e, .value=0x83, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03AD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03AE) {
    const struct CPU_State initial_cpu = {.pc=0xb8b0, .a=0xc3, .x=0xe6, .y=0x6a, .sp=0x07, .status=0x91};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0057, .value=0x4d}, {.addr=0xb8b0, .value=0x64}, {.addr=0xb8b1, .value=0x57},
    };
    const struct CPU_State final_cpu = {.pc=0xb8b2, .a=0xc3, .x=0xe6, .y=0x6a, .sp=0x07, .status=0x11};
    const struct RamEntry final_ram[] = {
        {.addr=0x0057, .value=0x4d}, {.addr=0xb8b0, .value=0x64}, {.addr=0xb8b1, .value=0x57},
    };
    const struct BusEvent events[] = {
        {.addr=0xb8b0, .value=0x64, .type=IO_READ},
        {.addr=0xb8b1, .value=0x57, .type=IO_READ},
        {.addr=0x0057, .value=0x4d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03AE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03AF) {
    const struct CPU_State initial_cpu = {.pc=0xdec8, .a=0xe9, .x=0x4d, .y=0xe5, .sp=0xbe, .status=0x79};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0x3b}, {.addr=0xdec8, .value=0x64}, {.addr=0xdec9, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0xdeca, .a=0xe9, .x=0x4d, .y=0xe5, .sp=0xbe, .status=0xf9};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0x3b}, {.addr=0xdec8, .value=0x64}, {.addr=0xdec9, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0xdec8, .value=0x64, .type=IO_READ},
        {.addr=0xdec9, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0x3b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03AF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03B0) {
    const struct CPU_State initial_cpu = {.pc=0x71a1, .a=0x8b, .x=0xba, .y=0x04, .sp=0x0e, .status=0x4b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x001c, .value=0x0a}, {.addr=0x71a1, .value=0x64}, {.addr=0x71a2, .value=0x1c},
    };
    const struct CPU_State final_cpu = {.pc=0x71a3, .a=0x8b, .x=0xba, .y=0x04, .sp=0x0e, .status=0xc9};
    const struct RamEntry final_ram[] = {
        {.addr=0x001c, .value=0x0a}, {.addr=0x71a1, .value=0x64}, {.addr=0x71a2, .value=0x1c},
    };
    const struct BusEvent events[] = {
        {.addr=0x71a1, .value=0x64, .type=IO_READ},
        {.addr=0x71a2, .value=0x1c, .type=IO_READ},
        {.addr=0x001c, .value=0x0a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03B0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03B1) {
    const struct CPU_State initial_cpu = {.pc=0x4179, .a=0xde, .x=0x7c, .y=0xf8, .sp=0x0c, .status=0x60};
    const struct RamEntry initial_ram[] = {
        {.addr=0x018f, .value=0xb4}, {.addr=0x4179, .value=0x64}, {.addr=0x417a, .value=0x8f},
    };
    const struct CPU_State final_cpu = {.pc=0x417b, .a=0xde, .x=0x7c, .y=0xf8, .sp=0x0c, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x018f, .value=0xb4}, {.addr=0x4179, .value=0x64}, {.addr=0x417a, .value=0x8f},
    };
    const struct BusEvent events[] = {
        {.addr=0x4179, .value=0x64, .type=IO_READ},
        {.addr=0x417a, .value=0x8f, .type=IO_READ},
        {.addr=0x018f, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03B1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03B2) {
    const struct CPU_State initial_cpu = {.pc=0xd6f4, .a=0x27, .x=0x3e, .y=0x06, .sp=0x01, .status=0xb2};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0x1e}, {.addr=0xd6f4, .value=0x64}, {.addr=0xd6f5, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0xd6f6, .a=0x27, .x=0x3e, .y=0x06, .sp=0x01, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0x1e}, {.addr=0xd6f4, .value=0x64}, {.addr=0xd6f5, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0xd6f4, .value=0x64, .type=IO_READ},
        {.addr=0xd6f5, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0x1e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03B2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03B3) {
    const struct CPU_State initial_cpu = {.pc=0x19ed, .a=0x3f, .x=0xf4, .y=0x7a, .sp=0x42, .status=0xc5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0015, .value=0x4a}, {.addr=0x19ed, .value=0x64}, {.addr=0x19ee, .value=0x15},
    };
    const struct CPU_State final_cpu = {.pc=0x19ef, .a=0x3f, .x=0xf4, .y=0x7a, .sp=0x42, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0015, .value=0x4a}, {.addr=0x19ed, .value=0x64}, {.addr=0x19ee, .value=0x15},
    };
    const struct BusEvent events[] = {
        {.addr=0x19ed, .value=0x64, .type=IO_READ},
        {.addr=0x19ee, .value=0x15, .type=IO_READ},
        {.addr=0x0015, .value=0x4a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03B3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03B4) {
    const struct CPU_State initial_cpu = {.pc=0x253e, .a=0x33, .x=0xa3, .y=0x44, .sp=0x10, .status=0x08};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007a, .value=0x3a}, {.addr=0x253e, .value=0x64}, {.addr=0x253f, .value=0x7a},
    };
    const struct CPU_State final_cpu = {.pc=0x2540, .a=0x33, .x=0xa3, .y=0x44, .sp=0x10, .status=0x88};
    const struct RamEntry final_ram[] = {
        {.addr=0x007a, .value=0x3a}, {.addr=0x253e, .value=0x64}, {.addr=0x253f, .value=0x7a},
    };
    const struct BusEvent events[] = {
        {.addr=0x253e, .value=0x64, .type=IO_READ},
        {.addr=0x253f, .value=0x7a, .type=IO_READ},
        {.addr=0x007a, .value=0x3a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03B4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03B5) {
    const struct CPU_State initial_cpu = {.pc=0x5100, .a=0x4b, .x=0xd3, .y=0x49, .sp=0x1c, .status=0xdf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0085, .value=0x0b}, {.addr=0x5100, .value=0x64}, {.addr=0x5101, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x5102, .a=0x4b, .x=0xd3, .y=0x49, .sp=0x1c, .status=0x5d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0085, .value=0x0b}, {.addr=0x5100, .value=0x64}, {.addr=0x5101, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x5100, .value=0x64, .type=IO_READ},
        {.addr=0x5101, .value=0x85, .type=IO_READ},
        {.addr=0x0085, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03B5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03B6) {
    const struct CPU_State initial_cpu = {.pc=0xc090, .a=0x0f, .x=0x39, .y=0xbe, .sp=0xce, .status=0x0e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0058, .value=0xee}, {.addr=0xc090, .value=0x64}, {.addr=0xc091, .value=0x58},
    };
    const struct CPU_State final_cpu = {.pc=0xc092, .a=0x0f, .x=0x39, .y=0xbe, .sp=0xce, .status=0x0c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0058, .value=0xee}, {.addr=0xc090, .value=0x64}, {.addr=0xc091, .value=0x58},
    };
    const struct BusEvent events[] = {
        {.addr=0xc090, .value=0x64, .type=IO_READ},
        {.addr=0xc091, .value=0x58, .type=IO_READ},
        {.addr=0x0058, .value=0xee, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03B6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03B7) {
    const struct CPU_State initial_cpu = {.pc=0x6537, .a=0x2c, .x=0x9e, .y=0xd5, .sp=0x28, .status=0x53};
    const struct RamEntry initial_ram[] = {
        {.addr=0x000c, .value=0x78}, {.addr=0x6537, .value=0x64}, {.addr=0x6538, .value=0x0c},
    };
    const struct CPU_State final_cpu = {.pc=0x6539, .a=0x2c, .x=0x9e, .y=0xd5, .sp=0x28, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x000c, .value=0x78}, {.addr=0x6537, .value=0x64}, {.addr=0x6538, .value=0x0c},
    };
    const struct BusEvent events[] = {
        {.addr=0x6537, .value=0x64, .type=IO_READ},
        {.addr=0x6538, .value=0x0c, .type=IO_READ},
        {.addr=0x000c, .value=0x78, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03B7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03B8) {
    const struct CPU_State initial_cpu = {.pc=0x2a82, .a=0xdc, .x=0xca, .y=0xae, .sp=0xaa, .status=0x9b};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b0, .value=0xc0}, {.addr=0x2a82, .value=0x64}, {.addr=0x2a83, .value=0xb0},
    };
    const struct CPU_State final_cpu = {.pc=0x2a84, .a=0xdc, .x=0xca, .y=0xae, .sp=0xaa, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b0, .value=0xc0}, {.addr=0x2a82, .value=0x64}, {.addr=0x2a83, .value=0xb0},
    };
    const struct BusEvent events[] = {
        {.addr=0x2a82, .value=0x64, .type=IO_READ},
        {.addr=0x2a83, .value=0xb0, .type=IO_READ},
        {.addr=0x00b0, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03B8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03B9) {
    const struct CPU_State initial_cpu = {.pc=0x06d2, .a=0xed, .x=0x98, .y=0x22, .sp=0xe4, .status=0x18};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00be, .value=0xb9}, {.addr=0x06d2, .value=0x64}, {.addr=0x06d3, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0x06d4, .a=0xed, .x=0x98, .y=0x22, .sp=0xe4, .status=0x19};
    const struct RamEntry final_ram[] = {
        {.addr=0x00be, .value=0xb9}, {.addr=0x06d2, .value=0x64}, {.addr=0x06d3, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0x06d2, .value=0x64, .type=IO_READ},
        {.addr=0x06d3, .value=0xbe, .type=IO_READ},
        {.addr=0x00be, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03B9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03BA) {
    const struct CPU_State initial_cpu = {.pc=0xec24, .a=0x9d, .x=0xd6, .y=0x0c, .sp=0x22, .status=0x50};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0xc5}, {.addr=0xec24, .value=0x64}, {.addr=0xec25, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0xec26, .a=0x9d, .x=0xd6, .y=0x0c, .sp=0x22, .status=0xd0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0xc5}, {.addr=0xec24, .value=0x64}, {.addr=0xec25, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0xec24, .value=0x64, .type=IO_READ},
        {.addr=0xec25, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0xc5, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03BA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03BB) {
    const struct CPU_State initial_cpu = {.pc=0x6f5b, .a=0xd5, .x=0xb3, .y=0x5e, .sp=0xf6, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01b3, .value=0x62}, {.addr=0x6f5b, .value=0x64}, {.addr=0x6f5c, .value=0xb3},
    };
    const struct CPU_State final_cpu = {.pc=0x6f5d, .a=0xd5, .x=0xb3, .y=0x5e, .sp=0xf6, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01b3, .value=0x62}, {.addr=0x6f5b, .value=0x64}, {.addr=0x6f5c, .value=0xb3},
    };
    const struct BusEvent events[] = {
        {.addr=0x6f5b, .value=0x64, .type=IO_READ},
        {.addr=0x6f5c, .value=0xb3, .type=IO_READ},
        {.addr=0x01b3, .value=0x62, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03BB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03BC) {
    const struct CPU_State initial_cpu = {.pc=0x0670, .a=0x0b, .x=0x2d, .y=0xa9, .sp=0x5e, .status=0x1a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b6, .value=0x46}, {.addr=0x0670, .value=0x64}, {.addr=0x0671, .value=0xb6},
    };
    const struct CPU_State final_cpu = {.pc=0x0672, .a=0x0b, .x=0x2d, .y=0xa9, .sp=0x5e, .status=0x98};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b6, .value=0x46}, {.addr=0x0670, .value=0x64}, {.addr=0x0671, .value=0xb6},
    };
    const struct BusEvent events[] = {
        {.addr=0x0670, .value=0x64, .type=IO_READ},
        {.addr=0x0671, .value=0xb6, .type=IO_READ},
        {.addr=0x00b6, .value=0x46, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03BC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03BD) {
    const struct CPU_State initial_cpu = {.pc=0x179b, .a=0x11, .x=0x81, .y=0x69, .sp=0xd5, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017b, .value=0xdf}, {.addr=0x179b, .value=0x64}, {.addr=0x179c, .value=0x7b},
    };
    const struct CPU_State final_cpu = {.pc=0x179d, .a=0x11, .x=0x81, .y=0x69, .sp=0xd5, .status=0x34};
    const struct RamEntry final_ram[] = {
        {.addr=0x017b, .value=0xdf}, {.addr=0x179b, .value=0x64}, {.addr=0x179c, .value=0x7b},
    };
    const struct BusEvent events[] = {
        {.addr=0x179b, .value=0x64, .type=IO_READ},
        {.addr=0x179c, .value=0x7b, .type=IO_READ},
        {.addr=0x017b, .value=0xdf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03BD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03BE) {
    const struct CPU_State initial_cpu = {.pc=0xe17c, .a=0x36, .x=0xb5, .y=0x12, .sp=0x4c, .status=0x40};
    const struct RamEntry initial_ram[] = {
        {.addr=0x006b, .value=0x56}, {.addr=0xe17c, .value=0x64}, {.addr=0xe17d, .value=0x6b},
    };
    const struct CPU_State final_cpu = {.pc=0xe17e, .a=0x36, .x=0xb5, .y=0x12, .sp=0x4c, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x006b, .value=0x56}, {.addr=0xe17c, .value=0x64}, {.addr=0xe17d, .value=0x6b},
    };
    const struct BusEvent events[] = {
        {.addr=0xe17c, .value=0x64, .type=IO_READ},
        {.addr=0xe17d, .value=0x6b, .type=IO_READ},
        {.addr=0x006b, .value=0x56, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03BE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03BF) {
    const struct CPU_State initial_cpu = {.pc=0xc18d, .a=0xec, .x=0xa4, .y=0x1c, .sp=0x8e, .status=0x75};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01d6, .value=0x89}, {.addr=0xc18d, .value=0x64}, {.addr=0xc18e, .value=0xd6},
    };
    const struct CPU_State final_cpu = {.pc=0xc18f, .a=0xec, .x=0xa4, .y=0x1c, .sp=0x8e, .status=0x75};
    const struct RamEntry final_ram[] = {
        {.addr=0x01d6, .value=0x89}, {.addr=0xc18d, .value=0x64}, {.addr=0xc18e, .value=0xd6},
    };
    const struct BusEvent events[] = {
        {.addr=0xc18d, .value=0x64, .type=IO_READ},
        {.addr=0xc18e, .value=0xd6, .type=IO_READ},
        {.addr=0x01d6, .value=0x89, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03BF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03C0) {
    const struct CPU_State initial_cpu = {.pc=0x6a9b, .a=0x44, .x=0x9b, .y=0xee, .sp=0xd0, .status=0x47};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00b5, .value=0xb7}, {.addr=0x6a9b, .value=0x64}, {.addr=0x6a9c, .value=0xb5},
    };
    const struct CPU_State final_cpu = {.pc=0x6a9d, .a=0x44, .x=0x9b, .y=0xee, .sp=0xd0, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x00b5, .value=0xb7}, {.addr=0x6a9b, .value=0x64}, {.addr=0x6a9c, .value=0xb5},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a9b, .value=0x64, .type=IO_READ},
        {.addr=0x6a9c, .value=0xb5, .type=IO_READ},
        {.addr=0x00b5, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03C0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03C1) {
    const struct CPU_State initial_cpu = {.pc=0xd274, .a=0x72, .x=0x87, .y=0x03, .sp=0x2d, .status=0x37};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01be, .value=0xb7}, {.addr=0xd274, .value=0x64}, {.addr=0xd275, .value=0xbe},
    };
    const struct CPU_State final_cpu = {.pc=0xd276, .a=0x72, .x=0x87, .y=0x03, .sp=0x2d, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x01be, .value=0xb7}, {.addr=0xd274, .value=0x64}, {.addr=0xd275, .value=0xbe},
    };
    const struct BusEvent events[] = {
        {.addr=0xd274, .value=0x64, .type=IO_READ},
        {.addr=0xd275, .value=0xbe, .type=IO_READ},
        {.addr=0x01be, .value=0xb7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03C1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03C2) {
    const struct CPU_State initial_cpu = {.pc=0x0ce7, .a=0x59, .x=0x4b, .y=0x9e, .sp=0xcc, .status=0x8c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0000, .value=0x13}, {.addr=0x0ce7, .value=0x64}, {.addr=0x0ce8, .value=0x00},
    };
    const struct CPU_State final_cpu = {.pc=0x0ce9, .a=0x59, .x=0x4b, .y=0x9e, .sp=0xcc, .status=0x0d};
    const struct RamEntry final_ram[] = {
        {.addr=0x0000, .value=0x13}, {.addr=0x0ce7, .value=0x64}, {.addr=0x0ce8, .value=0x00},
    };
    const struct BusEvent events[] = {
        {.addr=0x0ce7, .value=0x64, .type=IO_READ},
        {.addr=0x0ce8, .value=0x00, .type=IO_READ},
        {.addr=0x0000, .value=0x13, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03C2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03C3) {
    const struct CPU_State initial_cpu = {.pc=0xbe81, .a=0xd3, .x=0x4b, .y=0x5b, .sp=0x7e, .status=0xe7};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0178, .value=0x7b}, {.addr=0xbe81, .value=0x64}, {.addr=0xbe82, .value=0x78},
    };
    const struct CPU_State final_cpu = {.pc=0xbe83, .a=0xd3, .x=0x4b, .y=0x5b, .sp=0x7e, .status=0x65};
    const struct RamEntry final_ram[] = {
        {.addr=0x0178, .value=0x7b}, {.addr=0xbe81, .value=0x64}, {.addr=0xbe82, .value=0x78},
    };
    const struct BusEvent events[] = {
        {.addr=0xbe81, .value=0x64, .type=IO_READ},
        {.addr=0xbe82, .value=0x78, .type=IO_READ},
        {.addr=0x0178, .value=0x7b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03C3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03C4) {
    const struct CPU_State initial_cpu = {.pc=0xada1, .a=0xf6, .x=0x49, .y=0x8c, .sp=0x00, .status=0x7c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e3, .value=0xeb}, {.addr=0xada1, .value=0x64}, {.addr=0xada2, .value=0xe3},
    };
    const struct CPU_State final_cpu = {.pc=0xada3, .a=0xf6, .x=0x49, .y=0x8c, .sp=0x00, .status=0x7d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e3, .value=0xeb}, {.addr=0xada1, .value=0x64}, {.addr=0xada2, .value=0xe3},
    };
    const struct BusEvent events[] = {
        {.addr=0xada1, .value=0x64, .type=IO_READ},
        {.addr=0xada2, .value=0xe3, .type=IO_READ},
        {.addr=0x01e3, .value=0xeb, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03C4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03C5) {
    const struct CPU_State initial_cpu = {.pc=0x875a, .a=0xd5, .x=0x29, .y=0x9f, .sp=0xac, .status=0xde};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0017, .value=0xde}, {.addr=0x875a, .value=0x64}, {.addr=0x875b, .value=0x17},
    };
    const struct CPU_State final_cpu = {.pc=0x875c, .a=0xd5, .x=0x29, .y=0x9f, .sp=0xac, .status=0xdc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0017, .value=0xde}, {.addr=0x875a, .value=0x64}, {.addr=0x875b, .value=0x17},
    };
    const struct BusEvent events[] = {
        {.addr=0x875a, .value=0x64, .type=IO_READ},
        {.addr=0x875b, .value=0x17, .type=IO_READ},
        {.addr=0x0017, .value=0xde, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03C5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03C6) {
    const struct CPU_State initial_cpu = {.pc=0x6a79, .a=0x0a, .x=0x67, .y=0x96, .sp=0x11, .status=0x99};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ec, .value=0xaf}, {.addr=0x6a79, .value=0x64}, {.addr=0x6a7a, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x6a7b, .a=0x0a, .x=0x67, .y=0x96, .sp=0x11, .status=0x18};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ec, .value=0xaf}, {.addr=0x6a79, .value=0x64}, {.addr=0x6a7a, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x6a79, .value=0x64, .type=IO_READ},
        {.addr=0x6a7a, .value=0xec, .type=IO_READ},
        {.addr=0x00ec, .value=0xaf, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03C6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03C7) {
    const struct CPU_State initial_cpu = {.pc=0x7674, .a=0x9b, .x=0x19, .y=0x0d, .sp=0xd4, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0026, .value=0xea}, {.addr=0x7674, .value=0x64}, {.addr=0x7675, .value=0x26},
    };
    const struct CPU_State final_cpu = {.pc=0x7676, .a=0x9b, .x=0x19, .y=0x0d, .sp=0xd4, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0026, .value=0xea}, {.addr=0x7674, .value=0x64}, {.addr=0x7675, .value=0x26},
    };
    const struct BusEvent events[] = {
        {.addr=0x7674, .value=0x64, .type=IO_READ},
        {.addr=0x7675, .value=0x26, .type=IO_READ},
        {.addr=0x0026, .value=0xea, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03C7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03C8) {
    const struct CPU_State initial_cpu = {.pc=0xb023, .a=0x7a, .x=0x34, .y=0xe9, .sp=0xa7, .status=0xb4};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0161, .value=0xbd}, {.addr=0xb023, .value=0x64}, {.addr=0xb024, .value=0x61},
    };
    const struct CPU_State final_cpu = {.pc=0xb025, .a=0x7a, .x=0x34, .y=0xe9, .sp=0xa7, .status=0xb4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0161, .value=0xbd}, {.addr=0xb023, .value=0x64}, {.addr=0xb024, .value=0x61},
    };
    const struct BusEvent events[] = {
        {.addr=0xb023, .value=0x64, .type=IO_READ},
        {.addr=0xb024, .value=0x61, .type=IO_READ},
        {.addr=0x0161, .value=0xbd, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03C8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03C9) {
    const struct CPU_State initial_cpu = {.pc=0x3d92, .a=0x9c, .x=0x7b, .y=0x28, .sp=0x91, .status=0x33};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01e5, .value=0x29}, {.addr=0x3d92, .value=0x64}, {.addr=0x3d93, .value=0xe5},
    };
    const struct CPU_State final_cpu = {.pc=0x3d94, .a=0x9c, .x=0x7b, .y=0x28, .sp=0x91, .status=0x31};
    const struct RamEntry final_ram[] = {
        {.addr=0x01e5, .value=0x29}, {.addr=0x3d92, .value=0x64}, {.addr=0x3d93, .value=0xe5},
    };
    const struct BusEvent events[] = {
        {.addr=0x3d92, .value=0x64, .type=IO_READ},
        {.addr=0x3d93, .value=0xe5, .type=IO_READ},
        {.addr=0x01e5, .value=0x29, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03C9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03CA) {
    const struct CPU_State initial_cpu = {.pc=0x00ab, .a=0x42, .x=0xf4, .y=0x20, .sp=0x11, .status=0xb6};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00ab, .value=0x64}, {.addr=0x00ac, .value=0xf3}, {.addr=0x01f3, .value=0x3f},
    };
    const struct CPU_State final_cpu = {.pc=0x00ad, .a=0x42, .x=0xf4, .y=0x20, .sp=0x11, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x00ab, .value=0x64}, {.addr=0x00ac, .value=0xf3}, {.addr=0x01f3, .value=0x3f},
    };
    const struct BusEvent events[] = {
        {.addr=0x00ab, .value=0x64, .type=IO_READ},
        {.addr=0x00ac, .value=0xf3, .type=IO_READ},
        {.addr=0x01f3, .value=0x3f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03CA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03CB) {
    const struct CPU_State initial_cpu = {.pc=0xf125, .a=0x66, .x=0x07, .y=0x0a, .sp=0x8e, .status=0xc1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0046, .value=0x7c}, {.addr=0xf125, .value=0x64}, {.addr=0xf126, .value=0x46},
    };
    const struct CPU_State final_cpu = {.pc=0xf127, .a=0x66, .x=0x07, .y=0x0a, .sp=0x8e, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0046, .value=0x7c}, {.addr=0xf125, .value=0x64}, {.addr=0xf126, .value=0x46},
    };
    const struct BusEvent events[] = {
        {.addr=0xf125, .value=0x64, .type=IO_READ},
        {.addr=0xf126, .value=0x46, .type=IO_READ},
        {.addr=0x0046, .value=0x7c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03CB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03CC) {
    const struct CPU_State initial_cpu = {.pc=0x9e27, .a=0x5c, .x=0x0e, .y=0xad, .sp=0xf9, .status=0xb1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0177, .value=0x77}, {.addr=0x9e27, .value=0x64}, {.addr=0x9e28, .value=0x77},
    };
    const struct CPU_State final_cpu = {.pc=0x9e29, .a=0x5c, .x=0x0e, .y=0xad, .sp=0xf9, .status=0xb0};
    const struct RamEntry final_ram[] = {
        {.addr=0x0177, .value=0x77}, {.addr=0x9e27, .value=0x64}, {.addr=0x9e28, .value=0x77},
    };
    const struct BusEvent events[] = {
        {.addr=0x9e27, .value=0x64, .type=IO_READ},
        {.addr=0x9e28, .value=0x77, .type=IO_READ},
        {.addr=0x0177, .value=0x77, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03CC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03CD) {
    const struct CPU_State initial_cpu = {.pc=0x4d3b, .a=0x71, .x=0x7e, .y=0xaa, .sp=0xef, .status=0x82};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0036, .value=0x04}, {.addr=0x4d3b, .value=0x64}, {.addr=0x4d3c, .value=0x36},
    };
    const struct CPU_State final_cpu = {.pc=0x4d3d, .a=0x71, .x=0x7e, .y=0xaa, .sp=0xef, .status=0x01};
    const struct RamEntry final_ram[] = {
        {.addr=0x0036, .value=0x04}, {.addr=0x4d3b, .value=0x64}, {.addr=0x4d3c, .value=0x36},
    };
    const struct BusEvent events[] = {
        {.addr=0x4d3b, .value=0x64, .type=IO_READ},
        {.addr=0x4d3c, .value=0x36, .type=IO_READ},
        {.addr=0x0036, .value=0x04, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03CD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03CE) {
    const struct CPU_State initial_cpu = {.pc=0x3ef0, .a=0xdd, .x=0x6c, .y=0xee, .sp=0x16, .status=0xc3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0056, .value=0x95}, {.addr=0x3ef0, .value=0x64}, {.addr=0x3ef1, .value=0x56},
    };
    const struct CPU_State final_cpu = {.pc=0x3ef2, .a=0xdd, .x=0x6c, .y=0xee, .sp=0x16, .status=0x41};
    const struct RamEntry final_ram[] = {
        {.addr=0x0056, .value=0x95}, {.addr=0x3ef0, .value=0x64}, {.addr=0x3ef1, .value=0x56},
    };
    const struct BusEvent events[] = {
        {.addr=0x3ef0, .value=0x64, .type=IO_READ},
        {.addr=0x3ef1, .value=0x56, .type=IO_READ},
        {.addr=0x0056, .value=0x95, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03CE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03CF) {
    const struct CPU_State initial_cpu = {.pc=0x363d, .a=0x97, .x=0xb6, .y=0xe9, .sp=0x62, .status=0x27};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0185, .value=0xf7}, {.addr=0x363d, .value=0x64}, {.addr=0x363e, .value=0x85},
    };
    const struct CPU_State final_cpu = {.pc=0x363f, .a=0x97, .x=0xb6, .y=0xe9, .sp=0x62, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0185, .value=0xf7}, {.addr=0x363d, .value=0x64}, {.addr=0x363e, .value=0x85},
    };
    const struct BusEvent events[] = {
        {.addr=0x363d, .value=0x64, .type=IO_READ},
        {.addr=0x363e, .value=0x85, .type=IO_READ},
        {.addr=0x0185, .value=0xf7, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03CF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03D0) {
    const struct CPU_State initial_cpu = {.pc=0x2039, .a=0x2b, .x=0x86, .y=0x90, .sp=0x4f, .status=0x0c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00a9, .value=0x9c}, {.addr=0x2039, .value=0x64}, {.addr=0x203a, .value=0xa9},
    };
    const struct CPU_State final_cpu = {.pc=0x203b, .a=0x2b, .x=0x86, .y=0x90, .sp=0x4f, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x00a9, .value=0x9c}, {.addr=0x2039, .value=0x64}, {.addr=0x203a, .value=0xa9},
    };
    const struct BusEvent events[] = {
        {.addr=0x2039, .value=0x64, .type=IO_READ},
        {.addr=0x203a, .value=0xa9, .type=IO_READ},
        {.addr=0x00a9, .value=0x9c, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03D0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03D1) {
    const struct CPU_State initial_cpu = {.pc=0xa86d, .a=0x3b, .x=0xd1, .y=0x3c, .sp=0xc5, .status=0x41};
    const struct RamEntry initial_ram[] = {
        {.addr=0x007c, .value=0x84}, {.addr=0xa86d, .value=0x64}, {.addr=0xa86e, .value=0x7c},
    };
    const struct CPU_State final_cpu = {.pc=0xa86f, .a=0x3b, .x=0xd1, .y=0x3c, .sp=0xc5, .status=0xc0};
    const struct RamEntry final_ram[] = {
        {.addr=0x007c, .value=0x84}, {.addr=0xa86d, .value=0x64}, {.addr=0xa86e, .value=0x7c},
    };
    const struct BusEvent events[] = {
        {.addr=0xa86d, .value=0x64, .type=IO_READ},
        {.addr=0xa86e, .value=0x7c, .type=IO_READ},
        {.addr=0x007c, .value=0x84, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03D1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03D2) {
    const struct CPU_State initial_cpu = {.pc=0x61a4, .a=0x06, .x=0xd2, .y=0x16, .sp=0xe6, .status=0xe9};
    const struct RamEntry initial_ram[] = {
        {.addr=0x017e, .value=0x9a}, {.addr=0x61a4, .value=0x64}, {.addr=0x61a5, .value=0x7e},
    };
    const struct CPU_State final_cpu = {.pc=0x61a6, .a=0x06, .x=0xd2, .y=0x16, .sp=0xe6, .status=0x68};
    const struct RamEntry final_ram[] = {
        {.addr=0x017e, .value=0x9a}, {.addr=0x61a4, .value=0x64}, {.addr=0x61a5, .value=0x7e},
    };
    const struct BusEvent events[] = {
        {.addr=0x61a4, .value=0x64, .type=IO_READ},
        {.addr=0x61a5, .value=0x7e, .type=IO_READ},
        {.addr=0x017e, .value=0x9a, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03D2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03D3) {
    const struct CPU_State initial_cpu = {.pc=0xafa4, .a=0xc3, .x=0xc5, .y=0x4b, .sp=0x3f, .status=0xa5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0191, .value=0xd9}, {.addr=0xafa4, .value=0x64}, {.addr=0xafa5, .value=0x91},
    };
    const struct CPU_State final_cpu = {.pc=0xafa6, .a=0xc3, .x=0xc5, .y=0x4b, .sp=0x3f, .status=0xa4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0191, .value=0xd9}, {.addr=0xafa4, .value=0x64}, {.addr=0xafa5, .value=0x91},
    };
    const struct BusEvent events[] = {
        {.addr=0xafa4, .value=0x64, .type=IO_READ},
        {.addr=0xafa5, .value=0x91, .type=IO_READ},
        {.addr=0x0191, .value=0xd9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03D3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03D4) {
    const struct CPU_State initial_cpu = {.pc=0xb9fe, .a=0x4f, .x=0x38, .y=0xfc, .sp=0xc2, .status=0x4e};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0043, .value=0xc0}, {.addr=0xb9fe, .value=0x64}, {.addr=0xb9ff, .value=0x43},
    };
    const struct CPU_State final_cpu = {.pc=0xba00, .a=0x4f, .x=0x38, .y=0xfc, .sp=0xc2, .status=0xcc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0043, .value=0xc0}, {.addr=0xb9fe, .value=0x64}, {.addr=0xb9ff, .value=0x43},
    };
    const struct BusEvent events[] = {
        {.addr=0xb9fe, .value=0x64, .type=IO_READ},
        {.addr=0xb9ff, .value=0x43, .type=IO_READ},
        {.addr=0x0043, .value=0xc0, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03D4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03D5) {
    const struct CPU_State initial_cpu = {.pc=0x3bf6, .a=0xc1, .x=0xfd, .y=0x98, .sp=0x5c, .status=0x6c};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01df, .value=0x58}, {.addr=0x3bf6, .value=0x64}, {.addr=0x3bf7, .value=0xdf},
    };
    const struct CPU_State final_cpu = {.pc=0x3bf8, .a=0xc1, .x=0xfd, .y=0x98, .sp=0x5c, .status=0x6d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01df, .value=0x58}, {.addr=0x3bf6, .value=0x64}, {.addr=0x3bf7, .value=0xdf},
    };
    const struct BusEvent events[] = {
        {.addr=0x3bf6, .value=0x64, .type=IO_READ},
        {.addr=0x3bf7, .value=0xdf, .type=IO_READ},
        {.addr=0x01df, .value=0x58, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03D5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03D6) {
    const struct CPU_State initial_cpu = {.pc=0x5ce6, .a=0x44, .x=0x44, .y=0x44, .sp=0xfd, .status=0xf3};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ad, .value=0x5d}, {.addr=0x5ce6, .value=0x64}, {.addr=0x5ce7, .value=0xad},
    };
    const struct CPU_State final_cpu = {.pc=0x5ce8, .a=0x44, .x=0x44, .y=0x44, .sp=0xfd, .status=0xf0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ad, .value=0x5d}, {.addr=0x5ce6, .value=0x64}, {.addr=0x5ce7, .value=0xad},
    };
    const struct BusEvent events[] = {
        {.addr=0x5ce6, .value=0x64, .type=IO_READ},
        {.addr=0x5ce7, .value=0xad, .type=IO_READ},
        {.addr=0x01ad, .value=0x5d, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03D6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03D7) {
    const struct CPU_State initial_cpu = {.pc=0xe4a5, .a=0x4b, .x=0xae, .y=0x20, .sp=0x1a, .status=0x8d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0030, .value=0x9e}, {.addr=0xe4a5, .value=0x64}, {.addr=0xe4a6, .value=0x30},
    };
    const struct CPU_State final_cpu = {.pc=0xe4a7, .a=0x4b, .x=0xae, .y=0x20, .sp=0x1a, .status=0x8c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0030, .value=0x9e}, {.addr=0xe4a5, .value=0x64}, {.addr=0xe4a6, .value=0x30},
    };
    const struct BusEvent events[] = {
        {.addr=0xe4a5, .value=0x64, .type=IO_READ},
        {.addr=0xe4a6, .value=0x30, .type=IO_READ},
        {.addr=0x0030, .value=0x9e, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03D7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03D8) {
    const struct CPU_State initial_cpu = {.pc=0xf09c, .a=0x71, .x=0x6f, .y=0x40, .sp=0x54, .status=0xfa};
    const struct RamEntry initial_ram[] = {
        {.addr=0x011a, .value=0x59}, {.addr=0xf09c, .value=0x64}, {.addr=0xf09d, .value=0x1a},
    };
    const struct CPU_State final_cpu = {.pc=0xf09e, .a=0x71, .x=0x6f, .y=0x40, .sp=0x54, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x011a, .value=0x59}, {.addr=0xf09c, .value=0x64}, {.addr=0xf09d, .value=0x1a},
    };
    const struct BusEvent events[] = {
        {.addr=0xf09c, .value=0x64, .type=IO_READ},
        {.addr=0xf09d, .value=0x1a, .type=IO_READ},
        {.addr=0x011a, .value=0x59, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03D8", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03D9) {
    const struct CPU_State initial_cpu = {.pc=0x24a9, .a=0x93, .x=0x2f, .y=0xa6, .sp=0x11, .status=0xea};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0165, .value=0x0b}, {.addr=0x24a9, .value=0x64}, {.addr=0x24aa, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x24ab, .a=0x93, .x=0x2f, .y=0xa6, .sp=0x11, .status=0xe9};
    const struct RamEntry final_ram[] = {
        {.addr=0x0165, .value=0x0b}, {.addr=0x24a9, .value=0x64}, {.addr=0x24aa, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x24a9, .value=0x64, .type=IO_READ},
        {.addr=0x24aa, .value=0x65, .type=IO_READ},
        {.addr=0x0165, .value=0x0b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03D9", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03DA) {
    const struct CPU_State initial_cpu = {.pc=0xce46, .a=0x5f, .x=0xf1, .y=0x3e, .sp=0x8f, .status=0x94};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0001, .value=0x97}, {.addr=0xce46, .value=0x64}, {.addr=0xce47, .value=0x01},
    };
    const struct CPU_State final_cpu = {.pc=0xce48, .a=0x5f, .x=0xf1, .y=0x3e, .sp=0x8f, .status=0x94};
    const struct RamEntry final_ram[] = {
        {.addr=0x0001, .value=0x97}, {.addr=0xce46, .value=0x64}, {.addr=0xce47, .value=0x01},
    };
    const struct BusEvent events[] = {
        {.addr=0xce46, .value=0x64, .type=IO_READ},
        {.addr=0xce47, .value=0x01, .type=IO_READ},
        {.addr=0x0001, .value=0x97, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03DA", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03DB) {
    const struct CPU_State initial_cpu = {.pc=0x3a9e, .a=0x14, .x=0x07, .y=0xed, .sp=0x33, .status=0x3a};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fe, .value=0x6b}, {.addr=0x3a9e, .value=0x64}, {.addr=0x3a9f, .value=0xfe},
    };
    const struct CPU_State final_cpu = {.pc=0x3aa0, .a=0x14, .x=0x07, .y=0xed, .sp=0x33, .status=0xb8};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fe, .value=0x6b}, {.addr=0x3a9e, .value=0x64}, {.addr=0x3a9f, .value=0xfe},
    };
    const struct BusEvent events[] = {
        {.addr=0x3a9e, .value=0x64, .type=IO_READ},
        {.addr=0x3a9f, .value=0xfe, .type=IO_READ},
        {.addr=0x01fe, .value=0x6b, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03DB", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03DC) {
    const struct CPU_State initial_cpu = {.pc=0x4a46, .a=0xf9, .x=0xdb, .y=0xfc, .sp=0xa9, .status=0xbd};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01fd, .value=0xbe}, {.addr=0x4a46, .value=0x64}, {.addr=0x4a47, .value=0xfd},
    };
    const struct CPU_State final_cpu = {.pc=0x4a48, .a=0xf9, .x=0xdb, .y=0xfc, .sp=0xa9, .status=0x3d};
    const struct RamEntry final_ram[] = {
        {.addr=0x01fd, .value=0xbe}, {.addr=0x4a46, .value=0x64}, {.addr=0x4a47, .value=0xfd},
    };
    const struct BusEvent events[] = {
        {.addr=0x4a46, .value=0x64, .type=IO_READ},
        {.addr=0x4a47, .value=0xfd, .type=IO_READ},
        {.addr=0x01fd, .value=0xbe, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03DC", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03DD) {
    const struct CPU_State initial_cpu = {.pc=0x2f70, .a=0x07, .x=0xfc, .y=0x10, .sp=0xa6, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ec, .value=0x63}, {.addr=0x2f70, .value=0x64}, {.addr=0x2f71, .value=0xec},
    };
    const struct CPU_State final_cpu = {.pc=0x2f72, .a=0x07, .x=0xfc, .y=0x10, .sp=0xa6, .status=0xe0};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ec, .value=0x63}, {.addr=0x2f70, .value=0x64}, {.addr=0x2f71, .value=0xec},
    };
    const struct BusEvent events[] = {
        {.addr=0x2f70, .value=0x64, .type=IO_READ},
        {.addr=0x2f71, .value=0xec, .type=IO_READ},
        {.addr=0x01ec, .value=0x63, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03DD", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03DE) {
    const struct CPU_State initial_cpu = {.pc=0xf98f, .a=0x5b, .x=0x95, .y=0x88, .sp=0x16, .status=0x6d};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0179, .value=0xb6}, {.addr=0xf98f, .value=0x64}, {.addr=0xf990, .value=0x79},
    };
    const struct CPU_State final_cpu = {.pc=0xf991, .a=0x5b, .x=0x95, .y=0x88, .sp=0x16, .status=0xec};
    const struct RamEntry final_ram[] = {
        {.addr=0x0179, .value=0xb6}, {.addr=0xf98f, .value=0x64}, {.addr=0xf990, .value=0x79},
    };
    const struct BusEvent events[] = {
        {.addr=0xf98f, .value=0x64, .type=IO_READ},
        {.addr=0xf990, .value=0x79, .type=IO_READ},
        {.addr=0x0179, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03DE", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03DF) {
    const struct CPU_State initial_cpu = {.pc=0x0fb6, .a=0xbc, .x=0x8d, .y=0x7a, .sp=0xf4, .status=0xf5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01ef, .value=0x31}, {.addr=0x0fb6, .value=0x64}, {.addr=0x0fb7, .value=0xef},
    };
    const struct CPU_State final_cpu = {.pc=0x0fb8, .a=0xbc, .x=0x8d, .y=0x7a, .sp=0xf4, .status=0xf5};
    const struct RamEntry final_ram[] = {
        {.addr=0x01ef, .value=0x31}, {.addr=0x0fb6, .value=0x64}, {.addr=0x0fb7, .value=0xef},
    };
    const struct BusEvent events[] = {
        {.addr=0x0fb6, .value=0x64, .type=IO_READ},
        {.addr=0x0fb7, .value=0xef, .type=IO_READ},
        {.addr=0x01ef, .value=0x31, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03DF", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03E0) {
    const struct CPU_State initial_cpu = {.pc=0x1f55, .a=0xf4, .x=0xe6, .y=0x6e, .sp=0xd3, .status=0xce};
    const struct RamEntry initial_ram[] = {
        {.addr=0x00c2, .value=0x7f}, {.addr=0x1f55, .value=0x64}, {.addr=0x1f56, .value=0xc2},
    };
    const struct CPU_State final_cpu = {.pc=0x1f57, .a=0xf4, .x=0xe6, .y=0x6e, .sp=0xd3, .status=0x4d};
    const struct RamEntry final_ram[] = {
        {.addr=0x00c2, .value=0x7f}, {.addr=0x1f55, .value=0x64}, {.addr=0x1f56, .value=0xc2},
    };
    const struct BusEvent events[] = {
        {.addr=0x1f55, .value=0x64, .type=IO_READ},
        {.addr=0x1f56, .value=0xc2, .type=IO_READ},
        {.addr=0x00c2, .value=0x7f, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03E0", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03E1) {
    const struct CPU_State initial_cpu = {.pc=0xe245, .a=0xad, .x=0x0c, .y=0xe3, .sp=0x24, .status=0xb5};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0183, .value=0x37}, {.addr=0xe245, .value=0x64}, {.addr=0xe246, .value=0x83},
    };
    const struct CPU_State final_cpu = {.pc=0xe247, .a=0xad, .x=0x0c, .y=0xe3, .sp=0x24, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x0183, .value=0x37}, {.addr=0xe245, .value=0x64}, {.addr=0xe246, .value=0x83},
    };
    const struct BusEvent events[] = {
        {.addr=0xe245, .value=0x64, .type=IO_READ},
        {.addr=0xe246, .value=0x83, .type=IO_READ},
        {.addr=0x0183, .value=0x37, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03E1", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03E2) {
    const struct CPU_State initial_cpu = {.pc=0x3839, .a=0x88, .x=0xf2, .y=0x66, .sp=0x90, .status=0x36};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bf, .value=0x45}, {.addr=0x3839, .value=0x64}, {.addr=0x383a, .value=0xbf},
    };
    const struct CPU_State final_cpu = {.pc=0x383b, .a=0x88, .x=0xf2, .y=0x66, .sp=0x90, .status=0x35};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bf, .value=0x45}, {.addr=0x3839, .value=0x64}, {.addr=0x383a, .value=0xbf},
    };
    const struct BusEvent events[] = {
        {.addr=0x3839, .value=0x64, .type=IO_READ},
        {.addr=0x383a, .value=0xbf, .type=IO_READ},
        {.addr=0x01bf, .value=0x45, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03E2", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03E3) {
    const struct CPU_State initial_cpu = {.pc=0x2e35, .a=0xc6, .x=0xc3, .y=0x71, .sp=0x3f, .status=0xe1};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0165, .value=0xb9}, {.addr=0x2e35, .value=0x64}, {.addr=0x2e36, .value=0x65},
    };
    const struct CPU_State final_cpu = {.pc=0x2e37, .a=0xc6, .x=0xc3, .y=0x71, .sp=0x3f, .status=0x61};
    const struct RamEntry final_ram[] = {
        {.addr=0x0165, .value=0xb9}, {.addr=0x2e35, .value=0x64}, {.addr=0x2e36, .value=0x65},
    };
    const struct BusEvent events[] = {
        {.addr=0x2e35, .value=0x64, .type=IO_READ},
        {.addr=0x2e36, .value=0x65, .type=IO_READ},
        {.addr=0x0165, .value=0xb9, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03E3", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03E4) {
    const struct CPU_State initial_cpu = {.pc=0x6fbc, .a=0x35, .x=0x88, .y=0x74, .sp=0xa3, .status=0xbf};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0187, .value=0x70}, {.addr=0x6fbc, .value=0x64}, {.addr=0x6fbd, .value=0x87},
    };
    const struct CPU_State final_cpu = {.pc=0x6fbe, .a=0x35, .x=0x88, .y=0x74, .sp=0xa3, .status=0xbc};
    const struct RamEntry final_ram[] = {
        {.addr=0x0187, .value=0x70}, {.addr=0x6fbc, .value=0x64}, {.addr=0x6fbd, .value=0x87},
    };
    const struct BusEvent events[] = {
        {.addr=0x6fbc, .value=0x64, .type=IO_READ},
        {.addr=0x6fbd, .value=0x87, .type=IO_READ},
        {.addr=0x0187, .value=0x70, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03E4", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03E5) {
    const struct CPU_State initial_cpu = {.pc=0xc8cf, .a=0x8a, .x=0x03, .y=0x78, .sp=0x67, .status=0xfb};
    const struct RamEntry initial_ram[] = {
        {.addr=0x01bd, .value=0x80}, {.addr=0xc8cf, .value=0x64}, {.addr=0xc8d0, .value=0xbd},
    };
    const struct CPU_State final_cpu = {.pc=0xc8d1, .a=0x8a, .x=0x03, .y=0x78, .sp=0x67, .status=0x79};
    const struct RamEntry final_ram[] = {
        {.addr=0x01bd, .value=0x80}, {.addr=0xc8cf, .value=0x64}, {.addr=0xc8d0, .value=0xbd},
    };
    const struct BusEvent events[] = {
        {.addr=0xc8cf, .value=0x64, .type=IO_READ},
        {.addr=0xc8d0, .value=0xbd, .type=IO_READ},
        {.addr=0x01bd, .value=0x80, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03E5", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03E6) {
    const struct CPU_State initial_cpu = {.pc=0x39e9, .a=0xb5, .x=0x8d, .y=0x2c, .sp=0x72, .status=0x9f};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0025, .value=0xb6}, {.addr=0x39e9, .value=0x64}, {.addr=0x39ea, .value=0x25},
    };
    const struct CPU_State final_cpu = {.pc=0x39eb, .a=0xb5, .x=0x8d, .y=0x2c, .sp=0x72, .status=0x9c};
    const struct RamEntry final_ram[] = {
        {.addr=0x0025, .value=0xb6}, {.addr=0x39e9, .value=0x64}, {.addr=0x39ea, .value=0x25},
    };
    const struct BusEvent events[] = {
        {.addr=0x39e9, .value=0x64, .type=IO_READ},
        {.addr=0x39ea, .value=0x25, .type=IO_READ},
        {.addr=0x0025, .value=0xb6, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03E6", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST(SingleStepTests_64, _64_03E7) {
    const struct CPU_State initial_cpu = {.pc=0xc9cf, .a=0x98, .x=0x20, .y=0x81, .sp=0x95, .status=0x45};
    const struct RamEntry initial_ram[] = {
        {.addr=0x0042, .value=0xb4}, {.addr=0xc9cf, .value=0x64}, {.addr=0xc9d0, .value=0x42},
    };
    const struct CPU_State final_cpu = {.pc=0xc9d1, .a=0x98, .x=0x20, .y=0x81, .sp=0x95, .status=0xc4};
    const struct RamEntry final_ram[] = {
        {.addr=0x0042, .value=0xb4}, {.addr=0xc9cf, .value=0x64}, {.addr=0xc9d0, .value=0x42},
    };
    const struct BusEvent events[] = {
        {.addr=0xc9cf, .value=0x64, .type=IO_READ},
        {.addr=0xc9d0, .value=0x42, .type=IO_READ},
        {.addr=0x0042, .value=0xb4, .type=IO_READ},
    };
    struct SPC_State state = setup_state(&initial_cpu, initial_ram, sizeof(initial_ram)/sizeof(*initial_ram));
    run_and_check("64 03E7", &state, &final_cpu, final_ram, sizeof(final_ram)/sizeof(*final_ram), events, sizeof(events)/sizeof(*events), utest_result);
}

UTEST_MAIN()
