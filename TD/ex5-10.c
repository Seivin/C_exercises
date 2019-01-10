#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double a, b;
  if(scanf("%lf %lf", &a, &b) != 2){
    printf("Erreur de saisie.\n");
    return EXIT_FAILURE;
  }
  if(a != 0){
    printf("Une solution %f,\n", -b/a);
  } else {
    if(b != 0){
      printf("Aucune solution.");
    } else {
      printf("Infinite de solutions.");
    }
  }
  return EXIT_SUCCESS;
}

// lit deux valeurs réelles a et b, affiche la solution de l’équation ax+b = 0
// On envisagera tous les cas particuliers
