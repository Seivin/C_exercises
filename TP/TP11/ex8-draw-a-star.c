#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // Scanf de la taille du tableau
  int h;
  printf("Veuillez entrer un nombre impair.\n");
  if(scanf("%d", &h) != 1 || (h%2 == 0)){
    return EXIT_FAILURE;
  }
  
  // Create le tableau
  char t[h][h];
  
  // Fill le tableau avec des espaces
  for(int k = 0; k < h; k++){
    for(int l = 0; l < h; l++){
      t[k][l] = ' ';
    }
  }
  
  // Fill les cases en diagonale (gauche à droite)
  for(int k = 0; k < h; k++){
    t[k][k] = '*';
  }
   
  // Fill les cases en diagonale (droite à gauche)
  int a = 0;
  int b = h-1;
  while(a < h){
	t[a][b] =  '*';
	a++;
	b--;
  }
  
  // Printf le tableau 
  for(int k = 0; k < h; k++){
    for(int l = 0; l < h; l++){
      printf("%c ", t[k][l]);
    }
    printf("\n");
  }
  
  return EXIT_SUCCESS;
}
