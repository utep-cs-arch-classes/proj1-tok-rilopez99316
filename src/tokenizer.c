#include <stdio.h>
#include "tokenizer.h"
#include <stdlib.h>

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

//Return lenth characters from src
//Return a freshlly allocated new zero-terminated string containing <len> chars from <inStr>
char *copy_str(char *src, short len){
  char *str = (char *) malloc (len + 1); // The +1 stands for zero termination
  char * tmp = str;

  while (*src != '\0'){
    *tmp = *src;
    *tmp++;
    *src++;
  }
  *tmp = '\0';
  
  return str;
}

//prints the tokkens pointed to by toks
void print_tokens(char **toks){
  printf("%s\n", *toks);
}
