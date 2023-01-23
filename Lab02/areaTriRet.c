/**
 * Arquivo: areaTriRet.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 27/11/2022
 */

#include <stdio.h>
#include <math.h>


void area_triangulo (int xC,int xB,int yC,int yB,int xA,int yA){

double CA, BC, area;
BC = sqrt (pow(xC - xB,2) + pow(yC - yB,2));
CA = sqrt (pow(xA - xC,2) + pow(yA - yC,2));
area = (BC * CA)/2;

printf("A area do triangulo retangulo eh %.2lf", area);


}

int main (void){

//Declaração de variáveis
int xA,yA,xB,yB,xC,yC;
//Entrada de valores

printf("Digite as coordenadas de A e B para calcular a area do triangulo retangulo \n");
scanf ("%d%d%d%d",&xA,&yA,&xB,&yB);


//Instruções para se chegar no resultado
xC = xB;
yC = yA;


//Saída de valores


area_triangulo (xC,xB,yC,yB,xA,yA);


    return 0;

}