/* Day 1 Advent of Code | (C) 2022 Antonios J. Bokas

Purpose: Find the elf with the most number of calories stored. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  struct elf {
    int cal; // Calories
    int pos; // Position
  };

int main(void) {

  FILE *day_1;
  if ((day_1 = fopen("day-1-input.txt", "r")) == NULL) {
    fputs("Error: Cannot open file.\n", stderr);
    return EXIT_FAILURE;
  }

  struct elf leader = {0, 0};
  struct elf next = {0, 0};
  int cal = 0;
  int count = 0;

  while (1) {
    int scan = fscanf(day_1, "%d", &cal);
    next.cal += cal;
    printf("Added %d calories to elf's total of %d.\n", cal, next.cal);

    char newline[3];
    int check = 0;
    while (check < 2) {
      fgets(&newline[check], 2, day_1);
      check++;
    }

    if (newline[1] == '\n' || scan == EOF) {
      count++;
      printf("End of elf %d stats.\n", count);
      if (next.cal > leader.cal) {
        leader.cal = next.cal;
        leader.pos = count;
        printf("\nElf %d has taken the lead with %d calories.\n\n", leader.pos, leader.cal);
      }
      if (scan == EOF) {
        break;
      }
      next.cal = 0;
    }
    else if (newline[1] != '\n') {
      fseek(day_1, -1L, SEEK_CUR);
    }
    else if (scan != EOF) {
      fputs("Error: Failed to close file.", stderr);
      return EXIT_FAILURE;
    }
    else {
      fputs("Error: Unknown", stderr);
      break;
    }
  }

  fclose(day_1);
  printf("\nSuccess: The leading elf is no. %d with %d calories.\n", leader.pos, leader.cal);
  return EXIT_SUCCESS;
}