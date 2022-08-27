/* O programa abaixo calcula o peso ideal de um indivíduo. Modifique-o, perguntando ao usuário, ao final do programa, se ele deseja realizar um novo cálculo [s/n] ou sair do programa. 
 
        #include <stdio.h>
        #include <stdlib.h>

        int main()

        {
            system ("cls || clear");

            printf ("CALCULADORA DE PESO IDEAL");

            char sexo;
            printf ("\nDIGITE O SEU SEXO (M ou F):\n");
            scanf (" %c", &sexo);

            float altura;
            printf ("\nDIGITE A SUA ALTURA (m):\n");
            scanf ("%f", &altura);

            float pesoidealM= (72.5*altura)-58;
            float pesoidealF = (62.1*altura)-44.7;


            if (sexo=='M')
            {
            printf ("\nO SEU PESO IDEAL E IGUAL A: %.3f kg\n\n\n", pesoidealM);
            }
            else if (sexo=='F')
            {
            printf ("\nO SEU PESO IDEAL E IGUAL A: %.3f kg\n\n\n", pesoidealF);
            }


            return 0;
        }
*/