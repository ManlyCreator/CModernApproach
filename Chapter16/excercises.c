#include <stdio.h>

// 6.)
typedef struct { int hours, minutes, seconds; } time;
time splitTime(long seconds);
void printTime(time t);

// 7.)
typedef struct { int numerator, denominator; } fraction;
int getGCD(fraction f);
fraction fractionReduce(fraction f);
fraction fractionAdd(fraction f1, fraction f2);
fraction fractionSub(fraction f1, fraction f2);
fraction fractionMul(fraction f1, fraction f2);
fraction fractionDiv(fraction f1, fraction f2);
void printFraction(fraction f);

// TODO: Excercise 18, pg. 411
// 18.)
typedef enum { EMPTY, PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING } Piece;
typedef enum { WHITE, BLACK } Color;
typedef struct { Piece piece; Color color; } Square;

/*** SCRATCH WORK ***/
int main(void) {
  // 6.)
  printf("*** EXCERCISE 6 ***\n");
  time t1 = splitTime(7325);
  printTime(t1);

  // 7.)
  printf("*** EXCERCISE 7 ***\n");
  fraction f1 = { 5, 9 };
  fraction f2 = { 6, 36 };
  fraction f3;
  printf("GCD: %d\n", getGCD(f1));
  printf("Addition: ");
  f3 = fractionAdd(f1, f2);
  printFraction(f3);
  printf("Subtraction: ");
  f3 = fractionSub(f1, f2);
  printFraction(f3);
  printf("Multiplication: ");
  f3 = fractionMul(f1, f2);
  printFraction(f3);
  printf("Division: ");
  f3 = fractionDiv(f1, f2);
  printFraction(f3);
  
  // 18.)
  Square chessBoard[8][8] = {
    { {ROOK, BLACK}, {KNIGHT, BLACK}, {BISHOP, BLACK}, {QUEEN, BLACK}, {KING, BLACK}, {BISHOP, BLACK}, {KNIGHT, BLACK}, {ROOK, BLACK}  },
    { {PAWN, BLACK}, {PAWN, BLACK},   {PAWN, BLACK},   {PAWN, BLACK},  {PAWN, BLACK}, {PAWN, BLACK},   {PAWN, BLACK},   {PAWN, BLACK}, }
  };
  return 0;
}

// 6.)
time splitTime(long seconds) {
  int hours = seconds / 3600;
  seconds %= 3600;
  int minutes = seconds / 60;
  seconds %= 60;
  return (time){hours, minutes, seconds};
}

void printTime(time t) {
  printf("Hours: %d\n", t.hours);
  printf("Minutes: %d\n", t.minutes);
  printf("Seconds: %d\n", t.seconds);
}

// 7.)
int getGCD(fraction f) {
  int rem;
  int a = f.numerator;
  int b = f.denominator;
  do {
    rem = a % b;
    a = b;
    b = rem;
  } while (b > 0);
  return a;
}

fraction fractionReduce(fraction f) {
  int GCD = getGCD(f);
  return (fraction){ f.numerator / GCD, f.denominator / GCD };
}

fraction fractionAdd(fraction f1, fraction f2) {
  return fractionReduce((fraction){ (f1.numerator * f2.denominator) + (f2.numerator * f1.denominator), (f1.denominator * f2.denominator) });
}

fraction fractionSub(fraction f1, fraction f2) {
  return fractionReduce((fraction){ (f1.numerator * f2.denominator) - (f2.numerator * f1.denominator), (f1.denominator * f2.denominator) });
}

fraction fractionMul(fraction f1, fraction f2) {
  return fractionReduce((fraction){ (f1.numerator * f2.numerator), (f1.denominator * f2.denominator) });
}

fraction fractionDiv(fraction f1, fraction f2) {
  return fractionReduce((fraction){ (f1.numerator * f2.denominator), (f1.denominator * f2.numerator) });
}

void printFraction(fraction f) {
  printf("%d / %d\n", f.numerator, f.denominator);
}
