#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int main(void) {
  char *reminders[MAX_REMIND];
  char dayTimeStr[10], msgStr[MSG_LEN + 1];
  int day, hour, minute, i, j, numRemind = 0;

  while (1) {
    if (numRemind == MAX_REMIND) {
      printf("-- NO SPACES LEFT --\n");
      break;
    }

    printf("Enter a reminder (day hour:minute message): ");
    scanf("%d", &day);

    if (day < 0 || day > 31) {
      printf("Invalid day entered\n");
      continue;
    }
    if (day == 0)
      break;

    scanf("%d:%d", &hour, &minute);
    fgets(msgStr, MSG_LEN + 1, stdin);
    sprintf(dayTimeStr, "%2d %.2d:%.2d", day, hour, minute);

    for (i = 0; i < numRemind; i++)
      if (strcmp(dayTimeStr, reminders[i]) < 0)
        break;
    for (j = numRemind; j > i; j--)
      reminders[j] = reminders[j - 1];

    reminders[i] = malloc(strlen(dayTimeStr) + strlen(msgStr) + 1);
    if (!reminders[i]) {
      printf("*** Could not allocate memory ***");
      break;
    }
    strcpy(reminders[i], dayTimeStr);
    strcat(reminders[i], msgStr);

    numRemind++;
  }

  printf("-- DAY REMINDER --\n");
  for (int i = 0; i < numRemind; i++) {
    printf("%s", reminders[i]);
    free(reminders[i]);
  }

  return 0;
}
