#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int value;
  struct Node *next;
  struct Node *previous;
} Node;

typedef struct {
  Node *first;
  Node *top;
} Stack;

void stackPush(Stack *stack, int value);
int stackPop(Stack *stack);
int stackIsEmpty(Stack stack);
void stackFree(Stack *stack);

int main(void) {
  Stack stack = { NULL, NULL };
  stackPush(&stack, 40);
  stackPush(&stack, 50);
  stackPush(&stack, 60);
  stackPush(&stack, 70);
  stackPop(&stack);
  stackPop(&stack);
  stackPop(&stack);
  stackPop(&stack);
  stackPop(&stack);
  Node *itr = stack.first;
  while (itr) {
    printf("Current: %d\n", itr->value);
    itr = itr->next;
  }
  printf("Stack Empty? %s\n", stackIsEmpty(stack) ? "true" : "false");
  stackFree(&stack);
  return 0;
}


void stackPush(Stack *stack, int value) {
  Node *nextNode = malloc(sizeof(Node));

  nextNode->value = value;
  nextNode->next = NULL;
  nextNode->previous = NULL;

  if (!stack->first) {
    stack->first = nextNode;
    stack->top = nextNode;
  } else {
    nextNode->previous = stack->top;
    stack->top->next = nextNode;
    stack->top = nextNode;
  }
}

int stackPop(Stack *stack) {
  if (stackIsEmpty(*stack)) {
    printf("Stack empty, exiting\n");
    exit(EXIT_FAILURE);
  }
  int value = stack->top->value;
  Node *top = stack->top;
  if (stack->top->previous) {
    stack->top->previous->next = stack->top->next;
    stack->top = stack->top->previous;
  }
  else {
    stack->first = NULL;
    stack->top = NULL;
  }
  free(top);
  return value;
}

int stackIsEmpty(Stack stack) {
  return !stack.top;
}

void stackFree(Stack *stack) {
  Node *ptr;
  while (stack->first) {
    ptr = stack->first;
    stack->first = stack->first->next;
    free(ptr);
  }
}
