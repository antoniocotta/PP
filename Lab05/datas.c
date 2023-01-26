/**
 * Arquivo: datas.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 25/01/2023
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

const char strmes[13][4] = {
    "", "JAN", "FEV", "MAR", "ABR", "MAI", "JUN",
    "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"
};

int main() {
    struct Data data;
    printf("Informe a data no formato D/M/YYYY: ");
    scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano);

    //DD.MM.yyyy
    printf("%02d.%02d.%04d\n", data.dia, data.mes, data.ano);
    //MM-DD-YYYY
    printf("%02d-%02d-%04d\n", data.mes, data.dia, data.ano);
    //DD/MM/YY
    printf("%02d/%02d/%02d\n", data.dia, data.mes, data.ano % 100);
    //DDMMMYYYY
    printf("%02d%s%04d\n", data.dia, strmes[data.mes], data.ano);

    return 0;
}