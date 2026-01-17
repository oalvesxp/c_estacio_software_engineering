#include <stdio.h>
#include <stdlib.h>
#include "reserved.h"

int
initReservedParts(ReservedParts *rp) {
  return rp->top = -1;
}

int
reservedPartsIsFull(ReservedParts *rp) {
  return rp->top == MAX_RESERVED_PARTS - 1;
}

int
reservedPartsIsEmpty(ReservedParts *rp) {
  return rp->top == -1;
}

void
push(ReservedParts *rp, Part item) {
  if(reservedPartsIsFull(rp)) {
    printf("Reserved parts full. Cannot reserve more parts...\n");
    return;
  }

  rp->top++;
  rp->parts[rp->top] = item;
}

void
pop(ReservedParts *rp, Part *item) {
  if(reservedPartsIsEmpty(rp)) {
    printf("No reserved parts. Cannot pop parts...\n");
    return;
  }

  *item = rp->parts[rp->top];
  rp->top--;

  printf("Popped reserved part: [%c, %d]\n", item->name[0], item->id);
}

void
peek(ReservedParts *rp, Part *item) {
  if(reservedPartsIsEmpty(rp)) {
    printf("No reserved parts. Cannot peek parts...\n");
    return;
  }

  *item = rp->parts[rp->top];
}

void
showReservedParts(ReservedParts *rp) {
  printf("Reserved Parts (top -> bottom):\n");
  for(int i = rp->top; i >=0; i--) {
    printf("[%c, %d]\n", rp->parts[i].name[0], rp->parts[i].id);
  }

  printf("\n");
}
