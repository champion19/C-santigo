#include <stdio.h>
int main(){
  int num1,num2,resultado;
  int a=12;
  int b=3;
  printf("Ingrese el primer valor ");
  scanf("%d",&num1);
  printf("ingrese el segundo valor ");
  scanf("%d",&num2);
  /*resultado=a*(num1+num2)+b*(b+num2);*/
  resultado=a * b * num1 + num2;
  printf("el resultado es:%d ",resultado);
  return 0;
  }
