#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_LEN 255
#define NUM_WORDS 100

int readLine(char *buffer);
int stringCompare(const void *str1, const void *str2);
void printWords(char **wordsList, int n);

int main(void) {
  int strLen;
  int top = 0;
  char line[STR_LEN + 1];
  char *words[NUM_WORDS];

  printf("Enter word: ");
  while ((strLen = readLine(line))) {
    words[top] = malloc(strLen + 1);
    strcpy(words[top++], line);
    printf("Enter word: ");
  }

  qsort(words, top, sizeof(char*), stringCompare);

  printf("*** SORTED ***\n");
  printWords(words, top);
  return 0;
}

int readLine(char *buffer) {
  int i = 0;
  while ((*(buffer++) = getchar()) != '\n')
    i++;
  *(buffer - 1) = '\0';
  return i;
}

int stringCompare(const void *str1, const void *str2) {
  return strcmp(*(char **)str1, *(char **)str2);
}

void printWords(char **wordsList, int n) {
  for (int i = 0; i < n; i++)
    printf("%s\n", wordsList[i]);
}
