#ifndef RESERVED_H
#define RESERVED_H

#include "../tetrisParts/part.h"

#define MAX_RESERVED_PARTS 3

typedef struct {
  Part parts[MAX_RESERVED_PARTS];
  int top;
} ReservedParts;

/**
 * @brief Initializes the reserved parts structure.
 * @param rp Pointer to the ReservedParts structure to be initialized
 */
int initReservedParts(ReservedParts *rp);

/**
 * @brief Checks if the reserved parts structure is full.
 * @param rp Pointer to the ReservedParts structure
 * @return MAX_RESERVED_PARTS value if full
 */
int reservedPartsIsFull(ReservedParts *rp);

/**
 * @brief Checks if the reserved parts structure is empty.
 * @param rp Pointer to the ReservedParts structure
 * @return -1 if empty
 */
int reservedPartsIsEmpty(ReservedParts *rp);

/**
 * @brief Pushes a Tetris part into the reserved parts structure.
 * @param rp Pointer to the ReservedParts structure
 * @param item The Tetris part to be added
 */
void push(ReservedParts *rp, Part item);

/**
 * @brief Pops a Tetris part from the reserved parts structure.
 * @param rp Pointer to the ReservedParts structure
 * @param item Pointer to store the popped Tetris part
 */
void pop(ReservedParts *rp, Part *item);

/**
 * @brief Peeks at the top Tetris part in the reserved parts structure without removing it.
 * @param rp Pointer to the ReservedParts structure
 * @param item Pointer to store the peeked Tetris part
 */
void peek(ReservedParts *rp, Part *item);

/**
 * @brief Displays all reserved Tetris parts.
 * @param rp Pointer to the ReservedParts structure
 */
void showReservedParts(ReservedParts *rp);

#endif // RESERVED_H