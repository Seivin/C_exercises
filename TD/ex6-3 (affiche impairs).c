// fonction void affiche_impairs(int n) qui prend en paramètre un entier positif n et qui affiche
// dans l’ordre croissant tous les entiers impairs compris entre 1 et n

void affiche_impairs(int n){
  for(int k = 1; k <= n; k++){
    if(k%2 == 1){
      printf("%d\t", k);
    }
  }
}

// Version 2

void affiche_impairs(int n){
  for(int k = 1; k < n; k = k+2){
    printf("%d\t", k);
  }
}

// Version while

void affiche_impairs(int n){
  int k = 1;
  while(k <= n){
    printf("%d\t", k);
    k += 2;
  }
}
