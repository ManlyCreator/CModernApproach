#include <stdio.h>

int main(void) {
  char firstInitial, lastName;

  printf("Enter your first and last name: ");
  // Stores the first initial
  scanf(" %c", &firstInitial);

  // Moves to the last character before a whitespace begins
  while (getchar() != ' ');

  // Moves lastName to the first character of the last name
  while ((lastName = getchar()) == ' ');

  // Prints subsequent characters and appends the first initial
  printf("%c", lastName);
  while ((lastName = getchar()) != '\n') {
    printf("%c", lastName);
  }
  printf(", %c\n", firstInitial);

  return 0;
}
