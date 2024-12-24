#include <stdio.h>
#include <string.h>

#define N 20

int main(void) {
  char smallest[N], largest[N], current[N];
  printf("Enter a word: ");
  fgets(current, N, stdin);
  current[strlen(current) - 1] = '\0';
  strcpy(smallest, strcpy(largest, current));
  while (strlen(current) != 4) {
    printf("Enter a word: ");
    fgets(current, N, stdin);
    current[strlen(current) - 1] = '\0';
    if (strcmp(current, smallest) < 0) {
      strcpy(smallest, current);
    } else if (strcmp(current, largest) > 0) {
      strcpy(largest, current);
    }
  }
  printf("Smallest word: %s\n", smallest);
  printf("Largest word: %s\n", largest);
  return 0;
}
