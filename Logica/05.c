#include <stdio.h>

  int main (){

      int cels,fahr,convert;
      printf("Digite uma temperatua em fahrenheit:\n");
      scanf("%d",&fahr);
      convert = (5 * ( fahr - 32) / 9 );
      cels = convert;
      printf("Esta é a temperatura em celsius:%d",cels);
      return 0;
  }