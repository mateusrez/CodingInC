/*
    2. Calcular e escrever os n primeiros termos da sequência abaixo, sendo n um valor lido: \

        1/100, 97/2, 3/94, 91/4, 5/88, ... 
*/


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    system("cls || clear");

    int n;
    bool erro;
    do
    {
        printf("\nQuantidade de termos: ");
        scanf("%i", &n);
        erro = n<1;
        if(erro) puts("\nValor invalido");

    } while (erro);

    for (int i=1, d=100; i <= n; i++, d-=3)
    {
        if (i % 2 == 1)
        {
            printf("%i/%i, ", i, d);
        }
        else printf("%i/%i, ", d, i);
    }
    
    


    return 0;
}