#include <stdio.h>
int main(){
  int edad;
  printf(" ingresa tu edad, por favor "),
  scanf("%d",&edad);
  if(edad >=18){
    printf("eres mayor de edad");
  }
  else if(edad==17){
    printf("no puedes entrar si no tienes cedula y eres mayor de 18");
  }
  else{
    printf("eres menor de edad");
  }
  return 0;
  }
