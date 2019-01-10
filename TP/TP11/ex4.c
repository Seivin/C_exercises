#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool parfait(int n){
  int r=0;
  for(int k=1 ; k<n ; ++k){
    if(n%k==0){
      r=r+k;
    }
  }
  return (r==n);
}

int main(void){
  int n;
  printf("Entrer un entier :\t");
  if((scanf("%d",&n)!=1)||(n<0)){
    return EXIT_FAILURE;
  }
  if(parfait(n)==1){
    printf("Nombre parfait");
  } else {
    printf("Nombre imparfait");
  }
  return EXIT_SUCCESS;
}
