#include <stdio.h>
#include <stdlib.h>

// Calculer, pour une classe de n élèves,
// le nb de ceux dont la note pour une matière est
// supérieure ou égale à la moyenne
// Les notes seront tout d’abord lues sur l’entrée et
// stockées dans un tableau de longueur n.
// La moyenne sera ensuite calculée.
// Enfin le nombre attendu sera calculé et affiché.

double moyenne(double t[], int n){
  double s = 0.0;
  for(int k = 0; k < n; k++){
    s+=t[k];
  }
  return (s/n);
}

int nbsupmoy(double t[], int n){
  double moy = moyenne(t, n);
  int nb = 0;
  for(int k = 0; k < n; k++){
    if(t[k] == moy){
      nb++;
    }
  }
  return nb;
}

int main(void) {
  int n;
    if(scanf("%d", &n) != 1){
      return EXIT_FAILURE;
    }
    double notes[n];
    for(int k = 0; k < n; k++){
      if(scanf("%lf", &notes[k]) != 1){
        return EXIT_FAILURE;
      }
    }
  return EXIT_SUCCESS;
}
