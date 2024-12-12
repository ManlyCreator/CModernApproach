#include <stdio.h>

#define N 10

void maxMin(int a[], int size, int *max, int *min);

int main(void) {
  int max, min;
  int a[] = { 1, 3, -2, 4, 11, 5, 8, 9, 10, -5 };

  maxMin(a, N, &max, &min);
  printf("Max: %d\n", max);
  printf("Min: %d\n", min);

  return 0;
}

void maxMin(int a[], int size, int *max, int *min) {
  *max = a[0];
  *min = a[0];
  for (int i = 0; i < size; i++) {
    if (a[i] > *max)
      *max = a[i];
    if (a[i] < *min)
      *min = a[i];
  }
}
