#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <sys/fcntl.h>
#include <sysexits.h>
#include <unistd.h>

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
    const uint16_t reg_pc =
        (uint16_t)header[0x25] | ((uint16_t)header[0x26] << 8);
    const uint8_t reg_a = header[0x27];
    const uint8_t reg_x = header[0x28];
    const uint8_t reg_y = header[0x29];
    const uint8_t reg_psw = header[0x2a];
    const uint8_t reg_sp = header[0x2b];

out:
    close(fd);
    if (status == 0) {
        fprintf(stderr, "ok\n");
    } else {
        fprintf(stderr, "error\n");
    }
    return status;
}
