//Calculando a área de um círculo de raio igual a 1

#include <stdio.h>
#include <stdlib.h>

int main()

{
    system("cls || clear");

    float raio;
    printf ("DIGITE A O RAIO DO CIRUCLO:\n");
    scanf ("%f", &raio );

    float area = (raio*raio)*3.141592;

    printf ("UM CIRUCLO DE RAIO: %.3f\n", raio);
    printf ("\nTEM AREA IGUAL A:%.18f\n\n\n", area);

    return 0;
}
