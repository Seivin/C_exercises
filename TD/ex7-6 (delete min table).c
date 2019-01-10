#include <stdio.h>
#include <stdlib.h>

// Supprime la note minimale du tableau
void supprimemin(int t[], int n, int i){
  for(int k = i; k < n-1; k++){
    t[k] = t[k+1];
  }
}

// Calcule l’indice de la plus petite note du tableau
int indicedumin(int t[], int n){
  int min = t[n];
  int imin = 0;
  for(int k = 1; k < n; k++){
    if(t[k] < min){
      min = t[k];
      imin = k;
    }
  }
  return imin;
}

int main(void) {
  printf("Entrez le nombre de valeurs.\n");
  int n;
  while(scanf("%d", &n) != 1){
    printf("Erreur de saisie.\n");
  }
  int t[n];
  // Saisie de t
  for(int k = 0; k < n; k++){
    while(scanf("%d", &t[k]) != 1){
      printf("Recommencez la saisie.\n");
    }
  }
  int j = indicedumin(t, n);
  supprimemin(t, n, j);
  for(int k = 0; k < n-1; k++){
    printf("%d\t", t[k]);
  }
  return EXIT_SUCCESS;
}

