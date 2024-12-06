/*Elabore um programa que receba o nome e a idade de uma pessoa e informe o nome, a idade e o valor da mensalidade do plano de saúde.
A tabela a seguir apresenta os valores de mensalidade:

Até 18 anos	R$ 50,00
De 19 a 29 anos	R$ 70,00
De 30 a 45 anos	R$ 90,00
De 46 a 65 anos	R$ 130,00
Acima de 65 anos	R$ 170,00*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[60];
    int idade;
    float ValorMensalidade;

    printf("Insira seu nome!\n");
    scanf("%s",&nome);
    printf("Insira sua idade!\n");
    scanf("%d",&idade);

    if(idade<=18) {
        ValorMensalidade = 50.00;
    }else if(idade>=19&&idade<=29) {
        ValorMensalidade = 70.00;
    }else if(idade>=30&&idade<=45) {
        ValorMensalidade = 130.00;
    }else if(idade>65) {
        ValorMensalidade = 170.00;
    }
    printf("%.2f",ValorMensalidade);
    return 0;
}
