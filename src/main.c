#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <sys/fcntl.h>
#include <sysexits.h>
#include <unistd.h>

#include "cpu.h"

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

static int dump_spc_state(char buf[static 41],
                          size_t len,
                          const struct SPC700_State* s)
{
    return snprintf(
        buf, len, "A:%02x X:%02x Y:%02x S:%02x PC:%04x PSW:%c%c%c%c%c%c%c%c",
        s->a, s->x, s->y, s->sp, s->pc, (s->status & PSW_N) ? 'N' : 'n',
        (s->status & PSW_V) ? 'V' : 'v', (s->status & PSW_P) ? 'P' : 'p',
        (s->status & PSW_B) ? 'B' : 'b', (s->status & PSW_H) ? 'H' : 'h',
        (s->status & PSW_I) ? 'I' : 'i', (s->status & PSW_Z) ? 'Z' : 'z',
        (s->status & PSW_C) ? 'C' : 'c');
}

#define HEADER_SIZE 256

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

    char header[HEADER_SIZE];
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

    // registers
    // NOTE: little endian ? need to check
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

out:
    close(fd);
    if (status == 0) {
        fprintf(stderr, "ok\n");
    } else {
        fprintf(stderr, "error\n");
    }
    return status;
}
