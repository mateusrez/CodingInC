#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
	int c=0;
	float x;
	float soma;
	float media;

	printf("Soma e media de 10 valores \n");
	
	while(c<10){
		printf("\n Digite o valor ");
		scanf("%f", &x);
		soma += x;
		c++;
	}
	
	media = soma/c;
	
	printf ("\n Soma: %f", soma);
	printf ("\n Meia: %f", media);


    
    return 0;

}
