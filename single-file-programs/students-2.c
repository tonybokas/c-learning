/* Students | (C) 2023 Antonios J. Bokas
Purpose: Read student details from a TXT file. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define file_loc "C:\\Users\\anton\\Desktop\\students.txt"
#define SIZE 1000

int main(void) {

  FILE *fin;
  if ((fin = fopen(file_loc, "r")) == NULL) {
    puts("Error: Could not open file. Program terminated.");
    exit(EXIT_FAILURE);
  }

  puts("Student Profiles at Cap University\n");
  printf("%-20s %-20s %-10s %-5s %-20s %-6s\n",
    "First Name", "Last Name", "ID", "Year", "Major", "GPA");
  puts("------------------------------------------------------------------------------------");
  for (int i = 0; i < 5; i++) {
    char line[SIZE];
    fgets(line, SIZE, fin);
    printf("%s", line);
  }
  
  fclose(fin);
  return EXIT_SUCCESS;
}