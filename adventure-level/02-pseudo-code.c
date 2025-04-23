#include <stdio.h>

/**
 * Início
 *   Solicito um número para o usuário
 *   Recebo esse número
 *
 *   Se o número for divisível por 2
 *     Imprima "O número é par"
 *   Senão
 *     Imprima "O número é impar"
 * Fim
 */

int main() {
  int number;

  printf("Didite um numero inteiro!\n");
  scanf("%i", &number);

  if (number % 2 == 0) {
    printf("O numero e par!\n");
  } else {
    printf("O numero e impar!\n");
  }
}