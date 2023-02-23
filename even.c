#include <stdio.h>

int main(void) {
  int num, sqrt, i;
  scanf("%d", &num);
  i = 2;
  sqrt = 0;
  while (sqrt < num) {
    sqrt = i*i;
    if (sqrt <= num) {
      printf("\n%d\n", sqrt);
      i += 2; }
} return 0;
}