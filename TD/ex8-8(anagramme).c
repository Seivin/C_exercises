#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Dit si les caractères d’une chaîne de caractère passée en paramètres sont tous distincts
bool tousdif(char w[]){
  int n = strlen(w) - 1;
  for(int i = 0; i < n-1; i++){
    for(int j = i+1; j < n; j++){
      if(w[i] == w[j]){
        return false;
      }
    }
  }
  return true;
}

// 
bool estanagramme1(char w1[], char w2[]){
  bool ana = true;
  if strlen(w1) !== strlen(w2) || !tousdif(w1) || !tousdif(w2)){
    ana = false;
  }
  for(int i = 0; i < strlen(w1) && ana; i++){
    ana = estdans(w2, w1[i]);
  }
  return ana;
}

// Écrivez une fonction qui prend en paramètres une chaîne de caractères mot et un caractère c,
// puis qui renvoie l’indice de la première occurence de c dans mot si c est dans mot, -1 sinon.
int premiere_oc(mot[], char c){ // mot[] et *mot sont équivalents 
  int p = -1;
  for(int i = 0; i < strlen(mot) && p == -1; i++){
    if(mot[i] == c){
      p = i;
    }
  }
  return p;
}

// Écrivez une fonction void supprime_lettre(char *mot, unsigned int ind) qui supprime la lettre d’indice ind de mot.
void supprime_lettre(char *mot, int ind){
  for(int i = ind; i < strlen(mot); i++){
    mot[i] = mot[i+1];
  }
}

// programme qui dit si deux mots sont anagrammes
bool est_anagramme(char mot[c], char *mot2){
  bool ana = true;
  for(int i = 0; i < strlen(mot1) && ana; i++){
    int p = prem_oc(mot2, mot1[i]){
      if(p !== 1){
        supprime_lettre(mot2, p);
      }else{
        ana = false;
      }
    }
  }
  return (ana && strlen(mot2) == 0);
}
