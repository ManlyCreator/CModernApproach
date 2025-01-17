#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareInt(const void *x, const void *y);
int compareStr(const void *x, const void *y);

// TODO: Reason through compareStr requiring a *(char **) cast
// TODO: Pg. 441 - Other Uses of Function Pointers

int main(void) {
  int arr[] = { 10, 2, 9, 7, 6 };
  char *strs[] = { "the", "quick", "brown", "fox", "jumped", "over", "the", "fence" };

  qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), compareInt);
  printf("Sorted Int Array: { ");
  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    printf("%d ", arr[i]);
  printf("}\n");

  qsort(strs, sizeof(strs) / sizeof(strs[0]), sizeof(char *), compareStr);
  printf("Sorted Str Array: { ");
  for (int i = 0; i < sizeof(strs) / sizeof(strs[0]); i++)
       printf("%s ", strs[i]);
  printf("}\n");
  return 0;
}

int compareInt(const void *x, const void *y) {
  return (*(int *)x - *(int *)y);
}

int compareStr(const void *x, const void *y) {
  return strcmp(*(char **)x, *(char **)y);
}
