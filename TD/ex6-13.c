// PGCD

unsigned int pgcd(unsigned int x, unsigned int y){
  if(y > x){
    unsigned z = x;
    x = y;
    y = z;
  }
  unsigned int res;
  while(y != 0){
    res = x%y;
    x = y;
    y = res;
  }
  return x;
}
