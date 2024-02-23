#include <stdio.h>
int suma();
int num3=2;
int main()
{
  int num1, num2;
  printf("Por favor ingresa el primer numero: ");
  scanf("%i",&num1);
  printf("por favor ingresa el segundo numero: ");
  scanf("%i",&num2);
  printf("El resultado es : %i",suma(num1,num2));
return 0;
}
int suma(int num1,int num2)
{
  int suma=num1+num2+num3;
  return suma;
}
