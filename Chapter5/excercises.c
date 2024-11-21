#include <stdio.h>

// 1.a.) 1
//   b.) 1
//   c.) 1
//   d.) 0
//
// 2.a.) 1
//   b.) 1
//   c.) 1
//   d.) 1
//
// 3.a.) 0 3 5 5
//   b.) 0 7 8 9
//   c.) 1 8 8 9
//   d.) 1 2 1 1
//
// 4.) (i > 0) - (i < 0)
//
// 5.) The statement is legal, but with unintended
//     consequences. It would output:
//     n is between 1 and 10
// 
// 6.) The statment is legal but would print nothing.
//
// 10.) onetwo

int main(void) {
  int i, j, k;

  // 1.d.)
  i = 3, j = 4, k = 5;
  printf("%d\n", i % j + i < k);

  // 3.b.)
  i = 7, j = 8, k = 9;
  printf("%d ", i - 7 && j++ < k);
  printf("%d %d %d\n", i, j, k);

  // 3.c.)
  i = 7, j = 8, k = 9;
  printf("%d ", (i = j) || (j = k));
  printf("%d %d %d\n", i, j, k);

  // 3.d.)
  i = 1, j = 1, k = 1;
  printf("%d ", ++i || ++j && ++k);
  printf("%d %d %d\n", i, j, k);

  // 4.)
  i = 500;
  printf("%d\n", (i > 0) - (i < 0));

  return 0;
}
