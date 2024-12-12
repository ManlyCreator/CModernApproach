#include <stdio.h>

void decompose(double n, int *intPart, double *fracPart);

int main(void) {
  double n = 4.134;
  double fracPart;
  int intPart;

  decompose(n, &intPart, &fracPart);

  printf("Int Part: %d\n", intPart);
  printf("Fraction Part: %f\n", fracPart);

  return 0;
}

void decompose(double n, int *intPart, double *fracPart) {
  *intPart = n;
  *fracPart = n - *intPart;
}
