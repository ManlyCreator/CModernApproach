#include <stdio.h>

int main(void) {
  int days, start, weekOffset;

  printf("Enter number of days in month: ");
  scanf("%d", &days);

  printf("Enter starting day of the week: ");
  scanf("%d", &start);

  for (int i = 1; i < start; i++) {
    printf("   ");
  }

  for (int i = 1; i <= days; i++) {
    weekOffset = i + (start - 1);

    printf("%2d ", i);

    if (weekOffset % 7 == 0) {
      printf("\n");
    }
  }
  printf("\n");

  return 0;
}
