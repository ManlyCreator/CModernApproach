#include <ctype.h>
#include <stdio.h>

int sumArray(int arr[static 3], int len);

int main(void) {
  int n = sumArray((int []){ 1, 2, 3, 4, 5 }, 5);

  printf("Sum: %d\n", n);

  char ch;

  while (1) {
    printf("Keep playing? ");
    scanf("%c", &ch);
    while (getchar() != '\n');
    if (toupper(ch) != 'Y')
      break;
  }

  return 0;
}

int sumArray(int arr[], int len) {
  int n = 0;
  for (int i = 0; i < 5; i++) {
    n += arr[i];
  }
  return n;
}
