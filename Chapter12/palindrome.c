#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define N 256

int main(void) {
  char word[N];
  char *p = word, *q;
  int length = 0;

  printf("Enter a message: ");
  while ((*p++ = getchar()) != '\n') 
    length++;

  p = word;
  q = word + (length - 1);

  while (q >= word) {
    if (toupper(*q) < 'A' || toupper(*q) > 'Z') {
      q--;
      continue;
    }

    if (toupper(*p) < 'A' || toupper(*p) > 'Z') {
      p++;
      continue;
    }

    if (toupper(*q) != toupper(*p)) {
      printf("Not a palindrome\n");
      exit(EXIT_FAILURE);
    }

    q--;
    p++;
  }

  printf("Palindrome\n");
  exit(EXIT_SUCCESS);
}
