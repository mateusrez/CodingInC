#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    system ("cls || clear");
    printf("Calculadora de Farenheit - Celsius\n");

    float celsius = 37.777777;
    float farenheit = celsius * 1.8 + 32;

    printf("\nO valor da temperadtura sera: %.1fF\n", farenheit);
}