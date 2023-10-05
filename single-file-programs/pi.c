// Pi | (C) 2022 Antonios J. Bokas | Purpose: Work with constants.

#include <stdlib.h>
#include <stdio.h>

#define PI 3.14

int main() {
  float area = 0.0, radius = 26.5;
  area = PI * radius * radius;
  printf("The area of a circle of radius %.2f equals %.2f.\n", radius, area);
  return 0;
}