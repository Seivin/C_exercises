#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Écrivez une fonction nb_occurences qui prend en paramètres une chaîne de caractères s ainsi
// qu’un caractère c, et qui renvoie le nombre d’apparitions de c dans s

int nb_occurences(int n, char *s, char c){
  int nb;     // nb d'occurrences de c dans s
  for(int k = 0; k <= n; k++){
    if(s[k] == c){
      nb += 1;
    }
  }
  return nb;
}

int main(void) {
  // s = mot = tableau de caracteres
  // c = lettre de s
  int n, nb;
  scanf("%d", &n);
  char c;
  char s[n+1];
  scanf("%s", s);
  scanf("\n%c", &c);
  nb = nb_occurences(n, s, c);
  printf("%d", nb);
  return EXIT_SUCCESS;
}
