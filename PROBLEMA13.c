//Fa�a um programa que leia um n�mero inteiro e calcule o seu fatorial.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,fatorial,i;
    fatorial=1;

    printf("Digite um numero\n");
    scanf("%d",&num);

    for(i=1;i<=num;i++) {
        fatorial *= i;
    }
    printf("fatorial : %d ",fatorial);

    return 0;
}
