// Linked List Practice

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SIZE 26

typedef struct node {
  char alpha;
  struct node *prev;
  struct node *next;
} Node;

typedef Node *Node_p;

char set_alpha(int);
void print_nodes(Node_p);
void rev_list(Node_p *);

int main(void) {
  puts("Manipulate the Alphabet\n");

  Node_p head = NULL, cur = NULL, new = NULL;

  if ((head = malloc(sizeof(Node))) == NULL) return EXIT_FAILURE;

  head->alpha = 'A';
  head->next = NULL;
  head->prev = NULL;
  cur = head;

  for (int i = 1; i < SIZE; i++) {
    if((new = malloc(sizeof(Node))) == NULL) return EXIT_FAILURE;
    new->alpha = set_alpha(i);
    new->next = NULL;
    new->prev = cur;
    cur->next = new;
    cur = new;
  }

  printf("Initial head: %c.\n\n", head->alpha);

  print_nodes(head);
  puts("");
  rev_list(&head);
  puts("");
  print_nodes(head);
  puts("");
  rev_list(&head);
  puts("");
  print_nodes(head);

  return EXIT_SUCCESS;
} // End main

void print_nodes(Node_p head) {
  Node_p to_print = head;
  int i = 0;

  puts("Index Value\n-----------");

  while(to_print != NULL) {
    printf("%5d %5c\n", i, to_print->alpha);
    to_print = to_print->next;
    i++;
  }
}

char set_alpha(int n) {
  switch(n) {
    case 1:
      return 'B';
      break;
    case 2:
      return 'C';
      break;
    case 3:
      return 'D';
      break;
    case 4:
      return 'E';
      break;
    case 5:
      return 'F';
      break;
    case 6:
      return 'G';
      break;
    case 7:
      return 'H';
      break;
    case 8:
      return 'I';
      break;
    case 9:
      return 'J';
      break;
    case 10:
      return 'K';
      break;
    case 11:
      return 'L';
      break;
    case 12:
      return 'M';
      break;
    case 13:
      return 'N';
      break;
    case 14:
      return 'O';
      break;
    case 15:
      return 'P';
      break;
    case 16:
      return 'Q';
      break;
    case 17:
      return 'R';
      break;
    case 18:
      return 'S';
      break;
    case 19:
      return 'T';
      break;
    case 20:
      return 'U';
      break;
    case 21:
      return 'V';
      break;
    case 22:
      return 'W';
      break;
    case 23:
      return 'X';
      break;
    case 24:
      return 'Y';
      break;
    case 25:
      return 'Z';
      break;
    default:
      printf("Error: Letter not found for number %d.\n", n);
      exit(EXIT_FAILURE);
  }
}

void rev_list(Node_p *head_p) {
  Node_p prev = NULL, next = NULL, cur = *head_p;

  while(cur != NULL) {
    next = cur->next;
    cur->next = prev;
    cur->prev = next;
    prev = cur;
    cur = next;
  }

  *head_p = prev;
  printf("Head is now %c.\n", (*head_p)->alpha);
}