/* Students | (C) 2023 Antonios J. Bokas
Purpose: Read student details from a TXT file. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define file_loc "C:\\Users\\anton\\Desktop\\cybretics.css"
#define FIND "em "
#define CHARS 1000
#define LINES 500

int main(void) {

  FILE *fin;
  if ((fin = fopen(file_loc, "r")) == NULL) {
    puts("Error: Could not open file. Program terminated.");
    exit(EXIT_FAILURE);
  }

  printf("Contents of %s:\n\n", file_loc);
  
  for (int i = 0; i < LINES; i++) {
    char line[CHARS];
    fgets(line, CHARS, fin);
    printf("%s", line);
 
    if (strstr(line, FIND)) {
      printf("\nLocated in file: %s\n", FIND);
      printf("Within line: %s\n", line);
      break;
    }
  }
  
  fclose(fin);
  return EXIT_SUCCESS;
}