/**
 * Arquivo: mediaimpares.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 25/01/2023
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, s;
    double media = 0;
    int *a;

    printf("Entre com o numero de elementos do vetor: ");
    scanf("%d%*c", &N);
    printf("Entre com o numero inicial: ");
    scanf("%d%*c", &s);

    if (s % 2 == 0) {
        s--;
    }

    a = (int *) malloc(N * sizeof(int));

    for (i = 0; i < N; i++) {
        a[i] = s + (i * 2) + 1;
        media += a[i];
    }

    media /= N;

    printf("Penultimo elemento: %d\n", a[N - 2]);
    printf("Media: %lf\n", media);
    free(a);
    return 0;
}