// Calculate Hypotenuse | (C) 2022 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void) {
  puts("Calculate Hypotenuse of Triangle\n");
  puts("Provide the length of the pendicular sides of the triangle.");
  double p_1 = 0, p_2 = 0;
  printf("%s", "Enter each length: ");
  scanf("%lf %lf", &p_1, &p_2);
  printf("\nThe length of the hypotenuse is %lf.\n", sqrt(pow(p_1, 2) + pow(p_2, 2)));
  return EXIT_SUCCESS;
}