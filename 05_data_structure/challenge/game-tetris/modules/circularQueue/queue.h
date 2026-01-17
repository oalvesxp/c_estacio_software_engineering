#ifndef QUEUE_H
#define QUEUE_H

#define MAX_QUEUE_SIZE 5
#define RANDOM_BLOCKS 4

typedef struct {
  char name[1];
  int id;
} Part;

/**
 * @brief Generates a random Tetris part.
 * @param p Pointer to the Part structure to be filled
 */
void generatePart(Part *p);

#endif // QUEUE_H