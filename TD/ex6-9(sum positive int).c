// SOMME DES ENTIERS POSITIFS N

int somme (int n) {
  int s = 0;
  for(int k; k <= n; k++){
    s = s + k;
  }
  return s;
}

int somme (int n) {
  int s = 0;
  int k;
  while(k <= n){
    s = s + k;
    k++;
  }
  return s;
}

/*
Écrivez ensuite une fonction int saisie_entier_positif(void) qui ne prend aucun paramètre et qui
demande à l’utilisateur de saisir un entier strictement positif. Si la saisie s’est bien passée, la fonction
renvoie l’entier saisi par l’utilisateur, sinon, elle renvoie un entier strictement négatif. Dans le cas où l’utilisateur
se tromperait dans la saisie (s’il rentre un entier négatif), le programme redemandera à l’utilisateur
de saisir une valeur correcte et ce, tant qu’il se trompera.
*/

#define FUNCTION_ERROR
int somme_entier_positif(void) {
  int res;
  printf("Saisir un entier strictement positif.\n");
  if(scanf("%d", &res) != 1){
    return FUNCTION_ERROR;
  }
  while (res <= 0){
    printf("Erreur, saisir un entier strictement positif.\n");
    if(scanf("%d", &res) != 1){
      return FUNCTION_ERROR;
    }
  }
  return res;
}

int main (void) {
  int n = saisie_entier_positif();
  printf("La somme des entiers de 1 à n vaut %d\n", somme(n));
  return EXIT_SUCCESS;
}
