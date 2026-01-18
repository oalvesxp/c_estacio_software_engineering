#ifndef MENU_H
#define MENU_H

#include "../../utils/read-line.h"
#include "../../modules/item/main.h"

struct No; // Forward declaration

/**
 * @brief Prints the menu options. 
 */
void menu_print();

/**
 * @brief Handles the selected menu option.
 * @param option The selected option
 * @param head Pointer to the head of the list
 */
void menu_handle_option(int option, struct No** head);

#endif