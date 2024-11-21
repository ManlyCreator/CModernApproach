#include <stdio.h>

int main(void) {
  float n;
  float largestNum = 0.0f;

  do {
    printf("Enter a number: ");
    scanf("%f", &n);

    if (n > largestNum)
      largestNum = n;
  } while (n > 0);

  printf("Largest Number: %f\n", largestNum);
}
