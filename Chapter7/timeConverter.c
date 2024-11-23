#include <ctype.h>
#include <stdio.h>

int main(void) {
  int hours, minutes;
  char dayPart;

  printf("Enter a 12-hour time: ");
  scanf("%d : %d %c", &hours, &minutes, &dayPart);

  if (toupper(dayPart) == 'P' && hours != 12) {
    hours += 12;
  } else if (toupper(dayPart) == 'A' && hours == 12) {
    hours += 12;
  }

  printf("24-Hour Time: %d:%.2d\n", hours, minutes);

  return 0;
}
