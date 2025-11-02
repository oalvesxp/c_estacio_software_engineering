#include <stdio.h>
#include <stdlib.h>
#include "utils/read-line.h"
#include "modules/item/main.h"
#include "modules/menu/main.h"

int main() {
  struct No* items = NULL;
  char opt_buf[16];

  for(;;)
  {
    menu_print();
    read_line(opt_buf, sizeof(opt_buf));
    int option = atoi(opt_buf);

    if(option == 0) break;

    menu_handle_option(option, &items);
  }

  free_items(&items);
  printf("Exiting program. Goodbye!\n");

  return 0;
}
