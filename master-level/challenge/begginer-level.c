#include <stdio.h>

// Tamanho do Tabuleiro
#define ROWS 5
#define COLS 5

/**
 * Representação do Tabuleiro:
 * 0 = mar livre
 * 1 = navio
 */
int board[ROWS][COLS];

/**
 * Inicia o tabuleiro vazio
 */
void init_board(){
  for(int row = 0; row < ROWS; row++)
  {
    for(int col = 0; col < COLS; col++){
      board[row][col] = 0;
    }
  }
}

/**
 * Posiciona os navios no tabuleiro
 */
void place_ship(int x, int y, int length, char orientation){
  for(int i = 0; i < length; i++)
  {
    int row = x + (orientation == 'V'? i : 0);
    int col = y + (orientation == 'H'? i : 0);

    if(row >= 0 && row < ROWS && col >= 0 && col < COLS)
    {
      board[row][col] = 1;
    } else {
      printf("ERROR: Navio excede o limite do tabuleiro em (%d, %d)\n", row, col);
    }
  }
}

/**
 * Imprime as coordenadas dos navios posicionados
 */
void print_ship_coords(int x, int y, int length, char orientation){
  printf("Navio %s de tamanho %d em:\n", orientation=='V' ? "Vertical" : "Horizontal", length);
  
  for(int i = 0; i < length; i++) {
    int row = x + (orientation == 'V' ? i : 0);
    int col = y + (orientation == 'H' ? i : 0);

    printf("Parte %d: (%d, %d)\n", i + 1, row, col);
  }

  printf("\n");
}

/**
 * Imprime o estado atual do tabuleiro
 */
void print_board(){
  printf("Tabuleiro:\n");

  for(int row = 0; row < ROWS; row++)
  {
    for(int col = 0; col < COLS; col++)
    {
      printf("%d ", board[row][col]);
    }

    printf("\n");
  }

  printf("\n");
}

int main(void){
  init_board();

  // Definindo as coordenadas
  int vx = 1, vy = 2, vlen = 3; // Navio vertical em (1, 2), comprimento 3
  int hx = 3, hy = 0, hlen = 4; // Navio horizontal em (3, 0), comprimento 4

  // Posicionando navios
  place_ship(vx, vy, vlen, 'V');
  place_ship(hx, hy, hlen, 'H');

  // Exibindo coordenadas
  print_ship_coords(vx, vy, vlen, 'V');
  print_ship_coords(hx, hy, hlen, 'H');

  // Exibindo tabuleiro
  print_board();

  return 0;
}
