#include <stdio.h>
//Escreva um programa em C para o Ministério da Saúde que o auxilie nas
//informações sobre a dengue em Brasília. Esse programa deve receber os
//dados sobre o número de casos suspeitos, o número de casos
//confirmados e o número de mortes. Por fim, o programa deve informar a
//quantidade dos dados cadastrados no sistema.
int main()
{
int cs,c,nm,i;    
printf("\nInsira o Número de Casos suspeitos: ");
scanf("%d",&cs);
printf("\nInsira o Número de casos: ");
 scanf("%d",&c);
 printf("\nInsira o Número de mortes: ");
 scanf("%d",&nm);
 i = cs + c +nm;
 printf("A quantidade de dados cadastrados foram de: %d",i);
 return(0);
}

