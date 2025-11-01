#include <stdio.h>

// Declaração das funções
int sequencial_list();
int chained_list();

int main (void) {
  printf("Lista Sequencial:\n");
  sequencial_list();

  printf("\nLista Encadeada:\n");
  chained_list();

  return 0;
}

int sequencial_list() {
  int list[5] = {10, 20, 30, 40, 50}; // Vetor de inteiros com 5 elementos

  for(int i = 0; i < 5; i++) {
    printf("Valor: %d\n", list[i]);
  }

  return 0;
}

int chained_list() {
  struct element {
    int content;
    struct element* next;
  }; // Definição da estrutura do elemento da lista encadeada

  struct element a, b, c; // Declaração de três elementos
  a.content = 10;
  b.content = 20;
  c.content = 30;

  a.next = &b; // A aponta para B
  b.next = &c; // B aponta para C

  struct element* current = &a; // Ponteiro para percorrer a lista

  while(current != NULL) // Enquanto não chegar ao final da lista
  {
    printf("Valor: %d\n", current->content);
    current = current->next; // Avança para o próximo elemento
  }

  return 0;
}
