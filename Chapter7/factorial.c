#include <stdio.h>

// Maximum Accurate Factorial Values:
// short       | 7
// int         | 12
// long        | 20
// long long   | 20 
// float       | 35
// double      | 170
// long double | 1754

int main(void) {
  double n;
  long double factorial = 1;

  printf("Enter a number: ");
  scanf("%lf", &n);

  for (int i = 1; i <= n; i++) {
    factorial *= i;
  }

  printf("Factorial: %Lg\n", factorial);

  return 0;
}
