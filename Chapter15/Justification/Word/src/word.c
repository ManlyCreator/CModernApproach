#include <stdio.h>
#include "word.h"

void readWord(char *word, int *len, int maxLen) {
  char ch;
  *len = 0;
  while ((ch = getchar()) == ' ');
  while (ch != ' ' && ch != '\n' && ch != EOF) {
    if (*len < maxLen + 1) {
      word[(*len)++] = ch;
    }
    ch = getchar();
  }
  word[*len] = '\0';
}
