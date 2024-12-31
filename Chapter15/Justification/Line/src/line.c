#include <stdio.h>
#include <string.h>
#include "line.h"

int lineWords = 0;
int lineLen;
char line[LINE_MAX_LEN + 1];

int lineSpacesRemaining() {
  return LINE_MAX_LEN - lineLen;
}

void lineAdd(const char *word) {
  if (lineWords > 0) {
    line[lineLen] = ' ';
    line[lineLen + 1] = '\0';
    lineLen++;
  }
  lineLen += strlen(word);
  lineWords++;
  strcat(line, word);
}

void lineWrite() {
  int extraSpaces, spacesToInsert;
  
  extraSpaces = lineSpacesRemaining();
  for (int i = 0; i < lineLen; i++) {
    if (line[i] != ' ') {
      putchar(line[i]);
    } else {
      spacesToInsert = extraSpaces / (lineWords - 1);
      for (int j = 0; j < spacesToInsert + 1; j++)
        putchar(' ');
      extraSpaces -= spacesToInsert;
      lineWords--;
    }
  }
  putchar('\n');
}

void lineClear() {
  lineLen = lineWords = 0;
  line[0] = '\0';
}

void lineFlush() {
  if (lineLen > 0) {
    puts(line);
  }
}
