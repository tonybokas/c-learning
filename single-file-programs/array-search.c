// Search an Array | (C) 2023 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>
#include "toolbox.h"

int main(void) {
  puts("Search an Array\n");
  int n[10] = {23, 43, 2, 48, 21, 17, 28, 19, 36, 10}, s = 0;
  puts("Check the array for a number.");
  s = request_int();
  for (int i = 0; i < 10; i++) {
    if (n[i] == s) {
      printf("Number %d found in the array.", s);
      return EXIT_SUCCESS;
    }
  }
  printf("Number %d not in the array.", s);
  return EXIT_SUCCESS;
}