// Random Number Matcher | (C) 2022 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "toolbox.h"

int main() {
  puts("\nRandom Number Matcher\n");
  int random = 0, user = 0, i = 0, sum_i = 0, n;
  printf("%s", "Choose a number between 0 and 99.\n");

  do {
    user = request_int();
  } while (user < 0 || user > 99);

  srand(time(NULL));
  puts("");
  
  for (n = 0; n < 50; n++) {
    do {
      random = (rand() % 100);
      i++;
    } while (random != user);
    printf("Iteration %d: %d times\n", n + 1, i);
    sum_i += i;
    i = 0;
  }
  
  printf("\nIt took an average of %d generated numbers to match your number of %d.\n", sum_i/n, user);
  return EXIT_SUCCESS;
}