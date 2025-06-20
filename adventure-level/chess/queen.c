#include <stdio.h>

int main(void) {
  int y = 1;
  char x[] = "ABCDEFGH";

  printf("Movendo a Rainha de D1 para A4...\n");

  int START = 3;
  int END = 0;
  for(int i = START; i >= END; i--)
  {
    printf("%c%d\n",x[i], y);
    y++;
  };

  return 0;
}