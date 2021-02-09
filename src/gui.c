#include <stdio.h>

int main()
{
  char input[100];
  if (fgets (input, sizeof(input), stdin)){
    printf("%s",input);
  }
  return 0;
}
