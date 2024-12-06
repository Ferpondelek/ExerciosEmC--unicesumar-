//Elabore um programa que calcule a área de um trapézio.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base1,base2,altura,area;
    printf("Digite a base 1, base 2 e altura\n");
    scanf("%f %f %f",&base1,&base2,&altura);
    altura = ((base1+base2)*altura)/2;
    printf("Area = %.2f",altura);
    return 0;
}
