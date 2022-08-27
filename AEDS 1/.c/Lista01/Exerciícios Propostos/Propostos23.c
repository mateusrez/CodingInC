/*
    Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do terceiro ângulo. 
    Sabe-se que a soma dos ângulos de um triângulo é 180 graus.
*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
    system ("cls || clear");

    printf("CALCULADORA DE ANGULO INTERNO DO TRIANGULO");

    float c;
    float soma = 180;

    float a;
    printf ("\nDIGITE O ANGULO A (Graus):\n");
    scanf ("%f", &a);

    float b;
    printf ("\nDIGITE O ANGULO B (Graus):\n");
    scanf ("%f", &b);

    float resultado = soma - (a+b);
    printf("\n\nANGULO C: %.0f\n\n\n", resultado);


    return 0;
}