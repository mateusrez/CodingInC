#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    system ("cls || clear");

    printf("Calculadora de perimetro de circulo\n");
    
    int raio = 1;
    float pi = 3.141592653;
    float perimetro = 2*pi*raio;

    printf("Perimetro igual a: %f\n", perimetro);
   
}