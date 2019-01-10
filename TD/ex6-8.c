/*
Deux nombres entiers naturels strictement positifs sont amis si la somme des diviseurs du premier, excepté
lui-même, est égale au second, et vice-versa.
Fonction qui prend paramètre deux entiers naturels et qui renvoie une valeur booléenne qui indique
si ces entiers sont amis ou pas.
*/

bool amis(int n, int m){
  return(n == som_div(m) && m == som_div(n));
}
