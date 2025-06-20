#include <stdio.h>

int main(void) {
  int y = 1;             // lines
  char x[] = "ABCDEFGH"; // columns

  printf("Movendo o Bispo de C1 para H6...\n");

  int i = 2;    // index of column C
  int END = 7;  // index of column H

  while (i <= END)
  {
    printf("%c%d\n", x[i], y);
    i++;
    y++;
  };

  return 0;
}