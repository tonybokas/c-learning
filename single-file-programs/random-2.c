// Random Number Generator 2 | (C) 2022 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
  puts("\nRandom Number Generator\n");
  puts(">>> NUMBERS GENERATED");
  
  srand(time(NULL));
  int even = 0, odd = 0, total = 0;
  
  for (int i = 0; i < 100; i++) {
    int random = (rand() % 51) + 50;
    printf("Iteration %d: %d\n", i, random);
    if (random % 2 == 0) even++;
    else odd++;
    total += random;
  }
  
  printf("\n>>> STATS\nEven: %d\nOdd: %d\nAverage: %d\n", even, odd, total/100);
  return EXIT_SUCCESS;
}