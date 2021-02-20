#include <stdio.h>
#include "tokenizer.h"

int main(){
  char arr [] = "Hello World. I am your father";
  char *ptr = &arr[0];
  printf("%d", count_words(ptr));
  return 0;
}
