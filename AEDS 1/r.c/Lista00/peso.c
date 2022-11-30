#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    system ("cls || clear");
    printf("Calculadora de peso ideal\n");

    char sexo;
    float altura;
    float pesoM = (72.7*altura) - 58;
    float pesoF = (62.1*altura) - 44.7;

    printf("\nDigite seu sexo [M/F]: ");
    scanf(" %c", &sexo);
    sexo = toupper(sexo);

    printf("\nDgite sua altura em [m]: ");
    scanf("%f", &altura);

    pesoM = (72.7*altura) - 58;
    pesoF = (62.1*altura) - 44.7;

    if(sexo == 'M') printf("\nO seu peso ideal sera: %f\n", pesoM);
    else printf("\nO seu peso ideal sera: %f\n", pesoF);
}