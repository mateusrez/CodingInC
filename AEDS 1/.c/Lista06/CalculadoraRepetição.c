/*  
    1.  Utilizando Estrutura de Repetição com Teste no Final, construa uma nova versão para o 
        programa da Calculadora. Nela, insira uma nova opção no menu que permita ao usuário sair do 
        programa: 

            0 – Sair 
            1 – Adição 
            2 – Subtração 
            3 – Multiplicação 
            4 – Divisão 

        Ao solicitar a opção do usuário, consista o valor lido: rejeite o fornecimento de um valor fora do 
        domínio 0..4. 
        Lembre-se: após a leitura da operação, deverão ser lidos os dois operandos, realizado o cálculo e 
        escrito o resultado. 
        Após a apresentação do resultado, o menu deverá ser reapresentado ao usuário. Este processo 
        deverá se repetir enquanto não for fornecido o valor zero em resposta à opção do menu. 
*/


#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("cls || clear");

    bool flag = true;
    float resultado;
    int operacao;
    float a, b;

    while (flag)
    {
        printf("\nCALCULADORA\n");
        printf("\n 0: Sair\n 1: Adição\n 2: Subtração\n 3: Multiplicação\n 4: Divisão\n");

        printf("\nDigite a operacao desejada:");
        scanf("%i", &operacao);
        if (operacao == 0)
        {
            break;
        }
        else if (operacao > 4 || operacao < 0)
        {
            printf("\nValor invalido\n");
        }
        else
        {
            printf("\nDigite o primeiro operador:");
            scanf("%f", &a);

            printf("\nDigite o primeiro operador:");
            scanf("%f", &b);

            switch (operacao)
            {
            case 1:
                resultado = a + b;
                break;
            case 2:
                resultado = a - b;
                break;
            case 3:
                resultado = a * b;
                break;
            case 4:
                resultado = a / b;
                break;

            default:
                puts("\nValor invalido\n");
                break;
            }

            char repetir;

            printf("\nO resultado da operação: %.1f\n\n\n", resultado);
        }
    }

    return 0;
}