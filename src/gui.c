#include <stdio.h>

int main()
{
  char input[100];
  scanf("%[^\n]s", &input);
  printf("%s\n", input);
  return 0;
}
