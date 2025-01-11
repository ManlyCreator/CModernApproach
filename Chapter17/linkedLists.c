#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int value;
  struct Node *next;
} Node;

typedef struct {
  Node *first;
  Node *head;
} LinkedList;

void listInsertBeginning(LinkedList *list, int value);
void listInsertEnd(LinkedList *list, int value);
void listInsertAt(LinkedList *list, int index, int value);
void listDeleteAt(LinkedList *list, int index);
void listFree(LinkedList *list);

int main(void) {
  LinkedList list = { NULL, NULL };
  listInsertEnd(&list, 40);
  listInsertEnd(&list, 50);
  listInsertBeginning(&list, 30);
  listInsertBeginning(&list, 20);
  listInsertBeginning(&list, 10);
  listInsertAt(&list, 3, 60);
  listDeleteAt(&list, 5);
  listDeleteAt(&list, 4);
  listDeleteAt(&list, 0);
  Node *itr = list.first;
  while (itr) {
    printf("%d\n", itr->value);
    itr = itr->next;
  }
  listFree(&list);
  return 0;
}

void listInsertBeginning(LinkedList *list, int value) {
  Node *nextNode = malloc(sizeof(Node));

  nextNode->value = value;
  nextNode->next = list->first;

  if (!list->first)
    list->head = nextNode;
  list->first = nextNode;
}

void listInsertEnd(LinkedList *list, int value) {
  Node *nextNode = malloc(sizeof(Node));

  nextNode->value = value;
  nextNode->next = NULL;

  if (!list->first) {
    list->first = nextNode;
    list->head = nextNode;
  } else {
    list->head->next = nextNode;
    list->head = nextNode;
  }
}

void listInsertAt(LinkedList *list, int index, int value) {
  int i;
  Node *ptr = list->first;
  for (i = 0, ptr = list->first; i < index && ptr; i++, ptr = ptr->next);
  if (!ptr) {
    printf("*** INDEX OUT OF BOUNDS: COULD NOT INSERT AT INDEX %d ***\n", index);
    return;
  }
  ptr->value = value;
}

void listDeleteAt(LinkedList *list, int index) {
  int i;
  Node *cur, *prev;
  for (i = 0, cur = list->first, prev = NULL; i < index && cur; i++, prev = cur, cur = cur->next);
  if (!cur) {
    printf("*** INDEX OUT OF BOUNDS: COULD NOT DELETE AT INDEX %d ***\n", index);
    return;
  }
  if (prev)
    prev->next = cur->next;
  if (cur == list->first)
    list->first = cur->next;
  free(cur);
}

void listFree(LinkedList *list) {
  Node *ptr;
  while (list->first) {
    ptr = list->first;
    list->first = list->first->next;
    free(ptr);
  }
}
