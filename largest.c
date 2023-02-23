#include <stdio.h>
#include <string.h>

int main(void) {
  char str[1000];
  scanf("%[^\n]%*c", str);
  int max, val;
  max = 0;

  char * token = strtok(str, " ");
  while( token != NULL ) {
    val = atoi(token);
    if (val > max) {
      max = val;
    } token = strtok(NULL, " ");
  } printf("%d", max);
  return 0;
}