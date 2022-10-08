#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    system("cls || clear");
    printf("PERFIL TURMA\n");

    int c = 0;
    float nota;
    float medianota;
    float somanota;
    float maior;
    bool erro = false;

    do
    {
        do
        { // Definir a nota de cada aluno
            printf("\nDigite a nota [0...100]:\n");
            scanf("%f", &nota);
            erro = false;
            if (nota = -1) erro = false;
            else if (nota < 0 || nota > 100)
            {
                puts("\nValor invalido\n");
                erro = true;
            }
        } while (erro);

        for (c = 1; nota = -1; c++)
        {
            do
            { // Definir a nota de cada aluno
                printf("\nDigite a nota [0...100]:\n");
                scanf("%f", &nota);
                erro = false;
                if (nota == -1) erro = false;
                else if (nota < 0 || nota > 100)
                {
                    puts("\nValor invalido\n");
                    erro = true;
                }
                if (nota > maior) maior = nota;    
            } while (erro);
        }

        c++;
        maior = nota;
        somanota += nota;

    } while (nota != -1);

    medianota = somanota / c;
    printf("A maior nota registrada foi: %f \n A media das notas foi: %f", maior, medianota);

    return 0;
}
