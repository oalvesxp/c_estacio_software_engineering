#include <stdio.h>

int main(void) {
  int y = 1;              // lines
  char x[] = "ABCDEFGH";  // columns

  printf("Movendo a Rainha de D1 para A4...\n");

  int i = 3;    // index of column D
  int END = 0;  // index of column A

  do
  {
    printf("%c%d\n",x[i], y);
    i--;
    y++;
  } while (i >= END);

  return 0;
}