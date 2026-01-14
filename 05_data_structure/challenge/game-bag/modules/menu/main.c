#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

static void menu_clear_screen() {
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

static Item 
input_item_data(void) 
{
  Item item;
  char tmp[64];

  printf("Enter item name: ");
  read_line(item.name, sizeof(item.name));

  printf("Enter item type: ");
  read_line(item.type, sizeof(item.type));

  printf("Enter item quantity: ");
  read_line(tmp, sizeof(tmp));
  
  item.quantity = atoi(tmp);

  return item;
}

static void 
option_insert(struct No** head) {
  Item data = input_item_data();
  int result = insert_item(head, data);

  if(result == 0)       printf("\nItem inserted successfully.\n");
  else if(result == 1)  printf("\nFailed to insert item: List is full (%d).\n", MAX_ITEMS);
  else if(result == -1) printf("\nFailed to insert item: Memory allocation failure.\n");
  else if(result == -2) printf("\nFailed to insert item: Invalid pointer.\n");
}

static void 
option_list(struct No** head) {
  list_items(*head);
}

static void
option_search(struct No** head) {
  char name[30];

  printf("\nEnter item name to search: ");
  read_line(name, sizeof(name));

  Item* item = search_item(*head, name);

  if(item)
  {
    printf("\nItem found: Name: %s, Type: %s, Quantity: %d\n", 
          item->name,
          item->type,
          item->quantity
        );
  }
  else printf("\nItem with name '%s' not found.\n", name);
}

static void
option_remove(struct No** head) {
  char name[30];

  printf("\nEnter item name to remove: ");
  read_line(name, sizeof(name));

  int result = remove_item(head, name);

  if(result == 0)       printf("\nItem '%s' removed successfully.\n", name);
  else if(result == -1) printf("\nItem with name '%s' not found.\n", name);
}

void
menu_print() {
  printf("\nMenu:\n");
  printf("1. Insert Item\n");
  printf("2. List Items\n");
  printf("3. Search Item\n");
  printf("4. Remove Item\n");
  printf("0. Exit\n");
  printf("Please select an option: ");
}

void menu_handle_option(int option, struct No** head) {
  switch (option)
  {
    case 1:
      option_insert(head);
      break;
    case 2:
      option_list(head);
      break;
    case 3:
      option_search(head);
      break;
    case 4:
      option_remove(head);
      break;
    case 0:
      printf("\nExiting program. Goodbye!\n");
      break;
    default:
      menu_clear_screen();
      printf("\nInvalid option. Please try again.\n");
      break;
  }
}
