// Search an Array | (C) 2023 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "toolbox.h"

int main(void) {
  puts("Search an Array\n");
  
  int n[10], s = 0;
  
  srand(time(NULL));
  for (int i = 0; i < 10; i++) n[i] = rand() % 51;
  
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