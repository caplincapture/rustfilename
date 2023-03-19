
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
    int *ptr = (int *) 0x55ea8e8222a0;
    printf("Read %x to %p\n", *ptr, ptr);
}