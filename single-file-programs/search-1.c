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

int search_nodes(Node *[], Node *);

int main(void) {
  puts("Search a Linked List\n");

  srand(time(NULL));

  Node *head = NULL, *cur = NULL, *new = NULL, *found[SIZE];

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

  int times = search_nodes(found, head);

  if (times > 0) printf("\nNumber found %d times:\n", times);
  else puts("\nNumber not found.");
  for (int i = 0; i < times; i++) printf("%d\n", found[i]->num);

  puts("\nSearch complete.");

  return EXIT_SUCCESS;
} // End main

int search_nodes(Node *found[], Node *head) {
  Node *search = head;
  int tar = 0, i = 0, pos = 0;

  printf("%s","Enter search number: ");
  scanf("%d", &tar);

  while(search != NULL) {
    if (search->num == tar) {
      found[pos] = search;
      pos++;
    };

    search = search->next;
    i++;
  }

  return pos;
}