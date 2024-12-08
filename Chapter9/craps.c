#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice(void);
int playGame(void);

time_t seed;
int rollCount = 0;

int main(void) {
  int didWin;
  int wins = 0, losses = 0;
  char decision;
  while (1) {
    didWin = playGame();

    switch (didWin) {
      case 1:
        wins++;
        break;
      default:
        losses++;
        break;
    }

    printf("Keep playing? ");
    scanf("%c", &decision);
    if (toupper(decision) != 'Y')
      break;
    while(getchar() != '\n');
  };

  printf("Wins: %d\n", wins);
  printf("Losses: %d\n", losses);

  return 0;
}

int rollDice(void) {
  int roll;

  time(&seed);

  seed += rollCount;
  rollCount++;

  srand(seed);

  roll = (rand() % 6) + 1;
  roll += (rand() % 6) + 1;

  return roll;
}

int playGame(void) {
  int roll, point;
  int round = 1;
  char decision;

  while (1) {
    roll = rollDice();   
    printf("You rolled: %d\n", roll);
    if (round == 1) {
      if (roll == 7 || roll == 11) {
        printf("You win!\n");
        return 1;
      } else if (roll == 2 || roll == 3 || roll == 12) {
        printf("You lose!\n");
        return 0;
      } else {
        point = roll;
        printf("Your point is: %d\n", point);
      }
    } else {
      if (roll == point) {
        printf("You win!\n");
        return 1;
      } else if (roll == 7) {
        printf("You lose!\n");
        return 0;
      }
    }
    round++;
  }
}
