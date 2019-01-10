/*

BU ouverte : 9h-13h et 14h-18h
Sauf le samedi matin et tout le dimanche
Affiche si la bibliothèque est ouverte ou fermée
au jour et à l’heure donnés en entrée

*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
  int j, h;
  if(scanf("%d %d", &j, &h) != 2){
    printf("Erreur de saisie.\n");
    return EXIT_FAILURE;
  }
  if(1 <= j && j <= 7 && 0 <= h && h <= 23){
    if((j <= 5 && h >= 9 && h < 13) || (j <= 6 && h>= 14 && h < 18)){
      printf("Ouvert\n");
    } else {
      printf("Ferme\n");
    }
  } else {
    printf("Erreur de saisie.\n");
    return EXIT_FAILURE;
  }
}
