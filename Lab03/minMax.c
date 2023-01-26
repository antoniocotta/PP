/**
 * Arquivo: minMax.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 23/01/2022
 */
#include <stdio.h>
#include <stdlib.h>
int main (void){
//Declaração de variáveis
int n, min, max, i, minPos, maxPos;
//Entrada de valores
printf("Quantos elementos deseja trabalhar?:\n");
scanf("%d", &n);
int num[n-1];
//Instruções para se chegar no resultado
for (i=0;i<n;i++){
    printf("Digite o %d numero:\n", i+1);
    scanf("%d", &num[i]);
    if (i==0){
        min=num[i];
        max=num[i];
    }
    if (num[i]<min){
        min=num[i];
        minPos=i;
    }
    if (num[i]>max){
        max=num[i];
        maxPos=i;
    }
}
for (i = 0; i < n; i++) {
        if (i == minPos) {
            printf("%d< ", num[i]);
        }
        if (i == maxPos) {
            printf("%d> ", num[i]);
        }
        if(i != minPos && i != maxPos ){printf("%d ", num[i]);
        }
    }
system("pause");
//Saída de valores
}
