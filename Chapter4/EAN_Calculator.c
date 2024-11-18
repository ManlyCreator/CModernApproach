
#include <stdio.h>

int main(void) {
  int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12;
  int sum1, sum2, sum3, EAN;

  printf("Enter an EAN (xxxxxxxxxxxx): ");
  scanf(
      "%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
      &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10, &d11, &d12 
      );

  sum1 = (d2 + d4 + d6 + d8 + d10 + d12) * 3; 
  sum2 = d1 + d3 + d5 + d7 + d9 + d11;
  sum3 = sum1 + sum2;
  EAN = 9 - ((sum3 - 1) % 10);

  printf("Check Digit: %d\n", EAN);
  return 0;
}
