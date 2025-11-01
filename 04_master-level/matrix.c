#include <stdio.h>

/**
 * Matrizes em C
*/
int main(void) {
  int matrix[3][3] = {{1, 2, 3},{4, 5, 6}, {7, 8, 9}};
  int pairCount = 0;  // contador de pares 
  int oddCount = 0;   // contador de impares

  for(int row = 0; row < 3; row++)
  {
    for(int col = 0; col < 3; col++)
    {
      if(matrix[row][col] % 2 == 0)
      {
        pairCount++;
      } else {
        oddCount++;
      }
    }
  }

  printf("Total de elementos pares: %d\n", pairCount);
  printf("Total de elementos impares:  %d\n", oddCount);

  /**
   * Modificação em matriz por condicional
  */
  for(int row = 0; row < 3; row++)
  {
    for(int col = 0; col < 3; col++)
    {
      if(matrix[row][col] > 5)  // vai alterar o conteúdo da matriz se o valor for mair que 5
      {
        matrix[row][col] = -matrix[row][col]; // atribui o valor negativo
      }

      printf("%d ", matrix[row][col]);
    }

    printf("\n");
  }

  return 0;
}