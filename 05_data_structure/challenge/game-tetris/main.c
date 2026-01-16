#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 5

typedef struct {
  char name[1];
  int id;
} Part;

void
generatePart(Part *p) {
  char items[4] = {'I', 'O', 'T', 'L'};
  int index = rand() % 4;

  static int counter = 1;

  p->name[0] = items[index];
  p->id = counter++;
}

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