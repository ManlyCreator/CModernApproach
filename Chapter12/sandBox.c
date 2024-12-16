#include <stdio.h>

#define N 5

int main(void) {
  // Simple Pointer Arithmetic
  int a[N] = { 1, 2, 3, 4, -5 }; 
  int *p = &a[3];
  int *q = &a[1];
  int sum = 0;

  printf("p - q = %d\n", (int)(p - q));
  printf("p > q = %s\n", (int)(p > q) ? "true" : "false");

  // Pointer Arithmetic w/ Loops
  for (p = &a[0]; p < &a[N]; p++) {
    sum += *p;
  }

  printf("Sum: %d\n", sum);

  sum = 0;
  int *r = (int[]){ 1, 2, 3, 4, 5 };
  for (int i = 0; i < N; i++) {
    sum += *(r++);
  }
  printf("Sum: %d\n", sum);

  sum = 0;
  p = a;
  while (p < a + N) {
    sum += *p++;
  }
  printf("Sum: %d\n", sum);

  // Processing Multidimensional Arrays w/ Pointers
  int mult[N][N], *i;

  for (i = &mult[0][0]; i < &mult[N - 1][N]; i++)
    *i = 0;

  for (i = &mult[0][0]; i < &mult[N - 1][N]; i++)
    printf("%d ", *i);
  printf("\n");

  // Processing a Specific Row of a Multidimensional Array w/ Pointers
  int j = N - 1;

  for (i = mult[j]; i < mult[j] + N; i++)
    *i = 1;

  for (i = &mult[0][0]; i < &mult[N - 1][N]; i++)
    printf("%d ", *i);
  printf("\n");

  // Processing a Specific Column of a Multidimensional Array w/ Pointers
  int (*k)[N];
  j = 3;

  for (k = mult; k < mult + N; k++)
    (*k)[j] = 2;

  for (i = &mult[0][0]; i < &mult[N - 1][N]; i++)
    printf("%d ", *i);
  printf("\n");

  return 0;
}
