#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "modules/game/game.h"

int
main(void) {
  srand(time(NULL)); // semente para números aleatórios
  GameState gameState;
  
  initGame(&gameState);

  return 0;
}