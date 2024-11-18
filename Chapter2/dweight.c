#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void) {
  int height, length, width, volume;

  printf("Enter a Height (in): ");
  scanf("%d", &height);
  printf("Enter a Length (in): ");
  scanf("%d", &length);
  printf("Enter a Width (in): ");
  scanf("%d", &width);

  volume = height * length * width;

  printf("Volume (in^3): %d\n", volume);
  printf(
      "Dimensional Weight (lbs): %d\n",
      (volume + (INCHES_PER_POUND - 1)) / INCHES_PER_POUND
  );

  return 0;
}
