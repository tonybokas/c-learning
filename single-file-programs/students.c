/* Students | (C) 2023 Antonios J. Bokas
Purpose: Print student details to a TXT file. */

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

  FILE *fout;
  if ((fout = fopen(file_loc, "w")) == NULL) {
    puts("Error: Could not open file. Program terminated.");
    exit(EXIT_FAILURE);
  }

  fputs("Student Profiles at Cap University\n\n", fout);

  Student fresh[5];
  
  strcpy(fresh[0].first, "Michael");
  strcpy(fresh[0].last, "Corelone");
  fresh[0].iden = 78253194;
  fresh[0].year = 9;
  strcpy(fresh[0].major, "Political Science");
  fresh[0].gpa = 3.6;

  strcpy(fresh[1].first, "Sonny");
  strcpy(fresh[1].last, "Corelone");
  fresh[1].iden = 78254112;
  fresh[1].year = 12;
  strcpy(fresh[1].major, "Auto Mechanics");
  fresh[1].gpa = 2.7;

  strcpy(fresh[2].first, "Fredo");
  strcpy(fresh[2].last, "Corelone");
  fresh[2].iden = 78253181;
  fresh[2].year = 10;
  strcpy(fresh[2].major, "Business Management");
  fresh[2].gpa = 3.8;

  strcpy(fresh[3].first, "Emilio");
  strcpy(fresh[3].last, "Barzini");
  fresh[3].iden = 78253000;
  fresh[3].year = 12;
  strcpy(fresh[3].major, "Legal Studies");
  fresh[3].gpa = 3.0;

  strcpy(fresh[4].first, "Vito");
  strcpy(fresh[4].last, "Corelone");
  fresh[4].iden = 78254000;
  fresh[4].year = 11;
  strcpy(fresh[4].major, "Industrial Processes");
  fresh[4].gpa = 3.9;

  fprintf(fout, "%-20s %-20s %-10s %-5s %-20s %-6s\n",
    "First Name", "Last Name", "ID", "Year", "Major", "GPA");
  fputs("------------------------------------------------------------------------------------\n", fout);
  for (int i = 0; i < 5; i++) {
    fprintf(fout, "%-20s %-20s %-10d %-5d %-20s %-6.2f\n",
      fresh[i].first, fresh[i].last, fresh[i].iden, fresh[i].year, fresh[i].major, fresh[i].gpa);
  }

  printf("Success: Profiles written to file %s\n", file_loc);
  return EXIT_SUCCESS;
}