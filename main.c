#include <stdlib.h>
#include <stdio.h>
#include "listfuncs.h"

int main() {
  printf("Creating empty list: ");
  struct node* list = NULL;
  print_list(list);

  printf("Adding numbers 0-9 to list...\n");
  int i;
  for (i = 0; i < 10; i++) {
    list = insert_front(list, i);
  }

  print_list(list);

  printf("Removing first instance of 4...\n");
  list = remove_node(list, 4);
  print_list(list);
  printf("Removing first instance of 0...\n");
  list = remove_node(list, 0);
  print_list(list);
  printf("Removing first instance of 9...\n");
  list = remove_node(list, 9);
  print_list(list);

  printf("Clearing list...\n");
  list = free_list(list);
  printf("List now points to %p\nList contents: ", list);
  print_list(list);

  printf("Adding one million elements to list...\n");
  for (i = 0; i < 1E6; i++) {
    list = insert_front(list, i);
  }
  printf("Clearing list located at %p...\n", list);
  list = free_list(list);

  return 0;
}
