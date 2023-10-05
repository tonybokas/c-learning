// Mollier Diagram Input | (C) 2022 Antonios J. Bokas | Purpose: Work with scanf

#include <stdlib.h>
#include <stdio.h>

int main() {
  float temp_wet = 0.0, temp_dry = 0.0, temp_diff = 0.0;
  printf("%s", "What are the wet and dry bulb temperatures in °C? ");
  scanf("%f %f", &temp_wet, &temp_dry);
  temp_diff = temp_dry - temp_wet;
  printf("The difference in temperatures is %.1f in °C.\n", temp_diff);
  return 0;
}