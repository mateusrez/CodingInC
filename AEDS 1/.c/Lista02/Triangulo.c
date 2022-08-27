// 1.  A partir da leitura dos três lados de um triângulo, escrever se é ele um triângulo equilátero, isóscele ou escaleno.

#include <stdio.h>
#include <stdlib.h>

int main()

{
    system ("cls || clear");

    printf ("TIPOS DE TRIANGULO");

    float a;
    printf ("\n\n\nDIGITE O VALOR DO LADO A:\n");
    scanf ("%f", &a);

    float b;
    printf ("\nDIGITE O VALOR DO LADO B:\n");
    scanf ("%f", &b);

    float c;
    printf ("\nDIGITE O VALOR DO LADO C:\n");
    scanf ("%f", &c);

    if (a==b && a==c && b==c)
    {
        printf ("\n\nTRIANGULO EQUILATERO\n\n\n");
        
    }
    else if (a!=b && a!=c && b!=c)
        {
            printf ("\n\nTRIANGULO ESCALENO\n\n\n");
        } 
        else printf ("\n\nTRIANGULO ISOCELES\n\n\n");
    

    return 0;
}