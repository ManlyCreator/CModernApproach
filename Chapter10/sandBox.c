#include <stdio.h>

int i = 10;

void scope(void);

int main(void) {
  scope();

  printf("i in main: %d\n", i);

  return 0;
}

void scope(void) {
  int i = i;
  i = 20;
  printf("i in scope: %d\n", i);
}
