/*
    13. Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.
    Exemplo:
    Digite um número: 5
    5 × 0 = 0
    5 × 1 = 5
    5 × 2 = 10
    5 × 3 = 15
    5 × 4 = 20
    5 × 5 = 25
    5 × 6 = 30
    5 × 7 = 35
    5 × 8 = 40
    5 × 9 = 45
    5 × 10 = 50
*/ 

#include <stdio.h>
#include <stdlib.h>

int main()

{
    system ("cls || clear");

    printf ("CALCULADORA DE TABUADA");

    int numero;
    printf ("\n\n\nDIGITE UM NUMERO: ");
    scanf ("%i", &numero);

    int multiplicador=0;
    int resultado;

    while (multiplicador <= 10)
    {
        resultado=numero*multiplicador;
        printf("\n%i x %i = %i",numero, multiplicador, resultado);
        multiplicador=multiplicador+1;
    }
    
    printf ("\n\n\n");
    
    
    return 0;
}