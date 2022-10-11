/*
    3. Escrever os n primeiros termos de uma Progressão Geométrica (PG). Deverão ser lidos os 
    seguintes valores: 

        - o número de termos da PG 
        - o valor do primeiro termo da PG 
        - a razão da PG

*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    system("cls || clear");

    int n; // Numero de termos
    int t; // Primeiro termo
    int c; // Contador
    float r; // Razão
    float PG;

    printf("CALCULAR PROGRESSAO GEOMETRICA");

    printf("\nDigite o n de termos da PG: ");
    scanf("%i", &n);

    printf("\nDigite o primeiro termo da PG: ");
    scanf("%i", &t);

    printf("\nDigite a razao da PG: ");
    scanf("%f", &r);

    for (c = 1; c < n; c++)
    {
        PG = t*r;
        t = PG;
    }

    printf("\nValor da PG: %.1f", PG);
    



    return 0;
}