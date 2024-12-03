#include <ctype.h>
#include <stdio.h>

#define SIZE 255

int main(void) {
  char letters[SIZE];
  char punctuation;
  char ch;
  int wordStart;
  int wordLen = 0;
  int idx = 0;

  printf("Enter a sentence: ");

  // Stores the user's input as a char array and identifies punctuation
  while (1) {
    ch = getchar();
    if (ch != '.' && ch != '!' && ch != '?' && ch != '\n') {
      letters[idx] = ch;
      idx++;
    } else {
      punctuation = ch;
      break;
    }
  }

  printf("Reversed sentence: ");
  for (int i = idx - 1; i >= -1; i--) {
    // Marks the start of each word and its length
    if (letters[i] != ' ' && i >= 0) {
      wordStart = i;
      wordLen++;
    // Prints the previously identified word
    } else {
      for (int j = 0; j < wordLen; j++, wordStart++) {
        printf("%c", letters[wordStart]);
      }
      if (i != -1) 
        printf(" ");
      wordLen = 0;
    }
  }

  printf("%c\n", (punctuation != '\n') ? punctuation : ' ');

  return 0;
}
