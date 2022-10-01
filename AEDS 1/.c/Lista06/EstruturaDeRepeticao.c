/*
    2. Utilizando Estrutura de Repetição com Teste no Final, ler dez valores inteiros. Ao final, o programa deverá informar a quantidade de valores pares e a quantidade de valores ímpares lidos.
    3. Utilizando Estrutura de Repetição com Teste no Final, ler dez valores reais. Ao final, o programa deverá informar a soma dos valores lidos.
    4. Utilizando Estrutura de Repetição com Teste no Final, ler a nota obtida por cada um dos dez alunos de uma turma. Ao final, informar a nota média da turma, o valor da maior nota e o valor da menos nota.
    Pontifícia Universidade Católica de Minas Gerais
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()

{
    system("cls || clear");

    /* Estrutura de repeticao com teste no final
      do{


      }while (booleano);
    */

    /* Estrutura de repeticao com teste no inico
      while (booleano)
      {

      }
    */

    int contador = 0;
    float x;
    float soma = 0;
    int n;
    float maior;
    float menor;
    float par = 0;
    float impar = 0;

    do
    { // Executa  a primeira vez para definir o primeiro valor
        printf("\nDigite a quantidade de valores:\n");
        scanf("%i", &n);

        if (n < 1)
        {
            printf("\nDigite valores validos\n"); // Testa valores validos
        }

    } while (n < 1);

    printf("\nDigite o %io valor: ", contador + 1);
    scanf("%f", &x);

    maior = x;
    menor = x;

    if ((int)x % 2 == 0) // Conta quantos sao os valores PARES
        {
            par += 1; // par ++ || par = par + 1
        }
        else
            impar += 1;

        contador += 1;
        soma += x;

    while (contador < n)
    {
        printf("Digite o %io valor: ", contador + 1);
        scanf("%f", &x);
        if (x > maior) maior = x;
        if (x < menor) menor = x;

        if ((int)x % 2 == 0) // Conta quantos sao os valores PARES
        {
            par += 1; // par ++ || par = par + 1
        }
        else
            impar += 1;

        contador += 1;
        soma += x;
    }

    float media = soma / n;

    printf("\nO valor da soma e: %.1f", soma);
    printf("\nA media dos valores e: %.1f", media);
    printf("\nA quantidade de valores pares e: %.0f", par);
    printf("\nA quantidade de valores impares e: %.0f", impar);
    printf("\nO menor valor e: %.1f", menor);
    printf("\nO maior valor e: %.1f", maior);

    return 0;
}