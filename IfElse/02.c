#include <stdio.h>

int main () {
  int numero,raiz;

  printf("Digite um numero positivo:\n");
  scanf("%d",&numero);

  if (numero >0)
  {
      raiz = (numero * numero);
      printf("O numero %d digitado é positivo , seguindo a logica!!!\n",numero);
      printf("Raiz do numero %d é :%d\n",numero,raiz);

  } else {
      printf("O numero %d é negativo :(\n",numero);
  }
  return 0;
}