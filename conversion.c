#include <stdio.h>
int main(){
  int a = 80;
  float f = 45.3;
  //printf("entero %i flotante %.2f double %.3f caracter %c",a,(float)a,(double)a,(char)a);
  float suma=(float)a + f;
  printf("%.2f",suma);
  return 0;
}
