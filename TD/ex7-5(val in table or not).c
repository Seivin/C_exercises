// Écrivez une fonction qui prend en paramètres un tableau d’entiers, sa longueur ainsi qu’une valeur val et qui
retourne si val se trouve dans le tableau ou non.

bool est_dans(int t[], int n, int val){
  int k = 0;
  while(k < n; && t[k] != val){
    k++;
  }
  return (k<n);
}
