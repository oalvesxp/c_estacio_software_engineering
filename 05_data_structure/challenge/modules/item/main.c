#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * @brief Counts the number of items in the linked list.
 */
static int 
count_items(const struct No* head) {
  int count = 0;
  while(head)
  {
    count++;
    head = head->next;
  }

  return count;
}

int 
insert_item(struct No** head, Item item) {
  if(head == NULL) return -2;

  if(count_items(*head) >= MAX_ITEMS)
  {
    return 1;
  }

  struct No* new_node = (struct No*)malloc(sizeof(struct No));
  if(new_node == NULL)
  {
    return -1; 
  }

  new_node->data = item;
  new_node->next = *head;
  *head = new_node;

  return 0;
}

void 
list_items(struct No* head) {
  struct No* current = head;

  while(current != NULL)
  {
    printf("\nName: %s, Type: %s, Quantity: %d\n", 
            current->data.name, 
            current->data.type, 
            current->data.quantity
          );
    
    current = current->next;
  }
}

int
remove_item(struct No** head, const char* name) {
  if(head != NULL)
  {
    struct No* previous = NULL;
    struct No* current = *head;

    while(current)
    {
      if(strcmp(current->data.name, name) == 0)
      {
        if(previous) previous->next = current->next;
        else *head = current->next;

        free(current);
        return 0;
      }
      previous = current;
      current = current->next;
    }
    
    return -1; // Not found
  }

  return -2; // Invalid pointer
}

Item* 
search_item(struct No* head, const char* name) {
  while(head != NULL) {
    if(strcmp(head->data.name, name) == 0)
    {
      return &head->data;
    }

    head = head->next;
  }
  
  return NULL;
}

void 
free_items(struct No** head) {
  if (head == NULL) return;
  struct No* cur = *head;

  while (cur) {
    struct No* nxt = cur->next;
    free(cur);
    cur = nxt;
  }
  *head = NULL;
}