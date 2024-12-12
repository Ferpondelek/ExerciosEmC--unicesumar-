//Faça um programa que leia uma palavra e a imprima quantas vezes forem o número de caracteres.
#include <stdio.h>
#include <stdlib.h>


int main()
{
    char palavra[20];
    int i,tam;
    printf("Digite uma palavra!\n");
    gets(palavra);
    tam = strlen(palavra);
    for(i=0;i<tam;i++) {
        printf("%s\n",palavra);
    }
    return 0;
}
