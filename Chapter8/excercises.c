#include <stdio.h>
#include <stdbool.h>

// 1.) sizeof(a) / sizeof(a[0]) is more dynamic as it ensures
//     that the second operand is of the same type as a
//
// 2.) SEE SCRATCH WORK
//
// 3.) SEE SCRATCH WORK 
//
// 4.) SEE SCRATCH WORK
//
// 10.) SEE SCRATCH WORK
//
// 11.) SEE SCRATCH WORK

/*** SCRATCH WORK ***/
int main(void) {
  // 2.)
  char ch = '9';
  int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  printf("%d\n", a[ch - '0']);

  // 3.)
  printf("Excercise 3:\n");
  bool weekend[7] = { true, [6] = true };
  for (int i = 0; i < sizeof(weekend) / sizeof(weekend[0]); i++) {
    printf("%d.) %d\n", i, weekend[i]);
  }
  printf("\n");

  // 4.)
  printf("Excercise 4:\n");
  int fibNumbers[40] = { 0, 1 };
  for (int i = 2; i < sizeof(fibNumbers) / sizeof(fibNumbers[0]); i++) {
    fibNumbers[i] = fibNumbers[i - 1] + fibNumbers[i - 2]; 
  }
  for (int i = 0; i < sizeof(fibNumbers) / sizeof(fibNumbers[0]); i++) {
    printf("%d.) %d\n", i, fibNumbers[i]);
  }
  printf("\n");

  // 10.)
  printf("Excercise 10:\n");
  char chessBoard[8][8] = {
    { 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r' },
    { 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p' },
    { ' ', '+', ' ', '+', ' ', '+', ' ', '+' },
    { '+', ' ', '+', ' ', '+', ' ', '+', ' ' },
    { ' ', '+', ' ', '+', ' ', '+', ' ', '+' },
    { '+', ' ', '+', ' ', '+', ' ', '+', ' ' },
    { 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P' },
    { 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R' }
  };
  int size = sizeof(chessBoard);
  int rows = size / sizeof(chessBoard[0]);
  int columns = rows / sizeof(chessBoard[0][0]);

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("%c ", chessBoard[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  // 11.)
  printf("Excercise 11:\n");
  char checkerBoard[8][8];

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      if ((i + j) % 2 == 0) {
        checkerBoard[i][j] = 'B';
      } else {
        checkerBoard[i][j] = 'R';
      }
      
    }
  }
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("%c ", checkerBoard[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  return 0;
}
