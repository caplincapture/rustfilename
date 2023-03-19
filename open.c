#include <stdio.h>
#include <fcntl.h>

int main(int argc, char **argv) {
    int fd = open("/etc/hosts", O_RDONLY);

    printf("Our file descriptor for /etc/hosts is %d\n", fd);
    printf("Press enter to exit...\n");
    getc(stdin);
}