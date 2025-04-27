#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int game()
{
  int secret, guess;

  printf("Iniciando Jogo!\n");
  srand(time(0));
  secret = rand() % 10 + 1;
  printf("Digite um número de 0 a 9:\n");
  scanf("%d", &guess);

  if (guess != secret)
  {
    printf("Você errou! O número secreto era: %d\n", secret);
    return 0;
  }

  printf("Você acertou!!!");
  return 1;
}

int main()
{
  SetConsoleOutputCP(CP_UTF8);
  int option;

  printf("Menu principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Ver Sair\n\n");

  printf("Escolha uma opção: \n");
  scanf("%d",&option);

  switch (option)
  {
    case 1:
      game();
      break;
    case 2:
      printf("Regras!\n");
      break;
    case 3:
      printf("Saindo!\n");
      break;
    default:
      printf("Opção invalida!\n");
  }
}
