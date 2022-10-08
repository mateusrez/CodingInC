#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()

{
    system("cls || clear");

    printf("TIME PREFERIDO\n");

    // Declarar variaveis
    int alunos;
    int cont = 0;
    int A = 0;
    int C = 0;
    int O = 0;
    char time;
    char continuar;
    char genero;
    bool erro = 0;

    do
    {
        do // Definir o tamanho da turma
        {
            printf("\nDigite o tamanho da tumrma: [0...70] \n");
            scanf("%i", &alunos);
            erro = false;
            if (alunos < 1 || alunos > 70)
            {
                puts("\nValor invalido\n");
                erro = true;
            }

        } while (erro);

        do // Definir o time
        {
            printf("\nDigite o time: Digite o time [A / C / O] \n A: Atletico\n C: Cruzeiro\n O: Outros\n");
            scanf(" %c", &time);
            time = toupper(time);
            erro = false;
            if (time != 'A' && time != 'C' && time != 'O')
            {
                puts("\nValor invalido\n");
                erro = true;
            }

        } while (erro);

        switch (time)
        {
        case 'A':
            A++;
            break;

        case 'C':
            C++;
            break;

        case 'O':
            O++;
            break;
        }

        for (cont = 1; cont < alunos; cont++) // Repetir ate completar todos os alunos
        {

            do // Definir o time
            {
                printf("\nDigite o time [A / C / O]: \n");
                scanf(" %c", &time);
                time = toupper(time);
                erro = false;
                if (time != 'A' && time != 'C' && time != 'O')
                {
                    puts("\nValor invalido\n");
                    erro = true;
                }

            } while (erro);

            switch (time)
            {
            case 'A':
                A++;
                printf("%i", A);
                break;

            case 'C':
                C++;
                printf("%i", C);
                break;

            case 'O':
                O++;
                printf("%i", O);
                break;
            

            }
        }

        cont++; // Ajustar valor do c

        float porcA = ((float)A / cont) * 100;
        float porcC = ((float)C / cont) * 100;
        float porcO = ((float)O / cont) * 100;

        printf("\nA porcentagem de alunos atleticanos: %.1f", porcA);
        printf("\nA porcentagem de alunos cruzeirensse: %.1f", porcC);
        printf("\nA porcentagem de alunos que torcem para outros: %.1f", porcO);

        do // Repete
        {
            printf("\nTestar novamente? [S/N]\n");
            scanf(" %c", &continuar);
            continuar = toupper(continuar);
            erro = false;
            if (continuar != 'S' && continuar != 'N')
            {
                puts("\nValor invalido\n");
                erro = true;
            }

        } while (erro);

    } while (continuar == 'S');

    return 0;
}
