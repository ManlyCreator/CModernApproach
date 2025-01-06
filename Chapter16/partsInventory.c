#include <stdio.h>
#include <string.h>

#define NAME_LEN 25
#define MAX_PARTS 100

// TODO: Pg. 412, Project 3

typedef struct {
  int number;
  char name[NAME_LEN + 1];
  int onHand;
} part;

int numParts = 0;
part inventory[MAX_PARTS];

int findPart(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

int main(void) {
  char code;

  while (1) {
    printf("Enter an operation code: ");
    scanf("%c", &code);

    switch (code) {
      case 'i':
        insert();
        break;
      case 's':
        search();
        break;
      case 'u':
        update();
        break;
      case 'p':
        print();
        break;
      case 'q':
        return 0;
      default:
        printf("Invalid code entered\n");
    }

    while (getchar() != '\n');
  }

  return 0;
}

int findPart(int number) {
  for (int i = 0; i < numParts; i++) {
    if (inventory[i].number == number)
      return i;
  }
  return -1;
}

void insert(void) {
  int partNum, i, j;

  if (numParts >= MAX_PARTS) {
    printf("Inventory full");
    return;
  }

  printf("Enter a part number: ");
  scanf("%d", &partNum);

  if (findPart(partNum) >= 0) {
    printf("Part already exists\n");
    return;
  }

  for (i = 0; i < numParts; i++)
    if (partNum < inventory[i].number)
      break;
  for (j = numParts; j > i; j--)
    inventory[j] = inventory[j - 1];

  inventory[i].number = partNum;

  while (getchar() != '\n');
  printf("Enter a part name: ");
  fgets(inventory[i].name, NAME_LEN + 1, stdin);
  inventory[i].name[strlen(inventory[i].name) - 1] = '\0';

  printf("Enter amount on hand: ");
  scanf("%d", &inventory[i].onHand);

  numParts++;
}

void search(void) {
  int partNum, i;

  printf("Enter a part number: ");
  scanf("%d", &partNum);

  if ((i = findPart(partNum)) < 0) {
    printf("Part does not exist\n");
    return;
  }

  printf("Name: %s\n", inventory[i].name);
  printf("On Hand: %d\n", inventory[i].onHand);
}

void update(void) {
  int partNum, i, change;

  printf("Enter a part number: ");
  scanf("%d", &partNum);

  if ((i = findPart(partNum)) < 0) {
    printf("Part does not exist\n");
    return;
  }

  printf("Enter change in quantity: ");
  scanf("%d", &change);

  inventory[i].onHand += change;
}

void print() {
  for (int i = 0; i < numParts; i++)
    printf("%7d    %-25s%d\n", inventory[i].number, inventory[i].name, inventory[i].onHand);
}
