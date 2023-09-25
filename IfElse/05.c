#include <stdio.h>
int main () 
{
    int dif,num01,num02;
    printf("Digite 2 numeros inteiros:\n");
    scanf("%d%d",&num01,&num02);

  dif = num01 - num02;

    if ( num01 > num02){
      dif = num01 - num02;  
      printf("O numero %d é maior, diferenças entres os 2 :%d\n",num01,dif);
    }
     else {  
      dif = num01 - num02;
      dif = dif * -1;
      printf("O numero %d é maior, diferenças entres os 2 :%d\n",num02,dif);
    }

        return 0 ;
}