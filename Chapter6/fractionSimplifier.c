#include <stdio.h>

int getGCD(int m, int n);

int main(void) {
  int num, denom, gcd;

  printf("Enter a fraction: ");
  scanf("%d / %d", &num, &denom);

  gcd = getGCD(num, denom);

  printf("Simplified: %d/%d\n", num / gcd, denom / gcd);

  return 0;
}

int getGCD(int m, int n) {
  int rem;

  while (n != 0) {
    rem = m % n;
    m = n;
    n = rem;
  }

  return m;
}
