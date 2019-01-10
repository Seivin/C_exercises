#include <stdio.h>
#include <stdlib.h>

// fonction prenant en paramètre un tableau de réels et sa longueur,
// calcule et retourne la moyenne des valeurs qu’il a.

double moyenne(int t[], int n){
  double m = 0;
  for(int k = 0; k < n; k++){
    m = m + t[k];
  }
  m = m / n;
}

int main(void) {
  int n;
  printf("Entrez le nb de notes pour le calcul de moyenne.\n");
  if((scanf("%d, &n") !=1 || (n <= 1)){
    return EXIT_FAILURE;
  }
  int t[n];

  for(int k = 0; k < n; k++){
    scanf("%d", &t[k]);
  }

  return EXIT_SUCCESS;
}
