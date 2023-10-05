/* Variables | (C) 2022 Antonios J. Bokas
Purpose: Work with variables and operators. */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 9, j = 10, k = 11, l = 12, sum;
  float f = 7;
  double d = 4.0;
  char c = 'c';

  printf("i = %d\n", i);
  printf("f = %.2f\n", f);
  printf("d = %1.2f\n", d);
  printf("c = %c\n", c);

  sum = i + j + k + l;

  printf("Sum of i through l = %d\n", sum);
  printf("Quotient of j/i = %d\n", j/i);
  printf("Modulus of l/i = %d\n", l%i);
  printf("Real quotient of i/d = %f\n", i/d);

  return 0;
}