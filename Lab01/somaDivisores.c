/**
 * Arquivo: somaDivisores.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 04/11/2022
 */

#include <stdio.h>
int main (void){

//Declaração de variáveis
int n,i,soma;

//Entrada de valores
printf ("Digite um valor inteiro positivo: \n");
scanf("%d",&n);

 while (n < 1){
    printf("Valor invalido, digite um valor valido novamente: \n");
    scanf("%d",&n);
    }

//Instruções para se chegar no resultado
soma=0;

for(i=1; i <= n ;i= i + 1){

if (n % i == 0){

soma=soma+i;


}

}


//Saída de valores

printf("%d",soma);



    return 0;

}
