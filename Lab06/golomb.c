/**
 * Arquivo: golomb.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 25/01/2023
 */

#include <stdio.h>
#include <stdlib.h>

double media_golomb(int a, int b) {
    int i, j;
    double soma = 0;
    int* sequencia = (int*) malloc((b + 1) * sizeof(int));
    for (i = 1; i <= b; i++) {
        for (j = 1; j <= i; j++) {
            if (j + sequencia[j - 1] <= i) {
                sequencia[j] = sequencia[j - 1] + j;
            } else {
                break;
            }
        }
    }
    for (i = a; i <= b; i++) {
        soma += sequencia[i];
    }
    free(sequencia);
    return soma / (b - a + 1);
}

int main() {
    int a, b;
    printf("Informe o primeiro indice: ");
    scanf("%d", &a);
    printf("Informe o ultimo indice: ");
    scanf("%d", &b);
    if (b < a) {
        printf("Entrada inválida. O último índice deve ser maior ou igual ao primeiro índice.");
        return 1;
    }
    printf("Primeiro elemento: %d\n", elemento_golomb(a));
    printf("Último elemento: %d\n", elemento_golomb(b));
    printf("Média: %lg\n", media_golomb(a, b));
    return 0;
}