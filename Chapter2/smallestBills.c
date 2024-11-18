#include <stdio.h>

int main(void) {
  int money, _20Bills, _10Bills, _5Bills, _1Bills;

  printf("Enter a whole number dollar amount: ");
  scanf("%d", &money);

  _20Bills = money / 20;
  money -= 20 * _20Bills;
  _10Bills = money / 10;
  money -= 10 * _10Bills;
  _5Bills = money / 5;
  money -= 5 * _5Bills;
  _1Bills = money / 1;
  money -= 1 * _1Bills;

  printf("$20 Bills: \t%d\n", _20Bills);
  printf("$10 Bills: \t%d\n", _10Bills);
  printf("$5 Bills: \t%d\n",  _5Bills);
  printf("$1 Bills: \t%d\n",  _1Bills);
}
