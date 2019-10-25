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
  remove_value(list, 4);
  print_list(list);
  printf("Removing first instance of 0...\n");
  remove_value(list, 0);
  print_list(list);
  printf("Removing first instance of 9...\n");
  remove_value(list, 9);
  print_list(list);

  return 0;
}
