#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// Proposito das funções
void apresentacao(); // Assinatura da função
float LeiaValor();
float soma(float a);
void escreva(float soma);

int main() {
  apresentacao();
  float a = LeiaValor();
  float SOMA = soma(a);
  escreva(SOMA);

  return 0;
}

void apresentacao() { printf("\nPerimetro de um quadrado \n"); }

float LeiaValor() {
  float x;
  printf("\n Digite o valor: ");
  scanf("%f", &x);

  return x;
}

float soma(float a)
{
  float s = a * 4;
  return (s);
}

void escreva(float soma)
{ printf("\n O perimetro = %f", soma); }
