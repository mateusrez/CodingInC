/*  
1. Utilizando Estrutura de Repetição com Teste no Início, construa um programa que escreva 
   na tela os números inteiros de 10 até 1. 

2. Utilizando Estrutura de Repetição com Teste no Início, construa um programa que leia dez 
   números reais e escreva, ao final, a soma e a média dos valores lidos. 

3. Utilizando Estrutura de Repetição com Teste no Início, construa um programa que leia dez 
   números reais e escreva, ao final, o maior e o menor valor lido. 

4. Construa um programa que leia um conjunto de números inteiros até que o valor zero seja 
   lido. Ao final, escrever o maior e o menor valor lido.
*/


#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()

{
  /* Estrutura de repeticao com teste no final
    do{


    }while (booleano);
  */

  /* Estrutura de repeticao com teste no inico
    while (booleano)
    {

    }
  */

  int c = 1;
  float x;
  float soma = 0;
  int n;  
  
  do{
    printf ("\nDigite a quantidade de valores:\n");
    scanf ("%i", &n);
    if (n<1) printf ("Digite valores validos\n");
    printf ("\n");
  } while (n < 1);
  
  while (c <= n) 
  {
    printf ("Digite o %i* valor: ", c);
    scanf ("%f", &x);
    c += 1;
    soma += x;
  }
  
  float media = soma/n;
  
  printf ("\nO valor da soma e: %.1f", soma);
  printf ("\nA media dos valores e: %.1f", media);
 // printf ("\nO menor valor e: \n", menor);
  
  return 0;
}