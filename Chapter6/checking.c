#include <stdio.h>

int main(void) {
  int cmd;
  float credit, debit, balance;

  printf("Checking Account\n");
  printf("================\n");
  printf("1. Clear\n");
  printf("2. Credit\n");
  printf("3. Debit\n");
  printf("4. Balance\n");
  printf("5. Exit\n");
  printf("================\n\n");

  do {
    printf("Enter a command: ");
    scanf("%1d", &cmd);

    switch (cmd) {
      case 1:
        balance = 0; 
        break;
      case 2:
        printf("Enter credit: ");
        scanf("%f", &credit);
        balance += credit;
        break;
      case 3:
        printf("Enter debit: ");
        scanf("%f", &debit);
        balance -= debit;
        break;
      case 4:
        printf("Balance: $%.2f\n", balance);
        break;
      case 5:
        goto done;
    }
  } while (cmd != 0);

  done: 
  return 0;
}
