#include <stdio.h>
int main () {
  int n01,n02;

  printf("Digite dois numero inteiros:\n");
  scanf("%d%d",&n01,&n02);
  if (n01 > n02) {
  printf("O %d é maior que o %d\n",n01,n02);
  }
  else{ 
    printf("O %d é menor que o %d",n01,n02);
  }
    return 0;
}