#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
  
  // Initialisation du tableau de 0 à 9
  int table[10];
  for (int k = 0; k < 10; k++){
    table[k] = 0;
  }
  
  // Core
  int n, a;
  n = 10;
  printf("Entrer des nombres\n");
  while(scanf("%d", &a) == 1){
    for(int k = 0; k < n; ++k){
      if(a%10 == k){
        table[k]++;
      }
    }
  }

  printf("Vous avez saisi : \n");
  for(int k=0; k<n; k++){
    if(table[k] != 0){
      printf("%d nombre(s) se terminant par %d \n", table[k], k);
    }
  }

  return EXIT_SUCCESS;
}

/*

#include <stdlib.h>
#include <stdio.h>

void maj_tab(int t[], int n);

int main (){
  int n;
  int t[10]={0};
  
  while(scanf("%d", &n)==1){
    maj_tab(t,n);
  }
  
  for(int k=0; k<10; ++k){
    if (t[k]>0){
      printf ("%d nombres qui se terminent par un %d\n", t[k], k);
    }
  }
  
  return EXIT_SUCCESS;
}

void maj_tab(int t[], int n){
  t[n%10]+=1;
}

*/
