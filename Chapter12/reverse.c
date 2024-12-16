#include <stdio.h>

#define N 5

int main(void) {
  int nums[N], *p;

  printf("Enter %d numbers: ", N);

  for (p = nums; p < nums + N; p++)
    scanf(" %d, ", p);

  p = nums + (N - 1);

  while (p >= nums) {
    printf("%d%s", *p, p > nums ? ", " : "\n");
    p--;
  }

  return 0;
}
