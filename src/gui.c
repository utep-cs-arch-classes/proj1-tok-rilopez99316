#include <stdio.h>

int main()
{
  char input[100];
  int len = 0;

  printf("Enter string: ");
  input[len] = getchar();

  while (input[len] != '\n'){
   input[++len] = getchar();
  }
  input[++len] = '\0';

  for (int i = 0; i < len; i++){
    putchar(input[i]);
  }
  return 0;
}
