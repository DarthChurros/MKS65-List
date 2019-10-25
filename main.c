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

  return 0;
}
