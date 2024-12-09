#include <stdio.h>
#include <stdlib.h>

#define N 256

void push(int n);
int pop(void);

int stack[N];
int top = 0;

int main(void) {
  char ch;
  int n1, n2, value;

  printf("Enter an RPN expression: ");
  do {
    scanf("%c", &ch);

    if (ch - '0' >= 0 && ch - '0' < 10) {
      push(ch - '0');
    } else {
      switch (ch) {
        case '+':
          n1 = pop();
          n2 = pop();
          value = n2 + n1;
          push(value);
          break;
        case '-':
          n1 = pop();
          n2 = pop();
          value = n2 - n1;
          push(value);
          break;
        case '*':
          n1 = pop();
          n2 = pop();
          value = n2 * n1;
          push(value);
          break;
        case '/':
          n1 = pop();
          n2 = pop();
          value = n2 / n1;
          push(value);
          break;
        case '=':
          printf("Value of expression: %d\n", value);
          break;
      }
    }
  } while (ch != '\n');

  return 0;
}

void push(int n) {
  if (top < N) {
    stack[top++] = n;
  } else {
    printf("Stack Overflow\n");
    exit(EXIT_FAILURE);
  }
}

int pop(void) {
  if (top > 0) {
    return stack[--top];
  } else {
    printf("Stack Underflow\n");
    exit(EXIT_SUCCESS);
  }
}
