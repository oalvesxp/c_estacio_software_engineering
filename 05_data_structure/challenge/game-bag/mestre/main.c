#include <stdio.h>
#include "modules/item/item.h"
#include "modules/menu/menu.h"

int
main(void){
    // printf("Hello, Game Bag!\n");

    Bag bag;
    initBag(&bag);

    menuPrint();

    // Item a = {"Health Potion", "Consumable", 5, 1};
    // Item b = {"Iron Sword", "Weapon", 1, 2};
    // Item c = {"Wooden Shield", "Armor", 1, 3};

    // pushItemToBag(&bag, a);
    
    // showBagItems(&bag);

    // pushItemToBag(&bag, b);
    // pushItemToBag(&bag, c);
    // showBagItems(&bag);

    return 0;
}