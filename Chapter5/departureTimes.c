#include <stdio.h>

int main(void) {
  int hours, minutes, totalMinutes;

  printf("Departure Time \t\tArrival Time\n");
  printf("=======================================\n");
  printf("8:00 AM\t\t\t10:16 AM\n");
  printf("9:43 AM\t\t\t11:52 AM\n");
  printf("11:19 AM\t\t1:31 PM\n");
  printf("12:47 PM\t\t3:00 PM\n");
  printf("=======================================\n\n");

  printf("Enter a 24-hour time: ");
  scanf("%2d:%2d", &hours, &minutes);

  totalMinutes = (hours * 60) + minutes;

  if (totalMinutes <= 480) {
    printf("Closest departure is at 8:00 AM, arriving at 10:16 AM.\n");
  } else if (totalMinutes <= 583) {
    printf("Closest departure is at 9:43 AM, arriving at 11:52 AM.\n");
  } else if (totalMinutes <= 679) {
    printf("Closest departure is at 11:19 AM, arriving at 1:31 PM.\n");
  } else if (totalMinutes <= 767){
    printf("Closest departure is at 12:47 AM, arriving at 3:00 PM.\n");
  } else {
    printf("Sorry, you have missed all flights.\n");
  }

  return 0;
}
