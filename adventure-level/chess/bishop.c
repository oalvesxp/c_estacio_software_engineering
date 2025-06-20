#include <stdio.h>

int main(void) {
  int y = 1;
  char x[] = "ABCDEFGH";

  printf("Movendo o Bispo de C1 para H6...\n");

  int START = 2;
  int END = 7;
  for(int i = START; i <= END; i++)
  {
    printf("%c%d\n",x[i], y);
    y++;
  };

  return 0;
}