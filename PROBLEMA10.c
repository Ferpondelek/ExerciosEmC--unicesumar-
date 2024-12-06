/*
Faça um programa que informe a quantidade total de calorias a partir da escolha do usuário, que deve informar o prato típico e a bebida.
 A tabela de calorias encontra-se a seguir:


Prato	                |    Bebida
Italiano 750 cal	    |    Chá 30 cal
Japonês 324 cal	        |    Suco de laranja 80 cal
Salvadorenho 545 cal	|    Refrigerante 90 cal
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op,TotalCalorias=0;

    printf("ESCOLHA PRATO\n1 - ITALIANO\n2 - JAPONES\n3 - SALVADORENHO\n");
    scanf("%d",&op);
    switch(op) {
        case 1: TotalCalorias = 750; break;
        case 2: TotalCalorias = 324; break;
        case 3: TotalCalorias = 545; break;
        default: printf("OPCAO NAO ECONTRADA");

    }

    printf("ESCOLHA BEBIDA\n1 - CHA\n2 - SUCO DE LARANJA\n3 - REFRIGERANTE\n");
    scanf("%d",&op);
    switch(op) {
        case 1: TotalCalorias += 30; break;
        case 2: TotalCalorias += 80; break;
        case 3: TotalCalorias += 90; break;
        default: printf("OPCAO NAO ECONTRADA");

    }
    printf("total de calorias : %d",TotalCalorias);

    return 0;
}
