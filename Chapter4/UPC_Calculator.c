#include <stdio.h>

int main(void) {
  int w;
  int x1, x2, x3, x4, x5; 
  int y1, y2, y3, y4, y5; 
  int sum1, sum2, sum3, UPC;

  printf("Enter a bar code (w xxxxx yyyyy): ");
  scanf(
      "%1d %1d%1d%1d%1d%1d %1d%1d%1d%1d%1d", 
      &w, 
      &x1, &x2, &x3, &x4, &x5,
      &y1, &y2, &y3, &y4, &y5
      );

  sum1 = (w + x2 + x4 + y1 + y3 + y5) * 3;
  sum2 = x1 + x3 + x5 + y2 + y4;
  sum3 = sum1 + sum2;
  UPC = 9 - ((sum3 - 1) % 10);

  printf("UPC: %d\n", UPC);
  return 0;
}
