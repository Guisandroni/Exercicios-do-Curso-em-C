#include <stdio.h>


int main (){

    int v01,v02,v03;

    printf("Digite 3 valores sepadaramente:\n");
    scanf("%d%d%d", &v01,&v02,&v03);
    printf("Estes são os valores digitados:%d %d %d\n",v01,v02,v03);
    int soma;
    soma = v01+v02+v03;

    printf("Está é a soma dos valores digitados:%d",soma);
}