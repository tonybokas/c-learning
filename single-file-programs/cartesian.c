// Calculate Distance Between Cartesian Coordinates| (C) 2022 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "toolbox.h"

#define X1 0
#define Y1 0

int euclidean(int, int, int, int);

int main(void) {
  puts("Calculate Distance Between Cartesian Coordinates\n");
  puts("Note: Only positive displacements calculated.\n");
  puts("Provide the ending coordinates.\n> x2");
  int x2 = request_int();
  puts("> y2");
  int y2 = request_int();
  printf("Your destination is %d miles away.\n", euclidean(X1, x2, Y1, y2));
  return EXIT_SUCCESS;
}

int euclidean(int x1, int x2, int y1, int y2) {
  return sqrt(pow((x2 - X1), 2) + pow((y2 - Y1), 2));
}