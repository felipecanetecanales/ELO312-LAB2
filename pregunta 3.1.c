int f1(int *x, int *y, int n, int a, int b, int c, int d)
{
  int i, res, valor;

  for(i = 0, res = 0; i < n; i++, x++, y++)  
    res += (*x) - 2*(*y);
    valor = a; 
    valor += b;
    valor += c; 
    valor += d;
    printf("valor:%d", valor);

  return res;
}

int main(void)
{
  int x[] = { -1, 0, 1, 2, 3};
  int y[] = { 5, 6, 7, 8, 9, 0x10};
  int n = 5;
  int a = 4;
  int b = 3;
  int c = 2;
  int d = 1;
  int suma;

  suma = f1(x,y,n,a,b,c,d);
  return(suma);
}
