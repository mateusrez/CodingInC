/*
    21. Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número 
    de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir:
    
    a) a hora trabalhada vale 1/8 do salário mínimo;
    b) a hora extra vale 1/4 do salário mínimo;
    c) o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
    d) a quantia a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor
    da hora extra;
    e) o salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras.
*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
    system ("cls || clear");
    
    printf("CALCULA E MOSTRA O SALARIO A RECEBER");

    float minimo = 1212;
    
    float t;
    printf ("\nDIGITE A QUANTIDADE DE HORAS TRABALHADAS:\n");
    scanf ("%f", &t);
    float hora = t*minimo/8;

    float e;
    printf ("\nDIGITE A QUANTIDADE DE HORAS EXTRAS TRABALHADAS:\n");
    scanf ("%f", &e);
    float extra = e*minimo/4;
    

    float salario = hora+extra;
    printf ("\n\n\nA RECEBER: $%.2f\n\n\n", salario);



    return 0;
}