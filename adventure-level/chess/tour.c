#include <stdio.h>

int main(void) {
  int y = 3;              // lines
  char x[] = "ABCDEFGH";  // columns

  printf("Movendo a Torre de A3 para H3...\n");

  int START = 0;  // index of column A
  int END = 7;    // index of column H

  for(int i = START; i <= END; i++)
  {
    printf("%c%d\n",x[i], y);
  };

  return 0;
}