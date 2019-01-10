#include <stdio.h>
#include <stdlib.h>

// deux valeurs entières lues sur l’entrée, demande à l’utilisateur de taper
// 1 pour calculer leur somme, 2 pour leur différence, 3 pour leur produit,
// 4 pour leur quotient, 5 pour leur division exacte et 6 pour leur moyenne.
// Le programme affichera ensuite le résulat de l’opération choisie par l’utilisateur.

int main(void) {
  int a, b, op;
  if(scanf("%d %d %d", &a, &b, &op) != 3){
    printf("Erreur de saisie.\n");
    return EXIT_FAILURE;
  }
  
  int res;
    if(op == 1) {
      res = a + b;
    } else {
      if(op == 2) {
        res = a - b;
      } else {
        if(op == 3) {
          res = a * b;
        } else {
          if(op == 4) {
            printf("%d", a/b);
          } else {
            if(op == 5){
              printf("%f", (float)a, (float)b);
            } else {
              printf("Erreur.\n");
            }
          }
        }
      }
  return EXIT_SUCCESS;
    }
}
