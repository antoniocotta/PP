/**
 * Arquivo: somaPrimos.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 27/11/2022
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool verificaprimo(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}


void somaprimos(int a, int b) {
    int i,soma;
    soma=0;
    for (int i = a; i <= b; i++) {
        if (verificaprimo(i)) {
            soma = soma + i;
        }
    }
    printf("A soma de numeros primos no intervalo eh de : %d \n",soma);
    system ("pause");
}




int main (void){

//Declaração de variáveis

int a,b;
//Entrada de valores

printf ("Digite o intervalo para calcular a soma dos primos entre eles: \n");
scanf("%d%d",&a,&b);

//Instruções para se chegar no resultado


//Saída de valores


somaprimos(a,b);


    return 0;

}