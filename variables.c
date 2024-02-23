#include <stdio.h>
int main()
{
  char C= 'Y';// tamaño de 1 byte rango de 0 a 255
  int a =20;//2 byte -32768 a 32767
  short e=-1;//2 byte -128 a 127
  unsigned int u =25 ;// 2 byte 0 a 65535
  long l= 5932;// 4 bytes -2147483647 a 2147483647
  float f=72.538;// 4 bytes
  //printf("%li",l);//li long integer
  double d= 12323.877658;//8 bytes
  //printf("%.2f",f);
  //printf("%lf",d);//lf long float
 printf("%.2lf",d);
  return 0;
}
