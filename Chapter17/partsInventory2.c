#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 25
#define MAX_PARTS 100

typedef struct Part {
  int number;
  char name[NAME_LEN + 1];
  int onHand;
  struct Part *next;
} Part;

Part *findPart(Part *inventory, int number);
void insert(Part **inventoryPtr);
void search(Part *inventory);
void update(Part *inventory);
void print(Part *inventory);

// TODO: Finish insert
// TODO: Pg. 435

int main(void) {
  char code;
  Part *inventory = NULL;

  while (1) {
    printf("Enter an operation code: ");
    scanf("%c", &code);

    switch (code) {
      case 'i':
        insert(&inventory);
        break;
      /*case 's':*/
      /*  search(inventory);*/
      /*  break;*/
      /*case 'u':*/
      /*  update(inventory);*/
      /*  break;*/
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

Part *findPart(Part *inventory, int number) {
  Part *ptr;
  for (ptr = inventory; ptr && number > ptr->number; ptr = ptr->next);
  if (ptr && number == ptr->number)
    return ptr;
  return NULL;
}

void insert(Part **inventoryPtr) {
  int partNum;
  Part *current, *newPart;

  printf("Enter a part number: ");
  scanf("%d", &partNum);

  if (findPart(*inventoryPtr, partNum)) {
    printf("Part already exists\n");
    return;
  }

  newPart = malloc(sizeof(Part));

  for (current = *inventoryPtr; current && current->number < partNum; current = current->next);

  while (getchar() != '\n');
  printf("Enter a part name: ");
  fgets(current->name, NAME_LEN + 1, stdin);
  current->name[strlen(current->name) - 1] = '\0';

  printf("Enter amount on hand: ");
  scanf("%d", &current->onHand);
}

/*void search(Inventory *inventory) {*/
/*  int partNum, i;*/
/**/
/*  printf("Enter a part number: ");*/
/*  scanf("%d", &partNum);*/
/**/
/*  if ((i = findPart(*inventory, partNum)) < 0) {*/
/*    printf("Part does not exist\n");*/
/*    return;*/
/*  }*/
/**/
/*  printf("Name: %s\n", inventory->items[i].name);*/
/*  printf("On Hand: %d\n", inventory->items[i].onHand);*/
/*}*/
/**/
/*void update(Inventory *inventory) {*/
/*  int partNum, i, change;*/
/**/
/*  printf("Enter a part number: ");*/
/*  scanf("%d", &partNum);*/
/**/
/*  if ((i = findPart(*inventory, partNum)) < 0) {*/
/*    printf("Part does not exist\n");*/
/*    return;*/
/*  }*/
/**/
/*  printf("Enter change in quantity: ");*/
/*  scanf("%d", &change);*/
/**/
/*  inventory->items[i].onHand += change;*/
/*}*/
/**/
void print(Part *inventory) {
  while (inventory)
    printf("%3d    %-24s%7d\n", inventory->number, inventory->name, inventory->onHand);
}
