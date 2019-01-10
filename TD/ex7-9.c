// Affiche la fréquence de toutes les lettres des intervalles ’A’-’Z’ et ’a’-’z’
// Utilise un tableau indicé sur les caractères pour compter le nombre d’occurrences des lettres.

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void){
  int freq[UCHAR_MAX + 1] = {0};
  int c = getchar();
  while(c != EOF){
    freq[c]++;
  }
  for(int c = 'a'; c <= 'z'; c++){
    printf("%c : %d\n", c, freq[c]);
  }
  for(int c = 'A'; c <= 'Z'; c++){
    printf("%c : %d\n", c, freq[c]);
  }

  return EXIT_SUCCESS;
}
