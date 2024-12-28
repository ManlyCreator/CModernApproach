#include <stdc-predef.h>
#include <stdio.h>
#include <string.h>

// TODO: Pg. 340 - The #pragma directive

#define BUF_SIZE 512
#define BOOL int
#define true 1
#define false 0
#define ENABLE_INPUT 0
#define THROW_ERROR 0

#define TO_UPPER(c) ('a' <= (c) && (c) <= 'z' ? (c) - 'a' + 'A' : (c))
#define MAX(x, y) ((x) < (y) ? (y) : (x))
#define PRINT_INT(n) printf(#n " = %d\n", (n))
#define ECHO_INPUT(s)                 \
        do {                          \
          printf("Input: ");          \
          fgets(s, BUF_SIZE, stdin);  \
          printf("%s", s);            \
        } while(0)
#define MAKE_TOKEN(x, y) (TOKEN##x##y)
#define PRINT_TOKEN(t) (printf(#t " = %d\n", t))

void stripFilePath(const char *fileName, char *stripped);

int main(void) {
  BOOL b = true;
  char s[BUF_SIZE];
  int i = 4, j = 2;

  // Parameterized macros
  printf("%c\n", TO_UPPER('n'));
  printf("%d\n", MAX(100, 2));
  PRINT_INT(i/j);

  // Demonstration of predefined macros
  printf("Compiled on %s at %s\n", __DATE__, __TIME__);
  printf("File: %s\n", __FILE__);
  stripFilePath(__FILE__, s);
  printf("Stripped File: %s\n", s);
  printf("C Standard: %ld\n", __STDC_ISO_10646__);

  // Token pasting & stringizing
  int MAKE_TOKEN(1,);
  TOKEN1 = 10;
  PRINT_TOKEN(TOKEN1);

  // Conditional compilation
#if ENABLE_INPUT
  ECHO_INPUT(s);
#endif

  // #error directive
#if THROW_ERROR
    #error "Error flag"
#endif

  // #line directive
  #line 1000 "altered.c"
  printf("Printed from line %d of %s\n", __LINE__, __FILE__);

  return 0;
}

void stripFilePath(const char *fileName, char *stripped) {
  const char *p;
  for (p = fileName + (strlen(fileName) - 1); p >= fileName; p--) {
    if (*p == '/') {
      p++;
      break;
    }
  }
  while (*p) 
    *stripped++ = *p++;
}
