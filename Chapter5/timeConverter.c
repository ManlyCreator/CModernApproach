#include <stdio.h>

int main(void) {
  int hours, minutes;  
  char* dayPart;

  printf("Enter a valid 24-hour time: ");
  scanf("%2d:%2d", &hours, &minutes);

  if (hours > 11) {
    dayPart = hours != 24 ? "PM" : "AM";
    hours = hours % 12;
  } else {
    dayPart = "AM";
  }

  printf("%d:%.2d %s\n", hours % 12 == 0 ? 12 : hours, minutes, dayPart);

  return 0;
}
