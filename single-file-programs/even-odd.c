// Even or Odd? | (C) 2022 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>

int main() {
  puts("Even or Odd?\n");
  int i = 0;
  printf("%s", "Enter an integer: ");
  scanf("%d", &i);
  switch(i % 2) {
    case 0:
      puts("\nYou entered an even integer.");
      break;
    default:
      puts ("\nYou entered an odd integer.");
  }
  return EXIT_SUCCESS;
}