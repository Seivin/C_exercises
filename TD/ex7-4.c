#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Un tableau d’entiers est équilibré s’il contient autant de valeurs inférieures à la moyenne que
// que de valeurs supérieures. Écrivez une fonction indiquant si un tableau est équilibré ou
// non.

double moyenne(double t[], int n){
  double s = 0.0;
  for(int k = 0; k < n; k++){
    s+=t[k];
  }
  return (s/n);
}

bool est_equilibre(double t[], int n){
  double m = moyenne(t, n);
  int inf = 0;
  int sup = 0;
  for(int k; k < n; k++){
    if(t[k] < m){
      inf++;
    } else {
      if(t[k] < m){
        sup++;
      }
    }
  }
  return(sup == inf);
}
