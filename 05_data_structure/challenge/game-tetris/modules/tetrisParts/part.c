#include <stdio.h>
#include <stdlib.h>
#include "part.h"

void
generatePart(Part *p) {
  char items[4] = {'I', 'O', 'T', 'L'};
  int index = rand() % (sizeof(items));

  static int counter = 1;

  p->name[0] = items[index];
  p->id = counter++;
}
