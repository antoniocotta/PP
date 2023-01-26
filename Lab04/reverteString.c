/**
 * Arquivo: reverteString.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 24/01/2023
 */


#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Função para inverter uma string
void reverseString(char *str) {
    int i, j;
    char temp;
    for (i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

// Função para converter uma string para maiúsculas
void toUpper(char *str) {
    int i;
    for (i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char message[100];
    printf("Digite uma mensagem: ");
    scanf("%[^\n]s", message);
    reverseString(message);
    toUpper(message);
    printf("Mensagem invertida: %s", message);
    return 0;
}