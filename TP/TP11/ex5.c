#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool parfait(int n){
  int r = 0;
  for(int k = 1; k<n; k++){
    if(n%k == 0){
      r = r+k;
    }
  }
  return (r == n);
}

void parfait_t(int t[], int *n){
  int k = 0;
  int i = 1;
  while(k != *n){
    if(parfait(i)){
      t[k] = i;
      k++;
    }
    i++;
  }
}

int main(void){
  int n;
  printf("Entrer un entier :\t");
  if((scanf("%d", &n) != 1) || (n < 0)){
    printf("Erreur.\n");
    return EXIT_FAILURE;
  }
  int t[n];
  parfait_t(t,&n);
  for(int k = 0; k < n; k++){
    printf("%d\n", t[k]);
  }
  return EXIT_SUCCESS;
}
