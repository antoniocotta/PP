/**
 * Arquivo: quaisDiv.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 24/01/2023
 */
#include <stdio.h>
#include <stdlib.h>
int main (void){
//Declaração de variáveis
int n, R,i,posdiv;
//Entrada de valores
printf("Quantos elementos deseja trabalhar?:\n");
scanf("%d", &n);
int num[n-1];
printf("Digite o inteiro referencia R:\n");
scanf("%d", &R);
for (i=0;i<n;i++){
    printf("Digite o %d numero:\n", i+1);
    scanf("%d", &num[i]);
}
for (i=0;i<n;i++){
    if (R % num[i] == 0){
        printf("%d# ", num[i]);
    }
    else{
        printf("%d ", num[i]);
        }
}
system ("pause");
    return 0;
}