/**
 * Arquivo: maxHappyPrime.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 27/11/2022
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool verificaprimo(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

bool verificafeliz(int num){
    int *repete = (int *)calloc(1000, sizeof(int));
    int contador = 0;
    while (1){
        int m = num;
        int soma = 0;
        while (m){
            int d = m % 10;
            soma += d * d;
            m /= 10;
        }
        if (soma == 1){
            free (repete);
            return true;

        }
        for (int i = 0; i < contador; i++){
            if (repete[i] == soma){
                free (repete);
                return false;
            }
        }
        repete[contador++] = soma;
        num = soma;
    }
}
int primofelizmaior(int num){
    for (int i = num; i > 1; i--){
        if (verificaprimo(i) && verificafeliz(i)){
            return i;
        }
    }
    return -1;
}

int main (void){

//Declaração de variáveis

int num;
//Entrada de valores

printf("Digite um inteiro positivo para imprimir o maior numero primo feliz (um numero feliz e primo) menor ou igual ao numero informado. \n");
scanf ("%d",&num);
//Instruções para se chegar no resultado


//Saída de valores

int resultado = primofelizmaior(num);

if (resultado == -1){

printf ("Nao ha primo feliz menor ou igual ao numero fornecido.\n");


} else {
    printf("O maior primo feliz menor ou igual a %d eh %d\n",num, resultado);

}
system("pause");

    return 0;

}

