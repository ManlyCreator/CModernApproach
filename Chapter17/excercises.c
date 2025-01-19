#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1.)
void *smalloc(size_t nBytes);

// 2.)
char *duplicate(const char* src);

// 3.)
int *createArray(size_t n, int initialValue);

// 4.)
typedef struct { int x, y; } point;
typedef struct { point upperLeft, lowerRight; } rectangle;

// 5.) (b), (c)

// TODO: Excercise 6, Pg. 453

/*** SCRATCH WORK ***/
int main(void) {
  // 1.)
  char *str = smalloc(0);

  // 2.)
  printf("*** EXCERCISE 2 ***\n");
  char *str1 = "Hello", *str2 = duplicate(str1);
  printf("str1: %p\n", str1);
  printf("str2: %p\n", str2);
  printf("%s\n", str2);

  // 3.)
  printf("\n*** EXCERCISE 3 ***\n");
  int *intArr = createArray(10, 3);
  for (int i = 0; i < 10; i++)
    printf("%d ", intArr[i]);
  printf("\n");

  // 4.)
  printf("\n*** EXCERCISE 4 ***\n");
  rectangle *rect = malloc(sizeof(rectangle));
  rect->upperLeft = (point){10, 25};
  rect->lowerRight = (point){20, 15};
  printf("Upper Left: (%d, %d)\n", rect->upperLeft.x, rect->upperLeft.y);
  printf("Lower Right: (%d, %d)\n", rect->lowerRight.x, rect->lowerRight.y);

  return 0;
}

// 1.)
void *smalloc(size_t nBytes) {
  void *p = malloc(nBytes);
  if (!p) {
    printf("malloc failed to allocate memory, extiting\n");
    exit(EXIT_FAILURE);
  }
  return p;
}

// 2.)
char *duplicate(const char* src) {
  char *dest = malloc(strlen(src) + 1);

  if (!dest) {
    printf("malloc failed to allocate memory, exiting\n");
    exit(EXIT_FAILURE);
  }

  strcpy(dest, src);

  return dest;
}

// 3.)
int *createArray(size_t n, int initialValue) {
  int *arr = malloc(sizeof(int) * n);

  if (!arr)
    return NULL;

  for (int i = 0; i < n; i++)
    arr[i] = initialValue;

  return arr;
}
