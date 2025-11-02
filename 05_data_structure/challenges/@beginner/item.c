#include <stdio.h>
#include <string.h>
#include "item.h"

#define MAX_ITEMS 10

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
list_items(struct No* head, const char* name) {
  struct No* current = head;

  while(current != NULL)
  {
    printf("Name: %s, Type: %s, Quantity: %d\n", 
            current->data.name, 
            current->data.type, 
            current->data.quantity
          );
    
    current = current->next;
  }
}

void
remove_item(struct No** head) {
  if(head != NULL)
  {
    struct No* temp = *head;
    *head = (*head)->next;
    free(temp);
  }
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
