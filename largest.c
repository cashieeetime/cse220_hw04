#include <stdio.h>

int main(void) {
  int idx, size, max;
  size = 6;
  max = 0;
  int numbers[size];

  for (idx=0; idx<size; idx++) {
    scanf("%d", &numbers[idx]);
  }

  for (idx=size - 1; idx>=0; idx--) {
    if (numbers[idx] > max) {
      max = numbers[idx];
    }
  }

  printf("\n%d", max);
  return 0;
}