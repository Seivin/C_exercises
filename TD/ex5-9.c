// PREND 3 INT, TRIAGE PAR ORDRE CROISSANT

#include <stdio.h>
#include <stdlib.h>

void echange3(int *a, int *b, int *c){
  void ech(int *x, int *y){
    int z;
    z = *x;
    *x = *y;
    *y = z;
  }
  if(*a > *b){
    ech(a, b);
  }
  if(*b > *c){
    ech(b, c);
  }
  if(*a > *b){
    ech(a, b);
  }
}

int main(void) {
  int a, b, c;
  if(scanf("%d %d %d", &a, &b, &c)){
    printf("Erreur de saisie.\n");
    return EXIT_FAILURE;
  }
  echange3(&a, &b, &c);
  return EXIT_SUCCESS;
}
