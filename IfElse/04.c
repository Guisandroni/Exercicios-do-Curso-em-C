#include <stdio.h>

int main () {
    int num , par_impar;

    printf("Digite um numero posivito:\n");
    scanf("%d",&num);

    //par ou impar
    par_impar = ( num % 2);

    if (par_impar == 0)
    {
      printf("O numero %d é par !!",num);
    } else
    {
      printf(" o numero %d é impar !!", num);
    }

    return 0 ;
    
    
}