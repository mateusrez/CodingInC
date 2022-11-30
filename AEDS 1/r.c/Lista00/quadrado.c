#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    system ("cls || clear");

    printf("Calculadora de perimetro de quadrado\n");
    int lado = 7;
    int perimetro = lado+lado+lado+lado;

    printf("Perimetro igual a: %i\n", perimetro);
    
}