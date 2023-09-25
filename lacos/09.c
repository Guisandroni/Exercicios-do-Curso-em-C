#include <stdio.h>

  int main (){
      int numero,contador = 0,soma = 0,media;

        while (numero != -1)
        {     printf("Digite numeros inteiros:\n");
              scanf("%d",&numero);
              
            if ( numero > 0 )
            {
            contador ++;
            soma = soma + numero;
            media = soma / contador;
    
             } if (numero == 0)             {
               break;
             }
                  }
          printf("A Soma dos numeros é %d e a media é %d ", soma , numero);
          return 0 ;     
  }