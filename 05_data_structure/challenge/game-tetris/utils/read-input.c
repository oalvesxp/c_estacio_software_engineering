#include <stdio.h>
#include <string.h>
#include <stddef.h>

void
read_input(char *buf, size_t size) {
  if(fgets(buf, size, stdin) != NULL)
  {
    size_t len = strlen(buf);

    if(len > 0 && buf[len - 1] == '\n')
    {
      buf[len - 1] = '\0';
    }
  }
  else
  {
    if(size > 0)
    {
      buf[0] = '\0';
      clearerr(stdin);
    }
  }
}