//Calculando o perímetro de um quadrado de lado igual a 7

#include <stdio.h>
#include <stdlib.h>

int main()

{   
    system("cls || clear");

    printf ("CALCULADORA DE PERIMETRO DE LADO\n");

    float lado;
    printf ("\n\nDIGITE O LADO DO QUADRADO\n");
    scanf ("%f", &lado);

    float perimetro = lado*4;

    printf ("\nUM RETANGULO DE LADO IGUAL A: %.1f\n", lado);
    printf ("\nTEM PERIMETRO IGUAL A: %.1f\n", perimetro);

    return 0;
}