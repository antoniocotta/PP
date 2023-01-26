/**
 * Arquivo: palindrono.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 24/01/2023
 */



#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remover_caracteres(char *string) {
    int i, j = 0;
    for (i = 0; i < strlen(string); i++) {
        if (isalpha(string[i])) {
            string[j++] = toupper(string[i]);
        }
    }
    string[j] = '\0';
}

int main() {
    char mensagem[256];
    char mensagem_limpa[256];
    int i;
    printf("Entre com uma mensagem: ");
    fgets(mensagem, 256, stdin);
    remover_caracteres(mensagem);
    strcpy(mensagem_limpa, mensagem);
    strrev(mensagem);
    if (strcmp(mensagem, mensagem_limpa) == 0) {
        printf("Palindromo: Verdadeiro\n");
    } else {
        printf("Palindromo: Falso\n");
    }
    return 0;
}