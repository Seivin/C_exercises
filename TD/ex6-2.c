#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  // Somme des entiers de 0 à n
  int somme = 0;
  for(int k = 1; k <= n; k++){
    somme += k;
  }
  
  int k = 1;
  while(k <= n){
    somme += k;
    k++;
  }
  
  
  
  // ’o’ pour oui, ’n’ pour non
  // Reiterer la demande tant que la reponse n’est pas conforme
  char rep;
  if(scanf("%c", &rep) != 1){
    return EXIT_FAILURE;
  }
  while (rep != 'o' && rep != 'n') {
    printf("Erreur de saisie.\n");
    if(scanf("%c", &rep) != 1) {
      return EXIT_FAILURE;
    }
  }
  
}
