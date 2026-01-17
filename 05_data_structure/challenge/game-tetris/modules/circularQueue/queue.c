#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void
initQueue(CircularQueue *q) {
  q->front = 0;
  q->rear = -1;
  q->size = 0;
}

int
circularQueueIsFull(CircularQueue *q) {
  return q->size == MAX_ITEMS;
}

int
enqueue(CircularQueue *q, Part item) {
  if(circularQueueIsFull(q)) {
    return -1; // Queue is full
  }

  q->rear = (q->rear + 1) % MAX_ITEMS;
  q->items[q->rear] = item;
  q->size++;

  printf("Enqueued Part: [%s, %d]\n", item.name, item.id);

  return 0; // Success
}

int
dequeue(CircularQueue *q, Part *item) {
  if(q->size == 0) {
    return -1; // Queue is empty
  }

  *item = q->items[q->front];
  q->front = (q->front + 1) % MAX_ITEMS;
  q->size--;

  printf("Dequeued Part: [%s, %d]\n", item->name, item->id);

  Part new;
  generatePart(&new);
  enqueue(q, new); // Refill the queue after dequeue

  printf("\n");

  return 0; // Success
}

int
reservePartFromQueue(CircularQueue *q, Part *item, ReservedParts *reserved) {
  if(q->size == 0) return -1; // Queue is empty
  if(reservedPartsIsFull(reserved)) return -1; // Reserved parts full

  *item = q->items[q->front];
  q->front = (q->front + 1) % MAX_ITEMS;
  q->size--;
  push(reserved, *item);

  printf("Reserved Part from Queue: [%s, %d]\n", item->name, item->id);

  Part new;
  generatePart(&new);
  enqueue(q, new); // Refill the queue after reservation

  printf("\n");

  return 0; // Success
}
