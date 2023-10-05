// Linked List Practice

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SIZE 100
#define RAND rand() % 20 + 1

typedef struct node {
  int num;
  struct node *prev;
  struct node *next;
} Node;

void search_nodes(Node *);

int main(void) {
  puts("Search a Linked List\n");

  srand(time(NULL));

  Node *head = NULL, *cur = NULL, *new = NULL;

  if ((head = malloc(sizeof(Node))) == NULL) return EXIT_FAILURE;

  head->num = RAND;
  head->next = NULL;
  head->prev = NULL;
  cur = head;

  for (int i = 1; i < SIZE; i++) {
    if((new = malloc(sizeof(Node))) == NULL) return EXIT_FAILURE;
    new->num = RAND;
    new->next = NULL;
    new->prev = cur;
    cur->next = new;
    cur = new;
  }

  search_nodes(head);

  return EXIT_SUCCESS;
} // End main

void search_nodes(Node *head) {

  Node *search = head;
  int tar = 0, found[SIZE] = {0}, i = 0, pos = 0;

  printf("%s","Enter search number: ");
  scanf("%d", &tar);

  while(search != NULL) {
    if (search->num == tar) {
      found[pos] = i;
      pos++;
    };
    search = search->next;
    i++;
  }

  if (pos == 0) printf("Number %d not found.", tar);
  
  if (pos > 0) {
    printf("Number %d found %d times at nodes,\n", tar, pos);
    for (int n = 0; n < pos; n++) printf("%4d\n", found[n]);
  }

  puts("\nSearch complete.");
}