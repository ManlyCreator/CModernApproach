#include <stdio.h>
#include <string.h>
#include "word.h"
#include "line.h"

// TODO: Implement Line class
// TODO: Ch. 15 Excercises

#define WORD_LEN 20

int main(void) {
  int wordLen;
  char word[WORD_LEN + 1];
  while (1) {
    readWord(word, &wordLen, WORD_LEN);
    if (wordLen == 0)
      break;
    if (wordLen > WORD_LEN) {
      word[WORD_LEN] = '*';
    }
    printf("%s ", word);
  }
  printf("\n");
  return 0;
}
