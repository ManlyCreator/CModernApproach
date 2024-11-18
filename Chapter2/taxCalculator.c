#include <stdio.h>

int main(void) {
  float money, tax;

  printf("Enter a number in dollar-and-cents format: ");
  scanf("%f", &money);
  printf("Enter a tax amount (in percent): ");
  scanf("%f", &tax);

  tax = 1 + (tax / 100);
  money *= tax;

  printf("Money after tax: $%.2f\n", money);
}
