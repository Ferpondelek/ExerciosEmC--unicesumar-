/*O problema consiste em ler um conjunto de n�meros inteiros e contar a
quantidade de n�meros pares e �mpares. A leitura deve ser realizada at�
que seja lido o valor zero.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,par=0,impar=0;
    printf("Digite um numero: \n");
    scanf("%d",&num);
    while(num != 0) {
        if(num % 2 == 0) {
            par++;
        }else {
            impar++;
        }
        printf("Digite um numero: \n");
        scanf("%d",&num);
    }
    printf("Pares= %d \nImpares=%d ",par,impar);
    return 0;
}
