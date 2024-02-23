#include <stdio.h>
int main()
{
  int contador;
  for(contador =5;contador <= 10;contador ++)
  {
    //printf("%i",contador);//sale 12345678910
    printf("%i",contador);//sale 5678910
  }
  //printf("%i",contador); sale 11
  return 0;
}
