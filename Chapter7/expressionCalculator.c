#include <stdio.h>

int main(void) {
  float n1, n2;
  char operation = 0;

  // Scans the first operand
  printf("Enter an expression: ");
  scanf(" %f", &n1);
  while ((operation = getchar()) != '\n') {
    // Skips the loop until operation == a valid operator
    if (operation != '+' && operation != '-' &&
        operation != '*' && operation != '/')
      continue;

    // Scans the next operand
    scanf(" %f", &n2);

    // Performs arithmetic on n1 depending on the operator
    switch (operation) {
      case '+':
        n1 += n2;
        break;
      case '-':
        n1 -= n2;
        break;
      case '*':
        n1 *= n2;
        break;
      case '/':
        n1 /= n2;
        break;
    }
  }

  printf("Value: %f\n", n1);

  return 0;
}
