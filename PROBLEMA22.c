//Faça um programa que leia um nome e apresente as letras que se encontram nas posições pares.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[30];
    int i,tam;
    printf("Digite um nome!\n");
    scanf("%s",nome);
    tam = strlen(nome);
    for(i=0;i<tam-1;i++) {
        if(i%2==0) {
            printf("%c ",nome[i]);
        }
    }
    return 0;
}
