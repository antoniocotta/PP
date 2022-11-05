/**
 * Arquivo: fibonacci.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 04/11/2022
 */

#include <stdio.h>
int main (void){

//Declaração de variáveis

int n,k,j,i,t;
//Entrada de valores

scanf("%d",&n);


//Instruções para se chegar no resultado

j = 1;
i = 0;
for (k=1; k<=n; k=k+1, t=i+j, i=j, j=t){


printf("%d, ", i);






}



//Saída de valores

printf(" ...");




    return 0;

}