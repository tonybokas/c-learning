// Switch Variables by Reference | (C) 2023 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>
#include "toolbox.h"

void switch_var(int *, int *);

int main(void) {
  puts("Switch Value of Two Variables\n");

  int var_1 = 0, var_2 = 0;
  puts("Define variable 1.");
  var_1 = request_int();
  puts("Define variable 2.");
  var_2 = request_int();

  switch_var(&var_1, &var_2);
  printf("Variable 1 now equals %d.\n", var_1);
  printf("Variable 2 now equals %d.\n", var_2);

  return EXIT_SUCCESS;
}

void switch_var(int *v1, int *v2) { // int *v1 = &var1, int *v2 = &var_2
  int temp = *v1;
  *v1 = *v2;
  *v2 = temp;
}