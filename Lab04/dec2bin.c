/**
 * Arquivo: dec2bin.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 24/01/2023
 */



#include <stdio.h>

int main() {
    unsigned long long decimal;
    printf("Entre com um numero decimal: ");
    scanf("%llu", &decimal);
    printf("Representacao binaria: ");
    for (int i = 63; i >= 0; i--) {
        printf("%llu", (decimal >> i) & 1);
    }
    return 0;
}