// Home Temperatures | (C) 2023 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define file_loc "C:\\Users\\anton\\Desktop\\home-temps.txt"

int main(void) {
  FILE *fout;
  if ((fout = fopen(file_loc, "w")) == NULL) {
    puts("Could not open file. Main terminated.");
    exit(EXIT_FAILURE);
  }

  fputs("Home Temperature Statitics\n\n", fout);
  fputs("Temps during 24-hour period:\n", fout);

  int temps[24], i; // Temps are in celsius
  srand(time(NULL));
  for (i = 0; i < 24; i++) temps[i] = rand() % 51;
  for (i = 0; i < 24; i++) fprintf(fout, "%d °C\n", temps[i]);

  fputs("\nConverted to fahrenheit:\n", fout);
  for (i = 0; i < 24; i++) fprintf(fout, "%.1f °F\n", ((9.0 * temps[i]) / 5.0) + 32.0);

  int sum = temps[0], min = temps[0], max = temps[0];
  i = 1;
  do {
    sum += temps[i];
    if (temps[i] > max) max = temps[i];
    if (temps[i] < min) min = temps[i];
  } while (++i < 23);
  
  fputs("\nSummary:\n", fout);
  fprintf(fout, "Average temp: %.1f °C\n", (float)sum/24);
  fprintf(fout, "Max temp: %.1f °C\n", (float)max);
  fprintf(fout, "Min temp: %.1f °C\n", (float)min);

  fclose(fout);
  
  printf("Success: Data written to file %s\n", file_loc);
  return EXIT_SUCCESS;
}