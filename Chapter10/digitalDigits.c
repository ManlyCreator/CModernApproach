#include <stdio.h>

#define MAX_DIGITS 10

int segments[7];
char digits[3][4 * MAX_DIGITS];

void clearDigits(void);
void processDigit(int n, int pos);
void printDigits(void);

int main(void) {
  int numsRead = 0;
  char ch;

  clearDigits();

  printf("Enter a number: ");
  do {
    scanf("%c", &ch);
    if (ch - '0' >= 0 && ch - '0' < 10) {
      processDigit(ch - '0', numsRead);
      numsRead++;
    }
  } while (numsRead < MAX_DIGITS && ch != '\n');

  printDigits();

  return 0;
}

/*******************************************************
 * clearDigits: Sets all elements in the digits array  *
 *              to ' '                                 *
 *******************************************************/
void clearDigits(void) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4 * MAX_DIGITS; j++) {
      digits[i][j] = ' ';
    }
  }
}

/****************************************************************
 * processDigit: Sets the proper segments to 1 or 0 depending   *
 *               on the number to be processed, then constructs *
 *               that digit within the digits array             *
 ****************************************************************/
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

  digits[0][1 + colOffset] = segments[0] ? '_' : ' ';
  digits[0][3 + colOffset] = ' ';
  digits[1][0 + colOffset] = segments[5] ? '|' : ' ';
  digits[1][1 + colOffset] = segments[6] ? '_' : ' ';
  digits[1][2 + colOffset] = segments[1] ? '|' : ' ';
  digits[1][3 + colOffset] = ' ';
  digits[2][0 + colOffset] = segments[4] ? '|' : ' ';
  digits[2][1 + colOffset] = segments[3] ? '_' : ' ';
  digits[2][2 + colOffset] = segments[2] ? '|' : ' ';
  digits[2][3 + colOffset] = ' ';
} 

/********************************************************************
 * printDigits: Iterates through each character in the digits array *
 *              and prints it to the screen                         *
 ********************************************************************/
void printDigits(void) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4 * MAX_DIGITS; j++) {
      printf("%c", digits[i][j]);
    }
    printf("\n");
  }
}
