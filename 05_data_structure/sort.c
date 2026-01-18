#include <stdio.h>

void sort(int* a, int* b){
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

int main(){
  int x = 5;
  int y = 3;
  sort(&x, &y);
  printf("a: %d, b: %d\n", x, y);

  return 0;
}
