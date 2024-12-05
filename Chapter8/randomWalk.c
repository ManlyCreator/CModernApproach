#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLUMNS 10

int main(void) {
  char grid[ROWS][COLUMNS];
  int x = 0, xDir = 0;
  int y = 0, yDir = 0;
  int dir = 0;
  int turns = 0;
  int tries = 0;
  int hasSpaces = 1;
  time_t seed = 0;

  // Initializes the grid as empty spaces
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLUMNS; j++) {
      grid[i][j] = '.';
    }
  }

  // Randomly generates coordinates until all letters of
  // the alphabet are printed
  time(&seed);
  while (turns < 26 && hasSpaces) {
    grid[y][x] = 'A' + turns;

    int tries = 0;
    // Keeps generating random numbers until the coordinate is legal
    do {
      // Pre-maturely breaks out of the loop if there
      // are no empty spaces left
      if (
          grid[y - 1][x] != '.' && grid[y + 1][x] != '.' &&
          grid[y][x - 1] != '.' && grid[y][x + 1] != '.' ||
          tries == 100
      ) {
        xDir = 0;
        yDir = 0;
        hasSpaces = 0;
        break;
      }
      srand(seed);

      dir = rand() % 4;

      // Determines how to increment x & y based off of dir
      switch (dir) {
        case 0:
          xDir = 0;
          yDir = -1;
          break;
        case 1:
          xDir = 1;
          yDir = 0;
          break;
        case 2:
          xDir = 0;
          yDir = 1;
          break;
        case 3:
          xDir = -1;
          yDir = 0;
          break;
      }

      seed += (rand() % 10) + 1;
      tries++;
    } while (
        grid[y + yDir][x + xDir] != '.' ||
        (x + xDir < 0 || x + xDir >= 10) ||
        (y + yDir < 0 || y + yDir >= 10)
      );

    // Increments x & y by their respective direction
    x += xDir;
    y += yDir;

    turns++;
  }

  // Prints the grid
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLUMNS; j++) {
      printf("%c ", grid[i][j]);
    }
    printf("\n");
  }

  return 0;
}
