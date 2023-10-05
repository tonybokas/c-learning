// Add Integer Blocks to Pointer | (C) 2023 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>

void move_address(int **);

int main(void) {
  puts("Add Integer Blocks to Pointer\n\n");
  int a = 0;
  int *b = &a;
  printf("Old address: %p\n", b);
  move_address(&b);
  printf("New address: %p\n", b);
  return EXIT_SUCCESS;
}

void move_address(int **c) {
  *c += 2;
}