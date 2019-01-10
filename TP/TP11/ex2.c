#include <stdio.h>
#include <stdlib.h>

int caractere(char c){
  int r;
  if(('a' <= c && c <= 'z') || ('A'<= c && c <= 'Z')){
    r = 1;
  } else {
    if('0' <= c && c <= '9'){
      r=0;
    } else {
      r=-1;
    }
  }
  return r;
}

int main(void){
  char c;
  int r;
  printf("Entrer un caractère :\t");
  if(scanf("%c",&c)!=1){
    return EXIT_FAILURE;
  }
  r=caractere(c);
  if(r==1){
    printf("C'est une lettre");
  } else {
    if(r==0){
      printf("C'est un chiffre");
    } else {
      printf("Ce n'est ni une lettre, ni un chiffre");
    }
  }
  return EXIT_SUCCESS;
}
