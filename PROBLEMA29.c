//Faça uma função que receba, como parâmetro, um vetor com dez números inteiros e retorne-os ordenados em forma crescente.
#include <stdio.h>
#include <stdlib.h>
void Crescente(int vet[10]);
int main()
{
    int vetor[10],i;
    printf("DIGITE 10 NUMEROS INTEIROS!\n");
    for(i=0;i<10;i++) {
        scanf("%d",&vetor[i]);
    }
    printf("RETORNANDO NUMEROS INTEIROS!\n");
    Crescente(vetor);

    return 0;
}
void Crescente(int vet[10]) {
    int temp,i,j;
    for(i=0;i<9;i++) {
        for(j=i+1;j<10;j++) {
            if(vet[i]>vet[j]) {
                temp=vet[i];
                vet[i]=vet[j];
                vet[j]=temp;
            }
        }
    }
     for(i=0;i<10;i++) {
        printf("%d ",vet[i]);
    }
    return vet[10];

}
