/**
 * Arquivo: altura.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 25/01/2023
 */

#include <stdio.h>

struct medida {
    int metros;
    int centimetros;
};

int cm(int x) {
    if(x < 10) return x*10;
    if(x > 99) return cm(x/10);
    return x;
}

int main() {
    struct medida altura;
    double altura_usuario;
    printf("Informe sua altura em metros: ");
    scanf("%lf", &altura_usuario);
    altura.metros = (int) altura_usuario;
    altura.centimetros = (int)((altura_usuario - altura.metros) * 100);
    altura.centimetros = cm(altura.centimetros);
    printf("Altura %dm%d\n", altura.metros, altura.centimetros);
    return 0;
}
