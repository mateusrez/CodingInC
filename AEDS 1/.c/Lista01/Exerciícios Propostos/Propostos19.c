/*
	19. Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2, deve-se usar 18 W
   de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule e mostre
	a sua área (em m2) e a potência de iluminação que deverá ser utilizada.
*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
	system("cls || clear");

	printf("CALCULA E MOSTRA O SALARIO A RECEBER");

	float largura;
	printf("DIGITE A LARGURA (m):\n");
	scanf("%f", &largura);

	float comprimento;
	printf("\nDIGITE O COMPRIMENTO (m):\n");
	scanf("%f", &comprimento);

	float area = largura * comprimento;
	printf("\n\nAREA = %.1f m^2", area);

	float potencia = area * 18;
	printf("\nA POTENCIA DEVERA SER: %.1fW\n\n\n", potencia);

	return 0;
}