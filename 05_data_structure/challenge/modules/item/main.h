#ifndef ITEM_H
#define ITEM_H

#define MAX_ITEMS 10

typedef struct Item
{
  char name[30];
  char type[20];
  int quantity;
} Item;

struct No {
  Item data;
  struct No* next;
};

/**
 * @brief Inserts an item into the data structure.
 * @param head Pointer to the head of the list
 * @param item The item to be inserted
 * @return
 *  0 = On success,
 *  1 = Full list,
 * -1 = Memory allocation failure,
 * -2 = Invalid pointer
 */
int insert_item(struct No** head, Item item);

/**
 * @brief Removes an item from the data structure.
 * @param head Pointer to the head of the list
 * @param name Name of the item to be removed
 * @return
 *  0 = On success,
 * -1 = Item not found,
 * -2 = Invalid pointer
 */
int remove_item(struct No** head, const char* name);

/** 
 * @brief Lists all items in the data structure.
 * @param head Pointer to the head of the list
 */
void list_items(struct No* head);

/**
 * @brief Searches for an item by name.
 * @param head Pointer to the head of the list
 * @param name Name of the item to search for
 * @return Pointer to the found item or NULL if not found
 */
Item* search_item(struct No* head, const char* name);

/**
 * @brief Frees all items in the data structure.
 * @param head Pointer to the head of the list
 */
void free_items(struct No** head);

#endif
