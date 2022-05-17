/******************************************************************************

Desenvolva um programa em C que solicite dois números do tipo inteiro
distintos ao usuário e que apresente na tela o maior deles. Esse programa
deve possuir uma função para verificar qual é o maior número.

*******************************************************************************/
#include <stdio.h>
void maior_menor(int x, int y){
   if (x<y){
   printf("Esse é o maior numero:%d",y);
   }
   else{
   printf("Esse é o maior numero:%d",x);
   }
}
int main(int num1, int num2)
{
    printf("Insira dois numeros inteiros:");
    scanf("\n%d",&num1);
    scanf("\n%d",&num2);
    maior_menor(num1,num2);

    return 0;
}
