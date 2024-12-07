#include <stdio.h>

// 1.) The first error is that height is missing a type 
//     declaration. The second is that product is declared
//     between the start of the function and the body.
//
// 2.) SEE SCRATCH WORK

/*** SCRATCH WORK ***/

// 2.)
int check(int x, int y, int n);

int main(void) {
  // 2.)
  printf("*** EXCERCISE 2 ***\n");
  printf("Result: %d\n", check(3, 5, 20));
  printf("\n");
  return 0;
}

// 2.)
int check(int x, int y, int n) {
  if ((x >= 0 && x < n) && (y >= 0 && y < n))
    return 1;
  return 0;
}
