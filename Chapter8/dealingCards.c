#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

const char suits[NUM_SUITS] = { 'c', 'd', 'h', 's' };
const char ranks[NUM_RANKS] = { 
  '2', '3', '4', '5',
  '6', '7', '8', '9',
  't', 'j', 'q', 'k',
  'a'
};

int main(void) {
  int inHand[NUM_SUITS][NUM_RANKS] = { 0 };
  int cards, suit, rank;
  time_t seed;

  printf("Enter number of cards in hand: ");
  scanf("%d", &cards);

  printf("Your hand: ");
  for (int i = 0; i < cards; i++) {
    time(&seed);
    srand(seed);

    do {
      suit = rand() % NUM_SUITS;
      rank = rand() % NUM_RANKS;
    } while (inHand[suit][rank]);

    printf("%c%c ", suits[suit], ranks[rank]);
    inHand[suit][rank] = 1;
  }
  printf("\n");

  return 0;
}
