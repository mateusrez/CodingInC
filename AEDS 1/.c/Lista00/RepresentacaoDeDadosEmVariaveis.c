//Inserindo blibliotecas


#include<stdio.h>
#include<stdlib.h>

int main() //Funcão principal

{ 
    system("cls");
    printf ("CALCULADORA DE AREA\n");

    //Declaração e atribuição do valor da base do retângulo
    float base;
    printf ("\nDIGITE A BASE:\n");
    scanf("%f", &base);

    // Declaração e atribuição do valor da altura do retângulo
    float altura;
    printf ("\nDIGITE A ALTURA\n");
    scanf("%f", &altura);

    // Declaração, atribuição e cálculo da área do retângulo
    float area = base * altura;

    // Escrita na tela da área do retângulo
    printf("\nRETANGULO DE BASE IGUAL A: %.1f", base);
    printf("\nALTURA IGUAL A %.1f", altura);
    printf("\nTEM A AREA IGUAL A %.1f\n", area);

    return 0;

}