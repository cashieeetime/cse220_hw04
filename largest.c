#include <stdio.h>
#include <string.h>

int main(void) {
  char str[1000];
  scanf("%[^\n]%*c", str);
  int max, val;
  max = 0;

  char * token = strtok(str, " ");
  while( token != NULL ) {
    token = strtok(NULL, " ");
    val = atoi(token);
    if (val > max) {
      max = val;
    }
  }

  printf("%d", val);
  return 0;
}