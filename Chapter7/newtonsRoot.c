#include <stdio.h>
#include <math.h>

#define TOLERANCE 0.00001

int main(void) {
  double x, xToY;
  double y = 1.0;

  printf("Enter a positive integer: ");
  scanf(" %lf", &x);

  do {
    xToY = x / y;
    y = (y + xToY) / 2;
  } while (fabs(xToY - y) > xToY * TOLERANCE);

  printf("Square Root: %.5lf\n", y);

  return 0;
}
