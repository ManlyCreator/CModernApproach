#include <stdio.h>

// 1.a.) a, b, c
//   b.) a, d
//   c.) a, d, e
//   d.) a, f
//
// 2.a.) b (declared in f), c, d
//   b.) a, b, c (declared in g)
//   c.) a (g's inner block), b, c (declared in g),
//       d (g's inner block)
//   d.) b, c (declared in main), d
//
// 3.) Assuming that you could make infinitely nested blocks, there
//     could be an infinite number of i variables.

/*** SCRATCH WORK ***/
int main(void) {
  // 3.)
  int i;
  {
    int i;
    {
      int i;
    }
  }
  return 0;
}
