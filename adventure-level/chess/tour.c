#include <stdio.h>

int main(void) {
  int y = 3;
  char x[] = "ABCDEFGH";

  printf("Movendo a Torre de A3 para H3...\n");


  int START = 0;
  int END = 7;
  for(int i = START; i <= END; i++)
  {
    printf("%c%d\n",x[i], y);
  };

  return 0;
}