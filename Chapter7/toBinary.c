#include <stdio.h>

int toBinary(int n);

int main(void) {
  int n = 255;
  int binaryN = toBinary(n);

  printf("%.8d\n", binaryN);

  return 0;
}

int toBinary(int n) {
  int tensPlace = 1;
  int binaryN = 0;

  do {
    binaryN += (n % 2) * tensPlace;
    tensPlace *= 10;
    n /= 2;
  } while (n != 0);

  return binaryN;
}
