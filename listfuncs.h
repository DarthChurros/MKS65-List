#ifndef LISTFUNCS_H
#define LISTFUNCS_H

struct node {
  int data;
  struct node* next;
};

void print_list(struct node* list);
struct node* insert_front(struct node* list, int value);
struct node* free_list(struct node* list);
struct node* remove_value(struct node* list, int value);

#enddef
