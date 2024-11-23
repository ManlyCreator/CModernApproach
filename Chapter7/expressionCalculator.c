#include <stdio.h>

// TODO: Fix scanf parsing not working correctly
int main(void) {
  float n1, n2, value;
  char operation, ch;

  printf("Enter an expression: ");
  do {
    scanf("%c%f%c", &operation, &n1, &ch);
    printf("%f", n1);
    printf("%c", ch); 
  } while (operation != '\n');
  // do {
  //   scanf(" %f %c %f", &n1, &operation, &n2);
  //   printf("n1: %f\n", n1);
  //   printf("operation: %c\n", operation);
  //   printf("n2: %f\n", n2);
  //   printf("ch: %d\n", ch);
  // } while (operation != '\n');

  return 0;
}
