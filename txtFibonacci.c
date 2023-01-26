/**
 * Arquivo: txtFibonacci.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 25/01/2023
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned long long int N, i;
    printf("Digite o número de elementos para a sequência de Fibonacci: ");
    scanf("%llu", &N);
    unsigned long long int* a = (unsigned long long int*) malloc(N * sizeof(unsigned long long int));
    a[0] = 0;
    a[1] = 1;
    for (i = 2; i < N; i++) {
        a[i] = a[i-1] + a[i-2];
    }
    printf("O maior número na sequência é %llu\n", a[N-1]);
    FILE* f = fopen("fibonacci.txt", "w");
    for (i = 0; i < N; i++) {
        fprintf(f, "%llu\n", a[i]);
    }
    fclose(f);
    free(a);
    return 0;
}