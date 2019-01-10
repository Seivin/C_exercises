// Programme qui calcule la longueur d’une chaîne de caractères (sans utiliser strlen)

#include <stdio.h>
#include <stdlib.h>
#define MAXLETTRES 30

int longueur(char t[]){ // t[] et *t sont équivalents 
  int k = 0;
  while(t[k] != '\0'){
    k++;
  }
  return k;
}

int main(void){
  char s[MAXLETTRES];
  scanf("%s", s);
  printf("%d \n", longueur(s));
  return EXIT_SUCCESS;
}



