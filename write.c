#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
  // allocate 4 bytes
  int *ptr = malloc(sizeof(int));
  // write a very specific value to it
  *ptr = 0xFEEDFACE;
  // read back the value, and print the address
  printf("Wrote %x to %p\n", *ptr, ptr);
  // wait for user input
  getc(stdin);
}