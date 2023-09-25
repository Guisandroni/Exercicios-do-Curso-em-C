#include <stdio.h>

  int main (){
      int soma = 0,i,num;

        for ( i = 0; i < 10; i++)
        { 
          printf("Digite 10 valores inteiros:\n");
          scanf("%d",&num);
          soma  = soma + num;
        }
          printf("Soma é:%d",soma);
        return 0;
        
  }