/**
 * Arquivo: contaCaracteres.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 24/01/2023
 */


#include <stdio.h>

int main() {
    char frase[100];
    int letras = 0, digitos = 0, outros = 0, i;

    printf("Digite uma frase: ");
    scanf("%[^\n]s", frase);

    for (i = 0; frase[i] != '\0'; i++) {
        if ((frase[i] >= 'a' && frase[i] <= 'z') || (frase[i] >= 'A' && frase[i] <= 'Z')) {
            letras++;
        } else if (frase[i] >= '0' && frase[i] <= '9') {
            digitos++;
        } else {
            outros++;
        }
    }

    printf("letras: %d\ndigitos: %d\noutros: %d\n", letras, digitos, outros);

    return 0;
}