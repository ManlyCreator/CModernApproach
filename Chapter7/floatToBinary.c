#include <stdio.h>

double toBinary(float n);

int main(void) {
  double n = 255.375;

  printf("%.8f\n", toBinary(n));

  return 0;
}

double toBinary(float n) {
  long int intN, intPart, tensPlace, binaryInt;
  double floatPart, tenthsPlace, binaryFloat, binaryN;

  intN = (long int)n;
  intPart = intN;
  floatPart = n - intPart;
  tensPlace = 1;
  tenthsPlace = 0.1;
  binaryInt = 0;
  binaryFloat = 0.0;
  binaryN = 0.0;

  do {
    floatPart *= 2;
    intPart = floatPart;
    binaryFloat += intPart * tenthsPlace; 
    tenthsPlace *= 0.1;
    floatPart = floatPart - intPart;
  } while (floatPart != 0);

  do {
    binaryInt += (intN % 2) * tensPlace; 
    tensPlace *= 10;
    intN /= 2;
  } while (intN != 0);

  binaryN = binaryInt + binaryFloat;

  return binaryN;
}
