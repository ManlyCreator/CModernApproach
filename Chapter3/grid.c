#include <stdio.h>

int main(void) {
  int r1c1, r1c2, r1c3, r1c4;
  int r2c1, r2c2, r2c3, r2c4;
  int r3c1, r3c2, r3c3, r3c4;
  int r4c1, r4c2, r4c3, r4c4;

  printf("Enter 16 numbers from 1 - 16 in any order: ");
  scanf(
      "%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
      &r1c1, &r1c2, &r1c3, &r1c4,
      &r2c1, &r2c2, &r2c3, &r2c4,
      &r3c1, &r3c2, &r3c3, &r3c4,
      &r4c1, &r4c2, &r4c3, &r4c4
      );

  printf("%2d %2d %2d %2d\n", r1c1, r1c2, r1c3, r1c4);
  printf("%2d %2d %2d %2d\n", r2c1, r2c2, r2c3, r2c4);
  printf("%2d %2d %2d %2d\n", r3c1, r3c2, r3c3, r3c4);
  printf("%2d %2d %2d %2d\n", r4c1, r4c2, r4c3, r4c4);
  return 0;
}
