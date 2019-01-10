#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool VerifProp(int n){
  int prop = 0;
  if((n%2 == 0) && (n%3 != 0)){
    prop++;
  }
  return (prop != 0);
}

void nbsX(int tab[], int n){
  int k = 0;
  int i = 1;
  while(k != n){
    if(VerifProp(i)){
      tab[k] = i;
      k++;
    }
    i++;
  }
}

bool recherche(int tab[], int n, int val){
  int oui = 0;
  for(int k = 0; k < n; k++){
    if(tab[k] == val){
      oui++;
    }
  }
  return (oui != 0);
}

int main(void){
  int n = 20;
  int tab[n];
  int val;
  nbsX(tab, n);
  printf("Entrer les valeurs :\t");
  while(scanf("%d", &val) == 1){
    if(val > tab[19]){
      printf("Erreur\n");
    } else {
      if(recherche(tab, n, val)){
        printf("Oui\n");
      } else {
        printf("Non\n");
      }
    }
  }
  return EXIT_SUCCESS;
}
