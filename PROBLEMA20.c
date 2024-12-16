/*Escreva um programa que leia um vetor com 10 elementos inteiros e escreva-os em ordem contrária à da leitura.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,vetor[10];
    printf("Digite 10 numeros \n");
    for(i=0;i<10;i++) {

        scanf("%d",&vetor[i]);
    }
    for(i=9;i>=0;i--) {
        printf("%d ",vetor[i]);
    }

    return 0;
}
