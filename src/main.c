#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/fcntl.h>
#include <sysexits.h>
#include <unistd.h>

#include "cpu.h"
#include "dsp.h"

// failures to read (exact amount of) bytes are always fatal
bool try_read(int fd, void* buffer, size_t sz, size_t* offset)
{
    const ssize_t bytes_read = read(fd, buffer, sz);

    if (bytes_read == (ssize_t)sz) {
        *offset += sz;
        return true;
    } else {
        return false;
    }
}

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

#define HEADER_SIZE 256

// 64KB
#define RAM_SIZE 0x10000

int main(void)
{
    int status = EX_OK;

    const char* spc_path = "./spc/304 Corridors of Time.spc";

    int fd = open(spc_path, O_RDONLY);
    if (fd < 0) {
        fprintf(stderr, "Failed to open file %s\n", spc_path);
        status = EX_NOINPUT;
        goto out;
    }

    size_t offset = 0;

    uint8_t header[HEADER_SIZE];
    if (!try_read(fd, header, HEADER_SIZE, &offset)) {
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

    // registers
    const struct SPC700_State cpu = {
        .pc = (uint16_t)header[0x25] | ((uint16_t)header[0x26] << 8),
        .a = header[0x27],
        .x = header[0x28],
        .y = header[0x29],
        .status = header[0x2a],
        .sp = header[0x2b],
        .cycles = 0,
    };
    char cpu_dump[41] = {0};
    (void)dump_spc_state(cpu_dump, 41, &cpu);
    printf("%s\n", cpu_dump);

    uint8_t ram[RAM_SIZE];
    if (!try_read(fd, ram, RAM_SIZE, &offset)) {
        fprintf(stderr, "Failed to read 64KB SPC RAM\n");
        status = EX_IOERR;
        goto out;
    }

    struct DSP_State dsp = {0};
    if (!try_read(fd, dsp.registers, 128, &offset)) {
        fprintf(stderr, "Failed to read 128B DSP registers\n");
        status = EX_IOERR;
        goto out;
    }

    // 64B of garbage then 64B of extra RAM
    uint8_t extra[128];
    if (!try_read(fd, extra, 128, &offset)) {
        fprintf(stderr, "Failed to read 64B of RAM shadowed by IPL\n");
        status = EX_IOERR;
        goto out;
    }
    memcpy(ram + 0x10000 - 64, extra + 64, 64);

    // ignored
    // uint8_t iff_extension[];

out:
    close(fd);
    if (status == 0) {
        fprintf(stderr, "ok\n");
    } else {
        fprintf(stderr, "error\n");
    }
    return status;
}
