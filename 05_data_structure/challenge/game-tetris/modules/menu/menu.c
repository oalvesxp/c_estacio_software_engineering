#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "menu.h"

static void menu_clear_screen() {
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

void
menu_handle_selection(int option, GameState *g) {
  switch(option) {
    case 1:
      // Use part from circular queue...blz
      break;
    case 2:
      // Reserve part from circular queue...
      break;
    case 3:
      // Use part from reserved parts...
      break;
    case 0:
      // exit
      break;
  }
}