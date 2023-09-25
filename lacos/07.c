#include <stdio.h>
int main (){
    int soma, media,numero;

      for (int i = 0; i < 10; i++)
      {
        printf("Digite 10 inteiros posistivos:");
        scanf("%d",&numero);

        soma = soma + numero;
        media = soma / 10;
      }
        printf("A soma dos numeros é %d e a media %d ",soma,media);
      return 0;
}