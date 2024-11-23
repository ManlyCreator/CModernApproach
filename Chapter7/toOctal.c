#include <stdio.h>

int toOctal(int n);

int main(void) {
  int n = 9;
  int octalN = toOctal(n);

  printf("%d\n", octalN);

  return 0;
}

int toOctal(int n) {
  int tensPlace = 1;
  int octalN = 0;
  do {
    octalN += (n % 8) * tensPlace;
    tensPlace *= 10;
    n /= 8;
  } while (n != 0);
  return octalN;
}
