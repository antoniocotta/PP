/**
 * Arquivo: contaPalavras.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 25/01/2023
 */


#include <stdio.h>
#include <ctype.h>

int conta_palavras(char *mensagem) {
    int i, palavras = 0, estado = 0;

    for (i = 0; mensagem[i] != '\0'; i++) {
        if (isalnum(mensagem[i]) || mensagem[i] == '-') {
            if (estado == 0) {
                palavras++;
                estado = 1;
            }
        } else {
            estado = 0;
        }
    }

    return palavras;
}

int main() {
    char mensagem[1024];

    printf("Digite uma mensagem: ");
    scanf("%[^\n]s", mensagem);

    int num_palavras = conta_palavras(mensagem);
    printf("A mensagem contém %d palavras.\n", num_palavras);

    return 0;
}