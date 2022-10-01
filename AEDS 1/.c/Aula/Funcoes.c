#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// Proposito das funções
void apresentacao(); // Assinatura da função
float LeiaValor();
float soma(float a, float b);
void escreva(float soma);

int main() {
  apresentacao();
  float a = LeiaValor();
  float b = LeiaValor();
  float SOMA = soma(a,b);
  escreva(SOMA);

  return 0;
}

void apresentacao() { printf("\n Soma de 2 numeros \n"); }

float LeiaValor() {
  float x;
  printf("\n Digite o valor: ");
  scanf("%f", &x);

  return x;
}

float soma(float a, float b)
{
  float s = a + b;
  return (s);
}

void escreva(float soma)
{ printf("\n A soma = %f", soma); }


/*
  float y = 7.2;

  float a = 7.2;
  float a = y;
  float a = func();
*/

