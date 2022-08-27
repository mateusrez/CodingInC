#include <stdio.h>
#include <stdlib.h>

int main()

{
    system ("cls || clear");

    printf ("\n VERFICAR MAIOR");

    float algarismo1;
    printf ("\n\n DIGITE O PRIMEIRO NUMERO:\n");
    scanf("%f", &algarismo1);

    float algarismo2;
    printf("\n\n DIGITE O SEGUNDO NUMERO:\n");
    scanf ("%f", &algarismo2);

    if (algarismo1==algarismo2)
    printf("\n\n%.1f = %.1f", algarismo1, algarismo1);

    else
    {
        if (algarismo1 > algarismo2) printf("\n\n%.1f > %.1f", algarismo1, algarismo2);

        else printf("\n\n%.1f > %.1f\n\n\n", algarismo2, algarismo1);
    }


    return 0;
}
