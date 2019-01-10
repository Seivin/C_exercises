#include <stdlib.h>
#include <stdio.h>

void initialisation_fibo(int t[]);

int main (){
  int tab[47];
  initialisation_fibo(tab);
  
  int n;
    
  while(scanf("%d", &n)==1){
    if(0<=n && n<=46){
      printf("le terme de fibonacci au rang %d est %d", n,tab [n]);
    }
    return EXIT_SUCCESS;
  } 
  
  return EXIT_SUCCESS;
}

void initialisation_fibo(int t[]){
  t[0]=0;
  t[1]=1;
  
  for(int k=2; k<47; ++k){
    t[k]=t[k-1]+t[k-2];
  }
}
