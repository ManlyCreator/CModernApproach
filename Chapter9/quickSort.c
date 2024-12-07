#include <stdio.h>

#define N 5

void quickSort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void) {
  int nums[N];
  int n;

  printf("Enter %d numbers to be sorted: ", N);
  for (int i = 0; i < N; i++) {
    scanf("%d, ", &nums[i]);
  } 

  quickSort(nums, 0, N - 1);

  printf("Sorted array: ");
  for (int i = 0; i < N; i++) {
    printf("%d%c ", nums[i], i < N - 1 ? ',' : ' ');
  }
  printf("\n");

  return 0;
}

void quickSort(int a[], int low, int high) {
  int middle;
  if (low >= high)
    return;
  
  middle = split(a, low, high);
  quickSort(a, low, middle - 1);
  quickSort(a, middle + 1, high);
}

int split(int a[], int low, int high) {
  int partition = a[low];

  while (1) {
    while (low < high && a[high] >= partition)
      high--;

    if (high <= low)
      break;
    a[low] = a[high];
    low++;

    while (high > low && a[low] <= partition)
      low++;

    if (low >= high)
      break;
    a[high] = a[low];
    high--;
  }

  a[high] = partition;
  return high;
}
