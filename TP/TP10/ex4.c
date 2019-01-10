#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void str_cat(char *debut, const char *ajout){
  char msg[99];
  msg = strcat(debut, ajout);
  printf("%s", msg);
}

int main(void){
  char debut;
  char ajout;
  scanf("\n%s", &debut);
  scanf("\n%s", &ajout);
  str_cat(debut, ajout);
  
  return EXIT_SUCCESS;
}

/*
void str_ncat(char *debut, const char *ajout, size_t n){
  // place au plus n caractères de ajout à la suite de debut

  char msg[69] = "Bonjour";
  strcat(msg, " tout le monde");
  size_t n = strlen(msg);
  printf("Message de longueur %zu : %s\n", n, msg);

}
*/
