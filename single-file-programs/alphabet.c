// Translate Number to Letter | (C) 2022 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "toolbox.h"

char alphabet(int);

int main(void) {
  puts("Translate Number to Letter\n");
  puts("Select a number from 1 to 26.");
  int n = request_int();
  char letter = alphabet(n);
  if (letter == 0) return EXIT_FAILURE;
  printf("The corresponding letter is %c.\n", letter);
  return EXIT_SUCCESS;
}

char alphabet (int n) {
  switch(n) {
    case 1:
      return 'A';
    case 2:
      return 'B';
    case 3:
      return 'C';
    case 4:
      return 'D';
    case 5:
      return 'E';
    case 6:
      return 'F';
    case 7:
      return 'G';
    case 8:
      return 'H';
    case 9:
      return 'I';
    case 10:
      return 'J';
    case 11:
      return 'K';
    case 12:
      return 'L';
    case 13:
      return 'M';
    case 14:
      return 'N';
    case 15:
      return 'O';
    case 16:
      return 'P';
    case 17:
      return 'Q';
    case 18:
      return 'R';
    case 19:
      return 'S';
    case 20:
      return 'T';
    case 21:
      return 'U';
    case 22:
      return 'V';
    case 23:
      return 'W';
    case 24:
      return 'X';
    case 25:
      return 'Y';
    case 26:
      return 'Z';
    default:
      fputs("Error: Number does not correspond to any letter.\n", stderr);
      return 0;
  }
}