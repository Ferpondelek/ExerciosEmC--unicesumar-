//Fa�a um programa que leia um n�mero e informe se ele � divis�vel por cinco.
#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("digite um numero\n");
    scanf("%d",&num);
    if(num%5==0) {
        printf("O numero %d, e divisivel por 5",num);
    }
    return 0;
}
