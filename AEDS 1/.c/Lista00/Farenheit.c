//A representação em Fahrenheit da temperatura igual a 37,777°C

#include <stdio.h>
#include <stdlib.h>

int main()

{
    system("cls || clear");

    float celcius;
    printf ("DIGITE A TEMPERATURA EM CELCIUS:\n");
    scanf("%f", &celcius);

    float fahrenheit = celcius*1.8+32;

    printf("\n\nPARA A TEMPERATURA DE %.1f CELCIUS\n", celcius);
    printf("A TEMPERATURA EM FAHRENHEIT SERA: %.1f", fahrenheit);
    
}