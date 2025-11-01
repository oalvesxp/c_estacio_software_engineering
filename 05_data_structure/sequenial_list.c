#include <stdio.h>

int main (void) {
  int list[5] = {10, 20, 30, 40, 50}; // Vetor de inteiros com 5 elementos
  
  for(int i = 0; i < 5; i++) {
    printf("Valor: %d\n", list[i]);
  }
  
  return 0;
}
