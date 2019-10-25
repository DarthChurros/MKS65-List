#include <stdlib.h>
#include <stdio.h>
#include "listfuncs.h"

void print_list(struct node* list) {
  printf("{");
  if (list == NULL) {
    printf("}\n");
    return;
  }
  struct node* current = list;
  while (current != NULL) {
    printf("%d, ", current->data);
    current = current->next;
  }
  printf("\b\b}\n");
}

struct node* insert_front(struct node* list, int val) {
  struct node* new = malloc(sizeof(struct node));
  new->data = val;
  new->next = list;
  return new;
}

struct node* free_list(struct node* list) {
  return NULL;
}

struct node* remove_value(struct node* list, int target) {
  return NULL;
}
