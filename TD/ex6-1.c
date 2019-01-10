#include <stdio.h>
#include <stdlib.h>

int main(void) {

  // Affiche les valeurs entières de 0 à 9 séparées de tabs
  for(int k = 0; k < 10; k++){
    printf("%d\t", k);
  }
  
  // Affiche les entiers pairs ...
  for(int k = 10 ; k > 10 ; k--){
    if(k%2 == 0){
      printf("%d\n", k);
    }
  }
  
  // Affiche dans l'ordre croissante les entiers entre 0 et 10
  int k = 0;
  while(k < 10){
    printf("%d\n", 2*k);
    k++;
  }
  
  // Affiche un entier positif ou nul
  printf("Saisir un entier positif ou nul\n");
  int n;
  if (scanf("%d", &n) != 1) {
    return EXIT_FAILURE;
  }
  while (n < 0) {
    printf("Erreur de saisie, recommencez.\n");
    if(scanf("%d", &n) != 1) {
      return EXIT_FAILURE;
    }
  }
  printf("Vous avez saisi : %d\n", n);

  return EXIT_SUCCESS;
}
