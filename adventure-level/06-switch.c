#include <stdio.h>

int main()
{
  int a = 4;

  switch (a)
  {
  case 0:
    printf("A e Zero!\n");
    break;
  case 1:
    printf("A e Um!\n");
    break;
  case 2:
    printf("A e Dois!\n");
    break;
  case 3:
    printf("A e Tres!\n");
    break;
  default:
    printf("A e Maior que 3!\n");
  }
}