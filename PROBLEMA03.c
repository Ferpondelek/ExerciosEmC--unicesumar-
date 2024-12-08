/*Faça um programa que receba o valor de um depósito e o valor da taxa de juros,
 calcule e apresente o valor do rendimento e o valor total (valor do depósito + valor do rendimento). */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ValorDeposito,TaxaJuros,ValorRendimento,ValorTotal;
    printf("Insira o valor do deposito: \n");
    scanf("%f",&ValorDeposito);
    printf("Insira o valor da taxa de juros: \n");
    scanf("%f",&TaxaJuros);
    ValorRendimento = ValorDeposito/TaxaJuros;
    ValorTotal = ValorRendimento+ValorDeposito;
    printf("Valor do rendimento : %.2f\nValor Total : %.2f",ValorRendimento,ValorTotal);
    return 0;
}
