#include <stdio.h>
#include <stdlib.h>

#define N 255

char stack[N];
int top = 0;

void push(char item);
char pop(void);

int main(void) {
  char ch, poppedElement;

  printf("Enter a series of parentheses and/or braces: ");
  while ((ch = getchar()) != '\n') {
    if (ch != '{' && ch != '}' && ch != '(' && ch != ')')
      continue;

    switch (ch) {
      case '(': case '{':
        push(ch);
        break;
      case ')': case '}':
        poppedElement = pop();
        if ((ch == ')' && poppedElement != '(') ||
            (ch == '}' && poppedElement != '{')) {
          printf("Incorrect Nesting\n");
          exit(EXIT_FAILURE);
        }
        break;
    }
  }
  printf("Correct Nesting\n");
  exit(EXIT_SUCCESS);
}

void push(char item) {
  if (top < N) {
    stack[top++] = item;
  } else {
    printf("Stack Overflow\n");
    exit(EXIT_FAILURE);
  }
}

char pop(void) {
  if (top >= 0) {
    return stack[--top];
  } else {
    printf("Stack Underflow\n");
    exit(EXIT_FAILURE);
  }
}
