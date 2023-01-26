/**
 * Arquivo: fib.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 25/01/2023
 */

#include <stdio.h>

int fibonacci(int indice) {
    if (indice == 0) {
        return 0;
    }
    if (indice == 1) {
        return 1;
    }
    return fibonacci(indice - 1) + fibonacci(indice - 2);
}

int main() {
    int indice;

    printf("Digite o índice da sequência de Fibonacci: ");
    scanf("%d", &indice);

    int resultado = fibonacci(indice);
    printf("O número de Fibonacci na posição %d é %d.\n", indice, resultado);

    return 0;
}