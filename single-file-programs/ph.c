// pH Level | (C) 2022 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>

int main() {
  puts("Check Pool pH Level");
  puts("\nWhat color is the water sample? Enter:");
  printf("%s","> \"p\" purple\n> \"o\" orange\n> \"r\" red\n");
  char color;
  scanf("%c", &color);
  switch(color) {
    case 'p':
      puts("The water is alkaline.");
      break;
    case 'o':
      puts("The water is neutral.");
      break;
    case 'r':
      puts("The water is acidic.");
      break;
    default:
      puts("Error: Incorrect value.");
  }
  return EXIT_SUCCESS;
}