// Random Number Generator | (C) 2022 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
  puts("\nRandom Number Generator\n");
  puts("100 numbers generated:");
  
  srand(time(NULL));
  int even = 0;
  int odd = 0;
  
  for (int i = 0; i < 100; i++) {
    int random = rand() % 101;
    if (random % 2 == 0) even++;
    else odd++;
  }
  printf("Even: %d\nOdd: %d\n", even, odd);
  return EXIT_SUCCESS;
}