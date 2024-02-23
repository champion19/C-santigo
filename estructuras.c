#include <stdio.h>
struct perro
{
 char nombre[30];
 int  edadmeses;
 float peso;
}
perro1={"Rocko",21,3.21},
perro2={"Buzz",4,2.30};
int main()
{
  //printf("El peso de: %s es %.2f  Kg y tiene %i meses",perro1.nombre,perro1.peso,perro1.edadmeses);
  printf("El peso de: %s es %.2f  Kg y tiene %i meses",perro2.nombre,perro2.peso,perro2.edadmeses);
  return 0;
}
