#include <stdio.h>

int main() {
  int age, registry;
  char name[100];

  printf("Digite seu nome: ");
  scanf("%s", &name);

  printf("Digite sua idade: ");
  scanf("%i", &age);

  printf("Digite seu registro: ");
  scanf("%i", &registry);

  printf("Nome: %s\nIdade: %d\nRegistro: %d\n", name, age, registry);
}