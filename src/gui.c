#include <stdio.h>
#include "tokenizer.h"
#include <stdlib.h>

int limit = 100;

int main(){
  char arr [] = "Hello World";
  char *ptr;
  char **ptr2;

  ptr = arr;
  ptr2 = (char**) malloc (sizeof(char*)*2);
  *(ptr2) = ptr;
  ptr2[1] = 0;
  
  print_tokens(ptr2);
  
  ptr2[0] = copy_str(ptr, 12);
  free_tokens(ptr2);
  print_tokens(ptr2);
  return 0;
}
