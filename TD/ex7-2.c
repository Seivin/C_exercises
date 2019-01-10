// PREND EN PARAMETRES UN TABLEAU D'ENTIERS ET SA LONGUEUR
void saisie_tableau(int t[], int nb){
  for(int k = 0; k < nb; k++){
    if(scanf("%d", &t[k]) != 1){
      return EXIT_FAILURE;
    }
  }
}

// AFFICHE LE TABLEAU
void affiche_tableau(int t[], int nb){
  for(int k = 0; k < nb; k++){
    printf("%d ", t[k]);
  }
}
