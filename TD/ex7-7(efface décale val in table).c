// Écrire une fonction prenant en paramètre un tableau d’entiers t de taille nb
// et un entier val, qui efface (en décalant les valeurs)
// toutes les occurrences de val dans t et qui renvoie la taille du nouveau tableau.

int supprime(int t[], int n; int val){
  int taille = n;
    for(int k = 0; k < taille; k++){
      if(t[k] == val){
        for(int i = k; i < taille - 1; i++){
          t[i] = t[i+1];
        }
        taille--;
      }
    }
  return taille;  
}
