// Compare Average of Random Numbers | (C) 2023 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void generate(int *);

int main(void) {
  puts("Random Number Analysis\n");
  srand(time(NULL));
  int gen_1 = 0, gen_2 = 0;
  generate(&gen_1);
  generate(&gen_2);
  puts("Averages of 10 random numbers:");
  printf("Run 1 average: %d\n", gen_1);
  printf("Run 2 average: %d\n", gen_2);
  printf("Difference: %d\n", gen_1 > gen_2 ? gen_1 - gen_2 : gen_2 - gen_1);
  return EXIT_SUCCESS;
}

void generate(int *x) {
  int random = 0;
  for (int i = 0; i < 3; i++) {
    random += rand() % 11;   
  }
  *x = random/3;
}