#include <ctype.h>
#include <stdio.h>

int main(void) {
  char c;
  int value = 0; 

  printf("Enter a value: ");
  while ((c = toupper(getchar())) != '\n') {
    switch (c) {
      case 'D': case 'G':
        value += 2;
        break;
      case 'B': case 'C': case 'M': case 'P':
        value += 3;
        break;
      case 'F': case 'H': case 'V': case 'W': case 'Y':
        value += 4;
        break;
      case 'K':
        value += 5;
        break;
      case 'J': case 'X':
        value += 8;
        break;
      case 'Q': case 'Z':
        value += 10;
        break;
      default:
        value++;
        break;
    }
  }

  printf("Scrabble value: %d\n", value);

  return 0;
}
