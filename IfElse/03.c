#include <stdio.h>
int main () {

    int num, raiz , quadrado;

      printf("Digite um numero:\n");
      scanf("%d",&num);
      if (num > 0){
          printf("O numero %d é positivo :)\n",num);
          raiz=(num * num);
          printf("Raiz do numero %d é :%d\n",num,raiz);
      } else { 
          printf("O numero %d não é positivo :(\n",num);
          quadrado = ( num * 4 );
          printf("Quadrado do numero %d é : %d ", num , quadrado);
      }
      
      
      
       return   0;
}