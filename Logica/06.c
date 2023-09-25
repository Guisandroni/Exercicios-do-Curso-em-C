#include <stdio.h>

  int main (){
int convert , km ;
  printf("Digite uma velocidade em km/h:");
  scanf("%d",&km);

    convert = km/3.6;
    printf("Velocidade convertida em ms/s :%d",convert);
    return 0;
  }