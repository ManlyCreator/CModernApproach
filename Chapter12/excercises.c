#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define DAYS 7
#define HOURS 24

// 1.a.) 14
//   b.) 34
//   c.) 4
//   d.) true
//   e.) false
//
// 2.) The issue here is that two pointers are being added, which is
//     illegal in C. The best solution involvoing pointers would be
//     low + (high - low) / 2. (high - low) / 2 is evaluated first,
//     which yields an integer. This is then added to low (pointer +
//     integer arithmetic), which would yield the correct middle address
//     of the referenced array.
//
// 3.) The program fragment in this example reverses the contents
//     of the a array using pointers.
//
// 5.a.) illegal ; int* == int
//   b.) legal ; true
//   c.) legal ; true
//   d.) legal ; true
//
// 6.) SEE SCRATCH WORK
//
// 7.) SEE SCRATCH WORK
//
// 9.) SEE SCRATCH WORK
//
// 14.) SEE SCRATCH WORK
//
// 15.) SEE SCRATCH WORK

/*** SCRATCH WORK ***/

// 6.)
int sumArray(int *a, int n);

// 7.)
int search(int *a, int size, int key);

// 9.)
double innerProduct(double *a, double *b, int size);

// 14.)
void initalizeTemps(int *temps, int size);

// 15.)
void printRowI(int *arr, int rows, int cols, int i);

int main(void) {
  // 1.)
  int a[] = { 5, 15, 34, 54, 14, 2, 52, 72 };
  int *p = &a[1], *q = &a[5];

  printf("%d\n", (int)(q - p));
  printf("%d\n", *(a + (q - p)));

  // 2.)
  int *high = &a[7];
  int *low = &a[0];
  int *middle = low + (high - low) / 2;
  printf("%d\n", *middle);

  // 3.)
  int arr[N] = { 1, 2, 3, 4, 5 };
  p = &arr[0], q = &arr[N - 1];
  int temp;
  while (p < q) {
    temp = *p;
    *p++ = *q;
    *q-- = temp;
  } 
  for (p = arr; p < arr + N; p++)
    printf("%d ", *p);
  printf("\n");

  // 5.)
  int newA[N] = { 1, 2, 3, 4, 5 };
  int *newP = newA;
  printf("%d\n", newP[0] == newA[0]);
  printf("%d\n", newP[4]);

  // 6.)
  printf("Sum: %d\n", sumArray(newA, N));

  // 7.)
  int key = 54;
  int size = 7;
  printf("a contains %d? %s\n", key, search(a, size, key) ? "true" : "false");

  // 9.)
  double arr1[] = { 1, 2, 3, 4, 5 };
  double arr2[] = { 1, 2, 3, 4, 5 };
  printf(
      "Inner product of arr1 & arr2: %.2f\n",
      innerProduct(arr1, arr2, sizeof(arr1) / sizeof(arr1[0]))
  );

  // 14.)
  int temps[DAYS][HOURS];
  initalizeTemps(temps[0], DAYS * HOURS);
  printf(
      "Found 32? %s\n",
      search(temps[0], DAYS * HOURS, 32) ? "true" : "false"
  );
  printRowI(temps[0], DAYS, HOURS, DAYS - 1);


  return 0;
}

// 6.)
int sumArray(int *a, int n) {
  int sum = 0;
  int *p = a;
  
  while (p < a + n)
    sum += *(p++);

  return sum;
}

// 7.)
int search(int *a, int size, int key) {
  int *p = a;
  while (p < a + size) 
    if (*(p++) == key)
      return 1;

  return 0;
}

// 9.)
double innerProduct(double *a, double *b, int size) {
  double product = 0;
  double *i = a, *j = b;

  while (i < a + size)
    product += *(i++) * *(j++); 

  return product;
}

// 14.)
void initalizeTemps(int *temps, int size) {
  int *p = temps;
  time_t seed;

  time(&seed);

  while (p < temps + size) {
    srand(seed++);
    *p++ = rand() % 33;
  }

  p = temps;
  while (p < temps + size)
    printf("%d ", *p++);
  printf("\n");
}

// 15.)
void printRowI(int *arr, int rows, int cols, int i) {
  int *p = arr + (i * cols);

  while (p < arr + ((i + 1) * cols))
    printf("%d ", *p++);
  printf("\n");
}
