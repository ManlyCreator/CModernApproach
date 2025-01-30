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
void update(Part **inventoryPtr);
void erase(Part **inventoryPtr);
void print(Part *inventory);
void quit(Part **inventoryPtr);

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
      case 's':
        search(inventory);
        break;
      case 'u':
        update(&inventory);
        break;
      case 'e':
        erase(&inventory);
        break;
      case 'p':
        print(inventory);
        break;
      case 'q':
        quit(&inventory);
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
  Part *previous, *current, *newPart;

  printf("Enter a part number to insert: ");
  scanf("%d", &partNum);

  if (findPart(*inventoryPtr, partNum)) {
    printf("Part already exists\n");
    return;
  }

  newPart = malloc(sizeof(Part));
  for (previous = NULL, current = *inventoryPtr; current && current->number < partNum; previous = current, current = current->next);
  newPart->next = current;
  if (!previous)
    *inventoryPtr = newPart;
  else
    previous->next = newPart;

  while (getchar() != '\n');
  printf("Enter a part name: ");
  fgets(newPart->name, NAME_LEN + 1, stdin);
  newPart->name[strlen(newPart->name) - 1] = '\0';

  printf("Enter amount on hand: ");
  scanf("%d", &newPart->onHand);

  newPart->number = partNum;
}

void search(Part *inventory) {
  Part *part;
  int partNum;

  printf("Enter a part number to search for: ");
  scanf("%d", &partNum);

  if (!(part = findPart(inventory, partNum))) {
    printf("Part does not exist\n");
    return;
  }

  printf("Name: %s\n", part->name);
  printf("On Hand: %d\n", part->onHand);
}

void update(Part **inventoryPtr) {
  Part *part;
  int partNum, change;

  printf("Enter a part number to update: ");
  scanf("%d", &partNum);

  if (!(part = findPart(*inventoryPtr, partNum))) {
    printf("Part does not exist\n");
    return;
  }

  printf("Enter change in quantity: ");
  scanf("%d", &change);

  part->onHand += change;
}

void erase(Part **inventoryPtr) {
  Part *part, *cur, *prev;
  int partNum;

  printf("Enter a part number to erase: ");
  scanf("%d", &partNum);

  if (!findPart(*inventoryPtr, partNum)) {
    printf("Part does not exist\n");
    return;
  }

  for (prev = NULL, cur = *inventoryPtr; cur->number != partNum; prev = cur, cur = cur->next);
  if (prev)
    prev->next = cur->next;
  else
    *inventoryPtr = cur->next;

  free(cur);
}

void print(Part *inventory) {
  while (inventory) {
    printf("%3d    %-24s%7d\n", inventory->number, inventory->name, inventory->onHand);
    inventory = inventory->next;
  }
}

void quit(Part **inventoryPtr) {
  Part *part = *inventoryPtr, *nextPart;
  while (part) {
    nextPart = part->next;
    free(part);
    part = nextPart;
  }
}
