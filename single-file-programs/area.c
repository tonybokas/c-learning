// Compare Average of Random Numbers | (C) 2022 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "toolbox.h"

double circle_area(void);
double rect_area(void);
double square_area(void);
double tri_area(void);

int main(void) {
  puts("Calculate Shape Area\n");

  char letter;
  puts("Select a shape.\n  Circle (c)\n  Rectangle (r)\n  Square (s)\n  Equilateral triangle (t)");
  do {
    letter = request_char();
  } while (letter != 'c' && letter != 'r' && letter != 's' && letter != 't');

  char *shape;
  double area = 0;
  if (letter == 'c') {
    shape = "circle";
    area = circle_area();
  }
  else if (letter == 'r') {
    shape = "rectangle";
    area = rect_area();
  }
  else if (letter == 's') {
    shape = "square";
    area = square_area();
  }
  else {
    shape = "triangle";
    area = tri_area();
  }

  printf("The area of your %s is %.2lf.\n", shape, area);
  return EXIT_SUCCESS;
}

double circle_area(void) {
  double radius = 0;
  puts("Provide the radius.");
  radius = request_double();
  const double pi = 3.14159;
  return pi * pow(radius, 2);
}

double rect_area(void) {
  double length = 0;
  double width = 0;
  puts("Provide the length.");
  length = request_double();
  puts("Provide the width.");
  width = request_double();
  return length * width;
}

double square_area(void) {
  double side = 0;
  puts("Provide the side length.");
  side = request_double();
  return pow(side, 2);
}

double tri_area(void) {
  double side = 0;
  puts("Provide the side length.");
  side = request_double();
  return (sqrt(3)/4) * pow(side, 2);
}