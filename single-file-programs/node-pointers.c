/* Linked List Practice */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node {
  int number;
  struct node *next;
} Node;

typedef Node *node_ptr;

void print_nodes(node_ptr head) {
  node_ptr test = head;
  int i = 0;
  while(test != NULL) {
    printf("Value at element %d: %d\n", i, test->number);
    test = test->next;
    i++;
  }
}

node_ptr find_last(node_ptr head) {
  node_ptr check = head;
  while(check->next != NULL) check = check->next;
  return check;
}

void new_last(node_ptr head) {
  node_ptr last = find_last(head);
  node_ptr new_node = NULL;
  int i = 0;

  printf("%s","Enter value for new element: ");
  scanf("%d", &i);

  if((new_node = malloc(sizeof(Node))) == NULL) {
    puts("Fatal error: Memory allocation failed.\n");
    exit(EXIT_FAILURE);
  }

  new_node->number = i;
  new_node->next = NULL;
  last->next = new_node;
  puts("");
  print_nodes(head);
}

int main(void) {
  srand(time(NULL));

  int i;
  node_ptr head = NULL;
  node_ptr here = NULL;
  node_ptr new_node = NULL;

  if ((head = malloc(sizeof(Node))) == NULL) return EXIT_FAILURE;

  head->number = 10;
  head->next = NULL;
  here = head;

  for (i = 1; i < 10; i++) {
    if((new_node = malloc(sizeof(Node))) == NULL) return EXIT_FAILURE;
    new_node->number = rand() % 100;
    new_node->next = NULL;
    here->next = new_node;
    here = new_node;
  }

  print_nodes(head);
  puts("");
  new_last(head);

  return EXIT_SUCCESS;
}