// Convert Kilometers to Miles | (C) 2022 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>

#define conv 1.609344

int main() {
  puts("Convert kilometers (Km) to miles (Mi).");
  printf("%s", "Enter Km: ");
  float km = 0.0;
  scanf("%f", &km);
  printf("%f kilometers equals %f miles.", km, km/conv);
  return 0;
}