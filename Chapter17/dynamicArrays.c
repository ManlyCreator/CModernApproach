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
void *vectorGet(Vector vector, int index);
void vectorFree(Vector *vector);

int main(void) {
  // malloc creates memory on the heap but does not clear it
  int n = 10;
  int *arr = malloc(n * sizeof(int));
  printf("arr[0] = %d\n", arr[9]);

  // calloc creates memory on the heap and clears it (intialized data to 0)
  Point *p = calloc(1, sizeof(Point));
  printf("x = %d, y = %d\n", p->x, p->y);

  // Vector Data Structure using dynamic memory allocation
  Vector doubleVector = vectorNew(sizeof(double));
  double v[] = { 10.0f, 0.0f, 5.0f, 20.0f, 30.0f };

  for (int i = 0; i < sizeof(v) / sizeof(v[0]); i++) {
    printf("%d.) Vector Capacity: %ld\n", i, doubleVector.capacity);
    vectorInsert(&doubleVector, i, &v[i]);
  }

  for (int i = 0; i < doubleVector.size; i++) {
    printf("Vector[%d] = %g\n", i, *(double *)vectorGet(doubleVector, i));
  }

  // Freeing memory
  free(arr);
  free(p);
  vectorFree(&doubleVector);
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

void *vectorGet(Vector vector, int index) {
  return vector.data + index * vector.bytes;
}

void vectorFree(Vector *vector) {
  free(vector->data);
  vector->size = 0;
  vector->capacity = 0;
  vector->bytes = 0;
}
