/*Construa um programa que leia uma palavra e a escreva de trás para frente.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[30];
    int i,tam;
    printf("Digite uma palavra\n");
    gets(palavra);
    tam = strlen(palavra);
    for(i=tam-1;i>=0;i--) {
        printf("%c ",palavra[i]);
    }

    return 0;
}
