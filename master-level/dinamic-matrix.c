#include <stdio.h>

#define LINES 8
#define COLUMNS 8

int main(void){
  int matrix[LINES][COLUMNS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int target = 40;
  int found = 0;
  int count = 1;

  /**
   * Atribuido valores a matriz
   * de acordo com a quantidade de linhas e colunas
   * definidas nas contantes:
   *    LINES
   *    COLUMNS
   */
  for(int row = 0; row < LINES; row++)
  {
    for(int col = 0; col < COLUMNS; col++)
    {
      matrix[row][col] = count;
      count++;
      printf("%d ", matrix[row][col]);
    }
    
    printf("\n");
  }

  for(int row = 0; row < LINES; row++)
  {
    for(int col = 0; col < COLUMNS; col++)
    {
      if(matrix[row][col] == target)
      {
        printf("Elemento %d encontrado na posicao (%d, %d) da matriz!\n", target, row, col);
        found = 1;
        break;
      }
    }

    if(found) break;
  }

  if(!found)
  {
    printf("Elemento %d nao encontrado na matriz!\n", target);
  }

  return 0;
}