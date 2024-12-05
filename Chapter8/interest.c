#include <stdio.h>

#define N 5

int main(void) {
  int years;
  float rate, interest;
  float initial = 100.0f;
  float rates[N];

  printf("Enter interest rate: ");
  scanf("%f", &rate);

  printf("Enter number of years: ");
  scanf("%d", &years);

  printf("Years\t");
  for (int i = 0; i < N; i++) {
    rates[i] = rate + i;
    printf("%5.1f%%\t", rates[i]);
  }
  printf("\n");

  for (int i = 1; i <= years; i++) {
    printf("  %d", i);
    for (int j = 0; j < N; j++) {
      interest = i * (rates[j] / 100) * initial;
      printf("\t$%.2f", initial + interest);
    }
    printf("\n");
  }

  return 0;
}
