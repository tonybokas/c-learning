// Hello You | (C) 2023 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>
#include "toolbox.h"

int main(void) {
  puts("Computer Says Hello to You\n");
  char first[100], last[100];
  printf("%s", "What is your name?\n> Enter first name: ");
  scanf("%s", first);
  printf("%s", "> Enter last name: ");
  scanf("%s", last);
  printf("\nHello %s %s!\n", first, last);
  return EXIT_SUCCESS;
}