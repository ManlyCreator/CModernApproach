#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[]) {
  char *planets[] = { "Mercury", "Venus", "Earth",
                      "Mars", "Jupiter", "Saturn",
                      "Uranus", "Neptune", "Pluto" };
  char **arg = argv + 1;
  char **planet;
  while (*arg) {
    planet = planets;
    while (planet < planets + NUM_PLANETS) {
      if (strcmp(*arg, *planet) == 0) {
        printf("%s is planet %d\n", *planet, (int)(planet - planets) + 1);
        break;
      } else if (planet == planets + (NUM_PLANETS - 1)) {
        printf("%s is not a planet\n", *arg);
      }
      planet++;
    }
    arg++;
  }
  return 0;
}
