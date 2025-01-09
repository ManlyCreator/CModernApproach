#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct { int x, y; } Point;

typedef struct {
  void *data;
  size_t size;
  size_t capacity;
  size_t bytes;
} Vector;

Vector vectorNew(size_t bytes);
void vectorInsert(Vector *vector, int index, void *value);

// TODO: Add a vectorGet() function and loop through a vector to print its values
// TODO: Figure out how to pass constants to vectorInsert (macros?)

int main(void) {
  // malloc creates memory on the heap but does not clear it
  int n = 10;
  int *arr = malloc(n * sizeof(int));
  void *data;
  printf("arr[0] = %d\n", arr[9]);
  // calloc creates memory on the heap and clears it (intialized data to 0)
  Point *p = calloc(1, sizeof(Point));
  printf("x = %d, y = %d\n", p->x, p->y);
  // Vector Data Structure using dynamic memory allocation
  Vector doubleVector = vectorNew(sizeof(double));
  double i = 10.0f;
  vectorInsert(&doubleVector, 0, &i);
  vectorInsert(&doubleVector, 5, &i);
  printf("%g\n", *(double *)(doubleVector.data + 0 * doubleVector.bytes));
  printf("%g\n", *(double *)(doubleVector.data + 1 * doubleVector.bytes));
  printf("%g\n", *(double *)(doubleVector.data + 5 * doubleVector.bytes));
  printf("Size: %ld\n", doubleVector.size);
  printf("Capacity: %ld\n", doubleVector.capacity);
  return 0;
}

Vector vectorNew(size_t bytes) {
  return (Vector){malloc(bytes), 0, 1, bytes};
}

void vectorInsert(Vector *vector, int index, void *value) {
  void *ptr;
  vector->size++;
  if (vector->size >= vector->capacity) {
    vector->data = realloc(vector->data, (vector->bytes * vector->capacity) * 2);
    vector->capacity *= 2;
  }
  if (index > vector->capacity - 1) {
    int difference = index - vector->capacity;
    vector->data = realloc(vector->data, (vector->bytes * vector->capacity) + difference);
    vector->capacity += difference;
  }
  ptr = vector->data + index * vector->bytes;
  memcpy(ptr, value, vector->bytes);
}
