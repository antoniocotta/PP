/**
 * Arquivo: divisores.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 27/11/2022
 */

#include <stdio.h>
#include <stdlib.h>
void Verifica_div (int num){

int i;
printf("Os divisores de %d sao: ",num);
for (i=1; i <= num; i++){


if ((num % i) == 0){

printf("%d",i);


if (i < num) {
printf(", ");
}


}
} 

  printf("\n");
  system("pause");  
}
int main (void){
//Declaração de variáveis
int num;
//Entrada de valores

printf("Digite o valor do inteiro positivo \n");
scanf ("%d", &num);

//Instruções para se chegar no resultado


//Saída de valores

Verifica_div (num);

    return 0;

}