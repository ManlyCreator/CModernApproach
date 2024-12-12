#include <stdio.h>

// 1.) a, g
//
// 2.) e, f, i
//
// 3.) The two errors here are that neither sum nor avg are 
//     dereferenced when being assigned to.
//
// 4.) SEE SCRATCH WORK
//
// 5.) SEE SCRATCH WORK
//
// 6.) SEE SCRATCH WORK

/*** SCRATCH WORK ***/

// 4.)
void swap(int *i, int *j);

// 5.)
void splitTime(int totalSecs, int *hr, int *min, int *sec);

// 6.)
void findTwoLargest(int a[], int n, int *largest, int *secondLargest);

int main(void) {
  // 1.)
  int i = 12;
  int *p = &i;

  printf("%d\n", *&i);

  // 2.)
  int *q = &i;
  p = *&q;
  p = q;
  *p = *q;

  // 4.)
  printf("*** EXCERCISE 4 ***\n");
  int n1 = 4, n2 = 5;
  printf("Before Swap:\tn1 = %d, n2 = %d\n", n1, n2);
  swap(&n1, &n2);
  printf("After Swap:\tn1 = %d, n2 = %d\n", n1, n2);

  // 5.)
  printf("\n*** EXCERCISE 5 ***\n");
  int totalTime = 92520;
  int hr, min, sec;
  splitTime(totalTime, &hr, &min, &sec);
  printf("%.2d:%.2d.%.2d\n", hr, min, sec);

  // 6.)
  printf("\n*** EXCERCISE 6 ***\n");
  int n = 5;
  int largest, secondLargest;
  int a[n];
  printf("Enter %d numbers: ", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  findTwoLargest(a, n, &largest, &secondLargest);
  printf("Largest: %d\n", largest);
  printf("Second Largest: %d\n", secondLargest);

  return 0;
}

// 4.)
void swap(int *i, int *j) {
  int temp = *i;
  *i = *j;
  *j = temp;
}

// 5.)
void splitTime(int totalSecs, int *hr, int *min, int *sec) {
  if (totalSecs >= 3600) {
    *hr = (totalSecs / 3600) % 24;
    totalSecs %= 3600;
  }
  if (totalSecs >= 60) {
    *min = totalSecs / 60;
    totalSecs %= 60;
  }
  *sec = totalSecs % 60;
}

// 6.)
void findTwoLargest(int a[], int n, int *largest, int *secondLargest) {
  *largest = a[0];
  *secondLargest = a[0];
  for (int i = 0; i < n; i++) {
    if (a[i] > *largest) {
      *secondLargest = *largest;
      *largest = a[i];
    } else if (a[i] > *secondLargest) {
      *secondLargest = a[i];
    }
  }
}
