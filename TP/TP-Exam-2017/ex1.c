#include <stdlib.h>
#include <stdio.h>

void AfficheEtoile(int n){
  for(int k = 1; k <= n; k++){
    printf(" ");
  }
  printf("*\n");
}

void LigneEtoiles(int n){
  for(int k = 1 ; k <= n ; k++){
    printf("*");
  }
  printf("\n");
}

void DessineZ(int n){
  LigneEtoiles(n);
  for(int k = n-2; k >= 1; k--){
    AfficheEtoile(k);
  }
  LigneEtoiles(n);
}

int main(void){
  int n;
  printf("Entrer la hauteur du Z a dessiner :\t");
  if((scanf("%d",&n) != 1) || (n <= 3)){
    return EXIT_FAILURE;
  }
  DessineZ(n);
  return EXIT_SUCCESS;
}
