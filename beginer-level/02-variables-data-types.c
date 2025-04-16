#include <stdio.h>

int main() {
  /**
   * variables neeeds start with (a-z; A-Z; _)
   * never starts variables names with numbers
   */
  int integer = 1;
  float decimal = 0.2;
  double cash = 4.75;
  char option = 'C';
  char string[20] = "Osvaldo";

  /**
   * %d: Imprime um inteiro no formato decimal
   * %i: Equivalente a %d
   * %f: Imprime um número de ponto flutuante no formato padrão
   * %e: Imprime um número de ponto flutuante na notação científica
   * %c: Imprime um único caractere
   * %s: Imprime uma cadeia (string) de caracteres
   */
  printf("Integer: %i\n", integer);
  printf("Float: %f\n", decimal);
  printf("Double: %e\n", cash);
  printf("Character: %c\n", option);
  printf("String: %s\n", string);

  return 0;
}