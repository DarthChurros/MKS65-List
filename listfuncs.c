#include <stdlib.h>
#include <stdio.h>
#include "listfuncs.h"

void print_list(struct node* list) {
  printf("{");
  while (list.next != NULL) {
    printf(", %d", list.data);
  }
  printf("\b\b}\n");
}

struct node* insert_front(struct node* list, int val) {
  return NULL;
}

struct node* free_list(struct node* list) {
  return NULL;
}

struct node* remove_value(struct node* list, int target) {
  return NULL;
}
