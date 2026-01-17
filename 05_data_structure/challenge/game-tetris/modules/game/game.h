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
//void gamePlayFromQueue(GameState *g, Part *played);

/**
 * @brief Reserves a part from the circular queue.
 * @param g Pointer to the GameState structure
 * @param reserved Pointer to store the reserved Part
 */
//void gameReserveFromQueue(GameState *g, Part *reserved);

/**
 * @brief Uses the reserved part.
 * @param g Pointer to the GameState structure
 * @param used Pointer to store the used Part
 */
//void gameUseReservedPart(GameState *g, Part *used);

#endif // GAME_H