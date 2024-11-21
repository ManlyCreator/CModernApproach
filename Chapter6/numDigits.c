#include <stdio.h>

int main(void) {
  int n;
  int digits = 0;

  printf("Enter a number: ");
  scanf("%d", &n);

  do {
    n /= 10;
    digits++;
  } while (n != 0);

  printf("Number of digits: %d\n", digits);

  return 0;
}
