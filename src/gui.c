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

  printf("%s\n", *(ptr2));

  ptr2[0] = copy_str(ptr, 12);
  free(*(ptr2));
  printf("%s\n", *(ptr2));

  return 0;
}
