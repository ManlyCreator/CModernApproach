#include <stdio.h>

// 1.a.) 63
//   b.) 119
//   c.) 2748
//
// 2.a.) legal, floating point
//   b.) legal, floating point
//   c.) not legal
//   d.) not legal
//   e.) legal, floating point
//
// 3.) (b)
//
// 4.) (d)
//
// 5.) These are all legal options.
//
// 6.a.) char
//   b.) short
//   c.) short
//   d.) int
//
// 9.) int
//
// 10.) unsigned int
//
// 11.) double
//
// 12.) i + f would first be implicitly converted to a float. To 
//      be stored in d, this expression would then be converted to 
//      a double.
//
// 13.a.) -3 ; int
//    b.) 7 ; long
//    c.) 6.5f ; float
//    d.) 3.75 ; double
//    e.) -1.0 ; double
//    f.) 6 ; int
//
// 14.) This will fail if the value is too large to be 
//      stored in the (int) conversion.
//
// 15.)
typedef char Int8;
typedef short Int16;
typedef int Int32;

/*** SCRATCH WORK ***/
int main(void) {
  // 1.)
  printf("%d\n", 7 + 7 * 8);
  printf("%d\n", 077);

  printf("%d\n", 7 + 7 * 16);
  printf("%d\n", 0x77);

  printf("%d\n", 12 + (11 * 16) + (10 * 16 * 16));
  printf("%d\n", 0xABC);

  // 2.)
  printf("%f\n", 010E2);
  printf("%f\n", 32.1E+5);
  printf("%f\n", 3.97e-2);

  // 5.)
  printf("%c\n", 'A');
  printf("%c\n", 0b1000001);
  printf("%c\n", 0101);
  printf("%c\n", 0x41);

  // 6.) 
  int n = 60 * 60 * 24;
  printf("%c\n", 60 * 60 * 24);
  printf("%d\n", (int)sizeof(char));
  printf("%d\n", (int)sizeof(short));
  printf("%d\n", (int)sizeof(int));
  printf("%d\n", (int)sizeof(long));

  // 14.) 
  double f = 10000000000.87568911;
  double fraction = f - (int)f;
  printf("%.8f\n", fraction);

  return 0;
}
