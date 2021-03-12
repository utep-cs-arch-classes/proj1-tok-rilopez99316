#include <stdio.h>
#include <stdlib.h>
#include "history.h"

List *init_history(){
  List *list = (List *) malloc(sizeof(List)*1);
  list->root = (Item *) malloc(sizeof(Item)*1);
  Item *root = list->root;

  root->next = NULL;
  root->str = NULL;
  root->id = 0;
  return list;
}

void add_history(List *list, char *str){
  List *temp = list;
  int counter = 1;
  printf("1 ");
  while(temp->root->next != NULL){
    counter++;
    printf("2 ");
    temp->root = temp->root->next;
  }
  printf("3 ");

  Item *node = (Item *) malloc(sizeof(Item));
  node->next = NULL;
  node->str = str;
  node->id = counter;

  temp->root->next = node;
  // printf("%s, %d\n", temp->root->str, temp->root->id);
  
}

//char *get_history (List *list, int id){
  // Item *temp = list;
 // while(temp->id != id){
    // temp = temp -> next;
    //}

  // return temp->str;
  //}

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

