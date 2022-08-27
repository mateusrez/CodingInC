//Calcular o o peso ideal masculino

#include <stdio.h>
#include <stdlib.h>
    
int main()

{
    system("cls || clear");

    printf ("CALCULADORA DE PESO IDEAL MASCULINO\n");

    //Declaração e atribuição do valor da alura
    float altura;
    printf ("\n\nDIGITE A SUA ALTURA: \n");
    scanf ("%f", &altura);

    float pesoideal = (72.5*altura)-58;
    printf ("\nO SEU PESO IDEAL E IGUAL A: %.3f kg\n", pesoideal);

    
    return 0; 
}
