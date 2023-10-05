/* Back-to-Front Linked List */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
  int val;
  struct node *next;
} Node;

typedef Node *Node_p;

void intro(void);
void insert_head(Node_p *);
void print_nodes(Node_p);

int main(void) {
  intro();
  srand(time(NULL));

  Node_p head = NULL;

  if((head = malloc(sizeof(Node))) == NULL) return EXIT_FAILURE;

  head->val = rand() % 100;
  head->next = NULL;
  print_nodes(head);

  for(int i = 10; i > 1; i--) {
    insert_head(&head);
    print_nodes(head);
  }

  return EXIT_SUCCESS;
} // End main

void intro(void) {
  puts("Linked List Practice\n\nDescription: Build a linked list. Add new elements\nat the head of the list instead of at the tail.\n");
}

void insert_head(Node_p *head_p) {
  Node_p new_h = NULL;
  int n = rand() % 100;
  if((new_h = malloc(sizeof(Node))) == NULL) exit(EXIT_FAILURE);
  new_h->val = n;
  new_h->next = *head_p;
  *head_p = new_h;
}

void print_nodes(Node_p head) {
  Node_p cur = head;
  int i = 0;
  while(cur != NULL) {
    printf("Value at element %d: %d\n", i, cur->val);
    cur = cur->next;
    i++;
  }
  puts("");
}