#include <stdio.h>
#include <string.h>

char digitToHex(int digit);
int countSpaces(char *str);
size_t mystrlen(const char *str);
void mystrcat(char *s1, const char *s2);

int main(void) {
  // String Splitting
  printf(
      "When you come to a fork in the road,"
      "take it.\n\t-- Yogi Berra\n"
  );

  // String Literal Subscripting
  int n = 11;
  printf("%d to hex: %c\n", n, digitToHex(n));

  // Char arrays can modified like all arrays
  char a[] = "Yellow";
  a[0] = 'F';

  // A pointer of type char that stores a string cannot be modified,
  // as it points to a *string literal*
  char *b = "Fellow";
  // *b = 'Y'; *** UNDEFINED ***

  // A char pointer can point to an array of characters,
  // thus modifying it
  b = a;
  *b = 'Y';
  printf("%s\n", b);

  // String Formatting
  printf("%-10.3s", a);
  printf("Flower\n");

  // Pointer Operations on Strings
  char str[] = "This is a string, and it has even more spaces!";
  printf("Number of spaces in \"%s\": %d\n", str, countSpaces(str));

  // strcpy & strcat
  strcpy(str, "abc");
  printf("%s\n", str);
  strcat(str, "def");
  printf("%s\n", str);

  // Reconstruction of strlen
  printf("%ld\n", mystrlen(str));

  // Reconstruction of strcat
  char s1[80] = "Hello";
  char s2[80] = " World!";
  mystrcat(s1, s2);
  printf("%s\n", s1);

  return 0;
}

char digitToHex(int digit) {
  return "0123456789ABCDEF"[digit];
}

int countSpaces(char *str) {
  int spaces = 0;

  while (*str != '\0')
    if (*str++ == ' ')
      spaces++;

  return spaces;
}

size_t mystrlen(const char *str) {
  const char *p = str;
  while (*str)
    str++;
  return str - p;
}

void mystrcat(char *s1, const char *s2) {
  // Moves s1 to point to the null character
  while (*s1)
    s1++;
  // Copies each element from s2 to the end of s1
  while ((*s1++ = *s2++));
}
