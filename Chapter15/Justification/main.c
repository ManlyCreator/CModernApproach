#include <stdio.h>
#include "word.h"
#include "line.h"

// TODO: Ch. 15 Excercises

int main(void) {
  int wordLen;
  char word[WORD_MAX_LEN + 1];
  while (1) {
    readWord(word, &wordLen);
    if (wordLen == 0) {
      lineFlush();
      break;
    }
    if (wordLen > WORD_MAX_LEN)
      word[WORD_MAX_LEN] = '*';
    if (wordLen > lineSpacesRemaining()) {
      lineWrite();
      lineClear();
    }
    lineAdd(word);
  }
  printf("\n");
  return 0;
}
