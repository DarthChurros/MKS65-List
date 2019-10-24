#ifndef LISTFUNCS_H
#define LISTFUNCS_H

struct node {
  int value;
  struct node* next;
};

void print_list(struct node* list);
struct node* insert_front(struct node* list, int val);
struct node* free_list(struct node* list);
struct node* remove_value(struct node* list, int target);

#enddef
