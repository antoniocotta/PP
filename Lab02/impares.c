/**
 * Arquivo: impares.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 27/11/2022
 */

#include <stdio.h>


void imprime_impares(int a,int b){

int i;
printf("Os numeros impares entre %d e %d sao: ", a, b);

for(i=a; i<=b; i++){

if(i % 2 != 0){

printf("%d",i);

if (i < b - 1) {
printf(", ");
}
}
}


    printf("\n");
}
int main (void){

//Declaração de variáveis

int a,b; 

//Entrada de valores

printf("Digite os numero A e B para ser impresso todos os numeros impares no intervalo, A deve ser menor que B:\n ");
scanf ("%d%d",&a,&b);

//Instruções para se chegar no resultado

if (a >= b){

printf("A deve ser menor que B");
return 1;


}


//Saída de valores

imprime_impares(a,b);



    return 0;

}