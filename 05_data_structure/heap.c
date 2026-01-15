#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct {
  char name[30];
  int age;
} Person;

typedef struct {
  Person items[MAX];
  int top;
} Heap;

/**
 * Inicializa a pilha
 */
int 
startHeap(Heap *p) {
  return p->top = -1;
}

/**
 * Verifica se a pilha está vazia
 */
int 
heapIsEmpty(Heap *p) {
  return p->top == -1;
}


/**
 * Verifica se a pilha está cheia
 */
int
heapIsFull(Heap *p) {
  return p->top == MAX -1;
}

/**
 * Adiciona um novo item a pilha
 */
void
push(Heap *p, Person data) {
  if(heapIsFull(p)) {
    printf("Pilha cheia. Não é possível inserir mais dados...\n");
    return;
  }

  p->top++;
  p->items[p->top] = data;
}

/**
 * Remove um item da pilha
 */
void
pop(Heap *p, Person *data) {
  if(heapIsEmpty(p)) {
    printf("Pilha vazia. Não é possível remover mais dados...\n");
    return;
  }

  *data = p->items[p->top];
  p->top--;
}

/**
 * Espia os valores de um item da pilha
 */
void
peek(Heap *p, Person *data) {
  if(heapIsEmpty(p)) {
    printf("Pilha vazia. Não é possível espiar dados...\n");
    return;
  }

  *data = p->items[p->top];
}

/**
 * Exibe todos os itens da pilha
 */
void
showHeap(Heap *p) {
  printf("Pilha (topo -> base):\n");
  for(int i = p->top; i >=0; i--) {
    printf("[%s, %d]\n", p->items[i].name, p->items[i].age);
  }

  printf("\n");
}

int
main() {
  Heap p;
  startHeap(&p);

  Person one = {"Ana", 20};
  Person two = {"Bruno", 35};
  Person three = {"Dayanne", 32};

  push(&p, one);
  push(&p, two);
  push(&p, three);

  showHeap(&p);

  Person remove;
  pop(&p, &remove);
  printf("Item removido da Pilha: %s, %d\n", remove.name, remove.age);

  Person show;
  peek(&p, &show);
  printf("Item atual: %s, %d\n", show.name, show.age);

  showHeap(&p);

  Person four = {"Lucas", 23};
  push(&p, four);
  showHeap(&p);

  return 0;
}