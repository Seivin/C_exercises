// MIN EN MAJ

#include <stdio.h>
#include <stdlib.h>

int main(){
  char w[30];
  scanf("%s", w);
  for(int k = 0; w[k] != '\0'; k++){
    if(w[k] >= 'a' && w[k] <= 'z'){
      w[k] = 'a' + w[k] - 'A'; // Décalage de w[k] par rapport à 'A'
    }
  }
  printf("%s\n", w);
  return EXIT_SUCCESS;
}
