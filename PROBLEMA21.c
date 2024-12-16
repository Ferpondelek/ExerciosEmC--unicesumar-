/*Faça um programa que leia dois vetores A e B, com 5 números inteiros.
Efetue a soma dos dois vetores em um vetor C e imprima o vetor C em ordem crescente.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int menor,i,j,vetorA[5],vetorB[5],vetorC[5];
    printf("Insira os numeros do vetor A \n");
    for(i=0;i<5;i++) {
        scanf("%d",&vetorA[i]);
    }
    printf("Insira os numeros do vetor B \n");
    for(i=0;i<5;i++) {
        scanf("%d",&vetorB[i]);
    }
    printf("Somando os dois vetores...\n");
    for(i=0;i<5;i++) {
        vetorC[i]=vetorA[i]+vetorB[i];
    }
    printf("colocando em ordem crescente...\n");
    for(i=0;i<5;i++) {
        for(j=i+1;j<5;j++) {
            if(vetorC[i]>vetorC[j]) {
                menor=vetorC[j];
                vetorC[j]=vetorC[i];
                vetorC[i]=menor;
            }
        }
    }
    for(i=0;i<5;i++) {
        printf("%d ",vetorC[i]);
    }
    return 0;
}
