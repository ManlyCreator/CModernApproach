#include <stdio.h>

int main(void) {
  int n, m, rem;

  printf("Enter two integers: ");
  scanf("%d %d", &n, &m);

  while (n != 0) {
    rem = m % n;
    m = n;
    n = rem;
  }

  printf("Greatest Common Divisor: %d\n", m);
}
