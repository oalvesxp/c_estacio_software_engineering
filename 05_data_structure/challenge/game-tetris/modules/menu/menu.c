#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "menu.h"

static void menuClearScreen() {
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

static void waitForEnter() {
  printf("Press Enter to continue...");
  
  int c;
  while((c = getchar()) != '\n' && c != EOF) {}; // Clear input buffer

  menuClearScreen();
}

void
menuPrint(){
  printf("=== TETRIS MENU ===\n");
  printf("1. Play part from queue\n");
  printf("2. Reserve part\n");
  printf("3. Use reserved part\n");
  printf("0. Exit\n");
  printf("===================\n");
  printf("Select an option: ");
}

void
handleMenuOption(int option, GameState *g) {
  Part p;

  switch(option) {
    case 1:
      if(gamePlayFromQueue(g, &p) == 0) {
        printf("Played part: %c (ID: %d)\n", p.name[0], p.id);
      } else {
        printf("Failed to play part from queue.\n");
      }
      break;
    case 2:
      // Reserve part from circular queue...
      break;
    case 3:
      // Use part from reserved parts...
      break;
    case 0:
      // Exit handled in main loop
      return;
    default:
      printf("Invalid option. Please try again.\n");
      break;
  }

  waitForEnter();
}