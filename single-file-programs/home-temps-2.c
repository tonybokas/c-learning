// Home Temperatures | (C) 2023 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "toolbox.h"

int main(void) {
  puts("Home Temperature Statitics\n");
  puts("We measured the temperature of a home 25 times in one day.\n");

  srand(time(NULL));
  float temps[25] = {0}, tot = 0;

  temps[0] = rand() % 10 + 60;
  temps[12] = rand() % 20 + 80;
  float chg = (temps[12] - temps[0]) / 12;

  puts("Measurements:\n");
  for (int i = 1; i < 12; i++) temps[i] = temps[0] + (chg * i);
  for (int i = 13; i < 25; i++) temps[i] = temps[i - 1] - chg;

  printf(" %-13s%7s\n", "Time", "Temp °F");
  puts("-------------------------");
  
  for (int i = 0; i < 25; i++) {
    printf(" %2d:00 hrs %7.1f", i, temps[i]);
    if (i == 0 ) printf("%s", " (low)\n");
    else if (i == 12) printf("%s", " (high)\n");
    else printf("%s", "\n");
    tot += temps[i];
  }

  printf("\nAverage temp: %.1f °F\n", tot/25);

  return EXIT_SUCCESS;
}