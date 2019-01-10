#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  int tab[5] = {1, 2, 3, 4, 5};
  // DOUBLE LES VALEURS DU TABLEAU
  for(int k = 0; k < 5; k++){
    tab[k] = 2 * tab[k];
  }

  return EXIT_SUCCESS;
}
