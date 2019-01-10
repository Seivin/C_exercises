// Un entier naturel est dit premier lorsqu’il n’a que deux diviseurs : 1 et lui même.
// Écrivez une fonction qui renvoie une valeur booléenne pour dire si l’entier positif ou nul passé en paramètre est
// premier ou non.

bool premier (int n) {
  bool prem = (n != 0);
  int k = 2;
  while(prem && k < n){
    if(n%k == 0){
      prem = false;
    }
  }
  k++;
  return prem;
}

bool premier(int n){
  bool prem =! (n%2 == 0);
  int k = 3;
  while(prem && k <= floor(sqrt(n))){
    if(n%k == 0){
      prem = false;
    }
  }
  return prem;
}
