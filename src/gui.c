#include <stdio.h>
#include "tokenizer.h"
#include <stdlib.h>

int limit = 100;

int main(){
  char arr [] = "Hello World";
  char *ptr [limit]; 
  char **ptr2;

  for (int i; i < limit; i++){
    ptr[i] = &arr[i];
  }

  ptr2 = &ptr[0];
  
  print_tokens(ptr2);

  free_tokens(ptr2);

  print_tokens(ptr2);
  return 0;
}
