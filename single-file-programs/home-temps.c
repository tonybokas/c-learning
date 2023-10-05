// Home Temperatures | (C) 2023 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void) {
  puts("Home Temperature Statitics\n");

  puts("Temps during 24-hour period:\n");
  int temps[24], i; // Temps is in celsius
  srand(time(NULL));
  for (i = 0; i < 24; i++) temps[i] = rand() % 51;
  for (i = 0; i < 24; i++) printf("%d °C\n", temps[i]);
  puts("\nConverted to fahrenheit:\n");
  for (i = 0; i < 24; i++) printf("%.1f °F\n", ((9.0 * temps[i]) / 5.0) + 32.0);

  puts("\nStats:\n");
  int sum = temps[0], min = temps[0], max = temps[0];
  i = 1;
  do {
    sum += temps[i];
    if (temps[i] > max) max = temps[i];
    if (temps[i] < min) min = temps[i];
  } while (++i < 23);
  printf("Average temp: %.1f °C\n", (float)sum/24);
  printf("Max temp: %.1f °C\n", (float)max);
  printf("Min temp: %.1f °C\n", (float)min);

  return EXIT_SUCCESS;
}