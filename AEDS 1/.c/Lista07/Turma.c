#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()

{
    system("cls || clear");
    printf("PERFIL DA TURMA\n");

    char genero;
    char continuar;
    int nM = 0;
    int nF = 0;
    int somaM = 0;
    int somaF = 0;
    int idadeF;
    int idadeM;
    int mediaM ;
    int mediaF ;
    int menor;

    do
    {

        do
        {
            printf("\nDigite o genero do aluno [M/F]: \n");
            scanf(" %c", &genero);
            genero = toupper(genero);
            if (genero != 'M' && genero != 'F')
            {
                puts("\nValor invalido\n");
            }

        } while (genero != 'M' && genero != 'F');

        switch (genero)
        {
        case 'M':
            printf("\nDigite a idade do aluno M: \n");
            scanf(" %i", &idadeM);
            nM += 1;
            somaM = somaM + idadeM;
            if (idadeM < menor)
            {
                menor = idadeM;
            }
            break;

        case 'F':
            printf("\nDigite a idade do aluno F: \n");
            scanf(" %i", &idadeF);
            nF += 1;
            somaF = somaF + idadeF;
            if (idadeF < menor)
            {
                menor = idadeF;
            }
            break;

        default:
            break;
        }

        do
        {
            printf("\nDeseja testar mais alunos [S/N]? \n");
            scanf(" %c", &continuar);
            continuar = toupper (continuar);
            if (continuar != 'S' && continuar != 'N')
            {
                puts("\nValor invalido\n");
            }

        } while (continuar != 'S' && continuar != 'N');

    } while (continuar == 'S');

    mediaM = (float)somaM / nM;
    mediaF = (float)somaF / nF;
    
    printf("\nIdade media masculina: %i", mediaM);
    printf("\nIdade media feminina: %i", mediaF);
    printf("\nMenor idade da turma: %i", menor);

    return 0;
}
