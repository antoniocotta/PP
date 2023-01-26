/**
 * Arquivo: raizes2grau.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 25/01/2023
 */

#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c, float *x1, float *x2) {
    float delta = b*b - 4*a*c;
    if (delta < 0) {
        return 0;
    } else if (delta == 0) {
        *x1 = -b / (2*a);
        return 1;
    } else {
        float sqrt_delta = sqrt(delta);
        *x1 = (-b + sqrt_delta) / (2*a);
        *x2 = (-b - sqrt_delta) / (2*a);
        return 2;
    }
}

int main() {
    float a, b, c, x1, x2;
    printf("Informe os valores de a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);
    int num_raizes = raizes(a, b, c, &x1, &x2);
    if (num_raizes == 0) {
        printf("Não existem raízes reais.\n");
    } else if (num_raizes == 1) {
        printf("Existe uma raiz real: %f.\n", x1);
    } else {
        printf("Existem duas raízes reais: %f e %f.\n", x1, x2);
    }
    return 0;
}