#include <stdio.h>

int main(void) {
  int x, y, z;

  printf("Enter a phone number [(xxx) yyy-zzz]: ");
  scanf("(%d) %d-%d", &x, &y, &z);

  printf("You Entered: %d.%d.%d\n", x, y, z);
}
