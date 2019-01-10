// On souhaite écrire un programme qui calcule la moyenne d’une suite de valeurs entières positives ou nulles lues sur l’entrée.

# define STOP -1

int saisie_entier_superieur(int n){
  int res;
  printf("Saisir un entier >= %d\n", n);
  if(scanf("%d", &res) != 1){
    return (n - 1);
  }
  while(res < n){
    printf("Erreur, saisir un entier >= %d", n);
    if(scanf("%d", &res) != 1){
      return (n-1);
    }
  }
  return res;
}

int main (void){
  printf("Nombre de valeurs a saisir ?\n");
  int nb_val = saisie_entier_superieur(0);
  int somme = 0;
  for(int k = 0; k < nb_val; k++){
    int val = saisie_entier_superieur(0);
    if(val < 0){
      printf("Erreur.\n");
      return EXIT_FAILURE;
    }
    somme += val;
  }
  printf("Moyenne = %lf\n", (double)somme/nb_val);
  
  int val = saisie_entier_superieur(c);
  if(val < 0){
    printf("Erreur scanf.\n");
    return EXIT_FAILURE;
  }
  somme = 0;
  nb_val = 0;
  while(val > -1){
    somme += val;
    nb_val++;
    val = saisie_entier_superieur(0);
    if(){
      printf("Erreur scanf.\n");
      return EXIT_FAILURE;
    }
  }
  printf("moyenne = %lf\n", (double)somme/nb_val);
  return EXIT_SUCCESS;
}
