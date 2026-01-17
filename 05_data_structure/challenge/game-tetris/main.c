#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "modules/tetrisParts/part.h"
#include "modules/circularQueue/queue.h"

int
main(void) {
  srand(time(NULL)); // semente para números aleatórios

  CircularQueue queue;
  initQueue(&queue);

  Part p;
  for(int i = 1; i <= 5; i++){
    generatePart(&p);
    enqueue(&queue, p);
  };

  printf("\n");
  dequeue(&queue, &p);
  dequeue(&queue, &p);

  return 0;
}