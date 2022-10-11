/* 
1. Calcular e escreve o valor de H, sendo H igual a: 
  H = 1/100 + 1/97 + 1/94 + 1/91 + ... 

    A precisão de H (o número de termos) deverá ser um valor lido. 

    Obs: não se esqueça que o operador de divisão em C é sobrecarregado: divisão inteira e divisão 
    real – a operação é definida em termos do tipo dos dois operandos. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    system("cls || clear");

    float H;
    float x;
    int a = 1;
    int b = 100;
    int c = 0;

    printf("\nVALOR DE H");

    x = (float)a/b;
    H = x;

    while (b >= 1)
    {   
        printf("\nH = %i / %i = %.7f", a, b, x);
        x = (float)a/b;
        b-=3;
        H += x;
    }

    printf("\nH = %.5f", H);



    return 0;
}