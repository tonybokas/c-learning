// Booleans | (C) 2022 Antonios J. Bokas | Purpose: Work with booleans.

#include <stdlib.h>
#include <stdio.h>

int main() {
  FILE *answer_file;
  answer_file = fopen("C:\\Users\\anton\\Desktop\\answers.txt", "w");

  fprintf(answer_file, "The answer is %d.\n", 2 == 2);
  fprintf(answer_file, "The answer is %d.\n", 2 == 3);

  fclose(answer_file);
  puts("Answers written to file.");
  return 0;
}