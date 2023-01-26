/**
 * Arquivo: somavetores.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 25/01/2023
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool soma(int *v1, int N1, int *v2, int N2, int *resultado) {
    if (N1 != N2) {
        return false;
    }

    v1 = (int *)malloc(N1 * sizeof(int));
    v2 = (int *)malloc(N2 * sizeof(int));
    resultado = (int *)malloc(N1 * sizeof(int));

    for (int i = 0; i < N1; i++) {
        v1[i] = (i * 2) + 1;
    }
    for (int i = 0; i < N2; i++) {
        v2[i] = i * 4;
    }
    for (int i = 0; i < N1; i++) {
        resultado[i] = v1[i] + v2[i];
    }
    return true;
}

int main() {
    int N1, N2, *v1, *v2, *resultado;

    printf("Informe o tamanho dos vetores: ");
    scanf("%d %d", &N1, &N2);

    if (soma(v1, N1, v2, N2, resultado)) {
        printf("Minimo: %d\n", resultado[0]);
        printf("Maximo: %d\n", resultado[N1 - 1]);
        int media = 0;
        for (int i = 0; i < N1; i++) {
            media += resultado[i];
        }
        printf("Media: %d", media / N1);
    } else {
        printf("Os tamanhos dos vetores devem ser iguais");
    }
    free(v1);
    free(v2);
    free(resultado);
    return 0;
}