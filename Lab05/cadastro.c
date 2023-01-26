/**
 * Arquivo: cadastro.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 25/01/2023
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data {
  int dia;
  int mes;
  int ano;
};

struct comprimento {
  int metros;
  int centimetros;
};

struct pessoa {
  char nome[50];
  struct data aniversario;
  struct comprimento altura;
  float peso;
};

const char *mes_abrev[] = {"JAN", "FEV", "MAR", "ABR", "MAI", "JUN", "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"};

int main() {
  int num_pessoas, i;
  printf("Informe o numero de pessoas a serem cadastradas: ");
  scanf("%d", &num_pessoas);

  struct pessoa pessoas[num_pessoas];

  for (i = 0; i < num_pessoas; i++) {
    printf("Insira o nome, aniversario (dd mm aaaa), altura (m cm) e peso (kg) da pessoa %d: ", i+1);
    scanf("%s %d %d %d %d %d %f", pessoas[i].nome, &pessoas[i].aniversario.dia, &pessoas[i].aniversario.mes, &pessoas[i].aniversario.ano, &pessoas[i].altura.metros, &pessoas[i].altura.centimetros, &pessoas[i].peso);
  }

  printf("Listagem de pessoas cadastradas:\n");
  for (i = 0; i < num_pessoas; i++) {
    printf("%s; %02d%s%04d; %dm%02dcm; %.1fkg\n", pessoas[i].nome, pessoas[i].aniversario.dia, mes_abrev[pessoas[i].aniversario.mes-1], pessoas[i].aniversario.ano, pessoas[i].altura.metros, pessoas[i].altura.centimetros, pessoas[i].peso);
  }

  return 0;
}