#include <stdio.h>

int main() {
  /**
   * the scanf do not interpreter spaces and 'Enter'
   * if you need take a compost name, for example, do you need to use fgets or implents a regex on scanf
   */
  char name[20];

  printf("Enter your name: ");
  fgets(name, 20, stdin);

  printf("Hello, welcome %s", name);
}