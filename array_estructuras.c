#include <stdio.h>
struct  perro
{
 char nombre[30];
 int edadmeses;
 float peso;
}perros[2];
int main()
{
  for (int i = 0; i < 2; i++)
  {
    printf("%i Ingresa el nombre del perro",i+1);
    scanf("%s",perros[i].nombre);
    printf("%i Ingresa la edad del perro",i+1);
    scanf("%i",&perros[i].edadmeses);
    printf("%i Ingresa el peso del perro",i+1);
    scanf("%f",&perros[i].peso);
  }

  for (int i = 0; i <2; i++)
  {
      printf("%i El nombre del perro es  %s",i+1,perros[i].nombre);
      printf("%i La edad en meses del perro es  %i",i+1,perros[i].edadmeses);
      printf("%i El peso del perro es  %.2f",i+1,perros[i].peso);
  }
  return 0;
}
