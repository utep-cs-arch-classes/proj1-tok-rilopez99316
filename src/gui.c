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
  char array2[] = "Torpedo";
  char array3[] = "Warren Buffet";
  char *str;
  str = array;
  
  
  List *list = init_history();
  add_history(list, array);
  add_history(list, array2);
  add_history(list, array3);

  
  return 0;
}
