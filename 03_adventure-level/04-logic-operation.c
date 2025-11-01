#include <stdio.h>

int main()
{
  int a = 2;
  int b = 1;
  int c = 0;

  /**
   * TABELA VERDADE DE && => AND
   * A  | B | A && B
   * 1    1   True
   * 1    0   False
   * 0    1   False
   * 0    0   False
   */
  if (a > 0 && b > 0)
  {
    printf("Ambos sao positivos!\n");
  }

  /**
   * TABELA VERDADE DE || => OR
   * A  | B | A && B
   * 1    1   True
   * 1    0   True
   * 0    1   True
   * 0    0   False
   */
  if (a > 0 || b > 0)
  {
    printf("Um ou ambos sao positivos!\n");
  }

  /**
   * TABELA VERDADE DE ! => NOT
   * A | NOT A
   * 1    False
   * 0    True
   */
  if (!c)
  {
    printf("O valor e ZERO!\n");
  }
}