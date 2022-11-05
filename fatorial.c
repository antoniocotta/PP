/**
 * Arquivo: fatorial.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 04/11/2022
 */

#include <stdio.h>
int main (void){

//Declaração de variáveis
int fat, a, i;



//Entrada de valores

scanf("%d", &a);

//Instruções para se chegar no resultado
i = a;
for(fat = 1; i > 1; i = i - 1){
fat = fat * i;
}

//Saída de valores

printf("%d! = %d", a, fat);

    return 0;

}