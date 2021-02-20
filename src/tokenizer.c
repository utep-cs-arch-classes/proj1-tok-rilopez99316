#include <stdio.h>
#include "tokenizer.h"

int space_char(char c){
  if (c == ' ' | c == '\t' | c == '\n')
    return 1;
  return 0;
}

int non_space_char(char c){
  if (c != ' ' &  c != '\t' & c != '\n')
    return 1;
  return 0;
}

char *word_start(char *str){
  int i = 1;
  while (i != '\0'){
    i++;
  }
  return str + 1;
}

int count_words(char *str){
  int words = 0;
  int i = 0;
  for (; *str != '\0'; str++){
    if (*str == ' ' && *str +1 != ' '){
      words++;
    }
  }
  return words + 1;
}
