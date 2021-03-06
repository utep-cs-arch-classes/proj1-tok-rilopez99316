#include <stdio.h>
#include "tokenizer.h"
#include <stdlib.h>

int main(){
  char arr [] = "Hello World";
  char *ptr = &arr[0];
  printf("%s\n",copy_str(ptr,1));
  
  return 0;
}
