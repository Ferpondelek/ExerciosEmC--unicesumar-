//Escreva um programa que receba dois n�meros, calcule e apresente o resultado do primeiro n�mero elevado ao segundo.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,total;
    printf("Digite dois numeros\n");
    scanf("%f %f",&a,&b);
    total = pow(a,b);
    printf("%.2f",total);
    return 0;
}
