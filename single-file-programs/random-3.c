// Random Number Generator 3 | (C) 2022 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
  puts("\nRandom Number Generator\n");
  
  srand(time(NULL));
  int random = 0, even = 0, odd = 0, total = 0, i = 0;
  
  do {
    random = (rand() % 101);
    if (random % 2 == 0) even++;
    else odd++;
    total += random;
    i++;
  } while (random != 0);
  
  printf("Even: %d\nOdd: %d\nAverage: ", even, odd);
  if (total == 0) printf("%s", "error\n");
  else printf("%d\n", total/i);
  return EXIT_SUCCESS;
}