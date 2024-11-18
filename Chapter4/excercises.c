#include <stdio.h>

// TODO: Ch. 4 Projects (Pg. 71)
int main(void) {
  for (int i = 7; i > -10; i--) {
    printf("%d: %d\n", i, i % 7);
  }
  // Excercise 14:
  // a.) ((a * b) - (c * d)) + e)
  // b.) (a / b) % (c / d)
  // c.) ((-a) - b) + (c - (+d))
  // d.) ((a * (-b)) / c) - d
  return 0;
}
