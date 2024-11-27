#include <stdio.h>
#include <stdbool.h>

int main(void) {
  int n, digit;
  int digitSeen[10] = { false };

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  while (n > 0) {
    digit = n % 10;

    if (digitSeen[digit]) {
      printf("Array contains duplicate: %d\n", digit);
      return 1;
    }

    digitSeen[digit] = true;
    n /= 10;
  }

  printf("Array contains no duplicates.\n");

  return 0;
}
