/**
 * Arquivo: somaSeqHailst.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 27/11/2022
 */

#include <stdio.h>
#include <stdlib.h>

void somaseq (int num){
int x;
int soma;
soma = num;
if (num != 1){
while (x != 1){
if (num % 2 == 0){
    x = num/2;
}
else {
    x = 3 * num + 1;
}
soma = soma + x;
num = x;
}
}
printf("A soma da sequencia de Hailstone eh: %d \n",soma);
system("pause");
}
int main (void){
//Declaração de variáveis
int num;
//Entrada de valores
printf("Digite um numero interio positivo: \n");
scanf("%d",&num);
//Instruções para se chegar no resultado
//Saída de valores
somaseq (num);
    return 0;
}