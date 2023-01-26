/**
 * Arquivo: aproxpi.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 25/01/2023
 */

#include <stdio.h>

double calcular_pi(int n) {
    if (n == 0) {
        return 4.0;
    }
    return calcular_pi(n - 1) + 4.0 * pow(-1, n) / (2 * n + 1);
}

int main() {
    int n;
    printf("Informe o limite superior da serie: ");
    scanf("%d", &n);
    double pi = calcular_pi(n);
    printf("A aproximacao de pi para n = %d e: %f\n", n, pi);
    return 0;
}