#include <stdio.h>

int main(void) {
  int a[] = { 3, 5, 7, [4] = 8, 1, 2, [14] = 10};

  for (int i = 0; i < 15; i++) {
    printf("%d.) %d\n", i, a[i]);
  }

  printf("a: %ld\n", sizeof(a));
  printf("int: %ld\n", sizeof(int));
  printf("# Elements in a: %ld\n", sizeof(a) / sizeof(int));
}
