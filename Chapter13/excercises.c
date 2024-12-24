#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define N 256
#define EXTENSION_LEN 4

// TODO: Excercise 18

// 1.) b - character format is used but a string is passed
//     c - string format is used but a character is passed
//     e - printf expects char *, but char is passed
//     h - char * is passed when char is expected
//     i - char is passed when char * is expected
//     j - puts already prints a newline, so another newline is redundant
//
// 2.a.) Illegal - attempting to pass char * when char is expected
//   b.) Output - abc
//   c.) Output - abc
//   d.) Illegal - attempting to pass char when char * is expected
//
// 3.) i = 12, s = abc34, j = 56
//
// 4.) SEE SCRATCH WORK
//
// 5.) SEE SCRATCH WORK
//
// 6.) SEE SCRATCH WORK
//
// 7.) a. - attempting to assign an int to a character array
//
// 12.) SEE SCRATCH WORK
//
// 13.) SEE SCRATCH WORK
//
// 14.) Each character in s gets shifted back by one; "Grinch"

/*** SCRATCH WORK ***/

// 4.)
int readLine_A(char *str, int n);
int readLine_B(char *str, int n);
int readLine_C(char *str, int n);

// 5.)
void capitalize(char *str);

// 6.)
void censor(char *str);

// 12.)
void getExtension(const char *fileName, char *extension);

// 13.)
void buildIndexURL(const char *domain, char *url);

// 18.)
void removeFileName(char *url);

int main(int argc, char *argv[]) {
  // 1.)
  putchar('\n');
  puts("New line?");

  // 2.)
  char *p = "abc";
  puts(p);

  // 3.)
  // int i, j;
  // char *s;
  // scanf("%d%s%d", &i, s, &j);
  // printf("i = %d, s = %s, j = %d\n", i, s, j);

  // 4.)
  // int len;
  // char str[N];
  // printf("Enter a string: ");
  // len = readLine_C(str, N);
  // printf("Input: %s\n", str);
  // printf("Length: %d\n", len);

  // 5.)
  char name[] = "rami";
  capitalize(name);
  printf("%s\n", name);
  
  // 6.)
  char s[N] = "fooey gooey floop flopfoo";
  censor(s);
  printf("%s\n", s);

  // 12.)
  char fileName[] = "memo.txt";
  char extension[EXTENSION_LEN];
  getExtension(fileName, extension);
  printf("Extension: %s\n", extension);

  // 13.)
  char domain[] = "ManlyCreator.com";
  char url[N];
  buildIndexURL(domain, url);
  printf("URL: %s\n", url);

  // 14.)
  char input[] = "Hsjodi", *j;
  for (j = input; *j; j++)
    --*j;
  puts(input);

  // 18.)
  removeFileName(url);
  printf("URL: %s\n", url);

  return 0;
}

// 4.)
int readLine_A(char *str, int n) {
  int i = 0;
  char ch = getchar();
  while (isspace(ch))
    ch = getchar();
  while (ch != '\n') {
    if (i < n - 1)
      str[i++] = ch;
    ch = getchar();
  }
  str[i] = '\0';
  return i; 
}

int readLine_B(char *str, int n) {
  int i = 0;
  char ch = getchar();
  while (isspace(ch))
    ch = getchar();
  while (!isspace(ch)) {
    if (i < n - 1)
      str[i++] = ch;
    ch = getchar();
  }
  str[i] = '\0';
  return i; 

}

int readLine_C(char *str, int n) {
  int i = 0;
  char ch;
  do {
    ch = getchar();
    if (i == 0 && isspace(ch))
      continue;
    if (i < n - 1)
      str[i++] = ch;
  }
  while (ch != '\n');
  str[i] = '\0';
  return i; 
}

// 5.)
void capitalize(char *str) {
  while (*str != '\0') {
    *str = toupper(*str);
    str++;
  }
}

// 6.)
void censor(char *str) {
  char *p;
  for (p = str; *p != '\0'; p++) {
    if (*p == 'f' && *(p + 1) == 'o' && *(p + 2) == 'o')
      *p = *(p + 1) = *(p + 2) = 'x';
  }
}

// 12.)
void getExtension(const char *fileName, char *extension) {
  int extensionFound = 0;
  char *p = extension;
  for (int i = 0; i < strlen(fileName); i++) {
    if (extensionFound && p - extension < EXTENSION_LEN - 1)
      *p++ = fileName[i];
    if (fileName[i] == '.')
      extensionFound = 1;
  }
  *p = '\0';
}

// 13.)
void buildIndexURL(const char *domain, char *url) {
  strcpy(url, "https://www.");
  strcat(url, domain);
  strcat(url, "/index.html");
}

// 18.)
void removeFileName(char *url) {
  char *p;
  while (*url) {
    if (*url == '/')
      p = url;
    url++;
  }
  *p = '\0';
}
