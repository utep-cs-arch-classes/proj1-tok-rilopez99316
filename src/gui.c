#include <stdio.h>
#include "tokenizer.h"
#include <stdlib.h>
#include "history.h"

int main(){
  char arr [] = "Hello World";
  char *ptr;
  char **ptr2;

  ptr = arr;
  ptr2 = (char**) malloc (sizeof(char*)*2);
  *(ptr2) = ptr;
  ptr2[1] = 0;
  
  ptr2[0] = copy_str(ptr, 12);

  tokenize("Hello world string");

  
  char array[] = "John Cena";
  char *str;
  str = array;
  
  //List *list = (List *) malloc(sizeof(List));
  //list->root = (Item *) malloc(sizeof(Item));
  //Item *root = list->root;

  // list->root-> next = NULL;
  // list->root->str = array;
  //list->root->id = 5;

  List *list = init_history();
  add_history(list, array);
  
  printf("%s, %d\n", list->root->str, list->root->id);
  return 0;
}
