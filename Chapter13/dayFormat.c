#include <stdio.h>

int main(void) {
  int month, day, year;
  char *months[] = { 
    "January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December"
  };

  printf("Enter a date in mm/dd/yy format: ");
  scanf("%2d / %2d / %4d", &month, &day, &year);
  printf("You entered the date %s %d, %d\n", months[month - 1], day, year);

  return 0;
}
