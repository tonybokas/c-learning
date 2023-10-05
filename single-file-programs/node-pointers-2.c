// Delete Node in Linked List

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
void delete_node(Node_p *, int);

int main(void) {
  intro();
  srand(time(NULL));

  Node_p head = NULL;
  if((head = malloc(sizeof(Node))) == NULL) return EXIT_FAILURE;
  head->val = rand() % 100;
  head->next = NULL;

  for(int i = 10; i > 1; i--) {
    insert_head(&head);
  }

  print_nodes(head);

  int del_val = 0;
  printf("%s", "Which value do you want to delete? ");
  scanf("%d", &del_val);

  delete_node(&head, del_val);
  puts("");
  print_nodes(head);

  return EXIT_SUCCESS;
} // End main

void intro(void) {
  puts("Linked List Practice\n\nDescription: Delete any node in a linked list.\n");
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
    printf("Value of node %d: %d\n", i, cur->val);
    cur = cur->next;
    i++;
  }

  puts("");
}

void delete_node(Node_p *head_p, int del_val) {
  Node_p bef_del_node = *head_p, del_node = *head_p;

  while(del_node->next != NULL && del_node->val != del_val) {
    del_node = del_node->next;
    if(del_node->val == del_val) break;
    bef_del_node = bef_del_node->next;
  }

  if(del_node == bef_del_node) *head_p = del_node->next;
  else if(del_node->next == NULL) bef_del_node->next = NULL;
  else bef_del_node->next = del_node->next;
}