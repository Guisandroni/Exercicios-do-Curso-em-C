#include <stdio.h>

  int main () {

      int calc ,numero = 0; 
      for (int  i = 0; i < 5; i++)
      {
      printf("Digite um numero maior que zero:");
      scanf("%d",&numero);
      calc = numero % 3;
      }
        printf("Resultado: %d",calc);

        return 0;
      
      
  }