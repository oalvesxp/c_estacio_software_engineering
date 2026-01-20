#ifndef ITEM_H
#define ITEM_H

#define MAX_ITEMS 10

typedef struct
{
  char name[30];
  char type[20];
  int quantity;
  int priority;
} Item;

typedef struct {
  Item items[MAX_ITEMS];
  int count;
} Bag;

/**
 * @brief Initializes the game bag.
 * @param bag Pointer to the Bag structure to be initialized
 * @return 0 if successful, -1 if initialization fails
 */
int initBag(Bag *bag);

/**
 * @brief Adds an item to the game bag.
 * @param bag Pointer to the Bag structure
 * @param item The item to be added
 * @return 0 if successful, -1 if the bag is full
 */
int isBagFull(Bag *bag);

/**
 * @brief Pushes an item into the game bag.
 * @param bag Pointer to the Bag structure
 * @param item The item to be pushed
 * @return 0 if successful, -1 if the bag is full
 */
int pushItemToBag(Bag *bag, Item item);

/**
 * @brief Displays all items in the game bag.
 * @param bag Pointer to the Bag structure
 * @return 0 if successful, -1 if the bag is empty
 */
int showBagItems(Bag *bag);

#endif // ITEM_H