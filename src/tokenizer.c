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
  char *copy = (char*) malloc (sizeof(char) *len);
  for (int i = 0; i < len; i++){
    *(copy+i) = *(src+i);
  }

  return copy;
}

//prints the tokkens pointed to by toks
void print_tokens(char **toks){
  int i = 0;
  char *temp = toks[i];
  
  while (temp[i]){
    printf("%c\n", temp[i]);
    i++;
  }
}

//Free all memory associated with toks
void free_tokens(char **toks){
  int i = 0;
  while (toks[i]){
    free(toks[i]);
    i++;
  }
  free(toks);
}
