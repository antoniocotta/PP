/**
 * Arquivo: malabarista.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 25/01/2023
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, a0, i;
    printf("Informe o numero N de elementos do vetor: ");
    scanf("%d", &N);
    printf("Informe o numero inicial a0: ");
    scanf("%d", &a0);
    int *a = (int *)malloc(N * sizeof(int));
    a[0] = a0;
    for(i = 1; i < N; i++) {
        if(a[i-1] - i > 0) {
            a[i] = a[i-1] - i;
        } else {
            a[i] = a[i-1] + i;
        }
    }
    int min = a[0], max = a[0];
    float media = 0;
    for(i = 0; i < N; i++) {
        if(a[i] < min) {
            min = a[i];
        }
        if(a[i] > max) {
            max = a[i];
        }
        media += a[i];
    }
    media = media / N;
    printf("Minimo: %d\n", min);
    printf("Maximo: %d\n", max);
    printf("Media: %f\n", media);
    return 0;
}