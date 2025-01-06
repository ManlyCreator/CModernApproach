#include <stdio.h>

// 1.) As demonstrated in the scratch work, these are perfectly legal declarations.
//
// 2.) SEE SCRATCH WORK
//
// 3.)
typedef struct { double real, imaginary; } complex;
complex makeComplex(double real, double imaginary);
complex addComplex(complex c1, complex c2);
void printComplex(complex c);

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

// 18.)
typedef enum { EMPTY, PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING } Piece;
typedef enum { WHITE, BLACK } Color;
typedef struct { Piece piece; Color color; } Square;

// 20.)
typedef enum { NORTH, SOUTH, EAST, WEST } direction;

/*** SCRATCH WORK ***/
int main(void) {
  // 1.)
  // printf("*** EXCERCISE 1 ***\n");
  // struct { int x, y; } x = { 5, 6 };
  // struct { int x, y; } y = { 2, 10 };
  // printf("x: x = %d, y = %d\n", x.x, x.y);
  // printf("y: x = %d, y = %d\n", y.x, y.y);

  // 2.)
  // printf("*** EXCERCISE 2 ***\n");
  // struct { double real, imaginary; } c1 = { 0.0, 1.0 }, c2 = { 1.0, 0.0 }, c3;
  // c2 = c1;
  // c3.real = c1.real + c2.real;
  // c3.imaginary = c1.imaginary + c2.imaginary;
  
  // 3.)
  printf("*** EXCERCISE 3 ***\n");
  complex c1, c2, c3;
  c1 = makeComplex(5.0, 6.0);
  c2 = makeComplex(4.0, 8.0);
  c3 = addComplex(c1, c2);
  printComplex(c3);

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
    { {ROOK, BLACK},  {KNIGHT, BLACK}, {BISHOP, BLACK}, {QUEEN, BLACK}, {KING, BLACK},  {BISHOP, BLACK},  {KNIGHT, BLACK},  {ROOK, BLACK}  },
    { {PAWN, BLACK},  {PAWN, BLACK},   {PAWN, BLACK},   {PAWN, BLACK},  {PAWN, BLACK},  {PAWN, BLACK},    {PAWN, BLACK},    {PAWN, BLACK}, },
    { {EMPTY, BLACK}, {EMPTY, BLACK},  {EMPTY, BLACK},  {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},   {EMPTY, BLACK},   {EMPTY, BLACK}, },
    { {EMPTY, BLACK}, {EMPTY, BLACK},  {EMPTY, BLACK},  {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},   {EMPTY, BLACK},   {EMPTY, BLACK}, },
    { {EMPTY, BLACK}, {EMPTY, BLACK},  {EMPTY, BLACK},  {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},   {EMPTY, BLACK},   {EMPTY, BLACK}, },
    { {EMPTY, BLACK}, {EMPTY, BLACK},  {EMPTY, BLACK},  {EMPTY, BLACK}, {EMPTY, BLACK}, {EMPTY, BLACK},   {EMPTY, BLACK},   {EMPTY, BLACK}, },
    { {PAWN, WHITE},  {PAWN, WHITE},   {PAWN, WHITE},   {PAWN, WHITE},  {PAWN, WHITE},  {PAWN, WHITE},    {PAWN, WHITE},    {PAWN, WHITE}, },
    { {ROOK, WHITE},  {KNIGHT, WHITE}, {BISHOP, WHITE}, {QUEEN, WHITE}, {KING, WHITE},  {BISHOP, WHITE},  {KNIGHT, WHITE},  {ROOK, WHITE}  },
  };

  // 20.)
  printf("*** EXCERCISE 20 ***\n");
  direction d = NORTH;
  int x = 0, y = 0;
  switch (d) {
    case NORTH:
      y++;
      break;
    case SOUTH:
      y--;
      break;
    case EAST:
      x++;
      break;
    case WEST:
      x--;
      break;
  }
  printf("x: %d\n", x);
  printf("y: %d\n", y);
  return 0;
}

// 3.)
complex makeComplex(double real, double imaginary) {
  return (complex){ real, imaginary };
}

complex addComplex(complex c1, complex c2) {
  return (complex){ c1.real + c2.real, c1.imaginary + c2.imaginary };
}

void printComplex(complex c) {
  printf("Real: %g\n", c.real);
  printf("imaginary: %g\n", c.imaginary);
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
