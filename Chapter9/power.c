#include <stdio.h>

int power(int x, int n);

int main(void) {
  int x, n, result;

  printf("Enter x to the power of n (x^n): ");
  scanf("%d ^ %d", &x, &n);

  result = power(x, n);

  printf("%d^%d = %d\n", x, n, result);

  return 0;
}

int power(int x, int n) {
  int pow;

  if (n <= 0)
    return 1;


  if (n % 2 == 0) {
    n /= 2;
    pow = power(x, n);
    x = pow * pow;
  } else {
    n--;
    pow = power(x, n);
    x *= pow;
  }

  return x;
}
