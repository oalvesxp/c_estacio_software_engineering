#include <stdio.h>

#include "item.h"

int
initBag(Bag *b){
  if(b == NULL) return -1;

  b->count = 0;
  return 0;
}

int
isBagFull(Bag *b){
  if(b == NULL) return -1;

  return b->count >= MAX_ITEMS ? -1 : 0;
}

int
pushItemToBag(Bag *b, Item item){
  if(b == NULL) return -1;
  if(isBagFull(b) == -1) return -1;

  b->items[b->count] = item;
  b->count++;
  return 0;
}

int
showBagItems(Bag *b){
  if(b == NULL) return -1;
  if(b->count == 0) return -1;

  printf("Items in the bag:\n");
  for(int i = 0; i < b->count; i++){
    Item item = b->items[i];
    printf("Item %d:\n", i + 1);
    printf("  Name: %s\n", item.name);
    printf("  Type: %s\n", item.type);
    printf("  Quantity: %d\n", item.quantity);
    printf("  Priority: %d\n", item.priority);
  }
  return 0;
}