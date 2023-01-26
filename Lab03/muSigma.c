/**
 * Arquivo: muSigma.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 24/01/2023
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//Função para calcular a média
float calcmedia(int n, float vetor[n-1]){
    float soma = 0;
    float media;
    for (int i = 0; i < n; i++){
        soma += vetor[i];
    }
    media = soma/n;
    return media;
}
//Função para calcular o desvio padrão
float calcdesvio(int n, float vetor[n-1], float media){
    float soma = 0;
    float desvio;
    for (int i = 0; i < n; i++) {    
        soma += pow(vetor[i]-media,2);
    }
    desvio = sqrt(soma/(n));
    return desvio;
}
//Função principal
int main (void){
    int n;
    float media, desvio;
    printf("Quantos elementos deseja trabalhar?:\n");
    scanf("%d", &n);
    float vetor[n-1];
    for (int i = 0; i < n; i++) {
        printf("Digite o %d numero:\n", i+1);
        scanf("%f", &vetor[i]);
    }
    media = calcmedia(n, vetor);
    desvio = calcdesvio(n, vetor, media);
    printf("Media %.2f, Desvio %.2f\n", media, desvio);
    system("pause");
    return 0;
}