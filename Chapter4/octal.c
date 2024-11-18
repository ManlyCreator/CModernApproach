#include <stdio.h>

int main(void) {
  int n, temp;

  printf("Enter a number between 0 & 32767: ");
  scanf("%d", &n);

  printf("Octal: %.5o\n", n);

  return 0;
}
