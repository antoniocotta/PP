/**
 * Arquivo: aleatorios.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 25/01/2023
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int N;
  printf("Informe o número de elementos para o vetor a: ");
  scanf("%d", &N);

  srand(N); // inicializa o gerador de números aleatórios com N

  int *a = (int*) malloc(N * sizeof(int)); // aloca dinamicamente memória para o vetor

  int i;
  for (i = 0; i < N; i++) {
    a[i] = rand() % N; // preenche o vetor com números aleatórios entre 0 e N-1
  }

  int min = a[0], max = a[0];
  double soma = 0;
  for (i = 0; i < N; i++) {
    soma += a[i]; // calcula a soma dos elementos do vetor
    if (a[i] < min) min = a[i]; // verifica o elemento mínimo
    if (a[i] > max) max = a[i]; // verifica o elemento máximo
  }
  double media = soma / N; // calcula a média dos elementos do vetor

  printf("Elemento mínimo: %d\n", min);
  printf("Elemento máximo: %d\n", max);
  printf("Média: %lg\n", media);

  free(a); // libera a memória alocada dinamicamente

  return 0;
}