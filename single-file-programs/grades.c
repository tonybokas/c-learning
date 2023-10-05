/* Student Grades | (C) 2023 Antonios J. Bokas
Purpose: Print student grades to a TXT file. */

#include <stdio.h>
#include <stdlib.h>

typedef struct student {
  char name;
  int year;
  float gpa;
} Student;

#define file_loc "C:\\Users\\anton\\Desktop\\grades.txt"

int main(void) {
  
  FILE *fout;
  if ((fout = fopen(file_loc, "w")) == NULL) {
    puts("Error: Could not open file. Program terminated.");
    exit(EXIT_FAILURE);
  }

  fputs("Freshman Grades at Forest HS\n\n", fout);
  
  Student forest[5];
  
  forest[0].name = 'A';
  forest[0].year = 9;
  forest[0].gpa = 3.8;
  
  forest[1].name = 'B';
  forest[1].year = 9;
  forest[1].gpa = 3.9;

  forest[2].name = 'C';
  forest[2].year = 9;
  forest[2].gpa = 2.3;

  forest[3].name = 'D';
  forest[3].year = 9;
  forest[3].gpa = 2.9;

  forest[4].name = 'E';
  forest[4].year = 9;
  forest[4].gpa = 4.0;

  
  fprintf(fout, "%-5s %-5s %-8s\n", "Name", "Year", "GPA");
  fputs("------------------\n", fout);
  for (int i = 0; i < 5; i++) 
    fprintf(fout, "%-5c %-5d %-8.2f\n", forest[i].name, forest[i].year, forest[i].gpa);
  
  printf("Success: Grades written to file %s\n", file_loc);
  return EXIT_SUCCESS;
}