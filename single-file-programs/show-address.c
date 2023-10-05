// Pointer Schema | (C) 2023 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>

int main(void) {
  puts("Pointer Schema\n");
  int a = 10;
  int *b = &a;
  int **c = &b;
  puts("Declarations:\n\nint a = 10;\nint *b = &a;\nint **c = &b;\n");
  printf("> a address:   %p\n", &a);
  printf("> a value:     %d\n\n", a);
  printf("> b address:   %p\n", &b);
  printf("> b value:     %p\n", b);
  printf("> *b address:  %p\n", &*b);
  printf("> *b value:    %d\n\n", *b);
  printf("> c address:   %p\n", &c);
  printf("> c value:     %p\n", c);
  printf("> *c address:  %p\n", &*c);
  printf("> *c value:    %p\n", *c);
  printf("> **c address: %p\n", &**c);
  printf("> **c value:   %d\n", **c);
  return EXIT_SUCCESS;
}