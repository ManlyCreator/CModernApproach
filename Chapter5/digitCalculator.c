#include <stdio.h>

int main(void) {
  int n;

  printf("Enter a number: ");
  scanf("%3d", &n);

  if (n >= 0 && n < 10) {
    printf("The number has 1 digit.\n");
  } else if (n < 99) {
    printf("The number has 2 digits.\n");
  } else if (n < 999) {
    printf("The number has 3 digits.\n");
  }

  return 0;
}
