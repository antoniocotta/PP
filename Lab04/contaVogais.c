/**
 * Arquivo: contaVogais.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 24/01/2023
 */

#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, vogais = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (i = 0; i < strlen(palavra); i++) {
        if (palavra[i] == 'a' || palavra[i] == 'A' || 
            palavra[i] == 'e' || palavra[i] == 'E' || 
            palavra[i] == 'i' || palavra[i] == 'I' || 
            palavra[i] == 'o' || palavra[i] == 'O' || 
            palavra[i] == 'u' || palavra[i] == 'U') {
            vogais++;
        }
    }

    printf("A palavra possui %d vogais.\n", vogais);

    return 0;
}