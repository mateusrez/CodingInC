//  5.  Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que este sofreu um desconto de 10%.


#include <stdio.h>
#include <stdlib.h>

int main()

{
    system ("cls || clear");

    printf ("CALCULADORA DE DESCONTO:\n");


    float produto;
    printf ("\n DIGITE O VALOR DO PRODUTO: \n");
    scanf ("%f", &produto);

    float desconto;
    printf ("\n\n DIGITE O DESCONTO (%%):\n");
    scanf ("%f", &desconto);

    float valor=produto*(1-(0.01*desconto));
    printf (" PRECO: \n\n$%.2f \n\n\n", valor);




    return 0;
}
