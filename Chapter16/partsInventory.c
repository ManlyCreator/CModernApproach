#include <stdio.h>
#include <string.h>

#define NAME_LEN 25
#define MAX_PARTS 100

typedef struct {
  int number;
  char name[NAME_LEN + 1];
  int onHand;
} Part;

typedef struct {
  Part items[MAX_PARTS];
  int numItems;
} Inventory;

int findPart(Inventory inventory, int number);
void insert(Inventory *inventory);
void search(Inventory *inventory);
void update(Inventory *inventory);
void print(Inventory inventory);

int main(void) {
  char code;
  Inventory inventory = (Inventory){.numItems = 0};

  while (1) {
    printf("Enter an operation code: ");
    scanf("%c", &code);

    switch (code) {
      case 'i':
        insert(&inventory);
        break;
      case 's':
        search(&inventory);
        break;
      case 'u':
        update(&inventory);
        break;
      case 'p':
        print(inventory);
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

int findPart(Inventory inventory, int number) {
  for (int i = 0; i < inventory.numItems; i++) {
    if (inventory.items[i].number == number)
      return i;
  }
  return -1;
}

void insert(Inventory *inventory) {
  int partNum, i, j;

  if (inventory->numItems >= MAX_PARTS) {
    printf("Inventory full");
    return;
  }

  printf("Enter a part number: ");
  scanf("%d", &partNum);

  if (findPart(*inventory, partNum) >= 0) {
    printf("Part already exists\n");
    return;
  }

  for (i = 0; i < inventory->numItems; i++)
    if (partNum < inventory->items[i].number)
      break;
  for (j = inventory->numItems; j > i; j--)
    inventory->items[j] = inventory->items[j - 1];

  inventory->items[i].number = partNum;

  while (getchar() != '\n');
  printf("Enter a part name: ");
  fgets(inventory->items[i].name, NAME_LEN + 1, stdin);
  inventory->items[i].name[strlen(inventory->items[i].name) - 1] = '\0';

  printf("Enter amount on hand: ");
  scanf("%d", &inventory->items[i].onHand);

  inventory->numItems++;
}

void search(Inventory *inventory) {
  int partNum, i;

  printf("Enter a part number: ");
  scanf("%d", &partNum);

  if ((i = findPart(*inventory, partNum)) < 0) {
    printf("Part does not exist\n");
    return;
  }

  printf("Name: %s\n", inventory->items[i].name);
  printf("On Hand: %d\n", inventory->items[i].onHand);
}

void update(Inventory *inventory) {
  int partNum, i, change;

  printf("Enter a part number: ");
  scanf("%d", &partNum);

  if ((i = findPart(*inventory, partNum)) < 0) {
    printf("Part does not exist\n");
    return;
  }

  printf("Enter change in quantity: ");
  scanf("%d", &change);

  inventory->items[i].onHand += change;
}

void print(Inventory inventory) {
  printf("Num Parts: %d\n", inventory.numItems);
  for (int i = 0; i < inventory.numItems; i++)
    printf("%7d    %-25s%d\n", inventory.items[i].number, inventory.items[i].name, inventory.items[i].onHand);
}
