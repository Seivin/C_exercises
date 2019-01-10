int fibo(int n){
  if(n == 0 || n == 1){
    return n;
  }
  int fk = 1;
  int fkmoins1 = 0;
  for(int k = 2; k <= n; k++){
    int t = fk;
    fk = fk + fkmoins1;
    fkmoins1 = t;
  }
  return fk;
}
