#include <stdbool.h>
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

#define HEADER_SIZE (0x24)

int main(void)
{
    int status = 0;

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
        fprintf(stderr, "Failed to read %u bytes from offset %zu\n",
                HEADER_SIZE, offset);
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

out:
    close(fd);
    if (status == 0) {
        fprintf(stderr, "ok\n");
    } else {
        fprintf(stderr, "error\n");
    }
    return status;
}
