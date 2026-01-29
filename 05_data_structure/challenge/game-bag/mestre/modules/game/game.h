#ifndef GAME_H
#define GAME_H

#include "../item/item.h"

typedef struct {
    Item items;
    int initialized;
} GameState;

#endif // GAME_H