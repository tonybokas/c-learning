// Convert Between Euros and US Dollars | (C) 2022 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>

#define usd 1.06 // equals 1 euro 12/21/2022

int main() {
  puts("Convert between euros and dollars.");
  printf("%s", "Enter a currency amount: ");
  float cur = 0.0;
  scanf("%f", &cur);
  printf("$%.2f US dollars equal €%.2f euros.\n", cur, cur/usd );
  printf("€%.2f euros equal $%.2f US dollars.", cur, cur*usd);
  return 0;
}