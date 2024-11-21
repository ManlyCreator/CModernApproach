#include <stdio.h>

// 1.) 1 2 4 8 16 32 64 128
//
// 2.) 9384 938 93 9
//
// 3.) 5 4 3 2
//
// 4.) (c) would increment i to 1 as soon as the loop starts
//     while also incrementing it to 10 as the loop is ending,
//     whereas the other two options only get to 9 before the
//     loop ends.
//
// 5.) (c) would execute a minimum of 1 time regardless of the
//     value of i, where the other options would never execute
//     if i is out of range
//
// 6.) See Scratch Work
//
// 7.) See Scratch Work
//
// 8.) 10 5 3 2 1 1 1 ...
//
// 10.) See Scratch Work
//
// 12.) See Scratch Work
//
// 13.) See Scratch Work
//
// 14.) The fix is the remove the semicolon from the end of the if
//      statement as that terminates it and allows the print statement
//      to be called unconditionally.

/*** SCRATCH WORK ***/
int main(void) {
  int i, j, n;

  // 2.)
  i = 9384;

  do {
    printf("%d ", i);
    i /= 10;
  } while (i > 0);
  printf("\n");

  // 3.) 
  for (int i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1) {
    printf("%d ", i);
  }
  printf("\n");

  // 4.)
  for (int i = 0; i++ < 10;) {
    printf("%d ", i);
  }
  printf("\n");

  // 6.) 
  for (int i = 1; i <= 128; i *= 2) 
    printf("%d ", i);
  printf("\n");

  // 7.)
  for (int i = 9384; i > 0; i /= 10) 
    printf("%d ", i);
  printf("\n");

  // 8.)
  // for (int i = 10; i >= 1; i /= 2)
  //   printf("%d ", i++);
  // printf("\n");
  
  // 10.)
  // Prints only even numbers from a range
  for (int i = 20; i > 0; i--) {
    if (i % 2 != 0) {
      goto cont;
    }
    printf("%d ", i);
    cont: 
  }
  printf("\n");

  // 12.) 
  n = 109;
  for (i = 2; i * i < n; i++) {
    if (n % i == 0) {
      break;
    }
  }
  if (i * i <= n) {
    printf("%d is divisible by %d.\n", n, i);
  } else {
    printf("%d is prime.\n", n);
  }

  // 13.) 
  n = 100;
  for (i = 0; n > 0; i++, n /= 2);

  return 0;
}
