#include <stdio.h>
#include <string.h>

#define NAME_LEN 20
#define NUM_EMPLOYEES 10

typedef struct {
  char *name;
  int number;
  char sex;
} employee;

void printEmployee(employee e);

int main(void) {
  // Struct Assignment & Copying
  employee e1, e2;
  char *name = "Rami";
  int number = 500;
  char sex = 'M';
  e1 = (employee){ name, number, sex };
  e2 = e1;
  e2 = (employee){ .name = "Dave", .number = e2.number - 1 };
  printEmployee(e1);
  printEmployee(e2);

  // Arrays of Structs
  employee employees[NUM_EMPLOYEES] = { { "Albert", 390, 'M' }, [2] = { "Mina", 10, 'F' } };
  for (int i = 0; i < NUM_EMPLOYEES; i++) {
    printf("*** EMPLOYEE %d ***\n", i + 1);
    printEmployee(employees[i]);
  }
  return 0;
}

void printEmployee(employee e) {
  printf("Name: %s\n", e.name);
  printf("Number: %d\n", e.number);
  printf("Sex: %c\n", e.sex);
}
