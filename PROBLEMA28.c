//Escreva um programa utilizando uma função que receba o peso de um peso em quilogramas e o converta para libras.
#include <stdio.h>
#include <stdlib.h>
float conversao(float quilograma);
int main()
{
    float quilo,libra;
    printf("Digite o peso em quilogramas:\n");
    scanf("%f",&quilo);
    libra = conversao(quilo);
    printf("PESO EM LIBRAS: %.2f",libra);
    return 0;
}
float conversao(float quilograma){
    float libra;
    libra = quilograma*2.20462;
    return libra;
}
