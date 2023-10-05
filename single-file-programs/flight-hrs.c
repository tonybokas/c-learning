// Convert Kilometers to Miles | (C) 2022 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>

#define speed 550 // MPH
#define slow 25 // Minutes

int main() {
  puts("Determine hours in flight over a distance.");
  printf("%s", "Enter distance in miles: ");
  float mi = 0.0;
  scanf("%f", &mi);
  printf("Your flight time will be %f hours.", (mi/speed)+(slow/60));
  return 0;
}