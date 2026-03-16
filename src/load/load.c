#include "load.h"

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/fcntl.h>
#include <sysexits.h>
#include <unistd.h>

#include "cpu/cpu.h"
#include "dsp/dsp.h"

#include "state.h"
#include "utils.h"

// failures to read (exact amount of) bytes are always fatal
static bool try_read(int fd, void* buffer, size_t sz)
{
    return read(fd, buffer, sz) == (ssize_t)sz;
}

const uint8_t ipl_rom[64] = {
    0xCD, 0xEF, 0xBD, 0xE8, 0x00, 0xC6, 0x1D, 0xD0, 0xFC, 0x8F, 0xAA,
    0xF4, 0x8F, 0xBB, 0xF5, 0x78, 0xCC, 0xF4, 0xD0, 0xFB, 0x2F, 0x19,
    0xEB, 0xF4, 0xD0, 0xFC, 0x7E, 0xF4, 0xD0, 0x0B, 0xE4, 0xF5, 0xCB,
    0xF4, 0xD7, 0x00, 0xFC, 0xD0, 0xF3, 0xAB, 0x01, 0x10, 0xEF, 0x7E,
    0xF4, 0x10, 0xEB, 0xBA, 0xF6, 0xDA, 0x00, 0xBA, 0xF4, 0xC4, 0xF4,
    0xDD, 0x5D, 0xD0, 0xDB, 0x1F, 0x00, 0x00, 0xC0, 0xFF,
};

void parse_id666(const uint8_t* header)
{
    char title[33] = {0};
    char game[33] = {0};
    char artist[33] = {0};

    memcpy(title, header + 0x2E, 32);
    memcpy(game, header + 0x4E, 32);
    memcpy(artist, header + 0xB1, 32);

    // 2. Detect Format: Text vs Binary
    // Check if the 'seconds' field at 0xA9 contains a non-digit
    // Text format stores "120", Binary stores 0x78 0x00 0x00
    bool is_binary = false;
    for (size_t i = 0; i < 3; i++) {
        if (header[0xA9 + i] != 0 && !isdigit(header[0xA9 + i])) {
            is_binary = true;
            break;
        }
    }

    uint32_t seconds_to_play;
    uint32_t fade_ms;

    if (is_binary) {
        // LE binary
        seconds_to_play = (uint32_t)header[0xA9] |
                          ((uint32_t)header[0xAA] << 8) |
                          ((uint32_t)header[0xAB] << 16);
        fade_ms = (uint32_t)header[0xAC] | ((uint32_t)header[0xAD] << 8) |
                  ((uint32_t)header[0xAE] << 16) |
                  ((uint32_t)header[0xAF] << 24);
    } else {
        // Text Format
        char temp_sec[4] = {0};
        char temp_fade[6] = {0};
        memcpy(temp_sec, header + 0xA9, 3);
        memcpy(temp_fade, header + 0xAC, 5);

        seconds_to_play = atoi(temp_sec);
        fade_ms = atoi(temp_fade);
    }

    int w = 22;
    printf("%-*s %s\n", w, "title:", title);
    printf("%-*s %s\n", w, "game:", game);
    printf("%-*s %s\n", w, "artist:", artist);
    printf("%-*s %u\n", w, "seconds before fade:", seconds_to_play);
    printf("%-*s %u ms\n", w, "fade in len:", fade_ms);
    printf("\n");
}

void load_spc_or_exit(const char* path, struct SPC_State* out)
{
    int status = EX_OK;

    int fd = open(path, O_RDONLY);
    if (fd < 0) {
        fprintf(stderr, "Failed to open file %s\n", path);
        status = EX_NOINPUT;
        goto out;
    }

    uint8_t header[256];
    if (!try_read(fd, header, 256)) {
        fprintf(stderr, "Failed to read 256B SPC header\n");
        status = EX_IOERR;
        goto out;
    }

    const char* magic_string =
        "SNES-SPC700 Sound File Data v0.30"
        "\x1a"
        "\x1a";
    if (memcmp(header, magic_string, strlen(magic_string)) != 0) {
        fprintf(stderr, "Not a spc file\n");
        status = EX_DATAERR;
        goto out;
    }

    const bool has_id666 = (header[0x23] == 26);
    if (has_id666) {
        parse_id666(header);
    }

    const struct CPU_State cpu = {
        .pc = u16_parse(header[0x25], header[0x26]),
        .a = header[0x27],
        .x = header[0x28],
        .y = header[0x29],
        .status = header[0x2a],
        .sp = header[0x2b],
        .instruction_cycle = 1,
        .total_cycles = 0,
    };
    char cpu_dump_buffer[41] = {0};
    (void)cpu_dump(cpu_dump_buffer, 41, &cpu);
    printf("%s\n", cpu_dump_buffer);

    uint8_t ram[0x10000];
    if (!try_read(fd, ram, 0x10000)) {
        fprintf(stderr, "Failed to read 64KB SPC RAM\n");
        status = EX_IOERR;
        goto out;
    }
    // still need to read the 64B shadowed by IPL ROM

    struct DSP_State dsp = {
        .registers = {0},
        .voice_out = {0},
        .echo_buf = {0},
        .addr_latch = ram[0xf2],
        .total_cycles = 0,
    };
    if (!try_read(fd, dsp.registers, 128)) {
        fprintf(stderr, "Failed to read 128B DSP registers\n");
        status = EX_IOERR;
        goto out;
    }
    dsp_load_latches(&dsp);

    // 64B of garbage then 64B of extra RAM
    uint8_t extra[128];
    if (!try_read(fd, extra, 128)) {
        fprintf(stderr, "Failed to read 64B of RAM shadowed by IPL\n");
        status = EX_IOERR;
        goto out;
    }
    memcpy(ram + 0x10000 - 64, extra + 64, 64);

    // ignored
    // uint8_t iff_extension[];

    out->cpu = cpu;
    out->dsp = dsp;
    memcpy(out->aram, ram, 0x10000);
    memcpy((uint8_t*)out->ipl_rom, ipl_rom, 64);
    memset(out->io_ports, 0, 4);

out:
    close(fd);
    if (status != EX_OK) {
        exit(status);
    }
}
