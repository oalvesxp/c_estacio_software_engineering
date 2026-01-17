#include <stdio.h>
#include <stdlib.h>
#include "game.h"

void
initGame(GameState *g) {
  if (g == NULL) {
    return;
  }

  initQueue(&g->queue);
  initReservedParts(&g->reserved);

  Part p;
  for(int i = 0; i < MAX_ITEMS; i++) {
    generatePart(&p);
    enqueue(&g->queue, p);
  }

  g->initialized = 1;
}