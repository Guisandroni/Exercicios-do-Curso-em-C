#include <stdio.h>

  int main (){

      int cels,fahr,convert;
      printf("Digite uma temperatua em celsius:\n");
      scanf("%d",&cels);
      convert = (cels * ( 9/5) )+ 32;
      fahr = convert;
      printf("Esta é a temperatura em fahrenheit:%d",fahr);
      return 0;
  }