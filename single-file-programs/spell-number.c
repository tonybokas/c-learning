// Spell Out a Number | (C) 2022 Antonios J. Bokas

#include <stdlib.h>
#include <stdio.h>

int main() {
  puts("Spell Out a Number");
ENTER_DIGIT:
  printf("%s", "\nEnter digit from 0 to 10: ");
  int digit = 0;
  scanf("%d", &digit);
  puts("");
  switch(digit) {
    case 0:
      puts("Zero");
      break;
    case 1:
      puts("One");
      break;
    case 2:
      puts("Two");
      break;
    case 3:
      puts("Three");
      break;
    case 4:
      puts("Four");
      break;
    case 5:
      puts("Five");
      break;
    case 6:
      puts("Six");
      break;
    case 7:
      puts("Seven");
      break;
    case 8:
      puts("Eight");
      break;
    case 9:
      puts("Nine");
      break;
    case 10:
      puts("Ten");
      break;
    default:
      puts("Error: Value too high or low.");
      goto ENTER_DIGIT;
  }
  return EXIT_SUCCESS;
}