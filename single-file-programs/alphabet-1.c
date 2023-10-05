// Alphabet Look-up | (C) 2023 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>
#include "toolbox.h"

int main(void) {
  puts("Alphabet Look-up\n");

  char alpha[27] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  int index[26] = {0}, n = 0;
  
  for (int i = 0; i < 26; i++) {
    index[i] = i + 1;
  }

  puts("Select a number to get the corresponding letter.\n");
  do {
    n = request_int();
  } while (n < 1 || n > 26);
  n--;
  printf("%d = %c\n", index[n], alpha[n]);

  return EXIT_SUCCESS;
}