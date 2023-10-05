// Highest and Lowest Random Numbers | (C) 2022 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void hi_lo(void);

int main(void) {
  puts("Random Number Analysis\n");
  hi_lo();
  return EXIT_SUCCESS;
}

void hi_lo(void) {
  srand(time(NULL));
  int random = 0, high = 0, low = 0;

  // Create initial reference point
  high = (rand() % 101);
  low = high;

  for (int n = 0; n < 49; n++) {
    random = (rand() % 101);
    if (random > high) {
      high = random;
    }
    else if(random < low) {
      low = random;
    }
  }

  printf("After 50 runs,\n> the highest number generated = %d\n", high);
  printf("> the lowest number generated = %d\n", low);
}