// Determine Calories | (C) 2022 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>

int main() {
  const int cpgp = 4;
  const int cpgc = 4;
  const int cpgf = 9;
  int food[3];
  puts("Determine your calories.");
  printf("%s", "Enter protein, carbs, and fat consumed today: ");
  scanf("%d %d %d", &food[0], &food[1], &food[3]);
  printf("You ate %d calories today.", (food[0]*cpgp)+(food[1]*cpgc)+(food[2]*cpgf));
  return 0;
}