#include <stdio.h>

int main(void){
  int m;
  int p;

  printf("Digite um numero: ");
  scanf("%d", &m);

  if(m > 0){
    for (int i = 1; i <= 10; i++)
    {
      p = m * i;
      printf("%d x %d = %d \n", m, i, p);
    }
  }
  return 0;
}