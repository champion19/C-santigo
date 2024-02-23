#include<stdio.h>
size_t getsize(float *ptr);
int main()
{
  //lu long unsigned
  float array[20];
  printf("El numero de bytes en el arreglo es: %lu",sizeof(array));
  printf("El numero de bytes devueltos por getsize es: %lu",getsize(array));
  return 0;
}
size_t getsize(float *ptr)
{
  return sizeof(ptr);
}
