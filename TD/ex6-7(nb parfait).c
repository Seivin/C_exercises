/*

Un entier naturel est dit parfait lorsqu’il est égal à la somme de ses diviseurs stricts (c’est à dire ses diviseurs
exceptés lui-même). Par exemple 6 = 1 + 2 + 3 est parfait.
Écrivez une fonction qui dit si un nombre est parfait ou non.

*/

int som_div (int n) {
  int s = 0;
  for(int k = 1; k < n; k++){
    if(n%k == 0){
      s+=k;
    }
    return s;
  }
}

bool_est_parfait(int n){
  return(n == som_div(n));
}
