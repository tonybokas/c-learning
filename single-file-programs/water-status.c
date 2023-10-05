// Water Status | (C) 2022 Antonios J. Bokas | Purpose: Work with scanf

#include <stdlib.h>
#include <stdio.h>

int main() {
  puts("Is You Water Boiling Yet?\n");
  int temp_c = 0;
  int temp_f = 0;

  do {
    printf("%s", "What is the temperature of the water in °F? ");
    scanf("%d", &temp_f);
  } while (temp_f < -10 || temp_f > 250)

  temp_c = ((5 * temp_f) - 160) / 9;
  printf("Temperature in celsius: %d\n", temp_c);
  if (temp_c > 100) puts("Your water is boiling!");
  else if (temp_c <= 0) puts("Your water is freezing!");
  else puts("Your water is liquid dihydrogen monoxide.");
  return EXIT_SUCCESS;
}