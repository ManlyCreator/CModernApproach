#include <stdio.h>

// TODO: Pg. 399

#define MAX_NUMS 10

typedef struct {
  char *name;
  int age;
  union {
    struct {
      int strength;
    } barbarian;
    struct {
      int wisdom;
    } mage;
  } class;

} character;

typedef struct {
  enum { INT, DOUBLE } type;
  union {
    int i;
    double d;
  } u;
} number;

int main(void) {
  // Usage of unions to save space
  character player = { "Bardock", 20 };
  player.class.barbarian.strength = 100;
  printf("%d\n", player.class.barbarian.strength);
  printf("%d\n", player.class.mage.wisdom);

  // Data mixing with unions
  number numbers[MAX_NUMS] = { [0] = { .type = DOUBLE, .u.d = 4.8 }, [1] = { .type = INT, .u.i = 5 } };
  // This saves space by storing both d & i members at the same address,
  // opposed to structs which would store them side by side,
  // wasting space when only one member is needed per array element
  for (int i = 0; i < MAX_NUMS; i++) {
    printf("numbers[%d] = ", i);
    if (numbers[i].type == INT)
      printf("%d\n", numbers[i].u.i);
    else
      printf("%g\n", numbers[i].u.d);
  }
  return 0;
}
