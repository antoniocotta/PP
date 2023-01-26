/**
 * Arquivo: diferencas.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 24/01/2023
 */

#include <stdio.h>
#include <stdlib.h>
// função para calcular diferenças entre elementos adjacentes
void diferencas_(float vetor[], int tamanho, float diferencas[]) {
    for (int i = 0; i < tamanho - 1; i++) {
        diferencas[i] = vetor[i + 1] - vetor[i];
    }
}

// função para encontrar o mínimo e o máximo de um vetor
void minMax(float vetor[], int tamanho, float *min, float *max) {
    *min = vetor[0];
    *max = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < *min) {
            *min = vetor[i];
        }
        if (vetor[i] > *max) {
            *max = vetor[i];
        }
    }
}

int main() {
    int tamanho;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float vetor[tamanho];
    printf("Alimente o vetor com números de ponto flutuante:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%f", &vetor[i]);
    }

    float diferencas[tamanho - 1];
    diferencas_(vetor, tamanho, diferencas);

    float min, max;
    minMax(diferencas, tamanho - 1, &min, &max);

    printf("Diferenças entre elementos adjacentes: ");
    for (int i = 0; i < tamanho - 1; i++) {
        printf("%.1f ", diferencas[i]);
    }
    printf("\n");
    printf("Mínimo: %.1f\n", min);
    printf("Máximo: %.1f\n", max);
    system("pause");
    return 0;
}