#include <stdio.h>
#include <string.h>
#include <math.h>

#define BUF_SIZE 512

// 1.)
#define CUBE(x) ((x) * (x) * (x))
#define REMAINDER(n) ((n) % 4)
#define LESS_THAN_100(x, y) ((x) * (y) < 100 ? 1 : 0)

// 2.)
#define NELEMS(a) (sizeof(a) / sizeof(a[0]))

// 3.a.) 4
//   b.) 4
//   c.) VVV 
#define DOUBLE(x) (2 * (x))

// 4.)
#define AVG(x, y) (x + y) / 2
// a.) The lack of parentheses around the whole expression can result in incorrect evaluation of a number is divided with the macro (SEE SCRATCH WORK)
#define AREA(x, y) (x) * (y)
// b.) Same issue as part a (SEE SCRATCH WORK)

// 5.)
#define TOUPPER(c) ('a' <= (c) && (c) <= 'z' ? (c) - 'a' + 'A' : (c))
// a.) D ; c is replaced with s[++i] in all occurrences, so it expands to ('a' <= s[++i] && s[++i] <= 'z' ? s[++i] - 'a' + 'A' : s[++i]),
// with i having a final value of 3.
// b.) 2 ; Since the first condition cannot be met, C short-circuits and immediately goes to the else clause,
// meaing that i is only incremented twice to a final value of 2.

// 6.a.)
#define DISP(f, x) (printf(#f "(%g) = %g\n", x, f(x)))
// b.)
#define DISP2(f, x, y) (printf(#f "(%g, %g) = %g\n", x, y, f(x, y)))

// 7.a.)
// long long_max(long x, long y) {
//   return x > y ? x : y;
// }
// b.) Since unsigned long is two tokens, the preprocessor would only see unsigned
// c.) VVV
#define GENERIC_MAX(type, sign)              \
sign type sign##type##_max(type x, type y) { \
  return x > y ? x : y;                      \
}
#define MAX(x, y, type, sign) sign##type##_max(x, y)
GENERIC_MAX(char, unsigned);

// 8.)
// Evaluates x first, then passes it to the HELPER macro
#define STRINGIZE(x) HELPER(x)
// Stringizes the evaluated value of x
#define HELPER(x) #x
#define LINE_FILE "Line " STRINGIZE(__LINE__) " of file " __FILE__

// 10.) You have to be careful of how function creating macros are used in the program.

// 11.)
#define ERROR(msg) fprintf(stderr, "ERROR: %s", msg)

// 12.) (c), (e)

// 13.a.)
/*
void f(void);
int main(void) {
  f();
  return 0;
}
void f(void) {
  printf("N is %d\n", N);
}
*/
// b.) N is 100

// 15.)
#define SPANISH

// 16.) #pragma ident "foo"
#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _PRAGMA(#x)


/*** SCRATCH WORK ***/
int main(void) {
  // 1.)
  printf("*** EXCERCISE 1 ***\n");
  printf("%d\n", CUBE(4));
  printf("%d\n", REMAINDER(16));
  printf("%s\n", LESS_THAN_100(49, 2) ? "true" : "false");

  // 2.)
  printf("*** EXCERCISE 2 ***\n");
  int a[] = { 5, 1, 9, 10, 11, 300, -1, 0, 2 };
  printf("%ld\n", NELEMS(a));

  // 3.)
  printf("*** EXCERCISE 3 ***\n");
  printf("%d\n", DOUBLE(1 + 2));
  printf("%d\n", 4/DOUBLE(2));

  // 4.)
  printf("*** EXCERCISE 4 ***\n");
  printf("%d\n", 10 / AVG(4, 6)); 
  printf("%d\n", 8 / AREA(2, 2));

  // 5.)
  printf("*** EXCERCISE 5 ***\n");
  // a.)
  int i = 0;
  char s[BUF_SIZE];
  strcpy(s, "abcd");
  printf("%c\n", TOUPPER(s[++i]));
  // b.)
  strcpy(s, "0123");
  i = 0;
  printf("%c\n", TOUPPER(s[++i]));

  // 6.)
  printf("*** EXCERCISE 6 ***\n");
  // a.)
  DISP(sqrt, 9.0f);
  // b.)
  DISP2(pow, 4.0, 3.0);

  // 7.)
  printf("*** EXCERCISE 7 ***\n");
  unsigned short n1 = 1;
  unsigned short n2 = 3;
  printf("%d\n", MAX(1, 3, char, unsigned));

  // 8.)
  printf("*** EXCERCISE 8 ***\n");
  char *str = LINE_FILE;
  printf("%s\n", str);

  // 11.)
  printf("*** EXCERCISE 11 ***\n");
  ERROR("Hi\n");

  // 15.)
  printf("*** EXCERCISE 15 ***\n");
#if defined(ENGLISH)
  printf("Insert Disk 1\n");
#elif defined(FRENCH)
  printf("Inserez Le Disque 1\n");
#elif defined(SPANISH)
  printf("Inserte El Disco 1\n");
#endif

  // 16.)
  printf("*** EXCERCISE 16 ***\n");
  printf("%s\n", STRINGIZE(IDENT(foo)));

  return 0;
}
