#include <stdio.h>

int main(void) {
  int item, month, day, year;
  float price;

  printf("Enter item number: ");
  scanf("%d", &item);

  printf("Enter unit price: ");
  scanf("%f", &price);

  printf("Enter date purchased (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\tPrice\tDate\n");
  printf("%d\t$%.2f\t%.2d/%.2d/%.4d\n", item, price, month, day, year);

  return 0;
}
