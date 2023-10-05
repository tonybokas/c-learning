// Linked List Practice

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define SIZE 50

typedef struct node {
  int num;
  struct node *next;
} Node;

typedef Node *Node_p;

void print_nodes(Node_p);
float average(Node_p);
float std_dev(Node_p, float);

int main(void) {
  puts("Calculate Standard Deviation of Linked List\n");
  srand(time(NULL));

  Node_p head = NULL;
  Node_p cur = NULL;
  Node_p new = NULL;

  if ((head = malloc(sizeof(Node))) == NULL) return EXIT_FAILURE;

  head->num = rand() % 100;
  head->next = NULL;
  cur = head;

  for (int i = 1; i < SIZE; i++) {
    if((new = malloc(sizeof(Node))) == NULL) return EXIT_FAILURE;
    new->num = rand() % 100;
    new->next = NULL;
    cur->next = new;
    cur = new;
  }

  print_nodes(head);
  puts("");
  float av = average(head);
  float sd = std_dev(head, av);

  printf("Average: %.2f\n\n", av);
  printf("Standard deviation: %.2f\n", sd);

  return EXIT_SUCCESS;
} // End main

void print_nodes(Node_p head) {
  Node_p to_print = head;
  int i = 0;

  puts("Index Value\n-----------");

  while(to_print != NULL) {
    printf("%5d %5d\n", i, to_print->num);
    to_print = to_print->next;
    i++;
  }
}

float average(Node_p list) {
  float sum = 0.0;

  for(int i = 0; i < SIZE; i++) {
    sum += list->num;
    list = list->next;
  }

  return sum/SIZE;
}

float std_dev(Node_p list, float av) {
  float c_dif = 0.0, sd = 0.0;

  for(int i = 0; i < SIZE; i++) {
    c_dif += (av - list->num) * (av - list->num);
    list = list->next;
  }

  sd = sqrt(c_dif/SIZE);
  return sd;
}