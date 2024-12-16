//Escreva um programa utilizando uma função que converta dada temperatura lida de Celsius para Fahrenheit.
#include <stdio.h>
#include <stdlib.h>
float ConversaoFahr(float celsius);
int main()
{
    float celsius,resposta;
    printf("Informe a temperatura em Celsius:\n");
    scanf("%f",&celsius);
    resposta = ConversaoFahr(celsius);
    printf("TEMPERATURA EM FAHRENHEIT: %.2f\n",resposta);
    return 0;
}
float ConversaoFahr(float celsius) {
    float fahr;
    fahr = celsius*1.8+32;
    return fahr;
}
