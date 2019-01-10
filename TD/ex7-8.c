#include <stdio.h>
#include <stdlib.h>

// Programme qui affiche la n-ième ligne de ce triangle

int main(void){
  int n;
  scanf("%d", &n);
  int t[n][n];
  pascal(t, n);
  for(int i = 0; i < n; i++){
    for(int j = 0; i < n; i++){
      printf("%d \t", t[i][i]);
    }
    printf("\n");
  }
  return EXIT_SUCCESS;
}

void pascal(int t[][], int n){
  for(int i = 0; i < n; i++){
    // t[i][] = 1;
    // t[i] = 1;
  }
  for(int i = 0; i < n; i++){
    for(int j = 1; j < n; j++){
      t[i][j] = t[i-1][j-1] + t[i-1][j];
    }
  }
}
