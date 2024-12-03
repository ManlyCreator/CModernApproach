#include <stdio.h>

int main(void) {
  unsigned short n, middle;
  unsigned short m = 1;
  int row, col;

  printf("Enter an odd number between 1 and 99: ");
  scanf("%2hd", &n);

  if (n % 2 == 0) {
    printf("Invalid number, exiting program\n");
    return 1;
  }

  middle = (n / 2);
  unsigned short magicSquare[n][n];

  // Initializes the array to 0
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      magicSquare[i][j] = 0;
    }
  }

  row = 0;
  col = middle;
  while (m <= n * n) {
    magicSquare[row][col] = m;
    // Decrements row, ensuring that it wraps to the array bounds
    row--;
    if (row < 0)
      row += n;
    // Increments col, ensuring that it wraps to the array bounds
    col = (col + 1) % n;
    // If a space is already occupied, then the space 
    // immediately below the last space is used
    if (magicSquare[row][col] != 0) {
      row = (row + 2) % n;
      col--;
      if (col < 0)
        col += n;
    }
    m++;
  }

  // Prints the magic square
  // (format is dependant on the max number of digits necessary)
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (n * n > 10){
        printf("%2hd ", magicSquare[i][j]);
      }
      else if (n * n > 99) {
        printf("%3hd ", magicSquare[i][j]);
      } else if (n * n > 999) {
        printf("%4hd ", magicSquare[i][j]);
      } else {
        printf("%hd ", magicSquare[i][j]);
      }
    }
    printf("\n");
  }

  return 0;
}
