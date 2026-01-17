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

int
gamePlayFromQueue(GameState *g, Part *played) {
  if(dequeue(&g->queue, played) != 0) return -1;

  Part p;
  generatePart(&p);
  enqueue(&g->queue, p);

  return 0;
}
