#ifndef GAME_H
#define GAME_H

#include "../circularQueue/queue.h"
#include "../reservedParts/reserved.h"

typedef struct {
  CircularQueue queue;
  ReservedParts reserved;
  int initialized;
} GameState;

/**
 * @brief Initializes the game state.
 * @param g Pointer to the GameState structure to be initialized
 */
void initGame(GameState *g);

/**
 * @brief Plays a part from the circular queue.
 * @param g Pointer to the GameState structure
 * @param played Pointer to store the played Part
 */
int gamePlayFromQueue(GameState *g, Part *played);

/**
 * @brief Reserves a part from the circular queue.
 * @param g Pointer to the GameState structure
 * @param item Pointer to store the reserved Part
 */
int gameReserveFromQueue(GameState *g, Part *reserve);

/**
 * @brief Uses the reserved part.
 * @param g Pointer to the GameState structure
 * @param used Pointer to store the used Part
 */
int gamePlayReservedPart(GameState *g, Part *used);

#endif // GAME_H