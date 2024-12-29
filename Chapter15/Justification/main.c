#include <stdio.h>

// TODO: Pg. 361
#define WORD_LEN 20

int main(void) {
  char word[WORD_LEN];
  while (1) {
    scanf("%s", word);
    if (!*word)
      break;
    printf("%s", word);
  }
  return 0;
}
