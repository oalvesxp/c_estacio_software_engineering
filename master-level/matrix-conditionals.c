#include <stdio.h>

int main(void){
  int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int target = 7;
  int found = 0;

  // Busca condicional do target
  for(int row = 0; row < 3; row++)
  {
    for(int col = 0; col < 3; col++)
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