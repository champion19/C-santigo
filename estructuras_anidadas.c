#include<stdio.h>
#define length 2
struct owner
{
  char nombre[20];
  char direccion[30];
};
struct dog
{
  char nombre[20   ];
  int edadmeses;
  struct owner ownerDog;
}dogs[length];
int main()
{
  for (int i = 0; i < length ; i++)
  {
    printf("Nombre del perro\n");
    scanf("%s",dogs[i].nombre);
    printf("Edad del perro en meses\n");
    scanf("%i",&dogs[i].edadmeses);
    printf("Nombre del Dueño\n");
    scanf("%s",dogs[i].ownerDog.nombre);
    printf("direccion\n");
    scanf("%s",dogs[i].ownerDog.direccion);
    printf("\n");
  }
  for (int i = 0; i < length; i++)
  {
    printf("El nombre del perro es:%s\n",dogs[i].nombre);
    printf("La edad en meses es: %i\n",dogs[i].edadmeses);
    printf("El nombre del dueño es: %s\n",dogs[i].ownerDog.nombre);
    printf("L direccion es:%s\n",dogs[i].ownerDog.direccion);
  }
  return 0;
}
