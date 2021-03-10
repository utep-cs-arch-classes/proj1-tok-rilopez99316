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
  copy[len] = 0;
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

//Returns a freshly allocated zero-terminated vector of freshly allocated space-separated tokens from zero-terminated str.

//For example: tokeize ("hello world string") would result in:

//tokens[0] = "hello"
//tokens[1] = "world"
//tokens[2] = "string"
//tokens[3] = 0

char **tokenize(char *s){
  char *ptr3;
  char **ptr4;
  int num_words = count_words(s) + 1; // "+1" cerate space for zero terminated value in vector

  ptr3 = s; //frershly allocated string s
  ptr4 = (char**) malloc (sizeof(char*) * num_words);//freshly allocated vector

  char *temp;
  int j = 0;
  int counter = 0;

  //loop for vector
  while (j < num_words - 1){
    //sets counter for letters in word to zero
    counter = 0;

    //loop counts letters in words depending on pointer 
    for (int i = 0; non_space_char(*(ptr3+i)); i++){
      counter++;
    }

    //copies index word to temp
    temp = copy_str(ptr3, counter);
    //places it in vector
    ptr4[j] = temp;

    //moves pointer to the beginnign of next word
    ptr3 += counter+1;
    j++;
  
    printf("%s\n", temp);
  }
  // zero terminated value
  ptr4[j+1] = 0;
  printf("%d\n", ptr4[j+1]);
  return ptr4;
}
