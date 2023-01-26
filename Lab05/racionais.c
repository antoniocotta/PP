/**
 * Arquivo: racionais.c
 * Autor: Antonio Matheus Rodrigues Cotta
 * Matricula: 11921ECP014
 * Criado em: 25/01/2023
 */

#include <stdio.h>

int mdc(int a, int b) {
  if (b == 0)
    return a;
  else
    return mdc(b, a % b);
}

typedef struct {
  int numerador;
  int denominador;
} racional;

racional simplificar(racional r) {
  int d = mdc(r.numerador, r.denominador);
  r.numerador /= d;
  r.denominador /= d;
  if (r.denominador < 0) {
    r.numerador = -r.numerador;
    r.denominador = -r.denominador;
  }
  if (r.numerador == 0) {
    r.denominador = 1;
  }
  return r;
}

racional adicao(racional r1, racional r2) {
  racional r;
  r.numerador = r1.numerador * r2.denominador + r2.numerador * r1.denominador;
  r.denominador = r1.denominador * r2.denominador;
  return simplificar(r);
}

racional subtracao(racional r1, racional r2) {
  racional r;
  r.numerador = r1.numerador * r2.denominador - r2.numerador * r1.denominador;
  r.denominador = r1.denominador * r2.denominador;
  return simplificar(r);
}

racional multiplicacao(racional r1, racional r2) {
  racional r;
  r.numerador = r1.numerador * r2.numerador;
  r.denominador = r1.denominador * r2.denominador;
  return simplificar(r);
}

racional divisao(racional r1, racional r2) {
  racional r;
  r.numerador = r1.numerador * r2.denominador;
  r.denominador = r1.denominador * r2.numerador;
  return simplificar(r);
}

int main() {
  racional r1, r2, r_soma, r_sub, r_mult, r_div;

  printf("Insira o numerador e denominador do primeiro numero racional: ");
  scanf("%d %d", &r1.numerador, &r1.denominador);
  r1 = simplificar(r1);

  printf("Insira o numerador e denominador do segundo numero racional: ");
  scanf("%d %d", &r2.numerador, &r2.denominador);
  r2 = simplificar(r2);

  r_soma = adicao(r1, r2);
  r_sub = subtracao(r1, r2);
  r_mult = multiplicacao(r1, r2);
  r_div = divisao(r1, r2);

  printf("Resultado da adicao: %d/%d\n", r_soma.numerador, r_soma.denominador);
  printf("Resultado da subtracao: %d/%d\n", r_sub.numerador, r_sub.denominador);
  printf("Resultado da multiplicacao: %d/%d\n", r_mult.numerador, r_mult.denominador);
  printf("Resultado da divisao: %d/%d\n", r_div.numerador, r_div.denominador);

  return 0;
}