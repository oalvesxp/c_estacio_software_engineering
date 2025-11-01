#include <stdio.h>

int main(void){
  float pi = 3.14159265;
  char c = 'A';

  printf("O valor de Pi e igual a %f\n", pi);
  printf("O valor de Pi com duas casas e %.2f\n", pi); // %.2f determina a quantidade de casas após o ponto flutuante
  printf("O caracter e %c\n", c);
  printf("Isso e uma %s\n", "String");  // %s para imprimir uma string

  return 0;
}