#include <stdio.h>

struct element {
  int content;
  struct element* next;
}; // Definição da estrutura do elemento da lista encadeada

int main() {
  struct element a, b, c; // Declaração de três elementos
  a.content = 10;
  b.content = 20;
  c.content = 30;

  a.next = &b;    // A aponta para B
  b.next = &c;    // B aponta para C
  c.next = NULL;  // C aponta para NULL (final da lista)

  struct element* current = &a; // Ponteiro para percorrer a lista
  while(current != NULL) // Enquanto não chegar ao final da lista
  {
    printf("%d\n", current->content);
    current = current->next; // Avança para o próximo elemento
  }

  return 0;
}
