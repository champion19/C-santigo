#include <stdio.h>
long Factorial(long numero);
int main()
{
  int numero;
  printf("Por favor ingrese un numero: ");
  scanf("%i",&numero);
  for(int i=0;i<=numero;i++){
    printf("%ld",Factorial(i));
  }
  return 0;
}
long Factorial(long numero)
{
  if(numero <= 1)
  {
    return 1;
  }else{
    return(numero * Factorial(numero -1));
  }

}
