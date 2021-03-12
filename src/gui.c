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

  
  char array1 [] = "John Cena";
  char array2 [] = "Torpedo";
  char array3 [] = "Warren Buffet";
  char array4 [] = "Titanic";
  char array5 [] = "Speedy Gonzalez";
  
  List *list = init_history();
    
  add_history(list, array1);
  printf("%s\n", list->root->next->str);
  
  add_history(list, array2);
  printf("%s\n", list->root->next->next->str);

  add_history(list, array3);
  printf("%s\n", list->root->next->next->next->str);

  add_history(list, array4);
  add_history(list, array5);

  //printf("%s\n", get_history(list, 1));
  //printf("%s\n", get_history(list, 1));
  //printf("%s\n", get_history(list, 2));


  return 0;
}
