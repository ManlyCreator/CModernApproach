#include "test.h"
#include <stdio.h>

// Allocates memory for externInt while avoiding multiple definition error
int externInt;

void printExternInt(void) {
  printf("externInt = %d\n", externInt);
}

