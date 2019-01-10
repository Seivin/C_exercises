#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Palindrome ssi il est le même écrit à l’endroit ou à l’envers
bool estpalindrome(char w[]){
  int n = strlen(w) - 1;
  int k = 0;
  while(w[k] == w[n-k] && k < n/2){
    k++;
  }
  return k >= n/2;
}

int main(void){}
