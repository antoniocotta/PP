/**
 * Arquivo: remNegativos.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 24/01/2023
 */
#include <stdio.h>
#include <stdlib.h>
// função para contar números negativos em um vetor
int contarNegativos(int vetor[], int tamanho) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] < 0) {
            contador++;
        }
    }
    return contador;
}

// função para remover números negativos de um vetor
void removerNegativos(int vetor[], int tamanho) {
    int tamanhoResposta = tamanho - contarNegativos(vetor, tamanho);
    int vetorResposta[tamanhoResposta];
    int j = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] >= 0) {
            vetorResposta[j] = vetor[i];
            j++;
        }
    }

    // imprimir vetor com apenas números positivos e zeros
    if (tamanhoResposta > 0) {
        for (int i = 0; i < tamanhoResposta; i++) {
            if (i != tamanhoResposta-1){
                printf("%d, ", vetorResposta[i]);
            }
            else{
                printf("%d\n",vetorResposta[i]);
            }
        }
    } else {
        printf("vazio.\n");
    }
}

int main() {
    int tamanho;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    printf("Alimente o vetor com numeros inteiros (positivos e negativos):\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    removerNegativos(vetor, tamanho);
    system("pause");
    return 0;
}