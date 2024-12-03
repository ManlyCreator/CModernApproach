#include <ctype.h>
#include <stdio.h>

#define SIZE 255

int main(void) {
  char letters[26] = { 0 };
  char ch;

  printf("Enter the first word: ");
  while ((ch = tolower(getchar())) != '\n') {
    letters[ch - 'a']++; 
  }

  printf("Enter the second word: ");
  while ((ch = tolower(getchar())) != '\n') {
    letters[ch - 'a']--; 
  }

  for (int i = 0; i < 26; i++) {
    if (letters[i] != 0) {
      printf("These words are not anagrams.\n");
      return 1;
    }
  }

  printf("These words are anagrams.\n");
  return 0;
}
