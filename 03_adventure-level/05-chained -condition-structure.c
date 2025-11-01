#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a = 1;
  int b = 1;

  if (!a)
  {
    printf("A e Zero!");
    return 0;
  } else if (!b)
  {
    printf("B e Zero!");
    return 0;
  }

  printf("A e B sao igual a 1!\n");
}
