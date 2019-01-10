#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  int f, c;
  scanf("%d", &f);
  c = (f * 5 - 160) / 9;
  printf("%d degres Farenheit font %d degre Celsius", f, c);
  return EXIT_SUCCESS;
}
