#include <stdio.h>
#include <math.h>

void tabulate(double (*f)(double x), double first, double last, double inc);

int main(void) {
  double first, last, inc;

  printf("Enter a start value: ");
  scanf("%lf", &first);
  printf("Enter an end value: ");
  scanf("%lf", &last);
  printf("Enter a value to increment by: ");
  scanf("%lf", &inc);

  printf("  x  \t sin \n");
  printf("-----\t-----\n");
  tabulate(sin, first, last, inc);

  printf("  x  \t cos \n");
  printf("-----\t-----\n");
  tabulate(cos, first, last, inc);

  printf("  x  \t tan \n");
  printf("-----\t-----\n");
  tabulate(tan, first, last, inc);

  return 0;
}

void tabulate(double (*f)(double x), double first, double last, double inc) {
  int intervals = ceil((last - first) / inc) + 1;
  double x;
  for (int i = 0; i < intervals; i++) {
    x = first + inc * i;
    printf("%.2f\t%.2f\n", x, f(x));
  }
}
