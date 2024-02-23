#include <stdio.h>
int main()
{
  int casos;
  printf("ingresa un numero: ");
  scanf("%i",&casos);
  switch (casos)
  {
    case 1:
    printf("Elegiste el primer caso");
    break;

    case 2:   
    printf("Elegiste el segundo caso");
    break;

     case 3:
     printf("Elegiste el tercer caso");
     break;

     case 4:
     printf("Elegiste el cuarto caso");
     break;

     case 5:
     printf("Elegiste el quinto caso");
     break;

     default:
     printf("No encontraste tu caso");
     break;
  }
}
