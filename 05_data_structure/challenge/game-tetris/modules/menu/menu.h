#ifndef MENU_H
#define MENU_H

#include "../game/game.h"
#include "../../utils/read-input.h"


/**
 * @brief Prints the menu options.
 */
void menuPrint();

/**
 * @brief Handles the selected menu option.
 * @param option The selected option
 * @param g Pointer to the GameState structure
 */
void handleMenuOption(int option, GameState *g);

#endif // MENU_H