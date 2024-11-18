#include <stdio.h>

int main(void) {
  int num1, denom1, num2, denom2, numSum, denomSum;

  printf("Enter two fractions to be added (x1/y1 + x2/y2): ");
  scanf("%d/%d + %d/%d", &num1, &denom1, &num2, &denom2);

  numSum = (num1 * denom2) + (num2 * denom1);
  denomSum = denom1 * denom2;

  printf("Sum: %d/%d\n", numSum, denomSum);
}
