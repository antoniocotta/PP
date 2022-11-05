/**
 * Arquivo: somaGauss
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 04/11/2022
 */

#include <stdio.h>
int main (void){

//Declaração de variáveis
int a, soma, i;
float somagauss; 


//Entrada de valor fornecida pelo usuario
printf ("Digite um valor inteiro para a soma de Gauss que seja maior que 1: \n");
scanf("%d",&a);

// Calculos e laços para cálculo de resultado

soma = 0;
i = 1;
 

    while (a <= 1){
    printf("Valor invalido, digite um valor valido novamente: \n");
    scanf("%d",&a);
    }

somagauss = (a/2.0) * (1+a);
while (i <= a){
soma = soma + i;
i=i+1;
}
//Saida do resultado
printf("O resultado da soma de Gauss por laco e: %d\n", soma);
printf("O resultado da soma de Gauss por formula e: %.0f\n", somagauss);

if (soma = somagauss){
    printf ("Tudo certo! Os dois valores sao iguais.\n");

}
else {
    printf ("Algo errado! Os valores estao diferentes");

}

return 0;

}