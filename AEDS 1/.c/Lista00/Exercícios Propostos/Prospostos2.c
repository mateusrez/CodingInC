// 2.  Faça um programa que receba três números, calcule e mostre a multiplicação desses números.

#include <stdio.h>
#include <stdlib.h>

int main()

{
    system ("cls || clear");

    printf("MULTIPLICADORA DE TRES NUMEROS\n\n");

    float algarismo1;
    printf ("\n DIGITE O VALOR DO PRIMEIRO NUMEORO: \n");
    scanf ("%f", &algarismo1);

    float algarismo2;
    printf ("\n DIGITE O VALOR DO SEGUNDO NUMERO: \n");
    scanf ("%f", &algarismo2);

    float algarismo3;
    printf ("\n DIGITE O VALOR DO TERCEIRO NUMERO: \n");
    scanf ("%f", &algarismo3);

    float resultado=algarismo1*algarismo2*algarismo3;
    

    printf ("\n\nResultado:\n\n   %.0f*%.0f*%.0f = %.1f\n\n\n", algarismo1, algarismo2, algarismo3, resultado);



    return 0;

}