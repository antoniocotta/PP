/**
 * Arquivo: cosTaylor.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 04/11/2022
 */

#include <stdio.h>
#include <math.h>
#ifdef M_PI
  #undef M_PI
#endif
#define M_PI 3.141592653589793115997963468544185161590576171875
// Função fatorial
int fatorial(int h){
int fat;
for(fat = 1; h > 1; h = h - 1){
fat = fat * h;
}
return(fat);

}

int main (void){

//Declaração de variáveis
int n,i;
double x,taylor,soma;

//Entrada de valores

scanf("%d",&n);
scanf("%f",&x);
//Instruções para se chegar no resultado

soma = 0;
for(i=0;i>n;i++){

taylor = pow(-1,i)*((pow(x*M_PI,2*i))/ fatorial(2*i));

soma = soma + taylor;

}


//Saída de valores

printf("%5f",soma);



    return 0;

}