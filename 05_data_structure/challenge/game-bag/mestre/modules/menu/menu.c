#include <stdio.h>

#include "menu.h"

void menuPrint() {
  printf("==============================================================\n");
  printf("        PLANO DE FUGA - CÓDIGO DA ILHA (NÍVEL MESTRE) \n");
  printf("==============================================================\n");
  printf("Itens na mochila: 0/%i\n", MAX_ITEMS);
  printf("Status da ordenacao por Nome: NAO ORDENADO\n");
  printf("\n");
  printf("1. Adicionar componente\n");
  printf("2. Descartar componente\n");
  printf("3. Listar componentes (Inventario)\n");
  printf("4. Organizar mochila (Ordenar componentes)\n");
  printf("5. Busca binaria por componente-chave (Por nome)\n");
  printf("6. Ativar torre de fuga\n");
  printf("------------------------------------------------------------\n");
  printf("Escolha uma opcao: ");
}

