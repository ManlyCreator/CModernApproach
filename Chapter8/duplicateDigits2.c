#include <stdio.h>

int main(void) {
  long n;
  int digit;
  int digitSeen[10] = { 0 };

  printf("Enter a number: ");
  scanf("%ld", &n);

  do {
    digit = n % 10;
    digitSeen[digit]++;
    n /= 10;
  } while (n != 0);

  printf("\nDigit\tOccurrences\n");
  printf("---------------------\n");
  for (int i = 0; i < 10; i++) {
    printf("%3d\t%6d\n", i, digitSeen[i]);
  }
  printf("\n");

  return 0;
}
