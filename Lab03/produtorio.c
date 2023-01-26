/**
 * Arquivo: produtorio.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 24/01/2023
 */
#include <stdio.h>
#include <stdlib.h>
int main (void){
//Declaração de variáveis
int n;
printf("Quantos elementos deseja trabalhar?:\n");
scanf("%d", &n);
float vetor[n-1];
for (int i = 0; i < n; i++) {
    printf("Digite o %d numero:\n", i+1);
    scanf("%f", &vetor[i]);
}
float mult = 1.0;
for (int i=0; i<n; i++){
    if(i==0){
        printf("%.2f *", vetor[i]);
    }
    if(i==n-1){
        printf(" %.2f = ", vetor[i]);
    }
    if(i!=0 && i!=n-1){
        printf(" %.2f *", vetor[i]);
    }  
    mult *= vetor[i];
}
printf("%.2f", mult);
system("pause");
    return 0;
}