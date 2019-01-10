#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Dit si le caractère passé en paramètre se situe dans la chaîne de caractères
bool estdans(char s[], char c){
  int k = 0;
  while(s[k] != c && s[k] != '\0'){
    k++;
  }
  return (s[k] == c);
}

int main(void) {
  char w[30], c;
  while(scanf("%s %c", w, &c) == 2){
    if(estdans(w,c)){
      printf("%c apparait dans %s", c, w);
    }else{
      printf("%c nappait pas dans %s", c, w);
    }
  }
  return EXIT_SUCCESS;
}
