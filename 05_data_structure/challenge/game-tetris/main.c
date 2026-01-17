#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "modules/tetrisParts/part.h"
#include "modules/circularQueue/queue.h"
#include "modules/reservedParts/reserved.h"

int
main(void) {
  srand(time(NULL)); // semente para números aleatórios

  CircularQueue queue;
  initQueue(&queue);

  ReservedParts reservedParts;
  initReservedParts(&reservedParts);

  Part p;
  for(int i = 1; i <= 5; i++){
    generatePart(&p);
    enqueue(&queue, p);
  };

  printf("\n");
  dequeue(&queue, &p);
  dequeue(&queue, &p);

  reservePartFromQueue(&queue, &p, &reservedParts);
  showReservedParts(&reservedParts);

  reservePartFromQueue(&queue, &p, &reservedParts);
  showReservedParts(&reservedParts);
  
  reservePartFromQueue(&queue, &p, &reservedParts);
  showReservedParts(&reservedParts);

  reservePartFromQueue(&queue, &p, &reservedParts);
  showReservedParts(&reservedParts);

  pop(&reservedParts, &p);
  showReservedParts(&reservedParts);

  reservePartFromQueue(&queue, &p, &reservedParts);
  showReservedParts(&reservedParts);
  return 0;
}