#ifndef MENU_H
#define MENU_H

#include "../game/game.h"
#include "../../utils/read-input.h"


/**
 * @brief Prints the menu options.
 */
void menu_print();

/**
 * @brief Handles the selected menu option.
 * @param option The selected option
 * @param g Pointer to the GameState structure
 */
void menu_handle_option(int option, GameState *g);

#endif // MENU_H