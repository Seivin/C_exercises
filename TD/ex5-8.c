/*

1st, 2nd, 3rd, 4th
Pour déterminer le suffixe, on regarde le dernier chiffre du nombre : si c’est 1 on ajoute le suffixe -st, si c’est 2 le suffixe -nd, si c’est 3 le suffixe est -rd, sinon le suffixe est -th.
Il y a une exception : si l’avant dernier chiffre du nombre est 1, le suffixe est toujours -th.
Écrivez un programme qui lit un nombre et qui affiche l’ordinal anglais abrégé correspondant.

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  if(scanf("%d", &n) != 1) {
    return EXIT_FAILURE;
  }
  int d = n%10;
  int ad = (n%100)/10;
  if(ad == 1 || d >= 4){
    printf("%dth\n", n);
  } else {
    if(d == 1){
      printf("%dst", n);
    } else {
      if(d == 2){
        printf("%dnd", n);
      } else {
        printf("%drd",n );
      }
    }
  }
  return EXIT_SUCCESS;
}
