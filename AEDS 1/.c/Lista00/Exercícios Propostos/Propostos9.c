/*  
9.  Faça um programa que calcule e mostre a área de um trapézio.
    Sabe-se que: A = ((base maior + base menor) * altura)/2 
*/ 

#include <stdio.h> 
#include <stdlib.h>

int main()

{
    system ("cls || clear");
    
    printf ("CALCULADORA DA AREA DE TRAPEZIO");

    float baseA;
    printf ("\n\n DIGITE O VALOR DA BASE MAIOR:\n");
    scanf ("%f", &baseA);


    float baseB;
    printf ("\n\n DIGITE O VALOR DA BASE MENOR:\n");
    scanf ("%f", &baseB);

    float altura;
    printf ("\n\n DIGITE O VALOR DA ALTURA:\n");
    scanf ("%f", &altura);


    float area=((baseA + baseB)*altura)/2;
    printf ("\n\nAREA = %.1f\n\n\n ", area);


    return 0;
}