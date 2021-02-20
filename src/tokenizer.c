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
  if (*str == '\0'){
    return str;
  }
  while(*str != ' '){
    str++;
  }
  return str+1;
}

char *word_end(char *str){
  while(*str != ' '){
    str++;
  }
  return str;
}

int count_words(char *str){
  int words = 0;
  for (; *str != '\0'; str++){
    if (*str == ' ' && *str +1 != ' '){
      words++;
    }
  }
  return words + 1;
}
