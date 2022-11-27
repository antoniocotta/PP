/**
 * Arquivo: imc.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 04/11/2022
 */

#include <stdio.h>
int main (void){

//Declaração de variáveis
float peso,altura,imc;

//Entrada de valores

scanf("%f",&peso);
scanf("%f",&altura);
//Instruções para se chegar no resultado

imc=peso/(altura*altura);


//Saída de valores

if (imc < 16){

printf("%f (Perigo de vida)\n",imc);
 
}

if (imc >= 16 && imc < 17){

printf("%f (Muito abaixo do peso)\n",imc);
 
}

if (imc >= 17 && imc < 18.5){

printf("%f (Abaixo do peso)\n",imc);
 
}

if (imc >= 18.5 && imc < 25){

printf("%f (Peso normal)\n",imc);
 
}

if (imc >= 25 && imc < 30){

printf("%f (Acima do peso)\n",imc);
 
}

if (imc >= 30 && imc < 35){

printf("%f (Obesidade grau I)\n",imc);
 
}

if (imc >= 35 && imc < 40){

printf("%f (Obesidade grau II)\n",imc);
 
}

if (imc >= 40){

printf("%f (Obesidade grau III)\n",imc);
 
}





    return 0;

}
