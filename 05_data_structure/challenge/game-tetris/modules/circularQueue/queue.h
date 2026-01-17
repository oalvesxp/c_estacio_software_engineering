
#ifndef QUEUE_H
#define QUEUE_H

#include "../tetrisParts/part.h"

#define MAX_ITEMS 5

typedef struct {
  Part items[MAX_ITEMS];
  int front;
  int rear;
  int size;
} CircularQueue;

/**
 * @brief Initializes the circular queue.
 * @param q Pointer to the CircularQueue structure to be initialized
 */
void initQueue(CircularQueue *q);

/**
 * @brief Enqueues a Tetris part into the circular queue.
 * @param q Pointer to the CircularQueue structure
 * @return 0 if successful, -1 if the queue is full
 */
int isFull(CircularQueue *q);

/**
 * @brief Checks if the circular queue is empty.
 * @param q Pointer to the CircularQueue structure
 * @param item The Tetris part to be added
 * @return 1 if empty, 0 otherwise
 */
int enqueue(CircularQueue *q, Part item);

/**
 * @brief Dequeues a Tetris part from the circular queue.
 * @param q Pointer to the CircularQueue structure
 * @param item Pointer to the Part structure to store the dequeued part
 * @return 0 if successful, -1 if the queue is empty
 */
int dequeue(CircularQueue *q, Part *item);

//TODO int reservePart(CircularQueue *q, Part *item, ReservedParts *reserved);

#endif // QUEUE_H