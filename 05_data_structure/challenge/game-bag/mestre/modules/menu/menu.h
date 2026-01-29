#ifndef MENU_H
#define MENU_H

#include "../game/game.h"
// #include "../../utils/read-input.h"

/**
 * @brief Prints the game menu to the console.
 */
void menuPrint();

/**
 * @brief Handles the selected menu option.
 *
 * @param option The selected menu option.
 * @param g Pointer to the current game state.
 */
void handleMenuOption(int option, GameState *g);

#endif // MENU_H