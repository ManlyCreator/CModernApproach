#include <stdio.h>

#define MAX_DIGITS 10

int segments[7];
char digits[4][4 * MAX_DIGITS];

void processDigit(int n, int pos);
void printDigits(void);

// TODO: Create a function to initializes the digits array to ' '
// TODO: Finish digits construction
// TODO: Implement printDigits

int main(void) {
  int n;

  for (int i = 0; i < MAX_DIGITS; i++) {
    scanf("%1d", &n);
    processDigit(n, i);
  }


  return 0;
}

void processDigit(int n, int pos) {
  switch (n) {
    case 0:
      segments[0] = 1;
      segments[1] = 1;
      segments[2] = 1;
      segments[3] = 1;
      segments[4] = 1;
      segments[5] = 1;
      segments[6] = 0;
      break;
    case 1:
      segments[0] = 0;
      segments[1] = 1;
      segments[2] = 1;
      segments[3] = 0;
      segments[4] = 0;
      segments[5] = 0;
      segments[6] = 0;
      break;
    case 2:
      segments[0] = 1;
      segments[1] = 1;
      segments[2] = 0;
      segments[3] = 1;
      segments[4] = 1;
      segments[5] = 0;
      segments[6] = 1;
      break;
    case 3:
      segments[0] = 1;
      segments[1] = 1;
      segments[2] = 1;
      segments[3] = 1;
      segments[4] = 0;
      segments[5] = 0;
      segments[6] = 1;
      break;
    case 4:
      segments[0] = 0;
      segments[1] = 1;
      segments[2] = 1;
      segments[3] = 0;
      segments[4] = 0;
      segments[5] = 1;
      segments[6] = 1;
      break;
    case 5:
      segments[0] = 1;
      segments[1] = 0;
      segments[2] = 1;
      segments[3] = 1;
      segments[4] = 0;
      segments[5] = 1;
      segments[6] = 1;
      break;
    case 6:
      segments[0] = 1;
      segments[1] = 0;
      segments[2] = 1;
      segments[3] = 1;
      segments[4] = 1;
      segments[5] = 1;
      segments[6] = 1;
      break;
    case 7:
      segments[0] = 1;
      segments[1] = 1;
      segments[2] = 1;
      segments[3] = 0;
      segments[4] = 0;
      segments[5] = 0;
      segments[6] = 0;
      break;
    case 8:
      segments[0] = 1;
      segments[1] = 1;
      segments[2] = 1;
      segments[3] = 1;
      segments[4] = 1;
      segments[5] = 1;
      segments[6] = 1;
      break;
    case 9:
      segments[0] = 1;
      segments[1] = 1;
      segments[2] = 1;
      segments[3] = 0;
      segments[4] = 0;
      segments[5] = 1;
      segments[6] = 1;
  }

  int colOffset = pos * 4;
  digits[0][2 + colOffset] = segments[0] ? '_' : ' ';
  digits[1][0 + colOffset] = segments[5] ? '|' : ' ';
  digits[1][1 + colOffset] = segments[6] ? '|' : ' ';
  printf(" %c \n", segments[0] ? '_' : ' ');
  printf("%c%c%c\n", segments[5] ? '|' : ' ', segments[6] ? '_' : ' ', segments[1] ? '|' : ' ');
  printf("%c%c%c\n", segments[4] ? '|' : ' ', segments[3] ? '_' : ' ', segments[2] ? '|' : ' ');
} 
