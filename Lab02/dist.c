/**
 * Arquivo: dist.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 27/11/2022
 */

#include <stdio.h>
#include <math.h>

float dist(int xa,int ya,int xb,int yb){

float de;

de = sqrt(pow(xa-xb,2) + pow(ya-yb,2));

return (de);


}


int main (void){

//Declaração de variáveis

int xa,ya,xb,yb;
float resultado;
//Entrada de valores
printf("Digite as coordenadas x e y dos pontos A e B\n");
scanf("%d",&xa);
scanf("%d",&ya);
scanf("%d",&xb);
scanf("%d",&yb);

//Instruções para se chegar no resultado

resultado = dist(xa,ya,xb,yb);

//Saída de valores

printf("A distancia euclidiana entre os pontos:\n");
printf("%f",resultado);



    return 0;

}

