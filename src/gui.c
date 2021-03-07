#include <stdio.h>
#include "tokenizer.h"
#include <stdlib.h>

int limit = 100;

int main(){
  char arr [] = "Hello World";
  char *ptr[limit];

  for (int i = 0; i < limit; i++){
    ptr[i] = &arr[i]; 
  }
  char **ptr2 = &ptr[0];

  print_tokens(ptr2);
 
  return 0;
}
