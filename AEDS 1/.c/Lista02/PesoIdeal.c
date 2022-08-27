/*
2.  Refaça os programas do cálculo do peso ideal de uma pessoa, unificando ambos, peso ideal de pessoas do gênero masculino e do gênero feminino. O usuário deverá informar o gênero através de um único caractere, ‘M’ ou ‘F’, representando masculino ou feminino, respectivamente.
        Peso ideal de uma pessoa do gênero masculino: (72,7 x altura) – 58
        Peso ideal de uma pessoa do gênero feminino: (62,1 x altura) – 44,7
*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
    system ("cls || clear");

    printf ("CALCULADORA DE PESO IDEAL");

    char sexo;
    printf ("\nDIGITE O SEU SEXO (M ou F):\n");
    scanf (" %c", &sexo);

    float altura;
    printf ("\nDIGITE A SUA ALTURA (m):\n");
    scanf ("%f", &altura);

    float pesoidealM= (72.5*altura)-58;
    float pesoidealF = (62.1*altura)-44.7;


    if (sexo=='M')
    {
    printf ("\nO SEU PESO IDEAL E IGUAL A: %.3f kg\n\n\n", pesoidealM);
    }
    else if (sexo=='F')
    {
    printf ("\nO SEU PESO IDEAL E IGUAL A: %.3f kg\n\n\n", pesoidealF);
    }


    return 0;
}