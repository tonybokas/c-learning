// By One Get One Free Calculator | (C) 2022 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>

int main() {
  puts("Buy One Get One Free Calculator (Orange Juice)\n");
  float oj = 0.0;
  int qty = 0;
  printf("%s", "How much is one container of OJ?\n$");
  scanf("%f", &oj);
  puts("How many containers will you buy?");
  scanf("%d", &qty);
  printf("%s", "Total cost: $");
  if (qty % 2 == 0) printf("%.2f", (oj * qty) / 2);
  else printf("%.2f", ((oj * (qty - 1))) / 2 + oj);
  return EXIT_SUCCESS;
}