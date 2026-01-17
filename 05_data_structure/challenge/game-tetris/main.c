#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "modules/circularQueue/queue.h"

int
main(void) {
  srand(time(NULL)); // semente para números aleatórios

  Part p;
  for(int i = 1; i <= 10; i++){
    generatePart(&p);
    printf("Peça gerada: [%c %d]\n", p.name[0], p.id);
  };

  return 0;
}