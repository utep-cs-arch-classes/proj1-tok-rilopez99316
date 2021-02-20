#include <stdio.h>
#include "tokenizer.h"
#include <stdlib.h>

int main(){
  char arr [] = "Hello World";
  char *ptr = &arr[0];
  //printf("%d", count_words(ptr));
  printf("%c\n", *word_start(ptr));
  return 0;
}
