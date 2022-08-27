#include <stdio.h>
#include <stdlib.h>

int main()

{
    system("cls||clear");

    printf("\n VERIFICAR APROVACAO");

    float nota;

    printf ("\n\n\nDIGITE A NOTA:\n");
    scanf("%f", &nota);

    if(nota >=60)
    {puts("\n APROVADO\n\n\n5");}

    else
    {puts("\n REPROVADO\n\n\n");}


    return 0;
}
