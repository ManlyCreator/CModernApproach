#include <stdio.h>

#define PI 3.14f

int main(void) {
  float radius, volume;

  printf("Enter a radius: ");
  scanf("%f", &radius);

  volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

  printf("Volume: %.2f\n", volume);
}
