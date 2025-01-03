#include <stdio.h>

// 1.) As demonstrated in the scratch work, these are perfectly legal declarations.
//
// 2.) SEE SCRATCH WORK
//
// 3.) VVV
typedef struct { double real, imaginary; } complex;
complex makeComplex(double real, double imaginary);
complex addComplex(complex c1, complex c2);
void printComplex(complex c);

// TODO: Excercise 6, pg. 407
// 6.) VVV
typedef struct { int hours, minutes, seconds; } time;
time splitTime(long seconds);


/*** SCRATCH WORK ***/
int main(void) {
  // 1.)
  printf("*** EXCERCISE 1 ***\n");
  struct { int x, y; } x = { 5, 6 };
  struct { int x, y; } y = { 2, 10 };
  printf("x: x = %d, y = %d\n", x.x, x.y);
  printf("y: x = %d, y = %d\n", y.x, y.y);

  // 2.)
  // struct { double real, imaginary; } c1 = { 0.0, 1.0 }, c2 = { 1.0, 0.0 }, c3;
  // c2 = c1;
  // c3.real = c1.real + c2.real;
  // c3.imaginary = c1.imaginary + c2.imaginary;
  
  // 3.)
  complex c1, c2, c3;
  c1 = makeComplex(5.0, 6.0);
  c2 = makeComplex(4.0, 8.0);
  c3 = addComplex(c1, c2);
  printComplex(c3);
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
