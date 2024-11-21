#include <stdio.h>

int main(void) {
  int n, factorial;
  float e = 1.0f;

  printf("Enter a non-negative integer: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    factorial = 1;
    for (int j = 2; j <= i; j++) {
      factorial *= j;
    }
    e += 1.0f / factorial;
  }

  printf("e = %f\n", e);
}
