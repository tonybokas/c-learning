// Random Number Matcher | (C) 2022 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "toolbox.h"

int main() {
  puts("\nRandom Number Matcher\n");
  int random = 0, user = 0, i = 0;

  do {
    user = request_int();
  } while (user < 0 || user > 99);

  srand(time(NULL));
  
  do {
    random = (rand() % 100);
    i++;
  } while (random != user);
  
  printf("\nCycles needed to match user: %d\n", i);
  return EXIT_SUCCESS;
}