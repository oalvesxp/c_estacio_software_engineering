#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void printChoice(int choice) {
  switch (choice) {
    case 1:
      printf("Pedra\n");
      break;
    case 2:
      printf("Papel\n");
      break;
    case 3:
      printf("Tesoura\n");
      break;
    default:
      printf("Opção inválida!\n");

  }
}

int main()
{
  SetConsoleOutputCP(CP_UTF8);
  int player, computer;

  srand(time(NULL));

  printf("\n--- JOKENPÔ ---\n");
  printf("Escolha uma opção:\n");
  printf("1 - Pedra\n");
  printf("2 - Papel\n");
  printf("3 - Tesoura\n");
  printf("\nFaça sua jogada:\n");
  scanf("%d", &player);

  computer = rand() % 3 + 1;
 
  printf("Você escolheu: ");
  printChoice(player);

  printf("Computador escolheu: ");
  printChoice(computer);

  if (player == computer)
  {
    printf("\nEMPATE!\n");
  } else if ((player == 1 && computer == 3) ||
            (player == 2 && computer == 1) ||
            (player == 3 && computer == 2)) {
      printf("\nVITÓRIA!\n");
      return 1;
    } else {
      printf("\nDERROTA!\n");
      return 0;
    }

  return 0;
}