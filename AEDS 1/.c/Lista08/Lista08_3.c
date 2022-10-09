#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
	int c=0;
	float x;
	float maior;
	float menor;
	
	maior=x;
	menor=x; 
	

	printf("Maior e menor valor lido \n");
	
	while(c<10){
		printf("\nDigite o valor: ");
		scanf("%f", &x);
		if(x>maior) maior = x;
		if(x<menor) menor = x;
		c++;
	}
    
	printf ("\nMaior: %f", maior);
	printf ("\nMenor: %f", menor);
	
    return 0;

}
