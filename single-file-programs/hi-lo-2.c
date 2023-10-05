// Highest and Lowest Random Numbers | (C) 2022 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "toolbox.h"

void hi_lo(int);

int main(void) {
  puts("Random Number Analysis\n");
  puts("Choose the upper limit of the generator range.");
  hi_lo(request_int());
  return EXIT_SUCCESS;
}

void hi_lo(int n) {
  srand(time(NULL));
  int random = 0, high = 0, low = 0;

  // Create initial reference point
  high = (rand() % (n+1));
  low = high;

  for (int i = 0; i < 49; i++) {
    random = (rand() % (n+1));
    if (random > high) {
      high = random;
    }
    else if(random < low) {
      low = random;
    }
  }

  printf("After 50 runs from 0 to %d,\n> the highest number generated was %d\n", n, high);
  printf("> the lowest number generated was %d\n", low);
}