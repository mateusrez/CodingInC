//  Identificar se um ano lido é bissexto ou não. Pesquise o que deve ser observado para verificar se um ano é bissexto.



#include <stdio.h>
#include <stdlib.h>

int main()

{
    system ("cls || clear");

    printf ("CALCULADORA DE ANO BIXESTO\n\n\n");

    int ano;
    printf ("DIGITE O ANO:\n");
    scanf ("%i", &ano);

    if (ano%4==0) //1
    { 
        if (ano%100==0) //2
        {
            if (ano%400==0) //3
            {
                printf ("\nANO BISSEXTO\n\n\n"); //4
            }
            else printf ("\nANO NAO BISSEXTO\n\n\n"); //5
        }
        else printf ("\nANO BISSEXTO\n\n\n"); //4
    }
    else printf ("\nANO NAO BISSEXTO\n\n\n"); //5

    /* 
    if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 ==0) 
    {
      printf("O ano %i é bissexto.", ano);
    }
    else 
    {
      printf("O ano %i não é bissexto.\n", ano);
    }
    */
    
    return 0;
}