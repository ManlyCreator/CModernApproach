#include <stdio.h>

int getGCD(int d1, int d2);
void add(int n1, int d1, int n2, int d2);
void sub(int n1, int d1, int n2, int d2);
void mult(int n1, int d1, int n2, int d2);
void div(int n1, int d1, int n2, int d2);

int main(void) {
  int num1, denom1, num2, denom2, numSum, denomSum;
  char operation;

  printf("Enter an operation to be performed on two fractions:\n");
  printf("n1/d1 <+,-,*,/> n2/d2\n");
  printf("Operation: ");
  scanf("%d / %d %c %d / %d", &num1, &denom1, &operation, &num2, &denom2);

  switch (operation) {
    case '+':
      add(num1, denom1, num2, denom2);
      break;
    case '-':
      sub(num1, denom1, num2, denom2);
      break;
    case '*':
      mult(num1, denom1, num2, denom2);
      break;
    case '/':
      div(num1, denom1, num2, denom2);
      break;
    default:
      printf("Error: Invalid Operation\n");
      break;
  }
}

int getGCD(int d1, int d2) {
  int rem;

  while (d1 != 0) {
    rem = d2 % d1;
    d2 = d1;
    d1 = rem;
  }

  return d2;
}

void add(int n1, int d1, int n2, int d2) {
  int num = (n1 * d2) + (n2 * d1);
  int denom = d1 * d2;
  int GCD = getGCD(num, denom);

  num /= GCD;
  denom /= GCD;

  printf("Sum: ");
  if (denom == 1) {
    printf("%d\n", num);
  } else {
    printf("%d/%d\n", num, denom);
  }
}

void sub(int n1, int d1, int n2, int d2) {
  int num = (n1 * d2) - (n2 * d1);
  int denom = d1 * d2;
  int GCD = getGCD(num, denom);

  num /= GCD;
  denom /= GCD;

  printf("Difference: ");
  if (denom == 1) {
    printf("%d\n", num);
  } else {
    printf("%d/%d\n", num, denom);
  }
}

void mult(int n1, int d1, int n2, int d2) {
  int num = n1 * n2;
  int denom = d1 * d2;
  int GCD = getGCD(num, denom);

  num /= GCD;
  denom /= GCD;

  printf("Product: ");
  if (denom == 1) {
    printf("%d\n", num);
  } else {
    printf("%d/%d\n", num, denom);
  }
}

void div(int n1, int d1, int n2, int d2) {
  int num = n1 * d2;
  int denom = d1 * n2;
  int GCD = getGCD(num, denom);

  num /= GCD;
  denom /= GCD;

  printf("Quotient: ");
  if (denom == 1) {
    printf("%d\n", num);
  } else {
    printf("%d/%d\n", num, denom);
  }
}
