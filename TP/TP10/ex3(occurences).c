#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Écrivez une fonction qui prend en paramètres une chaîne de caractères mot ainsi que deux
  caractères c1 et c2 , et qui remplace c1 par c2 dans mot .
*/

int nb_occurences(int n, char *s, char c1, char c2){
  int nb;     // nb d'occurrences de c dans s
  for(int k = 0; k <= n; k++){
    if(s[k] == c){
      nb += 1;
    }
  }
  return nb;
}

int main(void) {
  // s = mot = tableau de caracteres
  // c = lettre de s
  int n, nb;
  scanf("%d", &n);
  char c1, c2;
  char mot[n+1];
  scanf("%s", mot);
  scanf("\n%c", &c1);
  scanf("\n%c", &c2);
  nb = nb_occurences(n, mot, c1, c2);
  printf("%d", nb);
  return EXIT_SUCCESS;
}

/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int n;
  printf("taille chaine de caractere (remplir tous les espaces): ");
  if(scanf("%d", &n)!=1){
    printf("erreur saisie");
    return EXIT_FAILURE;
  }
  
  char c1;
  char c2;
  char s[n+1];
  
  printf("caractere 1: ");
  if(scanf(" %c", &c1)!=1){
    printf("erreur saisie");
    return EXIT_FAILURE;
  }
  
  printf("caractere 2: ");
  if(scanf(" %c", &c2)!=1){
    printf("erreur saisie");
    return EXIT_FAILURE;
  }
  
 
  printf("chaine de caractere: ");
  if(scanf("%s", s)!=1){
    printf("erreur saisie");
    return EXIT_FAILURE;
  }
  
  
  for(int k=0; k<=n;++k){
    if(c1==s[k]){
      s[k]=c2;
    }
    printf ("%c", s[k]);
  }
  return EXIT_SUCCESS;
}

*/
