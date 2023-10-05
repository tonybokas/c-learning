// Temperature | (C) 2022 Antonios J. Bokas | Purpose: Work with scanf

#include <stdlib.h>
#include <stdio.h>

int main() {
  float temp_c = 0.0, temp_f = 0.0; // Always initialize
  printf("%s", "What is the temperature in °C? ");
  scanf("%f", &temp_c);
  temp_f = ((9.0 * temp_c) / 5.0) + 32.0;
  printf("The temperature in °F is %f.\n", temp_f);
  return 0;
}