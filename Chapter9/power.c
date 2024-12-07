#include <stdio.h>

int power(int x, int n);

// TODO: Implement the correct recursion pattern to solve for x^n

int main(void) {
  int x, n, result;

  printf("Enter x to the power of n (x^n): ");
  scanf("%d ^ %d", &x, &n);

  result = power(x, n);

  printf("%d^%d = %d\n", x, n, result);

  return 0;
}

int power(int x, int n) {
  int temp;

  if (n <= 0)
    return 1;

  if (n % 2 == 0)
    n /= 2;
  else
    n--;

  temp = power(x, n);
  printf("n: %d\n", n);
  printf("temp: %d\n", temp);
  for (int i = 0; i < n - 1; i++) {
    temp *= x;
  }
  x *= temp;

  return x;
}
