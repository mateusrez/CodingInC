/*  3.21    Desenvolva um programa em C que determine o pagamento bruto de cada um de vários
                    empregados. A companhia paga o valor de uma "hora normal" pelas primeiras 40 horas
                    trabalhadas de cada empregado e paga o valor de uma "hora extra" (uma vez e meia a hora
                    normal) para cada hora trabalhada depois de completadas as primeiras 40 horas. Você recebeu
                    uma lista de empregados da companhia, o número de horas que cada empregado trabalhou
                    durante a semana passada e o valor da "hora normal" de cada empregado. Seu programa deve
                    receber essas informações de cada empregado além de determinar e exibir o pagamento bruto
                    do empregado.

                    Entre com o numero de horas trabalhadas (-1 para finalizar): 39
                    Entre com o valor da hora normal do trabalhador C$00.00): 10.00
                    Salário: $390.00

                    Entre com o numero de horas trabalhadas (-1 para finalizar): 40
                    Entre com o valor da hora normal do trabalhador ($00.00): 10.00
                    Salário: $400.00

                    Entre com o numero de horas trabalhadas (-1 para finalizar): 41
                    Entre com o valor da hora normal do trabalhador ($00.00): 10.00
                    Salário: 415.00

                    Entre com o numero de horas trabalhadas (-1 para finalizar): -1
*/


#include <stdio.h>
#include <stdlib.h>

int main()

{
    system ("cls || clear");

    printf ("CALCULADORA DE SALARIO");

    float horas;
    printf ("\n\nDigite as horas trabalhadas:\n");
    scanf ("%f", &horas);

    float horasextra;

    float salario;

    if (horas<=40)
    {
        salario=(horas*100)/40; // Regra de 3
    }
    else 
    {
        horasextra = horas-40;
        float extra = horasextra * 1.5;
        salario = ((40+extra)*100)/40; // Regra de 3
    }

   


    printf ("\n\nPORCENTAGEM DO SALARIO A SER RECEBIDO SERA: %.1f %%\n\n\n", salario);



    return 0;
}