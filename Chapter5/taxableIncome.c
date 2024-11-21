#include <stdio.h>

int main(void) {
  float income, tax;

  printf("Enter your taxable income: ");
  scanf("%f", &income);

  if (income <= 750) {
    tax = 0.01 * income;
  } else if (income <= 2250) {
    tax = 7.5 + 0.02 * income;
  } else if (income <= 3750) {
    tax = 37.5 + 0.03 * income;
  } else if (income <= 5250) {
    tax = 82.5 + 0.04 * income;
  } else if (income <= 7000) {
    tax = 142.5 + 0.05 * income;
  } else {
    tax = 230 + 0.06 * income;
  }

  printf("Tax due: $%.2f\n", tax);

  return 0;
}
