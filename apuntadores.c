#include<stdio.h>
void cubo(int *n);
int main()
{
  int num=5;
  printf("Valor original %i",num);
  cubo(&num);
  printf("El nuevo valor %i",num);
  return 0;
}
void cubo(int *n)
{
  *n=*n * *n * *n;
}

