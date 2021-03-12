#include <stdio.h>
#include <stdlib.h>
#include "history.h"

List *init_history(){
  List *list = (List *) malloc(sizeof(List)*10);
  list->root = (Item *) malloc(sizeof(Item)*10);
  Item *root = list->root;

  list->root->next = NULL;
  list->root->str = NULL;
  list->root->id = 0;
  
  return list;
}

void add_history(List *list, char *str){
  Item *temp = list->root;
  int counter = 1;

  while(temp->next != NULL){
    counter++;
    temp = temp->next;
  }

  Item *node = (Item *) malloc(sizeof(Item));
  node->next = NULL;
  node->str = str;
  node->id = counter;

  temp->next = node;
 
}

char *get_history (List *list, int id){
  while(list->root->id != id){
    list->root = list->root->next;
  }

  return list->root->str;
}

//void *print_history(List *list){
  // while(list->next != NULL){
    // printf("%s\n", list->str);
    // }
  //}

//void free_history(List *list){
// while(list!= NULL){
// free(list->next);
// }
// free(list);
//}

