/*
4. Construa um programa que permita identificar o perfil da turma:
    - Percentual de homens e de mulheres.
    - Percentual de alunos maiores em idade.
    - Idade da pessoa mais velha.
    - Idade da pessoa mais nova.

    Domínio dos dados:
    Gênero: m/f, sendo ‘m’=masculino e ‘f’=feminino.
    Idade: 0 .. 90
    * Deverão ser rejeitados os valores lidos fora do domínio
    * O número de alunos da turma deverá ser um valor lido


    5. Construa uma versão para a questão anterior em que a finalização do programa não seja definida
    pelo número de alunos da turma. Ao contrário,  a finalização deverá ocorrer estendendo o
    domínio do gênero. Flag para finalização do programa: gênero igual a ‘s’ (sair do programa).
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    system("cls || clear");

    char sexo;
    int mulher = 0;
    int homem = 0;
    int idade;
    int maioridade = 0;
    float porcH, porcM, porcMI;
    int maior;
    int menor;
    int c = 1;
    bool erro;

    printf("\nPERFIL DA TURMA");

    do // Registro de guerra
    {
        printf("\nDigite o sexo [M/F ou S para sair]:"); // Registra o sexo
        scanf(" %c", &sexo);
        sexo = toupper(sexo);
        erro = false;
        if (sexo != 'M' && sexo != 'F' && sexo != 'S') // Testa valores validos
        {
            erro = true;
            puts("\nValor invalido");
        }
    } while (erro);

    switch (sexo) // Registra a quantidade
    {
    case 'M':
        homem++;
        break;

    case 'F':
        mulher++;
        break;

    default:
        break;
    }

    do // Registra a idade
    {
        printf("\nDigite a idade [0 ... 90]:");
        scanf("%i", &idade);
        erro = false;
        if (idade < 0 && idade > 90) // Testa valores validos
        {
            erro = true;
            puts("\nValor invalido");
        }
    } while (erro);

    maior = idade;
    menor = idade;

    while (sexo != 'S')
    {
        do // Registra a idade
        {
            printf("\nDigite o sexo [M/F ou S para sair]:"); // Registra o sexo
            scanf(" %c", &sexo);
            sexo = toupper(sexo);
            erro = false;
            if (sexo != 'M' && sexo != 'F' && sexo != 'S') // Testa valores validos
            {
                erro = true;
                puts("\nValor invalido");
            }
        } while (erro);

        switch (sexo)
        {
        case 'M':
            homem++;
            break;

        case 'F':
            mulher++;
            break;

        default:
            break;
        }

        if (sexo != 'S')
        {
            do // Registra a idade
            {
                printf("\nDigite a idade [0 ... 90]:");
                scanf("%i", &idade);
                erro = false;
                if (idade < 0 && idade > 90) // Testa valores validos
                {
                    erro = true;
                    puts("\nValor invalido");
                }
            } while (erro);
        }

        c++; // Contador
        if (idade > maior) maior = idade;
        if (idade < menor) menor = idade;
        if (idade >= 18) maioridade++;
        
    }

    // Calcula resultados
    porcH = ((float)homem / c) * 100;
    porcM = ((float)mulher / c) * 100;
    porcMI = ((float)maioridade / c) * 100;

    // Escreve resultados
    printf("\n\nPorcentagem de homens: %.1f", porcH);
    printf("\nPorcentagem de mulheres: %.1f", porcM);
    printf("\nPorcentagem de maiores em idade: %.1f", porcMI);
    printf("\n\nPessoa mais velha: %i anos", maior);
    printf("\nPessoa mais nova: %i anos", menor);

    puts("\n\n\n");

    return 0;
}