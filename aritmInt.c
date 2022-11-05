/**
 * Arquivo: aritmInt.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 04/11/2022
 */

#include <stdio.h>
int main (void) {
// Declaração de variáveis    
    int a;
    int b;
    int soma;
    int sub;
    int multi;
    int div;
    int mod;

// Entrada de valores para o usuário
scanf("%d", &a);
scanf("%d", &b);

// Calculos aritméticos necessários para a saída dos resultados
soma = a + b;
sub = a - b;
multi = a * b;
div = a / b;
mod = a % b;

// Saída dos valores para o usuário
printf ("\n %d + %d = %d,%d - %d = %d, %d * %d = %d, %d / %d = %d, %d %% %d = %d", a, b, soma, a, b, sub,a, b, multi,a, b, div,a, b, mod);



return 0;

}