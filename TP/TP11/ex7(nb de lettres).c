#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Fonction prenant en paramètre une chaine de caractères,
// calculant et retournant le nb de caractères alphabétiques qu’elle a

int lettre(char *s){
  int nb = 0;
  for(int k = 0; s[k]!='\0'; ++k){
    if(('a' <= s[k] && s[k] <= 'z') || ('A' <= s[k] && s[k] <= 'Z')){
    nb++;
    }
  }
  return nb;
}

int main(void){
  char s[99];
  int nb = 0;
  printf("Entrer la chaine :\t");
  if(scanf("%s",s) != 1){
    return EXIT_FAILURE;
  }
  nb = lettre(s);
  printf("Il y a %d lettres",nb);
  return EXIT_SUCCESS;
}
