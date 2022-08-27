//Calcular o o peso ideal feminino

#include <stdio.h>
#include <stdlib.h>
    
int main()

{
    system("cls || clear");

    printf ("CALCULADORA DE PESO IDEAL FEMININO\n");

    float altura;
    printf ("\n\nDIGITE A SUA ALTURA: \n");
    scanf ("%f", &altura);

    float pesoideal = (62.1*altura)-44.7;
    printf ("\nO SEU PESO IDEAL E IGUAL A: %.3f kg\n", pesoideal);

    
    return 0; 
}
