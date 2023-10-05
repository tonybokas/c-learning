// Linked List Practice

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 4

void search_array(char *[]);

int main(void) {
  puts("Search a Character Array\n");

  char *beatles[SIZE] = {"John", "Paul", "George", "Ringo"};

  search_array(beatles);

  return EXIT_SUCCESS;
} // End main

void search_array(char *array[]) {
  char name[50] = {""};
  int found = 0;

  printf("%s","Name search: ");
  scanf("%s", name);

  for (int i = 0; i < SIZE; i++) {
    if (strcmp(array[i], name) == 0) {
      printf("%s is part of the Beatles.\n", name);
      found = 1;
    }
  }

  if (found == 0) printf("%s is not part of the Beatles.\n", name);
}