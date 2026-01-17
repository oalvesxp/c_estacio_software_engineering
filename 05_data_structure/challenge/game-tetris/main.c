#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "modules/game/game.h"
#include "modules/menu/menu.h"

int
main(void) {
  srand(time(NULL)); // semente para números aleatórios
  char input_buf[16];

  GameState gameState;
  initGame(&gameState);

  for(;;) 
  {
    menuPrint(&gameState);
    read_input(input_buf, sizeof(input_buf));
    int option = atoi(input_buf);

    handleMenuOption(option, &gameState);
    
    if(option == 0){
      printf("Exiting the game. Goodbye!\n");
      break;
    };
  }

  return 0;
}