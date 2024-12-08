//Construa um programa que receba um número inteiro maior que um e verifique se ele é primo.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,primo=0;
    do {
        printf("Digite um num maior que 1\n");
        scanf("%d",&num);
    }while(num<=1);
    for(i=1;i<=num;i++) {
        if(num%i==0){
            primo++;
        }
    }
    if(primo==2) {
        printf("numero %d e primo ",num);
    }else {
       printf("numero %d nao e primo ",num);
    }


    return 0;
}
