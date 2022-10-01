#include <stdio.h>
#include <stdlib.h>>

int main() 
{
  system ("cls || clear");

  printf ("CALDULADORA COM MENU");

  float operacao;
  printf("Digite a operacao desejada:\n 0: Sair\n 1:Adicao\n 2:Subitracao\n 3:Multiplicacao\n 4:Divisao\n";
  scanf("%f", &operacao);
  
  float a, b;
  printf("Digite o valor do operando A:\n");
  scanf("%f", &a);
  printf("Digite o valor do operando B:\n");
  scanf("%f", &b);
  
  float adicao = a+b;
  float subitracao = a-b;
  float multiplicacao = a*b;
  float divisao = a/b;

  do{if (operacao=1){
      printf("%f", adicao);
  }
   else if (operacao=2){
      printf("%f", subitracao); 
     }
    else if (operacao=3){
      printf("%f", multiplicacao);
  }
   else if (operacao=4){
      printf("%f", divisao); 
     }
    
  }while(operação != 0);
  return 0;
}