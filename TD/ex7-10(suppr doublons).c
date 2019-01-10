// Écrivez un programme qui demande à l’utilisateur de saisir un tableau d’entiers,
// puis qui supprime les doublons dans le tableau et affiche enfin le résultat

// Supprime toutes les occurences de v dans t[] à partir de la position k
void supprime(int t[], int v; int k; int *f){
  for(int i = k; i < *f; i++){
    if(t[i] == v){
      for(int j; j < *f; j++){
        t[j-1] = t[j];
      }
      (*f)--;
    }
  }
}

// Supprime les doublons dans t[] (de taille *f)
void supp_doublons(int t[], int *f){
  for(int k = 0; k < *f-1; k++){
    supprime(t, t[k], k+1, *f);
  }
}

int main(void){
  int n;
  scanf("%d", &n);
  int t[n];
  for(int k = 0; k < n; k++){
    printf("t[%d]", k);
    while(scanf("%d", &[k]) != 1){
      print("Erreur, recommencez.\n");
    }
  }
  
  supp_doublons(t, &n);
  for(int k = 0; k < n; k++){
    printf("%d \t", t[k]);
  }
  printf("\n");
  return EXIT_SUCCESS;
}
