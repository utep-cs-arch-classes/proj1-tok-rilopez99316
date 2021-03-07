#include <stdio.h>
#include "tokenizer.h"
#include <stdlib.h>

int main(){
  char arr [] = "Hello World ";
  char *ptr = &arr[0];
  char **ptr2 = &ptr;
  print_tokens(ptr2);
  
  return 0;
}
