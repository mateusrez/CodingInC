#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

// Proposito das funções
void apresentacao(); // Assinatura da função

int main()
{
  for (int c = 0; c < 10; c++)
  {
    apresentacao();
  }
  
  return 0;
}

void apresentacao()
{
  printf("Hello World\n");
  
  // return; // Não é necessário
}
