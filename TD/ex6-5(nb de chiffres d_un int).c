// Fonction renvoyant le nb de chiffres d’un int en paramètre

int chiffres(int n){
  int r = n;
  int res = 0;
  if(n == 0){
    res = 1;
  }
  while(r > 0){
    r = r/10;
    res++;
  }
  return res;
}
