/* Students | (C) 2023 Antonios J. Bokas
Purpose: Read student details from a TXT file. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
  char first[50];
  char last[50];
  int iden;
  int year;
  char major[50];
  float gpa;
} Student;

#define file_loc "C:\\Users\\anton\\Desktop\\students.txt"

int main(void) {

  FILE *fin;
  if ((fin = fopen(file_loc, "r")) == NULL) {
    puts("Error: Could not open file. Program terminated.");
    exit(EXIT_FAILURE);
  }

  puts("Student Profiles at Cap University\n\n");

  Student cap[5];

  printf("%-20s %-20s %-10s %-5s %-20s %-6s\n",
    "First Name", "Last Name", "ID", "Year", "Major", "GPA");
  puts("------------------------------------------------------------------------------------");

  for (int i = 0; i < 5; i++) {
    fscanf(fin, "%s %s %d %d %s %f",
      cap[i].first, cap[i].last, &cap[i].iden, &cap[i].year, cap[i].major, &cap[i].gpa);
  }
  
  fclose(fin);

  for (int i = 0; i < 5; i++) {
    printf("%-20s %-20s %-10d %-5d %-20s %-6.2f\n",
      cap[i].first, cap[i].last, cap[i].iden, cap[i].year, cap[i].major, cap[i].gpa);
  }

  return EXIT_SUCCESS;
}