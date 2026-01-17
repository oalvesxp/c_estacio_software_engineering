#ifndef QUEUE_H
#define QUEUE_H

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