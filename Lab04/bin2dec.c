/**
 * Arquivo: bin2dec.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 24/01/2023
 */



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char binario[66];
    int i, decimal = 0;
    printf("Entre com um numero binario (ate 64 bits): ");
    for (i = 0; i < 64; i++) {
        char c = getchar();
        if (c == '0' || c == '1') {
            binario[i] = c;
        } else {
            break;
        }
    }
    binario[i] = '\0';
    for (i = 0; i < strlen(binario); i++) {
        decimal += (binario[i] - '0') * (1 << (strlen(binario) - i - 1));
    }
    printf("Representacao decimal: %u\n", decimal);
    return 0;
}
