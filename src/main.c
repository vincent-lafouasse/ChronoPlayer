#include <fcntl.h>
#include <stdbool.h>
#include <stdio.h>
#include <sys/fcntl.h>
#include <unistd.h>

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

int main(void)
{
    int status = 0;

    const char* spc_path = "./spc/304 Corridors of Time.spc";

    int fd = open(spc_path, O_RDONLY);
    if (fd < 0) {
        fprintf(stderr, "Failed to open file %s\n", spc_path);
        status = 1;
        goto out;
    }

out:
    close(fd);
    return status;
}
