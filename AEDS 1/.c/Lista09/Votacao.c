#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    system("cls || clear");

    int voto = 0;
    bool erro;
    int chapa1 = 0, chapa2 = 0, nulo = 0;
    float porc1, porc2, porcnulo;
    int vencedor;
    int c = 1;

    printf("\nELEICAO PARA DIRETORIA");
    printf("\n0 - Sair do Programa \n1 - Chapa 1 \n2 - Chapa 2 \n3 - Voto em branco/nulo\n");

    do // Registro de guerra
    {
        printf("\nDigite o seu voto:");
        scanf("%i", &voto);
        if (voto != 0 && voto != 1 && voto != 2 && voto != 3) // Testa valores validos
        {
            erro = true;
            puts("\nValor invalido");
        }
    } while (erro);

    switch (voto)
    {
    case 1:
        chapa1++;
        break;

    case 2:
        chapa2++;
        break;

    case 3:
        nulo++;
        break;

    default:
        break;
    }

    while (voto != 0)
    {
        do // Registra o voto
        {
            printf("\nDigite o seu vovo:");
            scanf("%i", &voto);
            erro = false;
            if (voto != 0 && voto != 1 && voto != 2 && voto != 3) // Testa valores validos
            {
                erro = true;
                puts("\nValor invalido");
            }
        } while (erro);

        switch (voto)
        {
        case 1:
            chapa1++;
            break;

        case 2:
            chapa2++;
            break;

        case 3:
            nulo++;
            break;

        default:
            break;
        }
        c++;
    }

    if (chapa1 > chapa2)
    {
        printf("\n\nVENCEDOR: Chapa 1\n");
    }

    if (chapa1 < chapa2)
    {
        printf("\n\nVENCEDOR: Chapa 2\n");
    }

    if (chapa1 == chapa2)
    {
        printf("\n\nVENCEDOR: Empate\n");
    }

    porc1 = ((float)chapa1 / c) * 100;
    porc2 = ((float)chapa2 / c) * 100;
    porcnulo = ((float)nulo / c) * 100;

    printf("\nVotos para Chapa 1: %i\n Porcentagem: %.1f\n\n", chapa1, porc1);
    printf("\nVotos para Chapa 2: %i\n Porcentagem: %.1f\n\n", chapa2, porc2);
    printf("\nVotos nulos/brancos: %i\n Porcentagem: %.1f\n\n\n", nulo, porcnulo);

    puts("\n\n\n");

    return 0;
}
