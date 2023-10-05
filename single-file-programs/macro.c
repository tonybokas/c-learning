// Make a macro
#include <stdio.h>
#include <stdlib.h>

#define good_year "really awesome. I got a new job and a raise."
#define bad_year "pretty terrible. I want to cry."

int main() {
  printf("This year is %s\n", good_year);
  printf("This year is %s\n", bad_year);
  return 0;
}