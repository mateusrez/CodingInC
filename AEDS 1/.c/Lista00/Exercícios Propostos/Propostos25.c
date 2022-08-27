/*
    25. Faça um programa que receba uma hora (uma variável para hora e outra para minutos), calcule e
    mostre:
        a) a hora digitada convertida em minutos;
        b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
        c) o total dos minutos convertidos em segundos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()

{
    system ("cls || clear");

    int horas;
    int minutos;
    int segundos;

    printf ("DIGITE O HORARIO (HH:MM:SS): \n");
    scanf ("%i:%i:%i", &horas, &minutos, &segundos);
    printf ("\n%i horas : %i minutos : %i segundos \n\n", horas, minutos, segundos);

    int a = horas*3600; // horas ---> segundos
    int b = minutos*60; // minutos ---> segundos
    int c = horas*60; // horas ---> minutos
    
    //operações
    int x = a+b+segundos; //hora + minustos + segundos ---> segundos
    int y = minutos+c; //minutos + hora (minutos)---> minutos


    // a) a hora digitada convertida em minutos;
    printf ("\n a) %i minutos", c);
    
    // b) o total dos minutos, ou seja, os minutos digitados mais a conversão anterior;
    printf ("\n b) %i minutos", y);

    // c) o total dos minutos convertidos em segundos;
    printf ("\n c) %i segundos \n\n\n", b);
    
    
    return 0;
} 